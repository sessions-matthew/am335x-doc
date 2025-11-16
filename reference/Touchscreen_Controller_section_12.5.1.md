## 12.5 Touchscreen Controller Registers

## 12.5.1 TSC\_ADC\_SS Registers

Table 12-4 lists the memory-mapped registers for the TSC\_ADC\_SS. All register offset addresses not listed in Table 12-4 should be considered as reserved locations and the register contents should not be modified.

Table 12-4. TSC\_ADC\_SS Registers

| Offset   | Acronym              | Section           | Section   |
|----------|----------------------|-------------------|-----------|
| 0h       | REVISION             | Section 12.5.1.1  |           |
| 10h      | SYSCONFIG            | Section 12.5.1.2  |           |
| 24h      | IRQSTATUS_RAW        | Section 12.5.1.3  |           |
| 28h      | IRQSTATUS            | Section 12.5.1.4  |           |
| 2Ch      | IRQENABLE_SET        | Section 12.5.1.5  |           |
| 30h      | IRQENABLE_CLR        | Section 12.5.1.6  |           |
| 34h      | IRQWAKEUP            | Section 12.5.1.7  |           |
| 38h      | DMAENABLE_SET        | Section 12.5.1.8  |           |
| 3Ch      | DMAENABLE_CLR        | Section 12.5.1.9  |           |
| 40h      | CTRL                 | Section 12.5.1.10 |           |
| 44h      | ADCSTAT              | Section 12.5.1.11 |           |
| 48h      | ADCRANGE             | Section 12.5.1.12 |           |
| 4Ch      | ADC_CLKDIV           | Section 12.5.1.13 |           |
| 50h      | ADC_MISC             | Section 12.5.1.14 |           |
| 54h      | STEPENABLE           | Section 12.5.1.15 |           |
| 58h      | IDLECONFIG           | Section 12.5.1.16 |           |
| 5Ch      | TS_CHARGE_STEPCONFIG | Section 12.5.1.17 |           |
| 60h      | TS_CHARGE_DELAY      | Section 12.5.1.18 |           |
| 64h      | STEPCONFIG1          | Section 12.5.1.19 |           |
| 68h      | STEPDELAY1           | Section 12.5.1.20 |           |
| 6Ch      | STEPCONFIG2          | Section 12.5.1.21 |           |
| 70h      | STEPDELAY2           | Section 12.5.1.22 |           |
| 74h      | STEPCONFIG3          | Section 12.5.1.23 |           |
| 78h      | STEPDELAY3           | Section 12.5.1.24 |           |
| 7Ch      | STEPCONFIG4          | Section 12.5.1.25 |           |
| 80h      | STEPDELAY4           | Section 12.5.1.26 |           |
| 84h      | STEPCONFIG5          | Section 12.5.1.27 |           |
| 88h      | STEPDELAY5           | Section 12.5.1.28 |           |
| 8Ch      | STEPCONFIG6          | Section 12.5.1.29 |           |
| 90h      | STEPDELAY6           | Section 12.5.1.30 |           |
| 94h      | STEPCONFIG7          | Section 12.5.1.31 |           |
| 98h      | STEPDELAY7           | Section 12.5.1.32 |           |
| 9Ch      | STEPCONFIG8          | Section 12.5.1.33 |           |
| A0h      | STEPDELAY8           | Section 12.5.1.34 |           |
| A4h      | STEPCONFIG9          | Section 12.5.1.35 |           |
| A8h      | STEPDELAY9           | Section 12.5.1.36 |           |
| ACh      | STEPCONFIG10         | Section 12.5.1.37 |           |
| B0h      | STEPDELAY10          | Section 12.5.1.38 |           |
| B4h      | STEPCONFIG11         | Section 12.5.1.39 |           |
| B8h      | STEPDELAY11          | Section 12.5.1.40 |           |
| BCh      | STEPCONFIG12         | Section 12.5.1.41 |           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-4. TSC\_ADC\_SS Registers (continued)

| Offset   | Acronym        | Register Name   | Section           |
|----------|----------------|-----------------|-------------------|
| C0h      | STEPDELAY12    |                 | Section 12.5.1.42 |
| C4h      | STEPCONFIG13   |                 | Section 12.5.1.43 |
| C8h      | STEPDELAY13    |                 | Section 12.5.1.44 |
| CCh      | STEPCONFIG14   |                 | Section 12.5.1.45 |
| D0h      | STEPDELAY14    |                 | Section 12.5.1.46 |
| D4h      | STEPCONFIG15   |                 | Section 12.5.1.47 |
| D8h      | STEPDELAY15    |                 | Section 12.5.1.48 |
| DCh      | STEPCONFIG16   |                 | Section 12.5.1.49 |
| E0h      | STEPDELAY16    |                 | Section 12.5.1.50 |
| E4h      | FIFO0COUNT     |                 | Section 12.5.1.51 |
| E8h      | FIFO0THRESHOLD |                 | Section 12.5.1.52 |
| ECh      | DMA0REQ        |                 | Section 12.5.1.53 |
| F0h      | FIFO1COUNT     |                 | Section 12.5.1.54 |
| F4h      | FIFO1THRESHOLD |                 | Section 12.5.1.55 |
| F8h      | DMA1REQ        |                 | Section 12.5.1.56 |
| 100h     | FIFO0DATA      |                 | Section 12.5.1.57 |
| 200h     | FIFO1DATA      |                 | Section 12.5.1.58 |

## 12.5.1.1 REVISION Register (offset = 0h) [reset = 47300001h]

Register mask: FFFFFFFFh

REVISION is shown in Figure 12-5 and described in Table 12-5.

Revision Register

Figure 12-5. REVISION Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| SCHEME    | SCHEME    | RESERVED  | RESERVED  | FUNC      | FUNC      | FUNC      | FUNC      |
| R-1h      | R-1h      | R-0h      | R-0h      | R-730h    | R-730h    | R-730h    | R-730h    |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| FUNC      | FUNC      | FUNC      | FUNC      | FUNC      | FUNC      | FUNC      | FUNC      |
| R-730h    | R-730h    | R-730h    | R-730h    | R-730h    | R-730h    | R-730h    | R-730h    |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| R_RTL     | R_RTL     | R_RTL     | R_RTL     | X_MAJOR   | X_MAJOR   | X_MAJOR   | X_MAJOR   |
| R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| CUSTOM    | CUSTOM    | Y_MINOR   | Y_MINOR   | Y_MINOR   | Y_MINOR   | Y_MINOR   | Y_MINOR   |
| R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h | R-0h R-1h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-5. REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                   |
|-------|----------|--------|---------|-----------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | HL 0.8 scheme                                 |
| 29-28 | RESERVED | R      | 0h      | Always read as 0. Writes have no affect.      |
| 27-16 | FUNC     | R      | 730h    | Functional Number                             |
| 15-11 | R_RTL    | R      | 0h      | RTL revision. Will vary depending on release. |
| 10-8  | X_MAJOR  | R      | 0h      | Major revision.                               |
| 7-6   | CUSTOM   | R      | 0h      | Custom revision.                              |
| 5-0   | Y_MINOR  | R      | 1h      | Minor revision                                |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.2 SYSCONFIG Register (offset = 10h) [reset = 0h]

