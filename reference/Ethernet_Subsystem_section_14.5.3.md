## 14.5.2.49 RX7\_FREEBUFFER Register (offset = FCh) [reset = 0h]

RX7\_FREEBUFFER is shown in Figure 14-77 and described in Table 14-87. CPDMA\_INT RECEIVE FREE BUFFER REGISTER CHANNEL 7

## Figure 14-77. RX7\_FREEBUFFER Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
| Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |
| W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          | W-0h          |
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER | RX_FREEBUFFER |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-87. RX7\_FREEBUFFER Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 15-0  | RX_FREEBUFFER | W      | 0h      | Rx Free Buffer Count - This field contains the count of free buffers available. The rx_pendthresh value is compared with this field to determine if the receive threshold pending interrupt should be asseted (if enabled). This is a write to increment field. This field rolls over to zero on overflow. If receive threshold pending interrupts are used, the host must initialize this field to the number of available buffers (one register per channel). The port decrements (by the number of buffers in the received frame) the associated channel register for each received frame. This is a write to increment field. The host must write this field with the number of buffers that have been freed due to host processing. |

## 14.5.3 CPSW\_CPTS Registers

Table 14-88 lists the memory-mapped registers for the CPSW\_CPTS. All register offset addresses not listed in Table 14-88 should be considered as reserved locations and the register contents should not be modified.

Table 14-88. CPSW\_CPTS REGISTERS

| Offset   | Acronym             | Register Name                              | Section          |
|----------|---------------------|--------------------------------------------|------------------|
| 0h       | CPTS_IDVER          | IDENTIFICATION AND VERSION REGISTER        | Section 14.5.3.1 |
| 4h       | CPTS_CONTROL        | TIME SYNC CONTROL REGISTER                 | Section 14.5.3.2 |
| Ch       | CPTS_TS_PUSH        | TIME STAMP EVENT PUSH REGISTER             | Section 14.5.3.3 |
| 10h      | CPTS_TS_LOAD_VAL    | TIME STAMP LOAD VALUE REGISTER             | Section 14.5.3.4 |
| 14h      | CPTS_TS_LOAD_EN     | TIME STAMP LOAD ENABLE REGISTER            | Section 14.5.3.5 |
| 20h      | CPTS_INTSTAT_RAW    | TIME SYNC INTERRUPT STATUS RAW REGISTER    | Section 14.5.3.6 |
| 24h      | CPTS_INTSTAT_MASKED | TIME SYNC INTERRUPT STATUS MASKED REGISTER | Section 14.5.3.7 |

<!-- image -->

<!-- image -->

## Table 14-88. CPSW\_CPTS REGISTERS (continued)

| Offset   | Acronym         | Register Name                       | Section           |
|----------|-----------------|-------------------------------------|-------------------|
| 28h      | CPTS_INT_ENABLE | TIME SYNC INTERRUPT ENABLE REGISTER | Section 14.5.3.8  |
| 30h      | CPTS_EVENT_POP  | EVENT INTERRUPT POP REGISTER        | Section 14.5.3.9  |
| 34h      | CPTS_EVENT_LOW  | LOWER 32-BITS OF THE EVENT VALUE    | Section 14.5.3.10 |
| 38h      | CPTS_EVENT_HIGH | UPPER 32-BITS OF THE EVENT VALUE    | Section 14.5.3.11 |

## 14.5.3.1 CPTS\_IDVER Register (offset = 0h) [reset = 4E8A0101h]

CPTS\_IDVER is shown in Figure 14-78 and described in Table 14-89. IDENTIFICATION AND VERSION REGISTER

| Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   | Figure 14-78. CPTS_IDVER Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            |
| R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            | TX_IDENT                            |
| R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             | R-4E8Ah                             |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| RTL_VER                             | RTL_VER                             | RTL_VER                             | RTL_VER                             | RTL_VER                             | MAJOR_VER                           | MAJOR_VER                           | MAJOR_VER                           |
| R-9D140h                            | R-9D140h                            | R-9D140h                            | R-9D140h                            | R-9D140h                            | R-4E8A01h                           | R-4E8A01h                           | R-4E8A01h                           |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| MINOR_VER                           | MINOR_VER                           | MINOR_VER                           | MINOR_VER                           | MINOR_VER                           | MINOR_VER                           | MINOR_VER                           | MINOR_VER                           |

