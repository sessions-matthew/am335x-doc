## 4.5 Registers

## 4.5.1 PRU\_ICSS\_PRU\_CTRL Registers

Table 4-40 lists the memory-mapped registers for the PRU\_ICSS\_PRU\_CTRL. All register offset addresses not listed in Table 4-40 should be considered as reserved locations and the register contents should not be modified.

Table 4-40. PRU\_ICSS\_PRU\_CTRL Registers

| Offset   | Acronym   | Section         |
|----------|-----------|-----------------|
| 0h       | CTRL      | Section 4.5.1.1 |
| 4h       | STS       | Section 4.5.1.2 |
| 8h       | WAKEUP_EN | Section 4.5.1.3 |
| Ch       | CYCLE     | Section 4.5.1.4 |
| 10h      | STALL     | Section 4.5.1.5 |
| 20h      | CTBIR0    | Section 4.5.1.6 |
| 24h      | CTBIR1    | Section 4.5.1.7 |
| 28h      | CTPPR0    | Section 4.5.1.8 |
| 2Ch      | CTPPR1    | Section 4.5.1.9 |

<!-- image -->

<!-- image -->

## 4.5.1.1 CTRL Register (offset = 0h) [reset = 1h]

CTRL is shown in Figure 4-56 and described in Table 4-41. CONTROL REGISTER

## Figure 4-56. CTRL Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL | PCTR_RST_VAL |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| RUNSTATE     | RESERVED     |              |              | RESERVED     |              |              | SINGLE_STEP  |
| R-0h         | R-0h         |              |              | R/W-0h       |              |              | R/W-0h       |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| RESERVED     | RESERVED     | RESERVED     |              | CTR_EN       | SLEEPING     | EN           | SOFT_RST_N   |
| R/W-0h       | R/W-0h       | R/W-0h       |              | R/W-0h       | R/W-0h       | R/W-0h       | R/W-1h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-41. CTRL Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | PCTR_RST_VAL | R/W    | 0h      | Program Counter Reset Value: This field controls the address where the PRU will start executing code from after it is taken out of reset.                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 15    | RUNSTATE     | R      | 0h      | Run State: This bit indicates whether the PRU is currently executing an instruction or is halted. 0 = PRU is halted and host has access to the instruction RAM and debug registers regions. 1 = PRU is currently running and the host is locked out of the instruction RAM and debug registers regions. This bit is used by an external debug agent to know when the PRU has actually halted when waiting for a HALT instruction to execute, a single step to finish, or any other time when the pru_enable has been cleared.                                                                     |
| 14    | RESERVED     | R      | 0h      | Reserved.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 13-9  | RESERVED     | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 8     | SINGLE_STEP  | R/W    | 0h      | Single Step Enable: This bit controls whether or not the PRU will only execute a single instruction when enabled. 0 = PRU will free run when enabled. 1 = PRU will execute a single instruction and then the pru_enable bit will be cleared. Note that this bit does not actually enable the PRU, it only sets the policy for how much code will be run after the PRU is enabled. The pru_enable bit must be explicitly asserted. It is legal to initialize both the single_step and pru_enable bits simultaneously. (Two independent writes are not required to cause the stated functionality.) |
| 7-4   | RESERVED     | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 3     | CTR_EN       | R/W    | 0h      | PRU Cycle Counter Enable: Enables PRU cycle counters. 0 = Counters not enabled 1 = Counters enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 2     | SLEEPING     | R/W    | 0h      | PRU Sleep Indicator: This bit indicates whether or not the PRU is currently asleep. 0 = PRU is not asleep 1 = PRU is asleep If this bit is written to a 0, the PRU will be forced to power up from sleep mode.                                                                                                                                                                                                                                                                                                                                                                                    |

## Table 4-41. CTRL Register Field Descriptions (continued)

|   Bit | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | EN         | R/W    | 0h      | Processor Enable: This bit controls whether or not the PRU is allowed to fetch new instructions. 0 = PRU is disabled. 1 = PRU is enabled. If this bit is de-asserted while the PRU is currently running and has completed the initial cycle of a multi-cycle instruction (LBxO,SBxO,SCAN, etc.), the current instruction will be allowed to complete before the PRU pauses execution. Otherwise, the PRU will halt immediately. Because of the unpredictability/timing sensitivity of the instruction execution loop, this bit is not a reliable indication of whether or not the PRU is currently running. The pru_state bit should be consulted for an absolute indication of the run state of the core. When the PRU is halted, its internal state remains coherent therefore this bit can be reasserted without issuing a software reset and the PRU will resume processing exactly where it left off in the instruction stream. |
|     0 | SOFT_RST_N | R/W    | 1h      | Soft Reset: When this bit is cleared, the PRU will be reset. This bit is set back to 1 on the next cycle after it has been cleared.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |

