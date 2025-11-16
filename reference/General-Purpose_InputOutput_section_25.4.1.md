## 25.4 GPIO Registers

## 25.4.1 GPIO Registers

Table 25-5 lists the memory-mapped registers for the GPIO. All register offset addresses not listed in Table 25-5 should be considered as reserved locations and the register contents should not be modified.

Table 25-5. GPIO Registers

| Offset   | Acronym              | Register Name Section   |
|----------|----------------------|-------------------------|
| 0h       | GPIO_REVISION        | Section 25.4.1.1        |
| 10h      | GPIO_SYSCONFIG       | Section 25.4.1.2        |
| 20h      | GPIO_EOI             | Section 25.4.1.3        |
| 24h      | GPIO_IRQSTATUS_RAW_0 | Section 25.4.1.4        |
| 28h      | GPIO_IRQSTATUS_RAW_1 | Section 25.4.1.5        |
| 2Ch      | GPIO_IRQSTATUS_0     | Section 25.4.1.6        |
| 30h      | GPIO_IRQSTATUS_1     | Section 25.4.1.7        |
| 34h      | GPIO_IRQSTATUS_SET_0 | Section 25.4.1.8        |
| 38h      | GPIO_IRQSTATUS_SET_1 | Section 25.4.1.9        |
| 3Ch      | GPIO_IRQSTATUS_CLR_0 | Section 25.4.1.10       |
| 40h      | GPIO_IRQSTATUS_CLR_1 | Section 25.4.1.11       |
| 44h      | GPIO_IRQWAKEN_0      | Section 25.4.1.12       |
| 48h      | GPIO_IRQWAKEN_1      | Section 25.4.1.13       |
| 114h     | GPIO_SYSSTATUS       | Section 25.4.1.14       |
| 130h     | GPIO_CTRL            | Section 25.4.1.15       |
| 134h     | GPIO_OE              | Section 25.4.1.16       |
| 138h     | GPIO_DATAIN          | Section 25.4.1.17       |
| 13Ch     | GPIO_DATAOUT         | Section 25.4.1.18       |
| 140h     | GPIO_LEVELDETECT0    | Section 25.4.1.19       |
| 144h     | GPIO_LEVELDETECT1    | Section 25.4.1.20       |
| 148h     | GPIO_RISINGDETECT    | Section 25.4.1.21       |
| 14Ch     | GPIO_FALLINGDETECT   | Section 25.4.1.22       |
| 150h     | GPIO_DEBOUNCENABLE   | Section 25.4.1.23       |
| 154h     | GPIO_DEBOUNCINGTIME  | Section 25.4.1.24       |
| 190h     | GPIO_CLEARDATAOUT    | Section 25.4.1.25       |
| 194h     | GPIO_SETDATAOUT      | Section 25.4.1.26       |

<!-- image -->

<!-- image -->

## 25.4.1.1 GPIO\_REVISION Register (offset = 0h) [reset = 50600801h]

GPIO\_REVISION is shown in Figure 25-8 and described in Table 25-6.

The GPIO revision register is a read only register containing the revision number of the GPIO module. A write to this register has no effect, the same as the reset.

## Figure 25-8. GPIO\_REVISION Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| SCHEME       | SCHEME       | RESERVED     | RESERVED     | FUNC         | FUNC         | FUNC         | FUNC         |
| R-1h         | R-1h         | R-1h         | R-1h         | R-60h        | R-60h        | R-60h        | R-60h        |
| 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
| FUNC         | FUNC         | FUNC         | FUNC         | FUNC         | FUNC         | FUNC         | FUNC         |
| R-60h        | R-60h        | R-60h        | R-60h        | R-60h        | R-60h        | R-60h        | R-60h        |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            |
| RTL          | RTL          | RTL          | RTL          | RTL          | MAJOR        | MAJOR        | MAJOR        |
| R-1h R-0h    | R-1h R-0h    | R-1h R-0h    | R-1h R-0h    | R-1h R-0h    | R-1h R-0h    | R-1h R-0h    | R-1h R-0h    |
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| CUSTOM MINOR | CUSTOM MINOR | CUSTOM MINOR | CUSTOM MINOR | CUSTOM MINOR | CUSTOM MINOR | CUSTOM MINOR | CUSTOM MINOR |
| R-0h R-1h    | R-0h R-1h    | R-0h R-1h    | R-0h R-1h    | R-0h R-1h    | R-0h R-1h    | R-0h R-1h    | R-0h R-1h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-6. GPIO\_REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                          |
|-------|----------|--------|---------|------------------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | Used to distinguish between old Scheme and current.  |
| 29-28 | RESERVED | R      | 1h      |                                                      |
| 27-16 | FUNC     | R      | 60h     | Indicates a software compatible module family.       |
| 15-11 | RTL      | R      | 1h      | RTL version                                          |
| 10-8  | MAJOR    | R      | 0h      | Major Revision                                       |
| 7-6   | CUSTOM   | R      | 0h      | Indicates a special version for a particular device. |
| 5-0   | MINOR    | R      | 1h      | Minor Revision                                       |

