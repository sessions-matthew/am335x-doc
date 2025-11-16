## 7.3.6 DDR2/3/mDDR PHY Registers

Table 7-260 lists the memory-mapped registers for the DDR2/3 mDDR PHY. Configure the DDR PHY Control Register for calibration of board delay and other parameters to get the SDRAM device working at a different speed.

Note: These registers are write-only due to a silicon bug. The contents of these registers cannot be read.

Table 7-260. Memory-Mapped Registers for DDR2/3/mDDR PHY

| Register Name                       | Type   | Register                                                                  | Register   | Address   |
|-------------------------------------|--------|---------------------------------------------------------------------------|------------|-----------|
|                                     |        | Description                                                               | Reset      | Offset    |
| CMD0_REG_PHY_CTRL_SLAVE_RATIO_0     | W      | DDR PHY Command 0 Address/Command Slave Ratio Register                    | 0x80       | 0x01C     |
| CMD0_REG_PHY_DLL_LOCK_DIFF_0        | W      | DDR PHY Command 0 Address/Command DLL Lock Difference Register            | 0x4        | 0x028     |
| CMD0_REG_PHY_INVERT_CLKOUT_0        | W      | DDR PHY Command 0 Invert Clockout Selection Register                      | 0x0        | 0x02C     |
| CMD1_REG_PHY_CTRL_SLAVE_RATIO_0     | W      | DDR PHY Command 1 Address/Command Slave Ratio Register                    | 0x80       | 0x050     |
| CMD1_REG_PHY_DLL_LOCK_DIFF_0        | W      | DDR PHY Command 1 Address/Command DLL Lock Difference Register            | 0x4        | 0x05C     |
| CMD1_REG_PHY_INVERT_CLKOUT_0        | W      | DDR PHY Command 1 Invert Clockout Selection Register                      | 0x0        | 0x060     |
| CMD2_REG_PHY_CTRL_SLAVE_RATIO_0     | W      | DDR PHY Command 2 Address/Command Slave Ratio Register                    | 0x80       | 0x084     |
| CMD2_REG_PHY_DLL_LOCK_DIFF_0        | W      | DDR PHY Command 2 Address/Command DLL Lock Difference Register            | 0x4        | 0x090     |
| CMD2_REG_PHY_INVERT_CLKOUT_0        | W      | DDR PHY Command 2 Invert Clockout Selection Register                      | 0x0        | 0x094     |
| DATA0_REG_PHY_RD_DQS_SLAVE_RATIO _0 | W      | DDR PHY Data Macro 0 Read DQS Slave Ratio Register                        | 0x04010040 | 0x0C8     |
| DATA0_REG_PHY_WR_DQS_SLAVE_RATI O_0 | W      | DDR PHY Data Macro 0 Write DQS Slave Ratio Register                       | 0x0        | 0x0DC     |
| DATA0_REG_PHY_WRLVL_INIT_RATIO_0    | W      | DDR PHY Data Macro 0 Write Leveling Init Ratio Register                   | 0x0        | 0x0F0     |
| DATA0_REG_PHY_WRLVL_INIT_MODE_0     | W      | DDR PHY Data Macro 0 Write Leveling Init Mode Ratio Selection Register    | 0x0        | 0x0F8     |
| DATA0_REG_PHY_GATELVL_INIT_RATIO_0  | W      | DDR PHY Data Macro 0 DQS Gate Training Init Ratio Register                | 0x0        | 0x0FC     |
| DATA0_REG_PHY_GATELVL_INIT_MODE_0   | W      | DDR PHY Data Macro 0 DQS Gate Training Init Mode Ratio Selection Register | 0x0        | 0x104     |

<!-- image -->

<!-- image -->

Table 7-260. Memory-Mapped Registers for DDR2/3/mDDR PHY (continued)