<!-- image -->

<!-- image -->

## 4.5.1.2 STS Register (offset = 4h) [reset = 0h]

STS is shown in Figure 4-57 and described in Table 4-42. STATUS REGISTER

## Figure 4-57. STS Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------|------------------------------------------------------------------------------|
| RESERVED   | PCTR                                                                         |
| R-0h       | R-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-42. STS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                   |
| 15-0  | PCTR     | R      | 0h      | Program Counter: This field is a registered (1 cycle delayed) reflection of the PRU program counter. Note that the PC is an instruction address where each instruction is a 32 bit word. This is not a byte address and to compute the byte address just multiply the PC by 4 (PC of 2 = byte address of 0x8, or PC of 8 = byte address of 0x20). |

## 4.5.1.3 WAKEUP\_EN Register (offset = 8h) [reset = 0h]

WAKEUP\_EN is shown in Figure 4-58 and described in Table 4-43. WAKEUP ENABLE REGISTER

## Figure 4-58. WAKEUP\_EN Register

| 31          | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|-------------|------------------------------------------------------------------------------------|
| BITWISE_ENS | BITWISE_ENS                                                                        |
| R/W-0h      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-43. WAKEUP\_EN Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | BITWISE_ENS | R/W    | 0h      | Wakeup Enables: This field is ANDed with the incoming R31 status inputs (whose bit positions were specified in the stmap parameter) to produce a vector which is unary ORed to produce the status_wakeup source for the core. Setting any bit in this vector will allow the corresponding status input to wake up the core when it is asserted high. The PRU should set this enable vector prior to executing a SLP (sleep) instruction to ensure that the desired sources can wake up the core. |

<!-- image -->

<!-- image -->

## 4.5.1.4 CYCLE Register (offset = Ch) [reset = 0h]

CYCLE is shown in Figure 4-59 and described in Table 4-44.

CYCLE COUNT. This register counts the number of cycles for which the PRU has been enabled.

## Figure 4-59. CYCLE Register

19

18

17

16

15

14

13

CYCLECOUNT

0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-44. CYCLE Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CYCLECOUNT |        | 0h      | This value is incremented by 1 for every cycle during which the PRU is enabled and the counter is enabled (both bits EN and CTR_EN set in the PRU control register). Counting halts while the PRU is disabled or counter is disabled, and resumes when re-eneabled. Counter clears the CTR_EN bit in the PRU control register when the count reaches 0xFFFFFFFF. (Count does does not wrap). The register can be read at any time. The register can be cleared when the counter or PRU is disabled. Clearing this register also clears the PRU Stall Count Register. |

12

11

10

31

30

29

28

27

26

25

24

23

22

21

20

9

8

7

6

5

4

3

2

1

0

## 4.5.1.5 STALL Register (offset = 10h) [reset = 0h]

STALL is shown in Figure 4-60 and described in Table 4-45.

STALL COUNT. This register counts the number of cycles for which the PRU has been enabled, but unable to fetch a new instruction. It is linked to the Cycle Count Register (0x0C) such that this register reflects the stall cycles measured over the same cycles as counted by the cycle count register. Thus the value of this register is always less than or equal to cycle count.

## Figure 4-60. STALL Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 STALLCOUNT   |
|------|-----------------------------------------------------------------------------------------------|
| 0h   | 0h                                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-45. STALL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                            |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | STALLCOUNT |        | 0h      | This value is incremented by 1 for every cycle during which the PRU is enabled and the counter is enabled (both bits EN and CTR_EN set in the PRU control register), and the PRU was unable to fetch a new instruction for any reason. |

<!-- image -->

<!-- image -->

## 4.5.1.6 CTBIR0 Register (offset = 20h) [reset = 0h]

CTBIR0 is shown in Figure 4-61 and described in Table 4-46.

CONSTANT TABLE BLOCK INDEX REGISTER 0. This register is used to set the block indices which are used to modify entries 24 and 25 in the PRU Constant Table. This register can be written by the PRU whenever it needs to change to a new base pointer for a block in the State / Scratchpad RAM. This function is useful since the PRU is often processing multiple processing threads which require it to change contexts. The PRU can use this register to avoid requiring excessive amounts of code for repetitive context switching. The format of this register is as follows:

## Figure 4-61. CTBIR0 Register

