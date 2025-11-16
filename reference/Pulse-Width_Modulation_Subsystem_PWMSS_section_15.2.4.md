<!-- image -->

www.ti.com

## Example 15-17. Code Snippet for Configuration in Figure 15-69 (continued)

EPwm2Regs.DBRED = RED2\_NewValue;

## 15.2.4 EPWM Registers

Table 15-63 lists the memory-mapped registers for the EPWM. All register offset addresses not listed in Table 15-63 should be considered as reserved locations and the register contents should not be modified.

## Table 15-63. EPWM Registers

| Offset   | Acronym   | Register Name                                           | Section           |
|----------|-----------|---------------------------------------------------------|-------------------|
| 0h       | TBCTL     | Time-Base Control Register                              | Section 15.2.4.1  |
| 2h       | TBSTS     | Time-Base Status Register                               | Section 15.2.4.2  |
| 4h       | TBPHSHR   | Extension for HRPWM Phase Register                      | Section 15.2.4.3  |
| 6h       | TBPHS     | Time-Base Phase Register                                | Section 15.2.4.4  |
| 8h       | TBCNT     | Time-Base Counter Register                              | Section 15.2.4.5  |
| Ah       | TBPRD     | Time-Base Period Register                               | Section 15.2.4.6  |
| Eh       | CMPCTL    | Counter-Compare Control Register                        | Section 15.2.4.7  |
| 10h      | CMPAHR    | Extension for HRPWM Counter-Compare A Register          | Section 15.2.4.8  |
| 12h      | CMPA      | Counter-Compare A Register                              | Section 15.2.4.9  |
| 14h      | CMPB      | Counter-Compare B Register                              | Section 15.2.4.10 |
| 16h      | AQCTLA    | Action-Qualifier Control Register for Output A (EPWMxA) | Section 15.2.4.11 |
| 18h      | AQCTLB    | Action-Qualifier Control Register for Output B (EPWMxB) | Section 15.2.4.12 |
| 1Ah      | AQSFRC    | Action-Qualifier Software Force Register                | Section 15.2.4.13 |
| 1Ch      | AQCSFRC   | Action-Qualifier Continuous S/W Force Register Set      | Section 15.2.4.14 |
| 1Eh      | DBCTL     | Dead-Band Generator Control Register                    | Section 15.2.4.15 |
| 20h      | DBRED     | Dead-Band Generator Rising Edge Delay Count Register    | Section 15.2.4.16 |
| 22h      | DBFED     | Dead-Band Generator Falling Edge Delay Count Register   | Section 15.2.4.17 |
| 24h      | TZSEL     | Trip-Zone Select Register                               | Section 15.2.4.18 |
| 28h      | TZCTL     | Trip-Zone Control Register                              | Section 15.2.4.19 |
| 2Ah      | TZEINT    | Trip-Zone Enable Interrupt Register                     | Section 15.2.4.20 |
| 2Ch      | TZFLG     | Trip-Zone Flag Register                                 | Section 15.2.4.21 |
| 2Eh      | TZCLR     | Trip-Zone Clear Register                                | Section 15.2.4.22 |
| 30h      | TZFRC     | Trip-Zone Force Register                                | Section 15.2.4.23 |
| 32h      | ETSEL     | Event-Trigger Selection Register                        | Section 15.2.4.24 |
| 34h      | ETPS      | Event-Trigger Pre-Scale Register                        | Section 15.2.4.25 |
| 36h      | ETFLG     | Event-Trigger Flag Register                             | Section 15.2.4.26 |
| 38h      | ETCLR     | Event-Trigger Clear Register                            | Section 15.2.4.27 |
| 3Ah      | ETFRC     | Event-Trigger Force Register                            | Section 15.2.4.28 |
| 3Ch      | PCCTL     | PWM-Chopper Control Register                            | Section 15.2.4.29 |
| C0h      | HRCNFG    | HRPWM configuration register (HRCNFG)                   | Section 15.2.4.30 |

// Update ZVS transition interval

## 15.2.4.1 TBCTL Register (offset = 0h) [reset = 0h]

TBCTL is shown in Figure 15-71 and described in Table 15-64.

## Figure 15-71. TBCTL Register

