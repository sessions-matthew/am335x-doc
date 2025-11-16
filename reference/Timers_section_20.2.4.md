Table 20-33. Prescaler Clock Ratios Value (continued)

|   PRE |   PTV |   Divisor (PS) |
|-------|-------|----------------|
|     1 |     5 |             64 |
|     1 |     6 |            128 |
|     1 |     7 |            256 |

The timer rate equation is as follows:

(0xFFFF FFFF - TLDR + 1) x timer Clock period x Clock Divider (PS)

With timer Clock period = 1/ timer Clock frequency and PS = 2 (PTV + 1) .

As example, if we consider a timer clock input of 32 KHz, with a PRE field equals to '0', the timer output period is:

Table 20-34. Value and Corresponding Interrupt Period

| TLDR        | Interrupt Period   |
|-------------|--------------------|
| 0x0000 0000 | 37 h               |
| 0xFFFF 0000 | 2 s                |
| 0xFFFF FFF0 | 500 us             |
| 0xFFFF FFFE | 62.5 us            |

## 20.2.3.9 Timer Behavior During Emulation

To configure the Timer to stop during emulation suspend events (for example, debugger breakpoints), set up the Timer and the Debug Subsystem:

1. Set TIOCP\_CFG.EMUFREE=0. This will allow the Suspend\_Control signal from the Debug Subsystem (Chapter 27) to stop and start the Timer. Note that if EMUFREE=1, the Suspend\_Control signal is ignored and the Timer is free running regardless of any debug suspend event. This EMUFREE bit gives local control from a module perspective to gate the suspend signal coming from the Debug Subsystem.
2. Set the appropriate xxx\_Suspend\_Control register = 0x9, as described in Section 27.1.1.1, Debug Suspend Support for Peripherals . Choose the register appropriate to the peripheral you want to suspend during a suspend event.

## 20.2.4 DMTIMER\_1MS Registers

Table 20-35 lists the memory-mapped registers for the DMTIMER\_1MS. All register offset addresses not listed in Table 20-35 should be considered as reserved locations and the register contents should not be modified.

Table 20-35. DMTIMER\_1MS REGISTERS

| Offset   | Acronym   | Register Name                                                                                          | Section          |
|----------|-----------|--------------------------------------------------------------------------------------------------------|------------------|
| 0h       | TIDR      | This register contains the IP revision code                                                            | Section 20.2.4.1 |
| 10h      | TIOCP_CFG | This register controls the various parameters of the OCP interface                                     | Section 20.2.4.2 |
| 14h      | TISTAT    | This register provides status information about the module, excluding the interrupt status information | Section 20.2.4.3 |
| 18h      | TISR      | The Timer Status Register is used to determine which of the timer events requested an interrupt.       | Section 20.2.4.4 |
| 1Ch      | TIER      | This register controls (enable/disable) the interrupt events                                           | Section 20.2.4.5 |
| 20h      | TWER      | This register controls (enable/disable) the wakeup feature on specific interrupt events                | Section 20.2.4.6 |
| 24h      | TCLR      | This register controls optional features specific to the timer functionality                           | Section 20.2.4.7 |

<!-- image -->

<!-- image -->

## Table 20-35. DMTIMER\_1MS REGISTERS (continued)

