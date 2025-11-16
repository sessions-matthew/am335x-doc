<!-- image -->

## 4.5.7.16 RXERR1 Register (Offset = 54h) [reset = 0h]

RXERR1 is shown in Figure 4-271 and described in Table 4-264.

Return to Summary Table.

RX ERROR1

## Figure 4-271. RXERR1 Register

| 31       | 30       | 29       | 28       | 27                  | 26                  | 25                  | 24                  |
|----------|----------|----------|----------|---------------------|---------------------|---------------------|---------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h                | R-0h                | R-0h                |
| 23       | 22       | 21       | 20       | 19                  | 18                  | 17                  | 16                  |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h                | R-0h                | R-0h                |
| 15       | 14       | 13       | 12       | 11                  | 10                  | 9                   | 8                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            | RESERVED            | RESERVED            | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                | R-0h                | R-0h                | R-0h                |
| 7        | 6        | 5        | 4        | 3                   | 2                   | 1                   | 0                   |
|          | RESERVED |          |          | RX_MAX_FRM _CNT_ERR | RX_MIN_FRM_ CNT_ERR | RX_MAX_PRE _CNT_ERR | RX_MIN_PRE_ CNT_ERR |
|          | R-0h     |          |          | R-0h                | R-0h                | R-0h                | R-0h                |

Table 4-264. RXERR1 Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                     |
|-------|---------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED            | R      | 0h      |                                                                                                                                 |
| 3     | RX_MAX_FRM_CNT_ER R | R      | 0h      | Error status of received frame is more than the value of RX_MAX_FRM_CNT. 0x 0: No error occurred 0x 1: Error occurred           |
| 2     | RX_MIN_FRM_CNT_ERR  | R      | 0h      | Error status of received frame is less than the value of RX_MIN_FRM_CNT. 0x 0: No error occurred 0x 1: Error occurred           |
| 1     | RX_MAX_PRE_CNT_ER R | R      | 0h      | Error status of received preamble nibble is more than the value of RX_MAX_PRE_CNT. 0x 0: No error occurred 0x 1: Error occurred |
| 0     | RX_MIN_PRE_CNT_ERR  | R      | 0h      | Error status of received preamble nibble is less than the value of RX_MIN_PRE_CNT. 0x 0: No error occurred 0x 1: Error occurred |

## 4.5.8 PRU\_ICSS\_MDIO Registers

For additional details about the MDIO registers, see Section 14.5.10, MDIO Registers .

## 4.5.9 PRU\_ICSS\_CFG Registers

Table 4-265 lists the memory-mapped registers for the PRU\_ICSS\_CFG. All register offset addresses not listed in Table 4-265 should be considered as reserved locations and the register contents should not be modified.

## Table 4-265. PRU\_ICSS\_CFG Registers

| Offset   | Acronym   | Register Name Section   |
|----------|-----------|-------------------------|
| 0h       | REVID     | Section 4.5.9.1         |
| 4h       | SYSCFG    | Section 4.5.9.2         |
| 8h       | GPCFG0    | Section 4.5.9.3         |
| Ch       | GPCFG1    | Section 4.5.9.4         |
| 10h      | CGR       | Section 4.5.9.5         |
| 14h      | ISRP      | Section 4.5.9.6         |
| 18h      | ISP       | Section 4.5.9.7         |
| 1Ch      | IESP      | Section 4.5.9.8         |
| 20h      | IECP      | Section 4.5.9.9         |
| 28h      | PMAO      | Section 4.5.9.10        |
| 2Ch      | MII_RT    | Section 4.5.9.11        |
| 30h      | IEPCLK    | Section 4.5.9.12        |
| 34h      | SPP       | Section 4.5.9.13        |
| 40h      | PIN_MX    | Section 4.5.9.14        |

<!-- image -->

<!-- image -->

## 4.5.9.1 REVID Register (offset = 0h) [reset = 47000000h]

REVID is shown in Figure 4-272 and described in Table 4-266.

The Revision Register contains the ID and revision information.

## Figure 4-272. REVID Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | REVID                                                                              |
|      | R-47000000h                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-266. REVID Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description   |
|-------|---------|--------|-----------|---------------|
| 31-0  | REVID   | R      | 47000000h | Revision ID   |

## 4.5.9.2 SYSCFG Register (offset = 4h) [reset = 1Ah]

SYSCFG is shown in Figure 4-273 and described in Table 4-267.

The System Configuration Register defines the power IDLE and STANDBY modes.

## Figure 4-273. SYSCFG Register