| 15        | 14        | 13       | 12   | 11     | 10     | 9         | 8   |
|-----------|-----------|----------|------|--------|--------|-----------|-----|
| FREE_SOFT | FREE_SOFT | PHSDIR   |      | CLKDIV |        | HSPCLKDIV |     |
| R/W-0h    | R/W-0h    | R/W-0h   |      | R/W-1h |        | R/W-0h    |     |
| 7         | 6         | 5        | 4    | 3      | 2      | 1         | 0   |
| HSPCLKDIV | SWFSYNC   | SYNCOSEL |      | PRDLD  | PHSEN  | CTRMODE   |     |
| R/W-0h    | R/W-0h    | R/W-0h   |      | R/W-0h | R/W-0h | R/W-0h    |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-64. TBCTL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | FREE_SOFT | R/W    | 0h      | Emulation Mode Bits. These bits select the behavior of the ePWM time-base counter during emulation suspend events. Emulation debug events can be set up in the Debug Subsystem. 0h (R/W) = Stop after the next time-base counter increment or decrement 1h (R/W) = Stop when counter completes a whole cycle. (a) Up- count mode - stop when the time-base counter = period (TBCNT = TBPRD). (b) Down-count mode - stop when the time-base counter = 0000 (TBCNT = 0000h). (c) Up-down-count mode - stop when the time-base counter = 0000 (TBCNT = 0000h). 2h (R/W) = Free run 3h (R/W) = Free run |
| 13    | PHSDIR    | R/W    | 0h      | Phase Direction Bit. This bit is only used when the time-base counter is configured in the up-down-count mode. The PHSDIR bit indicates the direction the time-base counter (TBCNT) will count after a synchronization event occurs and a new phase value is loaded from the phase (TBPHS) register. This is irrespective of the direction of the counter before the synchronization event.. In the up-count and down-count modes this bit is ignored. 0h (R/W) = Count down after the synchronization event. 1h (R/W) = Count up after the synchronization event.                                  |
| 12-10 | CLKDIV    | R/W    | 01h     | Time-base Clock Prescale Bits. These bits determine part of the time-base clock prescale value. TBCLK = SYSCLKOUT/(HSPCLKDIV * CLKDIV) 0h (R/W) = /1 (default on reset) 1h (R/W) = /2 2h (R/W) = /4 3h (R/W) = /8 4h (R/W) = /16 5h (R/W) = /32 6h (R/W) = /64 7h (R/W) = /128                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-64. TBCTL Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9-7   | HSPCLKDIV | R/W    | 0h      | High-Speed Time-base Clock Prescale Bits. These bits determine part of the time-base clock prescale value. TBCLK = SYSCLKOUT/(HSPCLKDIV * CLKDIV). This divisor emulates the HSPCLK in the TMS320x281x system as used on the Event Manager (EV) peripheral. 0h (R/W) = /1 1h (R/W) = /2 (default on reset) 2h (R/W) = /4 3h (R/W) = /6 4h (R/W) = /8 5h (R/W) = /10 6h (R/W) = /12 7h (R/W) = /14                                                                                                                          |
| 6     | SWFSYNC   | R/W    | 0h      | Software Forced Synchronization Pulse. 0h (R/W) = Writing a 0 has no effect and reads always return a 0. 1h (R/W) = Writing a 1 forces a one-time synchronization pulse to be generated. This event is ORed with the EPWMxSYNCI input of the ePWM module. SWFSYNC is valid (operates) only when EPWMxSYNCI is selected by SYNCOSEL = 00.                                                                                                                                                                                   |
| 5-4   | SYNCOSEL  | R/W    | 0h      | Synchronization Output Select. These bits select the source of the EPWMxSYNCO signal. 0h (R/W) = EPWMxSYNC: 1h (R/W) = CTR = 0 - Time-base counter equal to zero (TBCNT = 0000h) 2h (R/W) = CTR = CMPB - Time-base counter equal to counter- compare B (TBCNT = CMPB) 3h (R/W) = Disable EPWMxSYNCO signal                                                                                                                                                                                                                 |
| 3     | PRDLD     | R/W    | 0h      | Active Period Register Load From Shadow Register Select 0h (R/W) = The period register (TBPRD) is loaded from its shadow register when the time-base counter, TBCNT, is equal to zero. A write or read to the TBPRD register accesses the shadow register. 1h (R/W) = Load the TBPRD register immediately without using a shadow register. A write or read to the TBPRD register directly accesses the active register.                                                                                                    |
| 2     | PHSEN     | R/W    | 0h      | Counter Register Load From Phase Register Enable 0h (R/W) = Do not load the time-base counter (TBCNT) from the time-base phase register (TBPHS) 1h (R/W) = Load the time-base counter with the phase register when an EPWMxSYNCI input signal occurs or when a software synchronization is forced by the SWFSYNC bit.                                                                                                                                                                                                      |
| 1-0   | CTRMODE   | R/W    | 0h      | Counter Mode. The time-base counter mode is normally configured once and not changed during normal operation. If you change the mode of the counter, the change will take effect at the next TBCLK edge and the current counter value shall increment or decrement from the value before the mode change. These bits set the time-base counter mode of operation as follows: 0h (R/W) = Up-count mode 1h (R/W) = Down-count mode 2h (R/W) = Up-down-count mode 3h (R/W) = Stop-freeze counter operation (default on reset) |

## 15.2.4.2 TBSTS Register (offset = 2h) [reset = 0h]

TBSTS is shown in Figure 15-72 and described in Table 15-65.

## Figure 15-72. TBSTS Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | CTRMAX   | SYNCI    | CTRDIR   |
|          |          | R-0h     |          |          | 0h       | W1C-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-65. TBSTS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                  |
| 2     | CTRMAX   |        | 0h      | Time-Base Counter Max Latched Status Bit. 0h (R/W) = Reading a 0 indicates the time-base counter never reached its maximum value. Writing a 0 will have no effect. 1h (R/W) = Reading a 1 on this bit indicates that the time-base counter reached the max value 0xFFFF. Writing a 1 to this bit will clear the latched event.   |
| 1     | SYNCI    | W1C    | 0h      | Input Synchronization Latched Status Bit. 0h (R/W) = Writing a 0 will have no effect. Reading a 0 indicates no external synchronization event has occurred. 1h (R/W) = Reading a 1 on this bit indicates that an external synchronization event has occurred (EPWMxSYNCI). Writing a 1 to this bit will clear the latched event. |
| 0     | CTRDIR   | R      | 0h      | Time-Base Counter Direction Status Bit. At reset, the counter is frozen, therefore, this bit has no meaning. To make this bit meaningful, you must first set the appropriate mode via TBCTL[CTRMODE]. 0h (R/W) = Time-Base Counter is currently counting down. 1h (R/W) = Time-Base Counter is currently counting up.            |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.3 TBPHSHR Register (offset = 4h) [reset = 0h]

TBPHSHR is shown in Figure 15-73 and described in Table 15-66.

## Figure 15-73. TBPHSHR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| TBPHSH   | TBPHSH   | TBPHSH   | TBPHSH   | TBPHSH   | TBPHSH   | TBPHSH   | TBPHSH   |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-66. TBPHSHR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 15-8  | TBPHSH   | R/W    | 0h      | Time-base phase high-resolution bits |
| 7-0   | RESERVED | R      | 0h      |                                      |

## 15.2.4.4 TBPHS Register (offset = 6h) [reset = 0h]

TBPHS is shown in Figure 15-74 and described in Table 15-67.

This register is only available on ePWM instances that include the high-resolution PWM (HRPWM) extension, otherwise, this location is reserved.

## Figure 15-74. TBPHS Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | TBPHS  |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-67. TBPHS Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | TBPHS   | R/W    | 0h      | These bits set time-base counter phase of the selected ePWM relative to the time-base that is supplying the synchronization input signal. (a) If TBCTL[PHSEN] = 0, then the synchronization event is ignored and the time-base counter is not loaded with the phase. (b) If TBCTL[PHSEN] = 1, then the time-base counter (TBCNT) will be loaded with the phase (TBPHS) when a synchronization event occurs. The synchronization event can be initiated by the input synchronization signal (EPWMxSYNCI) or by a software forced synchronization. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.5 TBCNT Register (offset = 8h) [reset = 0h]

TBCNT is shown in Figure 15-75 and described in Table 15-68.

## Figure 15-75. TBCNT Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | TBCNT  |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-68. TBCNT Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | TBCNT   | R/W    | 0h      | Reading these bits gives the current time-base counter value. Writing to these bits sets the current time-base counter value. The update happens as soon as the write occurs. The write is NOT synchronized to the time-base clock (TBCLK) and the register is not shadowed. |

## 15.2.4.6 TBPRD Register (offset = Ah) [reset = 0h]

TBPRD is shown in Figure 15-76 and described in Table 15-69.