| Register Name                        | Type   | Register                                                                  | Register   | Address   |
|--------------------------------------|--------|---------------------------------------------------------------------------|------------|-----------|
| DATA0_REG_PHY_FIFO_WE_SLAVE_RATI O_0 | W      | DDR PHY Data Macro 0 DQS Gate Slave Ratio Register                        | 0x0        | 0x108     |
| DATA0_REG_PHY_DQ_OFFSET_0            | W      | Offset value from DQS to DQ for Data Macro 0                              | 0x40       | 0x11C     |
| DATA0_REG_PHY_WR_DATA_SLAVE_RATI O_0 | W      | DDR PHY Data Macro 0 Write Data Slave Ratio Register                      | 0x04010040 | 0x120     |
| DATA0_REG_PHY_USE_RANK0_DELAYS       | W      | DDR PHY Data Macro 0 Delay Selection Register                             | 0x0        | 0x134     |
| DATA0_REG_PHY_DLL_LOCK_DIFF_0        | W      | DDR PHY Data Macro 0 DLL Lock Difference Register                         | 0x4        | 0x138     |
| DATA1_REG_PHY_RD_DQS_SLAVE_RATIO _0  | W      | DDR PHY Data Macro 1 Read DQS Slave Ratio Register                        | 0x04010040 | 0x16C     |
| DATA1_REG_PHY_WR_DQS_SLAVE_RATI O_0  | W      | DDR PHY Data Macro 1 Write DQS Slave Ratio Register                       | 0x0        | 0x180     |
| DATA1_REG_PHY_WRLVL_INIT_RATIO_0     | W      | DDR PHY Data Macro 1 Write Leveling Init Ratio Register                   | 0x0        | 0x194     |
| DATA1_REG_PHY_WRLVL_INIT_MODE_0      | W      | DDR PHY Data Macro 1 Write Leveling Init Mode Ratio Selection Register    | 0x0        | 0x19C     |
| DATA1_REG_PHY_GATELVL_INIT_RATIO_0   | W      | DDR PHY Data Macro 1 DQS Gate Training Init Ratio Register                | 0x0        | 0x1A0     |
| DATA1_REG_PHY_GATELVL_INIT_MODE_0    | W      | DDR PHY Data Macro 1 DQS Gate Training Init Mode Ratio Selection Register | 0x0        | 0x1A8     |
| DATA1_REG_PHY_FIFO_WE_SLAVE_RATI O_0 | W      | DDR PHY Data Macro 1 DQS Gate Slave Ratio Register                        | 0x0        | 0x1AC     |
| DATA1_REG_PHY_DQ_OFFSET_0            | W      | Offset value from DQS to DQ for Data Macro 1                              | 0x40       | 0x1C0     |
| DATA1_REG_PHY_WR_DATA_SLAVE_RATI O_0 | W      | DDR PHY Data Macro 1 Write Data Slave Ratio Register                      | 0x04010040 | 0x1C4     |
| DATA1_REG_PHY_USE_RANK0_DELAYS       | W      | DDR PHY Data Macro 1 Delay Selection Register                             | 0x0        | 0x1D8     |
| DATA1_REG_PHY_DLL_LOCK_DIFF_0        | W      | DDR PHY Data Macro 1 DLL Lock Difference Register                         | 0x4        | 0x1DC     |

<!-- image -->

## 7.3.6.1 DDR PHY Command 0/1/2 Address/Command Slave Ratio Register (CMD0/1/2\_REG\_PHY\_CTRL\_SLAVE\_RATIO\_0)

The DDR PHY Command 0/1/2 Address/Command Slave Ratio Register (CMD0/1/2\_REG\_PHY\_CTRL\_SLAVE\_RATIO\_0) is shown in the figure and table below.

## Figure 7-242. DDR PHY Command 0/1/2 Address/Command Slave Ratio Register (CMD0/1/2\_REG\_PHY\_CTRL\_SLAVE\_RATIO\_0)

31

16

Reserved

R-0

15

10

9

0

Reserved

CMD\_SLAVE\_RATIO

R-0

W-100h

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-261. DDR PHY Command 0/1/2 Address/Command Slave Ratio Register (CMD0/1/2\_REG\_PHY\_CTRL\_SLAVE\_RATIO\_0) Field Descriptions

