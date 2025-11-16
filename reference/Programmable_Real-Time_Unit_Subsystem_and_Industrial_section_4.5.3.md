<!-- image -->

## 4.5.2.64 CT\_REG31 Register (offset = FCh) [reset = 0h]

CT\_REG31 is shown in Figure 4-128 and described in Table 4-114.

DEBUG PRU CONSTANTS TABLE ENTRY 31. This register allows an external agent to debug the PRU while it is disabled. Since some of the constants table entries may actually depend on system inputs / and or the internal state of the PRU, these registers are provided to allow an external agent to easily determine the state of the constants table.

## Figure 4-128. CT\_REG31 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 CT_REG31   |
|------|---------------------------------------------------------------------------------------------|
|      | R-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-114. CT\_REG31 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CT_REG31 | R      | 0h      | PRU Internal Constants Table Entry n: Reading this field directly inspects the corresponding entry in the PRU internal constants table. This entry is partially programmable through the C31_POINTER in the PRU Control register. The reset value for this Constant Table Entry is 0x80nnnn00, nnnn=C31_POINTER[15:0]. |

## 4.5.3 PRU\_ICSS\_INTC Registers

Table 4-115 lists the memory-mapped registers for the PRU\_ICSS\_INTC. All register offset addresses not listed in Table 4-115 should be considered as reserved locations and the register contents should not be modified.

## Table 4-115. PRU\_ICSS\_INTC Registers

| Offset   | Acronym   | Register Name   | Section          |
|----------|-----------|-----------------|------------------|
| 0h       | REVID     |                 | Section 4.5.3.1  |
| 4h       | CR        |                 | Section 4.5.3.2  |
| 10h      | GER       |                 | Section 4.5.3.3  |
| 1Ch      | GNLR      |                 | Section 4.5.3.4  |
| 20h      | SISR      |                 | Section 4.5.3.5  |
| 24h      | SICR      |                 | Section 4.5.3.6  |
| 28h      | EISR      |                 | Section 4.5.3.7  |
| 2Ch      | EICR      |                 | Section 4.5.3.8  |
| 34h      | HIEISR    |                 | Section 4.5.3.9  |
| 38h      | HIDISR    |                 | Section 4.5.3.10 |
| 80h      | GPIR      |                 | Section 4.5.3.11 |
| 200h     | SRSR0     |                 | Section 4.5.3.12 |
| 204h     | SRSR1     |                 | Section 4.5.3.13 |
| 280h     | SECR0     |                 | Section 4.5.3.14 |
| 284h     | SECR1     |                 | Section 4.5.3.15 |
| 300h     | ESR0      |                 | Section 4.5.3.16 |
| 304h     | ESR1      |                 | Section 4.5.3.17 |
| 380h     | ECR0      |                 | Section 4.5.3.18 |
| 384h     | ECR1      |                 | Section 4.5.3.19 |
| 400h     | CMR0      |                 | Section 4.5.3.20 |
| 404h     | CMR1      |                 | Section 4.5.3.21 |
| 408h     | CMR2      |                 | Section 4.5.3.22 |

## Table 4-115. PRU\_ICSS\_INTC Registers (continued)

| Offset   | Acronym   | Register Name   | Section          |
|----------|-----------|-----------------|------------------|
| 40Ch     | CMR3      |                 | Section 4.5.3.23 |
| 410h     | CMR4      |                 | Section 4.5.3.24 |
| 414h     | CMR5      |                 | Section 4.5.3.25 |
| 418h     | CMR6      |                 | Section 4.5.3.26 |
| 41Ch     | CMR7      |                 | Section 4.5.3.27 |
| 420h     | CMR8      |                 | Section 4.5.3.28 |
| 424h     | CMR9      |                 | Section 4.5.3.29 |
| 428h     | CMR10     |                 | Section 4.5.3.30 |
| 42Ch     | CMR11     |                 | Section 4.5.3.31 |
| 430h     | CMR12     |                 | Section 4.5.3.32 |
| 434h     | CMR13     |                 | Section 4.5.3.33 |
| 438h     | CMR14     |                 | Section 4.5.3.34 |
| 43Ch     | CMR15     |                 | Section 4.5.3.35 |
| 800h     | HMR0      |                 | Section 4.5.3.36 |
| 804h     | HMR1      |                 | Section 4.5.3.37 |
| 808h     | HMR2      |                 | Section 4.5.3.38 |
| 900h     | HIPIR0    |                 | Section 4.5.3.39 |
| 904h     | HIPIR1    |                 | Section 4.5.3.40 |
| 908h     | HIPIR2    |                 | Section 4.5.3.41 |
| 90Ch     | HIPIR3    |                 | Section 4.5.3.42 |
| 910h     | HIPIR4    |                 | Section 4.5.3.43 |
| 914h     | HIPIR5    |                 | Section 4.5.3.44 |
| 918h     | HIPIR6    |                 | Section 4.5.3.45 |
| 91Ch     | HIPIR7    |                 | Section 4.5.3.46 |
| 920h     | HIPIR8    |                 | Section 4.5.3.47 |
| 924h     | HIPIR9    |                 | Section 4.5.3.48 |
| D00h     | SIPR0     |                 | Section 4.5.3.49 |
| D04h     | SIPR1     |                 | Section 4.5.3.50 |
| D80h     | SITR0     |                 | Section 4.5.3.51 |
| D84h     | SITR1     |                 | Section 4.5.3.52 |
| 1100h    | HINLR0    |                 | Section 4.5.3.53 |
| 1104h    | HINLR1    |                 | Section 4.5.3.54 |
| 1108h    | HINLR2    |                 | Section 4.5.3.55 |
| 110Ch    | HINLR3    |                 | Section 4.5.3.56 |
| 1110h    | HINLR4    |                 | Section 4.5.3.57 |
| 1114h    | HINLR5    |                 | Section 4.5.3.58 |
| 1118h    | HINLR6    |                 | Section 4.5.3.59 |
| 111Ch    | HINLR7    |                 | Section 4.5.3.60 |
| 1120h    | HINLR8    |                 | Section 4.5.3.61 |
| 1124h    | HINLR9    |                 | Section 4.5.3.62 |
| 1500h    | HIER      |                 | Section 4.5.3.63 |

<!-- image -->

<!-- image -->

## 4.5.3.1 REVID Register (offset = 0h) [reset = 4E82A900h]

REVID is shown in Figure 4-129 and described in Table 4-116. Revision ID Register

## Figure 4-129. REVID Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| REV_SCHEME | REV_SCHEME | RESERVED   | RESERVED   | REV_MODULE | REV_MODULE | REV_MODULE | REV_MODULE |
| R-1h       | R-1h       | R-0h       | R-0h       | R-E82h     | R-E82h     | R-E82h     | R-E82h     |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| REV_MODULE | REV_MODULE | REV_MODULE | REV_MODULE | REV_MODULE | REV_MODULE | REV_MODULE | REV_MODULE |
| R-E82h     | R-E82h     | R-E82h     | R-E82h     | R-E82h     | R-E82h     | R-E82h     | R-E82h     |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| REV_RTL    | REV_RTL    | REV_RTL    | REV_RTL    | REV_RTL    | REV_MAJOR  | REV_MAJOR  | REV_MAJOR  |
| R-15h R-1h | R-15h R-1h | R-15h R-1h | R-15h R-1h | R-15h R-1h | R-15h R-1h | R-15h R-1h | R-15h R-1h |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| REV_CUSTOM | REV_CUSTOM | REV_MINOR  | REV_MINOR  | REV_MINOR  | REV_MINOR  | REV_MINOR  | REV_MINOR  |
| R-0h R-0h  | R-0h R-0h  | R-0h R-0h  | R-0h R-0h  | R-0h R-0h  | R-0h R-0h  | R-0h R-0h  | R-0h R-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-116. REVID Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description     |
|-------|------------|--------|---------|-----------------|
| 31-30 | REV_SCHEME | R      | 1h      | SCHEME          |
| 29-28 | RESERVED   | R      | 0h      |                 |
| 27-16 | REV_MODULE | R      | E82h    | MODULE ID       |
| 15-11 | REV_RTL    | R      | 15h     | RTL REVISIONS   |
| 10-8  | REV_MAJOR  | R      | 1h      | MAJOR REVISION  |
| 7-6   | REV_CUSTOM | R      | 0h      | CUSTOM REVISION |
| 5-0   | REV_MINOR  | R      | 0h      | MINOR REVISION  |

