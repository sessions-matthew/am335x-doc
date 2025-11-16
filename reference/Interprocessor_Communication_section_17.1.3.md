## 17.1.3 MAILBOX Registers

Table 17-13 lists the memory-mapped registers for the MAILBOX. All register offset addresses not listed in Table 17-13 should be considered as reserved locations and the register contents should not be modified.

Table 17-13. MAILBOX REGISTERS

| Offset   | Acronym      | Register Name                                                                                                        | Section           |
|----------|--------------|----------------------------------------------------------------------------------------------------------------------|-------------------|
| 0h       | REVISION     | This register contains the IP revision code                                                                          | Section 17.1.3.1  |
| 10h      | SYSCONFIG    | This register controls the various parameters of the OCP interface                                                   | Section 17.1.3.2  |
| 40h      | MESSAGE_0    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.3  |
| 44h      | MESSAGE_1    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.4  |
| 48h      | MESSAGE_2    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.5  |
| 4Ch      | MESSAGE_3    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.6  |
| 50h      | MESSAGE_4    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.7  |
| 54h      | MESSAGE_5    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.8  |
| 58h      | MESSAGE_6    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.9  |
| 5Ch      | MESSAGE_7    | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.10 |
| 80h      | FIFOSTATUS_0 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.11 |
| 84h      | FIFOSTATUS_1 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.12 |
| 88h      | FIFOSTATUS_2 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.13 |
| 8Ch      | FIFOSTATUS_3 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.14 |
| 90h      | FIFOSTATUS_4 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.15 |
| 94h      | FIFOSTATUS_5 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.16 |
| 98h      | FIFOSTATUS_6 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.17 |
| 9Ch      | FIFOSTATUS_7 | The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue | Section 17.1.3.18 |
| C0h      | MSGSTATUS_0  | The message status register has the status of the messages in the mailbox                                            | Section 17.1.3.19 |
| C4h      | MSGSTATUS_1  | The message status register has the status of the messages in the mailbox                                            | Section 17.1.3.20 |

<!-- image -->

<!-- image -->

Table 17-13. MAILBOX REGISTERS (continued)

| Offset   | Acronym         | Register Name                                                                                                                                                                                                                              | Section           |
|----------|-----------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------|
| C8h      | MSGSTATUS_2     | The message status register has the status of the messages in the mailbox                                                                                                                                                                  | Section 17.1.3.21 |
| CCh      | MSGSTATUS_3     | The message status register has the status of the messages in the mailbox                                                                                                                                                                  | Section 17.1.3.22 |
| D0h      | MSGSTATUS_4     | The message status register has the status of the messages in the mailbox                                                                                                                                                                  | Section 17.1.3.23 |
| D4h      | MSGSTATUS_5     | The message status register has the status of the messages in the mailbox                                                                                                                                                                  | Section 17.1.3.24 |
| D8h      | MSGSTATUS_6     | The message status register has the status of the messages in the mailbox                                                                                                                                                                  | Section 17.1.3.25 |
| DCh      | MSGSTATUS_7     | The message status register has the status of the messages in the mailbox                                                                                                                                                                  | Section 17.1.3.26 |
| 100h     | IRQSTATUS_RAW_0 | The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose. | Section 17.1.3.27 |
| 104h     | IRQSTATUS_CLR_0 | The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.                        | Section 17.1.3.28 |
| 108h     | IRQENABLE_SET_0 | The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.                                                                                        | Section 17.1.3.29 |
| 10Ch     | IRQENABLE_CLR_0 | The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.                                                                                        | Section 17.1.3.30 |
| 110h     | IRQSTATUS_RAW_1 | The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose. | Section 17.1.3.31 |
| 114h     | IRQSTATUS_CLR_1 | The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.                        | Section 17.1.3.32 |
| 118h     | IRQENABLE_SET_1 | The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.                                                                                        | Section 17.1.3.33 |
| 11Ch     | IRQENABLE_CLR_1 | The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.                                                                                        | Section 17.1.3.34 |
| 120h     | IRQSTATUS_RAW_2 | The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose. | Section 17.1.3.35 |
| 124h     | IRQSTATUS_CLR_2 | The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding                                                                       | Section 17.1.3.36 |
| 128h     | IRQENABLE_SET_2 | The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.                                                                                        | Section 17.1.3.37 |

