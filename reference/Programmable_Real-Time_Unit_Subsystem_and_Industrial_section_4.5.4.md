<!-- image -->

## 4.5.3.63 HIER Register (offset = 1500h) [reset = 0h]

HIER is shown in Figure 4-191 and described in Table 4-178.

The Host Interrupt Enable Registers enable or disable individual host interrupts. These work separately from the global enables. There is one bit per host interrupt. These bits are updated when writing to the Host Interrupt Enable Index Set and Host Interrupt Enable Index Clear registers.

## Figure 4-191. HIER Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6   |
|-----------------------------------------------------------------------------|
| RESERVED                                                                    |
| R/W-0h                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-178. HIER Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------|
| 31-10 | RESERVED | R/W    | 0h      |                                                                           |
| 9-0   | EN_HINT  | R/W    | 0h      | The enable of the host interrupts (one per bit). 0 = disabled 1 = enabled |

## 4.5.4 PRU\_ICSS\_IEP Registers

Table 4-179 lists the memory-mapped registers for the PRU\_ICSS\_IEP. All register offset addresses not listed in Table 4-179 should be considered as reserved locations and the register contents should not be modified.

## Table 4-179. PRU\_ICSS\_IEP Registers

| Offset   | Acronym         | Register Name   | Section          |
|----------|-----------------|-----------------|------------------|
| 0h       | IEP_TMR_GLB_CFG |                 | Section 4.5.4.1  |
| 4h       | IEP_TMR_GLB_STS |                 | Section 4.5.4.2  |
| 8h       | IEP_TMR_COMPEN  |                 | Section 4.5.4.3  |
| Ch       | IEP_TMR_CNT     |                 | Section 4.5.4.4  |
| 10h      | IEP_TMR_CAP_CFG |                 | Section 4.5.4.5  |
| 14h      | IEP_TMR_CAP_STS |                 | Section 4.5.4.6  |
| 18h      | IEP_TMR_CAPR0   |                 | Section 4.5.4.7  |
| 1Ch      | IEP_TMR_CAPR1   |                 | Section 4.5.4.8  |
| 20h      | IEP_TMR_CAPR2   |                 | Section 4.5.4.9  |
| 24h      | IEP_TMR_CAPR3   |                 | Section 4.5.4.10 |
| 28h      | IEP_TMR_CAPR4   |                 | Section 4.5.4.11 |
| 2Ch      | IEP_TMR_CAPR5   |                 | Section 4.5.4.12 |
| 30h      | IEP_TMR_CAPR6   |                 | Section 4.5.4.13 |
| 34h      | IEP_TMR_CAPF6   |                 | Section 4.5.4.14 |
| 38h      | IEP_TMR_CAPR7   |                 | Section 4.5.4.15 |
| 3Ch      | IEP_TMR_CAPF7   |                 | Section 4.5.4.16 |
| 40h      | IEP_TMR_CMP_CFG |                 | Section 4.5.4.17 |
| 44h      | IEP_TMR_CMP_STS |                 | Section 4.5.4.18 |
| 48h      | IEP_TMR_CMP0    |                 | Section 4.5.4.19 |
| 4Ch      | IEP_TMR_CMP1    |                 | Section 4.5.4.20 |
| 50h      | IEP_TMR_CMP2    |                 | Section 4.5.4.21 |
| 54h      | IEP_TMR_CMP3    |                 | Section 4.5.4.22 |
| 58h      | IEP_TMR_CMP4    |                 | Section 4.5.4.23 |
| 5Ch      | IEP_TMR_CMP5    |                 | Section 4.5.4.24 |

Table 4-179. PRU\_ICSS\_IEP Registers (continued)

| Offset   | Acronym               | Register Name   | Section          |
|----------|-----------------------|-----------------|------------------|
| 60h      | IEP_TMR_CMP6          |                 | Section 4.5.4.25 |
| 64h      | IEP_TMR_CMP7          |                 | Section 4.5.4.26 |
| 80h      | IEP_TMR_RXIPG0        |                 | Section 4.5.4.27 |
| 84h      | IEP_TMR_RXIPG1        |                 | Section 4.5.4.28 |
| 100h     | IEP_SYNC_CTRL         |                 | Section 4.5.4.29 |
| 104h     | IEP_SYNC_FIRST_STAT   |                 | Section 4.5.4.30 |
| 108h     | IEP_SYNC0_STAT        |                 | Section 4.5.4.31 |
| 10Ch     | IEP_SYNC1_STAT        |                 | Section 4.5.4.32 |
| 110h     | IEP_SYNC_PWIDTH       |                 | Section 4.5.4.33 |
| 114h     | IEP_SYNC0_PERIOD      |                 | Section 4.5.4.34 |
| 118h     | IEP_SYNC1_DELAY       |                 | Section 4.5.4.35 |
| 11Ch     | IEP_SYNC_START        |                 | Section 4.5.4.36 |
| 200h     | IEP_WD_PREDIV         |                 | Section 4.5.4.37 |
| 204h     | IEP_PDI_WD_TIM        |                 | Section 4.5.4.38 |
| 208h     | IEP_PD_WD_TIM         |                 | Section 4.5.4.39 |
| 20Ch     | IEP_WD_STATUS         |                 | Section 4.5.4.40 |
| 210h     | IEP_WD_EXP_CNT        |                 | Section 4.5.4.41 |
| 214h     | IEP_WD_CTRL           |                 | Section 4.5.4.42 |
| 300h     | IEP_DIGIO_CTRL        |                 | Section 4.5.4.43 |
| 308h     | IEP_DIGIO_DATA_IN     |                 | Section 4.5.4.44 |
| 30Ch     | IEP_DIGIO_DATA_IN_RAW |                 | Section 4.5.4.45 |
| 310h     | IEP_DIGIO_DATA_OUT    |                 | Section 4.5.4.46 |
| 314h     | IEP_DIGIO_DATA_OUT_EN |                 | Section 4.5.4.47 |
| 318h     | IEP_DIGIO_EXP         |                 | Section 4.5.4.48 |

<!-- image -->

<!-- image -->

## 4.5.4.1 IEP\_TMR\_GLB\_CFG Register (offset = 0h) [reset = 550h]

IEP\_TMR\_GLB\_CFG is shown in Figure 4-192 and described in Table 4-180. GLOBAL CONFIGURE

## Figure 4-192. IEP\_TMR\_GLB\_CFG Register