R-4E8A0101h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-89. CPTS\_IDVER Register Field Descriptions

| Bit   | Field     | Type   | Reset     | Description             |
|-------|-----------|--------|-----------|-------------------------|
| 31-16 | TX_IDENT  | R      | 4E8Ah     | TX Identification Value |
| 15-11 | RTL_VER   | R      | 9D140h    | RTL Version Value       |
| 10-8  | MAJOR_VER | R      | 4E8A01h   | Major Version Value     |
| 7-0   | MINOR_VER | R      | 4E8A0101h | Minor Version Value     |

<!-- image -->

<!-- image -->

## 14.5.3.2 CPTS\_CONTROL Register (offset = 4h) [reset = 0h]

CPTS\_CONTROL is shown in Figure 14-79 and described in Table 14-90. TIME SYNC CONTROL REGISTER

| Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   | Figure 14-79. CPTS_CONTROL Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              |                                       | HW4_TS_PUS H_EN                       | HW3_TS_PUS H_EN                       | HW2_TS_PUS H_EN                       | HW1_TS_PUS H_EN                       |
| R-0h                                  | R-0h                                  | R-0h                                  |                                       | R/W-0h                                | R/W-0h                                | R/W-0h                                | R/W-0h                                |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | INT_TEST                              | CPTS_EN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-90. CPTS\_CONTROL Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                        |
|-------|----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | Reserved       | R      | 0h      |                                                                                                                                    |
| 11    | HW4_TS_PUSH_EN | R/W    | 0h      | Hardware push 4 enable                                                                                                             |
| 10    | HW3_TS_PUSH_EN | R/W    | 0h      | Hardware push 3 enable                                                                                                             |
| 9     | HW2_TS_PUSH_EN | R/W    | 0h      | Hardware push 2 enable                                                                                                             |
| 8     | HW1_TS_PUSH_EN | R/W    | 0h      | Hardware push 1 enable                                                                                                             |
| 7-2   | Reserved       | R      | 0h      |                                                                                                                                    |
| 1     | INT_TEST       | R/W    | 0h      | Interrupt Test - When set, this bit allows the raw interrupt to be written to facilitate interrupt test.                           |
| 0     | CPTS_EN        | R/W    | 0h      | Time Sync Enable - When disabled (cleared to zero), the RCLK domain is held in reset. 0 - Time Sync Disabled 1 - Time Sync Enabled |

R/W-0h

R/W-0h

## 14.5.3.3 CPTS\_TS\_PUSH Register (offset = Ch) [reset = 0h]

CPTS\_TS\_PUSH is shown in Figure 14-80 and described in Table 14-91. TIME STAMP EVENT PUSH REGISTER

| Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   | Figure 14-80. CPTS_TS_PUSH Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | TS_PUSH                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-91. CPTS\_TS\_PUSH Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 0     | TS_PUSH  | W      | 0h      | Time stamp event push - When a logic high is written to this bit a time stamp event is pushed onto the event FIFO. The time stamp value is the time of the write of this register, not the time of the event read. The time stamp value can then be read on interrupt via the event registers. Software should not push a second time stamp event onto the event FIFO until the first time stamp value has been read from the event FIFO (there should be only one time stamp event in the event FIFO at any given time). This bit is write only and always reads zero. |

<!-- image -->

W-0h

<!-- image -->

www.ti.com

## 14.5.3.4 CPTS\_TS\_LOAD\_VAL Register (offset = 10h) [reset = 0h]

CPTS\_TS\_LOAD\_VAL is shown in Figure 14-81 and described in Table 14-92. TIME STAMP LOAD VALUE REGISTER

