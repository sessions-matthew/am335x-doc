<!-- image -->

Note that the interrupts coming from the eQEP module are also used as DMA events. The interrupt registers should be used to enable and clear the current DMA event in order for the eQEP module to generate subsequent DMA events.

## 15.4.3 EQEP Registers

Table 15-121 lists the memory-mapped registers for the EQEP. All register offset addresses not listed in Table 15-121 should be considered as reserved locations and the register contents should not be modified.

Table 15-121. EQEP Registers

| Offset   | Acronym   | Register Name                                 | Section           |
|----------|-----------|-----------------------------------------------|-------------------|
| 0h       | QPOSCNT   | eQEP Position Counter Register                | Section 15.4.3.1  |
| 4h       | QPOSINIT  | eQEP Position Counter Initialization Register | Section 15.4.3.2  |
| 8h       | QPOSMAX   | eQEP Maximum Position Count Register          | Section 15.4.3.3  |
| Ch       | QPOSCMP   | eQEP Position-Compare Register                | Section 15.4.3.4  |
| 10h      | QPOSILAT  | eQEP Index Position Latch Register            | Section 15.4.3.5  |
| 14h      | QPOSSLAT  | eQEP Strobe Position Latch Register           | Section 15.4.3.6  |
| 18h      | QPOSLAT   | eQEP Position Counter Latch Register          | Section 15.4.3.7  |
| 1Ch      | QUTMR     | eQEP Unit Timer Register                      | Section 15.4.3.8  |
| 20h      | QUPRD     | eQEP Unit Period Register                     | Section 15.4.3.9  |
| 24h      | QWDTMR    | eQEP Watchdog Timer Register                  | Section 15.4.3.10 |
| 26h      | QWDPRD    | eQEP Watchdog Period Register                 | Section 15.4.3.11 |
| 28h      | QDECCTL   | eQEP Decoder Control Register                 | Section 15.4.3.12 |
| 2Ah      | QEPCTL    | eQEP Control Register                         | Section 15.4.3.13 |
| 2Ch      | QCAPCTL   | eQEP Capture Control Register                 | Section 15.4.3.14 |
| 2Eh      | QPOSCTL   | eQEP Position-Compare Control Register        | Section 15.4.3.15 |
| 30h      | QEINT     | eQEP Interrupt Enable Register                | Section 15.4.3.16 |
| 32h      | QFLG      | eQEP Interrupt Flag Register                  | Section 15.4.3.17 |
| 34h      | QCLR      | eQEP Interrupt Clear Register                 | Section 15.4.3.18 |
| 36h      | QFRC      | eQEP Interrupt Force Register                 | Section 15.4.3.19 |
| 38h      | QEPSTS    | eQEP Status Register                          | Section 15.4.3.20 |
| 3Ah      | QCTMR     | eQEP Capture Timer Register                   | Section 15.4.3.21 |
| 3Ch      | QCPRD     | eQEP Capture Period Register                  | Section 15.4.3.22 |
| 3Eh      | QCTMRLAT  | eQEP Capture Timer Latch Register             | Section 15.4.3.23 |
| 40h      | QCPRDLAT  | eQEP Capture Period Latch Register            | Section 15.4.3.24 |
| 5Ch      | REVID     | eQEP Revision ID Register                     | Section 15.4.3.25 |

<!-- image -->

www.ti.com

## 15.4.3.1 QPOSCNT Register (offset = 0h) [reset = 0h]

QPOSCNT is shown in Figure 15-150 and described in Table 15-122.

## Figure 15-150. QPOSCNT Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 QPOSCNT   |
|---------|-----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-122. QPOSCNT Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                              |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | QPOSCNT | R/W    | 0h      | This 32 bit position counter register counts up/down on every eQEP pulse based on direction input. This counter acts as a position integrator whose count value is proportional to position from a give reference point. |

## 15.4.3.2 QPOSINIT Register (offset = 4h) [reset = 0h]

QPOSINIT is shown in Figure 15-151 and described in Table 15-123.

## Figure 15-151. QPOSINIT Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 QPOSINIT   |
|---------|------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-123. QPOSINIT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | QPOSINIT | R/W    | 0h      | This register contains the position value that is used to initialize the position counter based on external strobe or index event. The position counter can be initialized through software. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.3 QPOSMAX Register (offset = 8h) [reset = 0h]