## Figure 15-76. TBPRD Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | TBPRD  |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-69. TBPRD Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | TBPRD   | R/W    | 0h      | These bits determine the period of the time-base counter. This sets the PWM frequency. Shadowing of this register is enabled and disabled by the TBCTL[PRDLD] bit. By default this register is shadowed. (a) If TBCTL[PRDLD] = 0, then the shadow is enabled and any write or read will automatically go to the shadow register. In this case, the active register will be loaded from the shadow register when the time-base counter equals zero. (b) If TBCTL[PRDLD] = 1, then the shadow is disabled and any write or read will go directly to the active register, that is the register actively controlling the hardware. (c) The active and shadow registers share the same memory map address. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.7 CMPCTL Register (offset = Eh) [reset = 0h]

CMPCTL is shown in Figure 15-77 and described in Table 15-70.

## Figure 15-77. CMPCTL Register

| 15       | 14        | 13       | 12        | 11        | 10        | 9         | 8         |
|----------|-----------|----------|-----------|-----------|-----------|-----------|-----------|
|          | RESERVED  | RESERVED | RESERVED  |           |           | SHDWBFULL | SHDWAFULL |
|          |           | R-0h     | R-0h      |           |           | R-0h      | R-0h      |
| 7        | 6         | 5        | 4         | 3         | 2         | 1         | 0         |
| RESERVED | SHDWBMODE | RESERVED | SHDWAMODE | LOADBMODE | LOADBMODE | LOADAMODE | LOADAMODE |
| R-0h     | R/W-0h    | R-0h     | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-70. CMPCTL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-10 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 9     | SHDWBFULL | R      | 0h      | Counter-compare B (CMPB) Shadow Register Full Status Flag. This bit self clears once a load-strobe occurs. 0h (R/W) = CMPB shadow FIFO not full yet 1h (R/W) = Indicates the CMPB shadow FIFO is full. A CPU write will overwrite current shadow value.                                                                                                                                                                             |
| 8     | SHDWAFULL | R      | 0h      | Counter-compare A (CMPA) Shadow Register Full Status Flag. The flag bit is set when a 32 bit write to CMPA:CMPAHR register or a 16 bit write to CMPA register is made. A 16 bit write to CMPAHR register will not affect the flag. This bit self clears once a load-strobe occurs. 0h (R/W) = CMPA shadow FIFO not full yet 1h (R/W) = Indicates the CMPA shadow FIFO is full, a CPU write will overwrite the current shadow value. |
| 7     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 6     | SHDWBMODE | R/W    | 0h      | Counter-compare B (CMPB) Register Operating Mode. 0h (R/W) = Shadow mode. Operates as a double buffer. All writes via the CPU access the shadow register. 1h (R/W) = Immediate mode. Only the active compare B register is used. All writes and reads directly access the active register for immediate compare action.                                                                                                             |
| 5     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 4     | SHDWAMODE | R/W    | 0h      | Counter-compare A (CMPA) Register Operating Mode. 0h (R/W) = Shadow mode. Operates as a double buffer. All writes via the CPU access the shadow register. 1h (R/W) = Immediate mode. Only the active compare register is used. All writes and reads directly access the active register for immediate compare action                                                                                                                |
| 3-2   | LOADBMODE | R/W    | 0h      | Active Counter-Compare B (CMPB) Load From Shadow Select Mode. This bit has no effect in immediate mode (CMPCTL[SHDWBMODE] = 1). 0h (R/W) = Load on CTR = 0 - Time-base counter equal to zero (TBCNT = 0000h) 1h (R/W) = Load on CTR = PRD - Time-base counter equal to period (TBCNT = TBPRD) 2h (R/W) = Load on either CTR = 0 or CTR = PRD 3h (R/W) = Freeze (no loads possible)                                                  |

## Table 15-70. CMPCTL Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                        |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | LOADAMODE | R/W    | 0h      | Active Counter-Compare A (CMPA) Load From Shadow Select Mode. This bit has no effect in immediate mode (CMPCTL[SHDWAMODE] = 1). 0h (R/W) = Load on CTR = 0 - Time-base counter equal to zero (TBCNT = 0000h) 1h (R/W) = Load on CTR = PRD - Time-base counter equal to period (TBCNT = TBPRD) 2h (R/W) = Load on either CTR = 0 or CTR = PRD 3h (R/W) = Freeze (no loads possible) |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.8 CMPAHR Register (offset = 10h) [reset = 100h]

CMPAHR is shown in Figure 15-78 and described in Table 15-71.

This register is only available on ePWM instances that include the high-resolution PWM (HRPWM) extension; otherwise, this location is reserved.

## Figure 15-78. CMPAHR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| CMPAHR   | CMPAHR   | CMPAHR   | CMPAHR   | CMPAHR   | CMPAHR   | CMPAHR   | CMPAHR   |
| R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-71. CMPAHR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | CMPAHR   | R/W    | 1h      | Compare A High-Resolution register bits for MEP step control. A minimum value of 1h is needed to enable HRPWM capabilities. Valid MEP range of operation 1-255h. |
| 7-0   | RESERVED | R      | 0h      |                                                                                                                                                                  |

## 15.2.4.9 CMPA Register (offset = 12h) [reset = 0h]

CMPA is shown in Figure 15-79 and described in Table 15-72.

## Figure 15-79. CMPA Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | CMPA   |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-72. CMPA Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | CMPA    | R/W    | 0h      | The value in the active CMPA register is continuously compared to the time-base counter (TBCNT). When the values are equal, the counter-compare module generates a "time-base counter equal to counter compare A" event. This event is sent to the action-qualifier where it is qualified and converted it into one or more actions. These actions can be applied to either the EPWMxA or the EPWMxB output depending on the configuration of the AQCTLA and AQCTLB registers. The actions that can be defined in the AQCTLA and AQCTLB registers include the following. (a) Do nothing the event is ignored. (b) Clear - Pull the EPWMxA and/or EPWMxB signal low. (c) Set - Pull the EPWMxA and/or EPWMxB signal high. (d) Toggle the EPWMxA and/or EPWMxB signal. Shadowing of this register is enabled and disabled by the CMPCTL[SHDWAMODE] bit. By default this register is shadowed. (a) If CMPCTL[SHDWAMODE] = 0, then the shadow is enabled and any write or read will automatically go to the shadow register. In this case, the CMPCTL[LOADAMODE] bit field determines which event will load the active register from the shadow register. (b) Before a write, the CMPCTL[SHDWAFULL] bit can be read to determine if the shadow register is currently full. (c) If CMPCTL[SHDWAMODE] = 1, then the shadow register is disabled and any write or read will go directly to the active register, that is the register actively controlling the hardware. (d) In either mode, the active and shadow registers share the same memory map address. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.10 CMPB Register (offset = 14h) [reset = 0h]

CMPB is shown in Figure 15-80 and described in Table 15-73.