## 25.4.1.2 GPIO\_SYSCONFIG Register (offset = 10h) [reset = 0h]

GPIO\_SYSCONFIG is shown in Figure 25-9 and described in Table 25-7.

The GPIO\_SYSCONFIG register controls the various parameters of the L4 interconnect. When the AUTOIDLE bit is set, the GPIO\_DATAIN read command has a 3 OCP cycle latency due to the data in sample gating mechanism. When the AUTOIDLE bit is not set, the GPIO\_DATAIN read command has a 2 OCP cycle latency.

Figure 25-9. GPIO\_SYSCONFIG Register

| 31       | 30       | 29       | 28       | 27       | 26        | 25        | 24       |
|----------|----------|----------|----------|----------|-----------|-----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18        | 17        | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10        | 9         | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2         | 1         | 0        |
| RESERVED | RESERVED | RESERVED | IDLEMODE | IDLEMODE | ENAWAKEUP | SOFTRESET | AUTOIDLE |
| R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 25-7. GPIO\_SYSCONFIG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                          |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                      |
| 4-3   | IDLEMODE  | R/W    | 0h      | Power Management, Req/Ack control. 0h = Force-idle. An idle request is acknowledged unconditionally 1h = No-idle. An idle request is never acknowledged 2h = Smart-idle. Acknowledgment to an idle request is given based on the internal activity of the module 3h = Smart Idle Wakeup (GPIO0 only) |
| 2     | ENAWAKEUP | R/W    | 0h      | 0h = Wakeup generation is disabled. 1h = Wakeup capability is enabled upon expected transition on input GPIO pin.                                                                                                                                                                                    |
| 1     | SOFTRESET | R/W    | 0h      | Software reset. This bit is automatically reset by the hardware. During reads, it always returns 0. 0h = Normal mode 1h = The module is reset                                                                                                                                                        |
| 0     | AUTOIDLE  | R/W    | 0h      | Internal interface clock gating strategy 0h = Internal Interface OCP clock is free-running 1h = Automatic internal OCP clock gating, based on the OCP interface activity                                                                                                                             |

<!-- image -->

www.ti.com

<!-- image -->

## 25.4.1.3 GPIO\_EOI Register (offset = 20h) [reset = 0h]

GPIO\_EOI is shown in Figure 25-10 and described in Table 25-8.

This module supports DMA events with its interrupt signal. This register must be written to after the DMA completes in order for subsequent DMA events to be triggered from this module.

## Figure 25-10. GPIO\_EOI Register

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

Table 25-8. GPIO\_EOI Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED     | R      | 0h      |                                                                                                                                                                                                      |
| 0     | DMAEvent_Ack | R/W    | 0h      | Write 0 to acknowledge DMA event has been completed. Module will be able to generate another DMA event only when the previous one has been acknowledged using this register. Reads always returns 0. |

## 25.4.1.4 GPIO\_IRQSTATUS\_RAW\_0 Register (offset = 24h) [reset = 0h]

GPIO\_IRQSTATUS\_RAW\_0 is shown in Figure 25-11 and described in Table 25-9.

The GPIO\_IRQSTATUS\_RAW\_0 register provides core status information for the interrupt handling, showing all active events (enabled and not enabled). The fields are read-write. Writing a 1 to a bit sets it to 1, that is, triggers the IRQ (mostly for debug). Writing a 0 has no effect, that is, the register value is not be modified. Only enabled, active events trigger an actual interrupt request on the IRQ output line.