QPOSMAX is shown in Figure 15-152 and described in Table 15-124.

## Figure 15-152. QPOSMAX Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 QPOSMAX   |
|---------|-----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-124. QPOSMAX Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                |
|-------|---------|--------|---------|------------------------------------------------------------|
| 31-0  | QPOSMAX | R/W    | 0h      | This register contains the maximum position counter value. |

## 15.4.3.4 QPOSCMP Register (offset = Ch) [reset = 0h]

QPOSCMP is shown in Figure 15-153 and described in Table 15-125.

## Figure 15-153. QPOSCMP Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 QPOSCMP   |
|---------|-----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-125. QPOSCMP Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                            |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | QPOSCMP | R/W    | 0h      | The position-compare value in this register is compared with the position counter (QPOSCNT) to generate sync output and/or interrupt on compare match. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.5 QPOSILAT Register (offset = 10h) [reset = 0h]

QPOSILAT is shown in Figure 15-154 and described in Table 15-126.

## Figure 15-154. QPOSILAT Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------|---------------------------------------------------------------------------------|
|         | QPOSILAT                                                                        |
|         | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-126. QPOSILAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-0  | QPOSILAT | R      | 0h      | The position-counter value is latched into this register on an index event as defined by the QEPCTL[IEL] bits. |

## 15.4.3.6 QPOSSLAT Register (offset = 14h) [reset = 0h]

QPOSSLAT is shown in Figure 15-155 and described in Table 15-127.

## Figure 15-155. QPOSSLAT Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 QPOSSLAT   |
|---------|------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-127. QPOSSLAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                  |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------|
| 31-0  | QPOSSLAT | R      | 0h      | The position-counter value is latched into this register on strobe event as defined by the QEPCTL[SEL] bits. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.7 QPOSLAT Register (offset = 18h) [reset = 0h]

QPOSLAT is shown in Figure 15-156 and described in Table 15-128.

## Figure 15-156. QPOSLAT Register

| 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 QPOSLAT   |
|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-128. QPOSLAT Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                      |
|-------|---------|--------|---------|----------------------------------------------------------------------------------|
| 31-0  | QPOSLAT | R      | 0h      | The position-counter value is latched into this register on unit time out event. |

## 15.4.3.8 QUTMR Register (offset = 1Ch) [reset = 0h]

QUTMR is shown in Figure 15-157 and described in Table 15-129.

## Figure 15-157. QUTMR Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|---------|-----------------------------------------------------------------------------------|
|         | QUTMR                                                                             |
|         | R/W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-129. QUTMR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                              |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | QUTMR   | R/W    | 0h      | This register acts as time base for unit time event generation. When this timer value matches with unit time period value, unit time event is generated. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.9 QUPRD Register (offset = 20h) [reset = 0h]

QUPRD is shown in Figure 15-158 and described in Table 15-130.

## Figure 15-158. QUPRD Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|---------|-----------------------------------------------------------------------------------|
|         | QUPRD                                                                             |
|         | R/W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-130. QUPRD Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                    |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | QUPRD   | R/W    | 0h      | This register contains the period count for unit timer to generate periodic unit time events to latch the eQEP position information at periodic interval and optionally to generate interrupt. |

## 15.4.3.10 QWDTMR Register (offset = 24h) [reset = 0h]

QWDTMR is shown in Figure 15-159 and described in Table 15-131.

## Figure 15-159. QWDTMR Register

| 15     | 14     | 13     | 12     | 11     | 10     | 9      | 8 7    | 6      | 5      | 4      | 3      | 2 1    | 0      |        |
|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
| QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR | QWDTMR |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-131. QWDTMR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | QWDTMR  | R/W    | 0h      | This register acts as time base for watch dog to detect motor stalls. When this timer value matches with watch dog period value, watch dog timeout interrupt is generated. This register is reset upon edge transition in quadrature-clock indicating the motion. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.11 QWDPRD Register (offset = 26h) [reset = 0h]

QWDPRD is shown in Figure 15-160 and described in Table 15-132.

## Figure 15-160. QWDPRD Register