Table 17-13. MAILBOX REGISTERS (continued)

| Offset   | Acronym         | Register Name                                                                                                                                                                                                                              | Section           |
|----------|-----------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------|
| 12Ch     | IRQENABLE_CLR_2 | The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.                                                                                        | Section 17.1.3.38 |
| 130h     | IRQSTATUS_RAW_3 | The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose. | Section 17.1.3.39 |
| 134h     | IRQSTATUS_CLR_3 | The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.                        | Section 17.1.3.40 |
| 138h     | IRQENABLE_SET_3 | The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.                                                                                        | Section 17.1.3.41 |
| 13Ch     | IRQENABLE_CLR_3 | The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.                                                                                        | Section 17.1.3.42 |

<!-- image -->

<!-- image -->

## 17.1.3.1 REVISION Register (offset = 0h) [reset = 400h]

REVISION is shown in Figure 17-2 and described in Table 17-14. This register contains the IP revision code

## Figure 17-2. REVISION Register

R-400h

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| SCHEME RES   | SCHEME RES   | SCHEME RES   | SCHEME RES   | FUNC         | FUNC         | FUNC         | FUNC         |
| R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h R-0h    | R-0h         | R-0h         | R-0h         | R-0h         |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| FUNC         | FUNC         | FUNC         | FUNC         | FUNC         | FUNC         | FUNC         | FUNC         |
| R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| RTL          | RTL          | RTL          | RTL          | MAJOR        | MAJOR        | MAJOR        | MAJOR        |
| R-0h         | R-0h         | R-0h         | R-0h         | R-4h         | R-4h         | R-4h         | R-4h         |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| Custom MINOR | Custom MINOR | Custom MINOR | Custom MINOR | Custom MINOR | Custom MINOR | Custom MINOR | Custom MINOR |

R-10h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-14. REVISION Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description       |
|-------|---------|--------|---------|-------------------|
| 31-30 | SCHEME  | R      | 0h      | Not defined yet   |
| 29-28 | RES     | R      | 0h      | Reserved          |
| 27-16 | FUNC    | R      | 0h      | Not defined yet   |
| 15-11 | RTL     | R      | 0h      | Not defined yet   |
| 10-8  | MAJOR   | R      | 4h      | IP-Major Revision |
| 7-6   | Custom  | R      | 10h     | Not Defined Yet   |
| 5-0   | MINOR   | R      | 400h    | IP-Minor Revision |

## 17.1.3.2 SYSCONFIG Register (offset = 10h) [reset = 8h]

SYSCONFIG is shown in Figure 17-3 and described in Table 17-15.

This register controls the various parameters of the OCP interface

## Figure 17-3. SYSCONFIG Register

|   30 | 29        | 28                 | 27       | 26     | 25                      | 24   | Reserved   |
|------|-----------|--------------------|----------|--------|-------------------------|------|------------|
|   22 | 22        | 22                 | 22       | 22     | 22                      | 22   | 22         |
|   21 | 21        | 21                 | 21       | 21     | 21                      | 21   | 21         |
|   20 | 19 R/W-0h | 18                 | 17       | 16     | Reserved                | 14   | 13         |
|   12 | 12        | 12                 | 12       | 12     | 12                      | 12   | 12         |
|   11 | 11        | 11                 | 11       | 11     | 11                      | 11   | 11         |
|   10 | 9 R/W-0h  | 8                  | Reserved | 6      | 5                       | 4    | 3          |
|    2 | 2         | 2                  | 2        | 2      | 2                       | 2    | 2          |
|    1 | 1         | 1                  | 1        | 1      | 1                       | 1    | 1          |
|    0 | Reserved  | Reserved SoftReset | R/W-0h   | R/W-4h | SIdleMode R/W-2h R/W-8h |      |            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-15. SYSCONFIG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | Reserved  | R/W    | 0h      | Write 0's for future compatibility Reads returns 0                                                                                                         |
| 3-2   | SIdleMode | R/W    | 2h      |                                                                                                                                                            |
| 1     | Reserved  | R/W    | 4h      | Write 0's for future compatibility Read returns 0                                                                                                          |
| 0     | SoftReset | R/W    | 8h      | Software reset. This bit is automatically reset by the hardware. During reads, it always return 0 0 = Normal : Normal mode 1 = Reset : The module is reset |