## Figure 15-80. CMPB Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | CMPB   |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-73. CMPB Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | CMPB    | R/W    | 0h      | The value in the active CMPB register is continuously compared to the time-base counter (TBCNT). When the values are equal, the counter-compare module generates a "time-base counter equal to counter compare B" event. This event is sent to the action-qualifier where it is qualified and converted it into one or more actions. These actions can be applied to either the EPWMxA or the EPWMxB output depending on the configuration of the AQCTLA and AQCTLB registers. The actions that can be defined in the AQCTLA and AQCTLB registers include the following. (a) Do nothing, the event is ignored. (b) Clear - Pull the EPWMxA and/or EPWMxB signal low. (c) Set - Pull the EPWMxA and/or EPWMxB signal high. (d) Toggle the EPWMxA and/or EPWMxB signal. Shadowing of this register is enabled and disabled by the CMPCTL[SHDWBMODE] bit. By default this register is shadowed. (a) If CMPCTL[SHDWBMODE] = 0, then the shadow is enabled and any write or read will automatically go to the shadow register. In this case, the CMPCTL[LOADBMODE] bit field determines which event will load the active register from the shadow register: (b) Before a write, the CMPCTL[SHDWBFULL] bit can be read to determine if the shadow register is currently full. (c) If CMPCTL[SHDWBMODE] = 1, then the shadow register is disabled and any write or read will go directly to the active register, that is the register actively controlling the hardware. (d) In either mode, the active and shadow registers share the same memory map address. |

## 15.2.4.11 AQCTLA Register (offset = 16h) [reset = 0h]

AQCTLA is shown in Figure 15-81 and described in Table 15-74.

## Figure 15-81. AQCTLA Register

| 15       | 14       | 13       | 12     | 11     | 10     | 9      | 8      |
|----------|----------|----------|--------|--------|--------|--------|--------|
| RESERVED | RESERVED | RESERVED |        | CBD    |        | CBU    |        |
| R-0h     | R-0h     | R-0h     |        | R/W-0h |        | R/W-0h |        |
| 7        | 6        | 5        | 4      | 3      | 2      | 1      | 0      |
| CAD      | CAD      | CAU      | CAU    | PRD    | PRD    | ZRO    | ZRO    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-74. AQCTLA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 11-10 | CBD      | R/W    | 0h      | Action when the time-base counter equals the active CMPB register and the counter is decrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxA output low. 2h (R/W) = Set - force EPWMxA output high. 3h (R/W) = Toggle EPWMxA output - low output signal will be forced high, and a high signal will be forced low.                                                                   |
| 9-8   | CBU      | R/W    | 0h      | Action when the counter equals the active CMPB register and the counter is incrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxA output low. 2h (R/W) = Set - force EPWMxA output high. 3h (R/W) = Toggle EPWMxA output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 7-6   | CAD      | R/W    | 0h      | Action when the counter equals the active CMPA register and the counter is decrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxA output low. 2h (R/W) = Set - force EPWMxA output high. 3h (R/W) = Toggle EPWMxA output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 5-4   | CAU      | R/W    | 0h      | Action when the counter equals the active CMPA register and the counter is incrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxA output low. 2h (R/W) = Set - force EPWMxA output high. 3h (R/W) = Toggle EPWMxA output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 3-2   | PRD      | R/W    | 0h      | Action when the counter equals the period. Note: By definition, in count up-down mode when the counter equals period the direction is defined as 0 or counting down. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxA output low. 2h (R/W) = Set - force EPWMxA output high. 3h (R/W) = Toggle EPWMxA output - low output signal will be forced high, and a high signal will be forced low. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-74. AQCTLA Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | ZRO     | R/W    | 0h      | Action when counter equals zero. Note: By definition, in count up-down mode when the counter equals 0 the direction is defined as 1 or counting up. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxA output low. 2h (R/W) = Set - force EPWMxA output high. 3h (R/W) = Toggle EPWMxA output - low output signal will be forced high, and a high signal will be forced low. |

## 15.2.4.12 AQCTLB Register (offset = 18h) [reset = 0h]

AQCTLB is shown in Figure 15-82 and described in Table 15-75.

## Figure 15-82. AQCTLB Register

| 15       | 14       | 13       | 12     | 11     | 10     | 9      | 8      |
|----------|----------|----------|--------|--------|--------|--------|--------|
| RESERVED | RESERVED | RESERVED |        | CBD    |        | CBU    |        |
| R-0h     | R-0h     | R-0h     |        | R/W-0h |        | R/W-0h |        |
| 7        | 6        | 5        | 4      | 3      | 2      | 1      | 0      |
| CAD      | CAD      | CAU      | CAU    | PRD    | PRD    | ZRO    | ZRO    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-75. AQCTLB Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 11-10 | CBD      | R/W    | 0h      | Action when the counter equals the active CMPB register and the counter is decrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxB output low. 2h (R/W) = Set - force EPWMxB output high. 3h (R/W) = Toggle EPWMxB output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 9-8   | CBU      | R/W    | 0h      | Action when the counter equals the active CMPB register and the counter is incrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxB output low. 2h (R/W) = Set - force EPWMxB output high. 3h (R/W) = Toggle EPWMxB output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 7-6   | CAD      | R/W    | 0h      | Action when the counter equals the active CMPA register and the counter is decrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxB output low. 2h (R/W) = Set - force EPWMxB output high. 3h (R/W) = Toggle EPWMxB output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 5-4   | CAU      | R/W    | 0h      | Action when the counter equals the active CMPA register and the counter is incrementing. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxB output low. 2h (R/W) = Set - force EPWMxB output high. 3h (R/W) = Toggle EPWMxB output - low output signal will be forced high, and a high signal will be forced low.                                                                             |
| 3-2   | PRD      | R/W    | 0h      | Action when the counter equals the period. Note: By definition, in count up-down mode when the counter equals period the direction is defined as 0 or counting down. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxB output low. 2h (R/W) = Set - force EPWMxB output high. 3h (R/W) = Toggle EPWMxB output - low output signal will be forced high, and a high signal will be forced low. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-75. AQCTLB Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | ZRO     | R/W    | 0h      | Action when counter equals zero. Note: By definition, in count up-down mode when the counter equals 0 the direction is defined as 1 or counting up. 0h (R/W) = Do nothing (action disabled) 1h (R/W) = Clear - force EPWMxB output low. 2h (R/W) = Set - force EPWMxB output high. 3h (R/W) = Toggle EPWMxB output - low output signal will be forced high, and a high signal will be forced low. |

## 15.2.4.13 AQSFRC Register (offset = 1Ah) [reset = 0h]

AQSFRC is shown in Figure 15-83 and described in Table 15-76.

