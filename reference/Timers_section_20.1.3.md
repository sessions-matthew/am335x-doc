## 20.1.3 Functional Description

The general-purpose timer is an upward counter. It supports 3 functional modes:

- Timer mode
- Capture mode
- Compare mode

By default, after core reset, the capture and compare modes are disabled.

## 20.1.3.1 Timer Mode Functionality

The timer is an upward counter that can be started and stopped at any time through the Timer Control Register (TCLR ST bit). The Timer Counter Register (TCRR) can be loaded when stopped or on the fly (while counting). TCRR can be loaded directly by a TCRR Write access with the new timer value. TCRR can also be loaded with the value held in the Timer Load Register (TLDR) by a trigger register (TTGR) Write access. The TCRR loading is done regardless of the value written to TTGR. The value of the timer counter register (TCRR) can be read when stopped or captured on the fly by a TCRR Read access. The timer is stopped and the counter value is cleared to '0' when the module's reset is asserted. The timer is maintained in stop after reset is released. When the timer is stopped, TCRR is frozen. The timer can be restarted from the frozen value unless TCRR has been reloaded with a new value.

In the one shot mode (TCLR AR bit = 0), the counter is stopped after counting overflow (counter value remains at zero).

When the auto-reload mode is enabled (TCLR AR bit = 1), the TCRR is reloaded with the Timer Load Register (TLDR) value after a counting overflow.

It is not recommended to put the overflow value (FFFF FFFFh) in TLDR because it can lead to undesired results.

An interrupt can be issued on overflow if the overflow interrupt enable bit is set in the timer Interrupt Enable Register (IRQENABLE\_SET OVF\_IT\_FLAG bit = 1). A dedicated output pin (PORTIMERPWM) is programmed through TCLR (TRG and PT bits) to generate one positive pulse (prescaler duration) or to invert the current value (toggle mode) when an overflow occurs.

<!-- image -->

## 20.1.3.2 Capture Mode Functionality

The timer value in TCRR can be captured and saved in TCAR1 or TCAR2 function of the mode selected in TCLR through the field CAPT\_MODE when a transition is detected on the module input pin (PIEVENTCAPT). The edge detection circuitry monitors transitions on the input pin (PIEVENTCAPT).

<!-- image -->

<!-- image -->

Rising transition, falling transition or both can be selected in TCLR (TCM bit) to trigger the timer counter capture. The module sets the IRQSTATUS (TCAR\_IT\_FLAG bit) when an active transition is detected and at the same time the counter value TCRR is stored in one of the timer capture registers TCAR1 or TCAR2 as follows:

- If TCLR's CAPT\_MODE field is 0 then, on the first enabled capture event, the value of the counter register is saved in TCAR1 register and all the next events are ignored (no update on TCAR1 and no interrupt triggering) until the detection logic is reset or the interrupt status register is cleared on TCAR's position writing a 1 in it.
- If TCLR's CAPT\_MODE field is 1 then, on the first enabled captured event, the counter value is saved in TCAR1 register and, on the second enabled capture event, the value of the counter register is saved in TCAR2 register. All the other events are ignored (no update on TCAR1/2 and no interrupt triggering) until the detection logic is reset or the interrupt status register is cleared on TCAR's position writing a 1 in it. This mechanism is useful for period calculation of a clock if that clock is connected to the PIEVENTCAPT input pin.

The edge detection logic is reset (a new capture is enabled) when the active capture interrupt is served. The TCAR\_IT\_FLAG bit of IRQSTATUS (previously 1) is cleared. The timer functional clock (input to prescaler) is used to sample the input pin (PIEVENTCAPT). Negative or positive pulses can be detected when the pulse time exceeds the functional clock period. An interrupt can be issued on transition detection if the capture interrupt enable bit is set in the Timer Interrupt Enable Register IRQENABLE\_SET (TCAR\_IT\_FLAG bit).

In Figure 20-5, the TCM value is 01 and CAPT\_MODE is 0 - only rising edge of the PIEVENTCAPT will trigger a capture in TCAR and only TCAR1 will update.

In Figure 20-6, the TCM value is 01 and CAPT\_MODE is 1 - only rising edge of the PIEVENTCAPT will trigger a capture in TCAR1 on first enabled event and TCAR2 will update on the second enabled event.

Figure 20-5. Capture Wave Example for CAPT\_MODE = 0

<!-- image -->

<!-- image -->

Figure 20-6. Capture Wave Example for CAPT\_MODE = 1

<!-- image -->

## 20.1.3.3 Compare Mode Functionality

