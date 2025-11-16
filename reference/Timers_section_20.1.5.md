<!-- image -->

## 20.1.4 Use Cases

## 20.1.5 TIMER Registers

Table 20-10 lists the memory-mapped registers for the TIMER. All register offset addresses not listed in Table 20-10 should be considered as reserved locations and the register contents should not be modified.

Table 20-10. TIMER Registers

| Offset   | Acronym       | Register Name                                | Section           |
|----------|---------------|----------------------------------------------|-------------------|
| 0h       | TIDR          | Identification Register                      | Section 20.1.5.1  |
| 10h      | TIOCP_CFG     | Timer OCP Configuration Register             | Section 20.1.5.2  |
| 20h      | IRQ_EOI       | Timer IRQ End-of-Interrupt Register          | Section 20.1.5.3  |
| 24h      | IRQSTATUS_RAW | Timer Status Raw Register                    | Section 20.1.5.4  |
| 28h      | IRQSTATUS     | Timer Status Register                        | Section 20.1.5.5  |
| 2Ch      | IRQENABLE_SET | Timer Interrupt Enable Set Register          | Section 20.1.5.6  |
| 30h      | IRQENABLE_CLR | Timer Interrupt Enable Clear Register        | Section 20.1.5.7  |
| 34h      | IRQWAKEEN     | Timer IRQ Wakeup Enable Register             | Section 20.1.5.8  |
| 38h      | TCLR          | Timer Control Register                       | Section 20.1.5.9  |
| 3Ch      | TCRR          | Timer Counter Register                       | Section 20.1.5.10 |
| 40h      | TLDR          | Timer Load Register                          | Section 20.1.5.11 |
| 44h      | TTGR          | Timer Trigger Register                       | Section 20.1.5.12 |
| 48h      | TWPS          | Timer Write Posting Bits Register            | Section 20.1.5.13 |
| 4Ch      | TMAR          | Timer Match Register                         | Section 20.1.5.14 |
| 50h      | TCAR1         | Timer Capture Register                       | Section 20.1.5.15 |
| 54h      | TSICR         | Timer Synchronous Interface Control Register | Section 20.1.5.16 |
| 58h      | TCAR2         | Timer Capture Register                       | Section 20.1.5.17 |

## 20.1.5.1 TIDR Register (offset = 0h) [reset = 40000100h]

TIDR is shown in Figure 20-9 and described in Table 20-11.

This read only register contains the revision number of the module. A write to this register has no effect. This register is used by software to track features, bugs, and compatibility.

## Figure 20-9. TIDR Register

| 31              | 30              | 29              | 28              | 27             | 26             | 25             | 24             |
|-----------------|-----------------|-----------------|-----------------|----------------|----------------|----------------|----------------|
| SCHEME RESERVED | SCHEME RESERVED | SCHEME RESERVED | SCHEME RESERVED | FUNC           | FUNC           | FUNC           | FUNC           |
| R/W-1h R-0h     | R/W-1h R-0h     | R/W-1h R-0h     | R/W-1h R-0h     | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         |
| 23              | 22              | 21              | 20              | 19             | 18             | 17             | 16             |
| FUNC            | FUNC            | FUNC            | FUNC            | FUNC           | FUNC           | FUNC           | FUNC           |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         |
| 15              | 14              | 13              | 12              | 11             | 10             | 9              | 8              |
| R_RTL           | R_RTL           | R_RTL           | R_RTL           | X_MAJOR        | X_MAJOR        | X_MAJOR        | X_MAJOR        |
| R/W-0h R/W-1h   | R/W-0h R/W-1h   | R/W-0h R/W-1h   | R/W-0h R/W-1h   | R/W-0h R/W-1h  | R/W-0h R/W-1h  | R/W-0h R/W-1h  | R/W-0h R/W-1h  |
| 7               | 6               | 5               | 4               | 3              | 2              | 1              | 0              |
| CUSTOM Y_MINOR  | CUSTOM Y_MINOR  | CUSTOM Y_MINOR  | CUSTOM Y_MINOR  | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR |
| R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h   | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-11. TIDR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                             |
|-------|----------|--------|---------|---------------------------------------------------------|
| 31-30 | SCHEME   | R/W    | 1h      | Used to distinguish between old scheme and current.     |
| 29-28 | RESERVED | R      | 0h      |                                                         |
| 27-16 | FUNC     | R/W    | 0h      | Function indicates a software compatible module family. |
| 15-11 | R_RTL    | R/W    | 0h      | RTL Version (R).                                        |
| 10-8  | X_MAJOR  | R/W    | 1h      | Major Revision (X).                                     |
| 7-6   | CUSTOM   | R/W    | 0h      | Indicates a special version for a particular device.    |
| 5-0   | Y_MINOR  | R/W    | 0h      | Minor Revision (Y).                                     |

