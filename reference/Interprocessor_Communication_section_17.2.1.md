<!-- image -->

## 17.2 Spinlock

## 17.2.1 SPINLOCK Registers

Table 17-56 lists the memory-mapped registers for the SPINLOCK. All register offset addresses not listed in Table 17-56 should be considered as reserved locations and the register contents should not be modified.

Table 17-56. SPINLOCK REGISTERS

| Offset   | Acronym    | Register Name                                                                                                                                                                                                                                                      | Section           |
|----------|------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------|
| 0h       | REV        | Read-only IP revision identifier (X.Y.R) used by software to determine features, bugs and compatibility of an instance of this the Spin Lock module.                                                                                                               | Section 17.2.1.1  |
| 10h      | SYSCONFIG  | This register controls the various parameters of the OCP interface. Note that several fields are present by read-only.                                                                                                                                             | Section 17.2.1.2  |
| 14h      | SYSTATUS   | This register provides status information about this instance of the Spin Lock module.                                                                                                                                                                             | Section 17.2.1.3  |
| 800h     | LOCK_REG_0 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.4  |
| 804h     | LOCK_REG_1 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.5  |
| 808h     | LOCK_REG_2 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.6  |
| 80Ch     | LOCK_REG_3 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.7  |
| 810h     | LOCK_REG_4 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.8  |
| 814h     | LOCK_REG_5 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.9  |
| 818h     | LOCK_REG_6 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.10 |
| 81Ch     | LOCK_REG_7 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.11 |
| 820h     | LOCK_REG_8 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.12 |

## Table 17-56. SPINLOCK REGISTERS (continued)

| Offset   | Acronym     | Register Name                                                                                                                                                                                                                                                      | Section           |
|----------|-------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------|
| 824h     | LOCK_REG_9  | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.13 |
| 828h     | LOCK_REG_10 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.14 |
| 82Ch     | LOCK_REG_11 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.15 |
| 830h     | LOCK_REG_12 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.16 |
| 834h     | LOCK_REG_13 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.17 |
| 838h     | LOCK_REG_14 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.18 |
| 83Ch     | LOCK_REG_15 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.19 |
| 840h     | LOCK_REG_16 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.20 |
| 844h     | LOCK_REG_17 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.21 |
| 848h     | LOCK_REG_18 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.22 |
| 84Ch     | LOCK_REG_19 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.23 |
| 850h     | LOCK_REG_20 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.24 |

<!-- image -->

www.ti.com

<!-- image -->

Table 17-56. SPINLOCK REGISTERS (continued)

| Offset   | Acronym     | Register Name                                                                                                                                                                                                                                                      | Section           |
|----------|-------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------|
| 854h     | LOCK_REG_21 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.25 |
| 858h     | LOCK_REG_22 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.26 |
| 85Ch     | LOCK_REG_23 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.27 |
| 860h     | LOCK_REG_24 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.28 |
| 864h     | LOCK_REG_25 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.29 |
| 868h     | LOCK_REG_26 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.30 |
| 86Ch     | LOCK_REG_27 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.31 |
| 870h     | LOCK_REG_28 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.32 |
| 874h     | LOCK_REG_29 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.33 |
| 878h     | LOCK_REG_30 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.34 |
| 87Ch     | LOCK_REG_31 | This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock. | Section 17.2.1.35 |

## 17.2.1.1 REV Register (offset = 0h) [reset = 50020000h]

REV is shown in Figure 17-44 and described in Table 17-57.

Read-only IP revision identifier (X.Y.R) used by software to determine features, bugs and compatibility of an instance of this the Spin Lock module.

## Figure 17-44. REV Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

REV

R-50020000h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-57. REV Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description       |
|-------|---------|--------|-----------|-------------------|
| 31-0  | REV     | R      | 50020000h | IP Revision Code. |

<!-- image -->

<!-- image -->

## 17.2.1.2 SYSCONFIG Register (offset = 10h) [reset = 11h]

SYSCONFIG is shown in Figure 17-45 and described in Table 17-58.

This register controls the various parameters of the OCP interface. Note that several fields are present by read-only.

| Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   | Figure 17-45. SYSCONFIG Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | CLOCKACTIVI TY                     |
| R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               | R-0h                               |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| Reserved                           | Reserved                           | Reserved                           | SIDLEMODE                          | SIDLEMODE                          | ENWAKEUP                           | SOFTRESET                          | AUTOGATING                         |
| R-0h                               | R-0h                               | R-0h                               | R-2h                               | R-2h                               | R-4h                               | W-8h                               | R-11h                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-58. SYSCONFIG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                             |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                         |
| 8     | CLOCKACTIVITY | R      | 0h      | Indicates whether the module requires the OCP when in IDLE mode. 0 = NOTREQUIRED : OCP clock is not required by the module during IDLE mode and may be switched off. 1 = REQUIRED : OCP clock is required by the module, even during idle mode.                                                                                         |
| 7-5   | Reserved      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                         |
| 4-3   | SIDLEMODE     | R      | 2h      | Control of the slave interface power management IDLE request acknowledgement. 0 = FORCEIDLE : IDLE request is acknowledged unconditionally and immediately. 1 = NOIDLE : IDLE request is never acknowledged. 2 = SMARTIDLE : IDLE request acknowledgement is based on the internal module activity. 3 = unused3 : Reserved. Do not use. |
| 2     | ENWAKEUP      | R      | 4h      | Asynchronous wakeup gereration. 0 = NOWAKEUPGEN : Wakeup generation is disabled. 1 = WAKEUPGEN1 : Enable wakeup generation.                                                                                                                                                                                                             |
| 1     | SOFTRESET     | W      | 8h      | Module software reset. 0 = NOOP : No Description 1 = DORESET : Start a soft reset sequence of the Spin Lock module.                                                                                                                                                                                                                     |
| 0     | AUTOGATING    | R      | 11h     | Internal OCP clock gating strategy. 0 = FREERUNNING : OCP clock is not gated when OCP interface is idle. 1 = GATED : Automatic internal OCP clock gating strategy is applied, based on the OCP interface activity.                                                                                                                      |

## 17.2.1.3 SYSTATUS Register (offset = 14h) [reset = 1000001h]

SYSTATUS is shown in Figure 17-46 and described in Table 17-59.

This register provides status information about this instance of the Spin Lock module.

| Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   | Figure 17-46. SYSTATUS Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| NUMLOCKS                          | NUMLOCKS                          | NUMLOCKS                          | NUMLOCKS                          | NUMLOCKS                          | NUMLOCKS                          | NUMLOCKS                          | NUMLOCKS                          |
| R-1h                              | R-1h                              | R-1h                              | R-1h                              | R-1h                              | R-1h                              | R-1h                              | R-1h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R-100h                            | R-100h                            | R-100h                            | R-100h                            | R-100h                            | R-100h                            | R-100h                            | R-100h                            |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| IU7                               | IU6                               | IU5                               | IU4                               | IU3                               | IU2                               | IU1                               | IU0                               |
| R-200h                            | R-400h                            | R-800h                            | R-1000h                           | R-2000h                           | R-4000h                           | R-8000h                           | R-10000h                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RESETDONE                         |

R-800000h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-59. SYSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset    | Description                                                                                                                                                                                                    |
|-------|-----------|--------|----------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | NUMLOCKS  | R      | 1h       |                                                                                                                                                                                                                |
| 23-16 | Reserved  | R      | 100h     |                                                                                                                                                                                                                |
| 15    | IU7       | R      | 200h     |                                                                                                                                                                                                                |
| 14    | IU6       | R      | 400h     |                                                                                                                                                                                                                |
| 13    | IU5       | R      | 800h     |                                                                                                                                                                                                                |
| 12    | IU4       | R      | 1000h    |                                                                                                                                                                                                                |
| 11    | IU3       | R      | 2000h    |                                                                                                                                                                                                                |
| 10    | IU2       | R      | 4000h    |                                                                                                                                                                                                                |
| 9     | IU1       | R      | 8000h    | In-Use flag 1, covering lock registers 32 - 63. Reads as one only if one or more lock registers in this range are TAKEN. If no lock registers are implemented in this range, then this flag always reads as 0. |
| 8     | IU0       | R      | 10000h   | In-Use flag 0, covering lock registers 0 - 31. Reads as one only if one or more lock registers in this range are TAKEN.                                                                                        |
| 7-1   | Reserved  | R      | 800000h  | reserved                                                                                                                                                                                                       |
| 0     | RESETDONE | R      | 1000001h | 0: Reset in progress. 1: Reset is completed.                                                                                                                                                                   |

<!-- image -->

R-1000001h

<!-- image -->

www.ti.com

## 17.2.1.4 LOCK\_REG\_0 Register (offset = 800h) [reset = 0h]

LOCK\_REG\_0 is shown in Figure 17-47 and described in Table 17-60.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   | Figure 17-47. LOCK_REG_0 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-60. LOCK\_REG\_0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.5 LOCK\_REG\_1 Register (offset = 804h) [reset = 0h]

