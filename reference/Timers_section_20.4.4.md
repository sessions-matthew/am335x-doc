<!-- image -->

## 20.4.3.14.2.2 Subsequence - Disable the Watchdog Timer

Table 20-109 lists the steps to disable the watchdog timer.

## Table 20-109. Disable the Watchdog Timer

| Step                          | Register/Bit Field/Programming Model   | Value      |
|-------------------------------|----------------------------------------|------------|
| Write disable sequence Data1. | WDT_WSPR                               | XXXX AAAAh |
| Write disable sequence Data2. | WDT_WSPR                               | XXXX 5555h |

## 20.4.3.14.2.3 Subsequence - Enable the Watchdog Timer

Table 20-110 lists the steps to enable the watchdog timer.

## Table 20-110. Enable the Watchdog Timer

| Step                         | Register/Bit Field/Programming Model   | Value      |
|------------------------------|----------------------------------------|------------|
| Write enable sequence Data1. | WDT_WSPR                               | XXXX BBBBh |
| Write enable sequence Data2. | WDT_WSPR                               | XXXX 4444h |

## 20.4.4 Watchdog Registers

## NOTE:

## CAUTION

The watchdog timers registers are limited to 32-bit and 16-bit data accesses; 8bit access is not allowed and can corrupt register content.

- The WDT\_WISR and WDT\_WIRQSTATRAW registers have the same functionality. The WDT\_WISR register is used for software backward compatibility.
- The WDT\_WIER and WDT\_WIRQENSET/WDT\_WIRQENCLR registers have the same functionality. The WDT\_WIER register is used for software backward compatibility.
- The WDT\_WIRQSTATRAW and WDT\_WIRQSTAT registers give the same information when read. The WDT\_WIRQSTATRAW register is used for debug.

## 20.4.4.1 WATCHDOG\_TIMER Registers

Table 20-111 lists the memory-mapped registers for the WATCHDOG\_TIMER. All register offset addresses not listed in Table 20-111 should be considered as reserved locations and the register contents should not be modified.

## Table 20-111. WATCHDOG\_TIMER Registers

| Offset   | Acronym   | Register Name                      | Section            |
|----------|-----------|------------------------------------|--------------------|
| 0h       | WDT_WIDR  | Watchdog Identification Register   | Section 20.4.4.1.1 |
| 10h      | WDT_WDSC  | Watchdog System Control Register   | Section 20.4.4.1.2 |
| 14h      | WDT_WDST  | Watchdog Status Register           | Section 20.4.4.1.3 |
| 18h      | WDT_WISR  | Watchdog Interrupt Status Register | Section 20.4.4.1.4 |
| 1Ch      | WDT_WIER  | Watchdog Interrupt Enable Register | Section 20.4.4.1.5 |
| 24h      | WDT_WCLR  | Watchdog Control Register          | Section 20.4.4.1.6 |
| 28h      | WDT_WCRR  | Watchdog Counter Register          | Section 20.4.4.1.7 |

Table 20-111. WATCHDOG\_TIMER Registers (continued)

| Offset   | Acronym         | Register Name                            | Section             |
|----------|-----------------|------------------------------------------|---------------------|
| 2Ch      | WDT_WLDR        | Watchdog Load Register                   | Section 20.4.4.1.8  |
| 30h      | WDT_WTGR        | Watchdog Trigger Register                | Section 20.4.4.1.9  |
| 34h      | WDT_WWPS        | Watchdog Write Posting Bits Register     | Section 20.4.4.1.10 |
| 44h      | WDT_WDLY        | Watchdog Delay Configuration Register    | Section 20.4.4.1.11 |
| 48h      | WDT_WSPR        | Watchdog Start/Stop Register             | Section 20.4.4.1.12 |
| 54h      | WDT_WIRQSTATRAW | Watchdog Raw Interrupt Status Register   | Section 20.4.4.1.13 |
| 58h      | WDT_WIRQSTAT    | Watchdog Interrupt Status Register       | Section 20.4.4.1.14 |
| 5Ch      | WDT_WIRQENSET   | Watchdog Interrupt Enable Set Register   | Section 20.4.4.1.15 |
| 60h      | WDT_WIRQENCLR   | Watchdog Interrupt Enable Clear Register | Section 20.4.4.1.16 |