<!-- image -->

<!-- image -->

## 20.1.5.2 TIOCP\_CFG Register (offset = 10h) [reset = 0h]

TIOCP\_CFG is shown in Figure 20-10 and described in Table 20-12.

This register allows controlling various parameters of the OCP interface.

## Figure 20-10. TIOCP\_CFG Register

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
|          | RESERVED |          |          | IDLEMODE |          | EMUFREE  | SOFTRESET |
|          | R-0h     |          |          | R/W-0h   |          | R/W-0h   | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-12. TIOCP\_CFG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 3-2   | IDLEMODE  | R/W    | 0h      | Power management, req/ack control 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state. Backup mode, for debug only. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3h = Smart-idle wakeup-capable mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module may generate (IRQ- or DMA-request-related) wakeup events when in idle state. Only available for Timer0. Not available for Timer2-7 |
| 1     | EMUFREE   | R/W    | 0h      | Sensitivity to emulation (debug) suspend event from Debug Subsystem. 0h = The timer is frozen during a debug suspend event. 1h = The timer runs free, and Debug suspend event is ignored.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 0     | SOFTRESET | R/W    | 0h      | Software reset. 0h = No action. 1h = Reset ongoing.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |

## 20.1.5.3 IRQ\_EOI Register (offset = 20h) [reset = 0h]

IRQ\_EOI is shown in Figure 20-11 and described in Table 20-13.

This module supports DMA events with its interrupt signal. This register must be written to after the DMA completes in order for subsequent DMA events to be triggered from this module.

## Figure 20-11. IRQ\_EOI Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DMAEvent_Ack |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-13. IRQ\_EOI Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                         |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED     | R      | 0h      |                                                                                                                                                                                                     |
| 0     | DMAEvent_Ack | R/W    | 0h      | Write 0 to acknowledge DMA event has been completed. Module will be able to generate another DMA event only when the previous one has been acknowledged using this register. Reads always returns 0 |

<!-- image -->

<!-- image -->

## 20.1.5.4 IRQSTATUS\_RAW Register (offset = 24h) [reset = 0h]

IRQSTATUS\_RAW is shown in Figure 20-12 and described in Table 20-14.

Component interrupt request status. Check the corresponding secondary status register. Raw status is set even if event is not enabled. Write 1 to set the (raw) status, mostly for debug.

## Figure 20-12. IRQSTATUS\_RAW Register

| 31       | 30       | 29       | 28       | 27       | 26            | 25          | 24          |
|----------|----------|----------|----------|----------|---------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18            | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10            | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h        | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2             | 1           | 0           |
|          |          | RESERVED |          |          | TCAR_IT_FLA G | OVF_IT_FLAG | MAT_IT_FLAG |
|          |          | R-0h     |          |          | R/W-0h        | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-14. IRQSTATUS\_RAW Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                          |
|-------|--------------|--------|---------|----------------------------------------------------------------------|
| 31-3  | RESERVED     | R      | 0h      |                                                                      |
| 2     | TCAR_IT_FLAG | R/W    | 0h      | IRQ status for Capture 0h = No event pending 1h = IRQ event pending  |
| 1     | OVF_IT_FLAG  | R/W    | 0h      | IRQ status for Overflow 0h = No event pending 1h = IRQ event pending |
| 0     | MAT_IT_FLAG  | R/W    | 0h      | IRQ status for Match 0h = No event pending 1h = IRQ event pending    |

## 20.1.5.5 IRQSTATUS Register (offset = 28h) [reset = 0h]

IRQSTATUS is shown in Figure 20-13 and described in Table 20-15.

Component interrupt request status. Check the corresponding secondary status register. Enabled status is not set unless event is enabled. Write 1 to clear the status after interrupt has been serviced (raw status gets cleared, that is, even if not enabled).

## Figure 20-13. IRQSTATUS Register