Register mask: FFFFFFFFh

SYSCONFIG is shown in Figure 12-6 and described in Table 12-6.

SysConfig Register

## Figure 12-6. SYSCONFIG Register

| 31       | 30       | 29        | 28       | 27       | 26       | 25       | 24       |
|----------|----------|-----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22        | 22       | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R/W-0h | 18       | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13        | 13       | 13       | 13       | 13       | 13       |
| 12       | 12       | 12        | 12       | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 R/W-0h  | 8        | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3         | 3        | 3        | 3        | 3        | 3        |
| 2        | 2        | 2         | 2        | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED  | RESERVED | IdleMode |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-6. SYSCONFIG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R/W    | 0h      |                                                                                                                                   |
| 3-2   | IdleMode | R/W    | 0h      | 00 = Force Idle (always acknowledges). 01 = No Idle Mode (never acknowledges). 10 = Smart-Idle Mode. 11 = Smart Idle with Wakeup. |
| 1-0   | RESERVED | R/W    | 0h      |                                                                                                                                   |

## 12.5.1.3 IRQSTATUS\_RAW Register (offset = 24h) [reset = 0h]

Register mask: FFFFFFFFh

IRQSTATUS\_RAW is shown in Figure 12-7 and described in Table 12-7.

IRQ status (unmasked)

Figure 12-7. IRQSTATUS\_RAW Register

| 31               | 30            | 29               | 28               | 27            | 26                    | 25               | 24                         |
|------------------|---------------|------------------|------------------|---------------|-----------------------|------------------|----------------------------|
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED              | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                | R/W-0h           | R/W-0h                     |
| 23               | 22            | 21               | 20               | 19            | 18                    | 17               | 16                         |
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED              | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                | R/W-0h           | R/W-0h                     |
| 15               | 14            | 13               | 12               | 11            | 10                    | 9                | 8                          |
|                  |               | RESERVED         |                  |               | PEN_IRQ_sync hronized | Pen_Up_Event     | Out_of_Range               |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                | R/W-0h           | R/W-0h                     |
| 7                | 6             | 5                | 4                | 3             | 2                     | 1                | 0                          |
| FIFO1_Underfl ow | FIFO1_Overrun | FIFO1_Thresho ld | FIFO0_Underfl ow | FIFO0_Overrun | FIFO0_Thresho ld      | End_of_Seque nce | HW_Pen_Event _asynchronous |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                | R/W-0h           | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-7. IRQSTATUS\_RAW Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                          |
|-------|----------------------|--------|---------|------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED             | R/W    | 0h      |                                                                                                      |
| 10    | PEN_IRQ_synchronized | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 9     | Pen_Up_Event         | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 8     | Out_of_Range         | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 7     | FIFO1_Underflow      | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 6     | FIFO1_Overrun        | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 5     | FIFO1_Threshold      | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 4     | FIFO0_Underflow      | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
| 3     | FIFO0_Overrun        | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |

<!-- image -->

<!-- image -->

www.ti.com

Table 12-7. IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field                      | Type   | Reset   | Description                                                                                          |
|-------|----------------------------|--------|---------|------------------------------------------------------------------------------------------------------|
|     2 | FIFO0_Threshold            | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
|     1 | End_of_Sequence            | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |
|     0 | HW_Pen_Event_asynchro nous | R/W    | 0h      | Write 0 = No action. Write 1 = Set event (debug). Read 0 = No event pending. Read 1 = Event pending. |

## 12.5.1.4 IRQSTATUS Register (offset = 28h) [reset = 0h]

Register mask: FFFFFFFFh

IRQSTATUS is shown in Figure 12-8 and described in Table 12-8.

IRQ status (masked)

Figure 12-8. IRQSTATUS Register

| 31               | 30            | 29               | 28               | 27            | 26                        | 25               | 24                         |
|------------------|---------------|------------------|------------------|---------------|---------------------------|------------------|----------------------------|
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED                  | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 23               | 22            | 21               | 20               | 19            | 18                        | 17               | 16                         |
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED                  | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 15               | 14            | 13               | 12               | 11            | 10                        | 9                | 8                          |
|                  |               | RESERVED         |                  |               | HW_Pen_Event _synchronous | Pen_Up_event     | Out_of_Range               |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 7                | 6             | 5                | 4                | 3             | 2                         | 1                | 0                          |
| FIFO1_Underfl ow | FIFO1_Overrun | FIFO1_Thresho ld | FIFO0_Underfl ow | FIFO0_Overrun | FIFO0_Thresho ld          | End_of_Seque nce | HW_Pen_Event _asynchronous |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-8. IRQSTATUS Register Field Descriptions

| Bit   | Field                     | Type   | Reset   | Description                                                                                                    |
|-------|---------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED                  | R/W    | 0h      |                                                                                                                |
| 10    | HW_Pen_Event_synchron ous | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 9     | Pen_Up_event              | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 8     | Out_of_Range              | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 7     | FIFO1_Underflow           | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 6     | FIFO1_Overrun             | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 5     | FIFO1_Threshold           | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 4     | FIFO0_Underflow           | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
| 3     | FIFO0_Overrun             | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-8. IRQSTATUS Register Field Descriptions (continued)

|   Bit | Field                      | Type   | Reset   | Description                                                                                                    |
|-------|----------------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
|     2 | FIFO0_Threshold            | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
|     1 | End_of_Sequence            | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |
|     0 | HW_Pen_Event_asynchro nous | R/W    | 0h      | Write 0 = No action. Read 0 = No (enabled) event pending. Read 1 = Event pending. Write 1 = Clear (raw) event. |

## 12.5.1.5 IRQENABLE\_SET Register (offset = 2Ch) [reset = 0h]

Register mask: FFFFFFFFh

IRQENABLE\_SET is shown in Figure 12-9 and described in Table 12-9.

IRQ enable set bits

Figure 12-9. IRQENABLE\_SET Register

| 31               | 30            | 29               | 28               | 27            | 26                        | 25               | 24                         |
|------------------|---------------|------------------|------------------|---------------|---------------------------|------------------|----------------------------|
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED                  | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 23               | 22            | 21               | 20               | 19            | 18                        | 17               | 16                         |
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED                  | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 15               | 14            | 13               | 12               | 11            | 10                        | 9                | 8                          |
|                  |               | RESERVED         |                  |               | HW_Pen_Event _synchronous | Pen_Up_event     | Out_of_Range               |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 7                | 6             | 5                | 4                | 3             | 2                         | 1                | 0                          |
| FIFO1_Underfl ow | FIFO1_Overrun | FIFO1_Thresho ld | FIFO0_Underfl ow | FIFO0_Overrun | FIFO0_Thresho ld          | End_of_Seque nce | HW_Pen_Event _asynchronous |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-9. IRQENABLE\_SET Register Field Descriptions

| Bit   | Field                     | Type   | Reset   | Description                                                                                                        |
|-------|---------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED                  | R/W    | 0h      |                                                                                                                    |
| 10    | HW_Pen_Event_synchron ous | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 9     | Pen_Up_event              | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 8     | Out_of_Range              | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 7     | FIFO1_Underflow           | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 6     | FIFO1_Overrun             | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 5     | FIFO1_Threshold           | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 4     | FIFO0_Underflow           | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
| 3     | FIFO0_Overrun             | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