## 4.5.3.2 CR Register (offset = 4h) [reset = 0h]

CR is shown in Figure 4-130 and described in Table 4-117.

The Control Register holds global control parameters and can forces a soft reset on the module.

| Figure 4-130. CR Register   | Figure 4-130. CR Register   | Figure 4-130. CR Register   | Figure 4-130. CR Register   | Figure 4-130. CR Register   | Figure 4-130. CR Register   | Figure 4-130. CR Register   | Figure 4-130. CR Register   |
|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|-----------------------------|
| 31                          | 30                          | 29                          | 28                          | 27                          | 26                          | 25                          | 24                          |
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      |
| 23                          | 22                          | 21                          | 20                          | 19                          | 18                          | 17                          | 16                          |
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      |
| 15                          | 14                          | 13                          | 12                          | 11                          | 10                          | 9                           | 8                           |
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    |
| R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      |
| 7                           | 6                           | 5                           | 4                           | 3                           | 2                           | 1                           | 0                           |
| RESERVED                    | RESERVED                    | RESERVED                    | RESERVED                    | NEST_MODE                   | NEST_MODE                   | RESERVED                    | RESERVED                    |
| R/W-0h                      | R/W-0h                      | R/W-0h                      | R-0h                        | R/W-0h                      | R/W-0h                      | R/W-0h                      | R/W-0h                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-117. CR Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                       |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | RESERVED  | R/W    | 0h      |                                                                                                                                                                   |
| 4     | RESERVED  | R      | 0h      | Reserved.                                                                                                                                                         |
| 3-2   | NEST_MODE | R/W    | 0h      | The nesting mode. 0 = no nesting 1 = automatic individual nesting (per host interrupt) 2 = automatic global nesting (over all host interrupts) 3 = manual nesting |
| 1     | RESERVED  | R/W    | 0h      | Reserved.                                                                                                                                                         |
| 0     | RESERVED  | R/W    | 0h      |                                                                                                                                                                   |

<!-- image -->

<!-- image -->

## 4.5.3.3 GER Register (offset = 10h) [reset = 0h]

GER is shown in Figure 4-131 and described in Table 4-118.

The Global Host Interrupt Enable Register enables all the host interrupts. Individual host interrupts are still enabled or disabled from their individual enables and are not overridden by the global enable.

## Figure 4-131. GER Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24          |
|----------|----------|----------|----------|----------|----------|----------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | EN_HINT_ANY |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-118. GER Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                              |
|-------|-------------|--------|---------|--------------------------------------------------------------------------|
| 31-1  | RESERVED    | R/W    | 0h      |                                                                          |
| 0     | EN_HINT_ANY | R/W    | 0h      | The current global enable value when read. Writes set the global enable. |

## 4.5.3.4 GNLR Register (offset = 1Ch) [reset = 100h]

GNLR is shown in Figure 4-132 and described in Table 4-119.

The Global Nesting Level Register allows the checking and setting of the global nesting level across all host interrupts when automatic global nesting mode is set. The nesting level is the channel (and all of lower priority) that are nested out because of a current interrupt. This register is only available when nesting is configured.

## Figure 4-132. GNLR Register

| 31              | 30              | 29              | 28              | 27              | 26              | 25              | 24              |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|
| AUTO_OVERR IDE  | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        |
| W-0h            | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |
| 23              | 22              | 21              | 20              | 19              | 18              | 17              | 16              |
| RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               | 8               |
| RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | GLB_NEST_LE VEL |
| R/W-0h R/W-100h | R/W-0h R/W-100h | R/W-0h R/W-100h | R/W-0h R/W-100h | R/W-0h R/W-100h | R/W-0h R/W-100h | R/W-0h R/W-100h | R/W-0h R/W-100h |
| 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0               |
| GLB_NEST_LEVEL  | GLB_NEST_LEVEL  | GLB_NEST_LEVEL  | GLB_NEST_LEVEL  | GLB_NEST_LEVEL  | GLB_NEST_LEVEL  | GLB_NEST_LEVEL  | GLB_NEST_LEVEL  |
| R/W-100h        | R/W-100h        | R/W-100h        | R/W-100h        | R/W-100h        | R/W-100h        | R/W-100h        | R/W-100h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-119. GNLR Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                 |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE  | W      | 0h      | Always read as 0. Writes of 1 override the automatic nesting and set the nesting_level to the written data.                                                                                 |
| 30-9  | RESERVED       | R/W    | 0h      |                                                                                                                                                                                             |
| 8-0   | GLB_NEST_LEVEL | R/W    | 100h    | The current global nesting level (highest channel that is nested). Writes set the nesting level. In auto nesting mode this value is updated internally unless the auto_override bit is set. |

<!-- image -->

www.ti.com

<!-- image -->

## 4.5.3.5 SISR Register (offset = 20h) [reset = 0h]

SISR is shown in Figure 4-133 and described in Table 4-120.

The System Event Status Indexed Set Register allows setting the status of an event. The event to set is the index value written (0-63). This sets the Raw Status Register bit of the given index.

## Figure 4-133. SISR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-120. SISR Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                          |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | W      | 0h      |                                                                                      |
| 9-0   | STS_SET_IDX | W      | 0h      | Writes set the status of the event given in the index value ( 0-63). Reads return 0. |

## 4.5.3.6 SICR Register (offset = 24h) [reset = 0h]

SICR is shown in Figure 4-134 and described in Table 4-121.

The System Event Status Indexed Clear Register allows clearing the status of an event. The event to clear is the index value written (0-63). This clears the Raw Status Register bit of the given index.

## Figure 4-134. SICR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |          |          |          |          |          |          |          |          |          |          |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |          |          |          |          |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-121. SICR Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                            |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | W      | 0h      |                                                                                        |
| 9-0   | STS_CLR_IDX | W      | 0h      | Writes clear the status of the event given in the index value ( 0-63). Reads return 0. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.7 EISR Register (offset = 28h) [reset = 0h]

EISR is shown in Figure 4-135 and described in Table 4-122.

The System Event Enable Indexed Set Register allows enabling an event. The event to enable is the index value written (0-63). This sets the Enable Register bit of the given index.

## Figure 4-135. EISR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EN_SET_IDX                                                                            |
| W-0h                                                                                  | W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-122. EISR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                          |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------|
| 31-10 | RESERVED   | W      | 0h      |                                                                                      |
| 9-0   | EN_SET_IDX | W      | 0h      | Writes set the enable of the event given in the index value ( 0-63). Reads return 0. |

4.5.3.8

EICR Register (offset = 2Ch) [reset = 0h]

EICR is shown in Figure 4-136 and described in Table 4-123.

The System Event Enable Indexed Clear Register allows disabling an event. The event to disable is the index value written (0-63). This clears the Enable Register bit of the given index.

## Figure 4-136. EICR Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | EN_CLR_IDX                                                                            |
| W-0h                                                                                  | W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-123. EICR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                            |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------|
| 31-10 | RESERVED   | W      | 0h      |                                                                                        |
| 9-0   | EN_CLR_IDX | W      | 0h      | Writes clear the enable of the event given in the index value ( 0-63). Reads return 0. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.9 HIEISR Register (offset = 34h) [reset = 0h]

HIEISR is shown in Figure 4-137 and described in Table 4-124.

The Host Interrupt Enable Indexed Set Register allows enabling a host interrupt output. The host interrupt to enable is the index value written (0-9). This enables the host interrupt output or triggers the output again if already enabled.

## Figure 4-137. HIEISR Register

| 31       | 30       | 29                       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|--------------------------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED                 | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                       | 22       | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R/W-0h                | 18       | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                       | 13       | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                       | 12       | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 R/W-0h                 | 8        | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                        | 3        | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                        | 2        | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED HINT_EN_SET_IDX |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-124. HIEISR Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                  |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------|
| 31-4  | RESERVED        | R/W    | 0h      |                                                                                              |
| 3-0   | HINT_EN_SET_IDX | R/W    | 0h      | Writes set the enable of the host interrupt given in the index value ( 0-9). Reads return 0. |

## 4.5.3.10 HIDISR Register (offset = 38h) [reset = 0h]

HIDISR is shown in Figure 4-138 and described in Table 4-125.

The Host Interrupt Enable Indexed Clear Register allows disabling a host interrupt output. The host interrupt to disable is the index value written (0-9). This disables the host interrupt output.

## Figure 4-138. HIDISR Register

