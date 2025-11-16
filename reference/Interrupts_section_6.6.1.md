## 6.6 Interrupt Controller Registers

NOTE:

FIQ is not available on general-purpose (GP) devices.

## 6.6.1 INTC Registers

Table 6-4 lists the memory-mapped registers for the INTC. All register offset addresses not listed in Table 6-4 should be considered as reserved locations and the register contents should not be modified.

## Table 6-4. INTC Registers

| Offset   | Acronym           | Section          |
|----------|-------------------|------------------|
| 0h       | INTC_REVISION     | Section 6.6.1.1  |
| 10h      | INTC_SYSCONFIG    | Section 6.6.1.2  |
| 14h      | INTC_SYSSTATUS    | Section 6.6.1.3  |
| 40h      | INTC_SIR_IRQ      | Section 6.6.1.4  |
| 44h      | INTC_SIR_FIQ      | Section 6.6.1.5  |
| 48h      | INTC_CONTROL      | Section 6.6.1.6  |
| 4Ch      | INTC_PROTECTION   | Section 6.6.1.7  |
| 50h      | INTC_IDLE         | Section 6.6.1.8  |
| 60h      | INTC_IRQ_PRIORITY | Section 6.6.1.9  |
| 64h      | INTC_FIQ_PRIORITY | Section 6.6.1.10 |
| 68h      | INTC_THRESHOLD    | Section 6.6.1.11 |
| 80h      | INTC_ITR0         | Section 6.6.1.12 |
| 84h      | INTC_MIR0         | Section 6.6.1.13 |
| 88h      | INTC_MIR_CLEAR0   | Section 6.6.1.14 |
| 8Ch      | INTC_MIR_SET0     | Section 6.6.1.15 |
| 90h      | INTC_ISR_SET0     | Section 6.6.1.16 |
| 94h      | INTC_ISR_CLEAR0   | Section 6.6.1.17 |
| 98h      | INTC_PENDING_IRQ0 | Section 6.6.1.18 |
| 9Ch      | INTC_PENDING_FIQ0 | Section 6.6.1.19 |
| A0h      | INTC_ITR1         | Section 6.6.1.20 |
| A4h      | INTC_MIR1         | Section 6.6.1.21 |
| A8h      | INTC_MIR_CLEAR1   | Section 6.6.1.22 |
| ACh      | INTC_MIR_SET1     | Section 6.6.1.23 |
| B0h      | INTC_ISR_SET1     | Section 6.6.1.24 |
| B4h      | INTC_ISR_CLEAR1   | Section 6.6.1.25 |
| B8h      | INTC_PENDING_IRQ1 | Section 6.6.1.26 |
| BCh      | INTC_PENDING_FIQ1 | Section 6.6.1.27 |
| C0h      | INTC_ITR2         | Section 6.6.1.28 |
| C4h      | INTC_MIR2         | Section 6.6.1.29 |
| C8h      | INTC_MIR_CLEAR2   | Section 6.6.1.30 |
| CCh      | INTC_MIR_SET2     | Section 6.6.1.31 |
| D0h      | INTC_ISR_SET2     | Section 6.6.1.32 |
| D4h      | INTC_ISR_CLEAR2   | Section 6.6.1.33 |
| D8h      | INTC_PENDING_IRQ2 | Section 6.6.1.34 |
| DCh      | INTC_PENDING_FIQ2 | Section 6.6.1.35 |
| E0h      | INTC_ITR3         | Section 6.6.1.36 |
| E4h      | INTC_MIR3         | Section 6.6.1.37 |
| E8h      | INTC_MIR_CLEAR3   | Section 6.6.1.38 |
| ECh      | INTC_MIR_SET3     | Section 6.6.1.39 |

<!-- image -->

<!-- image -->

www.ti.com

## Table 6-4. INTC Registers (continued)

| Offset       | Acronym                    | Register Name   | Section          |
|--------------|----------------------------|-----------------|------------------|
| F0h          | INTC_ISR_SET3              |                 | Section 6.6.1.40 |
| F4h          | INTC_ISR_CLEAR3            |                 | Section 6.6.1.41 |
| F8h          | INTC_PENDING_IRQ3          |                 | Section 6.6.1.42 |
| FCh          | INTC_PENDING_FIQ3          |                 | Section 6.6.1.43 |
| 100h to 2FCh | INTC_ILR_0 to INTC_ILR_127 |                 | Section 6.6.1.44 |