| Bit   | Field           | Value   | Description                                                                                                                                                                                                                                                                                                                           |
|-------|-----------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | Reserved        |         | Reserved                                                                                                                                                                                                                                                                                                                              |
| 9-0   | CMD_SLAVE_RATIO | 0-100h  | Ratio value for address/command launch timing in DDR PHY macro. This is the fraction of a clock cycle represented by the shift to be applied to the read DQS in units of 256ths. In other words, the full-cycle tap value from the master DLL will be scaled by this number over 256 to get the delay value for the slave delay line. |

## 7.3.6.2 DDR PHY Command 0/1/2 Address/Command DLL Lock Difference Register(CMD0/1/2\_REG\_PHY\_DLL\_LOCK\_DIFF\_0)

The DDR PHY Command 0/1/2 Address/Command DLL Lock Difference Register (CMD0/1/2\_REG\_PHY\_DLL\_LOCK\_DIFF\_0) is shown in the figure and table below. This register should be left at its default value and should not be altered for proper operation.

## Figure 7-243. DDR PHY Command 0/1/2 Address/Command DLL Lock Difference Register (CMD0/1/2\_REG\_PHY\_DLL\_LOCK\_DIFF\_0)

<!-- image -->

31

16

Reserved

R-0

15

4

3

0

Reserved

DLL\_LOCK\_DIFF

R-0

W-4h

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

## Table 7-262. DDR PHY Command 0/1/2 Address/Command DLL Lock Difference Register (CMD0/1/2\_REG\_PHY\_DLL\_LOCK\_DIFF\_0) Field Descriptions

| Bit   | Field         | Value   | Description                                                                                                                                                                                                                             |
|-------|---------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | Reserved      |         | Reserved                                                                                                                                                                                                                                |
| 3-0   | DLL_LOCK_DIFF | 0-4h    | The max number of delay line taps variation allowed while maintaining the master DLL lock.This is calculated as total jitter/ delay line tap size, where total jitter is half of (incoming clock jitter (pp) + delay line jitter (pp)). |

<!-- image -->

## 7.3.6.3 DDR PHY Command 0/1/2 Invert Clockout Selection Register( CMD0/1/2\_REG\_PHY\_INVERT\_CLKOUT\_0)

The CDDR PHY Command 0/1/2 Invert Clockout Selection Register( CMD0/1/2\_REG\_PHY\_INVERT\_CLKOUT\_0) is shown in the figure and table below.

## Figure 7-244. DDR PHY Command 0/1/2 Invert Clockout Selection Register( CMD0/1/2\_REG\_PHY\_INVERT\_CLKOUT\_0)

| 31       |          | 16             |          |
|----------|----------|----------------|----------|
| Reserved | Reserved | Reserved       | Reserved |
| 15       | 1        | 0              |          |
| Reserved | Reserved | INVERT_CLK_SEL |          |
| R-0      | R-0      | W-0            |          |

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-263. DDR PHY Command 0/1/2 Invert Clockout Selection Register( CMD0/1/2\_REG\_PHY\_INVERT\_CLKOUT\_0) Field Descriptions

| Bit   | Field           | Value   | Description                                                                                                  |
|-------|-----------------|---------|--------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved        | 0       | Reserved                                                                                                     |
| 0     | INVERT_CLK_SE L | 0 1     | Inverts the polarity of DRAM clock. Core clock is passed on to DRAM inverted core clock is passed on to DRAM |

## 7.3.6.4 DDR PHY Data Macro 0/1 Read DQS Slave Ratio Register (DATA0/1\_REG\_PHY\_RD\_DQS\_SLAVE\_RATIO\_0)

The DDR PHY Data Macro 0/1 Read DQS Slave Ratio Register(DATA0/1\_REG\_PHY\_RD\_DQS\_SLAVE\_RATIO\_0) is shown in the figure and table below.

## Figure 7-245. DDR PHY Data Macro 0/1 Read DQS Slave Ratio Register (DATA0/1\_REG\_PHY\_RD\_DQS\_SLAVE\_RATIO\_0))