## Figure 15-83. AQSFRC Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RLDCSF   |          | OTSFB    | ACTSFB   |          | OTSFA    | ACTSFA   |          |
| R/W-0h   |          | R/W-0h   | R/W-0h   |          | R/W-0h   | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-76. AQSFRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                         |
| 7-6   | RLDCSF   | R/W    | 0h      | AQCSFRC Active Register Reload From Shadow Options. 0h (R/W) = Load on event counter equals zero 1h (R/W) = Load on event counter equals period 2h (R/W) = Load on event counter equals zero or counter equals period 3h (R/W) = Load immediately (the active register is directly accessed by the CPU and is not loaded from the shadow register).                     |
| 5     | OTSFB    | R/W    | 0h      | One-Time Software Forced Event on Output B. 0h (R/W) = Writing a 0 (zero) has no effect. Always reads back a 0. This bit is auto cleared once a write to this register is complete, that is, a forced event is initiated. This is a one-shot forced event. It can be overridden by another subsequent event on output B. 1h (R/W) = Initiates a single s/w forced event |
| 4-3   | ACTSFB   | R/W    | 0h      | Action when One-Time Software Force B Is invoked 0h (R/W) = Does nothing (action disabled) 1h (R/W) = Clear (low) 2h (R/W) = Set (high) 3h (R/W) = Toggle (Low -> High, High -> Low). Note: This action is not qualified by counter direction (CNT_dir)                                                                                                                 |
| 2     | OTSFA    | R/W    | 0h      | One-Time Software Forced Event on Output A. 0h (R/W) = Writing a 0 (zero) has no effect. Always reads back a 0. This bit is auto cleared once a write to this register is complete (that is, a forced event is initiated). 1h (R/W) = Initiates a single software forced event.                                                                                         |
| 1-0   | ACTSFA   | R/W    | 0h      | Action When One-Time Software Force A Is Invoked. 0h (R/W) = Does nothing (action disabled). 1h (R/W) = Clear (low). 2h (R/W) = Set (high). 3h (R/W) = Toggle (Low -> High, High -> Low). Note: This action is not qualified by counter direction (CNT_dir)                                                                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.14 AQCSFRC Register (offset = 1Ch) [reset = 0h]

AQCSFRC is shown in Figure 15-84 and described in Table 15-77.

## Figure 15-84. AQCSFRC Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | CSFB     | CSFB     | CSFA     | CSFA     |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-77. AQCSFRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 3-2   | CSFB     | R/W    | 0h      | Continuous Software Force on Output B. In immediate mode, a continuous force takes effect on the next TBCLK edge. In shadow mode, a continuous force takes effect on the next TBCLK edge after a shadow load into the active register. To configure shadow mode, use AQSFRC[RLDCSF]. 0h (R/W) = Forcing disabled, that is, has no effect 1h (R/W) = Forces a continuous low on output B 2h (R/W) = Forces a continuous high on output B 3h (R/W) = Software forcing is disabled and has no effect |
| 1-0   | CSFA     | R/W    | 0h      | Continuous Software Force on Output A In immediate mode, a continuous force takes effect on the next TBCLK edge. In shadow mode, a continuous force takes effect on the next TBCLK edge after a shadow load into the active register. 0h (R/W) = Forcing disabled, that is, has no effect 1h (R/W) = Forces a continuous low on output A 2h (R/W) = Forces a continuous high on output A 3h (R/W) = Software forcing is disabled and has no effect                                                |

## 15.2.4.15 DBCTL Register (offset = 1Eh) [reset = 0h]

DBCTL is shown in Figure 15-85 and described in Table 15-78.

## Figure 15-85. DBCTL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | IN_MODE  | IN_MODE  | POLSEL   | POLSEL   | OUT_MODE | OUT_MODE |
| R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 15-78. DBCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-6  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 5-4   | IN_MODE  | R/W    | 0h      | Dead Band Input Mode Control. Bit 5 controls the S5 switch and bit 4 controls the S4 switch. This allows you to select the input source to the falling-edge and rising-edge delay. To produce classical dead-band waveforms, the default is EPWMxA In is the source for both falling and rising-edge delays. 0h (R/W) = EPWMxA In (from the action-qualifier) is the source for both falling-edge and rising-edge delay. 1h (R/W) = EPWMxB In (from the action-qualifier) is the source for rising-edge delayed signal. EPWMxA In (from the action-qualifier) is the source for falling-edge delayed signal. 2h (R/W) = EPWMxA In (from the action-qualifier) is the source for rising-edge delayed signal. EPWMxB In (from the action-qualifier) is the source for falling-edge delayed signal. 3h (R/W) = EPWMxB In (from the action-qualifier) is the source for both rising-edge delay and falling-edge delayed signal. |
| 3-2   | POLSEL   | R/W    | 0h      | Polarity Select Control. Bit 3 controls the S3 switch and bit 2 controls the S2 switch. This allows you to selectively invert one of the delayed signals before it is sent out of the dead-band submodule. The following descriptions correspond to classical upper/lower switch control as found in one leg of a digital motor control inverter. These assume that DBCTL[OUT_MODE] = 1,1 and DBCTL[IN_MODE] = 0,0. Other enhanced modes are also possible, but not regarded as typical usage modes. 0h (R/W) = Active high (AH) mode. Neither EPWMxA nor EPWMxB is inverted (default). 1h (R/W) = Active low complementary (ALC) mode. EPWMxA is inverted. 2h (R/W) = Active high complementary (AHC). EPWMxB is inverted. 3h (R/W) = Active low (AL) mode. Both EPWMxA and EPWMxB are inverted.                                                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-78. DBCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1-0   | OUT_MODE | R/W    | 0h      | Dead-band Output Mode Control. Bit 1 controls the S1 switch and bit 0 controls the S0 switch. This allows you to selectively enable or bypass the dead-band generation for the falling-edge and rising-edge delay. 0h (R/W) = Dead-band generation is bypassed for both output signals. In this mode, both the EPWMxA and EPWMxB output signals from the action-qualifier are passed directly to the PWM- chopper submodule. In this mode, the POLSEL and IN_MODE bits have no effect. 1h (R/W) = Disable rising-edge delay. The EPWMxA signal from the action-qualifier is passed straight through to the EPWMxA input of the PWM-chopper submodule. The falling-edge delayed signal is seen on output EPWMxB. The input signal for the delay is determined by DBCTL[IN_MODE]. 2h (R/W) = Disable falling-edge delay. The EPWMxB signal from the action-qualifier is passed straight through to the EPWMxB input of the PWM-chopper submodule. The rising-edge delayed signal is seen on output EPWMxA. The input signal for the delay is determined by DBCTL[IN_MODE]. 3h (R/W) = Dead-band is fully enabled for both rising-edge delay on output EPWMxA and falling-edge delay on output EPWMxB. The input signal for the delay is determined by DBCTL[IN_MODE]. |