<!-- image -->

<!-- image -->

## 17.1.3.3 MESSAGE\_0 Register (offset = 40h) [reset = 0h]

MESSAGE\_0 is shown in Figure 17-4 and described in Table 17-16.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-4. MESSAGE\_0 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-16. MESSAGE\_0 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

## 17.1.3.4 MESSAGE\_1 Register (offset = 44h) [reset = 0h]

MESSAGE\_1 is shown in Figure 17-5 and described in Table 17-17.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-5. MESSAGE\_1 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-17. MESSAGE\_1 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

<!-- image -->

www.ti.com

<!-- image -->

## 17.1.3.5 MESSAGE\_2 Register (offset = 48h) [reset = 0h]

MESSAGE\_2 is shown in Figure 17-6 and described in Table 17-18.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-6. MESSAGE\_2 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-18. MESSAGE\_2 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

## 17.1.3.6 MESSAGE\_3 Register (offset = 4Ch) [reset = 0h]

MESSAGE\_3 is shown in Figure 17-7 and described in Table 17-19.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-7. MESSAGE\_3 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-19. MESSAGE\_3 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

<!-- image -->

<!-- image -->

## 17.1.3.7 MESSAGE\_4 Register (offset = 50h) [reset = 0h]

MESSAGE\_4 is shown in Figure 17-8 and described in Table 17-20.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-8. MESSAGE\_4 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-20. MESSAGE\_4 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

## 17.1.3.8 MESSAGE\_5 Register (offset = 54h) [reset = 0h]

MESSAGE\_5 is shown in Figure 17-9 and described in Table 17-21.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-9. MESSAGE\_5 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-21. MESSAGE\_5 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 17.1.3.9 MESSAGE\_6 Register (offset = 58h) [reset = 0h]

MESSAGE\_6 is shown in Figure 17-10 and described in Table 17-22.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-10. MESSAGE\_6 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-22. MESSAGE\_6 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

## 17.1.3.10 MESSAGE\_7 Register (offset = 5Ch) [reset = 0h]

MESSAGE\_7 is shown in Figure 17-11 and described in Table 17-23.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

## Figure 17-11. MESSAGE\_7 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

MESSAGEVALUEMBM

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-23. MESSAGE\_7 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |

<!-- image -->

<!-- image -->

## 17.1.3.11 FIFOSTATUS\_0 Register (offset = 80h) [reset = 0h]

FIFOSTATUS\_0 is shown in Figure 17-12 and described in Table 17-24.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   | Figure 17-12. FIFOSTATUS_0 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-24. FIFOSTATUS\_0 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

## 17.1.3.12 FIFOSTATUS\_1 Register (offset = 84h) [reset = 0h]

FIFOSTATUS\_1 is shown in Figure 17-13 and described in Table 17-25.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   | Figure 17-13. FIFOSTATUS_1 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-25. FIFOSTATUS\_1 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

<!-- image -->

www.ti.com

<!-- image -->

## 17.1.3.13 FIFOSTATUS\_2 Register (offset = 88h) [reset = 0h]

FIFOSTATUS\_2 is shown in Figure 17-14 and described in Table 17-26.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   | Figure 17-14. FIFOSTATUS_2 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-26. FIFOSTATUS\_2 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

## 17.1.3.14 FIFOSTATUS\_3 Register (offset = 8Ch) [reset = 0h]

FIFOSTATUS\_3 is shown in Figure 17-15 and described in Table 17-27.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   | Figure 17-15. FIFOSTATUS_3 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-27. FIFOSTATUS\_3 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

<!-- image -->

<!-- image -->

## 17.1.3.15 FIFOSTATUS\_4 Register (offset = 90h) [reset = 0h]

FIFOSTATUS\_4 is shown in Figure 17-16 and described in Table 17-28.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   | Figure 17-16. FIFOSTATUS_4 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-28. FIFOSTATUS\_4 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

## 17.1.3.16 FIFOSTATUS\_5 Register (offset = 94h) [reset = 0h]