Table 12-9. IRQENABLE\_SET Register Field Descriptions (continued)

|   Bit | Field                      | Type   | Reset   | Description                                                                                                        |
|-------|----------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------|
|     2 | FIFO0_Threshold            | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
|     1 | End_of_Sequence            | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |
|     0 | HW_Pen_Event_asynchro nous | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Enable interrupt. |

## 12.5.1.6 IRQENABLE\_CLR Register (offset = 30h) [reset = 0h]

Register mask: FFFFFFFFh

IRQENABLE\_CLR is shown in Figure 12-10 and described in Table 12-10.

IRQ enable clear bits

Figure 12-10. IRQENABLE\_CLR Register

| 31               | 30            | 29               | 28               | 27            | 26                        | 25               | 24                         |
|------------------|---------------|------------------|------------------|---------------|---------------------------|------------------|----------------------------|
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED                  | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 23               | 22            | 21               | 20               | 19            | 18                        | 17               | 16                         |
| RESERVED         | RESERVED      | RESERVED         | RESERVED         | RESERVED      | RESERVED                  | RESERVED         | RESERVED                   |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 15               | 14            | 13               | 12               | 11            | 10                        | 9                | 8                          |
|                  |               | RESERVED         |                  |               | HW_Pen_Event _synchronous | Pen_Up_Event     | Out_of_Range               |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |
| 7                | 6             | 5                | 4                | 3             | 2                         | 1                | 0                          |
| FIFO1_Underfl ow | FIFO1_Overrun | FIFO1_Thresho ld | FIFO0_Underfl ow | FIFO0_Overrun | FIFO0_Thresho ld          | End_of_Seque nce | HW_Pen_Event _asynchronous |
| R/W-0h           | R/W-0h        | R/W-0h           | R/W-0h           | R/W-0h        | R/W-0h                    | R/W-0h           | R/W-0h                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-10. IRQENABLE\_CLR Register Field Descriptions

| Bit   | Field                     | Type   | Reset   | Description                                                                                                         |
|-------|---------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED                  | R/W    | 0h      |                                                                                                                     |
| 10    | HW_Pen_Event_synchron ous | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 9     | Pen_Up_Event              | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 8     | Out_of_Range              | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 7     | FIFO1_Underflow           | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 6     | FIFO1_Overrun             | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 5     | FIFO1_Threshold           | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 4     | FIFO0_Underflow           | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
| 3     | FIFO0_Overrun             | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-10. IRQENABLE\_CLR Register Field Descriptions (continued)

|   Bit | Field                      | Type   | Reset   | Description                                                                                                         |
|-------|----------------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------|
|     2 | FIFO0_Threshold            | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
|     1 | End_of_Sequence            | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |
|     0 | HW_Pen_Event_asynchro nous | R/W    | 0h      | Write 0 = No action. Read 0 = Interrupt disabled (masked). Read 1 = Interrupt enabled. Write 1 = Disable interrupt. |

## 12.5.1.7 IRQWAKEUP Register (offset = 34h) [reset = 0h]

Register mask: FFFFFFFFh

IRQWAKEUP is shown in Figure 12-11 and described in Table 12-11.

IRQ wakeup enable

## Figure 12-11. IRQWAKEUP Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WAKEEN0  |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-11. IRQWAKEUP Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                  |
|-------|----------|--------|---------|------------------------------------------------------------------------------|
| 31-1  | RESERVED | R/W    | 0h      |                                                                              |
| 0     | WAKEEN0  | R/W    | 0h      | Wakeup generation for HW Pen event. 0 = Wakeup disabled. 1 = Wakeup enabled. |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.8 DMAENABLE\_SET Register (offset = 38h) [reset = 0h]

Register mask: FFFFFFFFh

DMAENABLE\_SET is shown in Figure 12-12 and described in Table 12-12.

Per-Line DMA set

## Figure 12-12. DMAENABLE\_SET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | Enable_1 | Enable_0 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-12. DMAENABLE\_SET Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R/W    | 0h      |                                                                                                                                   |
| 1     | Enable_1 | R/W    | 0h      | Enable DMA request FIFO 1. Write 0 = No action. Read 0 = DMA line disabled. Read 1 = DMA line enabled. Write 1 = Enable DMA line. |
| 0     | Enable_0 | R/W    | 0h      | Enable DMA request FIFO 0. Write 0 = No action. Read 0 = DMA line disabled. Read 1 = DMA line enabled. Write 1 = Enable DMA line. |

## 12.5.1.9 DMAENABLE\_CLR Register (offset = 3Ch) [reset = 0h]

Register mask: FFFFFFFFh

DMAENABLE\_CLR is shown in Figure 12-13 and described in Table 12-13.

Per-Line DMA clr

Figure 12-13. DMAENABLE\_CLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | Enable_1 | Enable_0 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-13. DMAENABLE\_CLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                         |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R/W    | 0h      |                                                                                                                                     |
| 1     | Enable_1 | R/W    | 0h      | Disable DMA request FIFO 1. Write 0 = No action. Read 0 = DMA line disabled. Read 1 = DMA line enabled. Write 1 = Disable DMA line. |
| 0     | Enable_0 | R/W    | 0h      | Disable DMA request FIFO 0. Write 0 = No action. Read 0 = DMA line disabled. Read 1 = DMA line enabled. Write 1 = Disable DMA line. |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.10 CTRL Register (offset = 40h) [reset = 0h]

Register mask: FFFFFFFFh

CTRL is shown in Figure 12-14 and described in Table 12-14.

@TSC\_ADC\_SS Control Register

Figure 12-14. CTRL Register

| 31                   | 30           | 29           | 28         | 27               | 26                                     | 25          | 24                |
|----------------------|--------------|--------------|------------|------------------|----------------------------------------|-------------|-------------------|
| RESERVED             | RESERVED     | RESERVED     | RESERVED   | RESERVED         | RESERVED                               | RESERVED    | RESERVED          |
| R-0h                 | R-0h         | R-0h         | R-0h       | R-0h             | R-0h                                   | R-0h        | R-0h              |
| 23                   | 22           | 21           | 20         | 19               | 18                                     | 17          | 16                |
| RESERVED             | RESERVED     | RESERVED     | RESERVED   | RESERVED         | RESERVED                               | RESERVED    | RESERVED          |
| R-0h                 | R-0h         | R-0h         | R-0h       | R-0h             | R-0h                                   | R-0h        | R-0h              |
| 15                   | 14           | 13           | 12         | 11               | 10                                     | 9           | 8                 |
| RESERVED             | RESERVED     | RESERVED     | RESERVED   | RESERVED         | RESERVED                               | HW_preempt  | HW_event_ma pping |
| R-0h                 | R-0h         | R-0h         | R-0h       | R-0h             | R-0h                                   | R/W-0h      | R/W-0h            |
| 7                    | 6            | 5            | 4          | 3                | 2                                      | 1           | 0                 |
| Touch_Screen_ Enable | AFE_Pen_Ctrl | AFE_Pen_Ctrl | Power_Down | ADC_Bias_Sel ect | StepConfig_Wri teProtect_n_act ive_low | Step_ID_tag | Enable            |
| R/W-0h               | R/W-0h       | R/W-0h       | R/W-0h     | R/W-0h           | R/W-0h                                 | R/W-0h      | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-14. CTRL Register Field Descriptions