| 31       |          |                        | 16                     |                        |
|----------|----------|------------------------|------------------------|------------------------|
|          | Reserved |                        | Reserved               |                        |
|          | R-0h     |                        | R-0h                   |                        |
| 15       | 10       | 9                      |                        | 0                      |
| Reserved | Reserved | RD_DQS_SLAVE_RATIO_CS0 | RD_DQS_SLAVE_RATIO_CS0 | RD_DQS_SLAVE_RATIO_CS0 |

R-0h

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-264. DDR PHY Data Macro 0/1 Read DQS Slave Ratio Register (DATA0/1\_REG\_PHY\_RD\_DQS\_SLAVE\_RATIO\_0) Field Descriptions

| Bit   | Field                   | Value   | Description                                                                                                                                                                                                                                                                                                       |
|-------|-------------------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | Reserved                |         | Reserved                                                                                                                                                                                                                                                                                                          |
| 19-10 | Reserved                | 0h      | Reserved                                                                                                                                                                                                                                                                                                          |
| 9-0   | RD_DQS_SLAVE _RATIO_CS0 | 40h     | Ratio value for Read DQS slave DLL for CS0. This is the fraction of a clock cycle represented by the shift to be applied to the read DQS in units of 256ths. In other words, the full-cycle tap value from the master DLL will be scaled by this number over 256 to get the delay value for the slave delay line. |

W-40h

## 7.3.6.5 DDR PHY Data Macro 0/1 Write DQS Slave Ratio Register (DATA0/1\_REG\_PHY\_WR\_DQS\_SLAVE\_RATIO\_0)

The DDR PHY Data Macro 0/1 Write DQS Slave Ratio

Register(DATA0/1\_REG\_PHY\_WR\_DQS\_SLAVE\_RATIO\_0) is shown in the figure and table below.

## Table 7-265. DDR PHY Data Macro 0/1 Write DQS Slave Ratio Register (DATA0/1\_REG\_PHY\_WR\_DQS\_SLAVE\_RATIO\_0)

| 31   |
|------|

R-0

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-266. DDR PHY Data Macro 0/1 Write DQS Slave Ratio Register( DATA0/1\_REG\_PHY\_WR\_DQS\_SLAVE\_RATIO\_0) Field Descriptions

| Bit   | Field                   | Value   | Description                                                                                                                                                                                                                                                                                                         |
|-------|-------------------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | Reserved                | 0       | Reserved                                                                                                                                                                                                                                                                                                            |
| 19-10 | Reserved                |         | Reserved                                                                                                                                                                                                                                                                                                            |
| 9-0   | WR_DQS_SLAVE_R ATIO_CS0 |         | Ratio value for Write DQS slave DLL for CS0. This is the fraction of a clock cycle represented by the shift to be applied to the write DQS in units of 256ths. In other words, the full-cycle tap value from the master DLL will be scaled by this number over 256 to get the delay value for the slave delay line. |

## 7.3.6.6 DDR PHY Data Macro 0/1 Write Leveling Init Ratio Register ( DATA0/1\_REG\_PHY\_WRLVL\_INIT\_RATIO\_0)

The DDR PHY Data Macro 0/1 Write Leveling Init Ratio Register ( DATA0/1\_REG\_PHY\_WRLVL\_INIT\_RATIO\_0) is showin in the figure and table below.

## Figure 7-246. DDR PHY Data Macro 0/1 Write Leveling Init Ratio Register ( DATA0/1\_REG\_PHY\_WRLVL\_INIT\_RATIO\_0)

| 31       | 20                   | 19 16    |
|----------|----------------------|----------|
| Reserved |                      | Reserved |
| R-0      |                      | R-0      |
| 15       | 9                    | 0        |
| Reserved | WRLVL_INIT_RATIO_CS0 |          |
| R-0      | W-0                  |          |

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-267. DDR PHY Data Macro 0/1 Write Leveling Init Ratio Register ( DATA0/1\_REG\_PHY\_WRLVL\_INIT\_RATIO\_0) Field Descriptions