When Compare Enable TCLR (CE bit) is set to 1, the timer value (TCRR) is permanently compared to the value held in timer match register (TMAR). TMAR value can be loaded at any time (timer counting or stop). When the TCRR and the TMAR values match, an interrupt can be issued if the IRQENABLE\_SET (MAT\_EN\_FLAG bit) is set. The correct implementation is to write a compare value in TMAR register before setting TCLR (CE bit) to avoid any unwanted interrupts due to a reset value matching effect.

The dedicated output pin (PORTIMERPWM) can be programmed through TCLR (TRG and PT bits) to generate one positive pulse (TIMER clock duration) or to invert the current value (toggle mode) when an overflow and a match occur.

## 20.1.3.4 Prescaler Functionality

A prescaler counter can be used to divide the timer counter input clock frequency. The prescaler is enabled when TCLR bit 5 is set (PRE). The 2n division ratio value (PTV) can be configured in the TCLR register. The prescaler counter is reset when the timer counter is stopped or reloaded on the fly.

Table 20-6. Prescaler Functionality

| Contexts                       | Prescaler Counter   | Timer Counter   |
|--------------------------------|---------------------|-----------------|
| Overflow (when Auto-reload on) | Reset               | TLDR            |
| TCRR Write                     | Reset               | TCRR            |
| TTGR Write                     | Reset               | TLDR            |
| Stop                           | Reset               | Frozen          |

<!-- image -->

## 20.1.3.5 Pulse-Width Modulation

The timer can be configured to provide a programmable pulse-width modulation (PORTIMERPWM) output. The PORTIMERPWM output pin can be configured to toggle on a specified event. TCLR (TRG bits) determines on which register value the PORTIMERPWM pin toggles. Either overflow or match can be used to toggle the PORTIMERPWM pin, when a compare condition occurs.

In case of overflow and match mode, the match event will be ignored from the moment the mode was setup until the first overflow event occurs (see Figure 20-6).

The TCLR (SCPWM bit) can be programmed to set or clear the PORTIMERPWM output signal while the counter is stopped or the triggering is off only. This allows fixing a deterministic state of the output pin when modulation is stopped. The modulation is synchronously stopped when the TRG bit is cleared and an overflow has occurred.

In the following timing diagram, the internal overflow pulse is set each time (FFFF FFFFFh - TLDR + 1) value is reached, and the internal match pulse is set when the counter reaches TMAR register value. According to TCLR (TRG and PT bits) programming value, the timer provides pulse or PWM on the output pin (PORTIMERPWM).

The TLDR and TMAR registers must keep values smaller than the overflow value (FFFF FFFFh) with at least 2 units. In case the PWM trigger events are both overflow and match, the difference between the values kept in TMAR register and the value in TLDR must be at least 2 units. When match event is used, the compare mode TCLR (CE) must be set.

In Figure 20-7, TCLR (SCPWM bit) is cleared to 0. In Figure 20-8, TCLR (SCPWM bit) is set to 1.

Figure 20-7. Timing Diagram of Pulse-Width Modulation with SCPWM = 0

<!-- image -->

<!-- image -->

Figure 20-8. Timing Diagram of Pulse-Width Modulation with SCPWM = 1

<!-- image -->

<!-- image -->

www.ti.com

## 20.1.3.6 Timer Counting Rate

The timer counter is composed of a prescaler stage and a timer counter. Prescaler stage is clocked with the timer clock and acts as a clock divider for the timer counter stage. The ratio can be managed by accessing the ratio definition field of the control register (PTV and PRE of TCLR). See Table 20-7.

The timer rate is defined by:

- The value of the prescaler fields (PRE and PTV of TCLR register)
- The value loaded into the Timer Load Register (TLDR).

Table 20-7. Prescaler Clock Ratios Value

|   PRE | PTV   |   Divisor (PS) |
|-------|-------|----------------|
|     0 | X     |              1 |
|     1 | 0     |              2 |
|     1 | 1     |              4 |
|     1 | 2     |              8 |
|     1 | 3     |             16 |
|     1 | 4     |             32 |
|     1 | 5     |             64 |
|     1 | 6     |            128 |
|     1 | 7     |            256 |

The timer rate equation is as follows:

(FFFF FFFFh - TLDR + 1) × timer Clock period × Clock Divider (PS)

With timer Clock period = 1/ timer Clock frequency and PS = 2 (PTV + 1) .

As an example, if we consider a timer clock input of 32 kHz, with a PRE field equal to 0, the timer output period is:

Table 20-8. Value and Corresponding Interrupt Period