| Offset   | Acronym   | Register Name                                                                                                                                                                                                                                                                 | Section           |
|----------|-----------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------|
| 28h      | TCRR      | This register holds the value of the internal counter                                                                                                                                                                                                                         | Section 20.2.4.8  |
| 2Ch      | TLDR      | This register holds the timer's load value                                                                                                                                                                                                                                    | Section 20.2.4.9  |
| 30h      | TTGR      | This register triggers a counter reload of timer by writing any value in it.                                                                                                                                                                                                  | Section 20.2.4.10 |
| 34h      | TWPS      | This register contains the write posting bits for all writ- able functional registers                                                                                                                                                                                         | Section 20.2.4.11 |
| 38h      | TMAR      | This register holds the match value to be compared with the counter's value                                                                                                                                                                                                   | Section 20.2.4.12 |
| 3Ch      | TCAR1     | This register holds the value of the first counter register capture                                                                                                                                                                                                           | Section 20.2.4.13 |
| 40h      | TSICR     | Timer Synchronous Interface Control Register                                                                                                                                                                                                                                  | Section 20.2.4.14 |
| 44h      | TCAR2     | This register holds the value of the second counter register capture                                                                                                                                                                                                          | Section 20.2.4.15 |
| 48h      | TPIR      | This register is used for 1ms tick generation. The TPIR register holds the value of the positive increment. The value of this register is added with the value of the TCVR to define whether next value loaded in TCRR will be the sub-period value or the over-period value. | Section 20.2.4.16 |
| 4Ch      | TNIR      | This register is used for 1ms tick generation. The TNIR register holds the value of the negative increment. The value of this register is added with the value of the TCVR to define whether next value loaded in TCRR will                                                   | Section 20.2.4.17 |
| 50h      | TCVR      | This register is used for 1ms tick generation. The TCVR register defines whether next value loaded in TCRR will be the sub-period value or the over-period value.                                                                                                             | Section 20.2.4.18 |
| 54h      | TOCR      | This register is used to mask the tick interrupt for a selected number of ticks.                                                                                                                                                                                              | Section 20.2.4.19 |
| 58h      | TOWR      | This register holds the number of masked overflow interrupts.                                                                                                                                                                                                                 | Section 20.2.4.20 |

## 20.2.4.1 TIDR Register (offset = 0h) [reset = 15h]

TIDR is shown in Figure 20-35 and described in Table 20-36. This register contains the IP revision code

| Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   | Figure 20-35. TIDR Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
| TID_REV                       | TID_REV                       | TID_REV                       | TID_REV                       | TID_REV                       | TID_REV                       | TID_REV                       | TID_REV                       |

R-15h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-36. TIDR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      | Reads return 0                                                                               |
| 7-0   | TID_REV  | R      | 15h     | IP revision [ 7:4] Major revision [ 3:0] Minor revision Examples: 0x10 for 1.0, 0x21 for 2.1 |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.2 TIOCP\_CFG Register (offset = 10h) [reset = 0h]

TIOCP\_CFG is shown in Figure 20-36 and described in Table 20-37. This register controls the various parameters of the OCP interface

| Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   | Figure 20-36. TIOCP_CFG Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           | Reserved                           |
| R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| Reserved ClockActivity             | Reserved ClockActivity             | Reserved ClockActivity             | Reserved ClockActivity             | Reserved ClockActivity             | Reserved ClockActivity             | Reserved ClockActivity             | Reserved ClockActivity             |
| R/W-0h R/W-0h                      | R/W-0h R/W-0h                      | R/W-0h R/W-0h                      | R/W-0h R/W-0h                      | R/W-0h R/W-0h                      | R/W-0h R/W-0h                      | R/W-0h R/W-0h                      | R/W-0h R/W-0h                      |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| Reserved                           | Reserved                           | EmuFree                            | IdleMode                           | IdleMode                           | EnaWakeup                          | SoftReset                          | AutoIdle                           |
| R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             | R/W-0h                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-37. TIOCP\_CFG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | Reserved      | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 9-8   | ClockActivity | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 7-6   | Reserved      | R/W    | 0h      | Write 0's for future compatibility Reads return 0                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 5     | EmuFree       | R/W    | 0h      | Sensitivity to emulation (debug) suspend event from Debug Subsystem. 0 = timer_frozen : Timer counter frozen during a debug suspend event. 1 = timer_free : Timer counter free-running. Debug suspend event is ignored.                                                                                                                                                                                                                                                |
| 4-3   | IdleMode      | R/W    | 0h      | Power Management, req/ack control 0 = fidle : Force-idle. An idle request is acknowledged unconditionally 1 = nidle : No-idle. An idle request is never acknowledged 2 = sidle : Smart-idle. Acknowledgment to an idle request is given based on the internal activity of the module 3 = Smart-idle wakeup capable. Acknowledgment to an idle request is given based on the internal activity of the module. The module may generate wakeup events when in idle state. |
| 2     | EnaWakeup     | R/W    | 0h      | Wake-up feature global control 0 = nowake : No wakeup line assertion in idle mode 1 = enbwake : Wakeup line assertion enabled in smart-idle mode                                                                                                                                                                                                                                                                                                                       |
| 1     | SoftReset     | R/W    | 0h      | Software reset. This bit is automatically reset by the hardware. During reads, it always return 0 0 = nmode : Normal mode 1 = rstmode : The module is reset                                                                                                                                                                                                                                                                                                            |
| 0     | AutoIdle      | R/W    | 0h      | Internal OCP clock gating strategy 0 = clkfree : OCP clock is free-running 1 = clkgate : Automatic OCP clock gating strategy is applied, based on the OCP interface activity                                                                                                                                                                                                                                                                                           |