| 31       | 30       | 29                       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|--------------------------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED                 | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22                       | 22       | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R/W-0h                | 18       | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13                       | 13       | 13       | 13       | 13       | 13       |
| 12       | 12       | 12                       | 12       | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 R/W-0h                 | 8        | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                        | 3        | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                        | 2        | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED HINT_EN_CLR_IDX |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-125. HIDISR Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                    |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED        | R/W    | 0h      |                                                                                                |
| 3-0   | HINT_EN_CLR_IDX | R/W    | 0h      | Writes clear the enable of the host interrupt given in the index value ( 0-9). Reads return 0. |

<!-- image -->

<!-- image -->

## 4.5.3.11 GPIR Register (offset = 80h) [reset = 80000000h]

GPIR is shown in Figure 4-139 and described in Table 4-126.

The Global Prioritized Index Register shows the event number of the highest priority event pending across all the host interrupts.

## Figure 4-139. GPIR Register

| 31                    | 30                    | 29                    | 28                    | 27                    | 26                    | 25                    | 24                    |
|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
| GLB_NONE              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              |
| R-1h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |
| 23                    | 22                    | 21                    | 20                    | 19                    | 18                    | 17                    | 16                    |
| RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              |
| R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |
| 15                    | 14                    | 13                    | 12                    | 11                    | 10                    | 9                     | 8                     |
| RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR | RESERVED GLB_PRI_INTR |
| R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |
| 7                     | 6                     | 5                     | 4                     | 3                     | 2                     | 1                     | 0                     |
| GLB_PRI_INTR          | GLB_PRI_INTR          | GLB_PRI_INTR          | GLB_PRI_INTR          | GLB_PRI_INTR          | GLB_PRI_INTR          | GLB_PRI_INTR          | GLB_PRI_INTR          |
| R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-126. GPIR Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                    |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31    | GLB_NONE     | R      | 1h      | No Interrupt is pending. Can be used by host to test for a negative value to see if no interrupts are pending. |
| 30-10 | RESERVED     | R      | 0h      |                                                                                                                |
| 9-0   | GLB_PRI_INTR | R      | 0h      | The currently highest priority event index ( 0-63) pending across all the host interrupts.                     |

## 4.5.3.12 SRSR0 Register (offset = 200h) [reset = 0h]

SRSR0 is shown in Figure 4-140 and described in Table 4-127.

The System Event Status Raw/Set Register0 show the pending enabled status of the system events 0 to 31. Software can write to the Status Set Registers to set a system event without a hardware trigger. There is one bit per system event

## Figure 4-140. SRSR0 Register

| 31           | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|--------------|------------------------------------------------------------------------------------|
| RAW_STS_31_0 | RAW_STS_31_0                                                                       |
| R/W-0h       | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-127. SRSR0 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                  |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RAW_STS_31_0 | R/W    | 0h      | System event raw status and setting of the system events 0 to 31. Reads return the raw status. Write a 1 in a bit position to set the status of the system event. Writing a 0 has no effect. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.13 SRSR1 Register (offset = 204h) [reset = 0h]

SRSR1 is shown in Figure 4-141 and described in Table 4-128.

The System Event Status Raw/Set Register1 show the pending enabled status of the system events 32 to 63. Software can write to the Status Set Registers to set a system event without a hardware trigger. There is one bit per system event

## Figure 4-141. SRSR1 Register

| 31            | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|---------------------------------------------------------------------------------|
| RAW_STS_63_32 | RAW_STS_63_32                                                                   |
| R/W-0h        | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-128. SRSR1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                   |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | RAW_STS_63_32 | R/W    | 0h      | System event raw status and setting of the system events 32 to 63. Reads return the raw status. Write a 1 in a bit position to set the status of the system event. Writing a 0 has no effect. |

## 4.5.3.14 SECR0 Register (offset = 280h) [reset = 0h]

SECR0 is shown in Figure 4-142 and described in Table 4-129.

The System Event Status Enabled/Clear Register0 show the pending enabled status of the system events 0 to 31. Software can write to the Status Clear Registers to clear a system event after it has been serviced. If a system event status is not cleared then another host interrupt may not be triggered or another host interrupt may be triggered incorrectly. There is one bit per system event.

## Figure 4-142. SECR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | ENA_STS_31_0                                                                       |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-129. SECR0 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                         |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | ENA_STS_31_0 | R/W    | 0h      | System event enabled status and clearing of the system events 0 to 31. Reads return the enabled status (before enabling with the Enable Registers). Write a 1 in a bit position to clear the status of the system event. Writing a 0 has no effect. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.15 SECR1 Register (offset = 284h) [reset = 0h]

SECR1 is shown in Figure 4-143 and described in Table 4-130.

The System Event Status Enabled/Clear Register1 show the pending enabled status of the system events 32 to 63. Software can write to the Status Clear Registers to clear a system event after it has been serviced. If a system event status is not cleared then another host interrupt may not be triggered or another host interrupt may be triggered incorrectly. There is one bit per system event.

## Figure 4-143. SECR1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 ENA_STS_63_32   |
|------|-----------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-130. SECR1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                          |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | ENA_STS_63_32 | R/W    | 0h      | System event enabled status and clearing of the system events 32 to 63. Reads return the enabled status (before enabling with the Enable Registers). Write a 1 in a bit position to clear the status of the system event. Writing a 0 has no effect. |

## 4.5.3.16 ESR0 Register (offset = 300h) [reset = 0h]

ESR0 is shown in Figure 4-144 and described in Table 4-131.

The System Event Enable Set Register0 enables system events 0 to 31 to trigger outputs. System events that are not enabled do not interrupt the host. There is a bit per system event.

Figure 4-144. ESR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-131. ESR0 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                        |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | EN_SET_31_0 |        | 0h      | System event enables system events 0 to 31. Read returns the enable value ( 0 = disabled, 1 = enabled). Write a 1 in a bit position to set that enable. Writing a 0 has no effect. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.17 ESR1 Register (offset = 304h) [reset = 0h]

ESR1 is shown in Figure 4-145 and described in Table 4-132.

The System Event Enable Set Register1 enables system events 32 to 63 to trigger outputs. System events that are not enabled do not interrupt the host. There is a bit per system event.

## Figure 4-145. ESR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 EN_SET_63_32   |
|------|-------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-132. ESR1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                         |
|-------|--------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | EN_SET_63_32 |        | 0h      | System event enables system events 32 to 63. Read returns the enable value ( 0 = disabled, 1 = enabled). Write a 1 in a bit position to set that enable. Writing a 0 has no effect. |

## 4.5.3.18 ECR0 Register (offset = 380h) [reset = 0h]

ECR0 is shown in Figure 4-146 and described in Table 4-133.

The System Event Enable Clear Register0 disables system events 0 to 31 to map to channels. System events that are not enabled do not interrupt the host. There is a bit per system event.

Figure 4-146. ECR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | EN_CLR_31_0                                                                        |
|      | 0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-133. ECR0 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                          |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | EN_CLR_31_0 |        | 0h      | System event enables system events 0 to 31. Read returns the enable value ( 0 = disabled, 1 = enabled). Write a 1 in a bit position to clear that enable. Writing a 0 has no effect. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.19 ECR1 Register (offset = 384h) [reset = 0h]

ECR1 is shown in Figure 4-147 and described in Table 4-134.

The System Event Enable Clear Register1 disables system events 32 to 63 to map to channels. System events that are not enabled do not interrupt the host. There is a bit per system event.

## Figure 4-147. ECR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | EN_CLR_63_32                                                                       |
|      | 0h                                                                                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-134. ECR1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                           |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | EN_CLR_63_32 |        | 0h      | System event enables system events 32 to 63. Read returns the enable value ( 0 = disabled, 1 = enabled). Write a 1 in a bit position to clear that enable. Writing a 0 has no effect. |

## 4.5.3.20 CMR0 Register (offset = 400h) [reset = 0h]

CMR0 is shown in Figure 4-148 and described in Table 4-135.

The Channel Map Register0 specify the channel for the system events 0 to 3. There is one register per 4 system events. Note each CH\_MAP\_x bitfield corresponds to a system event. Channel numbers (0-9) should be written to these bitfields.

## Figure 4-148. CMR0 Register