| 31            | 30       | 29                              | 28        | 27       | 26       | 25               | 24       |
|---------------|----------|---------------------------------|-----------|----------|----------|------------------|----------|
| RESERVED      | RESERVED | RESERVED                        | RESERVED  | RESERVED | RESERVED | RESERVED         | RESERVED |
| 22            | 22       | 22                              | 22        | 22       | 22       | 22               | 22       |
| 23 21 R-0h 15 | 20       | 19                              | 18 R/W-5h | 17       | 16       | RESERVED CMP_INC | 14       |
| 13            | 13       | 13                              | 13        | 13       | 13       | 13               | 13       |
| 12            | 12       | 12                              | 12        | 12       | 12       | 12               | 12       |
| 11            | 10       | 9                               | 8         | CMP_INC  | 6        | R/W-5h 5         | 4        |
| 3             | 3        | 3                               | 3         | 3        | 3        | 3                | 3        |
| 2             | 2        | 2                               | 2         | 2        | 2        | 2                | 2        |
| 7 1           | 0        | DEFAULT_INC RESERVED CNT_ENABLE |           |          |          |                  |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-180. IEP\_TMR\_GLB\_CFG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                              |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED    | R      | 0h      |                                                                                                          |
| 19-8  | CMP_INC     | R/W    | 5h      | Defines the increment value when compensation is active                                                  |
| 7-4   | DEFAULT_INC | R/W    | 5h      | Defines the default increment value                                                                      |
| 3-1   | RESERVED    | R      | 0h      |                                                                                                          |
| 0     | CNT_ENABLE  | R/W    | 0h      | Counter enable 0: Disables the counter. The counter maintains the current count. 1: Enables the counter. |

## 4.5.4.2 IEP\_TMR\_GLB\_STS Register (offset = 4h) [reset = 0h]

IEP\_TMR\_GLB\_STS is shown in Figure 4-193 and described in Table 4-181. GLOBAL STATUS

## Figure 4-193. IEP\_TMR\_GLB\_STS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24           |
|----------|----------|----------|----------|----------|----------|----------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | CNT_OVF      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1toClr-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-181. IEP\_TMR\_GLB\_STS Register Field Descriptions

| Bit   | Field    | Type      | Reset   | Description                                                 |
|-------|----------|-----------|---------|-------------------------------------------------------------|
| 31-1  | RESERVED | R         | 0h      |                                                             |
| 0     | CNT_OVF  | R/W1toClr | 0h      | Counter overflow status 0: No overflow 1: Overflow occurred |

<!-- image -->

<!-- image -->

## 4.5.4.3 IEP\_TMR\_COMPEN Register (offset = 8h) [reset = 0h]

IEP\_TMR\_COMPEN is shown in Figure 4-194 and described in Table 4-182. COMPENSATION

## Figure 4-194. IEP\_TMR\_COMPEN Register

| 31       | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------|------------------------------------------------------------------------------------|
| RESERVED | COMPEN_CNT                                                                         |
| R-0h     | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-182. IEP\_TMR\_COMPEN Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                     |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                 |
| 23-0  | COMPEN_CNT | R/W    | 0h      | Compensation counter. Read returns the current compen_cnt value. 0: Compensation is disabled and counter will increment by DEFAULT_INC. n: Compensation is enabled until COMPEN_CNT decrements to 0. The COMPEN_CNT value decrements on every iep_clk/ocp_clk cycle. When COMPEN_CNT is greater than 0, then count value increments by CMP_INC. |

## 4.5.4.4 IEP\_TMR\_CNT Register (offset = Ch) [reset = 0h]

IEP\_TMR\_CNT is shown in Figure 4-195 and described in Table 4-183.

COUNT is a free running counter with a sticky over flag status bit. The counter overflow flag is set when the counter switches or rolls over from 0xffff\_ffff -&gt; 0x0000\_0000 and continues to count up. The software must read and clear the counter overflow flag, and increment the MSB in software variable.

## Figure 4-195. IEP\_TMR\_CNT Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 COUNT   |
|------|---------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-183. IEP\_TMR\_CNT Register Field Descriptions

| Bit   | Field   | Type      | Reset   | Description                                                                                                       |
|-------|---------|-----------|---------|-------------------------------------------------------------------------------------------------------------------|
| 31-0  | COUNT   | R/W1toClr | 0h      | 32-bit count value. Increments by (DEFAULT_INC or CMP_INC) on every positive edge of iep_clk (200MHz) or ocp_clk. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.5 IEP\_TMR\_CAP\_CFG Register (offset = 10h) [reset = 1FC00h]

IEP\_TMR\_CAP\_CFG is shown in Figure 4-196 and described in Table 4-184. CAPTURE CONFIGURE

## Figure 4-196. IEP\_TMR\_CAP\_CFG Register

| 31       | 30                  | 29                   | 28                  | 27                  | 26                      | 25                      | 24       |
|----------|---------------------|----------------------|---------------------|---------------------|-------------------------|-------------------------|----------|
| RESERVED | RESERVED            | RESERVED             | RESERVED            | RESERVED            | RESERVED                | RESERVED                | RESERVED |
| 22       | 22                  | 22                   | 22                  | 22                  | 22                      | 22                      | 22       |
| 21       | 20                  | 19 R/W-0h            | 23 18 15            | 17                  | 16 CAP_ASYNC_EN R/W-7Fh | RESERVED                | 14       |
| 13       | 13                  | 13                   | 13                  | 13                  | 13                      | 12                      | 12       |
| 11       | 11                  | 11                   | 11                  | 11                  | 11                      | 10                      | 10       |
| 9        | 8                   | CAP_ASYNC_EN R/W-7Fh | CAP7F_1ST_E VENT_EN | CAP7R_1ST_E VENT_EN | R/W-0h                  | R/W-0h                  | 7        |
|          |                     | 6                    | 6                   | 6                   | 6                       | 5                       | 4        |
| 3        | 3                   | 3                    | 3                   | 3                   | 3                       | 2                       | 1        |
| 0        | CAP6F_1ST_E VENT_EN | CAP6R_1ST_E VENT_EN  | R/W-0h              | R/W-0h              |                         | CAP_1ST_EVENT_EN R/W-0h |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-184. IEP\_TMR\_CAP\_CFG Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                         |
|-------|--------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED           | R/W    | 0h      |                                                                                                                                                                                                                                                                                                                     |
| 17-10 | CAP_ASYNC_EN       | R/W    | FFh     | Synchronization of the capture inputs to the iep_clk/ocp_clk enable. Note if input capture signal is asynchronous to iep_clk, enabling synchronization will cause the capture contents to be invalid. CAP_ASYNC_EN[n] maps to CAPR[n]. 0: Disable synchronization 1: Enable synchronization                         |
| 9     | CAP7F_1ST_EVENT_EN | R/W    | 0h      | Capture 1st Event Enable for CAPF7 0: Continues mode. The capture status is not set when events occur. 1: First Event mode. The capture status is set when the first event occurs and must be cleared before new data will fill buffer. Time value is captured when first event occurs and held until time is read. |
| 8     | CAP7R_1ST_EVENT_EN | R/W    | 0h      | Capture 1st Event Enable for CAPR7 0: Continues mode. The capture status is not set when events occur. 1: First Event mode. The capture status is set when the first event occurs and must be cleared before new data will fill buffer. Time value is captured when first event occurs and held until time is read. |
| 7     | CAP6F_1ST_EVENT_EN | R/W    | 0h      | Capture 1st Event Enable for CAPF6 0: Continues mode. The capture status is not set when events occur. 1: First Event mode. The capture status is set when the first event occurs and must be cleared before new data will fill buffer. Time value is captured when first event occurs and held until time is read. |