## 15.2.4.16 DBRED Register (offset = 20h) [reset = 0h]

DBRED is shown in Figure 15-86 and described in Table 15-79.

## Figure 15-86. DBRED Register

| 15   | 14   | 13       | 12     | 11   | 10   | 9      | 8   |
|------|------|----------|--------|------|------|--------|-----|
|      |      | RESERVED |        |      |      | DEL    |     |
|      |      | R-0h     |        |      |      | R/W-0h |     |
| 7    | 6    | 5        | 4      | 3    | 2    | 1      | 0   |
|      |      |          | DEL    |      |      |        |     |
|      |      |          | R/W-0h |      |      |        |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-79. DBRED Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                              |
|-------|----------|--------|---------|------------------------------------------|
| 15-10 | RESERVED | R      | 0h      |                                          |
| 9-0   | DEL      | R/W    | 0h      | Rising Edge Delay Count. 10 bit counter. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.17 DBFED Register (offset = 22h) [reset = 0h]

DBFED is shown in Figure 15-87 and described in Table 15-80.

## Figure 15-87. DBFED Register

| 15   | 14   | 13       | 12     | 11   | 10   | 9      | 8   |
|------|------|----------|--------|------|------|--------|-----|
|      |      | RESERVED |        |      |      | DEL    |     |
|      |      | R-0h     |        |      |      | R/W-0h |     |
| 7    | 6    | 5        | 4      | 3    | 2    | 1      | 0   |
|      |      |          | DEL    |      |      |        |     |
|      |      |          | R/W-0h |      |      |        |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-80. DBFED Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                              |
|-------|----------|--------|---------|------------------------------------------|
| 15-10 | RESERVED | R      | 0h      |                                          |
| 9-0   | DEL      | R/W    | 0h      | Falling Edge Delay Count. 10 bit counter |

## 15.2.4.18 TZSEL Register (offset = 24h) [reset = 0h]

TZSEL is shown in Figure 15-88 and described in Table 15-81.

## Figure 15-88. TZSEL Register

| 15   | 14   | 13   | 12     | 11   | 10   | 9   | 8   |
|------|------|------|--------|------|------|-----|-----|
|      |      |      | OSHTn  |      |      |     |     |
|      |      |      | R/W-0h |      |      |     |     |
| 7    | 6    | 5    | 4      | 3    | 2    | 1   | 0   |
|      |      |      | CBCn   |      |      |     |     |
|      |      |      | R/W-0h |      |      |     |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-81. TZSEL Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | OSHTn   | R/W    | 0h      | Trip-zone n (TZn) select. One-Shot (OSHT) trip-zone enable/disable. When any of the enabled pins go low, a one-shot trip event occurs for this ePWM module. When the event occurs, the action defined in the TZCTL register is taken on the EPWMxA and EPWMxB outputs. The one-shot trip condition remains latched until you clear the condition via the TZCLR register. 0h (R/W) = Disable TZn as a one-shot trip source for this ePWM module. 1h (R/W) = Enable TZn as a one-shot trip source for this ePWM module.  |
| 7-0   | CBCn    | R/W    | 0h      | Trip-zone n (TZn) select. Cycle-by-Cycle (CBC) trip-zone enable/disable. When any of the enabled pins go low, a cycle-by-cycle trip event occurs for this ePWM module. When the event occurs, the action defined in the TZCTL register is taken on the EPWMxA and EPWMxB outputs. A cycle-by-cycle trip condition is automatically cleared when the time-base counter reaches zero. 0h (R/W) = Disable TZn as a CBC trip source for this ePWM module. 1h (R/W) = Enable TZn as a CBC trip source for this ePWM module. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.19 TZCTL Register (offset = 28h) [reset = 0h]

TZCTL is shown in Figure 15-89 and described in Table 15-82.

## Figure 15-89. TZCTL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | TZB      | TZB      | TZA      | TZA      |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-82. TZCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                  |
| 3-2   | TZB      | R/W    | 0h      | When a trip event occurs the following action is taken on output EPWMxB. Which trip-zone pins can cause an event is defined in the TZSEL register. 0h (R/W) = High impedance (EPWMxB = High-impedance state) 1h (R/W) = Force EPWMxB to a high state 2h (R/W) = Force EPWMxB to a low state 3h (R/W) = Do nothing, no action is taken on EPWMxB. |
| 1-0   | TZA      | R/W    | 0h      | When a trip event occurs the following action is taken on output EPWMxA. Which trip-zone pins can cause an event is defined in the TZSEL register. 0h (R/W) = High impedance (EPWMxA = High-impedance state) 1h (R/W) = Force EPWMxA to a high state 2h (R/W) = Force EPWMxA to a low state 3h (R/W) = Do nothing, no action is taken on EPWMxA. |

## 15.2.4.20 TZEINT Register (offset = 2Ah) [reset = 0h]

TZEINT is shown in Figure 15-90 and described in Table 15-83.

## Figure 15-90. TZEINT Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | OST      | CBC      | RESERVED |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-83. TZEINT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                               |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                           |
| 2     | OST      | R/W    | 0h      | Trip-zone One-Shot Interrupt Enable 0h (R/W) = Disable one-shot interrupt generation 1h (R/W) = Enable Interrupt generation; a one-shot trip event will cause a EPWMxTZINT interrupt.                     |
| 1     | CBC      | R/W    | 0h      | Trip-zone Cycle-by-Cycle Interrupt Enable 0h (R/W) = Disable cycle-by-cycle interrupt generation. 1h (R/W) = Enable interrupt generation; a cycle-by-cycle trip event will cause an EPWMxTZINT interrupt. |
| 0     | RESERVED | R      | 0h      |                                                                                                                                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.21 TZFLG Register (offset = 2Ch) [reset = 0h]

TZFLG is shown in Figure 15-91 and described in Table 15-84.