| 31       | 30       | 29       | 28       | 27       | 26            | 25          | 24          |
|----------|----------|----------|----------|----------|---------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18            | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10            | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h        | R-0h        |
| 7        | 6        | 5        | 4        | 3        | 2             | 1           | 0           |
|          |          | RESERVED |          |          | TCAR_IT_FLA G | OVF_IT_FLAG | MAT_IT_FLAG |
|          |          | R-0h     |          |          | R/W-0h        | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-15. IRQSTATUS Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                          |
|-------|--------------|--------|---------|----------------------------------------------------------------------|
| 31-3  | RESERVED     | R      | 0h      |                                                                      |
| 2     | TCAR_IT_FLAG | R/W    | 0h      | IRQ status for Capture 0h = No event pending 1h = IRQ event pending  |
| 1     | OVF_IT_FLAG  | R/W    | 0h      | IRQ status for Overflow 0h = No event pending 1h = IRQ event pending |
| 0     | MAT_IT_FLAG  | R/W    | 0h      | IRQ status for Match 0h = No event pending 1h = IRQ event pending    |

<!-- image -->

<!-- image -->

## 20.1.5.6 IRQENABLE\_SET Register (offset = 2Ch) [reset = 0h]

IRQENABLE\_SET is shown in Figure 20-14 and described in Table 20-16.

Component interrupt request enable. Write 1 to set (enable interrupt). Readout equal to corresponding \_CLR register.

## Figure 20-14. IRQENABLE\_SET Register

| 31       | 30       | 29       | 28       | 27       | 26            | 25           | 24           |
|----------|----------|----------|----------|----------|---------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 23       | 22       | 21       | 20       | 19       | 18            | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10            | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 7        | 6        | 5        | 4        | 3        | 2             | 1            | 0            |
|          |          | RESERVED |          |          | TCAR_EN_FLA G | OVF_EN_FLA G | MAT_EN_FLA G |
|          |          | R-0h     |          |          | R/W-0h        | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-16. IRQENABLE\_SET Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                  |
|-------|--------------|--------|---------|------------------------------------------------------------------------------|
| 31-3  | RESERVED     | R      | 0h      |                                                                              |
| 2     | TCAR_EN_FLAG | R/W    | 0h      | IRQ enable for Capture 0h = IRQ event is disabled 1h = IRQ event is enabled  |
| 1     | OVF_EN_FLAG  | R/W    | 0h      | IRQ enable for Overflow 0h = IRQ event is disabled 1h = IRQ event is enabled |
| 0     | MAT_EN_FLAG  | R/W    | 0h      | IRQ enable for Match 0h = IRQ event is disabled 1h = IRQ event is enabled    |

## 20.1.5.7 IRQENABLE\_CLR Register (offset = 30h) [reset = 0h]

IRQENABLE\_CLR is shown in Figure 20-15 and described in Table 20-17.

Component interrupt request enable. Write 1 to clear (disable interrupt). Readout equal to corresponding \_SET register.

Figure 20-15. IRQENABLE\_CLR Register

| 31       | 30       | 29       | 28       | 27       | 26            | 25           | 24           |
|----------|----------|----------|----------|----------|---------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 23       | 22       | 21       | 20       | 19       | 18            | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10            | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 7        | 6        | 5        | 4        | 3        | 2             | 1            | 0            |
|          |          | RESERVED |          |          | TCAR_EN_FLA G | OVF_EN_FLA G | MAT_EN_FLA G |
|          |          | R-0h     |          |          | R/W-0h        | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-17. IRQENABLE\_CLR Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                              |
|-------|--------------|--------|---------|--------------------------------------------------------------------------|
| 31-3  | RESERVED     | R      | 0h      |                                                                          |
| 2     | TCAR_EN_FLAG | R/W    | 0h      | IRQ enable for Capture 0h = IRQ event is disabled 1h = Clear IRQ enable  |
| 1     | OVF_EN_FLAG  | R/W    | 0h      | IRQ enable for Overflow 0h = IRQ event is disabled 1h = Clear IRQ enable |
| 0     | MAT_EN_FLAG  | R/W    | 0h      | IRQ enable for Match 0h = IRQ event is disabled 1h = Clear IRQ enable    |

<!-- image -->

<!-- image -->

## 20.1.5.8 IRQWAKEEN Register (offset = 34h) [reset = 0h]

IRQWAKEEN is shown in Figure 20-16 and described in Table 20-18.

Wakeup-enabled events taking place when module is idle will generate an asynchronous wakeup.

## Figure 20-16. IRQWAKEEN Register