| 31   | 30       | 29       | 28       | 27   | 26       | 25       | 24       | 23   | 22   | 21       | 20       |          | 19   | 18       | 17       | 16       |
|------|----------|----------|----------|------|----------|----------|----------|------|------|----------|----------|----------|------|----------|----------|----------|
|      | RESERVED | RESERVED | RESERVED |      | CH_MAP_3 | CH_MAP_3 | CH_MAP_3 |      |      | RESERVED | RESERVED | RESERVED |      | CH_MAP_2 | CH_MAP_2 | CH_MAP_2 |
|      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h   | R/W-0h   | R/W-0h   |      |      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h   | R/W-0h   | R/W-0h   |
| 15   | 14       | 13       | 12       | 11   | 10       | 9        |          | 8    | 7    | 6        | 5        | 4        | 3    | 2        | 1        | 0        |
|      | RESERVED | RESERVED | RESERVED |      | CH_MAP_1 | CH_MAP_1 | CH_MAP_1 |      |      | RESERVED | RESERVED | RESERVED |      | CH_MAP_0 | CH_MAP_0 | CH_MAP_0 |
|      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h   | R/W-0h   | R/W-0h   |      |      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-135. CMR0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                             |
|-------|----------|--------|---------|-----------------------------------------|
| 31-28 | RESERVED | R/W    | 0h      |                                         |
| 27-24 | CH_MAP_3 | R/W    | 0h      | Sets the channel for the system event 3 |
| 23-20 | RESERVED | R/W    | 0h      |                                         |
| 19-16 | CH_MAP_2 | R/W    | 0h      | Sets the channel for the system event 2 |
| 15-12 | RESERVED | R/W    | 0h      |                                         |
| 11-8  | CH_MAP_1 | R/W    | 0h      | Sets the channel for the system event 1 |
| 7-4   | RESERVED | R/W    | 0h      |                                         |
| 3-0   | CH_MAP_0 | R/W    | 0h      | Sets the channel for the system event 0 |

<!-- image -->

<!-- image -->

## 4.5.3.21 CMR1 Register (offset = 404h) [reset = 0h]

CMR1 is shown in Figure 4-149 and described in Table 4-136.

The Channel Map Register1 specify the channel for the system events 4 to 7. There is one register per 4 system events.

## Figure 4-149. CMR1 Register

| 31   | 30       | 29       | 28   | 27   | 26       | 25       | 24       | 23   | 22       | 21       | 20   | 19   | 18       | 17       | 16   |
|------|----------|----------|------|------|----------|----------|----------|------|----------|----------|------|------|----------|----------|------|
|      | RESERVED | RESERVED |      |      | CH_MAP_7 | CH_MAP_7 | CH_MAP_7 |      | RESERVED | RESERVED |      |      | CH_MAP_6 | CH_MAP_6 |      |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h   | R/W-0h   |      |      | R/W-0h   | R/W-0h   |      |
| 15   | 14       | 13       | 12   | 11   | 10       | 9        | 8        | 7    | 6        | 5        | 4    | 3    | 2        | 1        | 0    |
|      | RESERVED | RESERVED |      |      | CH_MAP_5 | CH_MAP_5 | CH_MAP_5 |      | RESERVED | RESERVED |      |      | CH_MAP_4 | CH_MAP_4 |      |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h   | R/W-0h   |      |      | R/W-0h   | R/W-0h   |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-136. CMR1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                             |
|-------|----------|--------|---------|-----------------------------------------|
| 31-28 | RESERVED | R/W    | 0h      |                                         |
| 27-24 | CH_MAP_7 | R/W    | 0h      | Sets the channel for the system event 7 |
| 23-20 | RESERVED | R/W    | 0h      |                                         |
| 19-16 | CH_MAP_6 | R/W    | 0h      | Sets the channel for the system event 6 |
| 15-12 | RESERVED | R/W    | 0h      |                                         |
| 11-8  | CH_MAP_5 | R/W    | 0h      | Sets the channel for the system event 5 |
| 7-4   | RESERVED | R/W    | 0h      |                                         |
| 3-0   | CH_MAP_4 | R/W    | 0h      | Sets the channel for the system event 4 |

## 4.5.3.22 CMR2 Register (offset = 408h) [reset = 0h]

CMR2 is shown in Figure 4-150 and described in Table 4-137.

The Channel Map Register2 specify the channel for the system events 8 to 11. There is one register per 4 system events.

## Figure 4-150. CMR2 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21       | 20   | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|------|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_11 | CH_MAP_11 | CH_MAP_11 |      | RESERVED | RESERVED |      |      | CH_MAP_10 | CH_MAP_10 | CH_MAP_10 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4    | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_9  | CH_MAP_9  | CH_MAP_9  |      | RESERVED | RESERVED |      |      | CH_MAP_8  | CH_MAP_8  | CH_MAP_8  |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-137. CMR2 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_11 | R/W    | 0h      | Sets the channel for the system event 11 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_10 | R/W    | 0h      | Sets the channel for the system event 10 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_9  | R/W    | 0h      | Sets the channel for the system event 9  |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_8  | R/W    | 0h      | Sets the channel for the system event 8  |

<!-- image -->

<!-- image -->

## 4.5.3.23 CMR3 Register (offset = 40Ch) [reset = 0h]

CMR3 is shown in Figure 4-151 and described in Table 4-138.

The Channel Map Register3 specify the channel for the system events 12 to 15. There is one register per 4 system events.

## Figure 4-151. CMR3 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21       | 20   | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|------|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_15 | CH_MAP_15 | CH_MAP_15 |      | RESERVED | RESERVED |      |      | CH_MAP_14 | CH_MAP_14 | CH_MAP_14 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4    | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_13 | CH_MAP_13 | CH_MAP_13 |      | RESERVED | RESERVED |      |      | CH_MAP_12 | CH_MAP_12 | CH_MAP_12 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-138. CMR3 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_15 | R/W    | 0h      | Sets the channel for the system event 15 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_14 | R/W    | 0h      | Sets the channel for the system event 14 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_13 | R/W    | 0h      | Sets the channel for the system event 13 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_12 | R/W    | 0h      | Sets the channel for the system event 12 |

## 4.5.3.24 CMR4 Register (offset = 410h) [reset = 0h]

CMR4 is shown in Figure 4-152 and described in Table 4-139.

The Channel Map Register4 specify the channel for the system events 16 to 19. There is one register per 4 system events.

## Figure 4-152. CMR4 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21       | 20   | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|------|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_19 | CH_MAP_19 | CH_MAP_19 |      | RESERVED | RESERVED |      |      | CH_MAP_18 | CH_MAP_18 | CH_MAP_18 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4    | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_17 | CH_MAP_17 | CH_MAP_17 |      | RESERVED | RESERVED |      |      | CH_MAP_16 | CH_MAP_16 | CH_MAP_16 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-139. CMR4 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_19 | R/W    | 0h      | Sets the channel for the system event 19 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_18 | R/W    | 0h      | Sets the channel for the system event 18 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_17 | R/W    | 0h      | Sets the channel for the system event 17 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_16 | R/W    | 0h      | Sets the channel for the system event 16 |

<!-- image -->

<!-- image -->

## 4.5.3.25 CMR5 Register (offset = 414h) [reset = 0h]

CMR5 is shown in Figure 4-153 and described in Table 4-140.

The Channel Map Register5 specify the channel for the system events 20 to 23. There is one register per 4 system events.

## Figure 4-153. CMR5 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21 20    |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_23 | CH_MAP_23 | CH_MAP_23 |      | RESERVED | RESERVED |    |      | CH_MAP_22 | CH_MAP_22 | CH_MAP_22 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_21 | CH_MAP_21 | CH_MAP_21 |      | RESERVED | RESERVED |    |      | CH_MAP_20 | CH_MAP_20 | CH_MAP_20 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-140. CMR5 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_23 | R/W    | 0h      | Sets the channel for the system event 23 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_22 | R/W    | 0h      | Sets the channel for the system event 22 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_21 | R/W    | 0h      | Sets the channel for the system event 21 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_20 | R/W    | 0h      | Sets the channel for the system event 20 |

## 4.5.3.26 CMR6 Register (offset = 418h) [reset = 0h]

CMR6 is shown in Figure 4-154 and described in Table 4-141.

The Channel Map Register6 specify the channel for the system events 24 to 27. There is one register per 4 system events.