## Figure 25-11. GPIO\_IRQSTATUS\_RAW\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|-----------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-9. GPIO\_IRQSTATUS\_RAW\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                |
|-------|------------|--------|---------|------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Interrupt n status. 0h = No effect. 1h = IRQ is triggered. |

<!-- image -->

<!-- image -->

www.ti.com

## 25.4.1.5 GPIO\_IRQSTATUS\_RAW\_1 Register (offset = 28h) [reset = 0h]

GPIO\_IRQSTATUS\_RAW\_1 is shown in Figure 25-12 and described in Table 25-10.

The GPIO\_IRQSTATUS\_RAW\_1 register provides core status information for the interrupt handling, showing all active events (enabled and not enabled). The fields are read-write. Writing a 1 to a bit sets it to 1, that is, triggers the IRQ (mostly for debug). Writing a 0 has no effect, that is, the register value is not be modified. Only enabled, active events trigger an actual interrupt request on the IRQ output line.

## Figure 25-12. GPIO\_IRQSTATUS\_RAW\_1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-10. GPIO\_IRQSTATUS\_RAW\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                |
|-------|------------|--------|---------|------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Interrupt n status. 0h = No effect. 1h = IRQ is triggered. |

## 25.4.1.6 GPIO\_IRQSTATUS\_0 Register (offset = 2Ch) [reset = 0h]

GPIO\_IRQSTATUS\_0 is shown in Figure 25-13 and described in Table 25-11.

The GPIO\_IRQSTATUS\_0 register provides core status information for the interrupt handling, showing all active events which have been enabled. The fields are read-write. Writing a 1 to a bit clears the bit to 0, that is, clears the IRQ. Writing a 0 has no effect, that is, the register value is not modified. Only enabled, active events trigger an actual interrupt request on the IRQ output line.

## Figure 25-13. GPIO\_IRQSTATUS\_0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-11. GPIO\_IRQSTATUS\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W1C  | 0h      | Interrupt n status. 0h (W) = No effect. 0h (R) = IRQ is not triggered. 1h (W) = Clears the IRQ. 1h (R) = IRQ is triggered. |

<!-- image -->

<!-- image -->

www.ti.com

## 25.4.1.7 GPIO\_IRQSTATUS\_1 Register (offset = 30h) [reset = 0h]

GPIO\_IRQSTATUS\_1 is shown in Figure 25-14 and described in Table 25-12.

The GPIO\_IRQSTATUS\_1 register provides core status information for the interrupt handling, showing all active events which have been enabled. The fields are read-write. Writing a 1 to a bit clears the bit to 0, that is, clears the IRQ. Writing a 0 has no effect, that is, the register value is not modified. Only enabled, active events trigger an actual interrupt request on the IRQ output line.

## Figure 25-14. GPIO\_IRQSTATUS\_1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|-----------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-12. GPIO\_IRQSTATUS\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W1C  | 0h      | Interrupt n status. 0h (W) = No effect. 0h (R) = IRQ is not triggered. 1h (W) = Clears the IRQ. 1h (R) = IRQ is triggered. |

## 25.4.1.8 GPIO\_IRQSTATUS\_SET\_0 Register (offset = 34h) [reset = 0h]

GPIO\_IRQSTATUS\_SET\_0 is shown in Figure 25-15 and described in Table 25-13.

All 1-bit fields in the GPIO\_IRQSTATUS\_SET\_0 register enable a specific interrupt event to trigger an interrupt request. Writing a 1 to a bit enables the interrupt field. Writing a 0 has no effect, that is, the register value is not modified.

## Figure 25-15. GPIO\_IRQSTATUS\_SET\_0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-13. GPIO\_IRQSTATUS\_SET\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Interrupt n enable 0h = No effect. 1h = Enable IRQ generation. |

<!-- image -->

<!-- image -->

## 25.4.1.9 GPIO\_IRQSTATUS\_SET\_1 Register (offset = 38h) [reset = 0h]

GPIO\_IRQSTATUS\_SET\_1 is shown in Figure 25-16 and described in Table 25-14.

