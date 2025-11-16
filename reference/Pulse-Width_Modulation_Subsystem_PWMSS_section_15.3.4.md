<!-- image -->

www.ti.com

## 15.3.4 Registers

All 32-bit registers are aligned on even address boundaries and are organized in little-endian mode. The 16 least-significant bits of a 32-bit register are located on lowest address (even address).

NOTE:

In APWM mode, writing to CAP1/CAP2 active registers also writes the same value to the corresponding shadow registers CAP3/CAP4. This emulates immediate mode. Writing to the shadow registers CAP3/CAP4 invokes the shadow mode.

## 15.3.4.1 ECAP Registers

Table 15-106 lists the memory-mapped registers for the ECAP. All register offset addresses not listed in Table 15-106 should be considered as reserved locations and the register contents should not be modified.

## Table 15-106. ECAP Registers

| Offset   | Acronym   | Register Name                       | Section             |
|----------|-----------|-------------------------------------|---------------------|
| 0h       | TSCTR     | Time-Stamp Counter Register         | Section 15.3.4.1.1  |
| 4h       | CTRPHS    | Counter Phase Offset Value Register | Section 15.3.4.1.2  |
| 8h       | CAP1      | Capture 1 Register                  | Section 15.3.4.1.3  |
| Ch       | CAP2      | Capture 2 Register                  | Section 15.3.4.1.4  |
| 10h      | CAP3      | Capture 3 Register                  | Section 15.3.4.1.5  |
| 14h      | CAP4      | Capture 4 Register                  | Section 15.3.4.1.6  |
| 28h      | ECCTL1    | Capture Control Register 1          | Section 15.3.4.1.7  |
| 2Ah      | ECCTL2    | Capture Control Register 2          | Section 15.3.4.1.8  |
| 2Ch      | ECEINT    | Capture Interrupt Enable Register   | Section 15.3.4.1.9  |
| 2Eh      | ECFLG     | Capture Interrupt Flag Register     | Section 15.3.4.1.10 |
| 30h      | ECCLR     | Capture Interrupt Clear Register    | Section 15.3.4.1.11 |
| 32h      | ECFRC     | Capture Interrupt Force Register    | Section 15.3.4.1.12 |
| 5Ch      | REVID     | Revision ID Register                | Section 15.4.3.25   |

## 15.3.4.1.1 TSCTR Register (offset = 0h) [reset = 0h]

TSCTR is shown in Figure 15-117 and described in Table 15-107.

## Figure 15-117. TSCTR Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | TSCTR                                                                           |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-107. TSCTR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                          |
|-------|---------|--------|---------|----------------------------------------------------------------------|
| 31-0  | TSCTR   | R/W    | 0h      | Active 32 bit counter register that is used as the capture time-base |

<!-- image -->

<!-- image -->

## 15.3.4.1.2 CTRPHS Register (offset = 4h) [reset = 0h]

CTRPHS is shown in Figure 15-118 and described in Table 15-108.

## Figure 15-118. CTRPHS Register

| 31 30   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 CTRPHS   |
|---------|---------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-108. CTRPHS Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                          |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CTRPHS  | R/W    | 0h      | Counter phase value register that can be programmed for phase lag/lead. This register shadows TSCTR and is loaded into TSCTR upon either a SYNCI event or S/W force via a control bit. Used to achieve phase control synchronization with respect to other eCAP and EPWM time-bases. |

## 15.3.4.1.3 CAP1 Register (offset = 8h) [reset = 0h]

CAP1 is shown in Figure 15-119 and described in Table 15-109.

## Figure 15-119. CAP1 Register

| 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|-----------------------------------------------------------------------------------|
| CAP1                                                                              |
| R/W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-109. CAP1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                            |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CAP1    | R/W    | 0h      | This register can be loaded (written) by the following. (a) Time-Stamp (that is, counter value) during a capture event. (b) Software may be useful for test purposes. (c) APRD active register when used in APWM mode. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.3.4.1.4 CAP2 Register (offset = Ch) [reset = 0h]