| Bit   | Field                 | Value   | Description                                                                                                                |
|-------|-----------------------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-20 | Reserved              | 0       | Reserved                                                                                                                   |
| 19-10 | Reserved              | 0h      | Reserved                                                                                                                   |
| 9-0   | WRLVL_INIT_RATIO _CS0 | 0h      | The user programmable init ratio used by Write Leveling FSM when DATA0/1_REG_PHY_WRLVL_INIT_MODE_0 register value set to 1 |

W-0h

<!-- image -->

<!-- image -->

## 7.3.6.7 DDR PHY Data Macro 0 Write Leveling Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_WRLVL\_INIT\_MODE\_0)

The DDR PHY Data Macro 0 Write Leveling Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_WRLVL\_INIT\_MODE\_0) is shown in the figure and table below..

## Figure 7-247. DDR PHY Data Macro 0 Write Leveling Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_WRLVL\_INIT\_MODE\_0)

| 31       |          | 16                   |
|----------|----------|----------------------|
| Reserved | Reserved | Reserved             |
| R-0      | R-0      | R-0                  |
| 15       |          | 0                    |
|          | Reserved | WRLVL_INIT_MODE_S EL |
|          | R-0      | W-0                  |

## Table 7-268. DDR PHY Data Macro 0 Write Leveling Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_WRLVL\_INIT\_MODE\_0)

| Bit   | Field                | Value   | Description                                                                                                                                                                                                                                                              |
|-------|----------------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved             | 0       | Reserved                                                                                                                                                                                                                                                                 |
| 0     | WRLVL_INIT_MO DE_SEL | 0 1     | The user programmable init ratio selection mode for Write Leveling FSM. Selects a starting ratio value based on Write Leveling of previous data slice. Selects a starting ratio value based in register DATA0/1_REG_PHY_WRLVL_INIT_RATIO_0 value programmed by the user. |

## 7.3.6.8 DDR PHY Data Macro 0 DQS Gate Training Init Ratio Register (DATA0\_REG\_PHY\_GATELVL\_INIT\_RATIO\_0)

The DDR PHY Data Macro 0 DQS Gate Training Init Ratio Register (DATA0\_REG\_PHY\_GATELVL\_INIT\_RATIO\_0) is shown in the figure and table below.

## Figure 7-248. DDR PHY Data Macro 0 DQS Gate Training Init Ratio Register (DATA0\_REG\_PHY\_GATELVL\_INIT\_RATIO\_0)

| 31       |          |                        | 20                     | 19                     | 16                     |
|----------|----------|------------------------|------------------------|------------------------|------------------------|
|          | Reserved | Reserved               |                        | Reserved               | Reserved               |
|          | R-0      | R-0                    |                        | R-0                    | R-0                    |
| 15       | 10       | 9                      |                        |                        | 0                      |
| Reserved | Reserved | GATELVL_INIT_RATIO_CS0 | GATELVL_INIT_RATIO_CS0 | GATELVL_INIT_RATIO_CS0 | GATELVL_INIT_RATIO_CS0 |
| R-0      | R-0      | W-0                    | W-0                    | W-0                    | W-0                    |

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

## Table 7-269. DDR PHY Data Macro 0 DQS Gate Training Init Ratio Register (DATA0\_REG\_PHY\_GATELVL\_INIT\_RATIO\_0) Field Descriptions

| Bit   | Field                  | Value   | Description                                                                                                                       |
|-------|------------------------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | Reserved               |         | Reserved                                                                                                                          |
| 19-10 | Reserved               | 0h      | Reserved                                                                                                                          |
| 9-0   | GATELVL_INIT_RATIO_CS0 | 0h      | The user programmable init ratio used by DQS Gate Training FSM when DATA0/1/_REG_PHY_GATELVL_INIT_MODE_0 register value set to 1. |

31

15

Reserved

R-0

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-270. DDR PHY Data Macro 0/1 DQS Gate Training Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_GATELVL\_INIT\_MODE\_0) Field Descriptions