## Figure 4-154. CMR6 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22   | 21       | 20       |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_27 | CH_MAP_27 | CH_MAP_27 |      |      | RESERVED | RESERVED |    |      | CH_MAP_26 | CH_MAP_26 | CH_MAP_26 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         |      | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_25 | CH_MAP_25 | CH_MAP_25 |      |      | RESERVED | RESERVED |    |      | CH_MAP_24 | CH_MAP_24 | CH_MAP_24 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-141. CMR6 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_27 | R/W    | 0h      | Sets the channel for the system event 27 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_26 | R/W    | 0h      | Sets the channel for the system event 26 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_25 | R/W    | 0h      | Sets the channel for the system event 25 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_24 | R/W    | 0h      | Sets the channel for the system event 24 |

<!-- image -->

<!-- image -->

## 4.5.3.27 CMR7 Register (offset = 41Ch) [reset = 0h]

CMR7 is shown in Figure 4-155 and described in Table 4-142.

The Channel Map Register7 specify the channel for the system events 28 to 31. There is one register per 4 system events.

## Figure 4-155. CMR7 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21 20    |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_31 | CH_MAP_31 | CH_MAP_31 |      | RESERVED | RESERVED |    |      | CH_MAP_30 | CH_MAP_30 | CH_MAP_30 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_29 | CH_MAP_29 | CH_MAP_29 |      | RESERVED | RESERVED |    |      | CH_MAP_28 | CH_MAP_28 | CH_MAP_28 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-142. CMR7 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_31 | R/W    | 0h      | Sets the channel for the system event 31 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_30 | R/W    | 0h      | Sets the channel for the system event 30 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_29 | R/W    | 0h      | Sets the channel for the system event 29 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_28 | R/W    | 0h      | Sets the channel for the system event 28 |

## 4.5.3.28 CMR8 Register (offset = 420h) [reset = 0h]

CMR8 is shown in Figure 4-156 and described in Table 4-143.

The Channel Map Register8 specify the channel for the system events 32 to 35. There is one register per 4 system events.

## Figure 4-156. CMR8 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22   | 21       | 20       |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_35 | CH_MAP_35 | CH_MAP_35 |      |      | RESERVED | RESERVED |    |      | CH_MAP_34 | CH_MAP_34 | CH_MAP_34 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         |      | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_33 | CH_MAP_33 | CH_MAP_33 |      |      | RESERVED | RESERVED |    |      | CH_MAP_32 | CH_MAP_32 | CH_MAP_32 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-143. CMR8 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_35 | R/W    | 0h      | Sets the channel for the system event 35 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_34 | R/W    | 0h      | Sets the channel for the system event 34 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_33 | R/W    | 0h      | Sets the channel for the system event 33 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_32 | R/W    | 0h      | Sets the channel for the system event 32 |

<!-- image -->

<!-- image -->

## 4.5.3.29 CMR9 Register (offset = 424h) [reset = 0h]

CMR9 is shown in Figure 4-157 and described in Table 4-144.

The Channel Map Register9 specify the channel for the system events 36 to 39. There is one register per 4 system events.

## Figure 4-157. CMR9 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22   | 21       | 20       |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_39 | CH_MAP_39 | CH_MAP_39 |      |      | RESERVED | RESERVED |    |      | CH_MAP_38 | CH_MAP_38 | CH_MAP_38 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         |      | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_37 | CH_MAP_37 | CH_MAP_37 |      |      | RESERVED | RESERVED |    |      | CH_MAP_36 | CH_MAP_36 | CH_MAP_36 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-144. CMR9 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_39 | R/W    | 0h      | Sets the channel for the system event 39 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_38 | R/W    | 0h      | Sets the channel for the system event 38 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_37 | R/W    | 0h      | Sets the channel for the system event 37 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_36 | R/W    | 0h      | Sets the channel for the system event 36 |

## 4.5.3.30 CMR10 Register (offset = 428h) [reset = 0h]

CMR10 is shown in Figure 4-158 and described in Table 4-145.

The Channel Map Register10 specify the channel for the system events 40 to 43. There is one register per 4 system events.

## Figure 4-158. CMR10 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21       | 20   | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|------|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_43 | CH_MAP_43 | CH_MAP_43 |      | RESERVED | RESERVED |      |      | CH_MAP_42 | CH_MAP_42 | CH_MAP_42 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4    | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_41 | CH_MAP_41 | CH_MAP_41 |      | RESERVED | RESERVED |      |      | CH_MAP_40 | CH_MAP_40 | CH_MAP_40 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-145. CMR10 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_43 | R/W    | 0h      | Sets the channel for the system event 43 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_42 | R/W    | 0h      | Sets the channel for the system event 42 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_41 | R/W    | 0h      | Sets the channel for the system event 41 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_40 | R/W    | 0h      | Sets the channel for the system event 40 |

<!-- image -->

<!-- image -->

## 4.5.3.31 CMR11 Register (offset = 42Ch) [reset = 0h]

CMR11 is shown in Figure 4-159 and described in Table 4-146.

The Channel Map Register11 specify the channel for the system events 44 to 47. There is one register per 4 system events.

## Figure 4-159. CMR11 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21       | 20   | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|------|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_47 | CH_MAP_47 | CH_MAP_47 |      | RESERVED | RESERVED |      |      | CH_MAP_46 | CH_MAP_46 | CH_MAP_46 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4    | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_45 | CH_MAP_45 | CH_MAP_45 |      | RESERVED | RESERVED |      |      | CH_MAP_44 | CH_MAP_44 | CH_MAP_44 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-146. CMR11 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_47 | R/W    | 0h      | Sets the channel for the system event 47 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_46 | R/W    | 0h      | Sets the channel for the system event 46 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_45 | R/W    | 0h      | Sets the channel for the system event 45 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_44 | R/W    | 0h      | Sets the channel for the system event 44 |

## 4.5.3.32 CMR12 Register (offset = 430h) [reset = 0h]

CMR12 is shown in Figure 4-160 and described in Table 4-147.

The Channel Map Register12 specify the channel for the system events 48 to 51. There is one register per 4 system events.

## Figure 4-160. CMR12 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22       | 21 20    |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_51 | CH_MAP_51 | CH_MAP_51 |      | RESERVED | RESERVED |    |      | CH_MAP_50 | CH_MAP_50 | CH_MAP_50 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_49 | CH_MAP_49 | CH_MAP_49 |      | RESERVED | RESERVED |    |      | CH_MAP_48 | CH_MAP_48 | CH_MAP_48 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-147. CMR12 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_51 | R/W    | 0h      | Sets the channel for the system event 51 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_50 | R/W    | 0h      | Sets the channel for the system event 50 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_49 | R/W    | 0h      | Sets the channel for the system event 49 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_48 | R/W    | 0h      | Sets the channel for the system event 48 |

<!-- image -->

<!-- image -->

## 4.5.3.33 CMR13 Register (offset = 434h) [reset = 0h]

CMR13 is shown in Figure 4-161 and described in Table 4-148.

The Channel Map Register13 specify the channel for the system events 52 to 55. There is one register per 4 system events.

## Figure 4-161. CMR13 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22   | 21       | 20       |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_55 | CH_MAP_55 | CH_MAP_55 |      |      | RESERVED | RESERVED |    |      | CH_MAP_54 | CH_MAP_54 | CH_MAP_54 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         |      | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_53 | CH_MAP_53 | CH_MAP_53 |      |      | RESERVED | RESERVED |    |      | CH_MAP_52 | CH_MAP_52 | CH_MAP_52 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-148. CMR13 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_55 | R/W    | 0h      | Sets the channel for the system event 55 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_54 | R/W    | 0h      | Sets the channel for the system event 54 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_53 | R/W    | 0h      | Sets the channel for the system event 53 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_52 | R/W    | 0h      | Sets the channel for the system event 52 |

## 4.5.3.34 CMR14 Register (offset = 438h) [reset = 0h]

CMR14 is shown in Figure 4-162 and described in Table 4-149.

The Channel Map Register14 specify the channel for the system events 56 to 59. There is one register per 4 system events.

## Figure 4-162. CMR14 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22   | 21       | 20       |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_59 | CH_MAP_59 | CH_MAP_59 |      |      | RESERVED | RESERVED |    |      | CH_MAP_58 | CH_MAP_58 | CH_MAP_58 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         |      | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_57 | CH_MAP_57 | CH_MAP_57 |      |      | RESERVED | RESERVED |    |      | CH_MAP_56 | CH_MAP_56 | CH_MAP_56 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-149. CMR14 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_59 | R/W    | 0h      | Sets the channel for the system event 59 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_58 | R/W    | 0h      | Sets the channel for the system event 58 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_57 | R/W    | 0h      | Sets the channel for the system event 57 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_56 | R/W    | 0h      | Sets the channel for the system event 56 |