FIFOSTATUS\_5 is shown in Figure 17-17 and described in Table 17-29.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   | Figure 17-17. FIFOSTATUS_5 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-29. FIFOSTATUS\_5 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

<!-- image -->

www.ti.com

<!-- image -->

## 17.1.3.17 FIFOSTATUS\_6 Register (offset = 98h) [reset = 0h]

FIFOSTATUS\_6 is shown in Figure 17-18 and described in Table 17-30.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   | Figure 17-18. FIFOSTATUS_6 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-30. FIFOSTATUS\_6 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

## 17.1.3.18 FIFOSTATUS\_7 Register (offset = 9Ch) [reset = 0h]

FIFOSTATUS\_7 is shown in Figure 17-19 and described in Table 17-31.

The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue

| Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   | Figure 17-19. FIFOSTATUS_7 Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       |
| R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 | R/W-0                                 |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | MESSAGEVALUEMBM                       | FIFOFULLMBM                           |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-31. FIFOSTATUS\_7 Register Field Descriptions

| Bit   | Field           | Type   |   Reset | Description                                                                                                                               |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | MESSAGEVALUEMBM | R/W-0  |       0 | Message in Mailbox. The message register stores the next to be read message of the mailbox. Reads remove the message from the FIFO queue. |
| 0     | FIFOFULLMBM     | R-0    |       0 | Full flag for Mailbox 0 = NotFull : Mailbox FIFO is not full 1 = Full : Mailbox FIFO is full                                              |

R-0

<!-- image -->

<!-- image -->

www.ti.com

## 17.1.3.19 MSGSTATUS\_0 Register (offset = C0h) [reset = 0h]

MSGSTATUS\_0 is shown in Figure 17-20 and described in Table 17-32.

The message status register has the status of the messages in the mailbox

## Figure 17-20. MSGSTATUS\_0 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-32. MSGSTATUS\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

## 17.1.3.20 MSGSTATUS\_1 Register (offset = C4h) [reset = 0h]

MSGSTATUS\_1 is shown in Figure 17-21 and described in Table 17-33.

The message status register has the status of the messages in the mailbox

## Figure 17-21. MSGSTATUS\_1 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-33. MSGSTATUS\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.1.3.21 MSGSTATUS\_2 Register (offset = C8h) [reset = 0h]

MSGSTATUS\_2 is shown in Figure 17-22 and described in Table 17-34.

The message status register has the status of the messages in the mailbox

## Figure 17-22. MSGSTATUS\_2 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-34. MSGSTATUS\_2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

## 17.1.3.22 MSGSTATUS\_3 Register (offset = CCh) [reset = 0h]

MSGSTATUS\_3 is shown in Figure 17-23 and described in Table 17-35.

The message status register has the status of the messages in the mailbox

## Figure 17-23. MSGSTATUS\_3 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-35. MSGSTATUS\_3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.1.3.23 MSGSTATUS\_4 Register (offset = D0h) [reset = 0h]

MSGSTATUS\_4 is shown in Figure 17-24 and described in Table 17-36.

The message status register has the status of the messages in the mailbox

## Figure 17-24. MSGSTATUS\_4 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-36. MSGSTATUS\_4 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

## 17.1.3.24 MSGSTATUS\_5 Register (offset = D4h) [reset = 0h]

MSGSTATUS\_5 is shown in Figure 17-25 and described in Table 17-37.

The message status register has the status of the messages in the mailbox

## Figure 17-25. MSGSTATUS\_5 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-37. MSGSTATUS\_5 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.1.3.25 MSGSTATUS\_6 Register (offset = D8h) [reset = 0h]

MSGSTATUS\_6 is shown in Figure 17-26 and described in Table 17-38.

The message status register has the status of the messages in the mailbox

## Figure 17-26. MSGSTATUS\_6 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-38. MSGSTATUS\_6 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

## 17.1.3.26 MSGSTATUS\_7 Register (offset = DCh) [reset = 0h]

MSGSTATUS\_7 is shown in Figure 17-27 and described in Table 17-39.

The message status register has the status of the messages in the mailbox

## Figure 17-27. MSGSTATUS\_7 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-39. MSGSTATUS\_7 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                 |
|-------|------------|--------|---------|-----------------------------------------------------------------------------|
| 2-0   | NBOFMSGMBM | R      | 0h      | Number of unread messages in Mailbox. Limited to four messages per mailbox. |