| TLDR       | Interrupt period   |
|------------|--------------------|
| 0000 0000h | 37 h               |
| FFFF 0000h | 2 s                |
| FFFF FFF0h | 500 us             |
| FFFF FFFEh | 62.5 us            |

## 20.1.3.7 Dual Mode Timer Under Emulation

To configure the Timer to stop during emulation suspend events (for example, debugger breakpoints), set up the Timer and the Debug Subsystem:

1. Set TIOCP\_CFG.EMUFREE=0. This will allow the Suspend\_Control signal from the Debug Subsystem (Chapter 27) to stop and start the Timer. Note that if EMUFREE=1, the Suspend\_Control signal is ignored and the Timer is free running regardless of any debug suspend event. This EMUFREE bit gives local control from a module perspective to gate the suspend signal coming from the Debug Subsystem.
2. Set the appropriate xxx\_Suspend\_Control register = 0x9, as described in Section 27.1.1.1, Debug Suspend Support for Peripherals . Choose the register appropriate to the peripheral you want to suspend during a suspend event.

## 20.1.3.8 Accessing Registers

All registers are 32-bit wide, accessible via OCP interface with 16-bit or 32-bit OCP access (Read/Write). The 32-bit registers write update in 16 bits access must be LSB16 first and the second write access must be MSB16. For the write operation, the module allows skipping the MSB access if the user does not need to update the 16 MSB bits of the register, but only for the OCP registers (TIDR, TIOCP\_CFG, IRQSTATUS\_RAW, IRQSTATUS, IRQENABLE\_SET, IRQENABLE\_CLR, IRQWAKEEN and TSICR). The write operation on any functional register (TCLR, TCRR, TLDR, TTGR and TMAR) must be complete (the MSB must be written even if the MSB data is not used).

## 20.1.3.8.1 Programming the Timer Registers

The TLDR, TCRR, TCLR, TIOCP\_CFG, IRQSTATUS, IRQENABLE\_SET, IRQENABLE\_CLR, IRQWAKEEN, TTGR, TSICR and TMAR registers write is done synchronously with OCP clock, by the host, using the OCP bus protocol.

## 20.1.3.8.2 Reading the Timer Registers

The counter register (TCRR) is a 32-bit 'atomic datum' and 16-bit capture is done on the 16-bit LSB first to allow atomic LSB16 + MSB16 capture. Atomic capture is also performed for the TCAR1 and TCAR2 registers as they may change due to internal processes.

## 20.1.3.8.3 OCP Error Generation

The timer module responds with error indication in the following cases:

## Error on write transactions

- Assert the PORSRESP = ERR signal in the same cycle as PORSCMDACCEPTED.
- Use the ERR code for PORSRESP during the response phase.

## Error on read transactions

- Assert the PORSRESP = ERR signal in the same cycle as PORSCMDACCEPTED.
- Use the ERR code for PORSRESP during the response phase. PORSDATA in this case is not valid.

## Table 20-9. OCP Error Reporting

| Error Type                                                      | Response: SRESP = ERR   |
|-----------------------------------------------------------------|-------------------------|
| Unsupported PIOCPMCMD command                                   | Yes                     |
| Address error: Read or write to a non-existing internal address | No                      |
| Read to write-only registers and write to read-only registers   | No                      |
| Unaligned address (PIOCPMADDR ≠ 00) on read/write transaction   | Yes                     |
| Unsupported PIOCPMBYTEEN on read/write transaction              | Yes                     |

NOTE:

Byte enable '0000' is a supported byte enable.

## 20.1.3.9 Posted Mode Selection

A choice between the two synchronization modes will be made taking into account the frequency ratio and the stall periods that can be supported by the system, without impacting the global performance.

The posted mode selection applies only to functional registers that require synchronization on/from timer clock domain. For write operation, the registers affected by this posted/non-posted selection are: TCLR, TLDR, TCRR, TTGR and TMAR. For read operation, the register affected by this posted/non-posted selection are: TCRR, TCAR1 and TCAR2.

<!-- image -->

<!-- image -->

## www.ti.com

The OCP clock domain synchronous registers TIDR, TIOCP\_CFG, TISTAT, IRQSTATUS, IRQSTATUS\_RAW, IRQENABLE\_SET, IRQENABLE\_CLR, IRQWAKEEN, TWPS and TSICR are not affected by the posted/non-posted mode selection; the write/read operation is effective and acknowledged (command accepted) after one OCP clock cycle from the command assertion.