## 20.2.4.3 TISTAT Register (offset = 14h) [reset = 0h]

TISTAT is shown in Figure 20-37 and described in Table 20-38.

This register provides status information about the module, excluding the interrupt status information

| Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   | Figure 20-37. TISTAT Register   |
|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|
| 31                              | 30                              | 29                              | 28                              | 27                              | 26                              | 25                              | 24                              |
| Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        |
| R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            |
| 23                              | 22                              | 21                              | 20                              | 19                              | 18                              | 17                              | 16                              |
| Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        |
| R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            |
| 15                              | 14                              | 13                              | 12                              | 11                              | 10                              | 9                               | 8                               |
| Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        |
| R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            | R-0h                            |
| 7                               | 6                               | 5                               | 4                               | 3                               | 2                               | 1                               | 0                               |
| Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | ResetDone                       |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-38. TISTAT Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------|
| 31-1  | Reserved  | R      | 0h      | Reads return 0 Reserved for OCP-socket status information                                                  |
| 0     | ResetDone | R      | 0h      | Internal reset monitoring 0 = rstongoing : Internal module reset in on-going 1 = rstcomp : Reset completed |

R-0h

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.4 TISR Register (offset = 18h) [reset = 0h]

TISR is shown in Figure 20-38 and described in Table 20-39.

The Timer Status Register is used to determine which of the timer events requested an interrupt.

| Figure 20-38. TISR Register   | Figure 20-38. TISR Register   | Figure 20-38. TISR Register   | Figure 20-38. TISR Register   | Figure 20-38. TISR Register   | Figure 20-38. TISR Register   | Figure 20-38. TISR Register   | Figure 20-38. TISR Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
|                               |                               | Reserved                      |                               |                               | TCAR_IT_FLA G                 | OVF_IT_FLAG                   | MAT_IT_FLAG                   |
|                               |                               | R-0h                          |                               |                               | R/W1toCl-0h                   | R/W1toCl-0h                   | R/W1toCl-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-39. TISR Register Field Descriptions

| Bit   | Field        | Type     | Reset   | Description                                                                                                                                                                                                      |
|-------|--------------|----------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved     | R        | 0h      | Reads return 0                                                                                                                                                                                                   |
| 2     | TCAR_IT_FLAG | R/W1toCl | 0h      | indicates when an external pulse transition of the correct polarity is detected on the external pin PIEVENTCAPT 0 = TCAR_IT_FLAG_0 : no capture interrupt request 1 = TACR_IT_FLAG_1 : capture interrupt request |
| 1     | OVF_IT_FLAG  | R/W1toCl | 0h      | TCRR overflow 0 = OVF_IT_FLAG_0 : no overflow interrupt request 1 = OVF_IT_FLAG_1 : overflow interrupt pending                                                                                                   |
| 0     | MAT_IT_FLAG  | R/W1toCl | 0h      | the compare result of TCRR and TMAR 0 = MAT_IT_FLAG_0 : no compare interrupt request 1 = MAT_IT_FLAG_1 : compare interrupt pending                                                                               |

## 20.2.4.5 TIER Register (offset = 1Ch) [reset = 0h]

TIER is shown in Figure 20-39 and described in Table 20-40.

This register controls (enable/disable) the interrupt events