All 1-bit fields in the GPIO\_IRQSTATUS\_SET\_1 register enable a specific interrupt event to trigger an interrupt request. Writing a 1 to a bit enables the interrupt field. Writing a 0 has no effect, that is, the register value is not modified.

## Figure 25-16. GPIO\_IRQSTATUS\_SET\_1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-14. GPIO\_IRQSTATUS\_SET\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                    |
|-------|------------|--------|---------|----------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Interrupt n enable 0h = No effect. 1h = Enable IRQ generation. |

## 25.4.1.10 GPIO\_IRQSTATUS\_CLR\_0 Register (offset = 3Ch) [reset = 0h]

GPIO\_IRQSTATUS\_CLR\_0 is shown in Figure 25-17 and described in Table 25-15.

All 1-bit fields in the GPIO\_IRQSTATUS\_CLR\_0 register clear a specific interrupt event. Writing a 1 to a bit disables the interrupt field. Writing a 0 has no effect, that is, the register value is not modified.

## Figure 25-17. GPIO\_IRQSTATUS\_CLR\_0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-15. GPIO\_IRQSTATUS\_CLR\_0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Interrupt n enable 0h = No effect. 1h = Disable IRQ generation. |

<!-- image -->

<!-- image -->

## 25.4.1.11 GPIO\_IRQSTATUS\_CLR\_1 Register (offset = 40h) [reset = 0h]

GPIO\_IRQSTATUS\_CLR\_1 is shown in Figure 25-18 and described in Table 25-16.

All 1-bit fields in the GPIO\_IRQSTATUS\_CLR\_1 register clear a specific interrupt event. Writing a 1 to a bit disables the interrupt field. Writing a 0 has no effect, that is, the register value is not modified.

## Figure 25-18. GPIO\_IRQSTATUS\_CLR\_1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-16. GPIO\_IRQSTATUS\_CLR\_1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Interrupt n enable 0h = No effect. 1h = Disable IRQ generation. |

## 25.4.1.12 GPIO\_IRQWAKEN\_0 Register (offset = 44h) [reset = 0h]

GPIO\_IRQWAKEN\_0 is shown in Figure 25-19 and described in Table 25-17.

Per-event wakeup enable vector (corresponding to first line of interrupt). Every 1-bit field in the GPIO\_IRQWAKEN\_0 register enables a specific (synchronous) IRQ request source to generate an asynchronous wakeup (on the appropriate swakeup line). This register allows the user to mask the expected transition on input GPIO from generating a wakeup request. The GPIO\_IRQWAKEN\_0 is programmed synchronously with the interface clock before any Idle mode request coming from the host processor. Note: In Force-Idle mode, the module wake-up feature is totally inhibited. The wake-up generation can also be gated at module level using the EnaWakeUp bit from GPIO\_SYSCONFIG register.

## Figure 25-19. GPIO\_IRQWAKEN\_0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE   |
|------|-----------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-17. GPIO\_IRQWAKEN\_0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-0  | INTLINE | R/W    | 0h      | Wakeup Enable for Interrupt Line 0h = Disable wakeup generation. 1h = Enable wakeup generation. |

<!-- image -->

<!-- image -->

## 25.4.1.13 GPIO\_IRQWAKEN\_1 Register (offset = 48h) [reset = 0h]

GPIO\_IRQWAKEN\_1 is shown in Figure 25-20 and described in Table 25-18.

Per-event wakeup enable vector (corresponding to second line of interrupt). Every 1-bit field in the GPIO\_IRQWAKEN\_1 register enables a specific (synchronous) IRQ request source to generate an asynchronous wakeup (on the appropriate swakeup line). This register allows the user to mask the expected transition on input GPIO from generating a wakeup request. The GPIO\_IRQWAKEN\_1 is programmed synchronously with the interface clock before any Idle mode request coming from the host processor. Note: In Force-Idle mode, the module wake-up feature is totally inhibited. The wake-up generation can also be gated at module level using the EnaWakeUp bit from GPIO\_SYSCONFIG register.

## Figure 25-20. GPIO\_IRQWAKEN\_1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE   |
|------|-----------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-18. GPIO\_IRQWAKEN\_1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------|
| 31-0  | INTLINE | R/W    | 0h      | Wakeup Enable for Interrupt Line 0h = Disable wakeup generation. 1h = Enable wakeup generation. |