| Bit   | Field                 | Value   | Description                                                                                                                                                                                                                                                      |
|-------|-----------------------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved              | 0       | Reserved                                                                                                                                                                                                                                                         |
| 0     | GATELVL_INIT_MODE_SEL | 0 1     | User programmable init ratio selection mode for DQS Gate Training FSM. Selects a starting ratio value based on Write Leveling of the same data slice. selects a starting ratio value based on DATA0/1_REG_PHY_GATELVL_INIT_RATIO_0 value programmed by the user. |

## 7.3.6.10 DDR PHY Data Macro 0/1 DQS Gate Slave Ratio Register (DATA0/1\_REG\_PHY\_FIFO\_WE\_SLAVE\_RATIO\_0)

The DDR PHY Data Macro 0/1 DQS Gate Slave Ratio Register (DATA0/1\_REG\_PHY\_FIFO\_WE\_SLAVE\_RATIO\_0) is shown in the figure and table below.

## Figure 7-250. DDR PHY Data Macro 0/1 DQS Gate Slave Ratio Register(DATA0/1\_REG\_PHY\_FIFO\_WE\_SLAVE\_RATIO\_0)

| 31   |
|------|

R-0

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

## Table 7-271. DDR PHY Data Macro 0/1 DQS Gate Slave Ratio Register (DATA0/1\_REG\_PHY\_FIFO\_WE\_SLAVE\_RATIO\_0) Field Descriptions

| Bit   | Field                        | Value   | Description                      |
|-------|------------------------------|---------|----------------------------------|
| 31-20 | Reserved                     | 0       | Reserved                         |
| 19-10 | Reserved                     | 0h      | Reserved                         |
| 9-0   | RD_DQS_GATE _SLAVE_RATIO_CS0 | 0h      | Ratio value for fifo we for CS0. |

W-0

Reserved

R-0

1

<!-- image -->

## 7.3.6.9 DDR PHY Data Macro 0/1 DQS Gate Training Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_GATELVL\_INIT\_MODE\_0)

The DDR PHY Data Macro 0/1 DQS Gate Training Init Mode Ratio Selection Register(DATA0/1\_REG\_PHY\_GATELVL\_INIT\_MODE\_0) is shown in the figure and table below.

## Figure 7-249. DDR PHY Data Macro 0/1 DQS Gate Training Init Mode Ratio Selection Register (DATA0/1\_REG\_PHY\_GATELVL\_INIT\_MODE\_0)

16

0

GATELVL \_INIT \_MODE\_SEL

W-0

<!-- image -->

## 7.3.6.11 DDR PHY Data Macro 0/1 Write Data Slave Ratio Register (DATA0/1\_REG\_PHY\_WR\_DATA\_SLAVE\_RATIO\_0)

The DDR PHY Data Macro 0/1 Write Data Slave Ratio Register (DATA0/1\_REG\_PHY\_WR\_DATA\_SLAVE\_RATIO\_0) is shown in the figure and table below.

## Figure 7-251. DDR PHY Data Macro 0/1 Write Data Slave Ratio Register (DATA0/1\_REG\_PHY\_WR\_DATA\_SLAVE\_RATIO\_0)

| 31   |
|------|

R-0h

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

## Table 7-272. DDR PHY Data Macro 0/1 Write Data Slave Ratio Register (DATA0/1\_REG\_PHY\_WR\_DATA\_SLAVE\_RATIO\_0) Field Descriptions

| Bit   | Field                   | Value   | Description                                                                                                                                                                                                                                                                                                               |
|-------|-------------------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | Reserved                | 40h     | Reserved                                                                                                                                                                                                                                                                                                                  |
| 19-10 | Reserved                | 0       |                                                                                                                                                                                                                                                                                                                           |
| 9-0   | WR_DATA_SLAVE_RATIO_CS0 | 40h     | Ratio value for write data slave DLL for CS0. This is the fraction of a clock cycle represented by the shift to be applied to the write DQ muxes in units of 256ths. In other words, the full-cycle tap value from the master DLL will be scaled by this number over 256 to get the delay value for the slave delay line. |

W-40h

31

15

Reserved