<!-- image -->

<!-- image -->

## 20.4.4.1.1 WDT\_WIDR Register (offset = 0h) [reset = 0h]

WDT\_WIDR is shown in Figure 20-99 and described in Table 20-112.

Watchdog Identification Register

## Figure 20-99. WDT\_WIDR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 REVISION   |
|------|------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-112. WDT\_WIDR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | REVISION | R      | 0h      | IP Revision   |

## 20.4.4.1.2 WDT\_WDSC Register (offset = 10h) [reset = 10h]

WDT\_WDSC is shown in Figure 20-100 and described in Table 20-113.

The Watchdog System Control Register controls the various parameters of the L4 interface.

## Figure 20-100. WDT\_WDSC Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24       |
|----------|----------|----------|----------|----------|----------|-----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0        |
| RESERVED | RESERVED | EMUFREE  | IDLEMODE | IDLEMODE | RESERVED | SOFTRESET | RESERVED |
| R-0h     | R-0h     | R/W-0h   | R/W-2h   | R/W-2h   | R-0h     | R/W-0h    | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-113. WDT\_WDSC Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 5     | EMUFREE   | R/W    | 0h      | Sensitivity to emulation (debug) suspend event from Debug Subsystem. 0h = Timer counter frozen during debug suspend event. 1h = Timer counter free-running, and Debug suspend event is ignored.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 4-3   | IDLEMODE  | R/W    | 2h      | Configuration of the local target state management mode.By definition, target can handle read/write transaction as long as it is out of IDLE state. 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state.Backup mode, for debug only. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3h = Smart-idle wakeup-capable mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module may generate (IRQ- or DMA-request-related) wakeup events when in idle state. |
| 2     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 1     | SOFTRESET | R/W    | 0h      | Software reset. (Optional) 0h (W) = No action 0h (R) = Reset done, no pending action 1h (W) = Initiate software reset. 1h (R) = Reset (software or other) ongoing                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 0     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |

<!-- image -->

<!-- image -->

## 20.4.4.1.3 WDT\_WDST Register (offset = 14h) [reset = 1h]

WDT\_WDST is shown in Figure 20-101 and described in Table 20-114.

The Watchdog Status Register provides status information about the module.

## Figure 20-101. WDT\_WDST Register

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
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-1h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-114. WDT\_WDST Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                  |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------------|
| 31-1  | RESERVED  | R      | 0h      |                                                                                              |
| 0     | RESETDONE | R      | 1h      | Internal module reset monitoring 0h = Internal module reset is ongoing. 1h = Reset completed |

## 20.4.4.1.4 WDT\_WISR Register (offset = 18h) [reset = 0h]

WDT\_WISR is shown in Figure 20-102 and described in Table 20-115.

The Watchdog Interrupt Status Register shows which interrupt events are pending inside the module.

## Figure 20-102. WDT\_WISR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25          | 24          |
|----------|----------|----------|----------|----------|----------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18       | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10       | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2        | 1           | 0           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DLY_IT_FLAG | OVF_IT_FLAG |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-115. WDT\_WISR Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                         |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED    | R      | 0h      |                                                                                                                                                                     |
| 1     | DLY_IT_FLAG | R/W    | 0h      | Pending delay interrupt status. 0h (W) = Status unchanged 0h (R) = No delay interrupt pending 1h (W) = Status bit cleared 1h (R) = Delay interrupt pending          |
| 0     | OVF_IT_FLAG | R/W    | 0h      | Pending overflow interrupt status. 0h (W) = Status unchanged 0h (R) = No overflow interrupt pending 1h (W) = Status bit cleared 1h (R) = Overflow interrupt pending |