| 31       | 30       | 29        | 28            | 27           | 26           | 25        | 24        |
|----------|----------|-----------|---------------|--------------|--------------|-----------|-----------|
| RESERVED | RESERVED | RESERVED  | RESERVED      | RESERVED     | RESERVED     | RESERVED  | RESERVED  |
| R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h        | R/W-0h       | R/W-0h       | R/W-0h    | R/W-0h    |
| 23       | 22       | 21        | 20            | 19           | 18           | 17        | 16        |
| RESERVED | RESERVED | RESERVED  | RESERVED      | RESERVED     | RESERVED     | RESERVED  | RESERVED  |
| R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h        | R/W-0h       | R/W-0h       | R/W-0h    | R/W-0h    |
| 15       | 14       | 13        | 12            | 11           | 10           | 9         | 8         |
| RESERVED | RESERVED | RESERVED  | RESERVED      | RESERVED     | RESERVED     | RESERVED  | RESERVED  |
| R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h        | R/W-0h       | R/W-0h       | R/W-0h    | R/W-0h    |
| 7        | 6        | 5         | 4             | 3            | 2            | 1         | 0         |
| RESERVED | RESERVED | SUB_MWAIT | STANDBY_INI T | STANDBY_MODE | STANDBY_MODE | IDLE_MODE | IDLE_MODE |
| R/W-0h   | R/W-0h   | R-0h      | R/W-1h        | R/W-2h       | R/W-2h       | R/W-2h    | R/W-2h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-267. SYSCFG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                         |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED     | R/W    | 0h      |                                                                                                                                                                                                                                                                     |
| 5     | SUB_MWAIT    | R      | 0h      | Status bit for wait state. 0 = Ready for Transaction 1 = Wait until 0                                                                                                                                                                                               |
| 4     | STANDBY_INIT | R/W    | 1h      | 1 = Initiate standby sequence. 0 = Enable OCP master ports.                                                                                                                                                                                                         |
| 3-2   | STANDBY_MODE | R/W    | 2h      | 0h = Force standby mode: Initiator unconditionally in standby (standby = 1). 1h = No standby mode: Initiator unconditionally out of standby (standby = 0). 2h = Smart standby mode: Standby requested by initiator depending on internal conditions. 3h = Reserved. |
| 1-0   | IDLE_MODE    | R/W    | 2h      | 0h = Force-idle mode. 1h = No-idle mode. 2h = Smart-idle mode. 3h = Reserved.                                                                                                                                                                                       |

<!-- image -->

<!-- image -->

## 4.5.9.3 GPCFG0 Register (offset = 8h) [reset = 0h]

GPCFG0 is shown in Figure 4-274 and described in Table 4-268.

The General Purpose Configuration 0 Register defines the GPI/O configuration for PRU0.

## Figure 4-274. GPCFG0 Register