<!-- image -->

## Table 4-184. IEP\_TMR\_CAP\_CFG Register Field Descriptions (continued)

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                  |
|-------|--------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6     | CAP6R_1ST_EVENT_EN | R/W    | 0h      | Capture 1st Event Enable for CAPR6 0: Continues mode. The capture status is not set when events occur. 1: First Event mode. The capture status is set when the first event occurs and must be cleared before new data will fill buffer. Time value is captured when first event occurs and held until time is read.                                                          |
| 5-0   | CAP_1ST_EVENT_EN   | R/W    | 0h      | Capture 1st Event Enable for registers. CAP_1ST_EVENT_EN[n] maps to CAPR[n], where n = 0-5. 0: Continues mode. The capture status is not set when events occur. 1: First Event mode. The capture status is set when the first event occurs and must be cleared before new data will fill buffer. Time value is captured when first event occurs and held until time is read. |

<!-- image -->

## 4.5.4.6 IEP\_TMR\_CAP\_STS Register (offset = 14h) [reset = 0h]

IEP\_TMR\_CAP\_STS is shown in Figure 4-197 and described in Table 4-185.

CAPTURE STATUS CONFIGURE. Note: Capture will always occur as long as it is enabled, if enabled the user cannot tell if 2 events occurred.

Figure 4-197. IEP\_TMR\_CAP\_STS Register

| 31          | 30          | 29       | 28       | 27         | 26        | 25          | 24          |
|-------------|-------------|----------|----------|------------|-----------|-------------|-------------|
| RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED   | RESERVED  | RESERVED    | RESERVED    |
| R-X         | R-X         | R-X      | R-X      | R-X        | R-X       | R-X         | R-X         |
| 23          | 22          | 21       | 20       | 19         | 18        | 17          | 16          |
| CAP_RAW     | CAP_RAW     | CAP_RAW  | CAP_RAW  | CAP_RAW    | CAP_RAW   | CAP_RAW     | CAP_RAW     |
| R-X         | R-X         | R-X      | R-X      | R-X        | R-X       | R-X         | R-X         |
| 15          | 14          | 13       | 12       | 11         | 10        | 9           | 8           |
| RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED   | CAP_VALID | CAPF7_VALID | CAPR7_VALID |
| R-X         | R-X         | R-X      | R-X      | R-X        | R-0h      | RtoClr-0h   | RtoClr-0h   |
| 7           | 6           | 5        | 4        | 3          | 2         | 1           | 0           |
| CAPF6_VALID | CAPR6_VALID |          |          | CAPR_VALID |           |             |             |
| RtoClr-0h   | RtoClr-0h   |          |          | RtoClr-0h  |           |             |             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-185. IEP\_TMR\_CAP\_STS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                        |
|-------|-------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED    | R      | X       |                                                                                                                                                                                                                                                                                    |
| 23-16 | CAP_RAW     | R      | X       | Raw/Current status bit for each of the capture registers, where CAP_RAW[n] maps to CAPR[n]. 0: Current state is low 1: Current state is high                                                                                                                                       |
| 15-11 | RESERVED    | R      | X       |                                                                                                                                                                                                                                                                                    |
| 10    | CAP_VALID   | R      | 0h      | Valid status for capture function. Reflects the ORed result from CAP_STATUS [9:0]. 0: No Hit for any capture event, i.e., there are all 0 in CAP_STATUS [9:0]. 1: Hit for 1 or more captures events is pending, i.e., there has at least one value equal to 1 in CAP_STATUS [9:0]. |
| 9     | CAPF7_VALID | RtoClr | 0h      | Valid status for CAPF7 (fall). 0: No Hit, no capture event occurred 1: Hit, capture event occurred                                                                                                                                                                                 |
| 8     | CAPR7_VALID | RtoClr | 0h      | Valid status for CAPR7 (rise). 0: No Hit, no capture event occurred 1: Hit, capture event occurred                                                                                                                                                                                 |
| 7     | CAPF6_VALID | RtoClr | 0h      | Valid status for CAPF6 (fall). 0: No Hit, no capture event occurred 1: Hit, capture event occurred                                                                                                                                                                                 |
| 6     | CAPR6_VALID | RtoClr | 0h      | Valid status for CAPR6 (rise). 0: No Hit, no capture event occurred 1: Hit, capture event occurred                                                                                                                                                                                 |
| 5-0   | CAPR_VALID  | RtoClr | 0h      | Valid status bit for each compare register, where CAPR_VALID[n] maps to CAPR[n] (rise), where n = 0-5. 0: No Hit, no capture event occurred 1: Hit, capture event occurred                                                                                                         |

## 4.5.4.7 IEP\_TMR\_CAPR0 Register (offset = 18h) [reset = 0h]

IEP\_TMR\_CAPR0 is shown in Figure 4-198 and described in Table 4-186. CAPTURE RISE0

## Figure 4-198. IEP\_TMR\_CAPR0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR0                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-186. IEP\_TMR\_CAPR0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR0   | R      | 0h      | Value captured for CAPR0 event |

<!-- image -->

<!-- image -->

## 4.5.4.8 IEP\_TMR\_CAPR1 Register (offset = 1Ch) [reset = 0h]

IEP\_TMR\_CAPR1 is shown in Figure 4-199 and described in Table 4-187. CAPTURE RISE1

## Figure 4-199. IEP\_TMR\_CAPR1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR1                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-187. IEP\_TMR\_CAPR1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR1   | R      | 0h      | Value captured for CAPR1 event |

## 4.5.4.9 IEP\_TMR\_CAPR2 Register (offset = 20h) [reset = 0h]

IEP\_TMR\_CAPR2 is shown in Figure 4-200 and described in Table 4-188. CAPTURE RISE2

## Figure 4-200. IEP\_TMR\_CAPR2 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR2                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-188. IEP\_TMR\_CAPR2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR2   | R      | 0h      | Value captured for CAPR2 event |

<!-- image -->

<!-- image -->

## 4.5.4.10 IEP\_TMR\_CAPR3 Register (offset = 24h) [reset = 0h]

IEP\_TMR\_CAPR3 is shown in Figure 4-201 and described in Table 4-189. CAPTURE RISE3

## Figure 4-201. IEP\_TMR\_CAPR3 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR3                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-189. IEP\_TMR\_CAPR3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR3   | R      | 0h      | Value captured for CAPR3 event |

## 4.5.4.11 IEP\_TMR\_CAPR4 Register (offset = 28h) [reset = 0h]

IEP\_TMR\_CAPR4 is shown in Figure 4-202 and described in Table 4-190. CAPTURE RISE4

## Figure 4-202. IEP\_TMR\_CAPR4 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR4                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-190. IEP\_TMR\_CAPR4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR4   | R      | 0h      | Value captured for CAPR4 event |