| Figure 20-39. TIER Register   | Figure 20-39. TIER Register   | Figure 20-39. TIER Register   | Figure 20-39. TIER Register   | Figure 20-39. TIER Register   | Figure 20-39. TIER Register   | Figure 20-39. TIER Register   | Figure 20-39. TIER Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
|                               |                               | Reserved                      |                               |                               | TCAR_IT_ENA                   | OVF_IT_ENA                    | MAT_IT_ENA                    |
|                               |                               | R-0h                          |                               |                               | R/W-0h                        | R/W-0h                        | R/W-0h                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-40. TIER Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved    | R      | 0h      | Reads return 0                                                                                             |
| 2     | TCAR_IT_ENA | R/W    | 0h      | Enable capture interrupt 0 = Dsb_capt : Disable capture interrupt 1 = Enb_capt : Enable capture interrupt  |
| 1     | OVF_IT_ENA  | R/W    | 0h      | Enable overflow interrupt 0 = Dsb_ovf : Disable overflow interrupt 1 = Enb_ovf : Enable overflow interrupt |
| 0     | MAT_IT_ENA  | R/W    | 0h      | Enable match interrupt 0 = Dsb_match : Disable match interrupt 1 = Enb_match : Enable match interrupt      |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.6 TWER Register (offset = 20h) [reset = 0h]

TWER is shown in Figure 20-40 and described in Table 20-41.

This register controls (enable/disable) the wakeup feature on specific interrupt events

| Figure 20-40. TWER Register   | Figure 20-40. TWER Register   | Figure 20-40. TWER Register   | Figure 20-40. TWER Register   | Figure 20-40. TWER Register   | Figure 20-40. TWER Register   | Figure 20-40. TWER Register   | Figure 20-40. TWER Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
|                               |                               | Reserved                      |                               |                               | TCAR_WUP_E NA                 | OVF_WUP_EN A                  | MAT_WUP_EN A                  |
|                               |                               | R-0h                          |                               |                               | R/W-0h                        | R/W-0h                        | R/W-0h                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-41. TWER Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                              |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved     | R      | 0h      | Reads return 0                                                                                           |
| 2     | TCAR_WUP_ENA | R/W    | 0h      | Enable capture wake-up 0 = DsbWupCap : Disable capture wake-up 1 = EnbWupCapt : Enable capture wake-up   |
| 1     | OVF_WUP_ENA  | R/W    | 0h      | Enable overflow wake-up 0 = DsbWupOvf : Disable overflow wake-up 1 = EnbWupOvf : Enable overflow wake-up |
| 0     | MAT_WUP_ENA  | R/W    | 0h      | Enable match wake-up 0 = DsbWupMat : Disable match wake-up 1 = EnbWupMat : Enable match wake-up          |

## 20.2.4.7 TCLR Register (offset = 24h) [reset = 0h]

TCLR is shown in Figure 20-41 and described in Table 20-42.

This register controls optional features specific to the timer functionality

| Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   | Figure 20-41. TCLR Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved                      | GPO_CFG                       | CAPT_MODE                     | PT                            | TRG                           | TRG                           | TCM                           | TCM                           |
| R-0h                          | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
| SCPWM                         | CE                            | PRE                           |                               | PTV                           |                               | AR                            | ST                            |
| R/W-0h                        | R/W-0h                        | R/W-0h                        |                               | R/W-0h                        |                               | R/W-0h                        | R/W-0h                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-42. TCLR Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                          |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | Reserved  | R      | 0h      | Reads return 0                                                                                                                                                                                                       |
| 14    | GPO_CFG   | R/W    | 0h      |                                                                                                                                                                                                                      |
| 13    | CAPT_MODE | R/W    | 0h      | Capture mode select bit (first/second) 0 = First_capt : Capture the first enabled capture event in TCAR1 1 = Sec_capt : Capture the second enabled capture event in TCAR2                                            |
| 12    | PT        | R/W    | 0h      | Pulse or Toggle select bit 0 = pulse : pulse modulation 1 = toggle : toggle modulation                                                                                                                               |
| 11-10 | TRG       | R/W    | 0h      | Trigger Output Mode 0 = no_trg : No trigger 1 = ovf_trg : Overflow trigger 2 = ovf_mat_trg : Overflow and match trigger 3 = reserved : Reserved                                                                      |
| 9-8   | TCM       | R/W    | 0h      | Transition Capture Mode 0 = no_edge : No capture 1 = rise_edge : Capture on rising edges of PIEVETCAPT 2 = fall_edge : Capture on falling edges of PIEVETCAPT 3 = booth_edges : Capture on booth edges of PIEVETCAPT |
| 7     | SCPWM     | R/W    | 0h      | Pulse Width Modulation output pin default value 0 = def_low : default value of PORPWM: 0 1 = def_high : default value of PORPWM: 1                                                                                   |
| 6     | CE        | R/W    | 0h      | Compare enable 0 = dsb_cmp : Compare disabled 1 = enb_cmp : Compare enabled                                                                                                                                          |
| 5     | PRE       | R/W    | 0h      | Prescaler enable 0 = no_prescal : Prescaler disabled 1 = prescal_on : Prescaler enabled                                                                                                                              |
| 4-2   | PTV       | R/W    | 0h      | Trigger Output Mode                                                                                                                                                                                                  |

<!-- image -->

<!-- image -->

## Table 20-42. TCLR Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------|
|     1 | AR      | R/W    | 0h      | Auto-reload mode 0 = one_shot : One shot mode overflow 1 = auto_rel : Auto-reload mode overflow |
|     0 | ST      | R/W    | 0h      | Start/Stop timer control 0 = cnt_stop : Stop the timer 1 = cnt_start : Start the timer          |

## 20.2.4.8 TCRR Register (offset = 28h) [reset = 0h]

TCRR is shown in Figure 20-42 and described in Table 20-43.

This register holds the value of the internal counter

## Figure 20-42. TCRR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TIMER\_COUNTER

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-43. TCRR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                             |
|-------|---------------|--------|---------|-----------------------------------------|
| 31-0  | TIMER_COUNTER | R/W    | 0h      | The value of the timer counter register |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.9 TLDR Register (offset = 2Ch) [reset = 0h]

TLDR is shown in Figure 20-43 and described in Table 20-44.

This register holds the timer's load value

## Figure 20-43. TLDR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

LOAD\_VALUE

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-44. TLDR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                          |
|-------|------------|--------|---------|--------------------------------------|
| 31-0  | LOAD_VALUE | R/W    | 0h      | The value of the timer load register |

## 20.2.4.10 TTGR Register (offset = 30h) [reset = FFFFFFFFh]

TTGR is shown in Figure 20-44 and described in Table 20-45.

This register triggers a counter reload of timer by writing any value in it.

## Figure 20-44. TTGR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

TTGR\_VALUE

R/W-FFFFFFFFh

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-45. TTGR Register Field Descriptions

| Bit   | Field      | Type   | Reset     | Description                                                                    |
|-------|------------|--------|-----------|--------------------------------------------------------------------------------|
| 31-0  | TTGR_VALUE | R/W    | FFFFFFFFh | The value of the trigger register During reads, it always returns "0xFFFFFFFF" |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.11 TWPS Register (offset = 34h) [reset = 0h]

TWPS is shown in Figure 20-45 and described in Table 20-46.

This register contains the write posting bits for all writ-able functional registers

| Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   | Figure 20-45. TWPS Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | W_PEND_TO WR                  | W_PEND_TOC R                  |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
| W_PEND_TCV R                  | W_PEND_TNI R                  | W_PEND_TPIR                   | W_PEND_TMA R                  | W_PEND_TTG R                  | W_PEND_TLD R                  | W_PEND_TCR R                  | W_PEND_TCL R                  |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-46. TWPS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                             |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | Reserved    | R      | 0h      | Reads return 0                                                                                                                                          |
| 9     | W_PEND_TOWR | R      | 0h      | Write pending for register TOWR 0 = OWR_nPend : No Overflow Wrapping Register write pending. 1 = OWR_Pend : Overflow Wrapping Register write pending.   |
| 8     | W_PEND_TOCR | R      | 0h      | Write pending for register TOCR 0 = OCR_nPend : No Overflow Counter Register write pending. 1 = OCR_Pend : Overflow Counter Register write pending.     |
| 7     | W_PEND_TCVR | R      | 0h      | Write pending for register TCVR 0 = CVR_nPend : No Counter Register write pending. 1 = CVR_Pend : Counter Register write pending.                       |
| 6     | W_PEND_TNIR | R      | 0h      | Write pending for register TNIR 0 = NIR_nPend : No Negativ Increment Register write pending. 1 = NIR_Pend : Negativ Increment Register write pending.   |
| 5     | W_PEND_TPIR | R      | 0h      | Write pending for register TPIR 0 = PIR_nPend : No Positive Increment Register write pending. 1 = PIR_Pend : Positive Increment Register write pending. |
| 4     | W_PEND_TMAR | R      | 0h      | Write pending for register TMAR 0 = MAR_nPend : No Match Register write pending 1 = MAR_Pend : Match Register write pending                             |
| 3     | W_PEND_TTGR | R      | 0h      | Write pending for register TTGR 0 = TGR_nPend : No Trigger Register write pending 1 = TGR_Pend : Trigger Register write pending                         |
| 2     | W_PEND_TLDR | R      | 0h      | Write pending for register TLDR 0 = LDR_nPend : No Load Register write pending 1 = LDR_Pend : Load Register write pending                               |

## Table 20-46. TWPS Register Field Descriptions (continued)

|   Bit | Field       | Type   | Reset   | Description                                                                                                                     |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------|
|     1 | W_PEND_TCRR | R      | 0h      | Write pending for register TCRR 0 = CRR_nPend : No Counter Register write pending 1 = CRR_Pend : Counter Register write pending |
|     0 | W_PEND_TCLR | R      | 0h      | Write pending for register TCLR 0 = CLR_nPend : No Control Register write pending 1 = CLR_Pend : Control Register write pending |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.12 TMAR Register (offset = 38h) [reset = 0h]

TMAR is shown in Figure 20-46 and described in Table 20-47.

This register holds the match value to be compared with the counter's value

## Figure 20-46. TMAR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

COMPARE\_VALUE

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-47. TMAR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                     |
|-------|---------------|--------|---------|---------------------------------|
| 31-0  | COMPARE_VALUE | R/W    | 0h      | The value of the match register |

## 20.2.4.13 TCAR1 Register (offset = 3Ch) [reset = 0h]

TCAR1 is shown in Figure 20-47 and described in Table 20-48.

This register holds the value of the first counter register capture

## Figure 20-47. TCAR1 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

CAPTURE\_VALUE1

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-48. TCAR1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                  |
|-------|----------------|--------|---------|----------------------------------------------|
| 31-0  | CAPTURE_VALUE1 | R      | 0h      | The value of first captured counter register |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.14 TSICR Register (offset = 40h) [reset = 0h]

TSICR is shown in Figure 20-48 and described in Table 20-49.

Timer Synchronous Interface Control Register

| Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   | Figure 20-48. TSICR Register   |
|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|
| 31                             | 30                             | 29                             | 28                             | 27                             | 26                             | 25                             | 24                             |
| Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 23                             | 22                             | 21                             | 20                             | 19                             | 18                             | 17                             | 16                             |
| Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 15                             | 14                             | 13                             | 12                             | 11                             | 10                             | 9                              | 8                              |
| Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 7                              | 6                              | 5                              | 4                              | 3                              | 2                              | 1                              | 0                              |
| Reserved                       | Reserved                       | Reserved                       | Reserved                       | Reserved                       | POSTED                         | SFT                            | Reserved                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R/W-0h                         | R/W-0h                         | R-0h                           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-49. TSICR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | Reserved | R      | 0h      | Reads return 0                                                                                                                                                                                       |
| 2     | POSTED   | R/W    | 1h      | PIFREQRATIO 0x0 = Posted mode inactive: will delay the command accept output signal. 0x1 = Posted mode active (clocks ratio needs to fit freq (timer) less than freq (OCP)/4 frequency requirement). |
| 1     | SFT      | R/W    | 0h      | This bit reset all the functional part of the module 0 = SFT_0 : software reset is disabled 1 = SFT_1 : software reset is enabled                                                                    |
| 0     | Reserved | R      | 0h      | Reads return 0                                                                                                                                                                                       |