CAP2 is shown in Figure 15-120 and described in Table 15-110.

## Figure 15-120. CAP2 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|---------|-----------------------------------------------------------------------------------|
|         | CAP2                                                                              |
|         | R/W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-110. CAP2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                            |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CAP2    | R/W    | 0h      | This register can be loaded (written) by the following. (a) Time-Stamp (that is, counter value) during a capture event. (b) Software may be useful for test purposes. (c) ACMP active register when used in APWM mode. |

## 15.3.4.1.5 CAP3 Register (offset = 10h) [reset = 0h]

CAP3 is shown in Figure 15-121 and described in Table 15-111.

## Figure 15-121. CAP3 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------------|--------------------------------------------------------------------------------|
|            | CAP3                                                                           |
|            | R/W-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-111. CAP3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CAP3    | R/W    | 0h      | In CMP mode, this is a time-stamp capture register. In APWM mode, this is the period shadow (APRD) register. You update the PWM period value through this register. In this mode, CAP3 shadows CAP1. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.3.4.1.6 CAP4 Register (offset = 14h) [reset = 0h]

CAP4 is shown in Figure 15-122 and described in Table 15-112.

## Figure 15-122. CAP4 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------------|--------------------------------------------------------------------------------|
|            | CAP4                                                                           |
|            | R/W-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-112. CAP4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                            |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | CAP4    | R/W    | 0h      | In CMP mode, this is a time-stamp capture register. In APWM mode, this is the compare shadow (ACMP) register. You update the PWM compare value through this register. In this mode, CAP4 shadows CAP2. |

## 15.3.4.1.7 ECCTL1 Register (offset = 28h) [reset = 0h]

ECCTL1 is shown in Figure 15-123 and described in Table 15-113.

## Figure 15-123. ECCTL1 Register

| 15        | 14        | 13       | 12       | 11       | 10       | 9        | 8       |
|-----------|-----------|----------|----------|----------|----------|----------|---------|
| FREE_SOFT | FREE_SOFT | PRESCALE | PRESCALE | PRESCALE | PRESCALE | PRESCALE | CAPLDEN |
| R/W-0h    | R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  |
| 7         | 6         | 5        | 4        | 3        | 2        | 1        | 0       |
| CTRRST4   | CAP4POL   | CTRRST3  | CAP3POL  | CTRRST2  | CAP2POL  | CTRRST1  | CAP1POL |
| R/W-0h    | R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-113. ECCTL1 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                         |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | FREE_SOFT | R/W    | 0h      | Emulation Control 0h = TSCTR counter stops immediately on emulation suspend. 1h = TSCTR counter runs until = 0. 2h = TSCTR counter is unaffected by emulation suspend (Run Free). 3h = TSCTR counter is unaffected by emulation suspend (Run Free). |
| 13-9  | PRESCALE  | R/W    | 0h      | Event Filter prescale select ... 0h = Divide by 1 (i.e,. no prescale, by-pass the prescaler) 1h = Divide by 2 2h = Divide by 4 3h = Divide by 6 4h = Divide by 8 5h = Divide by 10 1Eh = Divide by 60                                               |
| 8     | CAPLDEN   | R/W    | 0h      | Enable Loading of CAP1 to CAP4 registers on a capture event 0h = Disable CAP1 through 4 register loads at capture event time. 1h = Enable CAP1-4 register loads at capture event time.                                                              |
| 7     | CTRRST4   | R/W    | 0h      | Counter Reset on Capture Event 4 0h = Do not reset counter on Capture Event 4 (absolute time stamp operation) 1h = Reset counter after Capture Event 4 time-stamp has been captured (used in difference mode operation)                             |
| 6     | CAP4POL   | R/W    | 0h      | Capture Event 4 Polarity select 0h = Capture Event 4 triggered on a rising edge (RE) 1h = Capture Event 4 triggered on a falling edge (FE)                                                                                                          |
| 5     | CTRRST3   | R/W    | 0h      | Counter Reset on Capture Event 3 0h = Do not reset counter on Capture Event 3 (absolute time stamp) 1h = Reset counter after Event 3 time-stamp has been captured (used in difference mode operation)                                               |
| 4     | CAP3POL   | R/W    | 0h      | Capture Event 3 Polarity select 0h = Capture Event 3 triggered on a rising edge (RE) 1h = Capture Event 3 triggered on a falling edge (FE)                                                                                                          |
| 3     | CTRRST2   | R/W    | 0h      | Counter Reset on Capture Event 2 0h = Do not reset counter on Capture Event 2 (absolute time stamp) 1h = Reset counter after Event 2 time-stamp has been captured (used in difference mode operation)                                               |

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-113. ECCTL1 Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | CAP2POL | R/W    | 0h      | Capture Event 2 Polarity select 0h = Capture Event 2 triggered on a rising edge (RE) 1h = Capture Event 2 triggered on a falling edge (FE)                                                            |
|     1 | CTRRST1 | R/W    | 0h      | Counter Reset on Capture Event 1 0h = Do not reset counter on Capture Event 1 (absolute time stamp) 1h = Reset counter after Event 1 time-stamp has been captured (used in difference mode operation) |
|     0 | CAP1POL | R/W    | 0h      | Capture Event 1 Polarity select 0h = Capture Event 1 triggered on a rising edge (RE) 1h = Capture Event 1 triggered on a falling edge (FE)                                                            |