## 25.4.1.14 GPIO\_SYSSTATUS Register (offset = 114h) [reset = 0h]

GPIO\_SYSSTATUS is shown in Figure 25-21 and described in Table 25-19.

The GPIO\_SYSSTATUS register provides the reset status information about the GPIO module. It is a read-only register; a write to this register has no effect.

Figure 25-21. GPIO\_SYSSTATUS Register

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
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-19. GPIO\_SYSSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                      |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------|
| 31-1  | RESERVED  | R      | 0h      |                                                                                  |
| 0     | RESETDONE | R      | 0h      | Reset status information. 0h = Internal Reset is on-going. 1h = Reset completed. |

<!-- image -->

<!-- image -->

## 25.4.1.15 GPIO\_CTRL Register (offset = 130h) [reset = 0h]

GPIO\_CTRL is shown in Figure 25-22 and described in Table 25-20.

The GPIO\_CTRL register controls the clock gating functionality. The DISABLEMODULE bit controls a clock gating feature at the module level. When set, this bit forces the clock gating for all internal clock paths. Module internal activity is suspended. System interface is not affected by this bit. System interface clock gating is controlled with the AUTOIDLE bit in the system configuration register (GPIO\_SYSCONFIG). This bit is to be used for power saving when the module is not used because of the multiplexing configuration selected at the chip level. This bit has precedence over all other internal configuration bits.

## Figure 25-22. GPIO\_CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26          | 25          | 24             |
|----------|----------|----------|----------|----------|-------------|-------------|----------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h           |
| 23       | 22       | 21       | 20       | 19       | 18          | 17          | 16             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h           |
| 15       | 14       | 13       | 12       | 11       | 10          | 9           | 8              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED       |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h           |
| 7        | 6        | 5        | 4        | 3        | 2           | 1           | 0              |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | GATINGRATIO | GATINGRATIO | DISABLEMOD ULE |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-20. GPIO\_CTRL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                           |
|-------|---------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                       |
| 2-1   | GATINGRATIO   | R/W    | 0h      | Gating Ratio. Controls the clock gating for the event detection logic. 0h = Functional clock is interface clock. 1h = Functional clock is interface clock divided by 2. 2h = Functional clock is interface clock divided by 4. 3h = Functional clock is interface clock divided by 8. |
| 0     | DISABLEMODULE | R/W    | 0h      | Module Disable 0h = Module is enabled, clocks are not gated. 1h = Module is disabled, clocks are gated.                                                                                                                                                                               |

## 25.4.1.16 GPIO\_OE Register (offset = 134h) [reset = FFFFFFFFh]

GPIO\_OE is shown in Figure 25-23 and described in Table 25-21.

The GPIO\_OE register is used to enable the pins output capabilities. At reset, all the GPIO related pins are configured as input and output capabilities are disabled. This register is not used within the module, its only function is to carry the pads configuration. When the application is using a pin as an output and does not want interrupt generation from this pin, the application can/has to properly configure the Interrupt Enable registers.

## Figure 25-23. GPIO\_OE Register

| 31            | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|------------------------------------------------------------------------------------|
| OUTPUTEN[n]   | OUTPUTEN[n]                                                                        |
| R/W-FFFFFFFFh | R/W-FFFFFFFFh                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-21. GPIO\_OE Register Field Descriptions

| Bit   | Field       | Type   | Reset     | Description                                                                                                                                 |
|-------|-------------|--------|-----------|---------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | OUTPUTEN[n] | R/W    | FFFFFFFFh | Output Data Enable 0h = The corresponding GPIO port is configured as an output. 1h = The corresponding GPIO port is configured as an input. |

<!-- image -->

www.ti.com

<!-- image -->

## 25.4.1.17 GPIO\_DATAIN Register (offset = 138h) [reset = 0h]

GPIO\_DATAIN is shown in Figure 25-24 and described in Table 25-22.

The GPIO\_DATAIN register is used to register the data that is read from the GPIO pins. The GPIO\_DATAIN register is a read-only register. The input data is sampled synchronously with the interface clock and then captured in the GPIO\_DATAIN register synchronously with the interface clock. So, after changing, GPIO pin levels are captured into this register after two interface clock cycles (the required cycles to synchronize and to write the data). When the AUTOIDLE bit in the system configuration register (GPIO\_SYSCONFIG) is set, the GPIO\_DATAIN read command has a 3 OCP cycle latency due to the data in sample gating mechanism. When the AUTOIDLE bit is not set, the GPIO\_DATAIN read command has a 2 OCP cycle latency.