## 6.6.1.1 INTC\_REVISION Register (offset = 0h) [reset = 50h]

Register mask: FFFFFFFFh

INTC\_REVISION is shown in Figure 6-4 and described in Table 6-5.

This register contains the IP revision code

## Figure 6-4. INTC\_REVISION Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 RESERVED   | 6 5 4 3 2 1 0 Rev   |
|----------------------------------------------------------------------------------|---------------------|
| R-0h                                                                             | R-50h               |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-5. INTC\_REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      | Reads returns 0                                                                            |
| 7-0   | Rev      | R      | 50h     | IP revision [7:4] Major revision [3:0] Minor revision Examples: 0x10 for 1.0, 0x21 for 2.1 |

<!-- image -->

<!-- image -->

## 6.6.1.2 INTC\_SYSCONFIG Register (offset = 10h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_SYSCONFIG is shown in Figure 6-5 and described in Table 6-6.

This register controls the various parameters of the OCP interface

## Figure 6-5. INTC\_SYSCONFIG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24       |
|----------|----------|----------|----------|----------|----------|-----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h   |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h   |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | SoftReset | Autoidle |
| R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     | R/W-0h   | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-6. INTC\_SYSCONFIG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                  |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | RESERVED  | R/W    | 0h      |                                                                                                                                                                                                              |
| 4-3   | RESERVED  | R      | 0h      | Write 0's for future compatibility. Reads returns 0                                                                                                                                                          |
| 2     | RESERVED  | R/W    | 0h      |                                                                                                                                                                                                              |
| 1     | SoftReset | R/W    | 0h      | Software reset. Set this bit to trigger a module reset. The bit is automatically reset by the hardware. During reads, it always returns 0. 0h(Read) = always_Always returns 0 1h(Read) = never_never happens |
| 0     | Autoidle  | R/W    | 0h      | Internal OCP clock gating strategy 0h = clkfree : OCP clock is free running 1h = autoClkGate : Automatic OCP clock gating strategy is applied, bnased on the OCP interface activity                          |

## 6.6.1.3 INTC\_SYSSTATUS Register (offset = 14h) [reset = 0h]

Register mask: FFFFFFFEh

INTC\_SYSSTATUS is shown in Figure 6-6 and described in Table 6-7.

This register provides status information about the module

## Figure 6-6. INTC\_SYSSTATUS Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ResetDone |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-X       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 6-7. INTC\_SYSSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                  |
|-------|-----------|--------|---------|--------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED  | R      | 0h      |                                                                                                              |
| 7-1   | RESERVED  | R      | 0h      | Reserved for OCP socket status information Read returns 0                                                    |
| 0     | ResetDone | R      | X       | Internal reset monitoring 0h = rstOngoing : Internal module reset is on-going 1h = rstComp : Reset completed |

<!-- image -->

<!-- image -->

## 6.6.1.4 INTC\_SIR\_IRQ Register (offset = 40h) [reset = FFFFFF80h]

Register mask: FFFFFFFFh

INTC\_SIR\_IRQ is shown in Figure 6-7 and described in Table 6-8.

This register supplies the currently active IRQ interrupt number.

## Figure 6-7. INTC\_SIR\_IRQ Register

| 31           | 30           | 29           | 28           | 27           | 26           | 25           | 24           | 23           | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  |
| R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh |
| 15           | 14           | 13           | 12           | 11           | 10           | 9            | 8            | 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | SpuriousIRQ  | ActiveIRQ    | ActiveIRQ    | ActiveIRQ    | ActiveIRQ    | ActiveIRQ    | ActiveIRQ    | ActiveIRQ    |
| R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-1FFFFFFh | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-8. INTC\_SIR\_IRQ Register Field Descriptions

| Bit   | Field       | Type   | Reset    | Description       |
|-------|-------------|--------|----------|-------------------|
| 31-7  | SpuriousIRQ | R/W    | 1FFFFFFh | Spurious IRQ flag |
| 6-0   | ActiveIRQ   | R/W    | 0h       | Active IRQ number |

## 6.6.1.5 INTC\_SIR\_FIQ Register (offset = 44h) [reset = FFFFFF80h]

Register mask: FFFFFFFFh