Non-Posted Mode can be used when freq (timer) &lt; freq (OCP)/4, but it is recommended to use the Posted Mode, because Non-Posted Mode will delay the 'command accept' and the transaction latency will be as described in the below chapters. Posted mode offers an OCP interface latency improvement when freq(timer) &lt; freq (OCP)/4. Refer to the AM335x errata for advisories associated with Posted mode.

## 20.1.3.10 Write Registers Access

## 20.1.3.10.1 Write Posted

This mode can be used only if the functional frequency range is freq (timer) &lt; freq (OCP)/4.

This mode is used if TSICR (POSTED bit) is set to 1 in the timer control register.

This mode uses a posted-write scheme to update any internal register. The write transaction is immediately acknowledged on the OCP interface, although the effective write operation will occur later, due to a resynchronisation in the timer clock domain. This has the advantage of not stalling either the interconnect system, or the CPU that requested the write transaction. For each register, a status bit is provided, that is set if there is a pending write access to this register.

In this mode, it is mandatory that the CPU checks the status bit prior to any write access. In case a write is attempted to a register with a previous access pending, the previous access is discarded without notice (this can lead to unexpected results also).

There is one status bit per register, accessible in the Timer Write Posted Status Register. When the timer module operates in this mode, there is an automatic sampling of the current timer counter value, in an OCP-synchronized capture register. Consequently, any read access to the timer counter register does not add any re-synchronization latency; the current value is always available.

A register read following a write posted register (on the same register) is not ensured to read the previous write value if the write posted process is not completed. Software synchronization should be used to avoid a non-coherent read.

The drawback of this automatic update mechanism is that it assumes a given relationship between the OCP interface frequency and the timer functional frequency.

This posted period is defined as the interval between the posted write access request and the reset of the posted bit in TWPS register, and can be quantified:

T (reset posted max.) = 3 OCP clock + 2.5 TIMER clock

The time when the write accomplishes is:

T (write accomplish) = 1 OCP clock + 2.5 TIMER clock

## 20.1.3.10.2 Write Non-Posted

This mode is functional regardless of the ratio between the OCP interface frequency and the functional clock frequency. The recommended functional frequency range is freq (timer) &gt;= freq (OCP)/4.

This mode is used if TSICR (POSTED bit) is cleared to 0 in the timer control register.

This mode uses a non posted-write scheme to update any internal register. That means the write transaction will not be acknowledged on the OCP interface, until the effective write operation occurs, after the resynchronisation in the timer clock domain. The drawback is that both the interconnect system and the CPU are stalled during this period.

- The latency of the interrupt serving is increased, as the interconnect system and CPU are stalled.
- An interconnect logic, including time-out logic to detect erroneous transactions, can generate an unwanted system abort event.

The stall period is defined as the interval between the non-posted write access request and the rise of the command accept signal and can be quantified:

T (stall max.) = 3 OCP clock + 2.5 TIMER clock

The time when the write accomplishes is:

T (write accomplish) = 1 OCP clock + 2.5 TIMER clock

A register read following a write to the same register is always coherent.

## 20.1.3.11 Read Registers Access

## 20.1.3.11.1 Read Posted

This mode can be used only if the functional frequency range is freq (timer) &lt; freq (OCP)/4.

This mode is used if TSICR (POSTED bit) is set to 1 in the timer control register.

This mode uses a posted-read scheme, for reading any internal register. The read transaction is immediately acknowledged on the OCP interface, and the value to be read has been previously resynchronised. This has the advantage of not stalling either the interconnect system, or the CPU that requested the read transaction. Refer to the AM335x errata for advisories associated with Posted mode.

## 20.1.3.11.2 Read Non-Posted

This mode is functional whatever the ratio between the OCP interface frequency and the functional clock frequency. Recommended functional frequency range is freq (timer) &gt;= freq (OCP)/4.

This mode is used if TSICR (POSTED bit) is cleared to 0 in the timer control register.

This mode uses a non posted-read scheme, for reading any internal register. The read transaction will not be acknowledged on the OCP interface, until the effective read operation occurs, after the resynchronisation in the timer clock domain. The drawback is that both the interconnect system and the CPU are stalled during this period.

- The latency of the interrupt serving is increased, as the interconnect system and the CPU are stalled.
- An interconnect system including time-out logic to detect erroneous transactions can generate an unwanted system abort event.

This mode applies only to three registers: TCRR, TCAR1 and TCAR2, which need resynchronisation from functional to OCP clock domains.

The stall period is defined as the interval between the non-posted read access request and the rise of the command accept signal and can be quantified:

T (stall max.) = 3 OCP clock + 2.5 TIMER clock

The time when the value is sampled is:

T (read sample) = 1 OCP clock + 2.5 TIMER clock

<!-- image -->