| Bit   | Field                                 | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                          |
|-------|---------------------------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED                              | R      | 0h      |                                                                                                                                                                                                                                                                                                                                      |
| 9     | HW_preempt                            | R/W    | 0h      | 0 = SW steps are not pre-empted by HW events. 1 = SW steps are pre-empted by HW events                                                                                                                                                                                                                                               |
| 8     | HW_event_mapping                      | R/W    | 0h      | 0 = Map HW event to Pen touch irq (from AFE). 1 = Map HW event to HW event input.                                                                                                                                                                                                                                                    |
| 7     | Touch_Screen_Enable                   | R/W    | 0h      | 0 = Touchscreen transistors disabled. 1 = Touchscreen transistors enabled                                                                                                                                                                                                                                                            |
| 6-5   | AFE_Pen_Ctrl                          | R/W    | 0h      | These two bits are sent directly to the AFE Pen Ctrl inputs. Bit 6 controls the Wiper touch (5 wire modes)Bit 5 controls the X+ touch (4 wire modes)User also needs to make sure the ground path is connected properly for pen interrupt to occur (using the StepConfig registers)Refer to section 4 interrupts for more information |
| 4     | Power_Down                            | R/W    | 0h      | ADC Power Down control. 0 = AFE is powered up (default). 1 = Write 1 to power down AFE (the tsc_adc_ss enable (bit 0) should also be set to off)                                                                                                                                                                                     |
| 3     | ADC_Bias_Select                       | R/W    | 0h      | Select Bias to AFE. 0 = Internal. 1 = Reserved.                                                                                                                                                                                                                                                                                      |
| 2     | StepConfig_WriteProtect_ n_active_low | R/W    | 0h      | 0 = Step configuration registers are protected (not writable). 1 = Step configuration registers are not protected (writable).                                                                                                                                                                                                        |
| 1     | Step_ID_tag                           | R/W    | 0h      | Writing 1 to this bit will store the Step ID number with the captured ADC data in the FIFO. 0 = Write zeroes. 1 = Store the channel ID tag.                                                                                                                                                                                          |
| 0     | Enable                                | R/W    | 0h      | TSC_ADC_SS module enable bit. After programming all the steps and configuration registers, write a 1to this bit to turn on TSC_ADC_SS. Writing a 0 will disable the module (after the current conversion).                                                                                                                           |

## 12.5.1.11 ADCSTAT Register (offset = 44h) [reset = 10h]

Register mask: FFFFFFFFh

ADCSTAT is shown in Figure 12-15 and described in Table 12-15.

General Status bits @TSC\_ADC\_SS\_Sequencer\_Status Register

## Figure 12-15. ADCSTAT Register

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
| PEN_IRQ1 | PEN_IRQ0 | FSM_BUSY |          |          | STEP_ID  |          |          |
| R-0h     | R-0h     | R-0h     |          |          | R-10h    |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-15. ADCSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      | -                                                                                                                                                                                                                                                                                                                     |
| 7     | PEN_IRQ1 | R      | 0h      | PEN_IRQ[1] status                                                                                                                                                                                                                                                                                                     |
| 6     | PEN_IRQ0 | R      | 0h      | PEN_IRQ[0] status                                                                                                                                                                                                                                                                                                     |
| 5     | FSM_BUSY | R      | 0h      | Status of OCP FSM and ADC FSM. 0 = Idle. 1 = Busy.                                                                                                                                                                                                                                                                    |
| 4-0   | STEP_ID  | R      | 10h     | Encoded values:. 10000 = Idle. 10001 = Charge. 00000 = Step 1. 00001 = Step 2. 00010 = Step 3. 00011 = Step 4. 00100 = Step 5. 00101 = Step 6. 00110 = Step 7. 00111 = Step 8. 01000 = Step 9. 01001 = Step 10. 01010 = Step 11. 01011 = Step 12. 01100 = Step 13. 01101 = Step 14. 01110 = Step 15. 01111 = Step 16. |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.12 ADCRANGE Register (offset = 48h) [reset = 0h]

Register mask: FFFFFFFFh

ADCRANGE is shown in Figure 12-16 and described in Table 12-16.

High and Low Range Threshold@TSC\_ADC\_SS\_Range\_Check Register

## Figure 12-16. ADCRANGE Register

| 31   | 30       | 29       | 28       | 27   | 26   | 25   | 24   | 23   | 22              | 21              | 20              | 19   | 18   | 17   | 16   |
|------|----------|----------|----------|------|------|------|------|------|-----------------|-----------------|-----------------|------|------|------|------|
|      | RESERVED | RESERVED | RESERVED |      |      |      |      |      | High_Range_Data | High_Range_Data | High_Range_Data |      |      |      |      |
|      | R-0h     | R-0h     | R-0h     |      |      |      |      |      | R/W-0h          | R/W-0h          |                 |      |      |      |      |
| 15   | 14       | 13       | 12       | 11   | 10   | 9    | 8    | 7    | 6               | 5               | 4               | 3    | 2    | 1    | 0    |
|      | RESERVED | RESERVED | RESERVED |      |      |      |      |      | Low_Range_Data  | Low_Range_Data  | Low_Range_Data  |      |      |      |      |
|      | R/W-0h   | R/W-0h   | R/W-0h   |      |      |      |      |      | R/W-0h          | R/W-0h          | R/W-0h          |      |      |      |      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-16. ADCRANGE Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R      | 0h      |                                                                                                                            |
| 27-16 | High_Range_Data | R/W    | 0h      | Sampled ADC data is compared to this value. If the sampled data is greater than the value, then an interrupt is generated. |
| 15-12 | RESERVED        | R/W    | 0h      | Reserved.                                                                                                                  |
| 11-0  | Low_Range_Data  | R/W    | 0h      | Sampled ADC data is compared to this value. If the sampled data is less than the value, then an interrupt is generated.    |

## 12.5.1.13 ADC\_CLKDIV Register (offset = 4Ch) [reset = 0h]

Register mask: FFFFFFFFh

ADC\_CLKDIV is shown in Figure 12-17 and described in Table 12-17.

ADC clock divider register@TSC\_ADC\_SS\_Clock\_Divider Register

## Figure 12-17. ADC\_CLKDIV Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | ADC_ClkDiv                                                                            |
| R-0h                                                                                  | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-17. ADC\_CLKDIV Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                         |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED   | R      | 0h      |                                                                                                     |
| 15-0  | ADC_ClkDiv | R/W    | 0h      | The input ADC clock will be divided by this value and sent to the AFE. Program to the value minus 1 |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.14 ADC\_MISC Register (offset = 50h) [reset = 0h]

Register mask: FFFFFFFFh

ADC\_MISC is shown in Figure 12-18 and described in Table 12-18.

AFE misc debug@TSC\_ADC\_SS\_MISC Register

## Figure 12-18. ADC\_MISC Register