| 15     | 14     | 13     | 12     | 11     | 10     | 9      | 8 7    | 6      | 5      | 4      | 3      | 2 1    | 0      |        |
|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
| QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD | QWDPRD |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-132. QWDPRD Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                    |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | QWDPRD  | R/W    | 0h      | This register contains the time-out count for the eQEP peripheral watch dog timer. When the watchdog timer value matches the watchdog period value, a watchdog timeout interrupt is generated. |

## 15.4.3.12 QDECCTL Register (offset = 28h) [reset = 0h]

QDECCTL is shown in Figure 15-161 and described in Table 15-133.

## Figure 15-161. QDECCTL Register

| 15     | 14     | 13     | 12       | 11       | 10       | 9        | 8        |
|--------|--------|--------|----------|----------|----------|----------|----------|
| QSRC   | QSRC   | SOEN   | SPSEL    | XCR      | SWAP     | IGATE    | QAP      |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7      | 6      | 5      | 4        | 3        | 2        | 1        | 0        |
| QBP    | QIP    | QSP    | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h | R/W-0h | R/W-0h | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-133. QDECCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | QSRC     | R/W    | 0h      | Position-counter source selection. 0h = Quadrature count mode (QCLK = iCLK, QDIR = iDIR) 1h = Direction-count mode (QCLK = xCLK, QDIR = xDIR) 2h = UP count mode for frequency measurement (QCLK = xCLK, QDIR = 1) 3h = DOWN count mode for frequency measurement (QCLK = xCLK, QDIR = 0) |
| 13    | SOEN     | R/W    | 0h      | Sync output-enable 0h = Disable position-compare sync output 1h = Enable position-compare sync output                                                                                                                                                                                     |
| 12    | SPSEL    | R/W    | 0h      | Sync output pin selection 0h = Index pin is used for sync output 1h = Strobe pin is used for sync output                                                                                                                                                                                  |
| 11    | XCR      | R/W    | 0h      | External clock rate 0h = 2x resolution: Count the rising/falling edge 1h = 1x resolution: Count the rising edge only                                                                                                                                                                      |
| 10    | SWAP     | R/W    | 0h      | Swap quadrature clock inputs. This swaps the input to the quadrature decoder, reversing the counting direction. 0h = Quadrature-clock inputs are not swapped 1h = Quadrature-clock inputs are swapped                                                                                     |
| 9     | IGATE    | R/W    | 0h      | Index pulse gating option 0h = Disable gating of Index pulse 1h = Gate the index pin with strobe                                                                                                                                                                                          |
| 8     | QAP      | R/W    | 0h      | QEPA input polarity 0h = No effect 1h = Negates QEPA input                                                                                                                                                                                                                                |
| 7     | QBP      | R/W    | 0h      | QEPB input polarity 0h = No effect 1h = Negates QEPB input                                                                                                                                                                                                                                |
| 6     | QIP      | R/W    | 0h      | QEPI input polarity 0h = No effect 1h = Negates QEPI input                                                                                                                                                                                                                                |
| 5     | QSP      | R/W    | 0h      | QEPS input polarity 0h = No effect 1h = Negates QEPS input                                                                                                                                                                                                                                |
| 4-0   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                           |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 15.4.3.13 QEPCTL Register (offset = 2Ah) [reset = 0h]

QEPCTL is shown in Figure 15-162 and described in Table 15-134.

## Figure 15-162. QEPCTL Register