INTC\_SIR\_FIQ is shown in Figure 6-8 and described in Table 6-9.

This register supplies the currently active FIQ interrupt number

## Figure 6-8. INTC\_SIR\_FIQ Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ |
| R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | SpuriousFIQ | ActiveFIQ   | ActiveFIQ   | ActiveFIQ   | ActiveFIQ   | ActiveFIQ   | ActiveFIQ   | ActiveFIQ   |
| R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-1FFFFFFh  | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-9. INTC\_SIR\_FIQ Register Field Descriptions

| Bit   | Field       | Type   | Reset    | Description       |
|-------|-------------|--------|----------|-------------------|
| 31-7  | SpuriousFIQ | R      | 1FFFFFFh | Spurious FIQ flag |
| 6-0   | ActiveFIQ   | R      | 0h       | Active FIQ number |

<!-- image -->

<!-- image -->

## 6.6.1.6 INTC\_CONTROL Register (offset = 48h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_CONTROL is shown in Figure 6-9 and described in Table 6-10.

This register contains the new interrupt agreement bits

## Figure 6-9. INTC\_CONTROL Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | NewFIQAgr | NewIRQAgr |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h      | W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-10. INTC\_CONTROL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                           |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED  | R      | 0h      | Write 0's for future compatibility. Reads returns 0                                                                                                   |
| 1     | NewFIQAgr | W      | 0h      | Reset FIQ output and enable new FIQ generation 0h(Write) = nofun_no function effect 1h(Write) = NewFiq_Reset FIQ output and enable new FIQ generation |
| 0     | NewIRQAgr | W      | 0h      | New IRQ generation 0h(Write) = nofun_no function effect 1h(Write) = NewIrq_Reset IRQ output and enable new IRQ generation                             |

## 6.6.1.7 INTC\_PROTECTION Register (offset = 4Ch) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PROTECTION is shown in Figure 6-10 and described in Table 6-11.

This register controls protection of the other registers. This register can only be accessed in priviledged mode, regardless of the curent value of the protection bit.

Figure 6-10. INTC\_PROTECTION Register

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
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | Protection |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 6-11. INTC\_PROTECTION Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                           |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED   | R      | 0h      | Write 0's for future compatibility. Reads returns 0                                                                                                                   |
| 0     | Protection | R/W    | 0h      | Protection mode 0h = ProtMDis : Protection mode disabled (default) 1h = ProtMEnb : Protection mode enabled. When enabled, only priviledged mode can access registers. |

<!-- image -->

<!-- image -->

## 6.6.1.8 INTC\_IDLE Register (offset = 50h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_IDLE is shown in Figure 6-11 and described in Table 6-12.

This register controls the clock auto-idle for the functional clock and the input synchronisers

## Figure 6-11. INTC\_IDLE Register

| 31       | 30       | 29       | 28             | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22       | 22             | 22       | 22       | 22       | 22       |
| 23 21 15 | 20 R-0h  | 19       | 18             | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13       | 13             | 13       | 13       | 13       | 13       |
| 12       | 12       | 12       | 12             | 12       | 12       | 12       | 12       |
| 11       | 10 R-0h  | 9        | 8              | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3        | 3              | 3        | 3        | 3        | 3        |
| 2        | 2        | 2        | 2              | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED | Turbo FuncIdle | R-0h     | R/W-0h   | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-12. INTC\_IDLE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      | Write 0's for future compatibility. Reads returns 0                                                                                                                                              |
| 1     | Turbo    | R/W    | 0h      | Input synchroniser clock auto-gating 0h = SyncFree : Input synchroniser clock is free running (default) 1h = SyncAuto : Input synchroniser clock is auto-gated based on interrupt input activity |
| 0     | FuncIdle | R/W    | 0h      | Functional clock auto-idle mode 0h = FuncAuto : Functional clock gating strategy is applied (default) 1h = FuncFree : Functional clock is free-running                                           |

## 6.6.1.9 INTC\_IRQ\_PRIORITY Register (offset = 60h) [reset = FFFFFFC0h]

Register mask: FFFFFFFFh

INTC\_IRQ\_PRIORITY is shown in Figure 6-12 and described in Table 6-13.

This register supplies the currently active IRQ priority level

## Figure 6-12. INTC\_IRQ\_PRIORITY Register