<!-- image -->

<!-- image -->

## 4.5.3.35 CMR15 Register (offset = 43Ch) [reset = 0h]

CMR15 is shown in Figure 4-163 and described in Table 4-150.

The Channel Map Register15 specify the channel for the system events 60 to 63. There is one register per 4 system events.

## Figure 4-163. CMR15 Register

| 31   | 30       | 29       | 28   | 27   | 26        | 25        | 24        | 23   | 22   | 21       | 20       |    | 19   | 18        | 17        | 16        |
|------|----------|----------|------|------|-----------|-----------|-----------|------|------|----------|----------|----|------|-----------|-----------|-----------|
|      | RESERVED | RESERVED |      |      | CH_MAP_63 | CH_MAP_63 | CH_MAP_63 |      |      | RESERVED | RESERVED |    |      | CH_MAP_62 | CH_MAP_62 | CH_MAP_62 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |
| 15   | 14       | 13       | 12   | 11   | 10        | 9         | 8         |      | 7    | 6        | 5        | 4  | 3    | 2         | 1         | 0         |
|      | RESERVED | RESERVED |      |      | CH_MAP_61 | CH_MAP_61 | CH_MAP_61 |      |      | RESERVED | RESERVED |    |      | CH_MAP_60 | CH_MAP_60 | CH_MAP_60 |
|      | R/W-0h   | R/W-0h   |      |      | R/W-0h    | R/W-0h    | R/W-0h    |      |      | R/W-0h   | R/W-0h   |    |      | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-150. CMR15 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                              |
|-------|-----------|--------|---------|------------------------------------------|
| 31-28 | RESERVED  | R/W    | 0h      |                                          |
| 27-24 | CH_MAP_63 | R/W    | 0h      | Sets the channel for the system event 63 |
| 23-20 | RESERVED  | R/W    | 0h      |                                          |
| 19-16 | CH_MAP_62 | R/W    | 0h      | Sets the channel for the system event 62 |
| 15-12 | RESERVED  | R/W    | 0h      |                                          |
| 11-8  | CH_MAP_61 | R/W    | 0h      | Sets the channel for the system event 61 |
| 7-4   | RESERVED  | R/W    | 0h      |                                          |
| 3-0   | CH_MAP_60 | R/W    | 0h      | Sets the channel for the system event 60 |

## 4.5.3.36 HMR0 Register (offset = 800h) [reset = 0h]

HMR0 is shown in Figure 4-164 and described in Table 4-151.

The Host Interrupt Map Register0 define the host interrupt for channels 0 to 3. There is one register per 4 channels. Channels with forced host interrupt mappings will have their fields read-only.

## Figure 4-164. HMR0 Register

| 31   | 30       | 29       | 28       | 27   | 26         | 25         | 24         | 23         | 22       | 21       | 20       | 19   | 18         | 17         | 16         |
|------|----------|----------|----------|------|------------|------------|------------|------------|----------|----------|----------|------|------------|------------|------------|
|      | RESERVED | RESERVED | RESERVED |      | HINT_MAP_3 | HINT_MAP_3 | HINT_MAP_3 | HINT_MAP_3 | RESERVED | RESERVED | RESERVED |      | HINT_MAP_2 | HINT_MAP_2 | HINT_MAP_2 |
|      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     |
| 15   | 14       | 13       | 12       | 11   | 10         | 9          | 8          | 7          | 6        | 5        | 4        | 3    | 2          | 1          | 0          |
|      | RESERVED | RESERVED | RESERVED |      | HINT_MAP_1 | HINT_MAP_1 | HINT_MAP_1 | HINT_MAP_1 | RESERVED | RESERVED | RESERVED |      | HINT_MAP_0 | HINT_MAP_0 | HINT_MAP_0 |
|      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-151. HMR0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                      |
|-------|------------|--------|---------|----------------------------------|
| 31-28 | RESERVED   | R/W    | 0h      |                                  |
| 27-24 | HINT_MAP_3 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 3 |
| 23-20 | RESERVED   | R/W    | 0h      |                                  |
| 19-16 | HINT_MAP_2 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 2 |
| 15-12 | RESERVED   | R/W    | 0h      |                                  |
| 11-8  | HINT_MAP_1 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 1 |
| 7-4   | RESERVED   | R/W    | 0h      |                                  |
| 3-0   | HINT_MAP_0 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 0 |

<!-- image -->

<!-- image -->

## 4.5.3.37 HMR1 Register (offset = 804h) [reset = 0h]

HMR1 is shown in Figure 4-165 and described in Table 4-152.

The Host Interrupt Map Register1 define the host interrupt for channels 4 to 7. There is one register per 4 channels. Channels with forced host interrupt mappings will have their fields read-only.

## Figure 4-165. HMR1 Register

| 31   | 30       | 29       | 28   | 27         | 26         | 25         |            | 24   | 23       | 22       | 21       | 20   | 19         | 18         | 17         | 16         |
|------|----------|----------|------|------------|------------|------------|------------|------|----------|----------|----------|------|------------|------------|------------|------------|
|      | RESERVED | RESERVED |      | HINT_MAP_7 | HINT_MAP_7 | HINT_MAP_7 | HINT_MAP_7 |      | RESERVED | RESERVED | RESERVED |      | HINT_MAP_6 | HINT_MAP_6 | HINT_MAP_6 | HINT_MAP_6 |
|      | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |      | R/W-0h   | R/W-0h   |          |      | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 15   | 14       | 13       | 12   | 11         | 10         | 9          | 8          | 7    | 6        | 5        | 4        |      | 3          | 2          | 1          | 0          |
|      | RESERVED | RESERVED |      | HINT_MAP_5 | HINT_MAP_5 | HINT_MAP_5 | HINT_MAP_5 |      | RESERVED | RESERVED | RESERVED |      | HINT_MAP_4 | HINT_MAP_4 | HINT_MAP_4 | HINT_MAP_4 |
|      | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |      | R/W-0h   | R/W-0h   | R/W-0h   |      | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-152. HMR1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                      |
|-------|------------|--------|---------|----------------------------------|
| 31-28 | RESERVED   | R/W    | 0h      |                                  |
| 27-24 | HINT_MAP_7 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 7 |
| 23-20 | RESERVED   | R/W    | 0h      |                                  |
| 19-16 | HINT_MAP_6 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 6 |
| 15-12 | RESERVED   | R/W    | 0h      |                                  |
| 11-8  | HINT_MAP_5 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 5 |
| 7-4   | RESERVED   | R/W    | 0h      |                                  |
| 3-0   | HINT_MAP_4 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 4 |

## 4.5.3.38 HMR2 Register (offset = 808h) [reset = 0h]

HMR2 is shown in Figure 4-166 and described in Table 4-153.

The Host Interrupt Map Register2 define the host interrupt for channels 8 to 9. There is one register per 4 channels. Channels with forced host interrupt mappings will have their fields read-only.

## Figure 4-166. HMR2 Register

| 31       | 30       | 29       | 28       | 27       | 26         | 25         | 24         | 23         | 22       | 21       | 20       | 19       | 18         | 17         | 16         |            |
|----------|----------|----------|----------|----------|------------|------------|------------|------------|----------|----------|----------|----------|------------|------------|------------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |
| 15       | 14       | 13       | 12       | 11       | 10         | 9          | 8          | 7          | 6        | 5        | 4        | 3        | 2          | 1          | 0          |            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | HINT_MAP_9 | HINT_MAP_9 | HINT_MAP_9 | HINT_MAP_9 | RESERVED | RESERVED | RESERVED | RESERVED | HINT_MAP_8 | HINT_MAP_8 | HINT_MAP_8 | HINT_MAP_8 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-153. HMR2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                      |
|-------|------------|--------|---------|----------------------------------|
| 31-12 | RESERVED   | R/W    | 0h      |                                  |
| 11-8  | HINT_MAP_9 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 9 |
| 7-4   | RESERVED   | R/W    | 0h      |                                  |
| 3-0   | HINT_MAP_8 | R/W    | 0h      | HOST INTERRUPT MAP FOR CHANNEL 8 |

<!-- image -->

<!-- image -->

## 4.5.3.39 HIPIR0 Register (offset = 900h) [reset = 80000000h]

HIPIR0 is shown in Figure 4-167 and described in Table 4-154.