## Figure 25-24. GPIO\_DATAIN Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DATAIN   |
|------|----------------------------------------------------------------------------------------|
|      | R-0h                                                                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-22. GPIO\_DATAIN Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description        |
|-------|---------|--------|---------|--------------------|
| 31-0  | DATAIN  | R      | 0h      | Sampled Input Data |

## 25.4.1.18 GPIO\_DATAOUT Register (offset = 13Ch) [reset = 0h]

GPIO\_DATAOUT is shown in Figure 25-25 and described in Table 25-23.

The GPIO\_DATAOUT register is used for setting the value of the GPIO output pins. Data is written to the GPIO\_DATAOUT register synchronously with the interface clock. This register can be accessed with direct read/write operations or using the alternate Set/Clear feature. This feature enables to set or clear specific bits of this register with a single write access to the set data output register (GPIO\_SETDATAOUT) or to the clear data output register (GPIO\_CLEARDATAOUT) address.

## Figure 25-25. GPIO\_DATAOUT Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | DATAOUT                                                                            |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-23. GPIO\_DATAOUT Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                |
|-------|---------|--------|---------|----------------------------|
| 31-0  | DATAOUT | R/W    | 0h      | Data to set on output pins |

<!-- image -->

www.ti.com

<!-- image -->

## 25.4.1.19 GPIO\_LEVELDETECT0 Register (offset = 140h) [reset = 0h]

GPIO\_LEVELDETECT0 is shown in Figure 25-26 and described in Table 25-24.

The GPIO\_LEVELDETECT0 register is used to enable/disable for each input lines the low-level (0) detection to be used for the interrupt request generation. Enabling at the same time high-level detection and low-level detection for one given pin makes a constant interrupt generator.

## Figure 25-26. GPIO\_LEVELDETECT0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 LEVELDETECT0[n]   | 30   | 1   | 0   |
|------|-----------------------------------------------------------------------------------------------|------|-----|-----|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-24. GPIO\_LEVELDETECT0 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                       |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | LEVELDETECT0[n] | R/W    | 0h      | Low Level Interrupt Enable 0h = Disable the IRQ assertion on low-level detect. 1h = Enable the IRQ assertion on low-level detect. |

## 25.4.1.20 GPIO\_LEVELDETECT1 Register (offset = 144h) [reset = 0h]

GPIO\_LEVELDETECT1 is shown in Figure 25-27 and described in Table 25-25.

The GPIO\_LEVELDETECT1 register is used to enable/disable for each input lines the high-level (1) detection to be used for the interrupt request generation. Enabling at the same time high-level detection and low-level detection for one given pin makes a constant interrupt generator.

## Figure 25-27. GPIO\_LEVELDETECT1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 LEVELDETECT1[n]   | 30   | 1   | 0   |
|------|-----------------------------------------------------------------------------------------------|------|-----|-----|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-25. GPIO\_LEVELDETECT1 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                          |
|-------|-----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | LEVELDETECT1[n] | R/W    | 0h      | High Level Interrupt Enable 0h = Disable the IRQ assertion on high-level detect. 1h = Enable the IRQ assertion on high-level detect. |

<!-- image -->

<!-- image -->

## 25.4.1.21 GPIO\_RISINGDETECT Register (offset = 148h) [reset = 0h]

GPIO\_RISINGDETECT is shown in Figure 25-28 and described in Table 25-26.

The GPIO\_RISINGDETECT register is used to enable/disable for each input lines the rising-edge (transition 0 to 1) detection to be used for the interrupt request generation.

## Figure 25-28. GPIO\_RISINGDETECT Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RISINGDETECT[n]   |
|------|----------------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-26. GPIO\_RISINGDETECT Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                 |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------|
| 31-0  | RISINGDETECT[n] | R/W    | 0h      | Rising Edge Interrupt Enable 0h = Disable IRQ on rising-edge detect. 1h = Enable IRQ on rising-edge detect. |