## 20.2.4.15 TCAR2 Register (offset = 44h) [reset = 0h]

TCAR2 is shown in Figure 20-49 and described in Table 20-50.

This register holds the value of the second counter register capture

## Figure 20-49. TCAR2 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

CAPTURE\_VALUE2

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-50. TCAR2 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                   |
|-------|----------------|--------|---------|-----------------------------------------------|
| 31-0  | CAPTURE_VALUE2 | R      | 0h      | The value of second captured counter register |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.16 TPIR Register (offset = 48h) [reset = 0h]

TPIR is shown in Figure 20-50 and described in Table 20-51.

This register is used for 1ms tick generation. The TPIR register holds the value of the positive increment. The value of this register is added with the value of the TCVR to define whether next value loaded in TCRR will be the sub-period value or the over-period value.

## Figure 20-50. TPIR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

POSITIVE\_INC\_VALUE

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-51. TPIR Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                          |
|-------|--------------------|--------|---------|--------------------------------------|
| 31-0  | POSITIVE_INC_VALUE | R/W    | 0h      | The value of the positive increment. |

## 20.2.4.17 TNIR Register (offset = 4Ch) [reset = 0h]

TNIR is shown in Figure 20-51 and described in Table 20-52.

This register is used for 1ms tick generation. The TNIR register holds the value of the negative increment. The value of this register is added with the value of the TCVR to define whether next value loaded in TCRR will be the sub-period value or the over-period value.

## Figure 20-51. TNIR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

## NEGATIVE\_INV\_VALUE

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-52. TNIR Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                          |
|-------|--------------------|--------|---------|--------------------------------------|
| 31-0  | NEGATIVE_INV_VALUE | R/W    | 0h      | The value of the negative increment. |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.18 TCVR Register (offset = 50h) [reset = 0h]

TCVR is shown in Figure 20-52 and described in Table 20-53.

This register is used for 1ms tick generation. The TCVR register defines whether next value loaded in TCRR will be the sub-period value or the over-period value.

## Figure 20-52. TCVR Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

COUNTER\_VALUE

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-53. TCVR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description               |
|-------|---------------|--------|---------|---------------------------|
| 31-0  | COUNTER_VALUE | R/W    | 0h      | The value of CVR counter. |

## 20.2.4.19 TOCR Register (offset = 54h) [reset = 0h]

TOCR is shown in Figure 20-53 and described in Table 20-54.

This register is used to mask the tick interrupt for a selected number of ticks.

| Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   | Figure 20-53. TOCR Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             |
| R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             |
| R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
| OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             | OVF_COUNTER_VALUE             |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-54. TOCR Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                    |
|-------|-------------------|--------|---------|--------------------------------|
| 31-24 | Reserved          | R      | 0h      | Reads return 0.                |
| 23-0  | OVF_COUNTER_VALUE | R/W    | 0h      | The number of overflow events. |

<!-- image -->

<!-- image -->

www.ti.com

## 20.2.4.20 TOWR Register (offset = 58h) [reset = 0h]

TOWR is shown in Figure 20-54 and described in Table 20-55.

This register holds the number of masked overflow interrupts.

| Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   | Figure 20-54. TOWR Register   |
|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| 31                            | 30                            | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
| Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      | Reserved                      |
| R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          | R-0h                          |
| 23                            | 22                            | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            |
| R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        |
| 15                            | 14                            | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            |
| R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        | R/W-0h                        |
| 7                             | 6                             | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
| OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            | OVF_WRAPPING_VALUE            |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-55. TOWR Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                      |
|-------|---------------------|--------|---------|----------------------------------|
| 31-24 | Reserved            | R      | 0h      | Reads return 0                   |
| 23-0  | OVF_WRAPPING_VALU E | R/W    | 0h      | The number of masked interrupts. |