<!-- image -->

<!-- image -->

## 4.5.4.12 IEP\_TMR\_CAPR5 Register (offset = 2Ch) [reset = 0h]

IEP\_TMR\_CAPR5 is shown in Figure 4-203 and described in Table 4-191. CAPTURE RISE5

## Figure 4-203. IEP\_TMR\_CAPR5 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR5                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-191. IEP\_TMR\_CAPR5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR5   | R      | 0h      | Value captured for CAPR5 event |

## 4.5.4.13 IEP\_TMR\_CAPR6 Register (offset = 30h) [reset = 0h]

IEP\_TMR\_CAPR6 is shown in Figure 4-204 and described in Table 4-192. CAPTURE RISE6

## Figure 4-204. IEP\_TMR\_CAPR6 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR6                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-192. IEP\_TMR\_CAPR6 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR6   | R      | 0h      | Value captured for CAPR6 event |

<!-- image -->

<!-- image -->

## 4.5.4.14 IEP\_TMR\_CAPF6 Register (offset = 34h) [reset = 0h]

IEP\_TMR\_CAPF6 is shown in Figure 4-205 and described in Table 4-193. CAPTURE FALL6

## Figure 4-205. IEP\_TMR\_CAPF6 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPF6                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-193. IEP\_TMR\_CAPF6 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPF6   | R      | 0h      | Value captured for CAPF6 event |

## 4.5.4.15 IEP\_TMR\_CAPR7 Register (offset = 38h) [reset = 0h]

IEP\_TMR\_CAPR7 is shown in Figure 4-206 and described in Table 4-194. CAPTURE RISE7

## Figure 4-206. IEP\_TMR\_CAPR7 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPR7                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-194. IEP\_TMR\_CAPR7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPR7   | R      | 0h      | Value captured for CAPR7 event |

<!-- image -->

<!-- image -->

## 4.5.4.16 IEP\_TMR\_CAPF7 Register (offset = 3Ch) [reset = 0h]

IEP\_TMR\_CAPF7 is shown in Figure 4-207 and described in Table 4-195. CAPTURE FALL7

## Figure 4-207. IEP\_TMR\_CAPF7 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | CAPF7                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-195. IEP\_TMR\_CAPF7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                    |
|-------|---------|--------|---------|--------------------------------|
| 31-0  | CAPF7   | R      | 0h      | Value captured for CAPF7 event |

## 4.5.4.17 IEP\_TMR\_CMP\_CFG Register (offset = 40h) [reset = 0h]

IEP\_TMR\_CMP\_CFG is shown in Figure 4-208 and described in Table 4-196. COMPARE CONFIGURE

## Figure 4-208. IEP\_TMR\_CMP\_CFG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24               |
|----------|----------|----------|----------|----------|----------|----------|------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h             |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16               |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h             |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8                |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | CMP_EN           |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h           |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0                |
| CMP_EN   | CMP_EN   | CMP_EN   | CMP_EN   | CMP_EN   | CMP_EN   | CMP_EN   | CMP0_RST_C NT_EN |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-196. IEP\_TMR\_CMP\_CFG Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                  |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------|
| 31-9  | RESERVED        | R      | 0h      |                                                                                              |
| 8-1   | CMP_EN          | R/W    | 0h      | Compare registers enable, where CMP_EN[0] maps to CMP[0]. 0: Disables event 1: Enables event |
| 0     | CMP0_RST_CNT_EN | R/W    | 0h      | Counter reset enable. 0: Disable 1: Enable the reset of the counter if a CMP0 event occurs   |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.18 IEP\_TMR\_CMP\_STS Register (offset = 44h) [reset = 0h]

IEP\_TMR\_CMP\_STS is shown in Figure 4-209 and described in Table 4-197. COMPARE STATUS

## Figure 4-209. IEP\_TMR\_CMP\_STS Register

| 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|------------------------------------------------------------------------------|
| CMP_HIT                                                                      |
| R-0h R/W1toClr-0h                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-197. IEP\_TMR\_CMP\_STS Register Field Descriptions

| Bit   | Field    | Type      | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                          |
|-------|----------|-----------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R         | 0h      |                                                                                                                                                                                                                                                                                                                                                                                      |
| 7-0   | CMP_HIT  | R/W1toClr | 0h      | Status bit for each of the compare registers, where CMP_HIT[n] maps to CMP[n]. "Match" indicates the current counter is greater than or equal to the compare value. Note it is the firmware's responsibility to handle the IEP overflow. 0: Match has not occurred. 1: Match occurred. The associated hardware event signal will assert and remain high until the status is cleared. |

## 4.5.4.19 IEP\_TMR\_CMP0 Register (offset = 48h) [reset = 0h]

IEP\_TMR\_CMP0 is shown in Figure 4-210 and described in Table 4-198. COMPARE0

## Figure 4-210. IEP\_TMR\_CMP0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|-----------------------------------------------------------------------------------|
|      | CMP0                                                                              |
|      | R/W-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-198. IEP\_TMR\_CMP0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP0    | R/W    | 0h      | Compare 0 value |

<!-- image -->

<!-- image -->

## 4.5.4.20 IEP\_TMR\_CMP1 Register (offset = 4Ch) [reset = 0h]

IEP\_TMR\_CMP1 is shown in Figure 4-211 and described in Table 4-199. COMPARE1

## Figure 4-211. IEP\_TMR\_CMP1 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 CMP1   |
|------|-------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-199. IEP\_TMR\_CMP1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP1    | R/W    | 0h      | Compare 1 value |

## 4.5.4.21 IEP\_TMR\_CMP2 Register (offset = 50h) [reset = 0h]

IEP\_TMR\_CMP2 is shown in Figure 4-212 and described in Table 4-200. COMPARE2

## Figure 4-212. IEP\_TMR\_CMP2 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 CMP2   |
|------|-------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-200. IEP\_TMR\_CMP2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP2    | R/W    | 0h      | Compare 2 value |

<!-- image -->

<!-- image -->

## 4.5.4.22 IEP\_TMR\_CMP3 Register (offset = 54h) [reset = 0h]

IEP\_TMR\_CMP3 is shown in Figure 4-213 and described in Table 4-201. COMPARE3

## Figure 4-213. IEP\_TMR\_CMP3 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------|
|      | CMP3                                                                           |
|      | R/W-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-201. IEP\_TMR\_CMP3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP3    | R/W    | 0h      | Compare 3 value |

## 4.5.4.23 IEP\_TMR\_CMP4 Register (offset = 58h) [reset = 0h]

IEP\_TMR\_CMP4 is shown in Figure 4-214 and described in Table 4-202. COMPARE4

## Figure 4-214. IEP\_TMR\_CMP4 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 CMP4   |
|------|-------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-202. IEP\_TMR\_CMP4 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP4    | R/W    | 0h      | Compare 4 value |

<!-- image -->

<!-- image -->

## 4.5.4.24 IEP\_TMR\_CMP5 Register (offset = 5Ch) [reset = 0h]