## 15.3.4.1.8 ECCTL2 Register (offset = 2Ah) [reset = 6h]

ECCTL2 is shown in Figure 15-124 and described in Table 15-114.

## Figure 15-124. ECCTL2 Register

| 15        | 14        | 13       | 12        | 11     | 10        | 9         | 8          |
|-----------|-----------|----------|-----------|--------|-----------|-----------|------------|
|           |           | RESERVED |           |        | APWMPOL   | CAP_APWM  | SWSYNC     |
|           |           | R-0h     |           |        | R/W-0h    | R/W-0h    | R/W-0h     |
| 7         | 6         | 5        | 4         | 3      | 2         | 1         | 0          |
| SYNCO_SEL | SYNCO_SEL | SYNCI_EN | TSCTRSTOP | RE-ARM | STOP_WRAP | STOP_WRAP | CONT_ONESH |
| R/W-0h    | R/W-0h    | R/W-0h   | R/W-0h    | R/W-0h | R/W-3h    | R/W-3h    | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-114. ECCTL2 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-11 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 10    | APWMPOL   | R/W    | 0h      | APWM output polarity select. This is applicable only in APWM operating mode 0h = Output is active high (Compare value defines high time) 1h = Output is active low (Compare value defines low time)                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 9     | CAP_APWM  | R/W    | 0h      | CAP/APWM operating mode select 0h = ECAP module operates in capture mode. This mode forces the following configuration. (a) Inhibits TSCTR resets via PRDEQ event. (b) Inhibits shadow loads on CAP1 and 2 registers. (c) Permits user to enable CAP1-4 register load. (d) ECAPn/APWMn pin operates as a capture input. 1h = ECAP module operates in APWM mode. This mode forces the following configuration. (a) Resets TSCTR on PRDEQ event (period boundary). (b) Permits shadow loading on CAP1 and 2 registers. (c) Disables loading of time-stamps into CAP1-4 registers. (d) ECAPn/APWMn pin operates as a APWM output. |
| 8     | SWSYNC    | R/W    | 0h      | Software-forced Counter (TSCTR) Synchronizing. This provides a convenient software method to synchronize some or all ECAP time bases. In APWM mode, the synchronizing can also be done via the PRDEQ event. Note: Selecting PRDEQ is meaningful only in APWM mode. However, you can choose it in CAP mode if you find doing so useful. 0h = Writing a zero has no effect. Reading always returns a zero 1h = Writing a one forces a TSCTR shadow load of current ECAP module and any ECAP modules down-stream providing the SYNCO_SEL bits are 0,0. After writing a 1, this bit returns to a zero.                             |
| 7-6   | SYNCO_SEL | R/W    | 0h      | Sync-Out Select 0h = Select sync-in event to be the sync-out signal (pass through) 1h = Select PRDEQ event to be the sync-out signal 2h = Disable sync out signal 3h = Disable sync out signal                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 5     | SYNCI_EN  | R/W    | 0h      | Counter (TSCTR) Sync-In select mode 0h = Disable sync-in option 1h = Enable counter (TSCTR) to be loaded from CTRPHS register upon either a SYNCI signal or a S/W force event.                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 4     | TSCTRSTOP | R/W    | 0h      | Time Stamp (TSCTR) Counter Stop (freeze) Control 0h = TSCTR stopped 1h = TSCTR free-running                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-114. ECCTL2 Register Field Descriptions (continued)

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 3     | RE-ARM      | R/W    | 0h      | One-Shot Re-Arming Control, that is, wait for stop trigger. Note: The re-arm function is valid in one shot or continuous mode. 0h = Has no effect (reading always returns a 0) 1h = Arms the one-shot sequence as follows: 1) Resets the Mod4 counter to zero. 2) Unfreezes the Mod4 counter. 3) Enables capture register loads.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 2-1   | STOP_WRAP   | R/W    | 3h      | Stop value for one-shot mode. This is the number (between 1 and 4) of captures allowed to occur before the CAP (1 through 4) registers are frozen, that is, capture sequence is stopped. Wrap value for continuous mode. This is the number (between 1 and 4) of the capture register in which the circular buffer wraps around and starts again. Notes: STOP_WRAP is compared to Mod4 counter and, when equal, the following two actions occur. (1) Mod4 counter is stopped (frozen), and (2) Capture register loads are inhibited. In one-shot mode, further interrupt events are blocked until re- armed. 0h = Stop after Capture Event 1 in one-shot mode. Wrap after Capture Event 1 in continuous mode. 1h = Stop after Capture Event 2 in one-shot mode. Wrap after Capture Event 2 in continuous mode. 2h = Stop after Capture Event 3 in one-shot mode. Wrap after Capture Event 3 in continuous mode. 3h = Stop after Capture Event 4 in one-shot mode. Wrap after Capture Event 4 in continuous mode. |
| 0     | CONT_ONESHT | R/W    | 0h      | Continuous or one-shot mode control (applicable only in capture mode) 0h = Operate in continuous mode 1h = Operate in one-shot mode                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |

## 15.3.4.1.9 ECEINT Register (offset = 2Ch) [reset = 0h]

ECEINT is shown in Figure 15-125 and described in Table 15-115.

The interrupt enable bits (CEVTn) block any of the selected events from generating an interrupt. Events will still be latched into the flag bit (ECFLG register) and can be forced or cleared via the ECFRC and ECCLR registers. The proper procedure for configuring peripheral modes and interrupts is: 1. Disable global interrupts. 2. Stop eCAP counter. 3. Disable eCAP interrupts. 4. Configure peripheral registers. 5. Clear spurious eCAP interrupt flags. 6. Enable eCAP interrupts. 7. Start eCAP counter. 8. Enable global interrupts.

## Figure 15-125. ECEINT Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| CMPEQ    | PRDEQ    | CNTOVF   | CEVT4    | CEVT3    | CEVT2    | CEVT1    | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-115. ECEINT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                               |
| 7     | CMPEQ    | R/W    | 0h      | Counter Equal Compare Interrupt Enable. 0h = Disable Compare Equal as an Interrupt source. 1h = Enable Compare Equal as an Interrupt source.  |
| 6     | PRDEQ    | R/W    | 0h      | Counter Equal Period Interrupt Enable. 0h = Disable Period Equal as an Interrupt source. 1h = Enable Period Equal as an Interrupt source.     |
| 5     | CNTOVF   | R/W    | 0h      | Counter Overflow Interrupt Enable. 0h = Disable counter Overflow as an Interrupt source. 1h = Enable counter Overflow as an Interrupt source. |
| 4     | CEVT4    | R/W    | 0h      | Capture Event 4 Interrupt Enable. 0h = Disable Capture Event 4 as an Interrupt source. 1h = Enable Capture Event 4 as an Interrupt source.    |
| 3     | CEVT3    | R/W    | 0h      | Capture Event 3 Interrupt Enable. 0h = Disable Capture Event 3 as an Interrupt source. 1h = Enable Capture Event 3 as an Interrupt source.    |
| 2     | CEVT2    | R/W    | 0h      | Capture Event 2 Interrupt Enable. 0h = Disable Capture Event 2 as an Interrupt source. 1h = Enable Capture Event 2 as an Interrupt source.    |
| 1     | CEVT1    | R/W    | 0h      | Capture Event 1 Interrupt Enable . 0h = Disable Capture Event 1 as an Interrupt source. 1h = Enable Capture Event 1 as an Interrupt source.   |
| 0     | RESERVED | R      | 0h      |                                                                                                                                               |