## 25.4.1.22 GPIO\_FALLINGDETECT Register (offset = 14Ch) [reset = 0h]

GPIO\_FALLINGDETECT is shown in Figure 25-29 and described in Table 25-27.

The GPIO\_FALLINGDETECT register is used to enable/disable for each input lines the falling-edge (transition 1 to 0) detection to be used for the interrupt request generation.

## Figure 25-29. GPIO\_FALLINGDETECT Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 FALLINGDETECT[n]   |
|------|-----------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-27. GPIO\_FALLINGDETECT Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                    |
|-------|------------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 31-0  | FALLINGDETECT[n] | R/W    | 0h      | Falling Edge Interrupt Enable 0h = Disable IRQ on falling-edge detect. 1h = Enable IRQ on falling-edge detect. |

<!-- image -->

<!-- image -->

## 25.4.1.23 GPIO\_DEBOUNCENABLE Register (offset = 150h) [reset = 0h]

GPIO\_DEBOUNCENABLE is shown in Figure 25-30 and described in Table 25-28.

The GPIO\_DEBOUNCENABLE register is used to enable/disable the debouncing feature for each input line.

## Figure 25-30. GPIO\_DEBOUNCENABLE Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DEBOUNCEENABLE[n]   |
|------|------------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-28. GPIO\_DEBOUNCENABLE Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                            |
|-------|-------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DEBOUNCEENABLE[n] | R/W    | 0h      | Input Debounce Enable 0h = Disable debouncing feature on the corresponding input port. 1h = Enable debouncing feature on the corresponding input port. |

## 25.4.1.24 GPIO\_DEBOUNCINGTIME Register (offset = 154h) [reset = 0h]

GPIO\_DEBOUNCINGTIME is shown in Figure 25-31 and described in Table 25-29.

The GPIO\_DEBOUNCINGTIME register controls debouncing time (the value is global for all ports). The debouncing cell is running with the debouncing clock (32 kHz), this register represents the number of the clock cycle(s) (31 s long) to be used.

## Figure 25-31. GPIO\_DEBOUNCINGTIME Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DEBOUNCETIME | DEBOUNCETIME | DEBOUNCETIME | DEBOUNCETIME | DEBOUNCETIME | DEBOUNCETIME | DEBOUNCETIME |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-29. GPIO\_DEBOUNCINGTIME Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                             |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED     | R/W    | 0h      |                                                                                                         |
| 7-0   | DEBOUNCETIME | R/W    | 0h      | Input Debouncing Value in 31 microsecond steps. Debouncing Value = (DEBOUNCETIME + 1) * 31 microseconds |

<!-- image -->

<!-- image -->

## 25.4.1.25 GPIO\_CLEARDATAOUT Register (offset = 190h) [reset = 0h]

GPIO\_CLEARDATAOUT is shown in Figure 25-32 and described in Table 25-30.

Writing a 1 to a bit in the GPIO\_CLEARDATAOUT register clears to 0 the corresponding bit in the GPIO\_DATAOUT register; writing a 0 has no effect. A read of the GPIO\_CLEARDATAOUT register returns the value of the data output register (GPIO\_DATAOUT).

## Figure 25-32. GPIO\_CLEARDATAOUT Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-30. GPIO\_CLEARDATAOUT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                              |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Clear Data Output Register 0h = No effect 1h = Clear the corresponding bit in the GPIO_DATAOUT register. |

## 25.4.1.26 GPIO\_SETDATAOUT Register (offset = 194h) [reset = 0h]

GPIO\_SETDATAOUT is shown in Figure 25-33 and described in Table 25-31.

Writing a 1 to a bit in the GPIO\_SETDATAOUT register sets to 1 the corresponding bit in the GPIO\_DATAOUT register; writing a 0 has no effect. A read of the GPIO\_SETDATAOUT register returns the value of the data output register (GPIO\_DATAOUT).

## Figure 25-33. GPIO\_SETDATAOUT Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 INTLINE[n]   |
|------|--------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 25-31. GPIO\_SETDATAOUT Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                          |
|-------|------------|--------|---------|------------------------------------------------------------------------------------------------------|
| 31-0  | INTLINE[n] | R/W    | 0h      | Set Data Output Register 0h = No effect 1h = Set the corresponding bit in the GPIO_DATAOUT register. |

<!-- image -->