NBOFMSG MBM

R-0h

<!-- image -->

<!-- image -->

## 17.1.3.27 IRQSTATUS\_RAW\_0 Register (offset = 100h) [reset = 0h]

IRQSTATUS\_RAW\_0 is shown in Figure 17-28 and described in Table 17-40.

The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose.

| Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   | Figure 17-28. IRQSTATUS_RAW_0 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-40. IRQSTATUS\_RAW\_0 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-40. IRQSTATUS\_RAW\_0 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.28 IRQSTATUS\_CLR\_0 Register (offset = 104h) [reset = 0h]

IRQSTATUS\_CLR\_0 is shown in Figure 17-29 and described in Table 17-41.

The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.

| Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   | Figure 17-29. IRQSTATUS_CLR_0 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-41. IRQSTATUS\_CLR\_0 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-41. IRQSTATUS\_CLR\_0 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.29 IRQENABLE\_SET\_0 Register (offset = 108h) [reset = 0h]

IRQENABLE\_SET\_0 is shown in Figure 17-30 and described in Table 17-42.

The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.

## Figure 17-30. IRQENABLE\_SET\_0 Register

| 31                  | 30                 | 29                  | 28                 | 27                  | 26                 | 25                  | 24                 |
|---------------------|--------------------|---------------------|--------------------|---------------------|--------------------|---------------------|--------------------|
| Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           |
| 23                  | 22                 | 21                  | 20                 | 19                  | 18                 | 17                  | 16                 |
| Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           |
| 15                  | 14                 | 13                  | 12                 | 11                  | 10                 | 9                   | 8                  |
| NotFullStatusU uMB7 | NewMSGStatus UuMB7 | NotFullStatusU uMB6 | NewMSGStatus UuMB6 | NotFullStatusU uMB5 | NewMSGStatus UuMB5 | NotFullStatusU uMB4 | NewMSGStatus UuMB4 |
| R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             |
| 7                   | 6                  | 5                   | 4                  | 3                   | 2                  | 1                   | 0                  |
| NotFullStatusU uMB3 | NewMSGStatus UuMB3 | NotFullStatusU uMB2 | NewMSGStatus UuMB2 | NotFullStatusU uMB1 | NewMSGStatus UuMB1 | NotFullStatusU uMB0 | NewMSGStatus UuMB0 |
| R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-42. IRQENABLE\_SET\_0 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-42. IRQENABLE\_SET\_0 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.30 IRQENABLE\_CLR\_0 Register (offset = 10Ch) [reset = 0h]

IRQENABLE\_CLR\_0 is shown in Figure 17-31 and described in Table 17-43.

The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.

| Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   | Figure 17-31. IRQENABLE_CLR_0 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-43. IRQENABLE\_CLR\_0 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-43. IRQENABLE\_CLR\_0 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

## 17.1.3.31 IRQSTATUS\_RAW\_1 Register (offset = 110h) [reset = 0h]

IRQSTATUS\_RAW\_1 is shown in Figure 17-32 and described in Table 17-44.

The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose.

| Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   | Figure 17-32. IRQSTATUS_RAW_1 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-44. IRQSTATUS\_RAW\_1 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-44. IRQSTATUS\_RAW\_1 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.32 IRQSTATUS\_CLR\_1 Register (offset = 114h) [reset = 0h]

IRQSTATUS\_CLR\_1 is shown in Figure 17-33 and described in Table 17-45.

The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.

| Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   | Figure 17-33. IRQSTATUS_CLR_1 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-45. IRQSTATUS\_CLR\_1 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-45. IRQSTATUS\_CLR\_1 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.33 IRQENABLE\_SET\_1 Register (offset = 118h) [reset = 0h]

IRQENABLE\_SET\_1 is shown in Figure 17-34 and described in Table 17-46.

The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.

| Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   | Figure 17-34. IRQENABLE_SET_1 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-46. IRQENABLE\_SET\_1 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-46. IRQENABLE\_SET\_1 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

## 17.1.3.34 IRQENABLE\_CLR\_1 Register (offset = 11Ch) [reset = 0h]

IRQENABLE\_CLR\_1 is shown in Figure 17-35 and described in Table 17-47.

The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.

| Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   | Figure 17-35. IRQENABLE_CLR_1 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-47. IRQENABLE\_CLR\_1 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-47. IRQENABLE\_CLR\_1 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

## 17.1.3.35 IRQSTATUS\_RAW\_2 Register (offset = 120h) [reset = 0h]

IRQSTATUS\_RAW\_2 is shown in Figure 17-36 and described in Table 17-48.

The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose.

| Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   | Figure 17-36. IRQSTATUS_RAW_2 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-48. IRQSTATUS\_RAW\_2 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-48. IRQSTATUS\_RAW\_2 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.36 IRQSTATUS\_CLR\_2 Register (offset = 124h) [reset = 0h]

IRQSTATUS\_CLR\_2 is shown in Figure 17-37 and described in Table 17-49.

The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.

| Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   | Figure 17-37. IRQSTATUS_CLR_2 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-49. IRQSTATUS\_CLR\_2 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-49. IRQSTATUS\_CLR\_2 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.37 IRQENABLE\_SET\_2 Register (offset = 128h) [reset = 0h]

IRQENABLE\_SET\_2 is shown in Figure 17-38 and described in Table 17-50.

The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.

## Figure 17-38. IRQENABLE\_SET\_2 Register

| 31                  | 30                 | 29                  | 28                 | 27                  | 26                 | 25                  | 24                 |
|---------------------|--------------------|---------------------|--------------------|---------------------|--------------------|---------------------|--------------------|
| Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           |
| 23                  | 22                 | 21                  | 20                 | 19                  | 18                 | 17                  | 16                 |
| Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           |
| 15                  | 14                 | 13                  | 12                 | 11                  | 10                 | 9                   | 8                  |
| NotFullStatusU uMB7 | NewMSGStatus UuMB7 | NotFullStatusU uMB6 | NewMSGStatus UuMB6 | NotFullStatusU uMB5 | NewMSGStatus UuMB5 | NotFullStatusU uMB4 | NewMSGStatus UuMB4 |
| R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             |
| 7                   | 6                  | 5                   | 4                  | 3                   | 2                  | 1                   | 0                  |
| NotFullStatusU uMB3 | NewMSGStatus UuMB3 | NotFullStatusU uMB2 | NewMSGStatus UuMB2 | NotFullStatusU uMB1 | NewMSGStatus UuMB1 | NotFullStatusU uMB0 | NewMSGStatus UuMB0 |
| R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-50. IRQENABLE\_SET\_2 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-50. IRQENABLE\_SET\_2 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.38 IRQENABLE\_CLR\_2 Register (offset = 12Ch) [reset = 0h]

IRQENABLE\_CLR\_2 is shown in Figure 17-39 and described in Table 17-51.

The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.

| Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   | Figure 17-39. IRQENABLE_CLR_2 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-51. IRQENABLE\_CLR\_2 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-51. IRQENABLE\_CLR\_2 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

## 17.1.3.39 IRQSTATUS\_RAW\_3 Register (offset = 130h) [reset = 0h]

IRQSTATUS\_RAW\_3 is shown in Figure 17-40 and described in Table 17-52.

The interrupt status register has the status for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit. This register is mainly used for debug purpose.

| Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   | Figure 17-40. IRQSTATUS_RAW_3 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-52. IRQSTATUS\_RAW\_3 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-52. IRQSTATUS\_RAW\_3 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.40 IRQSTATUS\_CLR\_3 Register (offset = 134h) [reset = 0h]

IRQSTATUS\_CLR\_3 is shown in Figure 17-41 and described in Table 17-53.

The interrupt status register has the status combined with irq-enable for each event that may be responsible for the generation of an interrupt to the corresponding user - write 1 to a given bit resets this bit.

| Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   | Figure 17-41. IRQSTATUS_CLR_3 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-53. IRQSTATUS\_CLR\_3 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-53. IRQSTATUS\_CLR\_3 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

www.ti.com

## 17.1.3.41 IRQENABLE\_SET\_3 Register (offset = 138h) [reset = 0h]

IRQENABLE\_SET\_3 is shown in Figure 17-42 and described in Table 17-54.

The interrupt enable register enables to unmask the module internal source of interrupt to the corresponding user. This register is write 1 to set.

## Figure 17-42. IRQENABLE\_SET\_3 Register