## Figure 14-81. CPTS\_TS\_LOAD\_VAL Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TS\_LOAD\_VAL

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-92. CPTS\_TS\_LOAD\_VAL Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                    |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TS_LOAD_VAL | R/W    | 0h      | Time Stamp Load Value - Writing the ts_load_en bit causes the value contained in this register to be written into the time stamp. The time stamp value is read by initiating a time stamp push event, not by reading this register. When reading this register, the value read is not the time stamp, but is the value that was last written to this register. |

## 14.5.3.5 CPTS\_TS\_LOAD\_EN Register (offset = 14h) [reset = 0h]

CPTS\_TS\_LOAD\_EN is shown in Figure 14-82 and described in Table 14-93. TIME STAMP LOAD ENABLE REGISTER

| Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   | Figure 14-82. CPTS_TS_LOAD_EN Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | TS_LOAD_EN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-93. CPTS\_TS\_LOAD\_EN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                     |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved   | R      | 0h      |                                                                                                                                                                                                 |
| 0     | TS_LOAD_EN | W      | 0h      | Time Stamp Load - Writing a one to this bit enables the time stamp value to be written via the ts_load_val[ 31:0] register. This feature is included for test purposes. This bit is write only. |

<!-- image -->

W-0h

<!-- image -->

www.ti.com

## 14.5.3.6 CPTS\_INTSTAT\_RAW Register (offset = 20h) [reset = 0h]

CPTS\_INTSTAT\_RAW is shown in Figure 14-83 and described in Table 14-94. TIME SYNC INTERRUPT STATUS RAW REGISTER

| Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   | Figure 14-83. CPTS_INTSTAT_RAW Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | TS_PEND_RA W                              |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-94. CPTS\_INTSTAT\_RAW Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                      |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved    | R      | 0h      |                                                                                                                                                  |
| 0     | TS_PEND_RAW | R/W    | 0h      | TS_PEND_RAW int read (before enable). Writable when int_test = 1 A one in this bit indicates that there is one or more events in the event FIFO. |

R/W-0h

## 14.5.3.7 CPTS\_INTSTAT\_MASKED Register (offset = 24h) [reset = 0h]

CPTS\_INTSTAT\_MASKED is shown in Figure 14-84 and described in Table 14-95. TIME SYNC INTERRUPT STATUS MASKED REGISTER

| Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   | Figure 14-84. CPTS_INTSTAT_MASKED Register   |
|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|----------------------------------------------|
| 31                                           | 30                                           | 29                                           | 28                                           | 27                                           | 26                                           | 25                                           | 24                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 23                                           | 22                                           | 21                                           | 20                                           | 19                                           | 18                                           | 17                                           | 16                                           |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 15                                           | 14                                           | 13                                           | 12                                           | 11                                           | 10                                           | 9                                            | 8                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     |
| R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         | R-0h                                         |
| 7                                            | 6                                            | 5                                            | 4                                            | 3                                            | 2                                            | 1                                            | 0                                            |
| Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | Reserved                                     | TS_PEND                                      |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-95. CPTS\_INTSTAT\_MASKED Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                   |
|-------|----------|--------|---------|-----------------------------------------------|
| 31-1  | Reserved | R      | 0h      |                                               |
| 0     | TS_PEND  | R      | 0h      | TS_PEND masked interrupt read (after enable). |

<!-- image -->

R-0h

<!-- image -->

www.ti.com

## 14.5.3.8 CPTS\_INT\_ENABLE Register (offset = 28h) [reset = 0h]

CPTS\_INT\_ENABLE is shown in Figure 14-85 and described in Table 14-96. TIME SYNC INTERRUPT ENABLE REGISTER

| Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   | Figure 14-85. CPTS_INT_ENABLE Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | TS_PEND_EN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-96. CPTS\_INT\_ENABLE Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                      |
|-------|------------|--------|---------|----------------------------------|
| 31-1  | Reserved   | R      | 0h      |                                  |
| 0     | TS_PEND_EN | R/W    | 0h      | TS_PEND masked interrupt enable. |

R/W-0h

## 14.5.3.9 CPTS\_EVENT\_POP Register (offset = 30h) [reset = 0h]

CPTS\_EVENT\_POP is shown in Figure 14-86 and described in Table 14-97. EVENT INTERRUPT POP REGISTER

| Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   | Figure 14-86. CPTS_EVENT_POP Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | EVENT_POP                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-97. CPTS\_EVENT\_POP Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                          |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                      |
| 0     | EVENT_POP | W      | 0h      | Event Pop - When a logic high is written to this bit an event is popped off the event FIFO. The event FIFO pop occurs as part of the interrupt process after the event has been read in the Event_Low and Event_High registers. Popping an event discards the event and causes the next event, if any, to be moved to the top of the FIFO ready to be read by software on interrupt. |

<!-- image -->

W-0h

<!-- image -->

www.ti.com

## 14.5.3.10 CPTS\_EVENT\_LOW Register (offset = 34h) [reset = 0h]

CPTS\_EVENT\_LOW is shown in Figure 14-87 and described in Table 14-98. LOWER 32-BITS OF THE EVENT VALUE

## Figure 14-87. CPTS\_EVENT\_LOW Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TIME\_STAMP

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-98. CPTS\_EVENT\_LOW Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TIME_STAMP | R      | 0h      | Time Stamp - The timestamp is valid for transmit, receive, and time stamp push event types. The timestamp value is not valid for counter roll event types. |

## 14.5.3.11 CPTS\_EVENT\_HIGH Register (offset = 38h) [reset = 0h]

CPTS\_EVENT\_HIGH is shown in Figure 14-88 and described in Table 14-99. UPPER 32-BITS OF THE EVENT VALUE

## Figure 14-88. CPTS\_EVENT\_HIGH Register

| 31          | 30          | 29          | 28           | 27           | 26           | 25           | 24           |
|-------------|-------------|-------------|--------------|--------------|--------------|--------------|--------------|
| Reserved    | Reserved    | Reserved    | PORT_NUMBER  | PORT_NUMBER  | PORT_NUMBER  | PORT_NUMBER  | PORT_NUMBER  |
|             | R-0h        |             |              |              | R-0h         |              |              |
| 23          | 22          | 21          | 20           | 19           | 18           | 17           | 16           |
| EVENT_TYPE  | EVENT_TYPE  | EVENT_TYPE  | MESSAGE_TYPE | MESSAGE_TYPE | MESSAGE_TYPE | MESSAGE_TYPE | MESSAGE_TYPE |
| R-0h        | R-0h        | R-0h        |              |              |              |              |              |
| 15          | 14          | 13          | 12           | 11           | 10           | 9            | 8            |
| SEQUENCE_ID | SEQUENCE_ID | SEQUENCE_ID | SEQUENCE_ID  | SEQUENCE_ID  | SEQUENCE_ID  | SEQUENCE_ID  | SEQUENCE_ID  |
| R-0h        | R-0h        | R-0h        | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 7           | 6           | 5           | 4            | 3            | 2            | 1            | 0            |
| SEQUENCE_ID | SEQUENCE_ID | SEQUENCE_ID | SEQUENCE_ID  | SEQUENCE_ID  | SEQUENCE_ID  | SEQUENCE_ID  | SEQUENCE_ID  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-99. CPTS\_EVENT\_HIGH Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                 |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-29 | Reserved     | R      | 0h      |                                                                                                                                                                                                                             |
| 28-24 | PORT_NUMBER  | R      | 0h      | Port Number - indicates the port number of an ethernet event or the hardware push pin number (1 to 4).                                                                                                                      |
| 23-20 | EVENT_TYPE   | R      | 0h      | Time Sync Event Type 0000 - Time Stamp Push Event 0001 - Time Stamp Rollover Event 0010 - Time Stamp Half Rollover Event 0011 - Hardware Time Stamp Push Event 0100 - Ethernet Receive Event 0101 - Ethernet Transmit Event |
| 19-16 | MESSAGE_TYPE | R      | 0h      | Message type - The message type value that was contained in an ethernet transmit or receive time sync packet. This field is valid only for ethernet transmit or receive events.                                             |
| 15-0  | SEQUENCE_ID  | R      | 0h      | Sequence ID - The 16-bit sequence id is the value that was contained in an ethernet transmit or receivetime sync packet. This field is valid only for ethernet transmit or receive events.                                  |

<!-- image -->