R-0

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-273. DDR PHY Data Macro 0/1 Delay Selection Register (DATA0/1\_REG\_PHY\_USE\_RANK0\_DELAYS) Field Descriptions

| Bit   | Field                   | Value   | Description                                                                                                                                                                         |
|-------|-------------------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved                | 0       | Reserved                                                                                                                                                                            |
| 0     | PHY_USE_RANK 0_DELAYS_0 | 0 1     | Delay Selection Each Rank uses its own delay. (Recommended). This is applicable only in case of DDR3 Rank 0 delays are used for all ranks. This must be set to 1 for DDR2 and mDDR. |

## 7.3.6.13 DDR PHY Data 0/1 DLL Lock Difference Register (DATA0/1\_REG\_PHY\_DLL\_LOCK\_DIFF\_0)

The DDR PHY Data 0/1 DLL Lock Difference Register (DATA0/1\_REG\_PHY\_DLL\_LOCK\_DIFF\_0) is shown in the figure and table below. This register should be left at its default value and should not be altered for proper operation.

## Figure 7-253. DDR PHY Data 0/1 DLL Lock Difference Register (DATA0/1\_REG\_PHY\_DLL\_LOCK\_DIFF\_0)

31

16

Reserved

R-0

15

4

3

0

Reserved

DLL\_LOCK\_DIFF

R-0

W-4h

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

## Table 7-274. DDR PHY Data 0/1 DLL Lock Difference Register (DATA0/1\_REG\_PHY\_DLL\_LOCK\_DIFF\_0) Field Descriptions

| Bit   | Field         | Value   | Description                                                                                                                                                                                                                             |
|-------|---------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | Reserved      |         | Reserved                                                                                                                                                                                                                                |
| 3-0   | DLL_LOCK_DIFF | 0-4h    | The max number of delay line taps variation allowed while maintaining the master DLL lock.This is calculated as total jitter/ delay line tap size, where total jitter is half of (incoming clock jitter (pp) + delay line jitter (pp)). |

## 7.3.6.14 Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 \_REG\_PHY\_DQ\_OFFSET\_0)

The Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 \_REG\_PHY\_DQ\_OFFSET\_0) is shown in the figure and table below.

Reserved

R-0

1

<!-- image -->

## 7.3.6.12 DDR PHY Data Macro 0/1 Delay Selection Register (DATA0/1\_REG\_PHY\_USE\_RANK0\_DELAYS)

The DATA0/1\_REG\_PHY\_USE\_RANK0\_DELAYS is shown in Figure 7-252 and described in Table 7-273.

## Figure 7-252. DDR PHY Data Macro 0/1 Delay Selection Register (DATA0/1\_REG\_PHY\_USE\_RANK0\_DELAYS)

16

0

RANK0 \_DELAY

W-0

<!-- image -->

| Figure 7-254. Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 _REG_PHY_DQ_OFFSET_0)   | Figure 7-254. Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 _REG_PHY_DQ_OFFSET_0)   | Figure 7-254. Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 _REG_PHY_DQ_OFFSET_0)   |
|--------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------|
| 31                                                                                                     |                                                                                                        | 16                                                                                                     |
| Reserved                                                                                               | Reserved                                                                                               | Reserved                                                                                               |
| 15                                                                                                     | 7                                                                                                      | 0                                                                                                      |
| Reserved Offset value from DQS to DQ                                                                   | Reserved Offset value from DQS to DQ                                                                   | Reserved Offset value from DQS to DQ                                                                   |
| R-0 RW-4h                                                                                              | R-0 RW-4h                                                                                              | R-0 RW-4h                                                                                              |

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

## Table 7-275. Offset value from DQS to DQ for Data Macro Register (DATA0/DATA1 \_REG\_PHY\_DQ\_OFFSET\_0) Field Descriptions

| Bit   | Field                       | Value   | Description                                    |
|-------|-----------------------------|---------|------------------------------------------------|
| 31-7  | Reserved                    |         | Reserved                                       |
| 6-0   | Offset value from DQS to DQ | 0h      | Default value 40 equates to a 90 degree shift. |