| 31       | 30       | 29       | 28       | 27       | 26            | 25           | 24           |
|----------|----------|----------|----------|----------|---------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 23       | 22       | 21       | 20       | 19       | 18            | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10            | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h         | R-0h         |
| 7        | 6        | 5        | 4        | 3        | 2             | 1            | 0            |
|          |          | RESERVED |          |          | TCAR_WUP_E NA | OVF_WUP_EN A | MAT_WUP_EN A |
|          |          | R-0h     |          |          | R/W-0h        | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-18. IRQWAKEEN Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                             |
|-------|--------------|--------|---------|-------------------------------------------------------------------------|
| 31-3  | RESERVED     | R      | 0h      |                                                                         |
| 2     | TCAR_WUP_ENA | R/W    | 0h      | Wakeup generation for Capture 0h = Wakeup disabled 1h = Wakeup enabled  |
| 1     | OVF_WUP_ENA  | R/W    | 0h      | Wakeup generation for Overflow 0h = Wakeup disabled 1h = Wakeup enabled |
| 0     | MAT_WUP_ENA  | R/W    | 0h      | Wakeup generation for Match 0h = Wakeup disabled 1h = Wakeup enabled    |

## 20.1.5.9 TCLR Register (offset = 38h) [reset = 0h]

TCLR is shown in Figure 20-17 and described in Table 20-19.

When the TCM field passed from (00) to any other combination then the TCAR\_IT\_FLAG and the edge detection logic are cleared. The ST bit of TCLR register may be updated from the OCP interface or reset due to one-shot overflow. The OCP interface update has the priority.

## Figure 20-17. TCLR Register

| 31       | 30       | 29        | 28       | 27       | 26       | 25       | 24       |
|----------|----------|-----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21        | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13        | 12       | 11       | 10       | 9        | 8        |
| RESERVED | GPO_CFG  | CAPT_MODE | PT       | TRG      | TRG      | TCM      | TCM      |
| R-0h     | R/W-0h   | R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5         | 4        | 3        | 2        | 1        | 0        |
| SCPWM    | CE       | PRE       |          | PTV      |          | AR       | ST       |
| R/W-0h   | R/W-0h   | R/W-0h    |          | R/W-0h   |          | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-19. TCLR Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                              |
| 14    | GPO_CFG   | R/W    | 0h      | General purpose output this register drives directly the PORGPOCFG output pin 0h = PORGPOCFG drives 0 and configures the timer pin as an output. 1h = PORGPOCFG drives 1 and configures the timer pin as an input.                           |
| 13    | CAPT_MODE | R/W    | 0h      | Capture mode. 0h = Single capture 1h = Capture on second event                                                                                                                                                                               |
| 12    | PT        | R/W    | 0h      | Pulse or toggle mode on PORTIMERPWM output pin 0h = Pulse 1h = Toggle                                                                                                                                                                        |
| 11-10 | TRG       | R/W    | 0h      | Trigger output mode on PORTIMERPWM output pin 0h = No trigger 1h = Trigger on overflow 2h = Trigger on overflow and match 3h = Reserved                                                                                                      |
| 9-8   | TCM       | R/W    | 0h      | Transition Capture Mode on PIEVENTCAPT input pin 0h = No capture 1h = Capture on low to high transition 2h = Capture on high to low transition 3h = Capture on both edge transition                                                          |
| 7     | SCPWM     | R/W    | 0h      | This bit should be set or clear while the timer is stopped or the trigger is off 0h = Clear the PORTIMERPWM output pin and select positive pulse for pulse mode 1h = Set the PORTIMERPWM output pin and select negative pulse for pulse mode |

<!-- image -->

<!-- image -->

## Table 20-19. TCLR Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6     | CE      | R/W    | 0h      | 0h = Compare mode is disabled 1h = Compare mode is enabled                                                                                                                                      |
| 5     | PRE     | R/W    | 0h      | Prescaler enable 0h = The TIMER clock input pin clocks the counter 1h = The divided input pin clocks the counter                                                                                |
| 4-2   | PTV     | R/W    | 0h      | Pre-scale clock Timer value                                                                                                                                                                     |
| 1     | AR      | R/W    | 0h      | 0h = One shot timer 1h = Auto-reload timer                                                                                                                                                      |
| 0     | ST      | R/W    | 0h      | In the case of one-shot mode selected (AR = 0), this bit is automatically reset by internal logic when the counter is overflowed. 0h (R) = Stop timeOnly the counter is frozen 1h = Start timer |

## 20.1.5.10 TCRR Register (offset = 3Ch) [reset = 0h]