| 31       | 30       | 29               | 28              | 27       | 26       | 25       | 24       |
|----------|----------|------------------|-----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED         | RESERVED        | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22               | 22              | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h          | 18              | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13               | 13              | 13       | 13       | 13       | 13       |
| 12       | 12       | 12               | 12              | 12       | 12       | 12       | 12       |
| 11       | 10       | 9 R-0h           | 8               | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3                | 3               | 3        | 3        | 3        | 3        |
| 2        | 2        | 2                | 2               | 2        | 2        | 2        | 2        |
| 7 1      | 0        | AFE_Spare_Output | AFE_Spare_Input |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-18. ADC\_MISC Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                       |
|-------|------------------|--------|---------|-------------------------------------------------------------------|
| 31-8  | RESERVED         | R      | 0h      | RESERVED.                                                         |
| 7-4   | AFE_Spare_Output | R      | 0h      | Connected to AFE Spare Output pins. Reserved in normal operation. |
| 3-0   | AFE_Spare_Input  | R/W    | 0h      | Connected to AFE Spare Input pins. Reserved in normal operation.  |

## 12.5.1.15 STEPENABLE Register (offset = 54h) [reset = 0h]

Register mask: FFFFFFFFh

STEPENABLE is shown in Figure 12-19 and described in Table 12-19.

Step Enable

## Figure 12-19. STEPENABLE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24        |
|----------|----------|----------|----------|----------|----------|----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | STEP16    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h    |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8         |
| STEP15   | STEP14   | STEP13   | STEP12   | STEP11   | STEP10   | STEP9    | STEP8     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0         |
| STEP7    | STEP6    | STEP5    | STEP4    | STEP3    | STEP2    | STEP1    | TS_Charge |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-19. STEPENABLE Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description           |
|-------|-----------|--------|---------|-----------------------|
| 31-17 | RESERVED  | R      | 0h      | RESERVED.             |
| 16    | STEP16    | R/W    | 0h      | Enable step 16        |
| 15    | STEP15    | R/W    | 0h      | Enable step 15        |
| 14    | STEP14    | R/W    | 0h      | Enable step 14        |
| 13    | STEP13    | R/W    | 0h      | Enable step 13        |
| 12    | STEP12    | R/W    | 0h      | Enable step 12        |
| 11    | STEP11    | R/W    | 0h      | Enable step 11        |
| 10    | STEP10    | R/W    | 0h      | Enable step 10        |
| 9     | STEP9     | R/W    | 0h      | Enable step 9         |
| 8     | STEP8     | R/W    | 0h      | Enable step 8         |
| 7     | STEP7     | R/W    | 0h      | Enable step 7         |
| 6     | STEP6     | R/W    | 0h      | Enable step 6         |
| 5     | STEP5     | R/W    | 0h      | Enable step 5         |
| 4     | STEP4     | R/W    | 0h      | Enable step 4         |
| 3     | STEP3     | R/W    | 0h      | Enable step 3         |
| 2     | STEP2     | R/W    | 0h      | Enable step 2         |
| 1     | STEP1     | R/W    | 0h      | Enable step 1         |
| 0     | TS_Charge | R/W    | 0h      | Enable TS Charge step |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.16 IDLECONFIG Register (offset = 58h) [reset = 0h]

Register mask: FFFFFFFFh

IDLECONFIG is shown in Figure 12-20 and described in Table 12-20.

Idle Step configuration@TSC\_ADC\_SS\_IDLE\_StepConfig Register

## Figure 12-20. IDLECONFIG Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 |                 | RESERVED        |                 |                  |
| R/W-0h           | R/W-0h          | R/W-0h          |                 |                 | R/W-0h          |                 |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-20. IDLECONFIG Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                    |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED        | R/W    | 0h      |                                                                                                                |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.        |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA_ADC. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                               |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for neg differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.            |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                     |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                     |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                     |
| 8     | YNNSW_SWC       | R/W    | 0h      | YNNSW pin SW configuration                                                                                     |
| 7     | YPPSW_SWC       | R/W    | 0h      | YPPSW pin SW configuration                                                                                     |
| 6     | XNNSW_SWC       | R/W    | 0h      | XNNSW pin SW configuration                                                                                     |

## Table 12-20. IDLECONFIG Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                |
|-------|-----------|--------|---------|----------------------------|
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration |
| 4-0   | RESERVED  | R/W    | 0h      |                            |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.17 TS\_CHARGE\_STEPCONFIG Register (offset = 5Ch) [reset = 0h]

Register mask: FFFFFFFFh

TS\_CHARGE\_STEPCONFIG is shown in Figure 12-21 and described in Table 12-21.

TS Charge StepConfiguration@TSC\_ADC\_SS\_TS\_Charge\_StepConfig Register

## Figure 12-21. TS\_CHARGE\_STEPCONFIG Register

| 31               | 30              | 29              | 28              | 27              | 26             | 25             | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|----------------|----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED       | Diff_CNTRL     | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h         | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18             | 17             | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC3_0 | SEL_INM_SWC3_0 | SEL_INM_SWC3_0   |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10             | 9              | 8                |
| SEL_INM_SW C3_0  | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC      | XNPSW_SWC      | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h         | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2              | 1              | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 |                 | RESERVED       |                |                  |
| R/W-0h           | R/W-0h          | R/W-0h          |                 |                 | R/W-0h         |                |                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-21. TS\_CHARGE\_STEPCONFIG Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                    |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED        | R/W    | 0h      |                                                                                                                |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.        |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                    |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                               |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for neg differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                     |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                     |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                     |
| 8     | YNNSW_SWC       | R/W    | 0h      | YNNSW pin SW configuration                                                                                     |
| 7     | YPPSW_SWC       | R/W    | 0h      | YPPSW pin SW configuration                                                                                     |
| 6     | XNNSW_SWC       | R/W    | 0h      | XNNSW pin SW configuration                                                                                     |

<!-- image -->

## Table 12-21. TS\_CHARGE\_STEPCONFIG Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                |
|-------|-----------|--------|---------|----------------------------|
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration |
| 4-0   | RESERVED  | R/W    | 0h      |                            |

<!-- image -->

www.ti.com

## 12.5.1.18 TS\_CHARGE\_DELAY Register (offset = 60h) [reset = 1h]

Register mask: FFFFFFFFh

TS\_CHARGE\_DELAY is shown in Figure 12-22 and described in Table 12-22.

TS Charge Delay Register@TSC\_ADC\_SS\_TS\_Charge\_StepDelay Register

## Figure 12-22. TS\_CHARGE\_DELAY Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | OpenDelay                                                                             |
| R/W-0h                                                                                | R/W-1h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-22. TS\_CHARGE\_DELAY Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                   |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED  | R/W    | 0h      |                                                                                                                                                               |
| 17-0  | OpenDelay | R/W    | 1h      | Program the # of ADC clock cycles to wait between applying the step configuration registers and going back to the IDLE state. (Value must be greater than 0.) |

## 12.5.1.19 STEPCONFIG1 Register (offset = 64h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG1 is shown in Figure 12-23 and described in Table 12-23.

Step Configuration 1

Figure 12-23. STEPCONFIG1 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-23. STEPCONFIG1 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                         |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                     |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                     |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO 1.                                                          |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.             |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                         |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                    |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                 |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                          |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                          |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-23. STEPCONFIG1 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                            |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                             |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                             |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                             |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                             |
| 4-2   | Averaging | R/W    | 0h      | Number of samplings to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                              |