| 31   | 30   | 29   | 28 27    | 26   | 25   | 24   |    | 23   | 22   | 21 20       | 19   | 18   | 17   | 16   |
|------|------|------|----------|------|------|------|----|------|------|-------------|------|------|------|------|
|      |      |      | RESERVED |      |      |      |    |      |      | C25_BLK_IDX |      |      |      |      |
|      |      |      | R/W-0h   |      |      |      |    |      |      | R/W-0h      |      |      |      |      |
| 15   | 14   | 13   | 12 11    | 10   | 9    | 8    | 7  | 6    | 5    | 4           | 3 2  |      | 1    | 0    |
|      |      |      | RESERVED |      |      |      |    |      |      | C24_BLK_IDX |      |      |      |      |
|      |      |      | R/W-0h   |      |      |      |    |      |      | R/W-0h      |      |      |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-46. CTBIR0 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                       |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED    | R/W    | 0h      |                                                                                                                                   |
| 23-16 | C25_BLK_IDX | R/W    | 0h      | PRU Constant Entry 25 Block Index: This field sets the value that will appear in bits 11:8 of entry 25 in the PRU Constant Table. |
| 15-8  | RESERVED    | R/W    | 0h      |                                                                                                                                   |
| 7-0   | C24_BLK_IDX | R/W    | 0h      | PRU Constant Entry 24 Block Index: This field sets the value that will appear in bits 11:8 of entry 24 in the PRU Constant Table. |

## 4.5.1.7 CTBIR1 Register (offset = 24h) [reset = 0h]

CTBIR1 is shown in Figure 4-62 and described in Table 4-47.

CONSTANT TABLE BLOCK INDEX REGISTER 1. This register is used to set the block indices which are used to modify entries 24 and 25 in the PRU Constant Table. This register can be written by the PRU whenever it needs to change to a new base pointer for a block in the State / Scratchpad RAM. This function is useful since the PRU is often processing multiple processing threads which require it to change contexts. The PRU can use this register to avoid requiring excessive amounts of code for repetitive context switching. The format of this register is as follows:

## Figure 4-62. CTBIR1 Register

| 31   | 30   | 29   | 28 27    | 26   | 25   | 24   | 23   |    | 22 21   | 20          | 19          | 18   | 17   | 16   |
|------|------|------|----------|------|------|------|------|----|---------|-------------|-------------|------|------|------|
|      |      |      | RESERVED |      |      |      |      |    |         | C27_BLK_IDX | C27_BLK_IDX |      |      |      |
|      |      |      | R/W-0h   |      |      |      |      |    |         | R/W-0h      | R/W-0h      |      |      |      |
| 15   | 14   | 13   | 12 11    | 10   | 9    | 8    | 7    | 6  | 5       | 4           | 3 2         |      | 1    | 0    |
|      |      |      | RESERVED |      |      |      |      |    |         | C26_BLK_IDX | C26_BLK_IDX |      |      |      |
|      |      |      | R/W-0h   |      |      |      |      |    |         | R/W-0h      |             |      |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-47. CTBIR1 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                       |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED    | R/W    | 0h      |                                                                                                                                   |
| 23-16 | C27_BLK_IDX | R/W    | 0h      | PRU Constant Entry 27 Block Index: This field sets the value that will appear in bits 11:8 of entry 27 in the PRU Constant Table. |
| 15-8  | RESERVED    | R/W    | 0h      |                                                                                                                                   |
| 7-0   | C26_BLK_IDX | R/W    | 0h      | PRU Constant Entry 26 Block Index: This field sets the value that will appear in bits 11:8 of entry 26 in the PRU Constant Table. |

<!-- image -->

<!-- image -->

## 4.5.1.8 CTPPR0 Register (offset = 28h) [reset = 0h]

CTPPR0 is shown in Figure 4-63 and described in Table 4-48.

CONSTANT TABLE PROGRAMMABLE POINTER REGISTER 0. This register allows the PRU to set up the 256-byte page index for entries 28 and 29 in the PRU Constant Table which serve as general purpose pointers which can be configured to point to any locations inside the session router address map. This register is useful when the PRU needs to frequently access certain structures inside the session router address space whose locations are not hard coded such as tables in scratchpad memory. This register is formatted as follows:

## Figure 4-63. CTPPR0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| C29_POINTER                                                                           | C28_POINTER                                                                           |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-48. CTPPR0 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                   |
|-------|-------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | C29_POINTER | R/W    | 0h      | PRU Constant Entry 29 Pointer: This field sets the value that will appear in bits 23:8 of entry 29 in the PRU Constant Table. |
| 15-0  | C28_POINTER | R/W    | 0h      | PRU Constant Entry 28 Pointer: This field sets the value that will appear in bits 23:8 of entry 28 in the PRU Constant Table. |