TCRR is shown in Figure 20-18 and described in Table 20-20.

The TCRR register is a 32-bit register, 16-bit addressable. The MCU can perform a 32-bit access or two 16-bit accesses to access the register . Note that since the OCP clock is completely asynchronous with the timer clock, some synchronization is done in order to make sure that the TCRR value is not read while it is being incremented. In 16-bit mode the following sequence must be followed to read the TCRR register properly: First, perform an OCP Read Transaction to Read the lower 16-bit of the TCRR register (offset = 28h). When the TCRR is read and synchronized, the lower 16-bit LSBs are driven onto the output OCP data bus and the upper 16-bit MSBs of the TCRR register are stored in a temporary register. Second, perform an OCP Read Transaction to read the upper 16-bit of the TCRR register (offset = 2Ah). During this Read, the value of the upper 16-bit MSBs that has been temporary register is forwarded onto the output OCP data bus. So, to read the value of TCRR correctly, the first OCP read access has to be to the lower 16-bit (offset = 28h), followed by OCP read access to the upper 16-bit (offset = 2Ah). As the TCRR is updated using more sources (shadow\_in\_tcrr, incremented value of tcrr, TLDR and 0 ), a priority order will be defined: The first priority is the OCP update. The second is the reload way (triggered through TTGR reg. or following an auto-reload overflow). The third is the one-shot overflow reset to 0. The last is the incremented value.

## Figure 20-18. TCRR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 TIMER_COUNTER   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-20. TCRR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description            |
|-------|---------------|--------|---------|------------------------|
| 31-0  | TIMER_COUNTER | R/W    | 0h      | Value of TIMER counter |

<!-- image -->

<!-- image -->

## 20.1.5.11 TLDR Register (offset = 40h) [reset = 0h]

TLDR is shown in Figure 20-19 and described in Table 20-21.

LOAD\_VALUE must be different than the timer overflow value (FFFF FFFFh).

## Figure 20-19. TLDR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 LOAD_VALUE   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-21. TLDR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                        |
|-------|------------|--------|---------|------------------------------------------------------------------------------------|
| 31-0  | LOAD_VALUE | R/W    | 0h      | Timer counter value loaded on overflow in auto-reload mode or on TTGR write access |

## 20.1.5.12 TTGR Register (offset = 44h) [reset = FFFFFFFFh]

TTGR is shown in Figure 20-20 and described in Table 20-22.

The read value of this register is always FFFF FFFFh.

## Figure 20-20. TTGR Register

| 31            | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|------------------------------------------------------------------------------------|
| TTGR_VALUE    | TTGR_VALUE                                                                         |
| R/W-FFFFFFFFh | R/W-FFFFFFFFh                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-22. TTGR Register Field Descriptions

| Bit   | Field      | Type   | Reset     | Description                                                                                                                                                               |
|-------|------------|--------|-----------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | TTGR_VALUE | R/W    | FFFFFFFFh | Writing in the TTGR register, TCRR will be loaded from TLDR and prescaler counter will be cleared. Reload will be done regardless of the AR field value of TCLR register. |

<!-- image -->

<!-- image -->

## 20.1.5.13 TWPS Register (offset = 48h) [reset = 0h]

TWPS is shown in Figure 20-21 and described in Table 20-23.

In posted mode the software must read the pending write status bits (Timer Write Posted Status register bits [4:0]) to insure that following write access will not be discarded due to on going write synchronization process. These bits are automatically cleared by internal logic when the write to the corresponding register is acknowledged.

## Figure 20-21. TWPS Register

| 31       | 30       | 29       | 28           | 27           | 26           | 25           | 24           |
|----------|----------|----------|--------------|--------------|--------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 23       | 22       | 21       | 20           | 19           | 18           | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15       | 14       | 13       | 12           | 11           | 10           | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 7        | 6        | 5        | 4            | 3            | 2            | 1            | 0            |
|          | RESERVED |          | W_PEND_TMA R | W_PEND_TTG R | W_PEND_TLD R | W_PEND_TCR R | W_PEND_TCL R |
|          | R-0h     |          | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-23. TWPS Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                              |
|-------|-------------|--------|---------|----------------------------------------------------------|
| 31-5  | RESERVED    | R      | 0h      |                                                          |
| 4     | W_PEND_TMAR | R/W    | 0h      | When equal to 1, a write is pending to the TMAR register |
| 3     | W_PEND_TTGR | R/W    | 0h      | When equal to 1, a write is pending to the TTGR register |
| 2     | W_PEND_TLDR | R/W    | 0h      | When equal to 1, a write is pending to the TLDR register |
| 1     | W_PEND_TCRR | R/W    | 0h      | When equal to 1, a write is pending to the TCRR register |
| 0     | W_PEND_TCLR | R/W    | 0h      | When equal to 1, a write is pending to the TCLR register |