## Figure 15-91. TZFLG Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | OST      | CBC      | INT      |
|          |          | R-0h     |          |          | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-84. TZFLG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 2     | OST      | R      | 0h      | Latched Status Flag for A One-Shot Trip Event. 0h (R/W) = No one-shot trip event has occurred. 1h (R/W) = Indicates a trip event has occurred on a pin selected as a one-shot trip source. This bit is cleared by writing the appropriate value to the TZCLR register.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 1     | CBC      | R      | 0h      | Latched Status Flag for Cycle-By-Cycle Trip Event 0h (R/W) = No cycle-by-cycle trip event has occurred. 1h (R/W) = Indicates a trip event has occurred on a pin selected as a cycle-by-cycle trip source. The TZFLG[CBC] bit will remain set until it is manually cleared by the user. If the cycle-by-cycle trip event is still present when the CBC bit is cleared, then CBC will be immediately set again. The specified condition on the pins is automatically cleared when the ePWM time-base counter reaches zero (TBCNT = 0000h) if the trip condition is no longer present. The condition on the pins is only cleared when the TBCNT = 0000h no matter where in the cycle the CBC flag is cleared. This bit is cleared by writing the appropriate value to the TZCLR register. |
| 0     | INT      | R      | 0h      | Latched Trip Interrupt Status Flag 0h (R/W) = Indicates no interrupt has been generated. 1h (R/W) = Indicates an EPWMxTZINT interrupt was generated because of a trip condition. No further EPWMxTZINT interrupts will be generated until this flag is cleared. If the interrupt flag is cleared when either CBC or OST is set, then another interrupt pulse will be generated. Clearing all flag bits will prevent further interrupts. This bit is cleared by writing the appropriate value to the TZCLR register.                                                                                                                                                                                                                                                                    |

## 15.2.4.22 TZCLR Register (offset = 2Eh) [reset = 0h]

TZCLR is shown in Figure 15-92 and described in Table 15-85.

## Figure 15-92. TZCLR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | OST      | CBC      | INT      |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-85. TZCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 2     | OST      | R/W    | 0h      | Clear Flag for One-Shot Trip (OST) Latch 0h (R/W) = Has no effect. Always reads back a 0. 1h (R/W) = Clears this Trip (set) condition.                                                                                                                                                                                                                                                                                         |
| 1     | CBC      | R/W    | 0h      | Clear Flag for Cycle-By-Cycle (CBC) Trip Latch 0h (R/W) = Has no effect. Always reads back a 0. 1h (R/W) = Clears this Trip (set) condition.                                                                                                                                                                                                                                                                                   |
| 0     | INT      | R/W    | 0h      | Global Interrupt Clear Flag 0h (R/W) = Has no effect. Always reads back a 0. 1h (R/W) = Clears the trip-interrupt flag for this ePWM module (TZFLG[INT]). Note: No further EPWMxTZINT interrupts will be generated until the flag is cleared. If the TZFLG[INT] bit is cleared and any of the other flag bits are set, then another interrupt pulse will be generated. Clearing all flag bits will prevent further interrupts. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.23 TZFRC Register (offset = 30h) [reset = 0h]

TZFRC is shown in Figure 15-93 and described in Table 15-86.

## Figure 15-93. TZFRC Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          | RESERVED |          |          | OST      | CBC      | RESERVED |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-86. TZFRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                          |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED | R      | 0h      |                                                                                                                                                                                      |
| 2     | OST      | R/W    | 0h      | Force a One-Shot Trip Event via Software 0h (R/W) = Writing of 0 is ignored. Always reads back a 0. 1h (R/W) = Forces a one-shot trip event and sets the TZFLG[OST] bit.             |
| 1     | CBC      | R/W    | 0h      | Force a Cycle-by-Cycle Trip Event via Software 0h (R/W) = Writing of 0 is ignored. Always reads back a 0. 1h (R/W) = Forces a cycle-by-cycle trip event and sets the TZFLG[CBC] bit. |
| 0     | RESERVED | R      | 0h      |                                                                                                                                                                                      |

## 15.2.4.24 ETSEL Register (offset = 32h) [reset = 0h]

ETSEL is shown in Figure 15-94 and described in Table 15-87.

## Figure 15-94. ETSEL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | INTEN    | INTSEL   | INTSEL   | INTSEL   |
| R-0h     | R-0h     | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-87. ETSEL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 3     | INTEN    | R/W    | 0h      | Enable ePWM Interrupt (EPWMx_INT) Generation 0h (R/W) = Disable EPWMx_INT generation 1h (R/W) = Enable EPWMx_INT generation                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 2-0   | INTSEL   | R/W    | 0h      | ePWM Interrupt (EPWMx_INT) Selection Options 0h (R/W) = Reserved 1h (R/W) = Enable event time-base counter equal to zero. (TBCNT = 0000h) 2h (R/W) = Enable event time-base counter equal to period (TBCNT = TBPRD) 3h (R/W) = Reserved 4h (R/W) = Enable event time-base counter equal to CMPA when the timer is incrementing. 5h (R/W) = Enable event time-base counter equal to CMPA when the timer is decrementing. 6h (R/W) = Enable event - time-base counter equal to CMPB when the timer is incrementing. 7h (R/W) = Enable event - time-base counter equal to CMPB when the timer is decrementing. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.25 ETPS Register (offset = 34h) [reset = 0h]

ETPS is shown in Figure 15-95 and described in Table 15-88.

## Figure 15-95. ETPS Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | INTCNT   | INTCNT   | INTPRD   | INTPRD   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-88. ETPS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 3-2   | INTCNT   | R      | 0h      | ePWM Interrupt Event (EPWMx_INT) Counter Register. These bits indicate how many selected ETSEL[INTSEL] events have occurred. These bits are automatically cleared when an interrupt pulse is generated. If interrupts are disabled, ETSEL[INT] = 0 or the interrupt flag is set, ETFLG[INT] = 1, the counter will stop counting events when it reaches the period value ETPS[INTCNT] = ETPS[INTPRD]. 0h (R/W) = No events have occurred. 1h (R/W) = 1 event has occurred. 2h (R/W) = 2 events have occurred. 3h (R/W) = 3 events have occurred.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 1-0   | INTPRD   | R/W    | 0h      | ePWM Interrupt (EPWMx_INT) Period Select. These bits determine how many selected ETSEL[INTSEL] events need to occur before an interrupt is generated. To be generated, the interrupt must be enabled (ETSEL[INT] = 1). If the interrupt status flag is set from a previous interrupt (ETFLG[INT] = 1) then no interrupt will be generated until the flag is cleared via the ETCLR[INT] bit. This allows for one interrupt to be pending while another is still being serviced. Once the interrupt is generated, the ETPS[INTCNT] bits will automatically be cleared. Writing a INTPRD value that is the same as the current counter value will trigger an interrupt if it is enabled and the status flag is clear. Writing a INTPRD value that is less than the current counter value will result in an undefined state. If a counter event occurs at the same instant as a new zero or non- zero INTPRD value is written, the counter is incremented. 0h (R/W) = Disable the interrupt event counter. No interrupt will be generated and ETFRC[INT] is ignored. 1h (R/W) = Generate an interrupt on the first event INTCNT = 01 (first event) 2h (R/W) = Generate interrupt on ETPS[INTCNT] = 1,0 (second event) 3h (R/W) = Generate interrupt on ETPS[INTCNT] = 1,1 (third event) |