LOCK\_REG\_1 is shown in Figure 17-48 and described in Table 17-61.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   | Figure 17-48. LOCK_REG_1 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-61. LOCK\_REG\_1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.6 LOCK\_REG\_2 Register (offset = 808h) [reset = 0h]

LOCK\_REG\_2 is shown in Figure 17-49 and described in Table 17-62.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   | Figure 17-49. LOCK_REG_2 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-62. LOCK\_REG\_2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.7 LOCK\_REG\_3 Register (offset = 80Ch) [reset = 0h]

LOCK\_REG\_3 is shown in Figure 17-50 and described in Table 17-63.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   | Figure 17-50. LOCK_REG_3 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-63. LOCK\_REG\_3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.8 LOCK\_REG\_4 Register (offset = 810h) [reset = 0h]

LOCK\_REG\_4 is shown in Figure 17-51 and described in Table 17-64.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

## Figure 17-51. LOCK\_REG\_4 Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | TAKEN    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-64. LOCK\_REG\_4 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.9 LOCK\_REG\_5 Register (offset = 814h) [reset = 0h]

LOCK\_REG\_5 is shown in Figure 17-52 and described in Table 17-65.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   | Figure 17-52. LOCK_REG_5 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-65. LOCK\_REG\_5 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.10 LOCK\_REG\_6 Register (offset = 818h) [reset = 0h]

LOCK\_REG\_6 is shown in Figure 17-53 and described in Table 17-66.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   | Figure 17-53. LOCK_REG_6 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-66. LOCK\_REG\_6 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.11 LOCK\_REG\_7 Register (offset = 81Ch) [reset = 0h]

LOCK\_REG\_7 is shown in Figure 17-54 and described in Table 17-67.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

## Figure 17-54. LOCK\_REG\_7 Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | TAKEN    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-67. LOCK\_REG\_7 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 17.2.1.12 LOCK\_REG\_8 Register (offset = 820h) [reset = 0h]

LOCK\_REG\_8 is shown in Figure 17-55 and described in Table 17-68.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   | Figure 17-55. LOCK_REG_8 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-68. LOCK\_REG\_8 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.13 LOCK\_REG\_9 Register (offset = 824h) [reset = 0h]

LOCK\_REG\_9 is shown in Figure 17-56 and described in Table 17-69.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   | Figure 17-56. LOCK_REG_9 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            |
| R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                | R-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | Reserved                            | TAKEN                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-69. LOCK\_REG\_9 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.14 LOCK\_REG\_10 Register (offset = 828h) [reset = 0h]

LOCK\_REG\_10 is shown in Figure 17-57 and described in Table 17-70.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   | Figure 17-57. LOCK_REG_10 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-70. LOCK\_REG\_10 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.15 LOCK\_REG\_11 Register (offset = 82Ch) [reset = 0h]

LOCK\_REG\_11 is shown in Figure 17-58 and described in Table 17-71.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   | Figure 17-58. LOCK_REG_11 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-71. LOCK\_REG\_11 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.16 LOCK\_REG\_12 Register (offset = 830h) [reset = 0h]

LOCK\_REG\_12 is shown in Figure 17-59 and described in Table 17-72.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   | Figure 17-59. LOCK_REG_12 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-72. LOCK\_REG\_12 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.17 LOCK\_REG\_13 Register (offset = 834h) [reset = 0h]

LOCK\_REG\_13 is shown in Figure 17-60 and described in Table 17-73.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   | Figure 17-60. LOCK_REG_13 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-73. LOCK\_REG\_13 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.18 LOCK\_REG\_14 Register (offset = 838h) [reset = 0h]

LOCK\_REG\_14 is shown in Figure 17-61 and described in Table 17-74.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   | Figure 17-61. LOCK_REG_14 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-74. LOCK\_REG\_14 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.19 LOCK\_REG\_15 Register (offset = 83Ch) [reset = 0h]

LOCK\_REG\_15 is shown in Figure 17-62 and described in Table 17-75.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   | Figure 17-62. LOCK_REG_15 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-75. LOCK\_REG\_15 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.20 LOCK\_REG\_16 Register (offset = 840h) [reset = 0h]

LOCK\_REG\_16 is shown in Figure 17-63 and described in Table 17-76.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   | Figure 17-63. LOCK_REG_16 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-76. LOCK\_REG\_16 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.21 LOCK\_REG\_17 Register (offset = 844h) [reset = 0h]