| 15        | 14        | 13     | 12     | 11     | 10     | 9      | 8      |
|-----------|-----------|--------|--------|--------|--------|--------|--------|
| FREE_SOFT | FREE_SOFT | PCRM   | PCRM   | SEI    | SEI    | IEI    | IEI    |
| R/W-0h    | R/W-0h    | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |
| 7         | 6         | 5      | 4      | 3      | 2      | 1      | 0      |
| SWI       | SEL       | IEL    | IEL    | PHEN   | QCLM   | UTE    | WDE    |
| R/W-0h    | R/W-0h    | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-134. QEPCTL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | FREE_SOFT | R/W    | 0h      | Emulation Control Bits. In the values 0 through 3 listed below, x is different for the four following behaviors. QPOSCNT behavior, x refers to the Position counter. QWDTMR behavior, x refers to the Watchdog counter. QUTMR behavior, x refers to the Unit timer. QCTMR behavior, x refers to the Capture timer. 0h = x stops immediately. For QPOSCNT behavior, the stop is on emulation suspend. 1h = x continues to count until the rollover. 2h = x is unaffected by emulation suspend. 3h = x is unaffected by emulation suspend. |
| 13-12 | PCRM      | R/W    | 0h      | Position counter reset mode 0h = Position counter reset on an index event 1h = Position counter reset on the maximum position 2h = Position counter reset on the first index event 3h = Position counter reset on a unit time event                                                                                                                                                                                                                                                                                                      |
| 11-10 | SEI       | R/W    | 0h      | Strobe event initialization of position counter 0h = Does nothing (action disabled) 1h = Does nothing (action disabled) 2h = Initializes the position counter on rising edge of the QEPS signal 3h = Clockwise Direction: Initializes the position counter on the rising edge of QEPS strobe. Counter Clockwise Direction: Initializes the position counter on the falling edge of QEPS strobe                                                                                                                                           |
| 9-8   | IEI       | R/W    | 0h      | Index event initialization of position counter 0h = Do nothing (action disabled) 1h = Do nothing (action disabled) 2h = Initializes the position counter on the rising edge of the QEPI signal (QPOSCNT = QPOSINIT) 3h = Initializes the position counter on the falling edge of QEPI signal (QPOSCNT = QPOSINIT)                                                                                                                                                                                                                        |
| 7     | SWI       | R/W    | 0h      | Software initialization of position counter 0h = Do nothing (action disabled) 1h = Initialize position counter, this bit is cleared automatically                                                                                                                                                                                                                                                                                                                                                                                        |
| 6     | SEL       | R/W    | 0h      | Strobe event latch of position counter 0h = The position counter is latched on the rising edge of QEPS strobe (QPOSSLAT = POSCCNT). Latching on the falling edge can be done by inverting the strobe input using the QSP bit in the QDECCTL register. 1h = Clockwise Direction: Position counter is latched on rising edge of QEPS strobe. Counter Clockwise Direction: Position counter is latched on falling edge of QEPS strobe.                                                                                                      |

Table 15-134. QEPCTL Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5-4   | IEL     | R/W    | 0h      | Index event latch of position counter (software index marker) 0h = Reserved 1h = Latches position counter on rising edge of the index signal 2h = Latches position counter on falling edge of the index signal 3h = Software index marker. Latches the position counter and quadrature direction flag on index event marker. The position counter is latched to the QPOSILAT register and the direction flag is latched in the QEPSTS[QDLF] bit. This mode is useful for software index marking. |
| 3     | PHEN    | R/W    | 0h      | Quadrature position counter enable/software reset 0h = Reset the eQEP peripheral internal operating flags/read-only registers. Control/configuration registers are not disturbed by a software reset. 1h = eQEP position counter is enabled                                                                                                                                                                                                                                                      |
| 2     | QCLM    | R/W    | 0h      | eQEP capture latch mode 0h = Latch on position counter read by CPU. Capture timer and capture period values are latched into QCTMRLAT and QCPRDLAT registers when CPU reads the QPOSCNT register. 1h = Latch on unit time out. Position counter, capture timer and capture period values are latched into QPOSLAT, QCTMRLAT and QCPRDLAT registers on unit time out.                                                                                                                             |
| 1     | UTE     | R/W    | 0h      | eQEP unit timer enable 0h = Disable eQEP unit timer 1h = Enable unit timer                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 0     | WDE     | R/W    | 0h      | eQEP watchdog enable 0h = Disable the eQEP watchdog timer 1h = Enable the eQEP watchdog timer                                                                                                                                                                                                                                                                                                                                                                                                    |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.14 QCAPCTL Register (offset = 2Ch) [reset = 0h]

QCAPCTL is shown in Figure 15-163 and described in Table 15-135.

## Figure 15-163. QCAPCTL Register