## 15.2.4.26 ETFLG Register (offset = 36h) [reset = 0h]

ETFLG is shown in Figure 15-96 and described in Table 15-89.

## Figure 15-96. ETFLG Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | INT      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-89. ETFLG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-1  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                |
| 0     | INT      | R      | 0h      | Latched ePWM Interrupt (EPWMx_INT) Status Flag 0h (R/W) = Indicates no event occurred 1h (R/W) = Indicates that an ePWMx interrupt (EWPMx_INT) was generated. No further interrupts will be generated until the flag bit is cleared. Up to one interrupt can be pending while the ETFLG[INT] bit is still set. If an interrupt is pending, it will not be generated until after the ETFLG[INT] bit is cleared. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.27 ETCLR Register (offset = 38h) [reset = 0h]

ETCLR is shown in Figure 15-97 and described in Table 15-90.

## Figure 15-97. ETCLR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | INT      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-90. ETCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-1  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                   |
| 0     | INT      | R      | 0h      | ePWM Interrupt (EPWMx_INT) Flag Clear Bit 0h (R/W) = Writing a 0 has no effect. Always reads back a 0. 1h (R/W) = Clears the ETFLG[INT] flag bit and enable further interrupts pulses to be generated. NOTE: Interrupts can also used as DMA events, and this will also enable further DMA events to be generated |

## 15.2.4.28 ETFRC Register (offset = 3Ah) [reset = 0h]

ETFRC is shown in Figure 15-98 and described in Table 15-91.

## Figure 15-98. ETFRC Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | INT      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-91. ETFRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-1  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                  |
| 0     | INT      | R      | 0h      | INT Force Bit. The interrupt will only be generated if the event is enabled in the ETSEL register. The INT flag bit will be set regardless. 0h (R/W) = Writing 0 to this bit will be ignored. Always reads back a 0. 1h (R/W) = Generates an interrupt on EPWMxINT and set the INT flag bit. This bit is used for test purposes. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.4.29 PCCTL Register (offset = 3Ch) [reset = 0h]

PCCTL is shown in Figure 15-99 and described in Table 15-92.

## Figure 15-99. PCCTL Register

| 15   | 14      | 13       | 12   | 11      | 10   | 9       | 8      |
|------|---------|----------|------|---------|------|---------|--------|
|      |         | RESERVED |      |         |      | CHPDUTY |        |
|      |         | R-0h     |      |         |      | R/W-0h  |        |
| 7    | 6       | 5        | 4    | 3       | 2    | 1       | 0      |
|      | CHPFREQ |          |      | OSHTWTH |      |         | CHPEN  |
|      | R/W-0h  |          |      | R/W-0h  |      |         | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-92. PCCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-11 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                  |
| 10-8  | CHPDUTY  | R/W    | 0h      | Chopping Clock Duty Cycle 0h (R/W) = Duty = 1/8 (12.5%) 1h (R/W) = Duty = 2/8 (25.0%) 2h (R/W) = Duty = 3/8 (37.5%) 3h (R/W) = Duty = 4/8 (50.0%) 4h (R/W) = Duty = 5/8 (62.5%) 5h (R/W) = Duty = 6/8 (75.0%) 6h (R/W) = Duty = 7/8 (87.5%) 7h (R/W) = Reserved. |
| 7-5   | CHPFREQ  | R/W    | 0h      | Chopping Clock Frequency 0h (R/W) = Divide by 1 (no prescale). 1h (R/W) = Divide by 2. 2h (R/W) = Divide by 3. 3h (R/W) = Divide by 4. 4h (R/W) = Divide by 5. 5h (R/W) = Divide by 6. 6h (R/W) = Divide by 7. 7h (R/W) = Divide by 8.                           |
| 4-1   | OSHTWTH  | R/W    | 0h      | One-Shot Pulse Width 0h (R/W) = 1 - SYSCLKOUT/8 wide 1h (R/W) = 2 - SYSCLKOUT/8 wide 2h (R/W) = 3 - SYSCLKOUT/8 wide 3h (R/W) = 4 - SYSCLKOUT/8 wide Fh (R/W) = 16 - SYSCLKOUT/8 wide                                                                            |
| 0     | CHPEN    | R/W    | 0h      | PWM-chopping Enable 0h (R/W) = Disable (bypass) PWM chopping function 1h (R/W) = Enable chopping function                                                                                                                                                        |

## 15.2.4.30 HRCNFG Register (offset = C0h) [reset = 0h]

HRCNFG is shown in Figure 15-100 and described in Table 15-93.

This register is only available on ePWM instances that include the high-resolution PWM (HRPWM) extension; otherwise, this location is reserved.

Figure 15-100. HRCNFG Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | HRLOAD   | CTLMODE  | EDGMODE  |          |
|          |          |          |          | R/W-0h   | R/W-0h   | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 15-93. HRCNFG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 3     | HRLOAD   | R/W    | 0h      | Shadow mode bit - Selects the time event that loads the CMPAHR shadow value into the active register. Note: Load mode selection is valid only if CTLMODE = 0 has been selected. You should select this event to match the selection of the CMPA load mode (CMPCTL[LOADMODE] bits) in the EPWM module as follows: 0x 0: Load on CTR = 0 Time-base counter equal to zero (TBCNT = 0000h) 0x 1: Load on CTR = PRD Time-base counter equal to period (TBCNT = TBPRD) 0x 2: Load on either CTR = 0 or CTR = PRD (should not be used with HRPWM) 0x 3: Freeze (no loads possible should not be used with HRPWM) 0h (R/W) = CTR = PRD (counter equal period) |
| 2     | CTLMODE  | R/W    | 0h      | Control Mode Bits - Selects the register (CMP or TBPHS) that controls the MEP. 0h (R/W) = CMPAHR(8) Register controls the edge position (this is duty control mode). (default on reset) 1h (R/W) = TBPHSHR(8) Register controls the edge position (this is phase control mode).                                                                                                                                                                                                                                                                                                                                                                       |
| 1-0   | EDGMODE  | R/W    | 0h      | Edge Mode Bits - Selects the edge of the PWM that is controlled by the micro-edge position (MEP) logic. 0h (R/W) = HRPWM capability is disabled (default on reset) 1h (R/W) = MEP control of rising edge 2h (R/W) = MEP control of falling edge 3h (R/W) = MEP control of both edges                                                                                                                                                                                                                                                                                                                                                                  |

<!-- image -->