The Host Interrupt Prioritized Index Register0 shows the highest priority current pending interrupt for the host interrupt 0. There is one register per host interrupt.

## Figure 4-167. HIPIR0 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_0         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 | RESERVED PRI_HINT_0 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_0          | PRI_HINT_0          | PRI_HINT_0          | PRI_HINT_0          | PRI_HINT_0          | PRI_HINT_0          | PRI_HINT_0          | PRI_HINT_0          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-154. HIPIR0 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_0 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_0  | R      | 0h      | HOST INT 0 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

## 4.5.3.40 HIPIR1 Register (offset = 904h) [reset = 80000000h]

HIPIR1 is shown in Figure 4-168 and described in Table 4-155.

The Host Interrupt Prioritized Index Register1 shows the highest priority current pending interrupt for the host interrupt 1. There is one register per host interrupt.

## Figure 4-168. HIPIR1 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_1         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 | RESERVED PRI_HINT_1 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_1          | PRI_HINT_1          | PRI_HINT_1          | PRI_HINT_1          | PRI_HINT_1          | PRI_HINT_1          | PRI_HINT_1          | PRI_HINT_1          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-155. HIPIR1 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_1 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_1  | R      | 0h      | HOST INT 1 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

<!-- image -->

<!-- image -->

## 4.5.3.41 HIPIR2 Register (offset = 908h) [reset = 80000000h]

HIPIR2 is shown in Figure 4-169 and described in Table 4-156.

The Host Interrupt Prioritized Index Register2 shows the highest priority current pending interrupt for the host interrupt 2. There is one register per host interrupt.

## Figure 4-169. HIPIR2 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_2         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 | RESERVED PRI_HINT_2 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_2          | PRI_HINT_2          | PRI_HINT_2          | PRI_HINT_2          | PRI_HINT_2          | PRI_HINT_2          | PRI_HINT_2          | PRI_HINT_2          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-156. HIPIR2 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_2 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_2  | R      | 0h      | HOST INT 2 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

## 4.5.3.42 HIPIR3 Register (offset = 90Ch) [reset = 80000000h]

HIPIR3 is shown in Figure 4-170 and described in Table 4-157.

The Host Interrupt Prioritized Index Register3 shows the highest priority current pending interrupt for the host interrupt 3. There is one register per host interrupt.

## Figure 4-170. HIPIR3 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_3         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 | RESERVED PRI_HINT_3 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_3          | PRI_HINT_3          | PRI_HINT_3          | PRI_HINT_3          | PRI_HINT_3          | PRI_HINT_3          | PRI_HINT_3          | PRI_HINT_3          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-157. HIPIR3 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_3 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_3  | R      | 0h      | HOST INT 3 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

<!-- image -->

<!-- image -->

## 4.5.3.43 HIPIR4 Register (offset = 910h) [reset = 80000000h]

HIPIR4 is shown in Figure 4-171 and described in Table 4-158.

The Host Interrupt Prioritized Index Register4 shows the highest priority current pending interrupt for the host interrupt 4. There is one register per host interrupt.

## Figure 4-171. HIPIR4 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_4         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 | RESERVED PRI_HINT_4 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_4          | PRI_HINT_4          | PRI_HINT_4          | PRI_HINT_4          | PRI_HINT_4          | PRI_HINT_4          | PRI_HINT_4          | PRI_HINT_4          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-158. HIPIR4 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_4 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_4  | R      | 0h      | HOST INT 4 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

## 4.5.3.44 HIPIR5 Register (offset = 914h) [reset = 80000000h]

HIPIR5 is shown in Figure 4-172 and described in Table 4-159.

The Host Interrupt Prioritized Index Register5 shows the highest priority current pending interrupt for the host interrupt 5. There is one register per host interrupt.

## Figure 4-172. HIPIR5 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_5         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 | RESERVED PRI_HINT_5 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_5          | PRI_HINT_5          | PRI_HINT_5          | PRI_HINT_5          | PRI_HINT_5          | PRI_HINT_5          | PRI_HINT_5          | PRI_HINT_5          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-159. HIPIR5 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_5 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_5  | R      | 0h      | HOST INT 5 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

<!-- image -->

<!-- image -->

## 4.5.3.45 HIPIR6 Register (offset = 918h) [reset = 80000000h]

HIPIR6 is shown in Figure 4-173 and described in Table 4-160.

The Host Interrupt Prioritized Index Register6 shows the highest priority current pending interrupt for the host interrupt 6. There is one register per host interrupt.

## Figure 4-173. HIPIR6 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_6         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 | RESERVED PRI_HINT_6 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_6          | PRI_HINT_6          | PRI_HINT_6          | PRI_HINT_6          | PRI_HINT_6          | PRI_HINT_6          | PRI_HINT_6          | PRI_HINT_6          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-160. HIPIR6 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_6 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_6  | R      | 0h      | HOST INT 6 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

## 4.5.3.46 HIPIR7 Register (offset = 91Ch) [reset = 80000000h]

HIPIR7 is shown in Figure 4-174 and described in Table 4-161.

The Host Interrupt Prioritized Index Register7 shows the highest priority current pending interrupt for the host interrupt 7. There is one register per host interrupt.

## Figure 4-174. HIPIR7 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_7         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 | RESERVED PRI_HINT_7 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_7          | PRI_HINT_7          | PRI_HINT_7          | PRI_HINT_7          | PRI_HINT_7          | PRI_HINT_7          | PRI_HINT_7          | PRI_HINT_7          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-161. HIPIR7 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_7 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_7  | R      | 0h      | HOST INT 7 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

<!-- image -->

<!-- image -->

## 4.5.3.47 HIPIR8 Register (offset = 920h) [reset = 80000000h]

HIPIR8 is shown in Figure 4-175 and described in Table 4-162.

The Host Interrupt Prioritized Index Register8 shows the highest priority current pending interrupt for the host interrupt 8. There is one register per host interrupt.

## Figure 4-175. HIPIR8 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_8         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 | RESERVED PRI_HINT_8 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_8          | PRI_HINT_8          | PRI_HINT_8          | PRI_HINT_8          | PRI_HINT_8          | PRI_HINT_8          | PRI_HINT_8          | PRI_HINT_8          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-162. HIPIR8 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_8 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_8  | R      | 0h      | HOST INT 8 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

## 4.5.3.48 HIPIR9 Register (offset = 924h) [reset = 80000000h]

HIPIR9 is shown in Figure 4-176 and described in Table 4-163.

The Host Interrupt Prioritized Index Register9 shows the highest priority current pending interrupt for the host interrupt 9. There is one register per host interrupt.

## Figure 4-176. HIPIR9 Register

| 31                  | 30                  | 29                  | 28                  | 27                  | 26                  | 25                  | 24                  |
|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|---------------------|
| NONE_HINT_9         |                     |                     |                     | RESERVED            |                     |                     |                     |
| R-1h                |                     |                     |                     | R-0h                |                     |                     |                     |
| 23                  | 22                  | 21                  | 20                  | 19                  | 18                  | 17                  | 16                  |
| RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 15                  | 14                  | 13                  | 12                  | 11                  | 10                  | 9                   | 8                   |
| RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 | RESERVED PRI_HINT_9 |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |
| 7                   | 6                   | 5                   | 4                   | 3                   | 2                   | 1                   | 0                   |
| PRI_HINT_9          | PRI_HINT_9          | PRI_HINT_9          | PRI_HINT_9          | PRI_HINT_9          | PRI_HINT_9          | PRI_HINT_9          | PRI_HINT_9          |
| R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                | R-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-163. HIPIR9 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                           |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31    | NONE_HINT_9 | R      | 1h      | No pending interrupt.                                                                                                 |
| 30-10 | RESERVED    | R      | 0h      |                                                                                                                       |
| 9-0   | PRI_HINT_9  | R      | 0h      | HOST INT 9 PRIORITIZED INTERRUPT. Interrupt number of the highest priority pending interrupt for this host interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.49 SIPR0 Register (offset = D00h) [reset = 1h]

SIPR0 is shown in Figure 4-177 and described in Table 4-164.

The System Event Polarity Register0 define the polarity of the system events 0 to 31. There is a polarity for each system event. The polarity of all system events is active high; always write 1 to the bits of this register.

## Figure 4-177. SIPR0 Register