IEP\_TMR\_CMP5 is shown in Figure 4-215 and described in Table 4-203. COMPARE5

## Figure 4-215. IEP\_TMR\_CMP5 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 CMP5   |
|------|-------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-203. IEP\_TMR\_CMP5 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP5    | R/W    | 0h      | Compare 5 value |

## 4.5.4.25 IEP\_TMR\_CMP6 Register (offset = 60h) [reset = 0h]

IEP\_TMR\_CMP6 is shown in Figure 4-216 and described in Table 4-204. COMPARE6

## Figure 4-216. IEP\_TMR\_CMP6 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0   |
|------|--------------------------------------------------------------------------------|
|      | CMP6                                                                           |
|      | R/W-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-204. IEP\_TMR\_CMP6 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP6    | R/W    | 0h      | Compare 6 value |

<!-- image -->

<!-- image -->

## 4.5.4.26 IEP\_TMR\_CMP7 Register (offset = 64h) [reset = 0h]

IEP\_TMR\_CMP7 is shown in Figure 4-217 and described in Table 4-205. COMPARE7

## Figure 4-217. IEP\_TMR\_CMP7 Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 CMP7   |
|------|-------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-205. IEP\_TMR\_CMP7 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description     |
|-------|---------|--------|---------|-----------------|
| 31-0  | CMP7    | R/W    | 0h      | Compare 7 value |

## 4.5.4.27 IEP\_TMR\_RXIPG0 Register (offset = 80h) [reset = FFFF0000h]

IEP\_TMR\_RXIPG0 is shown in Figure 4-218 and described in Table 4-206. RX InterPackage Gap (IPG) 0

## Figure 4-218. IEP\_TMR\_RXIPG0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RX_MIN_IPG                                                                            | RX_IPG                                                                                |
| R/WtoReset-FFFFh                                                                      | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-206. IEP\_TMR\_RXIPG0 Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                           |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RX_MIN_IPG | R/WtoReset | FFFFh   | Defines the minimum number of iep_clk/ocp_clk cycles that is RX_DV is sampled low. It stores the smallest RX_IPG duration. It can be read at any time and gets updated after RX_IPG is updated, if RX_MIN_IPG is greater than RX_IPG. |
| 15-0  | RX_IPG     | R          | 0h      | Records the current number of iep_clk/ocp_clk cycles RX_DV is sampled low. Value is updated after RX_DV transitions from low to high. It will saturate at 0xffff.                                                                     |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.28 IEP\_TMR\_RXIPG1 Register (offset = 84h) [reset = FFFF0000h]

IEP\_TMR\_RXIPG1 is shown in Figure 4-219 and described in Table 4-207. RX InterPackage Gap (IPG) 1

## Figure 4-219. IEP\_TMR\_RXIPG1 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RX_MIN_IPG                                                                            | RX_IPG                                                                                |
| R/WtoReset-FFFFh                                                                      | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-207. IEP\_TMR\_RXIPG1 Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                           |
|-------|------------|------------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RX_MIN_IPG | R/WtoReset | FFFFh   | Defines the minimum number of iep_clk/ocp_clk cycles that is RX_DV is sampled low. It stores the smallest RX_IPG duration. It can be read at any time and gets updated after RX_IPG is updated, if RX_MIN_IPG is greater than RX_IPG. |
| 15-0  | RX_IPG     | R          | 0h      | Records the current number of iep_clk/ocp_clk cycles RX_DV is sampled low. Value is updated after RX_DV transitions from low to high. It will saturate at 0xffff.                                                                     |

## 4.5.4.29 IEP\_SYNC\_CTRL Register (Offset = 100h) [reset = 0h]

IEP\_SYNC\_CTRL is shown in Figure 4-220 and described in Table 4-208. SYNC GENERATION CONTROL

Figure 4-220. IEP\_SYNC\_CTRL Register

| 31               | 30            | 29               | 28            | 27          | 26          | 25          | 24            |
|------------------|---------------|------------------|---------------|-------------|-------------|-------------|---------------|
| RESERVED         | RESERVED      | RESERVED         | RESERVED      | RESERVED    | RESERVED    | RESERVED    | RESERVED      |
| R-0h             | R-0h          | R-0h             | R-0h          | R-0h        | R-0h        | R-0h        | R-0h          |
| 23               | 22            | 21               | 20            | 19          | 18          | 17          | 16            |
| RESERVED         | RESERVED      | RESERVED         | RESERVED      | RESERVED    | RESERVED    | RESERVED    | RESERVED      |
| R-0h             | R-0h          | R-0h             | R-0h          | R-0h        | R-0h        | R-0h        | R-0h          |
| 15               | 14            | 13               | 12            | 11          | 10          | 9           | 8             |
| RESERVED         | RESERVED      | RESERVED         | RESERVED      | RESERVED    | RESERVED    | RESERVED    | SYNC1_IND_E N |
| R-0h R/W-0h      | R-0h R/W-0h   | R-0h R/W-0h      | R-0h R/W-0h   | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h   |
| 7                | 6             | 5                | 4             | 3           | 2           | 1           | 0             |
| SYNC1_CYCLI C_EN | SYNC1_ACK_ EN | SYNC0_CYCLI C_EN | SYNC0_ACK_ EN | RESERVED    | SYNC1_EN    | SYNC0_EN    | SYNC_EN       |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h        | R-0h        | R/W-0h      | R/W-0h      | R/W-0h        |

Table 4-208. IEP\_SYNC\_CTRL Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                         |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED        | R      | 0h      |                                                                                                                                                                                                                     |
| 8     | SYNC1_IND_EN    | R/W    | 0h      | SYNC1 independent mode enable. Independent mode means the SYNC1 signal can be different from SYNC0. 0: Dependent mode 1: Independent mode                                                                           |
| 7     | SYNC1_CYCLIC_EN | R/W    | 0h      | SYNC1 single shot or cyclic/auto generation mode enable 0: Disable, single shot mode 1: Enable, cyclic generation mode                                                                                              |
| 6     | SYNC1_ACK_EN    | R/W    | 0h      | SYNC1 acknowledgement mode enable 0: Disable, SYNC1 will go low after pulse width is met. 1: Enable, SYNC1 will remain asserted until receiving software acknowledges by reading SYNC1_STATUS which clears on read. |
| 5     | SYNC0_CYCLIC_EN | R/W    | 0h      | SYNC0 single shot or cyclic/auto generation mode enable 0: Disable, single shot mode 1: Enable, cyclic generation mode                                                                                              |
| 4     | SYNC0_ACK_EN    | R/W    | 0h      | SYNC0 acknowledgement mode enable 0: Disable, SYNC0 will go low after pulse width is met. 1: Enable, SYNC0 will remain asserted until receiving software acknowledges by reading SYNC1_STATUS which clears on read. |
| 3     | RESERVED        | R      | 0h      |                                                                                                                                                                                                                     |
| 2     | SYNC1_EN        | R/W    | 0h      | SYNC1 generation enable 0: Disable 1: Enable                                                                                                                                                                        |
| 1     | SYNC0_EN        | R/W    | 0h      | SYNC0 generation enable 0: Disable 1: Enable                                                                                                                                                                        |