| 31               | 30               | 29               | 28               | 27               | 26               | 25               | 24               | 23               | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  |
| R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       |
| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                | 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | SpuriousIRQflag  | IRQPriority      | IRQPriority      | IRQPriority      | IRQPriority      | IRQPriority      | IRQPriority      | IRQPriority      |
| R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-13. INTC\_IRQ\_PRIORITY Register Field Descriptions

| Bit   | Field           | Type   | Reset    | Description          |
|-------|-----------------|--------|----------|----------------------|
| 31-7  | SpuriousIRQflag | R      | 1FFFFFFh | Spurious IRQ flag    |
| 6-0   | IRQPriority     | R      | 40h      | Current IRQ priority |

<!-- image -->

<!-- image -->

## 6.6.1.10 INTC\_FIQ\_PRIORITY Register (offset = 64h) [reset = FFFFFFC0h]

Register mask: FFFFFFFFh

INTC\_FIQ\_PRIORITY is shown in Figure 6-13 and described in Table 6-14.

This register supplies the currently active FIQ priority level

## Figure 6-13. INTC\_FIQ\_PRIORITY Register

| 31               | 30               | 29               | 28               | 27               | 26               | 25               | 24               | 23               | 22               | 21               | 20               | 19               | 18               | 17               | 16               |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  |
| R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       | R-1FFFFFFh       |
| 15               | 14               | 13               | 12               | 11               | 10               | 9                | 8                | 7                | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
| SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | SpuriousFIQflag  | FIQPriority      | FIQPriority      | FIQPriority      | FIQPriority      | FIQPriority      | FIQPriority      | FIQPriority      |
| R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h | R-1FFFFFFh R-40h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-14. INTC\_FIQ\_PRIORITY Register Field Descriptions

| Bit   | Field           | Type   | Reset    | Description          |
|-------|-----------------|--------|----------|----------------------|
| 31-7  | SpuriousFIQflag | R      | 1FFFFFFh | Spurious FIQ flag    |
| 6-0   | FIQPriority     | R      | 40h      | Current FIQ priority |

## 6.6.1.11 INTC\_THRESHOLD Register (offset = 68h) [reset = FFh]

Register mask: FFFFFFFFh

INTC\_THRESHOLD is shown in Figure 6-14 and described in Table 6-15.

This register sets the priority threshold

## Figure 6-14. INTC\_THRESHOLD Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          | RESERVED          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              | R-0h              |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | PriorityThreshold | PriorityThreshold | PriorityThreshold | PriorityThreshold | PriorityThreshold | PriorityThreshold | PriorityThreshold |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-FFh           | R/W-FFh           | R/W-FFh           | R/W-FFh           | R/W-FFh           | R/W-FFh           | R/W-FFh           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-15. INTC\_THRESHOLD Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------|
| 31-8  | RESERVED          | R      | 0h      | Reads returns 0                                                                   |
| 7-0   | PriorityThreshold | R/W    | FFh     | Priority threshold. Values used are 00h to 3Fh. Value FFh disables the threshold. |

<!-- image -->

<!-- image -->

## 6.6.1.12 INTC\_ITR0 Register (offset = 80h) [reset = 0h]

Register mask: 0h

INTC\_ITR0 is shown in Figure 6-15 and described in Table 6-16.

This register shows the raw interrupt input status before masking

## Figure 6-15. INTC\_ITR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Itr   |
|------|----------------------------------------------------------------------------------------|
|      | R-X                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-16. INTC\_ITR0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                     |
|-------|---------|--------|---------|---------------------------------|
| 31-0  | Itr     | R      | X       | Interrupt status before masking |

## 6.6.1.13 INTC\_MIR0 Register (offset = 84h) [reset = FFFFFFFFh]

Register mask: FFFFFFFFh

INTC\_MIR0 is shown in Figure 6-16 and described in Table 6-17.

This register contains the interrupt mask

## Figure 6-16. INTC\_MIR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Mir   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-17. INTC\_MIR0 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description    |
|-------|---------|--------|-----------|----------------|
| 31-0  | Mir     | R/W    | FFFFFFFFh | Interrupt mask |

<!-- image -->

<!-- image -->

## 6.6.1.14 INTC\_MIR\_CLEAR0 Register (offset = 88h) [reset = 0h]

Register mask: 0h