<!-- image -->

<!-- image -->

## 20.4.4.1.5 WDT\_WIER Register (offset = 1Ch) [reset = 0h]

WDT\_WIER is shown in Figure 20-103 and described in Table 20-116.

The Watchdog Interrupt Enable Register controls (enable/disable) the interrupt events.

## Figure 20-103. WDT\_WIER Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DLY_IT_ENA | OVF_IT_ENA |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-116. WDT\_WIER Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                        |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED   | R      | 0h      |                                                                                                    |
| 1     | DLY_IT_ENA | R/W    | 0h      | Delay interrupt enable/disable 0h = Disable delay interrupt. 1h = Enable delay interrupt.          |
| 0     | OVF_IT_ENA | R/W    | 0h      | Overflow interrupt enable/disable 0h = Disable overflow interrupt. 1h = Enable overflow interrupt. |

## 20.4.4.1.6 WDT\_WCLR Register (offset = 24h) [reset = 20h]

WDT\_WCLR is shown in Figure 20-104 and described in Table 20-117.

The Watchdog Control Register controls the prescaler stage of the counter.

## Figure 20-104. WDT\_WCLR Register

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
| RESERVED | RESERVED | PRE      |          | PTV      |          | RESERVED | RESERVED |
| R-0h     | R-0h     | R/W-1h   |          | R/W-0h   |          | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-117. WDT\_WCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED | R      | 0h      |                                                                                                                                                                                                                               |
| 5     | PRE      | R/W    | 1h      | Prescaler enable/disable configuration 0h = Prescaler disabled 1h = Prescaler enabled                                                                                                                                         |
| 4-2   | PTV      | R/W    | 0h      | Prescaler value. The timer counter is prescaled with the value: 2**PTV. Example: PTV = 3 then counter increases value if started after 8 functional clock periods. On reset, it is loaded from PI_PTV_RESET_VALUE input port. |
| 1-0   | RESERVED | R      | 0h      |                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

## 20.4.4.1.7 WDT\_WCRR Register (offset = 28h) [reset = 0h]

WDT\_WCRR is shown in Figure 20-105 and described in Table 20-118.

The Watchdog Counter Register holds the value of the internal counter.

## Figure 20-105. WDT\_WCRR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 TIMER_COUNTER   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-118. WDT\_WCRR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                         |
|-------|---------------|--------|---------|-------------------------------------|
| 31-0  | TIMER_COUNTER | R/W    | 0h      | Value of the timer counter register |

## 20.4.4.1.8 WDT\_WLDR Register (offset = 2Ch) [reset = 0h]

WDT\_WLDR is shown in Figure 20-106 and described in Table 20-119.

The Watchdog Load Register holds the timer load value.

## Figure 20-106. WDT\_WLDR Register

| 31         | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------|------------------------------------------------------------------------------------|
| TIMER_LOAD | TIMER_LOAD                                                                         |
| R/W-0h     | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-119. WDT\_WLDR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                      |
|-------|------------|--------|---------|----------------------------------|
| 31-0  | TIMER_LOAD | R/W    | 0h      | Value of the timer load register |

<!-- image -->

<!-- image -->

## 20.4.4.1.9 WDT\_WTGR Register (offset = 30h) [reset = 0h]

WDT\_WTGR is shown in Figure 20-107 and described in Table 20-120.

Writing a different value than the one already written in the Watchdog Trigger Register does a watchdog counter reload.

## Figure 20-107. WDT\_WTGR Register

| 31         | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------|------------------------------------------------------------------------------------|
| TTGR_VALUE | TTGR_VALUE                                                                         |
| R/W-0h     | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-120. WDT\_WTGR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                   |
|-------|------------|--------|---------|-------------------------------|
| 31-0  | TTGR_VALUE | R/W    | 0h      | Value of the trigger register |