<!-- image -->

<!-- image -->

## Table 4-208. IEP\_SYNC\_CTRL Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                  |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------|
|     0 | SYNC_EN | R/W    | 0h      | SYNC generation enable 0: Disable the generation and clocking of SYNC0 and SYNC1 logic 1: Enables SYNC0 and SYNC1 generation |

## 4.5.4.30 IEP\_SYNC\_FIRST\_STAT Register (Offset = 104h) [reset = 0h]

IEP\_SYNC\_FIRST\_STAT is shown in Figure 4-221 and described in Table 4-209. SYNC GENERATION FIRST EVENT STATUS

## Figure 4-221. IEP\_SYNC\_FIRST\_STAT Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | FIRST_SYNC1 | FIRST_SYNC0 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        |

## Table 4-209. IEP\_SYNC\_FIRST\_STAT Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                  |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------|
| 31-2  | RESERVED    | R      | 0h      |                                                                                              |
| 1     | FIRST_SYNC1 | R      | 0h      | SYNC1 First Event status. This bit is cleared when SYNC1_EN = 0. 0: Not occurred 1: Occurred |
| 0     | FIRST_SYNC0 | R      | 0h      | SYNC0 First Event status. This bit is cleared when SYNC0_EN = 0. 0: Not occurred 1: Occurred |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.31 IEP\_SYNC0\_STAT Register (Offset = 108h) [reset = 0h]

IEP\_SYNC0\_STAT is shown in Figure 4-222 and described in Table 4-210. SYNC0 STATUS

## Figure 4-222. IEP\_SYNC0\_STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24         |
|----------|----------|----------|----------|----------|----------|----------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | SYNC0_PEND |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1C-0h   |

## Table 4-210. IEP\_SYNC0\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED   | R      | 0h      |                                                                                                                |
| 0     | SYNC0_PEND | R/W1C  | 0h      | SYNC0 pending state. 0: Not pending 1: Pending or the SYNC0_PEND has occurred when SYNC0_ACK_EN = 0 (Disable). |

## 4.5.4.32 IEP\_SYNC1\_STAT Register (Offset = 10Ch) [reset = 0h]

IEP\_SYNC1\_STAT is shown in Figure 4-223 and described in Table 4-211. SYNC1 STATUS

## Figure 4-223. IEP\_SYNC1\_STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24         |
|----------|----------|----------|----------|----------|----------|----------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | SYNC1_PEND |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W1C-0h   |

## Table 4-211. IEP\_SYNC1\_STAT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED   | R      | 0h      |                                                                                                                |
| 0     | SYNC1_PEND | R/W1C  | 0h      | SYNC1 pending state. 0: Not pending 1: Pending or the SYNC1_PEND has occurred when SYNC1_ACK_EN = 0 (Disable). |

<!-- image -->

<!-- image -->

## 4.5.4.33 IEP\_SYNC\_PWIDTH Register (Offset = 110h) [reset = 0h]

IEP\_SYNC\_PWIDTH is shown in Figure 4-224 and described in Table 4-212. SYNC PULSE WIDTH CONFIGURE

## Figure 4-224. IEP\_SYNC\_PWIDTH Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNC_HPW   |
|------|---------------------------------------------------------------------------------------------|

## Table 4-212. IEP\_SYNC\_PWIDTH Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SYNC_HPW | R/W    | 0h      | Defines the number of clock cycles SYNC0/1 will be high. Note if SYNC0/1 is disabled during pulse width time (that is, SYNC_CTRL[SYNC0_EN | SYNC1_EN | SYNC_EN] = 0), the ongoing pulse will be terminated. 0: 1 clock cycle. 1: 2 clock cycles. N: N+1 clock cycles. |

## 4.5.4.34 IEP\_SYNC0\_PERIOD Register (Offset = 114h) [reset = 1h]

IEP\_SYNC0\_PERIOD is shown in Figure 4-225 and described in Table 4-213. SYNC PERIOD CONFIGURE

## Figure 4-225. IEP\_SYNC0\_PERIOD Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNC0_PERIOD   |
|------|-------------------------------------------------------------------------------------------------|

## Table 4-213. IEP\_SYNC0\_PERIOD Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                              |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SYNC0_PERIOD | R/W    | 1h      | Defines the period between the rising edges of SYNC0. 0: reserved. 1: 2 clock cycles period. N: N+1 clock cycles period. |

<!-- image -->

<!-- image -->

## 4.5.4.35 IEP\_SYNC1\_DELAY Register (Offset = 118h) [reset = 0h]

IEP\_SYNC1\_DELAY is shown in Figure 4-226 and described in Table 4-214. SYNC CTRL

## Figure 4-226. IEP\_SYNC1\_DELAY Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNC1_DELAY   |
|---------|---------------------------------------------------------------------------------------------|

## Table 4-214. IEP\_SYNC1\_DELAY Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SYNC1_DELAY | R/W    | 0h      | When SYNC1_IND_EN = 0, defines number of clock cycles from the start of SYNC0 to the start of SYNC1. Note this is the delay before the start of SYNC1. 0: No delay. 1: 1 clock cycle delay. N: N clock cycles delay. When SYNC1_IND_EN = 1, defines the period between the rising edges of SYNC1. 0: reserved. 1: 2 clock cycles period. N: N+1 clock cycles period. |

## 4.5.4.36 IEP\_SYNC\_START Register (Offset = 11Ch) [reset = 0h]

IEP\_SYNC\_START is shown in Figure 4-227 and described in Table 4-215. SYNC START CONFIGURE

## Figure 4-227. IEP\_SYNC\_START Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SYNC_START   |
|------|-----------------------------------------------------------------------------------------------|

## Table 4-215. IEP\_SYNC\_START Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                    |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SYNC_START | R/W    | 0h      | Defines the start time after the activation event. 0: 1 clock cycle delay. 1: 2 clock cycles delay. N: N+1 clock cycles delay. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.37 IEP\_WD\_PREDIV Register (offset = 200h) [reset = 4E20h]

IEP\_WD\_PREDIV is shown in Figure 4-228 and described in Table 4-216. WATCHDOG PRE-DIVIDER

## Figure 4-228. IEP\_WD\_PREDIV Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| Reserved       | Reserved       | Reserved       | Reserved       | Reserved       | Reserved       | Reserved       | Reserved       |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| Reserved       | Reserved       | Reserved       | Reserved       | Reserved       | Reserved       | Reserved       | Reserved       |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        |
| R/WtoClr-4E20h | R/WtoClr-4E20h | R/WtoClr-4E20h | R/WtoClr-4E20h | R/WtoClr-4E20h | R/WtoClr-4E20h | R/WtoClr-4E20h | R/WtoClr-4E20h |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        | PRE_DIV        |