LOCK\_REG\_17 is shown in Figure 17-64 and described in Table 17-77.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   | Figure 17-64. LOCK_REG_17 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-77. LOCK\_REG\_17 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.22 LOCK\_REG\_18 Register (offset = 848h) [reset = 0h]

LOCK\_REG\_18 is shown in Figure 17-65 and described in Table 17-78.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   | Figure 17-65. LOCK_REG_18 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-78. LOCK\_REG\_18 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.23 LOCK\_REG\_19 Register (offset = 84Ch) [reset = 0h]

LOCK\_REG\_19 is shown in Figure 17-66 and described in Table 17-79.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   | Figure 17-66. LOCK_REG_19 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-79. LOCK\_REG\_19 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.24 LOCK\_REG\_20 Register (offset = 850h) [reset = 0h]

LOCK\_REG\_20 is shown in Figure 17-67 and described in Table 17-80.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   | Figure 17-67. LOCK_REG_20 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-80. LOCK\_REG\_20 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.25 LOCK\_REG\_21 Register (offset = 854h) [reset = 0h]

LOCK\_REG\_21 is shown in Figure 17-68 and described in Table 17-81.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

## Figure 17-68. LOCK\_REG\_21 Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | TAKEN    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-81. LOCK\_REG\_21 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 17.2.1.26 LOCK\_REG\_22 Register (offset = 858h) [reset = 0h]

LOCK\_REG\_22 is shown in Figure 17-69 and described in Table 17-82.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   | Figure 17-69. LOCK_REG_22 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-82. LOCK\_REG\_22 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.27 LOCK\_REG\_23 Register (offset = 85Ch) [reset = 0h]

LOCK\_REG\_23 is shown in Figure 17-70 and described in Table 17-83.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   | Figure 17-70. LOCK_REG_23 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-83. LOCK\_REG\_23 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.28 LOCK\_REG\_24 Register (offset = 860h) [reset = 0h]

LOCK\_REG\_24 is shown in Figure 17-71 and described in Table 17-84.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

## Figure 17-71. LOCK\_REG\_24 Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | TAKEN    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-84. LOCK\_REG\_24 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.29 LOCK\_REG\_25 Register (offset = 864h) [reset = 0h]

LOCK\_REG\_25 is shown in Figure 17-72 and described in Table 17-85.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

## Figure 17-72. LOCK\_REG\_25 Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | TAKEN    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-85. LOCK\_REG\_25 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

<!-- image -->

R/W-0h

<!-- image -->

www.ti.com

## 17.2.1.30 LOCK\_REG\_26 Register (offset = 868h) [reset = 0h]

LOCK\_REG\_26 is shown in Figure 17-73 and described in Table 17-86.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   | Figure 17-73. LOCK_REG_26 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-86. LOCK\_REG\_26 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.31 LOCK\_REG\_27 Register (offset = 86Ch) [reset = 0h]

LOCK\_REG\_27 is shown in Figure 17-74 and described in Table 17-87.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   | Figure 17-74. LOCK_REG_27 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-87. LOCK\_REG\_27 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.32 LOCK\_REG\_28 Register (offset = 870h) [reset = 0h]

LOCK\_REG\_28 is shown in Figure 17-75 and described in Table 17-88.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

## Figure 17-75. LOCK\_REG\_28 Register

R-0h

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | TAKEN    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-88. LOCK\_REG\_28 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.33 LOCK\_REG\_29 Register (offset = 874h) [reset = 0h]

LOCK\_REG\_29 is shown in Figure 17-76 and described in Table 17-89.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   | Figure 17-76. LOCK_REG_29 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-89. LOCK\_REG\_29 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->

<!-- image -->

www.ti.com

## 17.2.1.34 LOCK\_REG\_30 Register (offset = 878h) [reset = 0h]

LOCK\_REG\_30 is shown in Figure 17-77 and described in Table 17-90.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   | Figure 17-77. LOCK_REG_30 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 17-90. LOCK\_REG\_30 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

## 17.2.1.35 LOCK\_REG\_31 Register (offset = 87Ch) [reset = 0h]

LOCK\_REG\_31 is shown in Figure 17-78 and described in Table 17-91.

This register is read when attempting to acquire a lock. The lock is automatically taken if it was not taken and the value returned by the read is zero. If the lock was already taken, then the read returns one. Writing a zero to this register frees the lock.

| Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   | Figure 17-78. LOCK_REG_31 Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | TAKEN                                |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 17-91. LOCK\_REG\_31 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-1  | Reserved | R      | 0h      |               |
| 0     | TAKEN    | R/W    | 0h      |               |

R/W-0h

<!-- image -->