## 20.4.4.1.10 WDT\_WWPS Register (offset = 34h) [reset = 0h]

WDT\_WWPS is shown in Figure 20-108 and described in Table 20-121.

The Watchdog Write Posting Bits Register contains the write posting bits for all writeable functional registers.

## Figure 20-108. WDT\_WWPS Register

| 31       | 30       | 29           | 28           | 27           | 26           | 25           | 24           |
|----------|----------|--------------|--------------|--------------|--------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 23       | 22       | 21           | 20           | 19           | 18           | 17           | 16           |
| RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15       | 14       | 13           | 12           | 11           | 10           | 9            | 8            |
| RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 7        | 6        | 5            | 4            | 3            | 2            | 1            | 0            |
| RESERVED | RESERVED | W_PEND_WDL Y | W_PEND_WSP R | W_PEND_WT GR | W_PEND_WLD R | W_PEND_WC RR | W_PEND_WCL R |
| R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-121. WDT\_WWPS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                |
|-------|-------------|--------|---------|--------------------------------------------------------------------------------------------|
| 31-6  | RESERVED    | R      | 0h      |                                                                                            |
| 5     | W_PEND_WDLY | R      | 0h      | Write pending for register WDLY 0h = No register write pending 1h = Register write pending |
| 4     | W_PEND_WSPR | R      | 0h      | Write pending for register WSPR 0h = No register write pending 1h = Register write pending |
| 3     | W_PEND_WTGR | R      | 0h      | Write pending for register WTGR 0h = No register write pending 1h = Register write pending |
| 2     | W_PEND_WLDR | R      | 0h      | Write pending for register WLDR 0h = No register write pending 1h = Register write pending |
| 1     | W_PEND_WCRR | R      | 0h      | Write pending for register WCRR 0h = No register write pending 1h = Register write pending |
| 0     | W_PEND_WCLR | R      | 0h      | Write pending for register WCLR 0h = No register write pending 1h = Register write pending |

<!-- image -->

<!-- image -->

## 20.4.4.1.11 WDT\_WDLY Register (offset = 44h) [reset = 0h]

WDT\_WDLY is shown in Figure 20-109 and described in Table 20-122.

The Watchdog Delay Configuration Register holds the delay value that controls the internal pre-overflow event detection.

## Figure 20-109. WDT\_WDLY Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 WDLY_VALUE   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-122. WDT\_WDLY Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                 |
|-------|------------|--------|---------|-----------------------------|
| 31-0  | WDLY_VALUE | R/W    | 0h      | Value of the delay register |

## 20.4.4.1.12 WDT\_WSPR Register (offset = 48h) [reset = 0h]

WDT\_WSPR is shown in Figure 20-110 and described in Table 20-123.

The Watchdog Start/Stop Register holds the start-stop value that controls the internal start-stop FSM.

## Figure 20-110. WDT\_WSPR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 WSPR_VALUE   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-123. WDT\_WSPR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                      |
|-------|------------|--------|---------|----------------------------------|
| 31-0  | WSPR_VALUE | R/W    | 0h      | Value of the start-stop register |

<!-- image -->

<!-- image -->

## 20.4.4.1.13 WDT\_WIRQSTATRAW Register (offset = 54h) [reset = 0h]

WDT\_WIRQSTATRAW is shown in Figure 20-111 and described in Table 20-124.

In the Watchdog Raw Interrupt Status Register, IRQ unmasked status, status set per-event raw interrupt status vector, line 0. Raw status is set even if event is not enabled. Write 1 to set the (raw) status, mostly for debug.

## Figure 20-111. WDT\_WIRQSTATRAW Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24        |
|----------|----------|----------|----------|----------|----------|-----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | EVENT_DLY | EVENT_OVF |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1S-0h  | R/W1S-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-124. WDT\_WIRQSTATRAW Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                           |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED  | R      | 0h      |                                                                                                                                       |
| 1     | EVENT_DLY | R/W1S  | 0h      | Settable raw status for delay event 0h (W) = No action 0h (R) = No event pending 1h (W) = Set event (debug) 1h (R) = Event pending    |
| 0     | EVENT_OVF | R/W1S  | 0h      | Settable raw status for overflow event 0h (W) = No action 0h (R) = No event pending 1h (W) = Set event (debug) 1h (R) = Event pending |