<!-- image -->

<!-- image -->

## 15.3.4.1.10 ECFLG Register (offset = 2Eh) [reset = 0h]

ECFLG is shown in Figure 15-126 and described in Table 15-116.

## Figure 15-126. ECFLG Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| CMPEQ    | PRDEQ    | CNTOVF   | CEVT4    | CEVT3    | CEVT2    | CEVT1    | INT      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-116. ECFLG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                      |
| 7     | CMPEQ    | R      | 0h      | Compare Equal Compare Status Flag. This flag is only active in APWM mode. 0h = Indicates no event occurred 1h = Indicates the counter (TSCTR) reached the compare register value (ACMP)              |
| 6     | PRDEQ    | R      | 0h      | Counter Equal Period Status Flag. This flag is only active in APWM mode. 0h = Indicates no event occurred 1h = Indicates the counter (TSCTR) reached the period register value (APRD) and was reset. |
| 5     | CNTOVF   | R      | 0h      | Counter Overflow Status Flag. This flag is active in CAP and APWM mode. 0h = Indicates no event occurred. 1h = Indicates the counter (TSCTR) has made the transition from 0xFFFFFFFF to 0x00000000   |
| 4     | CEVT4    | R      | 0h      | Capture Event 4 Status Flag This flag is only active in CAP mode. 0h = Indicates no event occurred 1h = Indicates the fourth event occurred at ECAPn pin                                             |
| 3     | CEVT3    | R      | 0h      | Capture Event 3 Status Flag. This flag is active only in CAP mode. 0h = Indicates no event occurred. 1h = Indicates the third event occurred at ECAPn pin.                                           |
| 2     | CEVT2    | R      | 0h      | Capture Event 2 Status Flag. This flag is only active in CAP mode. 0h = Indicates no event occurred. 1h = Indicates the second event occurred at ECAPn pin.                                          |
| 1     | CEVT1    | R      | 0h      | Capture Event 1 Status Flag. This flag is only active in CAP mode. 0h = Indicates no event occurred. 1h = Indicates the first event occurred at ECAPn pin.                                           |
| 0     | INT      | R      | 0h      | Global Interrupt Status Flag 0h = Indicates no interrupt generated. 1h = Indicates that an interrupt was generated.                                                                                  |

## 15.3.4.1.11 ECCLR Register (offset = 30h) [reset = 0h]

ECCLR is shown in Figure 15-127 and described in Table 15-117.