| 15       | 14   | 13     | 12   | 11       | 10     | 9   | 8   |
|----------|------|--------|------|----------|--------|-----|-----|
| CEN      |      |        |      | RESERVED |        |     |     |
| R/W-0h   |      |        |      | R-0h     |        |     |     |
| 7        | 6    | 5      | 4    | 3        | 2      | 1   | 0   |
| RESERVED | CCPS |        |      | UPPS     |        |     |     |
| R-0h     |      | R/W-0h |      |          | R/W-0h |     |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-135. QCAPCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15    | CEN      | R/W    | 0h      | Enable eQEP capture 0h = eQEP capture unit is disabled 1h = eQEP capture unit is enabled                                                                                                                                                                                                                                                                         |
| 14-7  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                  |
| 6-4   | CCPS     | R/W    | 0h      | eQEP capture timer clock prescaler 0h = CAPCLK = SYSCLKOUT/1 1h = CAPCLK = SYSCLKOUT/2 2h = CAPCLK = SYSCLKOUT/4 3h = CAPCLK = SYSCLKOUT/8 4h = CAPCLK = SYSCLKOUT/16 5h = CAPCLK = SYSCLKOUT/32 6h = CAPCLK = SYSCLKOUT/64 7h = CAPCLK = SYSCLKOUT/128                                                                                                          |
| 3-0   | UPPS     | R/W    | 0h      | Unit position event prescaler 0h = UPEVNT = QCLK/1 1h = UPEVNT = QCLK/2 2h = UPEVNT = QCLK/4 3h = UPEVNT = QCLK/8 4h = UPEVNT = QCLK/16 5h = UPEVNT = QCLK/32 6h = UPEVNT = QCLK/64 7h = UPEVNT = QCLK/128 8h = UPEVNT = QCLK/256 9h = UPEVNT = QCLK/512 Ah = UPEVNT = QCLK/1024 Bh = UPEVNT = QCLK/2048 Ch = Reserved Dh = Reserved Eh = Reserved Fh = Reserved |

## 15.4.3.15 QPOSCTL Register (offset = 2Eh) [reset = 0h]

QPOSCTL is shown in Figure 15-164 and described in Table 15-136.

## Figure 15-164. QPOSCTL Register

| 15     | 14     | 13     | 12     | 11     | 10     | 9      | 8      |
|--------|--------|--------|--------|--------|--------|--------|--------|
| PCSHDW | PCLOAD | PCPOL  | PCE    |        | PCSPW  |        |        |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h |        |        | R/W-0h |        |
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
| PCSPW  | PCSPW  | PCSPW  | PCSPW  | PCSPW  | PCSPW  | PCSPW  | PCSPW  |
| R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-136. QPOSCTL Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15    | PCSHDW  | R/W    | 0h      | Position-compare shadow enable 0h = Shadow disabled, load Immediate 1h = Shadow enabled                                                                                                                                                     |
| 14    | PCLOAD  | R/W    | 0h      | Position-compare shadow load mode 0h = Load on QPOSCNT = 0 1h = Load when QPOSCNT = QPOSCMP                                                                                                                                                 |
| 13    | PCPOL   | R/W    | 0h      | Polarity of sync output 0h = Active HIGH pulse output 1h = Active LOW pulse output                                                                                                                                                          |
| 12    | PCE     | R/W    | 0h      | Position-compare enable/disable 0h = Disable position compare unit 1h = Enable position compare unit                                                                                                                                        |
| 11-0  | PCSPW   | R/W    | 0h      | Select-position-compare sync output pulse width ... 0h = 1 x 4 x SYSCLKOUT cycles 1h = 2 x 4 x SYSCLKOUT cycles 2h = 3 x 4 x SYSCLKOUT cycles to 4096 x 4 x SYSCLKOUT cycles FFFh = 3 x 4 x SYSCLKOUT cycles to 4096 x 4 x SYSCLKOUT cycles |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 15.4.3.16 QEINT Register (offset = 30h) [reset = 0h]

QEINT is shown in Figure 15-165 and described in Table 15-137.

## Figure 15-165. QEINT Register