## 12.5.1.20 STEPDELAY1 Register (offset = 68h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY1 is shown in Figure 12-24 and described in Table 12-24.

Step Delay Register 1

## Figure 12-24. STEPDELAY1 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-24. STEPDELAY1 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.21 STEPCONFIG2 Register (offset = 6Ch) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG2 is shown in Figure 12-25 and described in Table 12-25.

Step Configuration 2

## Figure 12-25. STEPCONFIG2 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-25. STEPCONFIG2 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                         |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                     |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                     |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                           |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.             |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                         |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                    |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                 |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                          |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                          |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                          |

<!-- image -->

## Table 12-25. STEPCONFIG2 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.22 STEPDELAY2 Register (offset = 70h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY2 is shown in Figure 12-26 and described in Table 12-26.

Step Delay Register 2

## Figure 12-26. STEPDELAY2 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-26. STEPDELAY2 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.23 STEPCONFIG3 Register (offset = 74h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG3 is shown in Figure 12-27 and described in Table 12-27.

Step Configuration 3

Figure 12-27. STEPCONFIG3 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-27. STEPCONFIG3 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-27. STEPCONFIG3 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.24 STEPDELAY3 Register (offset = 78h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY3 is shown in Figure 12-28 and described in Table 12-28.

Step Delay Register 3

## Figure 12-28. STEPDELAY3 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-28. STEPDELAY3 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.25 STEPCONFIG4 Register (offset = 7Ch) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG4 is shown in Figure 12-29 and described in Table 12-29.

Step Configuration 4

## Figure 12-29. STEPCONFIG4 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-29. STEPCONFIG4 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

Table 12-29. STEPCONFIG4 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.26 STEPDELAY4 Register (offset = 80h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY4 is shown in Figure 12-30 and described in Table 12-30.

Step Delay Register 4

## Figure 12-30. STEPDELAY4 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-30. STEPDELAY4 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.27 STEPCONFIG5 Register (offset = 84h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG5 is shown in Figure 12-31 and described in Table 12-31.

Step Configuration 5

Figure 12-31. STEPCONFIG5 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-31. STEPCONFIG5 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

Table 12-31. STEPCONFIG5 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.28 STEPDELAY5 Register (offset = 88h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY5 is shown in Figure 12-32 and described in Table 12-32.

Step Delay Register 5

## Figure 12-32. STEPDELAY5 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-32. STEPDELAY5 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.29

## STEPCONFIG6 Register (offset = 8Ch) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG6 is shown in Figure 12-33 and described in Table 12-33.

Step Configuration 6

Figure 12-33. STEPCONFIG6 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-33. STEPCONFIG6 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

Table 12-33. STEPCONFIG6 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.30 STEPDELAY6 Register (offset = 90h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY6 is shown in Figure 12-34 and described in Table 12-34.

Step Delay Register 6

## Figure 12-34. STEPDELAY6 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-34. STEPDELAY6 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.31 STEPCONFIG7 Register (offset = 94h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG7 is shown in Figure 12-35 and described in Table 12-35.

Step Configuration 7

Figure 12-35. STEPCONFIG7 Register

| 31               | 30              | 29              | 28              | 27            | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|---------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check   | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h        | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19            | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 |               | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11            | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC     | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h        | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3             | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging     |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h        |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-35. STEPCONFIG7 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-35. STEPCONFIG7 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.32 STEPDELAY7 Register (offset = 98h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY7 is shown in Figure 12-36 and described in Table 12-36.

Step Delay Register 7

## Figure 12-36. STEPDELAY7 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-36. STEPDELAY7 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.33 STEPCONFIG8 Register (offset = 9Ch) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG8 is shown in Figure 12-37 and described in Table 12-37.

Step Configuration 8

## Figure 12-37. STEPCONFIG8 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-37. STEPCONFIG8 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

Touchscreen Controller

<!-- image -->

Table 12-37. STEPCONFIG8 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.34 STEPDELAY8 Register (offset = A0h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY8 is shown in Figure 12-38 and described in Table 12-38.

Step Delay Register 8

## Figure 12-38. STEPDELAY8 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-38. STEPDELAY8 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.35 STEPCONFIG9 Register (offset = A4h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG9 is shown in Figure 12-39 and described in Table 12-39.

Step Configuration 9

Figure 12-39. STEPCONFIG9 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-39. STEPCONFIG9 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO 1. = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-39. STEPCONFIG9 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.36 STEPDELAY9 Register (offset = A8h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY9 is shown in Figure 12-40 and described in Table 12-40.

Step Delay Register 9

## Figure 12-40. STEPDELAY9 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-40. STEPDELAY9 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.37 STEPCONFIG10 Register (offset = ACh) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG10 is shown in Figure 12-41 and described in Table 12-41.

Step Configuration 10

Figure 12-41. STEPCONFIG10 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-41. STEPCONFIG10 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

Touchscreen Controller

<!-- image -->

Table 12-41. STEPCONFIG10 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.38 STEPDELAY10 Register (offset = B0h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY10 is shown in Figure 12-42 and described in Table 12-42.

Step Delay Register 10

## Figure 12-42. STEPDELAY10 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-42. STEPDELAY10 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.39 STEPCONFIG11 Register (offset = B4h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG11 is shown in Figure 12-43 and described in Table 12-43.

Step Configuration 11

Figure 12-43. STEPCONFIG11 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-43. STEPCONFIG11 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-43. STEPCONFIG11 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.40 STEPDELAY11 Register (offset = B8h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY11 is shown in Figure 12-44 and described in Table 12-44.

Step Delay Register 11

## Figure 12-44. STEPDELAY11 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-44. STEPDELAY11 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.41 STEPCONFIG12 Register (offset = BCh) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG12 is shown in Figure 12-45 and described in Table 12-45.

Step Configuration 12

Figure 12-45. STEPCONFIG12 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-45. STEPCONFIG12 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

## Table 12-45. STEPCONFIG12 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.42 STEPDELAY12 Register (offset = C0h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY12 is shown in Figure 12-46 and described in Table 12-46.

Step Delay Register 12

## Figure 12-46. STEPDELAY12 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-46. STEPDELAY12 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.43 STEPCONFIG13 Register (offset = C4h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG13 is shown in Figure 12-47 and described in Table 12-47.

Step Configuration 13

Figure 12-47. STEPCONFIG13 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 12-47. STEPCONFIG13 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-47. STEPCONFIG13 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.44 STEPDELAY13 Register (offset = C8h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY13 is shown in Figure 12-48 and described in Table 12-48.

Step Delay Register 13

## Figure 12-48. STEPDELAY13 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-48. STEPDELAY13 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.45 STEPCONFIG14 Register (offset = CCh) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG14 is shown in Figure 12-49 and described in Table 12-49.

Step Configuration 14

Figure 12-49. STEPCONFIG14 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-49. STEPCONFIG14 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

Touchscreen Controller

<!-- image -->

## Table 12-49. STEPCONFIG14 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.46 STEPDELAY14 Register (offset = D0h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY14 is shown in Figure 12-50 and described in Table 12-50.

Step Delay Register 14

## Figure 12-50. STEPDELAY14 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-50. STEPDELAY14 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.47 STEPCONFIG15 Register (offset = D4h) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG15 is shown in Figure 12-51 and described in Table 12-51.

Step Configuration 15

Figure 12-51. STEPCONFIG15 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-51. STEPCONFIG15 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## Table 12-51. STEPCONFIG15 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

## 12.5.1.48 STEPDELAY15 Register (offset = D8h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY15 is shown in Figure 12-52 and described in Table 12-52.

Step Delay Register 15

## Figure 12-52. STEPDELAY15 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-52. STEPDELAY15 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.49 STEPCONFIG16 Register (offset = DCh) [reset = 0h]

Register mask: FFFFFFFFh

STEPCONFIG16 is shown in Figure 12-53 and described in Table 12-53.

Step Configuration 16

Figure 12-53. STEPCONFIG16 Register

| 31               | 30              | 29              | 28              | 27              | 26              | 25              | 24               |
|------------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|------------------|
| RESERVED         | RESERVED        | RESERVED        | RESERVED        | Range_check     | FIFO_select     | Diff_CNTRL      | SEL_RFM_SW C_1_0 |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 23               | 22              | 21              | 20              | 19              | 18              | 17              | 16               |
| SEL_RFM_SW C_1_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INP_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0 | SEL_INM_SWC_3_0  |
| R/W-0h           | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h    |
| 15               | 14              | 13              | 12              | 11              | 10              | 9               | 8                |
| SEL_INM_SW C_3_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | SEL_RFP_SWC_2_0 | WPNSW_SWC       | YPNSW_SWC       | XNPSW_SWC       | YNNSW_SWC        |
| R/W-0h           | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h           |
| 7                | 6               | 5               | 4               | 3               | 2               | 1               | 0                |
| YPPSW_SWC        | XNNSW_SWC       | XPPSW_SWC       |                 | Averaging       |                 | Mode            | Mode             |
| R/W-0h           | R/W-0h          | R/W-0h          |                 | R/W-0h          |                 | R/W-0h          | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-53. STEPCONFIG16 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                          |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------|
| 31-28 | RESERVED        | R/W    | 0h      |                                                                                                                      |
| 27    | Range_check     | R/W    | 0h      | 0 = Disable out-of-range check. 1 = Compare ADC data with range check register.                                      |
| 26    | FIFO_select     | R/W    | 0h      | Sampled data will be stored in FIFO. 0 = FIFO. 1 = FIFO1.                                                            |
| 25    | Diff_CNTRL      | R/W    | 0h      | Differential Control Pin. 0 = Single Ended, SEL_INM_SWC_3_0 must be 1xxx. 1 = Differential Pair Enable.              |
| 24-23 | SEL_RFM_SWC_1_0 | R/W    | 0h      | SEL_RFM pins SW configuration. 00 = VSSA. 01 = XNUR. 10 = YNLR. 11 = VREFN.                                          |
| 22-19 | SEL_INP_SWC_3_0 | R/W    | 0h      | SEL_INP pins SW configuration. 0000 = Channel 1. 0111 = Channel 8. 1xxx = VREFN.                                     |
| 18-15 | SEL_INM_SWC_3_0 | R/W    | 0h      | SEL_INM pins for negative differential. 0000 = Channel 1. 0111 = Channel 8. 1xxx = ADCREFM, anytime DIFF_CNTRL = 0.. |
| 14-12 | SEL_RFP_SWC_2_0 | R/W    | 0h      | SEL_RFP pins SW configuration. 000 = VDDA_ADC. 001 = XPUL. 010 = YPLL. 011 = VREFP. 1xx = Reserved.                  |
| 11    | WPNSW_SWC       | R/W    | 0h      | WPNSW pin SW configuration                                                                                           |
| 10    | YPNSW_SWC       | R/W    | 0h      | YPNSW pin SW configuration                                                                                           |
| 9     | XNPSW_SWC       | R/W    | 0h      | XNPSW pin SW configuration                                                                                           |

Touchscreen Controller

<!-- image -->

## Table 12-53. STEPCONFIG16 Register Field Descriptions (continued)

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| 8     | YNNSW_SWC | R/W    | 0h      | YNNSW pin SW configuration                                                                                                                           |
| 7     | YPPSW_SWC | R/W    | 0h      | YPPSW pin SW configuration                                                                                                                           |
| 6     | XNNSW_SWC | R/W    | 0h      | XNNSW pin SW configuration                                                                                                                           |
| 5     | XPPSW_SWC | R/W    | 0h      | XPPSW pin SW configuration                                                                                                                           |
| 4-2   | Averaging | R/W    | 0h      | Number of samples to average: 000 = No average. 001 = 2 samples average. 010 = 4 samples average. 011 = 8 samples average. 100 = 16 samples average. |
| 1-0   | Mode      | R/W    | 0h      | 00 = SW enabled, one-shot. 01 = SW enabled, continuous. 10 = HW synchronized, one-shot. 11 = HW synchronized, continuous.                            |

<!-- image -->

www.ti.com

## 12.5.1.50 STEPDELAY16 Register (offset = E0h) [reset = 0h]

Register mask: FFFFFFFFh

STEPDELAY16 is shown in Figure 12-54 and described in Table 12-54.

Step Delay Register 16

## Figure 12-54. STEPDELAY16 Register

| 31        | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
|-----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
|           | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | SampleDelay | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |
| 15        | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| OpenDelay | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay   | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay | OpenDelay |
| R/W-0h    | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-54. STEPDELAY16 Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                               |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | SampleDelay | R/W    | 0h      | This register will control the number of ADC clock cycles to sample (hold SOC high). Any value programmed here will be added to the minimum requirement of 1 clock cycle. |
| 23-18 | RESERVED    | R/W    | 0h      |                                                                                                                                                                           |
| 17-0  | OpenDelay   | R/W    | 0h      | Program the number of ADC clock cycles to wait after applying the step configuration registers and before sending the start of ADC conversion                             |

## 12.5.1.51 FIFO0COUNT Register (offset = E4h) [reset = 0h]

Register mask: FFFFFFFFh

FIFO0COUNT is shown in Figure 12-55 and described in Table 12-55.

FIFO0 word count@TSC\_ADC\_SS\_FIFO0 Word Count Register

## Figure 12-55. FIFO0COUNT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-55. FIFO0COUNT Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                            |
|-------|----------------|--------|---------|----------------------------------------|
| 31-7  | RESERVED       | R      | 0h      | RESERVED                               |
| 6-0   | Words_in_FIFO0 | R      | 0h      | Number of words currently in the FIFO0 |

<!-- image -->

<!-- image -->

## 12.5.1.52 FIFO0THRESHOLD Register (offset = E8h) [reset = 0h]

Register mask: FFFFFFFFh

FIFO0THRESHOLD is shown in Figure 12-56 and described in Table 12-56.

FIFO0 Threshold trigger@TSC\_ADC\_SS\_FIFO0 Threshold Level Register

## Figure 12-56. FIFO0THRESHOLD Register

| 31                             | 30                             | 29                             | 28                             | 27                             | 26                             | 25                             | 24                             |
|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 23                             | 22                             | 21                             | 20                             | 19                             | 18                             | 17                             | 16                             |
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 15                             | 14                             | 13                             | 12                             | 11                             | 10                             | 9                              | 8                              |
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 7                              | 6                              | 5                              | 4                              | 3                              | 2                              | 1                              | 0                              |
| RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level |
| R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-56. FIFO0THRESHOLD Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED              | R      | 0h      |                                                                                                                    |
| 5-0   | FIFO0_threshold_Level | R/W    | 0h      | Program the desired FIFO0 data sample level to reach before generating interrupt to CPU (program to value minus 1) |

## 12.5.1.53 DMA0REQ Register (offset = ECh) [reset = 0h]

Register mask: FFFFFFFFh

DMA0REQ is shown in Figure 12-57 and described in Table 12-57.

FIFO0 DMA req0 trigger@TSC\_ADC\_SS\_FIFO0 DMA REQUEST Register

## Figure 12-57. DMA0REQ Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22          | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6           | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-57. DMA0REQ Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                         |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------|
| 31-6  | RESERVED          | R      | 0h      | RESERVED                                                                            |
| 5-0   | DMA_Request_Level | R/W    | 0h      | Number of words in FIFO0 before generating a DMA request (program to value minus 1) |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.54 FIFO1COUNT Register (offset = F0h) [reset = 0h]

Register mask: FFFFFFFFh

FIFO1COUNT is shown in Figure 12-58 and described in Table 12-58.

FIFO1 word count@TSC\_ADC\_SS\_FIFO1 Word Count Register

## Figure 12-58. FIFO1COUNT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 | Words_in_FIFO0 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-58. FIFO1COUNT Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                            |
|-------|----------------|--------|---------|----------------------------------------|
| 31-7  | RESERVED       | R      | 0h      | RESERVED                               |
| 6-0   | Words_in_FIFO0 | R      | 0h      | Number of words currently in the FIFO0 |

## 12.5.1.55 FIFO1THRESHOLD Register (offset = F4h) [reset = 0h]

Register mask: FFFFFFFFh

FIFO1THRESHOLD is shown in Figure 12-59 and described in Table 12-59.

FIFO1 Threshold trigger@TSC\_ADC\_SS\_FIFO1 Threshold Level Register

## Figure 12-59. FIFO1THRESHOLD Register

| 31                             | 30                             | 29                             | 28                             | 27                             | 26                             | 25                             | 24                             |
|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 23                             | 22                             | 21                             | 20                             | 19                             | 18                             | 17                             | 16                             |
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 15                             | 14                             | 13                             | 12                             | 11                             | 10                             | 9                              | 8                              |
| RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       | RESERVED                       |
| R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           | R-0h                           |
| 7                              | 6                              | 5                              | 4                              | 3                              | 2                              | 1                              | 0                              |
| RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level | RESERVED FIFO0_threshold_Level |
| R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    | R-0h R/W-0h                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-59. FIFO1THRESHOLD Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED              | R      | 0h      |                                                                                                                    |
| 5-0   | FIFO0_threshold_Level | R/W    | 0h      | Program the desired FIFO0 data sample level to reach before generating interrupt to CPU (program to value minus 1) |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.56 DMA1REQ Register (offset = F8h) [reset = 0h]

Register mask: FFFFFFFFh

DMA1REQ is shown in Figure 12-60 and described in Table 12-60.

FIFO1 DMA req1 trigger@TSC\_ADC\_SS\_FIFO1 DMA Request Register

## Figure 12-60. DMA1REQ Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22          | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6           | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level | DMA_Request_Level |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       | R-0h R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-60. DMA1REQ Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                         |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------|
| 31-6  | RESERVED          | R      | 0h      | RESERVED                                                                            |
| 5-0   | DMA_Request_Level | R/W    | 0h      | Number of words in FIFO0 before generating a DMA request (program to value minus 1) |

## 12.5.1.57 FIFO0DATA Register (offset = 100h) [reset = 0h]

Register mask: FFFFFFFFh

FIFO0DATA is shown in Figure 12-61 and described in Table 12-61.

ADC\_ FIFO0 \_READ Data @TSC\_ADC\_SS\_FIFO0 READ Register

## Figure 12-61. FIFO0DATA Register

| 31   | 30       | 29       | 28       | 27   | 26       | 25   | 24   | 23   | 22   | 21      | 20   | 19   | 18        | 17        | 16        |           |
|------|----------|----------|----------|------|----------|------|------|------|------|---------|------|------|-----------|-----------|-----------|-----------|
|      |          |          |          |      | RESERVED |      |      |      |      |         |      |      | ADCCHNLID | ADCCHNLID | ADCCHNLID | ADCCHNLID |
|      |          |          |          |      | R-0h     |      |      |      |      |         |      |      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15   | 14       | 13       | 12       | 11   | 10       | 9    | 8    | 7    | 6    | 5       | 4    | 3    | 2         | 1         | 0         |           |
|      | RESERVED | RESERVED | RESERVED |      |          |      |      |      |      | ADCDATA |      |      |           |           |           |           |
|      | R-0h     | R-0h     | R-0h     |      |          |      |      |      |      | R-0h    |      |      |           |           |           |           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-61. FIFO0DATA Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                         |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED  | R      | 0h      | RESERVED.                                                                                           |
| 19-16 | ADCCHNLID | R      | 0h      | Optional ID tag of channel that captured the data. If tag option is disabled, these bits will be 0. |
| 15-12 | RESERVED  | R      | 0h      |                                                                                                     |
| 11-0  | ADCDATA   | R      | 0h      | 12 bit sampled ADC converted data value stored in FIFO 0.                                           |

<!-- image -->

<!-- image -->

www.ti.com

## 12.5.1.58 FIFO1DATA Register (offset = 200h) [reset = 0h]

Register mask: FFFFFFFFh

FIFO1DATA is shown in Figure 12-62 and described in Table 12-62.

ADC FIFO1\_READ Data@TSC\_ADC\_SS\_FIFO1 READ Register

## Figure 12-62. FIFO1DATA Register

| 31   | 30       | 29       | 28       | 27   | 26       | 25   | 24   | 23   | 22   | 21      | 20   | 19   |           | 18        | 17        | 16        |
|------|----------|----------|----------|------|----------|------|------|------|------|---------|------|------|-----------|-----------|-----------|-----------|
|      |          |          |          |      | RESERVED |      |      |      |      |         |      |      | ADCCHNLID | ADCCHNLID | ADCCHNLID | ADCCHNLID |
|      |          |          |          |      | R-0h     |      |      |      |      |         |      |      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15   | 14       | 13       | 12       | 11   | 10       | 9    | 8    | 7    | 6    | 5       | 4    | 3    | 2         |           | 1         | 0         |
|      | RESERVED | RESERVED | RESERVED |      |          |      |      |      |      | ADCDATA |      |      |           |           |           |           |
|      | R-0h     | R-0h     | R-0h     |      |          |      |      |      |      | R-0h    |      |      |           |           |           |           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 12-62. FIFO1DATA Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                         |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED  | R      | 0h      | RESERVED                                                                                            |
| 19-16 | ADCCHNLID | R      | 0h      | Optional ID tag of channel that captured the data. If tag option is disabled, these bits will be 0. |
| 15-12 | RESERVED  | R      | 0h      | RESERVED                                                                                            |
| 11-0  | ADCDATA   | R      | 0h      | 12 bit sampled ADC converted data value stored in FIFO 1.                                           |