R/WtoClr-4E20h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-216. IEP\_WD\_PREDIV Register Field Descriptions

| Bit   | Field    | Type     | Reset   | Description                                                                                                                                                                                                                                                                                        |
|-------|----------|----------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved | R        | 0h      |                                                                                                                                                                                                                                                                                                    |
| 15-0  | PRE_DIV  | R/WtoClr | 4E20h   | Defines the number of iep_clk cycles per WD clock event. Note that the WD clock is a free-running clock. The value 0x4e20 (or 20000) generates a rate of 100 us if iep_clk is 200 MHz. seconds/(WD event) = (clock cycles per WD event)/(clock cycles per second) = 20000/(200 x [10]^6 ) = 100 us |

## 4.5.4.38 IEP\_PDI\_WD\_TIM Register (offset = 204h) [reset = 3E8h]

IEP\_PDI\_WD\_TIM is shown in Figure 4-229 and described in Table 4-217. PDI WATCHDOG TIMER CONFIGURE

| Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   | Figure 4-229. IEP_PDI_WD_TIM Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             |
| R/WtoReset-3E8h                         | R/WtoReset-3E8h                         | R/WtoReset-3E8h                         | R/WtoReset-3E8h                         | R/WtoReset-3E8h                         | R/WtoReset-3E8h                         | R/WtoReset-3E8h                         | R/WtoReset-3E8h                         |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             | PDI_WD_TIME                             |

R/WtoReset-3E8h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-217. IEP\_PDI\_WD\_TIM Register Field Descriptions

| Bit   | Field       | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|-------------|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved    | R          | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 15-0  | PDI_WD_TIME | R/WtoReset | 3E8h    | Defines the number of WD ticks (or increments) for PDI WD, that is, the number of WD increments. If PRE_DIV is set to 100 us, then the value 0x03e8 (or 1000) provides a rate of 100ms. Read returns the current count. Counter is reset by software write to register or when Digital Data In capture occurs. WD is disabled if WD time is set to 0x0. Note when an expiration event occurs, the expiration counter (PDI_EXP_CNT) increments and status (PDI_WD_STAT) clears. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.39 IEP\_PD\_WD\_TIM Register (offset = 208h) [reset = 3E8h]

IEP\_PD\_WD\_TIM is shown in Figure 4-230 and described in Table 4-218. PD WATCHDOG TIMER CONFIGURE

| Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   | Figure 4-230. IEP_PD_WD_TIM Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             |
| R/WtoReset-3E8h                        | R/WtoReset-3E8h                        | R/WtoReset-3E8h                        | R/WtoReset-3E8h                        | R/WtoReset-3E8h                        | R/WtoReset-3E8h                        | R/WtoReset-3E8h                        | R/WtoReset-3E8h                        |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
| PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             | PD_WD_TIME                             |

R/WtoReset-3E8h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-218. IEP\_PD\_WD\_TIM Register Field Descriptions

| Bit   | Field      | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved   | R          | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 15-0  | PD_WD_TIME | R/WtoReset | 3E8h    | Defines the number of WD ticks (or increments) for PD WD, that is, the number of WD increments. If PRE_DIV is set to 100 us, then 0x03e8 (or 1000) provides a rate of 100ms. Read returns the current count. Counter is reset by software write to register. WD is restarted with every write access to Sync Managers with WD trigger enable bit set. WD is disabled if WD time is set to 0x0. Expiration actions: Increment expiration counter, clear status. Digital Data out forced to zero if pr1_edio_oe_ext = 1 and DIGIO_EXT.SW_DATA_OUT_UPDATE = 0. |

## 4.5.4.40 IEP\_WD\_STATUS Register (offset = 20Ch) [reset = 10001h]

IEP\_WD\_STATUS is shown in Figure 4-231 and described in Table 4-219. WATCHDOG STATUS

| Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   | Figure 4-231. IEP_WD_STATUS Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | PDI_WD_STAT                            |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-1h                                   |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | PD_WD_STAT                             |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-219. IEP\_WD\_STATUS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-17 | Reserved    | R      | 0h      |                                                                                                                                                                            |
| 16    | PDI_WD_STAT | R      | 1h      | WD PDI status. 0: Expired (PDI_WD_EXP event generated) 1: Active or disabled                                                                                               |
| 15-1  | Reserved    | R      | 0h      |                                                                                                                                                                            |
| 0     | PD_WD_STAT  | R      | 1h      | WD PD status (triggered by Sync Mangers status). Note reading this register clears application event request. 0: Expired (PD_WD_EXP event generated) 1: Active or disabled |

<!-- image -->

R-1h

<!-- image -->

## 4.5.4.41 IEP\_WD\_EXP\_CNT Register (offset = 210h) [reset = 0h]

IEP\_WD\_EXP\_CNT is shown in Figure 4-232 and described in Table 4-220.

WATCHDOG TIMER EXPIRATION COUNTER

| Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   | Figure 4-232. IEP_WD_EXP_CNT Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| PD_EXP_CNT                              | PD_EXP_CNT                              | PD_EXP_CNT                              | PD_EXP_CNT                              | PD_EXP_CNT                              | PD_EXP_CNT                              | PD_EXP_CNT                              | PD_EXP_CNT                              |
| R/WtoClr-0h                             | R/WtoClr-0h                             | R/WtoClr-0h                             | R/WtoClr-0h                             | R/WtoClr-0h                             | R/WtoClr-0h                             | R/WtoClr-0h                             | R/WtoClr-0h                             |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| PDI_EXP_CNT                             | PDI_EXP_CNT                             | PDI_EXP_CNT                             | PDI_EXP_CNT                             | PDI_EXP_CNT                             | PDI_EXP_CNT                             | PDI_EXP_CNT                             | PDI_EXP_CNT                             |

R/WtoClr-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-220. IEP\_WD\_EXP\_CNT Register Field Descriptions

| Bit   | Field       | Type     | Reset   | Description                                                                            |
|-------|-------------|----------|---------|----------------------------------------------------------------------------------------|
| 31-16 | Reserved    | R        | 0h      |                                                                                        |
| 15-8  | PD_EXP_CNT  | R/WtoClr | 0h      | WD PD expiration counter. Counter increments on every PD time out and stops at 0xff.   |
| 7-0   | PDI_EXP_CNT | R/WtoClr | 0h      | WD PDI expiration counter. Counter increments on every PDI time out and stops at 0xff. |

## 4.5.4.42 IEP\_WD\_CTRL Register (offset = 214h) [reset = 0h]

IEP\_WD\_CTRL is shown in Figure 4-233 and described in Table 4-221. WATCHDOG CONTROL

| Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   | Figure 4-233. IEP_WD_CTRL Register   |
|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|--------------------------------------|
| 31                                   | 30                                   | 29                                   | 28                                   | 27                                   | 26                                   | 25                                   | 24                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 23                                   | 22                                   | 21                                   | 20                                   | 19                                   | 18                                   | 17                                   | 16                                   |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | PDI_WD_EN                            |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R/W-0h                               |
| 15                                   | 14                                   | 13                                   | 12                                   | 11                                   | 10                                   | 9                                    | 8                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             |
| R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 | R-0h                                 |
| 7                                    | 6                                    | 5                                    | 4                                    | 3                                    | 2                                    | 1                                    | 0                                    |
| Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | Reserved                             | PD_WD_EN                             |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-221. IEP\_WD\_CTRL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                        |
|-------|-----------|--------|---------|------------------------------------|
| 31-17 | Reserved  | R      | 0h      |                                    |
| 16    | PDI_WD_EN | R/W    | 0h      | Enable WD PDI 0: Disable 1: Enable |
| 15-1  | Reserved  | R      | 0h      |                                    |
| 0     | PD_WD_EN  | R/W    | 0h      | Enable WD PD 0: Disable 1: Enable  |

<!-- image -->

R/W-0h

<!-- image -->

## 4.5.4.43 IEP\_DIGIO\_CTRL Register (offset = 300h) [reset = 4h]

IEP\_DIGIO\_CTRL is shown in Figure 4-234 and described in Table 4-222. DIGITAL INPUT OUTPUT CONTROL

Figure 4-234. IEP\_DIGIO\_CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26        | 25             | 24            |
|----------|----------|----------|----------|----------|-----------|----------------|---------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED       | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h           | R-0h          |
| 23       | 22       | 21       | 20       | 19       | 18        | 17             | 16            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED       | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h           | R-0h          |
| 15       | 14       | 13       | 12       | 11       | 10        | 9              | 8             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED       | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h           | R-0h          |
| 7        | 6        | 5        | 4        | 3        | 2         | 1              | 0             |
| OUT_MODE | OUT_MODE | IN_MODE  | IN_MODE  | WD_MODE  | BIDI_MODE | OUTVALID_M ODE | OUTVALID_PO L |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-1h      | R/W-0h         | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-222. IEP\_DIGIO\_CTRL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                            |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                        |
| 7-6   | OUT_MODE      | R/W    | 0h      | Defines event that triggers data out to be updated. Note if OUTVALID_MODE is set, then data out is forced to zero if a WD PD expiration occurs (PD_WD_EXP) from the WD block and pr1_edio_oe_ext = 1. 0: PRU0/1_RX_EOF 1: Reserved 2: DC SYNC0 event 3: DC SYNC1 event |
| 5-4   | IN_MODE       | R/W    | 0h      | Defines event that triggers data in to be sampled. 0: PRU0/1_RX_SOF 1: Rising edge of pr1_edio_latch_in 2: DC rising edge of SYNC0 event 3: DC rising edge of SYNC1 event                                                                                              |
| 3     | WD_MODE       | R/W    | 0h      | Defines watchdog behavior. 0: Outputs are reset immediately after watchdog expires 1: Outputs are reset with next output event that follows watchdog expiration                                                                                                        |
| 2     | BIDI_MODE     | R      | 1h      | Defines the digital input/output direction. 0: Unidirectional mode: digital input/output direction of pins configured individually 1: Bidirectional mode: all I/O pins are bidirectional and direction configuration is Ignored                                        |
| 1     | OUTVALID_MODE | R/W    | 0h      | Defines the outvalid mode behavior. 0: Output event signaling 1: Output data is updated if watchdog is triggered. Output data is forced to zero if PD_WD_EXP from the WD block and pr1_edio_oe_ext = 1                                                                 |
| 0     | OUTVALID_POL  | R      | 0h      | Defines outvalid polarity. 0: Active high 1: Active low                                                                                                                                                                                                                |

## 4.5.4.44 IEP\_DIGIO\_DATA\_IN Register (offset = 308h) [reset = 0h]

IEP\_DIGIO\_DATA\_IN is shown in Figure 4-235 and described in Table 4-223. DIGITAL DATA INPUT

## Figure 4-235. IEP\_DIGIO\_DATA\_IN Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | DATA_IN                                                                            |
|      | R-X                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-223. IEP\_DIGIO\_DATA\_IN Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DATA_IN | R      | X       | Data input. Digital inputs can be configured to be sampled in four ways. 1: Digital inputs are sampled at the start of each frame. The SOF signal can be used externally to update the input data, because the SOF is signaled before input data is sampled. 2: The sample time can be controlled externally by using the pr1_edio_latch_in signal. 3: Digital inputs are sampled at SYNC0 events. 4: Digital inputs are sampled at SYNC1 events. These can be configured by in_mode. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.45 IEP\_DIGIO\_DATA\_IN\_RAW Register (offset = 30Ch) [reset = 0h]

IEP\_DIGIO\_DATA\_IN\_RAW is shown in Figure 4-236 and described in Table 4-224. DIGITAL DATA INPUT DIRECT SAMPLE

## Figure 4-236. IEP\_DIGIO\_DATA\_IN\_RAW Register

| 31          | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|-------------|------------------------------------------------------------------------------------|
| DATA_IN_RAW | DATA_IN_RAW                                                                        |
| R-X         | R-X                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-224. IEP\_DIGIO\_DATA\_IN\_RAW Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                              |
|-------|-------------|--------|---------|----------------------------------------------------------|
| 31-0  | DATA_IN_RAW | R      | X       | Raw data input. Direct sample of pr1_edio_data_in[31:0]. |

## 4.5.4.46 IEP\_DIGIO\_DATA\_OUT Register (offset = 310h) [reset = 0h]

IEP\_DIGIO\_DATA\_OUT is shown in Figure 4-237 and described in Table 4-225. DIGITAL DATA OUTPUT

## Figure 4-237. IEP\_DIGIO\_DATA\_OUT Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | DATA_OUT                                                                           |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-225. IEP\_DIGIO\_DATA\_OUT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DATA_OUT | R/W    | 0h      | Data output. Digital outputs can be configured to be updated in four ways. 1: Digital outputs are updated at the end of each frame (EOF mode). 2: Digital outputs are updated with SYNC0 events 3: Digital outputs are updated SYNC1events. 4: Digital outputs are updated at the end of a frame which triggered the Process Data Watchdog. Digital Outputs are only updated if the frame was correct (WD_TRIG mode). These can be configured by out_mode. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.4.47 IEP\_DIGIO\_DATA\_OUT\_EN Register (offset = 314h) [reset = 0h]

IEP\_DIGIO\_DATA\_OUT\_EN is shown in Figure 4-238 and described in Table 4-226. DIGITAL DATA OUT ENABLE

## Figure 4-238. IEP\_DIGIO\_DATA\_OUT\_EN Register

| 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------------------------------------------------------------------------------|
| DATA_OUT_EN                                                                        |
| R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 4-226. IEP\_DIGIO\_DATA\_OUT\_EN Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                            |
|-------|-------------|--------|---------|--------------------------------------------------------|
| 31-0  | DATA_OUT_EN | R/W    | 0h      | Enables tri-state control for pr1_edio_data_out[31:0]. |