| 31                  | 30                 | 29                  | 28                 | 27                  | 26                 | 25                  | 24                 |
|---------------------|--------------------|---------------------|--------------------|---------------------|--------------------|---------------------|--------------------|
| Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           |
| 23                  | 22                 | 21                  | 20                 | 19                  | 18                 | 17                  | 16                 |
| Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           | Reserved            | Reserved           |
| 15                  | 14                 | 13                  | 12                 | 11                  | 10                 | 9                   | 8                  |
| NotFullStatusU uMB7 | NewMSGStatus UuMB7 | NotFullStatusU uMB6 | NewMSGStatus UuMB6 | NotFullStatusU uMB5 | NewMSGStatus UuMB5 | NotFullStatusU uMB4 | NewMSGStatus UuMB4 |
| R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             |
| 7                   | 6                  | 5                   | 4                  | 3                   | 2                  | 1                   | 0                  |
| NotFullStatusU uMB3 | NewMSGStatus UuMB3 | NotFullStatusU uMB2 | NewMSGStatus UuMB2 | NotFullStatusU uMB1 | NewMSGStatus UuMB1 | NotFullStatusU uMB0 | NewMSGStatus UuMB0 |
| R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             | R/W-0h              | R/W-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-54. IRQENABLE\_SET\_3 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

## Table 17-54. IRQENABLE\_SET\_3 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |

<!-- image -->

## 17.1.3.42 IRQENABLE\_CLR\_3 Register (offset = 13Ch) [reset = 0h]

IRQENABLE\_CLR\_3 is shown in Figure 17-43 and described in Table 17-55.

The interrupt enable register enables to mask the module internal source of interrupt to the corresponding user. This register is write 1 to clear.

| Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   | Figure 17-43. IRQENABLE_CLR_3 Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| NotFullStatusU uMB7                      | NewMSGStatus UuMB7                       | NotFullStatusU uMB6                      | NewMSGStatus UuMB6                       | NotFullStatusU uMB5                      | NewMSGStatus UuMB5                       | NotFullStatusU uMB4                      | NewMSGStatus UuMB4                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| NotFullStatusU uMB3                      | NewMSGStatus UuMB3                       | NotFullStatusU uMB2                      | NewMSGStatus UuMB2                       | NotFullStatusU uMB1                      | NewMSGStatus UuMB1                       | NotFullStatusU uMB0                      | NewMSGStatus UuMB0                       |
| R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   | R/W-0h                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-55. IRQENABLE\_CLR\_3 Register Field Descriptions

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|    15 | NotFullStatusUuMB7 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    14 | NewMSGStatusUuMB7  | R/W    | 0h      | New Message Status bit for User u, Mailbox 7 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    13 | NotFullStatusUuMB6 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    12 | NewMSGStatusUuMB6  | R/W    | 0h      | New Message Status bit for User u, Mailbox 6 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|    11 | NotFullStatusUuMB5 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|    10 | NewMSGStatusUuMB5  | R/W    | 0h      | New Message Status bit for User u, Mailbox 5 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     9 | NotFullStatusUuMB4 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     8 | NewMSGStatusUuMB4  | R/W    | 0h      | New Message Status bit for User u, Mailbox 4 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     7 | NotFullStatusUuMB3 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |

<!-- image -->

Table 17-55. IRQENABLE\_CLR\_3 Register Field Descriptions (continued)

|   Bit | Field              | Type   | Reset   | Description                                                                                                    |
|-------|--------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     6 | NewMSGStatusUuMB3  | R/W    | 0h      | New Message Status bit for User u, Mailbox 3 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     5 | NotFullStatusUuMB2 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     4 | NewMSGStatusUuMB2  | R/W    | 0h      | New Message Status bit for User u, Mailbox 2 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     3 | NotFullStatusUuMB1 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     2 | NewMSGStatusUuMB1  | R/W    | 0h      | New Message Status bit for User u, Mailbox 1 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |
|     1 | NotFullStatusUuMB0 | R/W    | 0h      | Not Full Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug)    |
|     0 | NewMSGStatusUuMB0  | R/W    | 0h      | New Message Status bit for User u, Mailbox 0 0 = NoAction : No action 1 = SetEvent : Set the event (for debug) |