## Figure 15-127. ECCLR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| CMPEQ    | PRDEQ    | CNTOVF   | CEVT4    | CEVT3    | CEVT2    | CEVT1    | INT      |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-117. ECCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                   |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                               |
| 7     | CMPEQ    | R/W    | 0h      | Counter Equal Compare Status Flag 0h = Writing a 0 has no effect. Always reads back a 0 1h = Writing a 1 clears the CMPEQ flag condition                                                                      |
| 6     | PRDEQ    | R/W    | 0h      | Counter Equal Period Status Flag 0h = Writing a 0 has no effect. Always reads back a 0 1h = Writing a 1 clears the PRDEQ flag condition                                                                       |
| 5     | CNTOVF   | R/W    | 0h      | Counter Overflow Status Flag 0h = Writing a 0 has no effect. Always reads back a 0 1h = Writing a 1 clears the CNTOVF flag condition                                                                          |
| 4     | CEVT4    | R/W    | 0h      | Capture Event 4 Status Flag 0h = Writing a 0 has no effect. Always reads back a 0. 1h = Writing a 1 clears the CEVT3 flag condition.                                                                          |
| 3     | CEVT3    | R/W    | 0h      | Capture Event 3 Status Flag 0h = Writing a 0 has no effect. Always reads back a 0. 1h = Writing a 1 clears the CEVT3 flag condition.                                                                          |
| 2     | CEVT2    | R/W    | 0h      | Capture Event 2 Status Flag 0h = Writing a 0 has no effect. Always reads back a 0. 1h = Writing a 1 clears the CEVT2 flag condition.                                                                          |
| 1     | CEVT1    | R/W    | 0h      | Capture Event 1 Status Flag 0h = Writing a 0 has no effect. Always reads back a 0. 1h = Writing a 1 clears the CEVT1 flag condition.                                                                          |
| 0     | INT      | R/W    | 0h      | Global Interrupt Clear Flag 0h = Writing a 0 has no effect. Always reads back a 0. 1h = Writing a 1 clears the INT flag and enable further interrupts to be generated if any of the event flags are set to 1. |

<!-- image -->

<!-- image -->

## 15.3.4.1.12 ECFRC Register (offset = 32h) [reset = 0h]

ECFRC is shown in Figure 15-128 and described in Table 15-118.

## Figure 15-128. ECFRC Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| CMPEQ    | PRDEQ    | CNTOVF   | CEVT4    | CEVT3    | CEVT2    | CEVT1    | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-118. ECFRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                        |
| 7     | CMPEQ    | R/W    | 0h      | Force Counter Equal Compare Interrupt 0h = No effect. Always reads back a 0. 1h = Writing a 1 sets the CMPEQ flag bit. |
| 6     | PRDEQ    | R/W    | 0h      | Force Counter Equal Period Interrupt 0h = No effect. Always reads back a 0. 1h = Writing a 1 sets the PRDEQ flag bit.  |
| 5     | CNTOVF   | R/W    | 0h      | Force Counter Overflow 0h = No effect. Always reads back a 0. 1h = Writing a 1 to this bit sets the CNTOVF flag bit.   |
| 4     | CEVT4    | R/W    | 0h      | Force Capture Event 4 0h = No effect. Always reads back a 0. 1h = Writing a 1 sets the CEVT4 flag bit                  |
| 3     | CEVT3    | R/W    | 0h      | Force Capture Event 3 0h = No effect. Always reads back a 0. 1h = Writing a 1 sets the CEVT3 flag bit                  |
| 2     | CEVT2    | R/W    | 0h      | Force Capture Event 2 0h = No effect. Always reads back a 0. 1h = Writing a 1 sets the CEVT2 flag bit.                 |
| 1     | CEVT1    | R/W    | 0h      | Always reads back a 0. Force Capture Event 1 0h = No effect. 1h = Writing a 1 sets the CEVT1 flag bit.                 |
| 0     | RESERVED | R      | 0h      |                                                                                                                        |

## 15.3.4.1.13 REVID Register (offset = 5Ch) [reset = 44D22100h]

REVID is shown in Figure 15-174 and described in Table 15-146.

## Figure 15-129. REVID Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 REV   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-119. REVID Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description   |
|-------|---------|--------|-----------|---------------|
| 31-0  | REV     | R      | 44D22100h | Revision ID.  |

<!-- image -->