INTC\_MIR\_CLEAR0 is shown in Figure 6-17 and described in Table 6-18.

This register is used to clear the interrupt mask bits.

## Figure 6-17. INTC\_MIR\_CLEAR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirClear   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-18. INTC\_MIR\_CLEAR0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                      |
|-------|----------|--------|---------|--------------------------------------------------|
| 31-0  | MirClear | W      | X       | Write 1 clears the mask bit to 0, reads return 0 |

## 6.6.1.15 INTC\_MIR\_SET0 Register (offset = 8Ch) [reset = 0h]

Register mask: 0h

INTC\_MIR\_SET0 is shown in Figure 6-18 and described in Table 6-19.

This register is used to set the interrupt mask bits.

## Figure 6-18. INTC\_MIR\_SET0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirSet   |
|------|-------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-19. INTC\_MIR\_SET0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                    |
|-------|---------|--------|---------|------------------------------------------------|
| 31-0  | MirSet  | W      | X       | Write 1 sets the mask bit to 1, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.16 INTC\_ISR\_SET0 Register (offset = 90h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_ISR\_SET0 is shown in Figure 6-19 and described in Table 6-20.

This register is used to set the software interrupt bits. It is also used to read the currently active software interrupts.

## Figure 6-19. INTC\_ISR\_SET0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrSet   |
|------|-------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-20. INTC\_ISR\_SET0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------|
| 31-0  | IsrSet  | R/W    | 0h      | Reads returns the currently active software interrupts, Write 1 sets the software interrupt bits to 1 |

## 6.6.1.17 INTC\_ISR\_CLEAR0 Register (offset = 94h) [reset = 0h]

Register mask: 0h

INTC\_ISR\_CLEAR0 is shown in Figure 6-20 and described in Table 6-21.

This register is used to clear the software interrupt bits

## Figure 6-20. INTC\_ISR\_CLEAR0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrClear   |
|------|---------------------------------------------------------------------------------------------|
|      | W-X                                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-21. INTC\_ISR\_CLEAR0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                     |
|-------|----------|--------|---------|-----------------------------------------------------------------|
| 31-0  | IsrClear | W      | X       | Write 1 clears the software interrupt bits to 0, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.18 INTC\_PENDING\_IRQ0 Register (offset = 98h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_IRQ0 is shown in Figure 6-21 and described in Table 6-22.

This register contains the IRQ status after masking

## Figure 6-21. INTC\_PENDING\_IRQ0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingIRQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-22. INTC\_PENDING\_IRQ0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingIRQ | R      | 0h      | IRQ status after masking |

## 6.6.1.19 INTC\_PENDING\_FIQ0 Register (offset = 9Ch) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_FIQ0 is shown in Figure 6-22 and described in Table 6-23.

This register contains the FIQ status after masking

## Figure 6-22. INTC\_PENDING\_FIQ0 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingFIQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-23. INTC\_PENDING\_FIQ0 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingFIQ | R      | 0h      | FIQ status after masking |

<!-- image -->

<!-- image -->

## 6.6.1.20 INTC\_ITR1 Register (offset = A0h) [reset = 0h]

Register mask: 0h

INTC\_ITR1 is shown in Figure 6-23 and described in Table 6-24.

This register shows the raw interrupt input status before masking

## Figure 6-23. INTC\_ITR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Itr   |
|------|----------------------------------------------------------------------------------------|
|      | R-X                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-24. INTC\_ITR1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                     |
|-------|---------|--------|---------|---------------------------------|
| 31-0  | Itr     | R      | X       | Interrupt status before masking |

## 6.6.1.21 INTC\_MIR1 Register (offset = A4h) [reset = FFFFFFFFh]

Register mask: FFFFFFFFh

INTC\_MIR1 is shown in Figure 6-24 and described in Table 6-25.

This register contains the interrupt mask

## Figure 6-24. INTC\_MIR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Mir   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-25. INTC\_MIR1 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description    |
|-------|---------|--------|-----------|----------------|
| 31-0  | Mir     | R/W    | FFFFFFFFh | Interrupt mask |

<!-- image -->

<!-- image -->

## 6.6.1.22 INTC\_MIR\_CLEAR1 Register (offset = A8h) [reset = 0h]

Register mask: 0h

INTC\_MIR\_CLEAR1 is shown in Figure 6-25 and described in Table 6-26.

This register is used to clear the interrupt mask bits.

## Figure 6-25. INTC\_MIR\_CLEAR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirClear   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-26. INTC\_MIR\_CLEAR1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                      |
|-------|----------|--------|---------|--------------------------------------------------|
| 31-0  | MirClear | W      | X       | Write 1 clears the mask bit to 0, reads return 0 |

## 6.6.1.23 INTC\_MIR\_SET1 Register (offset = ACh) [reset = 0h]

Register mask: 0h

INTC\_MIR\_SET1 is shown in Figure 6-26 and described in Table 6-27.

This register is used to set the interrupt mask bits.

## Figure 6-26. INTC\_MIR\_SET1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirSet   |
|------|-------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-27. INTC\_MIR\_SET1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                    |
|-------|---------|--------|---------|------------------------------------------------|
| 31-0  | MirSet  | W      | X       | Write 1 sets the mask bit to 1, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.24 INTC\_ISR\_SET1 Register (offset = B0h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_ISR\_SET1 is shown in Figure 6-27 and described in Table 6-28.

This register is used to set the software interrupt bits. It is also used to read the currently active software interrupts.

## Figure 6-27. INTC\_ISR\_SET1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrSet   |
|------|-------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-28. INTC\_ISR\_SET1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------|
| 31-0  | IsrSet  | R/W    | 0h      | Reads returns the currently active software interrupts, Write 1 sets the software interrupt bits to 1 |

## 6.6.1.25 INTC\_ISR\_CLEAR1 Register (offset = B4h) [reset = 0h]

Register mask: 0h

INTC\_ISR\_CLEAR1 is shown in Figure 6-28 and described in Table 6-29.

This register is used to clear the software interrupt bits

## Figure 6-28. INTC\_ISR\_CLEAR1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrClear   |
|------|---------------------------------------------------------------------------------------------|
|      | W-X                                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-29. INTC\_ISR\_CLEAR1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                     |
|-------|----------|--------|---------|-----------------------------------------------------------------|
| 31-0  | IsrClear | W      | X       | Write 1 clears the software interrupt bits to 0, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.26 INTC\_PENDING\_IRQ1 Register (offset = B8h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_IRQ1 is shown in Figure 6-29 and described in Table 6-30.

This register contains the IRQ status after masking

## Figure 6-29. INTC\_PENDING\_IRQ1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingIRQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-30. INTC\_PENDING\_IRQ1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingIRQ | R      | 0h      | IRQ status after masking |

## 6.6.1.27 INTC\_PENDING\_FIQ1 Register (offset = BCh) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_FIQ1 is shown in Figure 6-30 and described in Table 6-31.

This register contains the FIQ status after masking

## Figure 6-30. INTC\_PENDING\_FIQ1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingFIQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-31. INTC\_PENDING\_FIQ1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingFIQ | R      | 0h      | FIQ status after masking |

<!-- image -->

<!-- image -->

## 6.6.1.28 INTC\_ITR2 Register (offset = C0h) [reset = 0h]

Register mask: 0h

INTC\_ITR2 is shown in Figure 6-31 and described in Table 6-32.

This register shows the raw interrupt input status before masking

## Figure 6-31. INTC\_ITR2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Itr   |
|------|----------------------------------------------------------------------------------------|
|      | R-X                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-32. INTC\_ITR2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                     |
|-------|---------|--------|---------|---------------------------------|
| 31-0  | Itr     | R      | X       | Interrupt status before masking |

## 6.6.1.29 INTC\_MIR2 Register (offset = C4h) [reset = FFFFFFFFh]

Register mask: FFFFFFFFh

INTC\_MIR2 is shown in Figure 6-32 and described in Table 6-33.

This register contains the interrupt mask

## Figure 6-32. INTC\_MIR2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Mir   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-33. INTC\_MIR2 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description    |
|-------|---------|--------|-----------|----------------|
| 31-0  | Mir     | R/W    | FFFFFFFFh | Interrupt mask |

<!-- image -->

<!-- image -->

## 6.6.1.30 INTC\_MIR\_CLEAR2 Register (offset = C8h) [reset = 0h]

Register mask: 0h

INTC\_MIR\_CLEAR2 is shown in Figure 6-33 and described in Table 6-34.

This register is used to clear the interrupt mask bits.

## Figure 6-33. INTC\_MIR\_CLEAR2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirClear   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-34. INTC\_MIR\_CLEAR2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                      |
|-------|----------|--------|---------|--------------------------------------------------|
| 31-0  | MirClear | W      | X       | Write 1 clears the mask bit to 0, reads return 0 |

## 6.6.1.31 INTC\_MIR\_SET2 Register (offset = CCh) [reset = 0h]

Register mask: 0h

INTC\_MIR\_SET2 is shown in Figure 6-34 and described in Table 6-35.

This register is used to set the interrupt mask bits.

## Figure 6-34. INTC\_MIR\_SET2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirSet   |
|------|-------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-35. INTC\_MIR\_SET2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                    |
|-------|---------|--------|---------|------------------------------------------------|
| 31-0  | MirSet  | W      | X       | Write 1 sets the mask bit to 1, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.32 INTC\_ISR\_SET2 Register (offset = D0h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_ISR\_SET2 is shown in Figure 6-35 and described in Table 6-36.

This register is used to set the software interrupt bits. It is also used to read the currently active software interrupts.

## Figure 6-35. INTC\_ISR\_SET2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrSet   |
|------|-------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-36. INTC\_ISR\_SET2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------|
| 31-0  | IsrSet  | R/W    | 0h      | Reads returns the currently active software interrupts, Write 1 sets the software interrupt bits to 1 |

## 6.6.1.33 INTC\_ISR\_CLEAR2 Register (offset = D4h) [reset = 0h]

Register mask: 0h

INTC\_ISR\_CLEAR2 is shown in Figure 6-36 and described in Table 6-37.

This register is used to clear the software interrupt bits

## Figure 6-36. INTC\_ISR\_CLEAR2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrClear   |
|------|---------------------------------------------------------------------------------------------|
|      | W-X                                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-37. INTC\_ISR\_CLEAR2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                     |
|-------|----------|--------|---------|-----------------------------------------------------------------|
| 31-0  | IsrClear | W      | X       | Write 1 clears the software interrupt bits to 0, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.34 INTC\_PENDING\_IRQ2 Register (offset = D8h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_IRQ2 is shown in Figure 6-37 and described in Table 6-38.

This register contains the IRQ status after masking

## Figure 6-37. INTC\_PENDING\_IRQ2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingIRQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-38. INTC\_PENDING\_IRQ2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingIRQ | R      | 0h      | IRQ status after masking |

## 6.6.1.35 INTC\_PENDING\_FIQ2 Register (offset = DCh) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_FIQ2 is shown in Figure 6-38 and described in Table 6-39.

This register contains the FIQ status after masking

## Figure 6-38. INTC\_PENDING\_FIQ2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingFIQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-39. INTC\_PENDING\_FIQ2 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingFIQ | R      | 0h      | FIQ status after masking |

<!-- image -->

<!-- image -->

## 6.6.1.36 INTC\_ITR3 Register (offset = E0h) [reset = 0h]

Register mask: 0h

INTC\_ITR3 is shown in Figure 6-39 and described in Table 6-40.

This register shows the raw interrupt input status before masking

## Figure 6-39. INTC\_ITR3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Itr   |
|------|----------------------------------------------------------------------------------------|
|      | R-X                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-40. INTC\_ITR3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                     |
|-------|---------|--------|---------|---------------------------------|
| 31-0  | Itr     | R      | X       | Interrupt status before masking |

## 6.6.1.37 INTC\_MIR3 Register (offset = E4h) [reset = FFFFFFFFh]

Register mask: FFFFFFFFh

INTC\_MIR3 is shown in Figure 6-40 and described in Table 6-41.

This register contains the interrupt mask

## Figure 6-40. INTC\_MIR3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 Mir   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-41. INTC\_MIR3 Register Field Descriptions

| Bit   | Field   | Type   | Reset     | Description    |
|-------|---------|--------|-----------|----------------|
| 31-0  | Mir     | R/W    | FFFFFFFFh | Interrupt mask |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.38 INTC\_MIR\_CLEAR3 Register (offset = E8h) [reset = 0h]

Register mask: 0h

INTC\_MIR\_CLEAR3 is shown in Figure 6-41 and described in Table 6-42.

This register is used to clear the interrupt mask bits.

## Figure 6-41. INTC\_MIR\_CLEAR3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirClear   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-42. INTC\_MIR\_CLEAR3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                      |
|-------|----------|--------|---------|--------------------------------------------------|
| 31-0  | MirClear | W      | X       | Write 1 clears the mask bit to 0, reads return 0 |

## 6.6.1.39 INTC\_MIR\_SET3 Register (offset = ECh) [reset = 0h]

Register mask: 0h

INTC\_MIR\_SET3 is shown in Figure 6-42 and described in Table 6-43.

This register is used to set the interrupt mask bits.

## Figure 6-42. INTC\_MIR\_SET3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MirSet   |
|------|-------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-43. INTC\_MIR\_SET3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                    |
|-------|---------|--------|---------|------------------------------------------------|
| 31-0  | MirSet  | W      | X       | Write 1 sets the mask bit to 1, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.40 INTC\_ISR\_SET3 Register (offset = F0h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_ISR\_SET3 is shown in Figure 6-43 and described in Table 6-44.

This register is used to set the software interrupt bits. It is also used to read the currently active software interrupts.

## Figure 6-43. INTC\_ISR\_SET3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrSet   |
|------|-------------------------------------------------------------------------------------------|
|      | R/W-0h                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-44. INTC\_ISR\_SET3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------|
| 31-0  | IsrSet  | R/W    | 0h      | Reads returns the currently active software interrupts, Write 1 sets the software interrupt bits to 1 |

## 6.6.1.41 INTC\_ISR\_CLEAR3 Register (offset = F4h) [reset = 0h]

Register mask: 0h

INTC\_ISR\_CLEAR3 is shown in Figure 6-44 and described in Table 6-45.

This register is used to clear the software interrupt bits

## Figure 6-44. INTC\_ISR\_CLEAR3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IsrClear   |
|------|---------------------------------------------------------------------------------------------|
|      | W-X                                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-45. INTC\_ISR\_CLEAR3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                     |
|-------|----------|--------|---------|-----------------------------------------------------------------|
| 31-0  | IsrClear | W      | X       | Write 1 clears the software interrupt bits to 0, reads return 0 |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.42 INTC\_PENDING\_IRQ3 Register (offset = F8h) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_IRQ3 is shown in Figure 6-45 and described in Table 6-46.

This register contains the IRQ status after masking

## Figure 6-45. INTC\_PENDING\_IRQ3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingIRQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-46. INTC\_PENDING\_IRQ3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingIRQ | R      | 0h      | IRQ status after masking |

## 6.6.1.43 INTC\_PENDING\_FIQ3 Register (offset = FCh) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_PENDING\_FIQ3 is shown in Figure 6-46 and described in Table 6-47.

This register contains the FIQ status after masking

## Figure 6-46. INTC\_PENDING\_FIQ3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 PendingFIQ   |
|------|-----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-47. INTC\_PENDING\_FIQ3 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description              |
|-------|------------|--------|---------|--------------------------|
| 31-0  | PendingFIQ | R      | 0h      | FIQ status after masking |

<!-- image -->

<!-- image -->

www.ti.com

## 6.6.1.44 INTC\_ILR\_0 to INTC\_ILR\_127 Register (offset = 100h to 2FCh) [reset = 0h]

Register mask: FFFFFFFFh

INTC\_ILR\_0 to INTC\_ILR\_127 is shown in Figure 6-47 and described in Table 6-48.

The INTC\_ILRx registers contain the priority for the interrupts and the FIQ/IRQ steering.

## Figure 6-47. INTC\_ILR\_0 to INTC\_ILR\_127 Register

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
|          |          | Priority |          |          |          | RESERVED | FIQnIRQ  |
|          |          | R/W-0h   |          |          |          | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 6-48. INTC\_ILR\_0 to INTC\_ILR\_127 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                              |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      | Write 0's for future compatibility. Reads returns 0                                                                                                      |
| 7-2   | Priority | R/W    | 0h      | Interrupt priority                                                                                                                                       |
| 1     | RESERVED | R/W    | 0h      |                                                                                                                                                          |
| 0     | FIQnIRQ  | R/W    | 0h      | Interrupt IRQ FiQ mapping 0h = IntIRQ : Interrupt is routed to IRQ. 1h = IntFIQ : Interrupt is routed to FIQ (this selection is reserved on GP devices). |