## 20.4.4.1.14 WDT\_WIRQSTAT Register (offset = 58h) [reset = 0h]

WDT\_WIRQSTAT is shown in Figure 20-112 and described in Table 20-125.

In the Watchdog Interrupt Status Register, IRQ masked status, status clear per-event enabled interrupt status vector, line 0. Enabled status is not set unless event is enabled. Write 1 to clear the status after interrupt has been serviced (raw status gets cleared, that is, even if not enabled).

## Figure 20-112. WDT\_WIRQSTAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24        |
|----------|----------|----------|----------|----------|----------|-----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | EVENT_DLY | EVENT_OVF |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1C-0h  | R/W1C-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-125. WDT\_WIRQSTAT Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                           |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED  | R      | 0h      |                                                                                                                                                       |
| 1     | EVENT_DLY | R/W1C  | 0h      | Clearable, enabled status for delay event 0h (W) = No action 0h (R) = No (enabled) event pending 1h (W) = Clear (raw) event 1h (R) = Event pending    |
| 0     | EVENT_OVF | R/W1C  | 0h      | Clearable, enabled status for overflow event 0h (W) = No action 0h (R) = No (enabled) event pending 1h (W) = Clear (raw) event 1h (R) = Event pending |

<!-- image -->

<!-- image -->

## 20.4.4.1.15 WDT\_WIRQENSET Register (offset = 5Ch) [reset = 0h]

WDT\_WIRQENSET is shown in Figure 20-113 and described in Table 20-126.

In the Watchdog Interrupt Enable Set Register, IRQ enable set per-event interrupt enable bit vector, line 0. Write 1 to set (enable interrupt). Readout equal to corresponding \_CLR register.

## Figure 20-113. WDT\_WIRQENSET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ENABLE_DLY | ENABLE_OVF |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1S-0h   | R/W1S-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-126. WDT\_WIRQENSET Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                             |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED   | R      | 0h      |                                                                                                                                         |
| 1     | ENABLE_DLY | R/W1S  | 0h      | Enable for delay event 0h (W) = No action 0h (R) = Interrupt disabled (masked) 1h (W) = Enable interrupt. 1h (R) = Interrupt enabled    |
| 0     | ENABLE_OVF | R/W1S  | 0h      | Enable for overflow event 0h (W) = No action 0h (R) = Interrupt disabled (masked) 1h (W) = Enable interrupt. 1h (R) = Interrupt enabled |

## 20.4.4.1.16 WDT\_WIRQENCLR Register (offset = 60h) [reset = 0h]

WDT\_WIRQENCLR is shown in Figure 20-114 and described in Table 20-127.

In the Watchdog Interrupt Enable Clear Register, IRQ enable clear per-event interrupt enable bit vector, line 0. Write 1 to clear (disable interrupt). Readout equal to corresponding \_SET register.

## Figure 20-114. WDT\_WIRQENCLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ENABLE_DLY | ENABLE_OVF |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1C-0h   | R/W1C-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-127. WDT\_WIRQENCLR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                              |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED   | R      | 0h      |                                                                                                                                          |
| 1     | ENABLE_DLY | R/W1C  | 0h      | Enable for delay event 0h (W) = No action 0h (R) = Interrupt disabled (masked) 1h (W) = Disable interrupt. 1h (R) = Interrupt enabled    |
| 0     | ENABLE_OVF | R/W1C  | 0h      | Enable for overflow event 0h (W) = No action 0h (R) = Interrupt disabled (masked) 1h (W) = Disable interrupt. 1h (R) = Interrupt enabled |

<!-- image -->