| 15       | 14       | 13       | 12     | 11     | 10     | 9      | 8        |
|----------|----------|----------|--------|--------|--------|--------|----------|
| RESERVED | RESERVED | RESERVED |        | UTO    | IEL    | SEL    | PCM      |
| R-0h     | R-0h     | R-0h     |        | R/W-0h | R/W-0h | R/W-0h | R/W-0h   |
| 7        | 6        | 5        | 4      | 3      | 2      | 1      | 0        |
| PCR      | PCO      | PCU      | WTO    | QDC    | PHE    | PCE    | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-137. QEINT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------|
| 15-12 | RESERVED | R      | 0h      |                                                                                                   |
| 11    | UTO      | R/W    | 0h      | Unit time out interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled               |
| 10    | IEL      | R/W    | 0h      | Index event latch interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled           |
| 9     | SEL      | R/W    | 0h      | Strobe event latch interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled          |
| 8     | PCM      | R/W    | 0h      | Position-compare match interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled      |
| 7     | PCR      | R/W    | 0h      | Position-compare ready interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled      |
| 6     | PCO      | R/W    | 0h      | Position counter overflow interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled   |
| 5     | PCU      | R/W    | 0h      | Position counter underflow interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled  |
| 4     | WTO      | R/W    | 0h      | Watchdog time out interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled           |
| 3     | QDC      | R/W    | 0h      | Quadrature direction change interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled |
| 2     | PHE      | R/W    | 0h      | Quadrature phase error interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled      |
| 1     | PCE      | R/W    | 0h      | Position counter error interrupt enable 0h = Interrupt is disabled 1h = Interrupt is enabled      |
| 0     | RESERVED | R      | 0h      |                                                                                                   |

## 15.4.3.17 QFLG Register (offset = 32h) [reset = 0h]

QFLG is shown in Figure 15-166 and described in Table 15-138.

## Figure 15-166. QFLG Register

| 15       | 14       | 13       | 12       | 11   | 10   | 9    | 8    |
|----------|----------|----------|----------|------|------|------|------|
| RESERVED | RESERVED | RESERVED | RESERVED | UTO  | IEL  | SEL  | PCM  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h | R-0h | R-0h | R-0h |
| 7        | 6        | 5        | 4        | 3    | 2    | 1    | 0    |
| PCR      | PCO      | PCU      | WTO      | QDC  | PHE  | PCE  | INT  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h | R-0h | R-0h | R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-138. QFLG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                                              |
| 11    | UTO      | R      | 0h      | Unit time out interrupt flag 0h = No interrupt generated 1h = Set by eQEP unit timer period match                                                                            |
| 10    | IEL      | R      | 0h      | Index event latch interrupt flag 0h = No interrupt generated 1h = This bit is set after latching the QPOSCNT to QPOSILAT                                                     |
| 9     | SEL      | R      | 0h      | Strobe event latch interrupt flag 0h = No interrupt generated 1h = This bit is set after latching the QPOSCNT to QPOSSLAT                                                    |
| 8     | PCM      | R      | 0h      | eQEP compare match event interrupt flag 0h = No interrupt generated 1h = This bit is set on position-compare match                                                           |
| 7     | PCR      | R      | 0h      | Position-compare ready interrupt flag 0h = No interrupt generated 1h = This bit is set after transferring the shadow register value to the active position compare register. |
| 6     | PCO      | R      | 0h      | Position counter overflow interrupt flag 0h = No interrupt generated 1h = This bit is set on position counter overflow.                                                      |
| 5     | PCU      | R      | 0h      | Position counter underflow interrupt flag 0h = No interrupt generated 1h = This bit is set on position counter underflow.                                                    |
| 4     | WTO      | R      | 0h      | Watchdog timeout interrupt flag 0h = No interrupt generated 1h = Set by watch dog timeout                                                                                    |
| 3     | QDC      | R      | 0h      | Quadrature direction change interrupt flag 0h = No interrupt generated 1h = This bit is set during change of direction                                                       |
| 2     | PHE      | R      | 0h      | Quadrature phase error interrupt flag 0h = No interrupt generated 1h = Set on simultaneous transition of QEPA and QEPB                                                       |
| 1     | PCE      | R      | 0h      | Position counter error interrupt flag 0h = No interrupt generated 1h = Position counter error                                                                                |
| 0     | INT      | R      | 0h      | Global interrupt status flag 0h = No interrupt generated 1h = Interrupt was generated                                                                                        |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.18 QCLR Register (offset = 34h) [reset = 0h]

QCLR is shown in Figure 15-167 and described in Table 15-139.

## Figure 15-167. QCLR Register