## 20.1.5.14 TMAR Register (offset = 4Ch) [reset = 0h]

TMAR is shown in Figure 20-22 and described in Table 20-24.

The compare logic consists of a 32-bit wide, read/write data TMAR register and logic to compare counter s current value with the value stored in the TMAR register.

## Figure 20-22. TMAR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 COMPARE_VALUE   |
|------|--------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-24. TMAR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                               |
|-------|---------------|--------|---------|-------------------------------------------|
| 31-0  | COMPARE_VALUE | R/W    | 0h      | Value to be compared to the timer counter |

<!-- image -->

<!-- image -->

www.ti.com

## 20.1.5.15 TCAR1 Register (offset = 50h) [reset = 0h]

TCAR1 is shown in Figure 20-23 and described in Table 20-25.

When the appropriate (rising, falling or both) transition is detected in the edge detection logic the current counter value is stored to the TCAR1 register. Note that since the OCP clock is completely asynchronous with the timer clock, some synchronization is done in order to make sure that the TCAR1 value is not read while it is being updated due to some capture event. In 16-bit mode the following sequence must be followed to read the TCAR1 register properly:

## Figure 20-23. TCAR1 Register

| 31             | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------------|------------------------------------------------------------------------------------|
| CAPTURED_VALUE | CAPTURED_VALUE                                                                     |
| R/W-0h         | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-25. TCAR1 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                               |
|-------|----------------|--------|---------|-----------------------------------------------------------|
| 31-0  | CAPTURED_VALUE | R/W    | 0h      | Timer counter value captured on an external event trigger |

## 20.1.5.16 TSICR Register (offset = 54h) [reset = 0h]

TSICR is shown in Figure 20-24 and described in Table 20-26.

Access to this register is not stalled even if the timer is in non-posted mode configuration. To abort any wrong behavior, software can permanently reset the functional part of the module. Also in case of a wrong hardware PIFREQRATIO tied the POSTED field can be reprogrammed on the fly, so deadlock situation cannot happen. Reset value of POSTED depends on hardware integration module at design time. Software must read POSTED field to get the hardware module configuration.

## Figure 20-24. TSICR Register

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
|          |          | RESERVED |          |          | POSTED   | SFT      | RESERVED |
|          |          | R-0h     |          |          | R/W-1h   | R/W-0h   | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-26. TSICR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                   |
| 2     | POSTED   | R/W    | 1h      | PIFREQRATIO 0h = Posted mode inactive: will delay the command accept output signal. 1h = Posted mode active (clocks ratio needs to fit freq (timer) less than freq (OCP)/4 frequency requirement) |
| 1     | SFT      | R/W    | 0h      | This bit resets all the function parts of the module. During reads it always returns 0. 0h = Software reset is enabled 1h = Software reset is disabled                                            |
| 0     | RESERVED | R      | 0h      |                                                                                                                                                                                                   |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 20.1.5.17 TCAR2 Register (offset = 58h) [reset = 0h]

TCAR2 is shown in Figure 20-25 and described in Table 20-27.

When the appropriate (rising, falling or both) transition is detected in the edge detection logic and the capture on second event is activated from the control register (TCLR), the current counter value is stored to the TCAR2 register. Note that since the OCP clock is completely asynchronous with the timer clock, some synchronization is done in order to make sure that the TCAR2 value is not read while it is being updated due to some capture event. In 16-bit mode the following sequence must be followed to read the TCAR2 register properly: First, perform an OCP Read Transaction to Read the lower 16-bits of the TCAR2 register. Second, perform an OCP Read Transaction to read the upper 16-bits of the TCAR2 register.

## Figure 20-25. TCAR2 Register

| 31             | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------------|------------------------------------------------------------------------------------|
| CAPTURED_VALUE | CAPTURED_VALUE                                                                     |
| R/W-0h         | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-27. TCAR2 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                               |
|-------|----------------|--------|---------|-----------------------------------------------------------|
| 31-0  | CAPTURED_VALUE | R/W    | 0h      | Timer counter value captured on an external event trigger |