| 31            | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|------------------------------------------------------------------------------------|
| POLARITY_31_0 | POLARITY_31_0                                                                      |
| R/W-1h        | R/W-1h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-164. SIPR0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------|
| 31-0  | POLARITY_31_0 | R/W    | 1h      | Interrupt polarity of the system events 0 to 31. 0 = active low. 1 = active high. |

## 4.5.3.50 SIPR1 Register (offset = D04h) [reset = 1h]

SIPR1 is shown in Figure 4-178 and described in Table 4-165.

The System Event Polarity Register1 define the polarity of the system events 32 to 63. There is a polarity for each system event. The polarity of all system events is active high; always write 1 to the bits of this register.

## Figure 4-178. SIPR1 Register

| 31             | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------------|------------------------------------------------------------------------------------|
| POLARITY_63_32 | POLARITY_63_32                                                                     |
| R/W-1h         | R/W-1h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-165. SIPR1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                        |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------|
| 31-0  | POLARITY_63_32 | R/W    | 1h      | Interrupt polarity of the system events 32 to 63. 0 = active low. 1 = active high. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.51 SITR0 Register (offset = D80h) [reset = 0h]

SITR0 is shown in Figure 4-179 and described in Table 4-166.

The System Event Type Register0 define the type of the system events 0 to 31. There is a type for each system event. The type of all system events is pulse; always write 0 to the bits of this register.

## Figure 4-179. SITR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | TYPE_31_0                                                                          |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-166. SITR0 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                           |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-0  | TYPE_31_0 | R/W    | 0h      | Interrupt type of the system events 0 to 31. 0 = level or pulse interrupt. 1 = edge interrupt (required edge detect). |

## 4.5.3.52 SITR1 Register (offset = D84h) [reset = 0h]

SITR1 is shown in Figure 4-180 and described in Table 4-167.

The System Event Type Register1 define the type of the system events 32 to 63. There is a type for each system event. The type of all system events is pulse; always write 0 to the bits of this register.

Figure 4-180. SITR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | TYPE_63_32                                                                         |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-167. SITR1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                            |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TYPE_63_32 | R/W    | 0h      | Interrupt type of the system events 32 to 63. 0 = level or pulse interrupt. 1 = edge interrupt (required edge detect). |

<!-- image -->

<!-- image -->

## 4.5.3.53 HINLR0 Register (offset = 1100h) [reset = 100h]

HINLR0 is shown in Figure 4-181 and described in Table 4-168.

The Host Interrupt Nesting Level Register0 display and control the nesting level for host interrupt 0. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-181. HINLR0 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 | RESERVED NEST_HINT_0 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_0          | NEST_HINT_0          | NEST_HINT_0          | NEST_HINT_0          | NEST_HINT_0          | NEST_HINT_0          | NEST_HINT_0          | NEST_HINT_0          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-168. HINLR0 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_0   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

## 4.5.3.54 HINLR1 Register (offset = 1104h) [reset = 100h]

HINLR1 is shown in Figure 4-182 and described in Table 4-169.

The Host Interrupt Nesting Level Register1 display and control the nesting level for host interrupt 1. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-182. HINLR1 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 | RESERVED NEST_HINT_1 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_1          | NEST_HINT_1          | NEST_HINT_1          | NEST_HINT_1          | NEST_HINT_1          | NEST_HINT_1          | NEST_HINT_1          | NEST_HINT_1          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-169. HINLR1 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_1   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.55 HINLR2 Register (offset = 1108h) [reset = 100h]

HINLR2 is shown in Figure 4-183 and described in Table 4-170.

The Host Interrupt Nesting Level Register2 display and control the nesting level for host interrupt 2. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-183. HINLR2 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 | RESERVED NEST_HINT_2 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_2          | NEST_HINT_2          | NEST_HINT_2          | NEST_HINT_2          | NEST_HINT_2          | NEST_HINT_2          | NEST_HINT_2          | NEST_HINT_2          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-170. HINLR2 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_2   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

## 4.5.3.56 HINLR3 Register (offset = 110Ch) [reset = 100h]

HINLR3 is shown in Figure 4-184 and described in Table 4-171.

The Host Interrupt Nesting Level Register3 display and control the nesting level for host interrupt 3. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-184. HINLR3 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 | RESERVED NEST_HINT_3 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_3          | NEST_HINT_3          | NEST_HINT_3          | NEST_HINT_3          | NEST_HINT_3          | NEST_HINT_3          | NEST_HINT_3          | NEST_HINT_3          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-171. HINLR3 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_3   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

<!-- image -->

<!-- image -->

## 4.5.3.57 HINLR4 Register (offset = 1110h) [reset = 100h]

HINLR4 is shown in Figure 4-185 and described in Table 4-172.

The Host Interrupt Nesting Level Register4 display and control the nesting level for host interrupt 4. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-185. HINLR4 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 | RESERVED NEST_HINT_4 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_4          | NEST_HINT_4          | NEST_HINT_4          | NEST_HINT_4          | NEST_HINT_4          | NEST_HINT_4          | NEST_HINT_4          | NEST_HINT_4          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-172. HINLR4 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_4   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

## 4.5.3.58 HINLR5 Register (offset = 1114h) [reset = 100h]

HINLR5 is shown in Figure 4-186 and described in Table 4-173.

The Host Interrupt Nesting Level Register5 display and control the nesting level for host interrupt 5. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-186. HINLR5 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 | RESERVED NEST_HINT_5 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_5          | NEST_HINT_5          | NEST_HINT_5          | NEST_HINT_5          | NEST_HINT_5          | NEST_HINT_5          | NEST_HINT_5          | NEST_HINT_5          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-173. HINLR5 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_5   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.59 HINLR6 Register (offset = 1118h) [reset = 100h]

HINLR6 is shown in Figure 4-187 and described in Table 4-174.

The Host Interrupt Nesting Level Register6 display and control the nesting level for host interrupt 6. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-187. HINLR6 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 | RESERVED NEST_HINT_6 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_6          | NEST_HINT_6          | NEST_HINT_6          | NEST_HINT_6          | NEST_HINT_6          | NEST_HINT_6          | NEST_HINT_6          | NEST_HINT_6          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-174. HINLR6 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_6   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

## 4.5.3.60 HINLR7 Register (offset = 111Ch) [reset = 100h]

HINLR7 is shown in Figure 4-188 and described in Table 4-175.

The Host Interrupt Nesting Level Register7 display and control the nesting level for host interrupt 7. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-188. HINLR7 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 | RESERVED NEST_HINT_7 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_7          | NEST_HINT_7          | NEST_HINT_7          | NEST_HINT_7          | NEST_HINT_7          | NEST_HINT_7          | NEST_HINT_7          | NEST_HINT_7          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-175. HINLR7 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_7   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.3.61 HINLR8 Register (offset = 1120h) [reset = 100h]

HINLR8 is shown in Figure 4-189 and described in Table 4-176.

The Host Interrupt Nesting Level Register8 display and control the nesting level for host interrupt 8. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-189. HINLR8 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 | RESERVED NEST_HINT_8 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_8          | NEST_HINT_8          | NEST_HINT_8          | NEST_HINT_8          | NEST_HINT_8          | NEST_HINT_8          | NEST_HINT_8          | NEST_HINT_8          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-176. HINLR8 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_8   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

## 4.5.3.62 HINLR9 Register (offset = 1124h) [reset = 100h]

HINLR9 is shown in Figure 4-190 and described in Table 4-177.

The Host Interrupt Nesting Level Register9 display and control the nesting level for host interrupt 9. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.

## Figure 4-190. HINLR9 Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| AUTO_OVERR IDE       | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| W-0h                 | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    |
| RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 | RESERVED NEST_HINT_9 |
| R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      | R/W-0h R/W-100h      |
| 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| NEST_HINT_9          | NEST_HINT_9          | NEST_HINT_9          | NEST_HINT_9          | NEST_HINT_9          | NEST_HINT_9          | NEST_HINT_9          | NEST_HINT_9          |
| R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             | R/W-100h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-177. HINLR9 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | AUTO_OVERRIDE | W      | 0h      | Reads return 0. Writes of a 1 override the auto updating of the nesting_level and use the write data.                                                                                                                             |
| 30-9  | RESERVED      | R/W    | 0h      |                                                                                                                                                                                                                                   |
| 8-0   | NEST_HINT_9   | R/W    | 100h    | Reads return the current nesting level for the host interrupt. Writes set the nesting level for the host interrupt. In auto mode the value is updated internally unless the auto_override is set and then the write data is used. |

<!-- image -->