| 15       | 14       | 13       | 12     | 11     | 10     | 9      | 8      |
|----------|----------|----------|--------|--------|--------|--------|--------|
| RESERVED | RESERVED | RESERVED |        | UTO    | IEL    | SEL    | PCM    |
| R-0h     | R-0h     | R-0h     |        | R/W-0h | R/W-0h | R/W-0h | R/W-0h |
| 7        | 6        | 5        | 4      | 3      | 2      | 1      | 0      |
| PCR      | PCO      | PCU      | WTO    | QDC    | PHE    | PCE    | INT    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-139. QCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-12 | RESERVED | R      | 0h      |                                                                                                                                                         |
| 11    | UTO      | R/W    | 0h      | Clear unit time out interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                                        |
| 10    | IEL      | R/W    | 0h      | Clear index event latch interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                                    |
| 9     | SEL      | R/W    | 0h      | Clear strobe event latch interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                                   |
| 8     | PCM      | R/W    | 0h      | Clear eQEP compare match event interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                             |
| 7     | PCR      | R/W    | 0h      | Clear position-compare ready interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                               |
| 6     | PCO      | R/W    | 0h      | Clear position counter overflow interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                            |
| 5     | PCU      | R/W    | 0h      | Clear position counter underflow interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                           |
| 4     | WTO      | R/W    | 0h      | Clear watchdog timeout interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                                     |
| 3     | QDC      | R/W    | 0h      | Clear quadrature direction change interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                          |
| 2     | PHE      | R/W    | 0h      | Clear quadrature phase error interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                               |
| 1     | PCE      | R/W    | 0h      | Clear position counter error interrupt flag 0h = No effect 1h = Clears the interrupt flag                                                               |
| 0     | INT      | R/W    | 0h      | Global interrupt clear flag 0h = No effect 1h = Clears the interrupt flag and enables further interrupts to be generated if an event flags is set to 1. |

## 15.4.3.19 QFRC Register (offset = 36h) [reset = 0h]

QFRC is shown in Figure 15-168 and described in Table 15-140.

## Figure 15-168. QFRC Register

| 15       | 14       | 13       | 12     | 11     | 10     | 9      | 8        |
|----------|----------|----------|--------|--------|--------|--------|----------|
| RESERVED | RESERVED | RESERVED |        | UTO    | IEL    | SEL    | PCM      |
| R-0h     | R-0h     | R-0h     |        | R/W-0h | R/W-0h | R/W-0h | R/W-0h   |
| 7        | 6        | 5        | 4      | 3      | 2      | 1      | 0        |
| PCR      | PCO      | PCU      | WTO    | QDC    | PHE    | PCE    | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R/W-0h | R/W-0h | R/W-0h | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-140. QFRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                         |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------|
| 15-12 | RESERVED | R      | 0h      |                                                                                     |
| 11    | UTO      | R/W    | 0h      | Force unit time out interrupt 0h = No effect 1h = Force the interrupt               |
| 10    | IEL      | R/W    | 0h      | Force index event latch interrupt 0h = No effect 1h = Force the interrupt           |
| 9     | SEL      | R/W    | 0h      | Force strobe event latch interrupt 0h = No effect 1h = Force the interrupt          |
| 8     | PCM      | R/W    | 0h      | Force position-compare match interrupt 0h = No effect 1h = Force the interrupt      |
| 7     | PCR      | R/W    | 0h      | Force position-compare ready interrupt 0h = No effect 1h = Force the interrupt      |
| 6     | PCO      | R/W    | 0h      | Force position counter overflow interrupt 0h = No effect 1h = Force the interrupt   |
| 5     | PCU      | R/W    | 0h      | Force position counter underflow interrupt 0h = No effect 1h = Force the interrupt  |
| 4     | WTO      | R/W    | 0h      | Force watchdog time out interrupt 0h = No effect 1h = Force the interrupt           |
| 3     | QDC      | R/W    | 0h      | Force quadrature direction change interrupt 0h = No effect 1h = Force the interrupt |
| 2     | PHE      | R/W    | 0h      | Force quadrature phase error interrupt 0h = No effect 1h = Force the interrupt      |
| 1     | PCE      | R/W    | 0h      | Force position counter error interrupt 0h = No effect 1h = Force the interrupt      |
| 0     | RESERVED | R      | 0h      |                                                                                     |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 15.4.3.20 QEPSTS Register (offset = 38h) [reset = 0h]

QEPSTS is shown in Figure 15-169 and described in Table 15-141.