| 31             | 30             | 29            | 28            | 27                 | 26                 | 25               | 24             |
|----------------|----------------|---------------|---------------|--------------------|--------------------|------------------|----------------|
| RESERVED       | RESERVED       | RESERVED      | RESERVED      | RESERVED           | RESERVED           | PRU0_GPO_S H_SEL | PRU0_GPO_DI V1 |
| R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             | R-0h             | R/W-0h         |
| 23             | 22             | 21            | 20            | 19                 | 18                 | 17               | 16             |
| PRU0_GPO_DIV1  | PRU0_GPO_DIV1  | PRU0_GPO_DIV1 | PRU0_GPO_DIV1 | PRU0_GPO_DIV0      | PRU0_GPO_DIV0      | PRU0_GPO_DIV0    | PRU0_GPO_DIV0  |
| R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h         |
| 15             | 14             | 13            | 12            | 11                 | 10                 | 9                | 8              |
| PRU0_GPO_DI V0 | PRU0_GPO_M ODE | PRU0_GPI_SB   |               | PRU0_GPI_DIV1      | PRU0_GPI_DIV1      | PRU0_GPI_DIV1    | PRU0_GPI_DIV1  |
| R/W-0h         | R/W-0h         | R/W-0h        |               | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h         |
| 7              | 6              | 5             | 4             | 3                  | 2                  | 1                | 0              |
| PRU0_GPI_DIV0  | PRU0_GPI_DIV0  | PRU0_GPI_DIV0 | PRU0_GPI_DIV0 | PRU0_GPI_CL K_MODE | PRU0_GPI_CL K_MODE | PRU0_GPI_MODE    | PRU0_GPI_MODE  |
| R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-268. GPCFG0 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                             |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED        | R/W    | 0h      |                                                                                                                                                                                                                                                                                                         |
| 25    | PRU0_GPO_SH_SEL | R/W    | 0h      | Defines which shadow register is currently getting used for GPO shifting. 0 = gpo_sh0 is selected 1 = gpo_sh1 is selected                                                                                                                                                                               |
| 24-20 | PRU0_GPO_DIV1   | R/W    | 0h      | Divisor value (divide by PRU0_GPO_DIV1 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                                                                                                                                                                               |
| 19-15 | PRU0_GPO_DIV0   | R/W    | 0h      | Divisor value (divide by PRU0_GPO_DIV0 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                                                                                                                                                                               |
| 14    | PRU0_GPO_MODE   | R/W    | 0h      | PRU GPO (R30) modes: 0 = Direct output mode 1 = Serial output mode                                                                                                                                                                                                                                      |
| 13    | PRU0_GPI_SB     | R/W    | 0h      | Start Bit event for 28-bit shift in mode. PRU0_GPI_SB (pru0_r31_status[29]) is set when first capture of a 1 on pru0_r31_status[0]. Read 1: Start Bit event occurred. Read 0: Start Bit event has not occurred. Write 1: Will clear PRU0_GPI_SB and clear the whole shift register. Write 0: No Effect. |
| 12-8  | PRU0_GPI_DIV1   | R/W    | 0h      | Divisor value (divide by PRU0_GPI_DIV1 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                                                                                                                                                                               |

## Table 4-268. GPCFG0 Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                |
|-------|-------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 7-3   | PRU0_GPI_DIV0     | R/W    | 0h      | Divisor value (divide by PRU0_GPI_DIV0 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                  |
| 2     | PRU0_GPI_CLK_MODE | R/W    | 0h      | Parallel 16-bit capture mode clock edge. 0 = Use the positive edge of pru0_r31_status[16] 1 = Use the negative edge of pru0_r31_status[16] |
| 1-0   | PRU0_GPI_MODE     | R/W    | 0h      | PRU GPI (R31) modes: 0h = Direct input mode. 1h = 16bit parallel capture mode. 2h = 28bit shift in mode. 3h = Mii_rt mode                  |

<!-- image -->

<!-- image -->

## 4.5.9.4 GPCFG1 Register (offset = Ch) [reset = 0h]

GPCFG1 is shown in Figure 4-275 and described in Table 4-269.

The General Purpose Configuration 1 Register defines the GPI/O configuration for PRU1.

## Figure 4-275. GPCFG1 Register

| 31             | 30             | 29            | 28            | 27                 | 26                 | 25               | 24             |
|----------------|----------------|---------------|---------------|--------------------|--------------------|------------------|----------------|
| RESERVED       | RESERVED       | RESERVED      | RESERVED      | RESERVED           | RESERVED           | PRU1_GPO_S H_SEL | PRU1_GPO_DI V1 |
| R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             | R-0h             | R/W-0h         |
| 23             | 22             | 21            | 20            | 19                 | 18                 | 17               | 16             |
| PRU1_GPO_DIV1  | PRU1_GPO_DIV1  | PRU1_GPO_DIV1 | PRU1_GPO_DIV1 | PRU1_GPO_DIV0      | PRU1_GPO_DIV0      | PRU1_GPO_DIV0    | PRU1_GPO_DIV0  |
| R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h         |
| 15             | 14             | 13            | 12            | 11                 | 10                 | 9                | 8              |
| PRU1_GPO_DI V0 | PRU1_GPO_M ODE | PRU1_GPI_SB   |               | PRU1_GPI_DIV1      | PRU1_GPI_DIV1      | PRU1_GPI_DIV1    | PRU1_GPI_DIV1  |
| R/W-0h         | R/W-0h         | R/W-0h        |               | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h         |
| 7              | 6              | 5             | 4             | 3                  | 2                  | 1                | 0              |
| PRU1_GPI_DIV0  | PRU1_GPI_DIV0  | PRU1_GPI_DIV0 | PRU1_GPI_DIV0 | PRU1_GPI_CL K_MODE | PRU1_GPI_CL K_MODE | PRU1_GPI_MODE    | PRU1_GPI_MODE  |
| R/W-0h         | R/W-0h         | R/W-0h        | R/W-0h        | R/W-0h             | R/W-0h             | R/W-0h           | R/W-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-269. GPCFG1 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                         |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED        | R/W    | 0h      |                                                                                                                                                                                                                                                                                                     |
| 25    | PRU1_GPO_SH_SEL | R/W    | 0h      | Defines which shadow register is currently getting used for GPO shifting. 0 = gpo_sh0 is selected 1 = gpo_sh1 is selected                                                                                                                                                                           |
| 24-20 | PRU1_GPO_DIV1   | R/W    | 0h      | Divisor value (divide by PRU1_GPO_DIV1 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                                                                                                                                                                           |
| 19-15 | PRU1_GPO_DIV0   | R/W    | 0h      | Divisor value (divide by PRU1_GPO_DIV0 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                                                                                                                                                                           |
| 14    | PRU1_GPO_MODE   | R/W    | 0h      | PRU GPO (R30) modes: 0 = Direct output mode 1 = Serial output mode                                                                                                                                                                                                                                  |
| 13    | PRU1_GPI_SB     | R/W    | 0h      | 28-bit shift in mode Start Bit event. PRU1_GPI_SB (pru1_r31_status[29]) is set when first capture of a 1 on pru1_r31_status[0]. Read 1: Start Bit event occurred. Read 0: Start Bit event has not occurred. Write 1: Will clear PRU1_GPI_SB and clear the whole shift register. Write 0: No Effect. |
| 12-8  | PRU1_GPI_DIV1   | R/W    | 0h      | Divisor value (divide by PRU1_GPI_DIV1 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                                                                                                                                                                           |

## Table 4-269. GPCFG1 Register Field Descriptions (continued)

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                |
|-------|-------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 7-3   | PRU1_GPI_DIV0     | R/W    | 0h      | Divisor value (divide by PRU1_GPI_DIV0 + 1). 0h = div 1.0. 1h = div 1.5. 2h = div 2.0. .. 1eh = div 16.0. 1fh = reserved.                  |
| 2     | PRU1_GPI_CLK_MODE | R/W    | 0h      | Parallel 16-bit capture mode clock edge. 0 = Use the positive edge of pru1_r31_status[16] 1 = Use the negative edge of pru1_r31_status[16] |
| 1-0   | PRU1_GPI_MODE     | R/W    | 0h      | PRU GPI (R31) modes: 0h = Direct input mode. 1h = 16bit parallel capture mode. 2h = 28bit shift in mode. 3h = Mii_rt mode                  |

<!-- image -->

<!-- image -->

## 4.5.9.5 CGR Register (offset = 10h) [reset = 24924h]

CGR is shown in Figure 4-276 and described in Table 4-270.

The Clock Gating Register controls the state of Clock Management of the different modules. Software should not clear {module}\_CLK\_EN until {module}\_CLK\_STOP\_ACK is 0x1.

## Figure 4-276. CGR Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           |
| R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             | R/W-0h             |
| 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | IEP_CLK_EN         | IEP_CLK_STO P_ACK  |
| R/W-0h R/W-1h      | R/W-0h R/W-1h      | R/W-0h R/W-1h      | R/W-0h R/W-1h      | R/W-0h R/W-1h      | R/W-0h R/W-1h      | R/W-0h R/W-1h      | R-0h               |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| IEP_CLK_STO P_REQ  | ECAP_CLK_E N       | ECAP_CLK_ST OP_ACK | ECAP_CLK_ST OP_REQ | UART_CLK_E N       | UART_CLK_ST OP_ACK | UART_CLK_ST OP_REQ | INTC_CLK_EN        |
| R/W-0h             | R/W-1h             | R-0h               | R/W-0h             | R/W-1h             | R-0h               | R/W-0h             | R/W-1h             |
| 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| INTC_CLK_ST OP_ACK | INTC_CLK_ST OP_REQ | PRU1_CLK_EN        | PRU1_CLK_ST OP_ACK | PRU1_CLK_ST OP_REQ | PRU0_CLK_EN        | PRU0_CLK_ST OP_ACK | PRU0_CLK_ST OP_REQ |
| R-0h               | R/W-0h             | R/W-1h             | R-0h               | R/W-0h             | R/W-1h             | R-0h               | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-270. CGR Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED          | R/W    | 0h      |                                                                                                     |
| 17    | IEP_CLK_EN        | R/W    | 1h      | IEP clock enable. 0 = Disable Clock 1 = Enable Clock                                                |
| 16    | IEP_CLK_STOP_ACK  | R      | 0h      | Acknowledgement that IEP clock can be stopped. 0 = Not Ready to Gate Clock 1 = Ready to Gate Clock  |
| 15    | IEP_CLK_STOP_REQ  | R/W    | 0h      | IEP request to stop clock. 0 = do not request to stop Clock 1 = request to stop Clock               |
| 14    | ECAP_CLK_EN       | R/W    | 1h      | ECAP clock enable. 0 = Disable Clock 1 = Enable Clock                                               |
| 13    | ECAP_CLK_STOP_ACK | R      | 0h      | Acknowledgement that ECAP clock can be stopped. 0 = Not Ready to Gate Clock 1 = Ready to Gate Clock |
| 12    | ECAP_CLK_STOP_REQ | R/W    | 0h      | ECAP request to stop clock. 0 = do not request to stop Clock 1 = request to stop Clock              |
| 11    | UART_CLK_EN       | R/W    | 1h      | UART clock enable. 0 = Disable Clock 1 = Enable Clock                                               |
| 10    | UART_CLK_STOP_ACK | R      | 0h      | Acknowledgement that UART clock can be stopped. 0 = Not Ready to Gate Clock 1 = Ready to Gate Clock |
| 9     | UART_CLK_STOP_REQ | R/W    | 0h      | UART request to stop clock. 0 = do not request to stop Clock 1 = request to stop Clock              |
| 8     | INTC_CLK_EN       | R/W    | 1h      | INTC clock enable. 0 = Disable Clock 1 = Enable Clock                                               |

## Table 4-270. CGR Register Field Descriptions (continued)

|   Bit | Field             | Type   | Reset   | Description                                                                                         |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------|
|     7 | INTC_CLK_STOP_ACK | R      | 0h      | Acknowledgement that INTC clock can be stopped. 0 = Not Ready to Gate Clock 1 = Ready to Gate Clock |
|     6 | INTC_CLK_STOP_REQ | R/W    | 0h      | INTC request to stop clock. 0 = do not request to stop Clock 1 = request to stop Clock              |
|     5 | PRU1_CLK_EN       | R/W    | 1h      | PRU1 clock enable. 0 = Disable Clock 1 = Enable Clock                                               |
|     4 | PRU1_CLK_STOP_ACK | R      | 0h      | Acknowledgement that PRU1 clock can be stopped. 0 = Not Ready to Gate Clock 1 = Ready to Gate Clock |
|     3 | PRU1_CLK_STOP_REQ | R/W    | 0h      | PRU1 request to stop clock. 0 = do not request to stop Clock 1 = request to stop Clock              |
|     2 | PRU0_CLK_EN       | R/W    | 1h      | PRU0 clock enable. 0 = Disable Clock 1 = Enable Clock                                               |
|     1 | PRU0_CLK_STOP_ACK | R      | 0h      | Acknowledgement that PRU0 clock can be stopped. 0 = Not Ready to Gate Clock 1 = Ready to Gate Clock |
|     0 | PRU0_CLK_STOP_REQ | R/W    | 0h      | PRU0 request to stop clock. 0 = do not request to stop Clock 1 = request to stop Clock              |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.9.6 ISRP Register (offset = 14h) [reset = 0h]

ISRP is shown in Figure 4-277 and described in Table 4-271.

The IRQ Status Raw Parity register is a snapshot of the IRQ raw status for the PRU ICSS memory parity events. The raw status is set even if the event is not enabled.

## Figure 4-277. ISRP Register

| 31                         | 30       | 29       | 28       | 27                      | 26       | 25       | 24       |
|----------------------------|----------|----------|----------|-------------------------|----------|----------|----------|
| RESERVED                   | RESERVED | RESERVED | RESERVED | RESERVED                | RESERVED | RESERVED | RESERVED |
| 22                         | 22       | 22       | 22       | 22                      | 22       | 22       | 22       |
| 23 21 R/W-0h               | 20       | 19       | 18       | 17 RAM_PE_RAW R/W-0h    | 16       | RESERVED | 15       |
| 14                         | 14       | 14       | 14       | 13                      | 13       | 13       | 13       |
|                            |          |          |          | 12                      | 12       | 12       | 12       |
| 11 PRU1_DMEM_PE_RAW R/W-0h | 10       | 9        | 8        | PRU1_IMEM_PE_RAW R/W-0h | 7        | 6        | 5        |
| 4                          | 4        | 4        | 4        | 3                       | 3        | 3        | 3        |
|                            |          |          |          | 2                       | 2        | 2        | 2        |
| 1 PRU0_DMEM_PE_RAW         | R/W-0h   | R/W-0h   | 0        | PRU0_IMEM_PE_RAW        |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-271. ISRP Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED         | R/W    | 0h      |                                                                                                                                                                                                      |
| 19-16 | RAM_PE_RAW       | R/W    | 0h      | RAM Parity Error RAW for Byte3, Byte2, Byte1, Byte0. Note RAM_PE_RAW[0] maps to Byte0. Write 0: No action. Read 0: No event pending. Read 1: Event pending. Write 1: Set event (debug).              |
| 15-12 | PRU1_DMEM_PE_RAW | R/W    | 0h      | PRU1 DMEM Parity Error RAW for Byte3, Byte2, Byte1, Byte0. Note PRU1_DMEM_PE_RAW[0] maps to Byte0. Write 0: No action. Read 0: No event pending. Read 1: Event pending. Write 1: Set event (debug).  |
| 11-8  | PRU1_IMEM_PE_RAW | R/W    | 0h      | PRU1 IMEM Parity Error RAW for Byte3, Byte2, Byte1, Byte0. Note PRU1_IMEM_PE_RAW[0] maps to Byte0. Write 0: No action. Read 0: No event pending. Read 1: Event pending. Write 1: Set event (debug).  |
| 7-4   | PRU0_DMEM_PE_RAW | R/W    | 0h      | PRU0 DMEM Parity Error RAW for Byte3, Byte2, Byte1, Byte0. Note PRU0_DMEM_PE_RAW[0] maps to Byte0. Write 0: No action. Read 0: No event pending. Read 1: Event pending. Write 1: Set event (debug) . |
| 3-0   | PRU0_IMEM_PE_RAW | R/W    | 0h      | PRU0 IMEM Parity Error RAW for Byte3, Byte2, Byte1, Byte0. Note PRU0_IRAM_PE_RAW[0] maps to Byte0. Write 0: No action. Read 0: No event pending. Read 1: Event pending. Write 1: Set event (debug) . |

## 4.5.9.7 ISP Register (offset = 18h) [reset = 0h]

ISP is shown in Figure 4-278 and described in Table 4-272.

The IRQ Status Parity Register is a snapshot of the IRQ status for the PRU ICSS memory parity events. The status is set only if the event is enabled. Write 1 to clear the status after the interrupt has been serviced.

## Figure 4-278. ISP Register

| 31           | 30           | 29           | 28           | 27                        | 26                        | 25                        | 24                        | 23                        | 22                        | 21                        | 20                        | 19           | 18           | 17           | 16           |             |
|--------------|--------------|--------------|--------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|--------------|--------------|--------------|--------------|-------------|
| R-0h 0h      | R-0h 0h      | R-0h 0h      | R-0h 0h      | R-0h 0h                   | R-0h 0h                   | R-0h 0h                   | R-0h 0h                   | R-0h 0h                   | R-0h 0h                   | R-0h 0h                   | R-0h 0h                   | R-0h 0h      | R-0h 0h      | R-0h 0h      | R-0h 0h      | R-0h 0h     |
| 15           | 14           | 13           | 12           | 11                        | 10                        | 9                         | 8                         | 7 6                       |                           | 5                         | 4                         | 3            | 2            | 1            | 0            |             |
| PRU1_DMEM_PE | PRU1_DMEM_PE | PRU1_DMEM_PE | PRU1_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU1_IMEM_PE PRU0_DMEM_PE | PRU0_IMEM_PE | PRU0_IMEM_PE | PRU0_IMEM_PE | PRU0_IMEM_PE |             |
| 0h 0h 0h 0h  | 0h 0h 0h 0h  | 0h 0h 0h 0h  | 0h 0h 0h 0h  | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h               | 0h 0h 0h 0h  | 0h 0h 0h 0h  | 0h 0h 0h 0h  | 0h 0h 0h 0h  | 0h 0h 0h 0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-272. ISP Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                     |
|-------|--------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED     | R      | 0h      |                                                                                                                                                                                                 |
| 19-16 | RAM_PE       |        | 0h      | RAM Parity Error for Byte3, Byte2, Byte1, Byte0. Note RAM_PE[0] maps to Byte0. Write 0: No action. Read 0: No (enabled) event pending. Read 1: Event pending. Write 1: Clear event.             |
| 15-12 | PRU1_DMEM_PE |        | 0h      | PRU1 DMEM Parity Error for Byte3, Byte2, Byte1, Byte0. Note PRU1_DMEM_PE[0] maps to Byte0. Write 0: No action. Read 0: No (enabled) event pending. Read 1: Event pending. Write 1: Clear event. |
| 11-8  | PRU1_IMEM_PE |        | 0h      | PRU1 IMEM Parity Error for Byte3, Byte2, Byte1, Byte0. Note PRU1_IMEM_PE[0] maps to Byte0. Write 0: No action. Read 0: No (enabled) event pending. Read 1: Event pending. Write 1: Clear event. |
| 7-4   | PRU0_DMEM_PE |        | 0h      | PRU0 DMEM Parity Error for Byte3, Byte2, Byte1, Byte0. Note PRU0_DMEM_PE[0] maps to Byte0. Write 0: No action. Read 0: No(enabled) event pending. Read 1: Event pending. Write 1: Clear event.  |
| 3-0   | PRU0_IMEM_PE |        | 0h      | PRU0 IMEM Parity Error for Byte3, Byte2, Byte1, Byte0. Note PRU0_IMEM_PE[0] maps to Byte0. Write 0: No action. Read 0: No (enabled) event pending. Read 1: Event pending. Write 1: Clear event. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.9.8 IESP Register (offset = 1Ch) [reset = 0h]

IESP is shown in Figure 4-279 and described in Table 4-273.

The IRQ Enable Set Parity Register enables the IRQ PRU ICSS memory parity events.

## Figure 4-279. IESP Register

| 31                         | 30       | 29       | 28       | 27                      | 26       | 25       | 24       |
|----------------------------|----------|----------|----------|-------------------------|----------|----------|----------|
| RESERVED                   | RESERVED | RESERVED | RESERVED | RESERVED                | RESERVED | RESERVED | RESERVED |
| 22                         | 22       | 22       | 22       | 22                      | 22       | 22       | 22       |
| 23 21 R/W-0h               | 20       | 19       | 18       | 17 RAM_PE_SET R/W-0h    | 16       | RESERVED | 15       |
| 14                         | 14       | 14       | 14       | 13                      | 13       | 13       | 13       |
|                            |          |          |          | 12                      | 12       | 12       | 12       |
| 11 PRU1_DMEM_PE_SET R/W-0h | 10       | 9        | 8        | PRU1_IMEM_PE_SET R/W-0h | 7        | 6        | 5        |
| 4                          | 4        | 4        | 4        | 3                       | 3        | 3        | 3        |
|                            |          |          |          | 2                       | 2        | 2        | 2        |
| 1 PRU0_DMEM_PE_SET         | R/W-0h   | R/W-0h   | 0        | PRU0_IMEM_PE_SET        |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-273. IESP Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED         | R/W    | 0h      |                                                                                                                                                                                                                          |
| 19-16 | RAM_PE_SET       | R/W    | 0h      | RAM Parity Error Set Enable for Byte3, Byte2, Byte1, Byte0. Note RAM_PE_SET[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Enable interrupt.             |
| 15-12 | PRU1_DMEM_PE_SET | R/W    | 0h      | PRU1 DMEM Parity Error Set Enable for Byte3, Byte2, Byte1, Byte0. Note PRU1_DMEM_PE_SET[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Enable interrupt. |
| 11-8  | PRU1_IMEM_PE_SET | R/W    | 0h      | PRU1 IMEM Parity Error Set Enable for Byte3, Byte2, Byte1, Byte0. Note PRU1_IMEM_PE_SET[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Enable interrupt. |
| 7-4   | PRU0_DMEM_PE_SET | R/W    | 0h      | PRU0 DMEM Parity Error Set Enable for Byte3, Byte2, Byte1, Byte0. Note PRU0_DMEM_PE_SET[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Enable interrupt. |
| 3-0   | PRU0_IMEM_PE_SET | R/W    | 0h      | PRU0 IMEM Parity Error Set Enable for Byte3, Byte2, Byte1, Byte0. Note PRU0_IMEM_PE_SET[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Enable interrupt. |

## 4.5.9.9 IECP Register (offset = 20h) [reset = 0h]

IECP is shown in Figure 4-280 and described in Table 4-274.

The IRQ Enable Clear Parity Register disables the IRQ PRU ICSS memory parity events.

## Figure 4-280. IECP Register

| 31               | 30       | 29       | 28                        | 27               | 26       | 25       | 24       |
|------------------|----------|----------|---------------------------|------------------|----------|----------|----------|
| RESERVED         | RESERVED | RESERVED | RESERVED                  | RESERVED         | RESERVED | RESERVED | RESERVED |
| 22               | 22       | 22       | 22                        | 22               | 22       | 22       | 22       |
| 23 21 15         | 20       | 19       | 18                        | 17 R/W-0h        | 16       | RESERVED | 14       |
| 13               | 13       | 13       | 13                        | 13               | 13       | 13       | 13       |
| 12               | 12       | 12       | 12                        | 12               | 12       | 12       | 12       |
| 11 R/W-0h 7      | 10       | 9        | 8 PRU1_IMEM_PE_CLR R/W-0h | PRU1_DMEM_PE_CLR | 6        | 5        | 4        |
| 3                | 3        | 3        | 3                         | 2                | 2        | 2        | 2        |
| 1                | 1        | 1        | 1                         | 0                | 0        | 0        | 0        |
| PRU0_DMEM_PE_CLR |          |          | PRU0_IMEM_PE_CLR          |                  |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-274. IECP Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                  |
|-------|------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED         | R/W    | 0h      |                                                                                                                                                                                                                              |
| 15-12 | PRU1_DMEM_PE_CLR | R/W    | 0h      | PRU1 DMEM Parity Error Clear Enable for Byte3, Byte2, Byte1, Byte0. Note PRU1_DMEM_PE_CLR[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Disable interrupt.  |
| 11-8  | PRU1_IMEM_PE_CLR | R/W    | 0h      | PRU1 IMEM Parity Error Clear Enable for Byte3, Byte2, Byte1, Byte0. Note PRU1_IMEM_PE_CLR[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Disable interrupt.  |
| 7-4   | PRU0_DMEM_PE_CLR | R/W    | 0h      | PRU0 DMEM Parity Error Clear Enable for Byte3, Byte2, Byte1, Byte0. Note PRU0_DMEM_PE_CLR[0] maps to Byte0. Write 0: No action. Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Disable interrupt.  |
| 3-0   | PRU0_IMEM_PE_CLR | R/W    | 0h      | PRU0 IMEM Parity Error Clear Enable for Byte3, Byte2, Byte1, Byte0. Note PRU0_IMEM_PE_CLR[0] maps to Byte0. Write 0: No action . Read 0: Interrupt disabled (masked). Read 1: Interrupt enabled. Write 1: Disable interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.9.10 PMAO Register (offset = 28h) [reset = 0h]

PMAO is shown in Figure 4-281 and described in Table 4-275.

The PRU Master OCP Address Offset Register enables for the PRU OCP Master Port Address to have an offset of minus 0x0008\_0000. This enables the PRU to access External Host address space starting at 0x0000\_0000.

## Figure 4-281. PMAO Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24        |
|----------|----------|----------|----------|----------|----------|-----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h    |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h    |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h    |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | PMAO_PRU1 | PMAO_PRU0 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-275. PMAO Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                        |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED  | R/W    | 0h      |                                                                                                                    |
| 1     | PMAO_PRU1 | R/W    | 0h      | PRU1 OCP Master Port Address Offset Enable. 0 = Disable address offset. 1 = Enable address offset of -0x0008_0000. |
| 0     | PMAO_PRU0 | R/W    | 0h      | PRU0 OCP Master Port Address Offset Enable. 0 = Disable address offset. 1 = Enable address offset of -0x0008_0000. |

## 4.5.9.11 MII\_RT Register (Offset = 2Ch) [reset = 0h]

TXCRC1 is shown in Figure 4-282 and described in Table 4-276.

Return to Summary Table.

The MII\_RT Event Enable Register enables MII\_RT mode events to the INTC.

## Figure 4-282. MII\_RT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24               |
|----------|----------|----------|----------|----------|----------|----------|------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h           |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16               |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8                |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h           |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0                |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | MII_RT_EVEN T_EN |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-1h           |

Table 4-276. MII\_RT Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                 |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED        | R/W    | 0h      |                                                                                                             |
| 0     | MII_RT_EVENT_EN | R/W    | 1h      | Enables the MII_RT Events to the INTC. 0h = Disabled (use external events) 1h = Enabled (use MII_RT events) |

<!-- image -->

<!-- image -->

## 4.5.9.12 IEPCLK Register (offset = 30h) [reset = 0h]

IEPCLK is shown in Figure 4-283 and described in Table 4-277.

The IEP Clock Source Register defines the source of the IEP clock.

## Figure 4-283. IEPCLK Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | OCP_EN   |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-277. IEPCLK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------|
| 31-1  | RESERVED | R/W    | 0h      |                                                                                |
| 0     | OCP_EN   | R/W    | 0h      | Selects IEP clock source 0 = iep_clk is the source. 1 = ocp_clk is the source. |

## 4.5.9.13 SPP Register (offset = 34h) [reset = 0h]

SPP is shown in Figure 4-284 and described in Table 4-278.

The Scratch Pad Priority and Configuration Register defines the access priority assigned to the PRU cores and configures the scratch pad XFR shift functionality.

## Figure 4-284. SPP Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25            | 24              |
|----------|----------|----------|----------|----------|----------|---------------|-----------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED        |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h          |
| 23       | 22       | 21       | 20       | 19       | 18       | 17            | 16              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED        |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h          |
| 15       | 14       | 13       | 12       | 11       | 10       | 9             | 8               |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED        |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1             | 0               |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | XFR_SHIFT_E N | PRU1_PAD_H P_EN |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-278. SPP Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED       | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 1     | XFR_SHIFT_EN   | R/W    | 0h      | Enables XIN/XOUT shift functionality. When enabled, R0 [4:0] (internal to PRU) defines the 32-bit offset for XIN and XOUT operations with the scratch pad. 0 = Disabled. 1 = Enabled.                                                                                                                                                                                                                                                                                   |
| 0     | PRU1_PAD_HP_EN | R/W    | 0h      | Defines which PRU wins write cycle arbitration to a common scratch pad bank. The PRU which has higher priority will always perform the write cycle with no wait states. The lower PRU will get stalled/wait states until higher PRU is not performing write cycles. If the lower priority PRU writes to the same byte has the higher priority PRU, then the lower priority PRU will over write the bytes. 0 = PRU0 has highest priority. 1 = PRU1 has highest priority. |

<!-- image -->

<!-- image -->

## 4.5.9.14 PIN\_MX Register (offset = 40h) [reset = 0h]

PIN\_MX is shown in Figure 4-285 and described in Table 4-279.

The Pin Mux Select Register defines the state of the PRU ICSS internal pinmuxing.

## Figure 4-285. PIN\_MX Register

| 31                   | 30                   | 29                   | 28                   | 27                   | 26                   | 25                   | 24                   | 23                   | 22                   | 21                   | 20                   | 19                   | 18                   | 17                   | 16                   |
|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             | RESERVED             |
| R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               | R/W-0h               |
| 15                   | 14                   | 13                   | 12                   | 11                   | 10                   | 9                    | 8                    | 7                    | 6                    | 5                    | 4                    | 3                    | 2                    | 1                    | 0                    |
| RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL | RESERVED PIN_MUX_SEL |
| R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        | R/W-0h R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-279. PIN\_MX Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                    |
|-------|-------------|--------|---------|----------------------------------------------------------------|
| 31-8  | RESERVED    | R/W    | 0h      |                                                                |
| 7-0   | PIN_MUX_SEL | R/W    | 0h      | Defines the state of PIN_MUX_SEL [1:0] for internal pinmuxing. |