## Figure 15-169. QEPSTS Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| UPEVNT   | FDF      | QDF      | QDLF     | COEF     | CDEF     | FIMF     | PCEF     |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-141. QEPSTS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                |
| 7     | UPEVNT   | R      | 0h      | Unit position event flag 0h = No unit position event detected 1h = Unit position event detected. Write 1 to clear.                                                                                                                                             |
| 6     | FDF      | R      | 0h      | Direction on the first index marker. Status of the direction is latched on the first index event marker. 0h = Counter-clockwise rotation (or reverse movement) on the first index event 1h = Clockwise rotation (or forward movement) on the first index event |
| 5     | QDF      | R      | 0h      | Quadrature direction flag 0h = Counter-clockwise rotation (or reverse movement) 1h = Clockwise rotation (or forward movement)                                                                                                                                  |
| 4     | QDLF     | R      | 0h      | eQEP direction latch flag. Status of direction is latched on every index event marker. 0h = Counter-clockwise rotation (or reverse movement) on index event marker 1h = Clockwise rotation (or forward movement) on index event marker                         |
| 3     | COEF     | R/W    | 0h      | Capture overflow error flag 0h = Sticky bit, cleared by writing 1 1h = Overflow occurred in eQEP Capture timer (QEPCTMR)                                                                                                                                       |
| 2     | CDEF     | R/W    | 0h      | Capture direction error flag 0h = Sticky bit, cleared by writing 1 1h = Direction change occurred between the capture position event.                                                                                                                          |
| 1     | FIMF     | R/W    | 0h      | First index marker flag 0h = Sticky bit, cleared by writing 1 1h = Set by first occurrence of index pulse                                                                                                                                                      |
| 0     | PCEF     | R      | 0h      | Position counter error flag. This bit is not sticky and it is updated for every index event. 0h = No error occurred during the last index transition. 1h = Position counter error                                                                              |

## 15.4.3.21 QCTMR Register (offset = 3Ah) [reset = 0h]

QCTMR is shown in Figure 15-170 and described in Table 15-142.

## Figure 15-170. QCTMR Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | QCTMR  |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-142. QCTMR Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                             |
|-------|---------|--------|---------|---------------------------------------------------------|
| 15-0  | QCTMR   | R/W    | 0h      | This register provides time base for edge capture unit. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.22 QCPRD Register (offset = 3Ch) [reset = 0h]

QCPRD is shown in Figure 15-171 and described in Table 15-143.

## Figure 15-171. QCPRD Register

| 15   | 14   | 13   | 12   | 11   | 10   | 9   | 8 7    | 6   | 5   | 4   | 3   | 2 1   | 0   |
|------|------|------|------|------|------|-----|--------|-----|-----|-----|-----|-------|-----|
|      |      |      |      |      |      |     | QCPRD  |     |     |     |     |       |     |
|      |      |      |      |      |      |     | R/W-0h |     |     |     |     |       |     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-143. QCPRD Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                 |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------|
| 15-0  | QCPRD   | R/W    | 0h      | This register holds the period count value between the last successive eQEP position events |

## 15.4.3.23 QCTMRLAT Register (offset = 3Eh) [reset = 0h]

QCTMRLAT is shown in Figure 15-172 and described in Table 15-144.

## Figure 15-172. QCTMRLAT Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8 7      | 6        | 5        | 4        | 3        | 2 1      | 0        |          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT | QCTMRLAT |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-144. QCTMRLAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | QCTMRLAT | R      | 0h      | The eQEP capture timer value can be latched into this register on two events, that is, unit timeout event, reading the eQEP position counter. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.4.3.24 QCPRDLAT Register (offset = 40h) [reset = 0h]

QCPRDLAT is shown in Figure 15-173 and described in Table 15-145.

## Figure 15-173. QCPRDLAT Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8 7      | 6        | 5        | 4        | 3        | 2 1      | 0        |          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT | QCPRDLAT |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-145. QCPRDLAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 15-0  | QCPRDLAT | R/W    | 0h      | eQEP capture period value can be latched into this register on two events, that is, unit timeout event, reading the eQEP position counter. |

## 15.4.3.25 REVID Register (offset = 5Ch) [reset = 44D31103h]

REVID is shown in Figure 15-174 and described in Table 15-146.

## Figure 15-174. REVID Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 REV   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-146. REVID Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description      |
|-------|---------|--------|-----------|------------------|
| 31-0  | REV     | R      | 44D31103h | eQEP revision ID |

<!-- image -->