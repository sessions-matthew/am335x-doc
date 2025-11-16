## 15.2.2 Functional Description

Seven submodules are included in every ePWM peripheral. There are some instances that include a highresolution submodule that allows more precise control of the PWM outputs. Each of these submodules performs specific tasks that can be configured by software.

## 15.2.2.1 Overview

Table 15-10 lists the eight key submodules together with a list of their main configuration parameters. For example, if you need to adjust or control the duty cycle of a PWM waveform, then you should see the counter-compare submodule in Section 15.2.2.4 for relevant details.

Table 15-10. Submodule Configuration Parameters

| Submodule             | Configuration Parameter or Option                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-----------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Time-base (TB)        | • Scale the time-base clock (TBCLK) relative to the system clock (SYSCLKOUT). • Configure the PWM time-base counter (TBCNT) frequency or period. • Set the mode for the time-base counter: - count-up mode: used for asymmetric PWM - count-down mode: used for asymmetric PWM - count-up-and-down mode: used for symmetric PWM • Configure the time-base phase relative to another ePWM module. • Synchronize the time-base counter between modules through hardware or software. • Configure the direction (up or down) of the time-base counter after a synchronization event. • Configure how the time-base counter will behave when the device is halted by an emulator. • Specify the source for the synchronization output of the ePWM module: - Synchronization input signal - Time-base counter equal to zero - Time-base counter equal to counter-compare B (CMPB) |
| Counter-compare (CC)  | • Specify the PWM duty cycle for output EPWMxA and/or output EPWMxB • Specify the time at which switching events occur on the EPWMxA or EPWMxB output                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Action-qualifier (AQ) | • Specify the type of action taken when a time-base or counter-compare submodule event occurs: - No action taken - Output EPWMxA and/or EPWMxB switched high - Output EPWMxA and/or EPWMxB switched low - Output EPWMxA and/or EPWMxB toggled • Force the PWM output state through software control • Configure and control the PWM dead-band through software                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| Dead-band (DB)        | • Control of traditional complementary dead-band relationship between upper and lower switches • Specify the output rising-edge-delay value • Specify the output falling-edge delay value • Bypass the dead-band module entirely. In this case the PWM waveform is passed through                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| PWM-chopper (PC)      | • Create a chopping (carrier) frequency. • Pulse width of the first pulse in the chopped pulse train. • Duty cycle of the second and subsequent pulses. • Bypass the PWM-chopper module entirely. In this case the PWM waveform is passed through without modification.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

www.ti.com

Table 15-10. Submodule Configuration Parameters (continued)

| Submodule                   | Configuration Parameter or Option                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-----------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Trip-zone (TZ)              | • Configure the ePWM module to react to one, all, or none of the trip-zone pins. • Specify the tripping action taken when a fault occurs: - Force EPWMxA and/or EPWMxB high - Force EPWMxA and/or EPWMxB low - Force EPWMxA and/or EPWMxB to a high-impedance state - Configure EPWMxA and/or EPWMxB to ignore any trip condition. • Configure how often the ePWM will react to each trip-zone pin: - One-shot - Cycle-by-cycle • Enable the trip-zone to initiate an interrupt. • Bypass the trip-zone module entirely. |
| Event-trigger (ET)          | • Enable the ePWM events that will trigger an interrupt. • Specify the rate at which events cause triggers (every occurrence or every second or third occurrence)                                                                                                                                                                                                                                                                                                                                                        |
| High-Resolution PWM (HRPWM) | • Enable extended time resolution capabilities • Configure finer time granularity control or edge positioning                                                                                                                                                                                                                                                                                                                                                                                                            |

Code examples are provided in the remainder of this chapter that show how to implement various ePWM module configurations. These examples use the constant definitions shown in Example 15-1.

## Example 15-1. Constant Definitions Used in the Code Examples

| // TBCTL                                                                                                           | (Time-Base Control)                                                                                                |                                                                                                                    |
|--------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------|
| // TBCNT #define                                                                                                   | MODE bits TB_COUNT_UP                                                                                              | 0x0                                                                                                                |
| #define                                                                                                            | TB_COUNT_DOWN                                                                                                      | 0x1                                                                                                                |
| #define                                                                                                            | TB_COUNT_UPDOWN                                                                                                    | 0x2                                                                                                                |
| #define // PHSEN bit                                                                                               | TB_FREEZE                                                                                                          | 0x3                                                                                                                |
| #define                                                                                                            | TB_DISABLE                                                                                                         | 0x0                                                                                                                |
| #define // PRDLD bit                                                                                               | TB_ENABLE                                                                                                          | 0x1                                                                                                                |
| #define                                                                                                            | TB_SHADOW                                                                                                          | 0x0                                                                                                                |
| #define // SYNCOSEL                                                                                                | TB_IMMEDIATE bits                                                                                                  | 0x1                                                                                                                |
| #define                                                                                                            | TB_SYNC_IN                                                                                                         | 0x0                                                                                                                |
| #define                                                                                                            | TB_CTR_ZERO                                                                                                        | 0x1                                                                                                                |
| #define                                                                                                            | TB_CTR_CMPB                                                                                                        | 0x2                                                                                                                |
| #define                                                                                                            | TB_SYNC_DISABLE                                                                                                    | 0x3                                                                                                                |
| // HSPCLKDIV #define                                                                                               | and CLKDIV bits TB_DIV1                                                                                            | 0x0                                                                                                                |
| #define                                                                                                            | TB_DIV2                                                                                                            | 0x1                                                                                                                |
| #define // PHSDIR bit                                                                                              | TB_DIV4                                                                                                            | 0x2                                                                                                                |
| #define                                                                                                            | TB_DOWN                                                                                                            | 0x0                                                                                                                |
| #define                                                                                                            | TB_UP                                                                                                              | 0x1                                                                                                                |
| // CMPCTL (Compare Control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // LOADAMODE and LOADBMODE bits | // CMPCTL (Compare Control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // LOADAMODE and LOADBMODE bits | // CMPCTL (Compare Control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // LOADAMODE and LOADBMODE bits |
| #define                                                                                                            | CC_CTR_ZERO                                                                                                        | 0x0                                                                                                                |
| #define                                                                                                            | CC_CTR_PRD                                                                                                         | 0x1                                                                                                                |
| #define                                                                                                            | CC_CTR_ZERO_PRD                                                                                                    | 0x2                                                                                                                |
| #define // SHDWAMODE                                                                                               | CC_LD_DISABLE and SHDWBMODE bits                                                                                   | 0x3                                                                                                                |

## Example 15-1. Constant Definitions Used in the Code Examples (continued)

```
#define CC_SHADOW 0x0 #define CC_IMMEDIATE 0x1 // AQCTLA and AQCTLB (Action-qualifier Control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // ZRO, PRD, CAU, CAD, CBU, CBD bits #define AQ_NO_ACTION 0x0 #define AQ_CLEAR 0x1 #define AQ_SET 0x2 #define AQ_TOGGLE 0x3 // DBCTL (Dead-Band Control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // MODE bits #define DB_DISABLE 0x0 #define DBA_ENABLE 0x1 #define DBB_ENABLE 0x2 #define DB_FULL_ENABLE 0x3 // POLSEL bits #define DB_ACTV_HI 0x0 #define DB_ACTV_LOC 0x1 #define DB_ACTV_HIC 0x2 #define DB_ACTV_LO 0x3 // PCCTL (chopper control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // CHPEN bit #define CHP_ENABLE 0x0 #define CHP_DISABLE 0x1 // CHPFREQ bits #define CHP_DIV1 0x0 #define CHP_DIV2 0x1 #define CHP_DIV3 0x2 #define CHP_DIV4 0x3 #define CHP_DIV5 0x4 #define CHP_DIV6 0x5 #define CHP_DIV7 0x6 #define CHP_DIV8 0x7 // CHPDUTY bits #define CHP1_8TH 0x0 #define CHP2_8TH 0x1 #define CHP3_8TH 0x2 #define CHP4_8TH 0x3 #define CHP5_8TH 0x4 #define CHP6_8TH 0x5 #define CHP7_8TH 0x6 // TZSEL (Trip-zone Select) // = = = = = = = = = = = = = = = = = = = = = = = = = = // CBCn and OSHTn bits #define TZ_ENABLE 0x0 #define TZ_DISABLE 0x1 // TZCTL (Trip-zone Control) // = = = = = = = = = = = = = = = = = = = = = = = = = = // TZA and TZB bits #define TZ_HIZ 0x0 #define TZ_FORCE_HI 0x1 #define TZ_FORCE_LO 0x2 #define TZ_DISABLE 0x3 // ETSEL (Event-trigger Select) // = = = = = = = = = = = = = = = = = = = = = = = = = = // INTSEL, SOCASEL, SOCBSEL bits #define ET_CTR_ZERO 0x1 #define ET_CTR_PRD 0x2 #define ET_CTRU_CMPA 0x4 #define ET_CTRD_CMPA 0x5 #define ET_CTRU_CMPB 0x6 #define ET_CTRD_CMPB 0x7
```

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Example 15-1. Constant Definitions Used in the Code Examples (continued)

```
// ETPS (Event-trigger Prescale) // = = = = = = = = = = = = = = = = = = = = = = = = = = // INTPRD, SOCAPRD, SOCBPRD bits #define ET_DISABLE 0x0 #define ET_1ST 0x1 #define ET_2ND 0x2 #define ET_3RD 0x3
```

## 15.2.2.2 Proper Interrupt Initialization Procedure

When the ePWM peripheral clock is enabled it may be possible that interrupt flags may be set due to spurious events due to the ePWM registers not being properly initialized. The proper procedure for initializing the ePWM peripheral is:

1. Disable global interrupts (CPU INTM flag)
2. Disable ePWM interrupts
3. Initialize peripheral registers
4. Clear any spurious ePWM flags
5. Enable ePWM interrupts
6. Enable global interrupts

## 15.2.2.3 Time-Base (TB) Submodule

Each ePWM module has its own time-base submodule that determines all of the event timing for the ePWM module. Built-in synchronization logic allows the time-base of multiple ePWM modules to work together as a single system. Figure 15-10 illustrates the time-base module's place within the ePWM.

Figure 15-10. Time-Base Submodule Block Diagram

<!-- image -->

## 15.2.2.3.1 Purpose of the Time-Base Submodule

You can configure the time-base submodule for the following:

- Specify the ePWM time-base counter (TBCNT) frequency or period to control how often events occur.
- Manage time-base synchronization with other ePWM modules.
- Maintain a phase relationship with other ePWM modules.
- Set the time-base counter to count-up, count-down, or count-up-and-down mode.
- Generate the following events:
- -CTR = PRD: Time-base counter equal to the specified period (TBCNT = TBPRD) .
- -CTR = 0: Time-base counter equal to zero (TBCNT = 0000h).
- Configure the rate of the time-base clock; a prescaled version of the CPU system clock (SYSCLKOUT). This allows the time-base counter to increment/decrement at a slower rate.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 15.2.2.3.2 Controlling and Monitoring the Time-Base Submodule

Table 15-11 lists the registers used to control and monitor the time-base submodule.

Table 15-11. Time-Base Submodule Registers

| Acronym   | Register Description               | Address Offset   | Shadowed   |
|-----------|------------------------------------|------------------|------------|
| TBCTL     | Time-Base Control Register         | 0h               | No         |
| TBSTS     | Time-Base Status Register          | 2h               | No         |
| TBPHSHR   | HRPWM extension Phase Register (1) | 4h               | No         |
| TBPHS     | Time-Base Phase Register           | 6h               | No         |
| TBCNT     | Time-Base Counter Register         | 8h               | No         |
| TBPRD     | Time-Base Period Register          | Ah               | Yes        |

(1) This register is available only on ePWM instances that include the high-resolution extension (HRPWM). On ePWM modules that do not include the HRPWM, this location is reserved. See Section 15.1.2 to determine which ePWM instances include this feature.

Figure 15-11 shows the critical signals and registers of the time-base submodule. Table 15-12 provides descriptions of the key signals associated with the time-base submodule.

Figure 15-11. Time-Base Submodule Signals and Registers

<!-- image -->

## Table 15-12. Key Time-Base Signals

| Signal     | Description                                                                                                                                                                                                                                                                                                                      |
|------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| EPWMxSYNCI | Time-base synchronization input. Input pulse used to synchronize the time-base counter with the counter of ePWM module earlier in the                                                                                                                                                                                            |
| EPWMxSYNCO | Time-base synchronization output. This output pulse is used to synchronize the counter of an ePWM module later in the synchronization chain. The ePWM module generates this signal from one of three event sources: 1. EPWMxSYNCI (Synchronization input pulse) 2. CTR = 0: The time-base counter equal to zero (TBCNT = 0000h). |
| CTR = PRD  | Time-base counter equal to the specified period. This signal is generated whenever the counter value is equal to the active period register value. That is when TBCNT = TBPRD.                                                                                                                                                   |
| CTR = 0    | Time-base counter equal to zero.                                                                                                                                                                                                                                                                                                 |
| CTR = CMPB | Time-base counter equal to active counter-compare B register (TBCNT = CMPB). This event is generated by the counter-compare submodule and used by the synchronization out logic.                                                                                                                                                 |
| CTR_dir    | Time-base counter direction. Indicates the current direction of the ePWM's time-base counter. This signal is high when the counter is increasing and low when it is decreasing.                                                                                                                                                  |
| CTR_max    | Time-base counter equal max value. (TBCNT = FFFFh) Generated event when the TBCNT value reaches its maximum value. This signal is only used only as a status bit.                                                                                                                                                                |
| TBCLK      | Time-base clock. version of                                                                                                                                                                                                                                                                                                      |
|            | This is a prescaled the system clock (SYSCLKOUT) and is used by all submodules within the                                                                                                                                                                                                                                        |

## 15.2.2.3.3 Calculating PWM Period and Frequency

The frequency of PWM events is controlled by the time-base period (TBPRD) register and the mode of the time-base counter. Figure 15-12 shows the period (T pwm ) and frequency (F pwm ) relationships for the upcount, down-count, and up-down-count time-base counter modes when when the period is set to 4 (TBPRD = 4). The time increment for each step is defined by the time-base clock (TBCLK) which is a prescaled version of the system clock (SYSCLKOUT).

The time-base counter has three modes of operation selected by the time-base control register (TBCTL):

- Up-Down-Count Mode: In up-down-count mode, the time-base counter starts from zero and increments until the period (TBPRD) value is reached. When the period value is reached, the timebase counter then decrements until it reaches zero. At this point the counter repeats the pattern and begins to increment.
- Up-Count Mode: In this mode, the time-base counter starts from zero and increments until it reaches the value in the period register (TBPRD). When the period value is reached, the time-base counter resets to zero and begins to increment once again.
- Down-Count Mode: In down-count mode, the time-base counter starts from the period (TBPRD) value and decrements until it reaches zero. When it reaches zero, the time-base counter is reset to the period value and it begins to decrement once again.

<!-- image -->

<!-- image -->

www.ti.com

Figure 15-12. Time-Base Frequency and Period

<!-- image -->

## 15.2.2.3.3.1 Time-Base Period Shadow Register

The time-base period register (TBPRD) has a shadow register. Shadowing allows the register update to be synchronized with the hardware. The following definitions are used to describe all shadow registers in the ePWM module:

- Active Register: The active register controls the hardware and is responsible for actions that the hardware causes or invokes.
- Shadow Register: The shadow register buffers or provides a temporary holding location for the active register. It has no direct effect on any control hardware. At a strategic point in time the shadow register's content is transferred to the active register. This prevents corruption or spurious operation due to the register being asynchronously modified by software.

The memory address of the shadow period register is the same as the active register. Which register is written to or read from is determined by the TBCTL[PRDLD] bit. This bit enables and disables the TBPRD shadow register as follows:

- Time-Base Period Shadow Mode: The TBPRD shadow register is enabled when TBCTL[PRDLD] = 0. Reads from and writes to the TBPRD memory address go to the shadow register. The shadow register contents are transferred to the active register (TBPRD (Active) ← TBPRD (shadow)) when the time-base counter equals zero (TBCNT = 0000h). By default the TBPRD shadow register is enabled.
- Time-Base Period Immediate Load Mode: If immediate load mode is selected (TBCTL[PRDLD] = 1), then a read from or a write to the TBPRD memory address goes directly to the active register.

## 15.2.2.3.3.2 Time-Base Counter Synchronization

A time-base synchronization scheme connects all of the ePWM modules on a device. Each ePWM module has a synchronization input (EPWMxSYNCI) and a synchronization output (EPWMxSYNCO). The synchronization input can come from an external pin or another ePWM module. An example of synchronization connections for the remaining ePWM modules is shown in Section 15.1.2.

Figure 15-13. Time-Base Counter Synchronization Scheme 1

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

Each ePWM module can be configured to use or ignore the synchronization input. If the TBCTL[PHSEN] bit is set, then the time-base counter (TBCNT) of the ePWM module will be automatically loaded with the phase register (TBPHS) contents when one of the following conditions occur:

- EPWMxSYNCI: Synchronization Input Pulse: The value of the phase register is loaded into the counter register when an input synchronization pulse is detected (TBPHS → TBCNT). This operation occurs on the next valid time-base clock (TBCLK) edge.
- Software Forced Synchronization Pulse: Writing a 1 to the TBCTL[SWFSYNC] control bit invokes a software forced synchronization. This pulse is ORed with the synchronization input signal, and therefore has the same effect as a pulse on EPWMxSYNCI.

This feature enables the ePWM module to be automatically synchronized to the time base of another ePWM module. Lead or lag phase control can be added to the waveforms generated by different ePWM modules to synchronize them. In up-down-count mode, the TBCTL[PSHDIR] bit configures the direction of the time-base counter immediately after a synchronization event. The new direction is independent of the direction prior to the synchronization event. The TBPHS bit is ignored in count-up or count-down modes. See Figure 15-14 through Figure 15-17 for examples.

Clearing the TBCTL[PHSEN] bit configures the ePWM to ignore the synchronization input pulse. The synchronization pulse can still be allowed to flow-through to the EPWMxSYNCO and be used to synchronize other ePWM modules. In this way, you can set up a master time-base (for example, ePWM0) and downstream modules (ePWM1 - ePWMx) may elect to run in synchronization with the master.

## 15.2.2.3.4 Phase Locking the Time-Base Clocks of Multiple ePWM Modules

The TBCLKEN bit in the PWMSS\_CTRL register in the Control Module can be used to globally synchronize the time-base clocks of all enabled ePWM modules on a device. The TBCLKEN bit is part of the chip configuration registers and is described in Chapter 9. When TBCLKEN = 0, the time-base clock of all ePWM modules is stopped (default). When TBCLKEN = 1, all ePWM time-base clocks are started with the rising edge of TBCLK aligned. For perfectly synchronized TBCLKs, the prescaler bits in the TBCTL register of each ePWM module must be set identically. The proper procedure for enabling the ePWM clocks is as follows:

1. Enable the ePWM module clocks.
2. Set TBCLKEN = 0. This will stop the time-base clock within any enabled ePWM module.
3. Configure the prescaler values and desired ePWM modes.
4. Set TBCLKEN = 1.

## 15.2.2.3.5 Time-Base Counter Modes and Timing Waveforms

The time-base counter operates in one of four modes:

- Up-count mode which is asymmetrical.
- Down-count mode which is asymmetrical.
- Up-down-count which is symmetrical.
- Frozen where the time-base counter is held constant at the current value.

To illustrate the operation of the first three modes, Figure 15-14 to Figure 15-17 show when events are generated and how the time-base responds to an EPWMxSYNCI signal.

<!-- image -->

Figure 15-14. Time-Base Up-Count Mode Waveforms

<!-- image -->

<!-- image -->

www.ti.com

Figure 15-15. Time-Base Down-Count Mode Waveforms

<!-- image -->

Figure 15-16. Time-Base Up-Down-Count Waveforms, TBCTL[PHSDIR = 0] Count Down on Synchronization Event

<!-- image -->

<!-- image -->

Figure 15-17. Time-Base Up-Down Count Waveforms, TBCTL[PHSDIR = 1] Count Up on Synchronization Event

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.4 Counter-Compare (CC) Submodule

Figure 15-18 illustrates the counter-compare submodule within the ePWM. Figure 15-19 shows the basic structure of the counter-compare submodule.

Figure 15-18. Counter-Compare Submodule

<!-- image -->

Figure 15-19. Counter-Compare Submodule Signals and Registers

<!-- image -->

## 15.2.2.4.1 Purpose of the Counter-Compare Submodule

The counter-compare submodule takes as input the time-base counter value. This value is continuously compared to the counter-compare A (CMPA) and counter-compare B (CMPB) registers. When the timebase counter is equal to one of the compare registers, the counter-compare unit generates an appropriate event.

The counter-compare submodule:

- Generates events based on programmable time stamps using the CMPA and CMPB registers
- -CTR = CMPA: Time-base counter equals counter-compare A register (TBCNT = CMPA).
- -CTR = CMPB: Time-base counter equals counter-compare B register (TBCNT = CMPB)
- Controls the PWM duty cycle if the action-qualifier submodule is configured appropriately
- Shadows new compare values to prevent corruption or glitches during the active PWM cycle

## 15.2.2.4.2 Controlling and Monitoring the Counter-Compare Submodule

Table 15-13 lists the registers used to control and monitor the counter-compare submodule. Table 15-14 lists the key signals associated with the counter-compare submodule.

Table 15-13. Counter-Compare Submodule Registers

| Acronym   | Register Description                           | Address Offset   | Shadowed   |
|-----------|------------------------------------------------|------------------|------------|
| CMPCTL    | Counter-Compare Control Register.              | Eh               | No         |
| CMPAHR    | HRPWM Counter-Compare A Extension Register (1) | 10h              | Yes        |
| CMPA      | Counter-Compare A Register                     | 12h              | Yes        |
| CMPB      | Counter-Compare B Register                     | 14h              | Yes        |

(1) This register is available only on ePWM modules with the high-resolution extension (HRPWM). On ePWM modules that do not include the HRPWM, this location is reserved. See Section 15.1.2 to determine which ePWM instances include this feature.

Table 15-14. Counter-Compare Submodule Key Signals

| Signal     | Description of Event                                                                                                         | Registers Compared   |
|------------|------------------------------------------------------------------------------------------------------------------------------|----------------------|
| CTR = CMPA | Time-base counter equal to the active counter-compare A value                                                                | TBCNT = CMPA         |
| CTR = CMPB | Time-base counter equal to the active counter-compare B value                                                                | TBCNT = CMPB         |
| CTR = PRD  | Time-base counter equal to the active period. Used to load active counter-compare A and B registers from the shadow register | TBCNT = TBPRD        |
| CTR = 0    | Time-base counter equal to zero. Used to load active counter-compare A and B registers from the shadow register              | TBCNT = 0000h        |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.4.3 Operational Highlights for the Counter-Compare Submodule

The counter-compare submodule is responsible for generating two independent compare events based on two compare registers:

1. CTR = CMPA: Time-base counter equal to counter-compare A register (TBCNT = CMPA).
2. CTR = CMPB: Time-base counter equal to counter-compare B register (TBCNT = CMPB).

For up-count or down-count mode, each event occurs only once per cycle. For up-down-count mode each event occurs twice per cycle, if the compare value is between 0000h and TBPRD; and occurs once per cycle, if the compare value is equal to 0000h or equal to TBPRD. These events are fed into the actionqualifier submodule where they are qualified by the counter direction and converted into actions if enabled. Refer to Section 15.2.2.5.1 for more details.

The counter-compare registers CMPA and CMPB each have an associated shadow register. Shadowing provides a way to keep updates to the registers synchronized with the hardware. When shadowing is used, updates to the active registers only occurs at strategic points. This prevents corruption or spurious operation due to the register being asynchronously modified by software. The memory address of the active register and the shadow register is identical. Which register is written to or read from is determined by the CMPCTL[SHDWAMODE] and CMPCTL[SHDWBMODE] bits. These bits enable and disable the CMPA shadow register and CMPB shadow register respectively. The behavior of the two load modes is described below:

- Shadow Mode: The shadow mode for the CMPA is enabled by clearing the CMPCTL[SHDWAMODE] bit and the shadow register for CMPB is enabled by clearing the CMPCTL[SHDWBMODE] bit. Shadow mode is enabled by default for both CMPA and CMPB.

If the shadow register is enabled then the content of the shadow register is transferred to the active register on one of the following events:

- -CTR = PRD: Time-base counter equal to the period (TBCNT = TBPRD).
- -CTR = 0: Time-base counter equal to zero (TBCNT = 0000h)
- -Both CTR = PRD and CTR = 0

Which of these three events is specified by the CMPCTL[LOADAMODE] and CMPCTL[LOADBMODE] register bits. Only the active register contents are used by the counter-compare submodule to generate events to be sent to the action-qualifier.

- Immediate Load Mode: If immediate load mode is selected (TBCTL[SHADWAMODE] = 1 or TBCTL[SHADWBMODE] = 1), then a read from or a write to the register will go directly to the active register.

## 15.2.2.4.4 Count Mode Timing Waveforms

The counter-compare module can generate compare events in all three count modes:

- Up-count mode: used to generate an asymmetrical PWM waveform.
- Down-count mode: used to generate an asymmetrical PWM waveform.
- Up-down-count mode: used to generate a symmetrical PWM waveform.

To best illustrate the operation of the first three modes, the timing diagrams in Figure 15-20 to Figure 1523 show when events are generated and how the EPWMxSYNCI signal interacts.

<!-- image -->

Figure 15-20. Counter-Compare Event Waveforms in Up-Count Mode

<!-- image -->

Figure 15-21. Counter-Compare Events in Down-Count Mode

<!-- image -->

<!-- image -->

www.ti.com

Figure 15-22. Counter-Compare Events in Up-Down-Count Mode, TBCTL[PHSDIR = 0] Count Down on Synchronization Event

<!-- image -->

Figure 15-23. Counter-Compare Events in Up-Down-Count Mode, TBCTL[PHSDIR = 1] Count Up on Synchronization Event

<!-- image -->

## 15.2.2.5 Action-Qualifier (AQ) Submodule

Figure 15-24 shows the action-qualifier (AQ) submodule (see shaded block) in the ePWM system. The action-qualifier submodule has the most important role in waveform construction and PWM generation. It decides which events are converted into various action types, thereby producing the required switched waveforms at the EPWMxA and EPWMxB outputs.

Figure 15-24. Action-Qualifier Submodule

<!-- image -->

## 15.2.2.5.1 Purpose of the Action-Qualifier Submodule

The action-qualifier submodule is responsible for the following:

- Qualifying and generating actions (set, clear, toggle) based on the following events:
- -CTR = PRD: Time-base counter equal to the period (TBCNT = TBPRD)
- -CTR = 0: Time-base counter equal to zero (TBCNT = 0000h)
- -CTR = CMPA: Time-base counter equal to the counter-compare A register (TBCNT = CMPA)
- -CTR = CMPB: Time-base counter equal to the counter-compare B register (TBCNT = CMPB)
- Managing priority when these events occur concurrently
- Providing independent control of events when the time-base counter is increasing and when it is decreasing.

## 15.2.2.5.2 Controlling and Monitoring the Action-Qualifier Submodule

Table 15-15 lists the registers used to control and monitor the action-qualifier submodule.

Table 15-15. Action-Qualifier Submodule Registers

| Acronym   | Register Description                                    | Address Offset   | Shadowed   |
|-----------|---------------------------------------------------------|------------------|------------|
| AQCTLA    | Action-Qualifier Control Register For Output A (EPWMxA) | 16h              | No         |
| AQCTLB    | Action-Qualifier Control Register For Output B (EPWMxB) | 18h              | No         |
| AQSFRC    | Action-Qualifier Software Force Register                | 1Ah              | No         |
| AQCSFRC   | Action-Qualifier Continuous Software Force              | 1Ch              | Yes        |

<!-- image -->

<!-- image -->

www.ti.com

The action-qualifier submodule is based on event-driven logic. It can be thought of as a programmable cross switch with events at the input and actions at the output, all of which are software controlled via the set of registers shown in Figure 15-25. The possible input events are summarized again in Table 15-16.

Figure 15-25. Action-Qualifier Submodule Inputs and Outputs

<!-- image -->

Table 15-16. Action-Qualifier Submodule Possible Input Events

| Signal                | Description                                      | Registers Compared   |
|-----------------------|--------------------------------------------------|----------------------|
| CTR = PRD             | Time-base counter equal to the period value      | TBCNT = TBPRD        |
| CTR = 0               | Time-base counter equal to zero                  | TBCNT = 0000h        |
| CTR = CMPA            | Time-base counter equal to the counter-compare A | TBCNT = CMPA         |
| CTR = CMPB            | Time-base counter equal to the counter-compare B | TBCNT = CMPB         |
| Software forced event | Asynchronous event initiated by software         |                      |

The software forced action is a useful asynchronous event. This control is handled by registers AQSFRC and AQCSFRC.

The action-qualifier submodule controls how the two outputs EPWMxA and EPWMxB behave when a particular event occurs. The event inputs to the action-qualifier submodule are further qualified by the counter direction (up or down). This allows for independent action on outputs on both the count-up and count-down phases.

The possible actions imposed on outputs EPWMxA and EPWMxB are:

- Set High: Set output EPWMxA or EPWMxB to a high level.
- Clear Low: Set output EPWMxA or EPWMxB to a low level.
- Toggle: If EPWMxA or EPWMxB is currently pulled high, then pull the output low. If EPWMxA or EPWMxB is currently pulled low, then pull the output high.
- Do Nothing: Keep outputs EPWMxA and EPWMxB at same level as currently set. Although the "Do Nothing" option prevents an event from causing an action on the EPWMxA and EPWMxB outputs, this event can still trigger interrupts. See the event-trigger submodule description in Section 15.2.2.9 for details.

<!-- image -->

Actions are specified independently for either output (EPWMxA or EPWMxB). Any or all events can be configured to generate actions on a given output. For example, both CTR = CMPA and CTR = CMPB can operate on output EPWMxA. All qualifier actions are configured via the control registers found at the end of this section.

For clarity, the drawings in this chapter use a set of symbolic actions. These symbols are summarized in Figure 15-26. Each symbol represents an action as a marker in time. Some actions are fixed in time (zero and period) while the CMPA and CMPB actions are moveable and their time positions are programmed via the counter-compare A and B registers, respectively. To turn off or disable an action, use the "Do Nothing option"; it is the default at reset.

Figure 15-26. Possible Action-Qualifier Actions for EPWMxA and EPWMxB Outputs

<!-- image -->

| S/W force   | TB Counter equals:   | TB Counter equals:   | TB Counter equals:   | TB Counter equals:   | Actions    |
|-------------|----------------------|----------------------|----------------------|----------------------|------------|
| S/W force   | Zero                 | Comp A               | Comp B               | Period               |            |
| SW          | Z                    | CA                   | CB                   | P                    | Do Nothing |
| SW          | Z                    | CA                   | CB                   | P                    | Clear Low  |
| SW          | Z                    | CA                   | CB                   | P                    | Set High   |
| SW T        | Z T                  | CA T                 | CB T                 | P T                  | Toggle     |

<!-- image -->

www.ti.com

## 15.2.2.5.3 Action-Qualifier Event Priority

It is possible for the ePWM action qualifier to receive more than one event at the same time. In this case events are assigned a priority by the hardware. The general rule is events occurring later in time have a higher priority and software forced events always have the highest priority. The event priority levels for updown-count mode are shown in Table 15-17. A priority level of 1 is the highest priority and level 7 is the lowest. The priority changes slightly depending on the direction of TBCNT.

Table 15-17. Action-Qualifier Event Priority for Up-Down-Count Mode

| Priority Level   | Event if TBCNT is Incrementing TBCNT = 0 up to TBCNT = TBPRD   | Event if TBCNT is Decrementing TBCNT = TBPRD down to TBCNT = 1   |
|------------------|----------------------------------------------------------------|------------------------------------------------------------------|
| 1 (Highest)      | Software forced event                                          | Software forced event                                            |
| 2                | Counter equals CMPB on up-count (CBU)                          | Counter equals CMPB on down-count (CBD)                          |
| 3                | Counter equals CMPA on up-count (CAU)                          | Counter equals CMPA on down-count (CAD)                          |
| 4                | Counter equals zero                                            | Counter equals period (TBPRD)                                    |
| 5                | Counter equals CMPB on down-count (CBD) (1)                    | Counter equals CMPB on up-count (CBU) (1)                        |
| 6 (Lowest)       | Counter equals CMPA on down-count (CAD) (1)                    | Counter equals CMPA on up-count (CBU) (1)                        |

(1) To maintain symmetry for up-down-count mode, both up-events (CAU/CBU) and down-events (CAD/CBD) can be generated for TBPRD. Otherwise, up-events can occur only when the counter is incrementing and down-events can occur only when the counter is decrementing.

Table 15-18 shows the action-qualifier priority for up-count mode. In this case, the counter direction is always defined as up and thus down-count events will never be taken.

Table 15-18. Action-Qualifier Event Priority for Up-Count Mode

| Priority Level   | Event                                   |
|------------------|-----------------------------------------|
| 1 (Highest)      | Software forced event                   |
| 2                | Counter equal to period (TBPRD)         |
| 3                | Counter equal to CMPB on up-count (CBU) |
| 4                | Counter equal to CMPA on up-count (CAU) |
| 5 (Lowest)       | Counter equal to Zero                   |

Table 15-19 shows the action-qualifier priority for down-count mode. In this case, the counter direction is always defined as down and thus up-count events will never be taken.

Table 15-19. Action-Qualifier Event Priority for Down-Count Mode

| Priority Level   | Event                                     |
|------------------|-------------------------------------------|
| 1 (Highest)      | Software forced event                     |
| 2                | Counter equal to Zero                     |
| 3                | Counter equal to CMPB on down-count (CBD) |
| 4                | Counter equal to CMPA on down-count (CAD) |
| 5 (Lowest)       | Counter equal to period (TBPRD)           |

<!-- image -->

It is possible to set the compare value greater than the period. In this case the action will take place as shown in Table 15-20.

Table 15-20. Behavior if CMPA/CMPB is Greater than the Period

| Counter Mode       | Compare on Up-Count Event CAU/CBU                                                                                                                                                                | Compare on Down-Count Event CAU/CBU                                                                                                                                                         |
|--------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Up-Count Mode      | If CMPA/CMPB ≤ TBPRD period, then the event occurs on a compare match (TBCNT = CMPA or CMPB). If CMPA/CMPB > TBPRD, then the event will not occur.                                               | Never occurs.                                                                                                                                                                               |
| Down-Count Mode    | Never occurs.                                                                                                                                                                                    | If CMPA/CMPB < TBPRD, the event will occur on a compare match (TBCNT = CMPA or CMPB). If CMPA/CMPB ≥ TBPRD, the event will occur on a period match (TBCNT = TBPRD).                         |
| Up-Down-Count Mode | If CMPA/CMPB < TBPRD and the counter is incrementing, the event occurs on a compare match (TBCNT = CMPA or CMPB). If CMPA/CMPB is ≥ TBPRD, the event will occur on period match (TBCNT = TBPRD). | If CMPA/CMPB < TBPRD and the counter is decrementing, the event occurs on a compare match (TBCNT = CMPA or CMPB). If CMPA/CMPB ≥ TBPRD, the event occurs on a period match (TBCNT = TBPRD). |

## 15.2.2.5.4 Waveforms for Common Configurations

## NOTE:

The waveforms in this chapter show the ePWMs behavior for a static compare register value. In a running system, the active compare registers (CMPA and CMPB) are typically updated from their respective shadow registers once every period. The user specifies when the update will take place; either when the time-base counter reaches zero or when the timebase counter reaches period. There are some cases when the action based on the new value can be delayed by one period or the action based on the old value can take effect for an extra period. Some PWM configurations avoid this situation. These include, but are not limited to, the following:

## Use up-down-count mode to generate a symmetric PWM:

- If you load CMPA/CMPB on zero, then use CMPA/CMPB values greater than or equal to 1.
- If you load CMPA/CMPB on period, then use CMPA/CMPB values less than or equal to TBPRD - 1. This means there will always be a pulse of at least one TBCLK cycle in a PWM period which, when very short, tend to be ignored by the system.

## Use up-down-count mode to generate an asymmetric PWM:

- To achieve 50%-0% asymmetric PWM use the following configuration: Load CMPA/CMPB on period and use the period action to clear the PWM and a compare-up action to set the PWM. Modulate the compare value from 0 to TBPRD to achieve 50%-0% PWM duty.

## When using up-count mode to generate an asymmetric PWM:

- To achieve 0-100% asymmetric PWM use the following configuration: Load CMPA/CMPB on TBPRD. Use the Zero action to set the PWM and a compareup action to clear the PWM. Modulate the compare value from 0 to TBPRD+1 to achieve 0-100% PWM duty.

<!-- image -->

## www.ti.com

Figure 15-27 shows how a symmetric PWM waveform can be generated using the up-down-count mode of the TBCNT. In this mode 0%-100% DC modulation is achieved by using equal compare matches on the up count and down count portions of the waveform. In the example shown, CMPA is used to make the comparison. When the counter is incrementing the CMPA match will pull the PWM output high. Likewise, when the counter is decrementing the compare match will pull the PWM signal low. When CMPA = 0, the PWM signal is low for the entire period giving the 0% duty waveform. When CMPA = TBPRD, the PWM signal is high achieving 100% duty.

When using this configuration in practice, if you load CMPA/CMPB on zero, then use CMPA/CMPB values greater than or equal to 1. If you load CMPA/CMPB on period, then use CMPA/CMPB values less than or equal to TBPRD-1. This means there will always be a pulse of at least one TBCLK cycle in a PWM period which, when very short, tend to be ignored by the system.

Figure 15-27. Up-Down-Count Mode Symmetrical Waveform

<!-- image -->

<!-- image -->

The PWM waveforms in Figure 15-28 through Figure 15-33 show some common action-qualifier configurations. Some conventions used in the figures are as follows:

- TBPRD, CMPA, and CMPB refer to the value written in their respective registers. The active register, not the shadow register, is used by the hardware.
- CMPx, refers to either CMPA or CMPB.
- EPWMxA and EPWMxB refer to the output signals from ePWMx
- Up-Down means Count-up-and-down mode, Up means up-count mode and Dwn means down-count mode
- Sym = Symmetric, Asym = Asymmetric

Table 15-21 and Table 15-22 contains initialization and runtime register configurations for the waveforms in Figure 15-28.

Figure 15-28. Up, Single Edge Asymmetric Waveform, With Independent Modulation on EPWMxA and EPWMxB-Active High

<!-- image -->

- (1) PWM period = (TBPRD + 1 ) × TTBCLK
- (2) Duty modulation for EPWMxA is set by CMPA, and is active high (that is, high time duty proportional to CMPA).
- (3) Duty modulation for EPWMxB is set by CMPB and is active high (that is, high time duty proportional to CMPB).
- (4) The "Do Nothing" actions ( X ) are shown for completeness, but will not be shown on subsequent diagrams.
- (5) Actions at zero and period, although appearing to occur concurrently, are actually separated by one TBCLK period. TBCNT wraps from period to 0000h.

<!-- image -->

www.ti.com

Table 15-21. EPWMx Initialization for Figure 15-28

| Register   | Bit       | Value           | Comments                     |
|------------|-----------|-----------------|------------------------------|
| TBPRD      | TBPRD     | 600 (258h)      | Period = 601 TBCLK counts    |
| TBPHS      | TBPHS     | 0               | Clear Phase Register to 0    |
| TBCNT      | TBCNT     | 0               | Clear TB counter             |
| TBCTL      | CTRMODE   | TB_UP           |                              |
|            | PHSEN     | TB_DISABLE      | Phase loading disabled       |
|            | PRDLD     | TB_SHADOW       |                              |
|            | SYNCOSEL  | TB_SYNC_DISABLE |                              |
|            | HSPCLKDIV | TB_DIV1         | TBCLK = SYSCLK               |
|            | CLKDIV    | TB_DIV1         |                              |
| CMPA       | CMPA      | 350 (15Eh)      | Compare A = 350 TBCLK counts |
| CMPB       | CMPB      | 200 (C8h)       | Compare B = 200 TBCLK counts |
| CMPCTL     | SHDWAMODE | CC_SHADOW       |                              |
|            | SHDWBMODE | CC_SHADOW       |                              |
|            | LOADAMODE | CC_CTR_ZERO     | Load on CTR = 0              |
|            | LOADBMODE | CC_CTR_ZERO     | Load on CTR = 0              |
| AQCTLA     | ZRO       | AQ_SET          |                              |
|            | CAU       | AQ_CLEAR        |                              |
| AQCTLB     | ZRO       | AQ_SET          |                              |
|            | CBU       | AQ_CLEAR        |                              |

Table 15-22. EPWMx Run Time Changes for Figure 15-28

| Register   | Bit   | Value   | Comments                      |
|------------|-------|---------|-------------------------------|
| CMPA       | CMPA  | Duty1A  | Adjust duty for output EPWM1A |
| CMPB       | CMPB  | Duty1B  | Adjust duty for output EPWM1B |

<!-- image -->

www.ti.com

Table 15-23 and Table 15-24 contains initialization and runtime register configurations for the waveforms in Figure 15-29.

Figure 15-29. Up, Single Edge Asymmetric Waveform With Independent Modulation on EPWMxA and EPWMxB-Active Low

<!-- image -->

- (1) PWM period = (TBPRD + 1 ) × TTBCLK
- (2) Duty modulation for EPWMxA is set by CMPA, and is active low (that is, the low time duty is proportional to CMPA).
- (3) Duty modulation for EPWMxB is set by CMPB and is active low (that is, the low time duty is proportional to CMPB).
- (4) The Do Nothing actions ( X ) are shown for completeness here, but will not be shown on subsequent diagrams.
- (5) Actions at zero and period, although appearing to occur concurrently, are actually separated by one TBCLK period. TBCNT wraps from period to 0000h.

<!-- image -->

www.ti.com

## Table 15-23. EPWMx Initialization for Figure 15-29

| Register   | Bit       | Value           | Comments                     |
|------------|-----------|-----------------|------------------------------|
| TBPRD      | TBPRD     | 600 (258h)      | Period = 601 TBCLK counts    |
| TBPHS      | TBPHS     | 0               | Clear Phase Register to 0    |
| TBCNT      | TBCNT     | 0               | Clear TB counter             |
| TBCTL      | CTRMODE   | TB_UP           |                              |
|            | PHSEN     | TB_DISABLE      | Phase loading disabled       |
|            | PRDLD     | TB_SHADOW       |                              |
|            | SYNCOSEL  | TB_SYNC_DISABLE |                              |
|            | HSPCLKDIV | TB_DIV1         | TBCLK = SYSCLK               |
|            | CLKDIV    | TB_DIV1         |                              |
| CMPA       | CMPA      | 350 (15Eh)      | Compare A = 350 TBCLK counts |
| CMPB       | CMPB      | 200 (C8h)       | Compare B = 200 TBCLK counts |
| CMPCTL     | SHDWAMODE | CC_SHADOW       |                              |
|            | SHDWBMODE | CC_SHADOW       |                              |
|            | LOADAMODE | CC_CTR_ZERO     | Load on CTR = 0              |
|            | LOADBMODE | CC_CTR_ZERO     | Load on CTR = 0              |
| AQCTLA     | PRD       | AQ_CLEAR        |                              |
|            | CAU       | AQ_SET          |                              |
| AQCTLB     | PRD       | AQ_CLEAR        |                              |
|            | CBU       | AQ_SET          |                              |

Table 15-24. EPWMx Run Time Changes for Figure 15-29

| Register   | Bit   | Value   | Comments                      |
|------------|-------|---------|-------------------------------|
| CMPA       | CMPA  | Duty1A  | Adjust duty for output EPWM1A |
| CMPB       | CMPB  | Duty1B  | Adjust duty for output EPWM1B |

<!-- image -->

Table 15-25 and Table 15-26 contains initialization and runtime register configurations for the waveforms Figure 15-30. Use the code in Example 15-1 to define the headers.

Figure 15-30. Up-Count, Pulse Placement Asymmetric Waveform With Independent Modulation on EPWMxA

<!-- image -->

- (1) PWM frequency = 1/( (TBPRD + 1 ) × TTBCLK )
- (2) Pulse can be placed anywhere within the PWM cycle (0000h - TBPRD)
- (3) High time duty proportional to (CMPB - CMPA)
- (4) EPWMxB can be used to generate a 50% duty square wave with frequency = 1/2 × ((TBPRD + 1) × TBCLK)

<!-- image -->

Table 15-25. EPWMx Initialization for Figure 15-30

| Register   | Bit       | Value           | Comments                     |
|------------|-----------|-----------------|------------------------------|
| TBPRD      | TBPRD     | 600 (258h)      | Period = 601 TBCLK counts    |
| TBPHS      | TBPHS     | 0               | Clear Phase Register to 0    |
| TBCNT      | TBCNT     | 0               | Clear TB counter             |
| TBCTL      | CTRMODE   | TB_UP           |                              |
|            | PHSEN     | TB_DISABLE      | Phase loading disabled       |
|            | PRDLD     | TB_SHADOW       |                              |
|            | SYNCOSEL  | TB_SYNC_DISABLE |                              |
|            | HSPCLKDIV | TB_DIV1         | TBCLK = SYSCLK               |
|            | CLKDIV    | TB_DIV1         |                              |
| CMPA       | CMPA      | 200 (C8h)       | Compare A = 200 TBCLK counts |
| CMPB       | CMPB      | 400 (190h)      | Compare B = 400 TBCLK counts |
| CMPCTL     | SHDWAMODE | CC_SHADOW       |                              |
|            | SHDWBMODE | CC_SHADOW       |                              |
|            | LOADAMODE | CC_CTR_ZERO     | Load on CTR = 0              |
|            | LOADBMODE | CC_CTR_ZERO     | Load on CTR = 0              |
| AQCTLA     | CAU       | AQ_SET          |                              |
|            | CBU       | AQ_CLEAR        |                              |
| AQCTLB     | ZRO       | AQ_TOGGLE       |                              |

Table 15-26. EPWMx Run Time Changes for Figure 15-30

| Register   | Bit   | Value    | Comments                      |
|------------|-------|----------|-------------------------------|
| CMPA       | CMPA  | EdgePosA | Adjust duty for output EPWM1A |
| CMPB       | CMPB  | EdgePosB | Adjust duty for output EPWM1B |

<!-- image -->

Table 15-27 and Table 15-28 contains initialization and runtime register configurations for the waveforms in Figure 15-31. Use the code in Example 15-1 to define the headers.

Figure 15-31. Up-Down-Count, Dual Edge Symmetric Waveform, With Independent Modulation on EPWMxA and EPWMxB - Active Low

<!-- image -->

- (1) PWM period = 2 x TBPRD × TTBCLK
- (2) Duty modulation for EPWMxA is set by CMPA, and is active low (that is, the low time duty is proportional to CMPA).
- (3) Duty modulation for EPWMxB is set by CMPB and is active low (that is, the low time duty is proportional to CMPB).
- (4) Outputs EPWMxA and EPWMxB can drive independent power switches

<!-- image -->

www.ti.com

Table 15-27. EPWMx Initialization for Figure 15-31

| Register   | Bit       | Value           | Comments                     |
|------------|-----------|-----------------|------------------------------|
| TBPRD      | TBPRD     | 600 (258h)      | Period = 601 TBCLK counts    |
| TBPHS      | TBPHS     | 0               | Clear Phase Register to 0    |
| TBCNT      | TBCNT     | 0               | Clear TB counter             |
| TBCTL      | CTRMODE   | TB_UPDOWN       |                              |
|            | PHSEN     | TB_DISABLE      | Phase loading disabled       |
|            | PRDLD     | TB_SHADOW       |                              |
|            | SYNCOSEL  | TB_SYNC_DISABLE |                              |
|            | HSPCLKDIV | TB_DIV1         | TBCLK = SYSCLK               |
|            | CLKDIV    | TB_DIV1         |                              |
| CMPA       | CMPA      | 400 (190h)      | Compare A = 400 TBCLK counts |
| CMPB       | CMPB      | 500 (1F4h)      | Compare B = 500 TBCLK counts |
| CMPCTL     | SHDWAMODE | CC_SHADOW       |                              |
|            | SHDWBMODE | CC_SHADOW       |                              |
|            | LOADAMODE | CC_CTR_ZERO     | Load on CTR = 0              |
|            | LOADBMODE | CC_CTR_ZERO     | Load on CTR = 0              |
| AQCTLA     | CAU       | AQ_SET          |                              |
|            | CAD       | AQ_CLEAR        |                              |
| AQCTLB     | CBU       | AQ_SET          |                              |
|            | CBD       | AQ_CLEAR        |                              |

Table 15-28. EPWMx Run Time Changes for Figure 15-31

| Register   | Bit   | Value   | Comments                      |
|------------|-------|---------|-------------------------------|
| CMPA       | CMPA  | Duty1A  | Adjust duty for output EPWM1A |
| CMPB       | CMPB  | Duty1B  | Adjust duty for output EPWM1B |

<!-- image -->

www.ti.com

Table 15-29 and Table 15-30 contains initialization and runtime register configurations for the waveforms in Figure 15-32. Use the code in Example 15-1 to define the headers.

Figure 15-32. Up-Down-Count, Dual Edge Symmetric Waveform, With Independent Modulation on EPWMxA and EPWMxB - Complementary

<!-- image -->

- (1) PWM period = 2 × TBPRD × TTBCLK
- (2) Duty modulation for EPWMxA is set by CMPA, and is active low, i.e., low time duty proportional to CMPA
- (3) Duty modulation for EPWMxB is set by CMPB and is active high, i.e., high time duty proportional to CMPB
- (4) Outputs EPWMx can drive upper/lower (complementary) power switches
- (5) Dead-band = CMPB - CMPA (fully programmable edge placement by software). Note the dead-band module is also available if the more classical edge delay method is required.

<!-- image -->

www.ti.com

## Table 15-29. EPWMx Initialization for Figure 15-32

| Register   | Bit       | Value           | Comments                     |
|------------|-----------|-----------------|------------------------------|
| TBPRD      | TBPRD     | 600 (258h)      | Period = 601 TBCLK counts    |
| TBPHS      | TBPHS     | 0               | Clear Phase Register to 0    |
| TBCNT      | TBCNT     | 0               | Clear TB counter             |
| TBCTL      | CTRMODE   | TB_UPDOWN       |                              |
|            | PHSEN     | TB_DISABLE      | Phase loading disabled       |
|            | PRDLD     | TB_SHADOW       |                              |
|            | SYNCOSEL  | TB_SYNC_DISABLE |                              |
|            | HSPCLKDIV | TB_DIV1         | TBCLK = SYSCLK               |
|            | CLKDIV    | TB_DIV1         |                              |
| CMPA       | CMPA      | 350 (15Eh)      | Compare A = 350 TBCLK counts |
| CMPB       | CMPB      | 400 (190h)      | Compare B = 400 TBCLK counts |
| CMPCTL     | SHDWAMODE | CC_SHADOW       |                              |
|            | SHDWBMODE | CC_SHADOW       |                              |
|            | LOADAMODE | CC_CTR_ZERO     | Load on CTR = 0              |
|            | LOADBMODE | CC_CTR_ZERO     | Load on CTR = 0              |
| AQCTLA     | CAU       | AQ_SET          |                              |
|            | CAD       | AQ_CLEAR        |                              |
| AQCTLB     | CBU       | AQ_CLEAR        |                              |
|            | CBD       | AQ_SET          |                              |

Table 15-30. EPWMx Run Time Changes for Figure 15-32

| Register   | Bit   | Value   | Comments                      |
|------------|-------|---------|-------------------------------|
| CMPA       | CMPA  | Duty1A  | Adjust duty for output EPWM1A |
| CMPB       | CMPB  | Duty1B  | Adjust duty for output EPWM1B |

<!-- image -->

Table 15-31 and Table 15-32 contains initialization and runtime register configurations for the waveforms in Figure 15-33. Use the code in Example 15-1 to define the headers.

Figure 15-33. Up-Down-Count, Dual Edge Asymmetric Waveform, With Independent Modulation on EPWMxA-Active Low

<!-- image -->

- (1) PWM period = 2 × TBPRD × TBCLK
- (2) Rising edge and falling edge can be asymmetrically positioned within a PWM cycle. This allows for pulse placement techniques.
- (3) Duty modulation for EPWMxA is set by CMPA and CMPB.
- (4) Low time duty for EPWMxA is proportional to (CMPA + CMPB).
- (5) To change this example to active high, CMPA and CMPB actions need to be inverted (i.e., Set ! Clear and Clear Set).
- (6) Duty modulation for EPWMxB is fixed at 50% (utilizes spare action resources for EPWMxB)

<!-- image -->

www.ti.com

Table 15-31. EPWMx Initialization for Figure 15-33

| Register   | Bit       | Value           | Comments                     |
|------------|-----------|-----------------|------------------------------|
| TBPRD      | TBPRD     | 600 (258h)      | Period = 601 TBCLK counts    |
| TBPHS      | TBPHS     | 0               | Clear Phase Register to 0    |
| TBCNT      | TBCNT     | 0               | Clear TB counter             |
| TBCTL      | CTRMODE   | TB_UPDOWN       |                              |
|            | PHSEN     | TB_DISABLE      | Phase loading disabled       |
|            | PRDLD     | TB_SHADOW       |                              |
|            | SYNCOSEL  | TB_SYNC_DISABLE |                              |
|            | HSPCLKDIV | TB_DIV1         | TBCLK = SYSCLK               |
|            | CLKDIV    | TB_DIV1         |                              |
| CMPA       | CMPA      | 250 (FAh)       | Compare A = 250 TBCLK counts |
| CMPB       | CMPB      | 450 (1C2h)      | Compare B = 450 TBCLK counts |
| CMPCTL     | SHDWAMODE | CC_SHADOW       |                              |
|            | SHDWBMODE | CC_SHADOW       |                              |
|            | LOADAMODE | CC_CTR_ZERO     | Load on CTR = 0              |
|            | LOADBMODE | CC_CTR_ZERO     | Load on CTR = 0              |
| AQCTLA     | CAU       | AQ_SET          |                              |
|            | CBD       | AQ_CLEAR        |                              |
| AQCTLB     | ZRO       | AQ_CLEAR        |                              |
|            | PRD       | AQ_SET          |                              |

Table 15-32. EPWMx Run Time Changes for Figure 15-33

| Register   | Bit   | Value    | Comments                      |
|------------|-------|----------|-------------------------------|
| CMPA       | CMPA  | EdgePosA | Adjust duty for output EPWM1A |
| CMPB       | CMPB  | EdgePosB |                               |

## 15.2.2.6 Dead-Band Generator (DB) Submodule

Figure 15-34 illustrates the dead-band generator submodule within the ePWM module.

Figure 15-34. Dead-Band Generator Submodule

<!-- image -->

## 15.2.2.6.1 Purpose of the Dead-Band Submodule

The "Action-qualifier (AQ) Module" section discussed how it is possible to generate the required deadband by having full control over edge placement using both the CMPA and CMPB resources of the ePWM module. However, if the more classical edge delay-based dead-band with polarity control is required, then the dead-band generator submodule should be used.

The key functions of the dead-band generator submodule are:

- Generating appropriate signal pairs (EPWMxA and EPWMxB) with dead-band relationship from a single EPWMxA input
- Programming signal pairs for:
- -Active high (AH)
- -Active low (AL)
- -Active high complementary (AHC)
- -Active low complementary (ALC)
- Adding programmable delay to rising edges (RED)
- Adding programmable delay to falling edges (FED)
- Can be totally bypassed from the signal path (note dotted lines in diagram)

## 15.2.2.6.2 Controlling and Monitoring the Dead-Band Submodule

The dead-band generator submodule operation is controlled and monitored via the following registers:

Table 15-33. Dead-Band Generator Submodule Registers

| Acronym   | Register Description                        | Address Offset   | Shadowed   |
|-----------|---------------------------------------------|------------------|------------|
| DBCTL     | Dead-Band Control Register                  | 1Eh              | No         |
| DBRED     | Dead-Band Rising Edge Delay Count Register  | 20h              | No         |
| DBFED     | Dead-Band Falling Edge Delay Count Register | 22h              | No         |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.6.3 Operational Highlights for the Dead-Band Generator Submodule

The following sections provide the operational highlights.

The dead-band submodule has two groups of independent selection options as shown in Figure 15-35.

- Input Source Selection: The input signals to the dead-band module are the EPWMxA and EPWMxB output signals from the action-qualifier. In this section they will be referred to as EPWMxA In and EPWMxB In. Using the DBCTL[IN\_MODE) control bits, the signal source for each delay, falling-edge or rising-edge, can be selected:
- -EPWMxA In is the source for both falling-edge and rising-edge delay. This is the default mode.
- -EPWMxA In is the source for falling-edge delay, EPWMxB In is the source for rising-edge delay.
- -EPWMxA In is the source for rising edge delay, EPWMxB In is the source for falling-edge delay.
- -EPWMxB In is the source for both falling-edge and rising-edge delay.
- Output Mode Control: The output mode is configured by way of the DBCTL[OUT\_MODE] bits. These bits determine if the falling-edge delay, rising-edge delay, neither, or both are applied to the input signals.
- Polarity Control: The polarity control (DBCTL[POLSEL]) allows you to specify whether the rising-edge delayed signal and/or the falling-edge delayed signal is to be inverted before being sent out of the dead-band submodule.

Figure 15-35. Configuration Options for the Dead-Band Generator Submodule

<!-- image -->

EPWMxB/.notdefin

<!-- image -->

Although all combinations are supported, not all are typical usage modes. Table 15-34 lists some classical dead-band configurations. These modes assume that the DBCTL[IN\_MODE] is configured such that EPWMxA In is the source for both falling-edge and rising-edge delay. Enhanced, or non-traditional modes can be achieved by changing the input signal source. The modes shown in Table 15-34 fall into the following categories:

- Mode 1: Bypass both falling-edge delay (FED) and rising-edge delay (RED) Allows you to fully disable the dead-band submodule from the PWM signal path.
- Mode 2-5: Classical Dead-Band Polarity Settings These represent typical polarity configurations that should address all the active high/low modes required by available industry power switch gate drivers. The waveforms for these typical cases are shown in Figure 15-36. Note that to generate equivalent waveforms to Figure 15-36, configure the action-qualifier submodule to generate the signal as shown for EPWMxA.
- Mode 6: Bypass rising-edge-delay and Mode 7: Bypass falling-edge-delay Finally the last two entries in Table 15-34 show combinations where either the falling-edge-delay (FED) or rising-edgedelay (RED) blocks are bypassed.

Table 15-34. Classical Dead-Band Operating Modes

|      |                                                                                    | DBCTL[POLSEL]   | DBCTL[POLSEL]   | DBCTL[OUT_MODE]   | DBCTL[OUT_MODE]   |
|------|------------------------------------------------------------------------------------|-----------------|-----------------|-------------------|-------------------|
| Mode | Mode Description (1)                                                               | S3              | S2              | S1                | S0                |
| 1    | EPWMxA and EPWMxB Passed Through (No Delay)                                        | x               | x               | 0                 | 0                 |
| 2    | Active High Complementary (AHC)                                                    | 1               | 0               | 1                 | 1                 |
| 3    | Active Low Complementary (ALC)                                                     | 0               | 1               | 1                 | 1                 |
| 4    | Active High (AH)                                                                   | 0               | 0               | 1                 | 1                 |
| 5    | Active Low (AL)                                                                    | 1               | 1               | 1                 | 1                 |
| 6    | EPWMxA Out = EPWMxA In (No Delay) EPWMxB Out = EPWMxA In with Falling Edge Delay   | 0 or 1          | 0 or 1          | 0                 | 1                 |
| 7    | EPWMxA Out = EPWMxA In with Rising Edge Delay EPWMxB Out = EPWMxB In with No Delay | 0 or 1          | 0 or 1          | 1                 | 0                 |

(1) These are classical dead-band modes and assume that DBCTL[IN\_MODE] = 0,0. That is, EPWMxA in is the source for both the falling-edge and rising-edge delays. Enhanced, non-traditional modes can be achieved by changing the IN\_MODE configuration.

<!-- image -->

www.ti.com

Figure 15-36 shows waveforms for typical cases where 0% &lt; duty &lt; 100%.

Figure 15-36. Dead-Band Waveforms for Typical Cases (0% &lt; Duty &lt; 100%)

<!-- image -->

The dead-band submodule supports independent values for rising-edge (RED) and falling-edge (FED) delays. The amount of delay is programmed using the DBRED and DBFED registers. These are 10-bit registers and their value represents the number of time-base clock, TBCLK, periods a signal edge is delayed by. For example, the formula to calculate falling-edge-delay and rising-edge-delay are:

<!-- formula-not-decoded -->

Where TTBCLK is the period of TBCLK, the prescaled version of SYSCLKOUT.

## 15.2.2.7 PWM-Chopper (PC) Submodule

Figure 15-37 illustrates the PWM-chopper (PC) submodule within the ePWM module. The PWM-chopper submodule allows a high-frequency carrier signal to modulate the PWM waveform generated by the action-qualifier and dead-band submodules. This capability is important if you need pulse transformerbased gate drivers to control the power switching elements.

Figure 15-37. PWM-Chopper Submodule

<!-- image -->

## 15.2.2.7.1 Purpose of the PWM-Chopper Submodule

The key functions of the PWM-chopper submodule are:

- Programmable chopping (carrier) frequency
- Programmable pulse width of first pulse
- Programmable duty cycle of second and subsequent pulses
- Can be fully bypassed if not required

## 15.2.2.7.2 Controlling the PWM-Chopper Submodule

The PWM-chopper submodule operation is controlled via the register in Table 15-35.

Table 15-35. PWM-Chopper Submodule Registers

| Acronym   | Register Description         | Address Offset   | Shadowed   |
|-----------|------------------------------|------------------|------------|
| PCCTL     | PWM-chopper Control Register | 3Ch              | No         |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.7.3 Operational Highlights for the PWM-Chopper Submodule

Figure 15-38 shows the operational details of the PWM-chopper submodule. The carrier clock is derived from SYSCLKOUT. Its frequency and duty cycle are controlled via the CHPFREQ and CHPDUTY bits in the PCCTL register. The one-shot block is a feature that provides a high energy first pulse to ensure hard and fast power switch turn on, while the subsequent pulses sustain pulses, ensuring the power switch remains on. The one-shot width is programmed via the OSHTWTH bits. The PWM-chopper submodule can be fully disabled (bypassed) via the CHPEN bit.

Figure 15-38. PWM-Chopper Submodule Signals and Registers

<!-- image -->

## 15.2.2.7.4 Waveforms

Figure 15-39 shows simplified waveforms of the chopping action only; one-shot and duty-cycle control are not shown. Details of the one-shot and duty-cycle control are discussed in the following sections.

Figure 15-39. Simple PWM-Chopper Submodule Waveforms Showing Chopping Action Only

<!-- image -->

## 15.2.2.7.4.1 One-Shot Pulse

The width of the first pulse can be programmed to any of 16 possible pulse width values. The width or period of the first pulse is given by:

<!-- formula-not-decoded -->

Where TSYSCLKOUT is the period of the system clock (SYSCLKOUT) and OSHTWTH is the four control bits (value from 1 to 16)

Figure 15-40 shows the first and subsequent sustaining pulses.

Figure 15-40. PWM-Chopper Submodule Waveforms Showing the First Pulse and Subsequent Sustaining Pulses

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.7.4.2 Duty Cycle Control

Pulse transformer-based gate drive designs need to comprehend the magnetic properties or characteristics of the transformer and associated circuitry. Saturation is one such consideration. To assist the gate drive designer, the duty cycles of the second and subsequent pulses have been made programmable. These sustaining pulses ensure the correct drive strength and polarity is maintained on the power switch gate during the on period, and hence a programmable duty cycle allows a design to be tuned or optimized via software control.

Figure 15-41 shows the duty cycle control that is possible by programming the CHPDUTY bits. One of seven possible duty ratios can be selected ranging from 12.5% to 87.5%.

Figure 15-41. PWM-Chopper Submodule Waveforms Showing the Pulse Width (Duty Cycle) Control of Sustaining Pulses

<!-- image -->

## 15.2.2.8 Trip-Zone (TZ) Submodule

Figure 15-42 shows how the trip-zone (TZ) submodule fits within the ePWM module. Each ePWM module is connected to every TZ signal that are sourced from the GPIO MUX. These signals indicates external fault or trip conditions, and the ePWM outputs can be programmed to respond accordingly when faults occur. See Section 15.1.2 to determine the number of trip-zone pins available for the device.

Figure 15-42. Trip-Zone Submodule

<!-- image -->

## 15.2.2.8.1 Purpose of the Trip-Zone Submodule

The key functions of the trip-zone submodule are:

- Trip inputs TZ1 to TZn can be flexibly mapped to any ePWM module.
- Upon a fault condition, outputs EPWMxA and EPWMxB can be forced to one of the following:
- -High
- -Low
- -High-impedance
- -No action taken
- Support for one-shot trip (OSHT) for major short circuits or over-current conditions.
- Support for cycle-by-cycle tripping (CBC) for current limiting operation.
- Each trip-zone input pin can be allocated to either one-shot or cycle-by-cycle operation.
- Interrupt generation is possible on any trip-zone pin.
- Software-forced tripping is also supported.
- The trip-zone submodule can be fully bypassed if it is not required.

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.8.2 Controlling and Monitoring the Trip-Zone Submodule

The trip-zone submodule operation is controlled and monitored through the following registers:

Table 15-36. Trip-Zone Submodule Registers

| Acronym   | Register Description                | Address Offset   | Shadowed   |
|-----------|-------------------------------------|------------------|------------|
| TZSEL     | Trip-Zone Select Register           | 24h              | No         |
| TZCTL     | Trip-Zone Control Register          | 28h              | No         |
| TZEINT    | Trip-Zone Enable Interrupt Register | 2Ah              | No         |
| TZFLG     | Trip-Zone Flag Register             | 2Ch              | No         |
| TZCLR     | Trip-Zone Clear Register            | 2Eh              | No         |
| TZFRC     | Trip-Zone Force Register            | 30h              | No         |

## 15.2.2.8.3 Operational Highlights for the Trip-Zone Submodule

The following sections describe the operational highlights and configuration options for the trip-zone submodule.

The trip-zone signals at pin TZ1 to TZn is an active-low input signal. When the pin goes low, it indicates that a trip event has occurred. Each ePWM module can be individually configured to ignore or use each of the trip-zone pins. Which trip-zone pins are used by a particular ePWM module is determined by the TZSEL register for that specific ePWM module. The trip-zone signal may or may not be synchronized to the system clock (SYSCLKOUT). A minimum of 1 SYSCLKOUT low pulse on the TZ n inputs is sufficient to trigger a fault condition in the ePWM module. The asynchronous trip makes sure that if clocks are missing for any reason, the outputs can still be tripped by a valid event present on the TZn inputs.

The TZ n input can be individually configured to provide either a cycle-by-cycle or one-shot trip event for a ePWM module. The configuration is determined by the TZSEL[CBCn] and TZSEL[OSHTn] bits (where n corresponds to the trip pin) respectively.

- Cycle-by-Cycle (CBC): When a cycle-by-cycle trip event occurs, the action specified in the TZCTL register is carried out immediately on the EPWMxA and/or EPWMxB output. Table 15-37 lists the possible actions. In addition, the cycle-by-cycle trip event flag (TZFLG[CBC]) is set and a EPWMxTZINT interrupt is generated if it is enabled in the TZEINT register.

The specified condition on the pins is automatically cleared when the ePWM time-base counter reaches zero (TBCNT = 0000h) if the trip event is no longer present. Therefore, in this mode, the trip event is cleared or reset every PWM cycle. The TZFLG[CBC] flag bit will remain set until it is manually cleared by writing to the TZCLR[CBC] bit. If the cycle-by-cycle trip event is still present when the TZFLG[CBC] bit is cleared, then it will again be immediately set.

- One-Shot (OSHT): When a one-shot trip event occurs, the action specified in the TZCTL register is carried out immediately on the EPWMxA and/or EPWMxB output. Table 15-37 lists the possible actions. In addition, the one-shot trip event flag (TZFLG[OST]) is set and a EPWMxTZINT interrupt is generated if it is enabled in the TZEINT register. The one-shot trip condition must be cleared manually by writing to the TZCLR[OST] bit.

The action taken when a trip event occurs can be configured individually for each of the ePWM output pins by way of the TZCTL[TZA] and TZCTL[TZB] register bits. One of four possible actions, shown in Table 15-37, can be taken on a trip event.

## Table 15-37. Possible Actions On a Trip Event

| TZCTL[TZA] and/or TZCTL[TZB]   | EPWMxA and/or EPWMxB   | Comment                                      |
|--------------------------------|------------------------|----------------------------------------------|
| 0                              | High-Impedance         | Tripped                                      |
| 1h                             | Force to High State    | Tripped                                      |
| 2h                             | Force to Low State     | Tripped                                      |
| 3h                             | No Change              | Do Nothing. No change is made to the output. |

## Example 15-2. Trip-Zone Configurations

## Scenario A:

A one-shot trip event on TZ1 pulls both EPWM1A, EPWM1B low and also forces EPWM2A and EPWM2B high.

- Configure the ePWM1 registers as follows:
- -TZSEL[OSHT1] = 1: enables TZ as a one-shot event source for ePWM1
- -TZCTL[TZA] = 2: EPWM1A will be forced low on a trip event.
- -TZCTL[TZB] = 2: EPWM1B will be forced low on a trip event.
- Configure the ePWM2 registers as follows:
- -TZSEL[OSHT1] = 1: enables TZ as a one-shot event source for ePWM2
- -TZCTL[TZA] = 1: EPWM2A will be forced high on a trip event.
- -TZCTL[TZB] = 1: EPWM2B will be forced high on a trip event.

## Scenario B:

A cycle-by-cycle event on TZ5 pulls both EPWM1A, EPWM1B low.

A one-shot event on TZ1 or TZ6 puts EPWM2A into a high impedance state.

- Configure the ePWM1 registers as follows:
- -TZSEL[CBC5] = 1: enables TZ5 as a one-shot event source for ePWM1
- -TZCTL[TZA] = 2: EPWM1A will be forced low on a trip event.
- -TZCTL[TZB] = 2: EPWM1B will be forced low on a trip event.
- Configure the ePWM2 registers as follows:
- -TZSEL[OSHT1] = 1: enables TZ1 as a one-shot event source for ePWM2
- -TZSEL[OSHT6] = 1: enables TZ6 as a one-shot event source for ePWM1
- -TZCTL[TZA] = 0: EPWM1A will be put into a high-impedance state on a trip event.
- -TZCTL[TZB] = 3: EPWM1B will ignore the trip event.

## 15.2.2.8.4 Generating Trip Event Interrupts

Figure 15-43 and Figure 15-44 illustrate the trip-zone submodule control and interrupt logic, respectively.

<!-- image -->

<!-- image -->

www.ti.com

Figure 15-43. Trip-Zone Submodule Mode Control Logic

<!-- image -->

Figure 15-44. Trip-Zone Submodule Interrupt Logic

<!-- image -->

## 15.2.2.9 Event-Trigger (ET) Submodule

Figure 15-45 shows the event-trigger (ET) submodule in the ePWM system. The event-trigger submodule manages the events generated by the time-base submodule and the counter-compare submodule to generate an interrupt to the CPU.

Figure 15-45. Event-Trigger Submodule

<!-- image -->

## 15.2.2.9.1 Purpose of the Event-Trigger Submodule

The key functions of the event-trigger submodule are:

- Receives event inputs generated by the time-base and counter-compare submodules
- Uses the time-base direction information for up/down event qualification
- Uses prescaling logic to issue interrupt requests at:
- -Every event
- -Every second event
- -Every third event
- Provides full visibility of event generation via event counters and flags

## 15.2.2.9.2 Controlling and Monitoring the Event-Trigger Submodule

The key registers used to configure the event-trigger submodule are shown in Table 15-38:

Table 15-38. Event-Trigger Submodule Registers

| Acronym   | Register Description             | Address Offset   | Shadowed   |
|-----------|----------------------------------|------------------|------------|
| ETSEL     | Event-Trigger Selection Register | 32h              | No         |
| ETPS      | Event-Trigger Prescale Register  | 34h              | No         |
| ETFLG     | Event-Trigger Flag Register      | 36h              | No         |
| ETCLR     | Event-Trigger Clear Register     | 38h              | No         |
| ETFRC     | Event-Trigger Force Register     | 3Ah              | No         |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.9.3 Operational Overview of the Event-Trigger Submodule

The following sections describe the event-trigger submodule's operational highlights.

Each ePWM module has one interrupt request line connected to the interrupt controller as shown in Figure 15-46.

Figure 15-46. Event-Trigger Submodule Inter-Connectivity to Interrupt Controller

<!-- image -->

The event-trigger submodule monitors various event conditions (the left side inputs to event-trigger submodule shown in Figure 15-47) and can be configured to prescale these events before issuing an Interrupt request. The event-trigger prescaling logic can issue Interrupt requests at:

- Every event
- Every second event
- Every third event

Figure 15-47. Event-Trigger Submodule Showing Event Inputs and Prescaled Outputs

<!-- image -->

- ETSEL-This selects which of the possible events will trigger an interrupt.
- ETPS-This programs the event prescaling options previously mentioned.
- ETFLG-These are flag bits indicating status of the selected and prescaled events.
- ETCLR-These bits allow you to clear the flag bits in the ETFLG register via software.
- ETFRC-These bits allow software forcing of an event. Useful for debugging or software intervention.

A more detailed look at how the various register bits interact with the Interrupt is shown in Figure 15-48.

Figure 15-48 shows the event-trigger's interrupt generation logic. The interrupt-period (ETPS[INTPRD]) bits specify the number of events required to cause an interrupt pulse to be generated. The choices available are:

- Do not generate an interrupt
- Generate an interrupt on every event
- Generate an interrupt on every second event
- Generate an interrupt on every third event

An interrupt cannot be generated on every fourth or more events.

Which event can cause an interrupt is configured by the interrupt selection (ETSEL[INTSEL]) bits. The event can be one of the following:

- Time-base counter equal to zero (TBCNT = 0000h).
- Time-base counter equal to period (TBCNT = TBPRD).
- Time-base counter equal to the compare A register (CMPA) when the timer is incrementing.
- Time-base counter equal to the compare A register (CMPA) when the timer is decrementing.
- Time-base counter equal to the compare B register (CMPB) when the timer is incrementing.
- Time-base counter equal to the compare B register (CMPB) when the timer is decrementing.

The number of events that have occurred can be read from the interrupt event counter (ETPS[INTCNT]) register bits. That is, when the specified event occurs the ETPS[INTCNT] bits are incremented until they reach the value specified by ETPS[INTPRD]. When ETPS[INTCNT] = ETPS[INTPRD] the counter stops counting and its output is set. The counter is only cleared when an interrupt is sent to the interrupt controller.

When ETPS[INTCNT] reaches ETPS[INTPRD], one of the following behaviors will occur:

- If interrupts are enabled, ETSEL[INTEN] = 1 and the interrupt flag is clear, ETFLG[INT] = 0, then an interrupt pulse is generated and the interrupt flag is set, ETFLG[INT] = 1, and the event counter is cleared ETPS[INTCNT] = 0. The counter will begin counting events again.
- If interrupts are disabled, ETSEL[INTEN] = 0, or the interrupt flag is set, ETFLG[INT] = 1, the counter stops counting events when it reaches the period value ETPS[INTCNT] = ETPS[INTPRD].
- If interrupts are enabled, but the interrupt flag is already set, then the counter will hold its output high until the ENTFLG[INT] flag is cleared. This allows for one interrupt to be pending while one is serviced.

Writing to the INTPRD bits will automatically clear the counter INTCNT = 0 and the counter output will be reset (so no interrupts are generated). Writing a 1 to the ETFRC[INT] bit will increment the event counter INTCNT. The counter will behave as described above when INTCNT = INTPRD. When INTPRD = 0, the counter is disabled and hence no events will be detected and the ETFRC[INT] bit is also ignored.

Note that the interrupts coming from the ePWM module are also used as DMA events. The interrupt registers should be used to enable and clear the current DMA event in order for the ePWM module to generate subsequent DMA events.

<!-- image -->

<!-- image -->

www.ti.com

Figure 15-48. Event-Trigger Interrupt Generator

<!-- image -->

## 15.2.2.10 High-Resolution PWM (HRPWM) Submodule

Figure 15-49 shows the high-resolution PWM (HRPWM) submodule in the ePWM system. Some devices include the high-resolution PWM submodule, see Section 15.1.2 to determine which ePWM instances include this feature.

Figure 15-49. HRPWM System Interface

<!-- image -->

<!-- image -->

<!-- image -->

## 15.2.2.10.1 Purpose of the High-Resolution PWM Submodule

The enhanced high-resolution pulse-width modulator (eHRPWM) extends the time resolution capabilities of the conventionally derived digital pulse-width modulator (PWM). HRPWM is typically used when PWM resolution falls below ~9-10 bits. The key features of HRPWM are:

- Extended time resolution capability
- Used in both duty cycle and phase-shift control methods
- Finer time granularity control or edge positioning using extensions to the Compare A and Phase registers
- Implemented using the A signal path of PWM, that is, on the EPWMxA output. EPWMxB output has conventional PWM capabilities

The ePWM peripheral is used to perform a function that is mathematically equivalent to a digital-to-analog converter (DAC). As shown in Figure 15-50, the effective resolution for conventionally generated PWM is a function of PWM frequency (or period) and system clock frequency.

Figure 15-50. Resolution Calculations for Conventionally Generated PWM

<!-- image -->

If the required PWM operating frequency does not offer sufficient resolution in PWM mode, you may want to consider HRPWM. As an example of improved performance offered by HRPWM, Table 15-39 shows resolution in bits for various PWM frequencies. Table 15-39 values assume a MEP step size of 180 ps. See your device-specific data manual for typical and maximum performance specifications for the MEP.

Table 15-39. Resolution for PWM and HRPWM

|                     | Regular Resolution (PWM)   | Regular Resolution (PWM)   | High Resolution (HRPWM)   | High Resolution (HRPWM)   |
|---------------------|----------------------------|----------------------------|---------------------------|---------------------------|
| PWM Frequency (kHz) | Bits                       | %                          | Bits                      | %                         |
| 20                  | 12.3                       | 0.0                        | 18.1                      | 0.000                     |
| 50                  | 11.0                       | 0.0                        | 16.8                      | 0.001                     |
| 100                 | 10.0                       | 0.1                        | 15.8                      | 0.002                     |
| 150                 | 9.4                        | 0.2                        | 15.2                      | 0.003                     |
| 200                 | 9.0                        | 0.2                        | 14.8                      | 0.004                     |
| 250                 | 8.6                        | 0.3                        | 14.4                      | 0.005                     |
| 500                 | 7.6                        | 0.5                        | 13.8                      | 0.007                     |
| 1000                | 6.6                        | 1.0                        | 12.4                      | 0.018                     |
| 1500                | 6.1                        | 1.5                        | 11.9                      | 0.027                     |
| 2000                | 5.6                        | 2.0                        | 11.4                      | 0.036                     |

Although each application may differ, typical low-frequency PWM operation (below 250 kHz) may not require HRPWM. HRPWM capability is most useful for high-frequency PWM requirements of power conversion topologies such as:

- Single-phase buck, boost, and flyback
- Multi-phase buck, boost, and flyback
- Phase-shifted full bridge
- Direct modulation of D-Class power amplifiers

## 15.2.2.10.2 Architecture of the High-Resolution PWM Submodule

The HRPWM is based on micro edge positioner (MEP) technology. MEP logic is capable of positioning an edge very finely by sub-dividing one coarse system clock of a conventional PWM generator. The time step accuracy is on the order of 150 ps. The HRPWM also has a self-check software diagnostics mode to check if the MEP logic is running optimally, under all operating conditions.

Figure 15-51 shows the relationship between one coarse system clock and edge position in terms of MEP steps, which are controlled via an 8-bit field in the Compare A extension register (CMPAHR).

Figure 15-51. Operating Logic Using MEP

<!-- image -->

- A For MEP range and rounding adjustment.

To generate an HRPWM waveform, configure the TBM, CCM, and AQM registers as you would to generate a conventional PWM of a given frequency and polarity. The HRPWM works together with the TBM, CCM, and AQM registers to extend edge resolution, and should be configured accordingly. Although many programming combinations are possible, only a few are needed and practical.

## 15.2.2.10.3 Controlling and Monitoring the High-Resolution PWM Submodule

The MEP of the HRPWM is controlled by two extension registers, each 8-bits wide. These two HRPWM registers are concatenated with the 16-bit TBPHS and CMPA registers used to control PWM operation.

- TBPHSHR - Time-Base Phase High-Resolution Register
- CMPAHR - Counter-Compare A High-Resolution Register

Table 15-40 lists the registers used to control and monitor the high-resolution PWM submodule.

Table 15-40. HRPWM Submodule Registers

| Acronym   | Register Description               | Address Offset   | Shadowed   |
|-----------|------------------------------------|------------------|------------|
| TBPHSHR   | Extension Register for HRPWM Phase | 4h               | No         |
| CMPAHR    | Extension Register for HRPWM Duty  | 10h              | Yes        |
| HRCNFG    | HRPWM Configuration Register       | C0h              | No         |

<!-- image -->

<!-- image -->

## 15.2.2.10.4 Configuring the High-Resolution PWM Submodule

Once the ePWM has been configured to provide conventional PWM of a given frequency and polarity, the HRPWM is configured by programming the HRCNFG register located at offset address C0h. This register provides configuration options for the following key operating modes:

- Edge Mode: The MEP can be programmed to provide precise position control on the rising edge (RE), falling edge (FE), or both edges (BE) at the same time. FE and RE are used for power topologies requiring duty cycle control, while BE is used for topologies requiring phase shifting, for example, phase shifted full bridge.
- Control Mode: The MEP is programmed to be controlled either from the CMPAHR register (duty cycle control) or the TBPHSHR register (phase control). RE or FE control mode should be used with CMPAHR register. BE control mode should be used with TBPHSHR register.
- Shadow Mode: This mode provides the same shadowing (double buffering) option as in regular PWM mode. This option is valid only when operating from the CMPAHR register and should be chosen to be the same as the regular load option for the CMPA register. If TBPHSHR is used, then this option has no effect.

## 15.2.2.10.5 Operational Highlights for the High-Resolution PWM Submodule

The MEP logic is capable of placing an edge in one of 255 (8 bits) discrete time steps, each of which has a time resolution on the order of 150 ps. The MEP works with the TBM and CCM registers to be certain that time steps are optimally applied and that edge placement accuracy is maintained over a wide range of PWM frequencies, system clock frequencies and other operating conditions. Table 15-41 shows the typical range of operating frequencies supported by the HRPWM.

Table 15-41. Relationship Between MEP Steps, PWM Frequency and Resolution

|   System (MHz) |   MEP Steps Per SYSCLKOUT (1) (2) (3) |   PWM Minimum (Hz) (4) |   PWM Maximum (MHz) |   Resolution at Maximum (Bits) (5) |
|----------------|---------------------------------------|------------------------|---------------------|------------------------------------|
|             50 |                                   111 |                    763 |                 2.5 |                               11.1 |
|             60 |                                    93 |                    916 |                 3   |                               10.9 |
|             70 |                                    79 |                   1068 |                 3.5 |                               10.6 |
|             80 |                                    69 |                   1221 |                 4   |                               10.4 |
|             90 |                                    62 |                   1373 |                 4.5 |                               10.3 |
|            100 |                                    56 |                   1526 |                 5   |                               10.1 |

(1) System frequency = SYSCLKOUT, that is, CPU clock. TBCLK = SYSCLKOUT

(2) Table data based on a MEP time resolution of 180 ps (this is an example value)

(3) MEP steps applied = TSYSCLKOUT /180 ps in this example.

(4) PWM minimum frequency is based on a maximum period value, TBPRD = 65 535. PWM mode is asymmetrical up-count.

(5) Resolution in bits is given for the maximum PWM frequency stated.

## 15.2.2.10.5.1 Edge Positioning

In a typical power control loop (switch modes, digital motor control (DMC), uninterruptible power supply (UPS)), a digital controller (PID, 2pole/2zero, lag/lead, etc.) issues a duty command, usually expressed in a per unit or percentage terms.

In the following example, assume that for a particular operating point, the demanded duty cycle is 0.405 or 40.5% on-time and the required converter PWM frequency is 1.25 MHz. In conventional PWM generation with a system clock of 100 MHz, the duty cycle choices are in the vicinity of 40.5%. In Figure 15-52, a compare value of 32 counts (duty = 40%) is the closest to 40.5% that you can attain. This is equivalent to an edge position of 320 ns instead of the desired 324 ns. This data is shown in Table 15-42.

By utilizing the MEP, you can achieve an edge position much closer to the desired point of 324 ns. Table 15-42 shows that in addition to the CMPA value, 22 steps of the MEP (CMPAHR register) will position the edge at 323.96 ns, resulting in almost zero error. In this example, it is assumed that the MEP has a step resolution of 180 ns.

Figure 15-52. Required PWM Waveform for a Requested Duty = 40.5%

<!-- image -->

Table 15-42. CMPA vs Duty (left), and [CMPA:CMPAHR] vs Duty (right)

| CMPA (count) (1) (2) (3)   | DUTY (%)   | High Time (ns)   |   CMPA (count) |   CMPAHR (count) |   Duty (%) |   High Time (ns) |
|----------------------------|------------|------------------|----------------|------------------|------------|------------------|
| 28                         | 35.0       | 280              |             32 |               18 |     40.405 |           323.24 |
| 29                         | 36.3       | 290              |             32 |               19 |     40.428 |           323.42 |
| 30                         | 37.5       | 300              |             32 |               20 |     40.45  |           323.6  |
| 31                         | 38.8       | 310              |             32 |               21 |     40.473 |           323.78 |
| 32                         | 40.0       | 320              |             32 |               22 |     40.495 |           323.96 |
| 33                         | 41.3       | 330              |             32 |               23 |     40.518 |           324.14 |
| 34                         | 42.5       | 340              |             32 |               24 |     40.54  |           324.32 |
|                            |            |                  |             32 |               25 |     40.563 |           324.5  |
| Required                   |            |                  |             32 |               26 |     40.585 |           324.68 |
| 32.40                      | 40.5       | 324              |             32 |               27 |     40.608 |           324.86 |

(1) System clock, SYSCLKOUT and TBCLK = 100 MHz, 10 ns

(2) For a PWM Period register value of 80 counts, PWM Period = 80 × 10 ns = 800 ns, PWM frequency = 1/800 ns = 1.25 MHz

(3) Assumed MEP step size for the above example = 180 ps

<!-- image -->

<!-- image -->

## 15.2.2.10.5.2 Scaling Considerations

The mechanics of how to position an edge precisely in time has been demonstrated using the resources of the standard (CMPA) and MEP (CMPAHR) registers. In a practical application, however, it is necessary to seamlessly provide the CPU a mapping function from a per-unit (fractional) duty cycle to a final integer (non-fractional) representation that is written to the [CMPA:CMPAHR] register combination.

To do this, first examine the scaling or mapping steps involved. It is common in control software to express duty cycle in a per-unit or percentage basis. This has the advantage of performing all needed math calculations without concern for the final absolute duty cycle, expressed in clock counts or high time in ns. Furthermore, it makes the code more transportable across multiple converter types running different PWM frequencies.

To implement the mapping scheme, a two-step scaling procedure is required.

Assumptions for this example:

System clock, SYSCLKOUT

- = 10 ns (100 MHz)

PWM frequency

- = 1.25 MHz (1/800 ns)

Required PWM duty cycle, PWMDuty

- = 0.405 (40.5%)

PWM period in terms of coarse steps,

PWMperiod (800 ns/10 ns)

= 80

Number of MEP steps per coarse step at

180 ps (10 ns/180 ps), MEP\_SF

= 55

Value to keep CMPAHR within the range of 1-255 and fractional rounding constant (default value)

- = 180h

## Step 1: Percentage Integer Duty value conversion for CMPA register

CMPA register value

- = int( PWMDuty × PWMperiod ); int means integer part

- = int(0.405 × 80)

- = int(32.4)

CMPA register value

- = 32 (20h)

## Step 2: Fractional value conversion for CMPAHR register

CMPAHR register value

CMPAHR value

- = (frac( PWMDuty × PWMperiod ) × MEP\_SF ) &lt;&lt; 8) + 180h; frac means fractional part
- = (frac(32.4) × 55 &lt;&lt;8) + 180h; Shift is to move the value as CMPAHR high byte
- = ((0.4 × 55) &lt;&lt;8) + 180h
- = (22 &lt;&lt;8) + 180h
- = 22 × 256 + 180h ; Shifting left by 8 is the same multiplying by 256.
- = 5632 + 180h
- = 1600h + 180h
- = 1780h; CMPAHR value = 1700h, lower 8 bits will be ignored by hardware.

## 15.2.2.10.5.3 Duty Cycle Range Limitation

In high resolution mode, the MEP is not active for 100% of the PWM period. It becomes operational 3 SYSCLK cycles after the period starts.

Duty cycle range limitations are illustrated in Figure 15-53. This limitation imposes a lower duty cycle limit on the MEP. For example, precision edge control is not available all the way down to 0% duty cycle. Although for the first 3 or 6 cycles, the HRPWM capabilities are not available, regular PWM duty control is still fully operational down to 0% duty. In most applications this should not be an issue as the controller regulation point is usually not designed to be close to 0% duty cycle.

Figure 15-53. Low % Duty Cycle Range Limitation Example When PWM Frequency = 1 MHz

<!-- image -->

If the application demands HRPWM operation in the low percent duty cycle region, then the HRPWM can be configured to operate in count-down mode with the rising edge position (REP) controlled by the MEP. This is illustrated in Figure 15-54. In this case low percent duty limitation is no longer an issue.

Figure 15-54. High % Duty Cycle Range Limitation Example when PWM Frequency = 1 MHz

<!-- image -->

<!-- image -->

<!-- image -->

## 15.2.2.10.6 Scale Factor Optimizing Software (SFO)

The micro edge positioner (MEP) logic is capable of placing an edge in one of 255 discrete time steps. As previously mentioned, the size of these steps is on the order of 150 ps. The MEP step size varies based on worst-case process parameters, operating temperature, and voltage. MEP step size increases with decreasing voltage and increasing temperature and decreases with increasing voltage and decreasing temperature. Applications that use the HRPWM feature should use the TI-supplied MEP scale factor optimizer (SFO) software functions. SFO functions help to dynamically determine the number of MEP steps per SYSCLKOUT period while the HRPWM is in operation.

To utilize the MEP capabilities effectively during the Q15 duty to [CMPA:CMPAHR] mapping function (see Section 15.2.2.10.5.2), the correct value for the MEP scaling factor (MEP\_SF) needs to be known by the software. To accomplish this, each HRPWM module has built in self-check and diagnostics capabilities that can be used to determine the optimum MEP\_SF value for any operating condition. TI provides a Ccallable library containing two SFO functions that utilize this hardware and determine the optimum MEP\_SF. As such, MEP Control and Diagnostics registers are reserved for TI use.

Currently, there are two released versions of the SFO library - SFO\_TI\_Build.lib and SFO\_TI\_Build\_V5.lib. Versions 2, 3, and 4 were TI-Internal only. A high-level comparison table between the two library versions can be found in Section 15.2.2.10.6.1. A detailed description of the SFO\_TI\_Build.lib software functions follows in Section 15.2.2.10.6.2. Information on the SFO\_TI\_Build\_V5.lib software functions, which support up to 16 HRPWM channels, can be found in Section 15.2.2.10.6.4.

NOTE:

For floating-point devices, when compiling application code for floating point (fpu32 mode), libraries utilized by the application code must also be compiled for floating point. The SFO\_TI\_Build\_fpu.lib and SFO\_TI\_Build\_V5\_fpu.lib are available as the floating-point compiled equivalents to the fixed-point SFO\_TI\_Build.lib and SFO\_TI\_Build\_V5.lib libraries. The SFO functions in the fpu-version libraries are C-code-compatible to their fixed-point equivalents.

## 15.2.2.10.6.1 SFO Library Version Comparison

Table 15-43 includes a high-level comparison between SFO\_TI\_Build.lib and SFO\_TI\_Build\_V5.lib. A detailed description of SFO\_TI\_Build\_V5.lib follows the table, and more information on SFO\_TI\_Build.lib can be found in Section 15.2.2.10.6.

## Table 15-43. SFO Library Version Comparison

|                                                                                                                  | SYSCLK Frequency   | ePWM Frequency   | SFO_TI_Build.lib   | SFO_TI_Build_V5.lib                | Unit         |
|------------------------------------------------------------------------------------------------------------------|--------------------|------------------|--------------------|------------------------------------|--------------|
| Maximum HRPWM channels supported                                                                                 | -                  | -                | Up to 4            | Up to 16                           | channels     |
| Total static variable memory size                                                                                | -                  | -                | 220                | 79 (1 channel) to 192 (16 channel) | words        |
| MepEn runs on multiple channels concurrently?                                                                    | -                  | -                | Yes                | No                                 | -            |
| Error-checking?                                                                                                  | -                  | -                | No                 | Yes                                | -            |
| Typical time required for MepEn to update MEP_ScaleFactor on 1 channel if called repetitively without interrupts | -                  | 400 kHz          | 3.26               | 1.5                                | seconds      |
|                                                                                                                  | -                  | 1 MHz            | 1.308              | 0.6                                | seconds      |
|                                                                                                                  | -                  | 2 MHz            | 0.66               | 0.3                                | seconds      |
|                                                                                                                  | -                  | 3.33 MHz         | 0.396              | 0.18                               | seconds      |
|                                                                                                                  | -                  | 200 MHz          | 0.066              | 0.03                               | seconds      |
| Typical time required for                                                                                        | 100 MHz            | -                | 0.83               | 1.86                               | milliseconds |
| MepDis to update                                                                                                 | 60 MHz             | -                | 1.38               | 1.38                               | milliseconds |
| MEP_ScaleFactor on 1 channel if called repetitively without interrupts                                           | 50 MHz             | -                | 1.66               | 1.66                               | milliseconds |

## 15.2.2.10.6.2 SFO\_TI\_Build Library Routines

Table 15-44 provides functional descriptions of the two SFO library routines in SFO\_TI\_Build.lib.

## Table 15-44. SFO Library Routines

| Function      | Description                                                                                                                                                                                                                                                                                                             |
|---------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| SFO_MepDis(n) | Scale Factor Optimizer with MEP Disabled This routine runs faster, as the calibration logic works when HRPWM capabilities are disabled; therefore,                                                                                                                                                                      |
|               | HRPWM capabilities cannot be run concurrently when the ePWMn is being used.                                                                                                                                                                                                                                             |
|               | The function returns a value in the variable array:                                                                                                                                                                                                                                                                     |
|               | MEP_ScaleFactor[n] (1) = Number of MEP steps/SYSCLKOUT                                                                                                                                                                                                                                                                  |
|               | If TBCLK is not equal to SYSCLKOUT, then the returned value must be adjusted to reflect the correct TBCLK:                                                                                                                                                                                                              |
|               | MEP steps per TBCLK = MEP_ScaleFactor[n] × (SYSCLKOUT/TBCLK) (1)                                                                                                                                                                                                                                                        |
|               | Constraints when using this function:                                                                                                                                                                                                                                                                                   |
|               | MEP diagnostics logic uses SYSCLKOUT not TBCLK and hence SYSCLKOUT restriction is an important constraint. SFO_MepDis(n) function does not require a starting Scale Factor value.                                                                                                                                       |
|               | When to use:                                                                                                                                                                                                                                                                                                            |
|               | If one of the ePWM modules is not used in HRPWM mode, then it can be dedicated to run the SFO diagnostics for the modules that are running HRPWM mode. Here the single MEP_SF value obtained can be applied to other ePWM modules. This assumes that all HRPWM module's MEP steps are similar but may not be identical. |
|               | The ePWM module that is not active in HRPWM mode is still fully operational in conventional PWM mode and can be used to drive PWM pins. The SFO function only makes use of the MEP diagnostics logic.                                                                                                                   |
|               | The other ePWM modules operating in HRPWM mode incur only a 3-cycle minimum duty limitation.                                                                                                                                                                                                                            |
| SFO_MepEn(n)  | Scale Factor Optimizer with MEP Enabled                                                                                                                                                                                                                                                                                 |
|               | This routine runs slower as the calibration logic is used concurrently while HRPWM capabilities are being used by the ePWM module.                                                                                                                                                                                      |
|               | The function returns a value in the variable array:                                                                                                                                                                                                                                                                     |
|               | MEP_ScaleFactor[n] (1) = Number of MEP steps/SYSCLKOUT                                                                                                                                                                                                                                                                  |
|               | = Number of MEP steps/TBCLK                                                                                                                                                                                                                                                                                             |
|               | Constraints when using this function: MEP diagnostics logic uses SYSCLKOUT not TBCLK and hence SYSCLKOUT restriction is an important constraint. SFO_MepEn(n) function does require a starting Scale Factor value.MEP_ScaleFactor[0] needs to be initialized to a typical MEP step size value.                          |
|               | NOTE: SFO_MepEn(n) only supports the following HRPWM configuration: • HRCNFG[HRLOAD] = 0 (load on CTR = 0) • HRCNFG[EDGMODE] = 10 (falling edge MEP control)                                                                                                                                                            |

## When to use:

If the application requires all ePWM modules to have HRPWM capability (MEP is operational), then the SFO\_MepEn(n) function should run for each of the active ePWM modules with HRPWM capability.

- In the above case, a 6-cycle MEP inactivity zone exists at the start of the PWM period. See Section 15.2.2.10.5.3 on duty cycle range limitation.
- If all ePWM modules are using the same TBCLK prescaler, then it is also possible to run the SFO\_MepEn(n) function for only one ePWM module and to use the SFO return value for the other modules. In this case only one ePWM module incurs the 6-cycle limitation, and remaining modules incur only a 3-cycle minimum duty limitation. See 'Duty cycle limitation' section. This assumes that all HRPWM module's MEP steps are similar but may not be identical.

(1) n is the ePWM module number on which the SFO function operates.

<!-- image -->

<!-- image -->

## www.ti.com

Both routines can be run as background tasks in a slow loop requiring negligible CPU cycles. In most applications only one of these routines will be needed. However, if the application has free HRPWM resources then both the routines could be used. The repetition rate at which an SFO function needs to be executed depends on the applications operating environment. As with all digital CMOS devices temperature and supply voltage variations have an effect on MEP operation. However, in most applications these parameters vary slowly and therefore it is often sufficient to execute the SFO function once every 5 to 10 seconds or so. If more rapid variations are expected, then execution may have to be performed more frequently to match the application. Note, there is no high limit restriction on the SFO function repetition rate, hence it can execute as quickly as the background loop is capable.

While using HRPWM feature with no SFO diagnostics, HRPWM logic will not be active for the first 3 TBCLK cycles of the PWM period. While running the application in this configuration, if CMPA register value is less than 3 cycles, then its CMPAHR register must be cleared to zero. This would avoid any unexpected transitions on PWM signal.

However, if SFO diagnostic function SFO\_MepEn is used in the background, then HRPWM logic will not be active for the first 6 TBCLK cycles of PWM period. While using SFO\_MepEn function if CMPA register value is less than 6 cycles, then its CMPAHR register must be cleared to zero. This would avoid any unexpected transitions on PWM signal. Also note that the SFO\_MepDis function cannot be used concurrently with PWM signals with HRPWM enabled.

## 15.2.2.10.6.3 SFO\_TI\_Build Software Usage

Software library functions SFO\_MepEn(int n) and SFO\_MepDis(int n) calculate the MEP scale factor for up to four ePWM modules. The scale factor is an integer value in the range 1-255, and represents the number of micro step edge positions available for a system clock period. The scale factor value is returned in a global array of integer values called MEP\_ScaleFactor[x], where x is the maximum number of HRPWM channels for a device plus one. For example, see Table 15-45.

Table 15-45. Factor Values

| Software function calls   | Functional description                          | Updated Variable MEP_ScaleFactor[5] (1)   |
|---------------------------|-------------------------------------------------|-------------------------------------------|
| SFO_MepDis(n)             |                                                 |                                           |
| SFO_MepDis(1);            | Returns the scale factor value to array index 1 | MEP_ScaleFactor[1]                        |
| SFO_MepDis(2);            | Returns the scale factor value to array index 2 | MEP_ScaleFactor[2]                        |
| SFO_MepDis(3);            | Returns the scale factor value to array index 3 | MEP_ScaleFactor[3]                        |
| SFO_MepDis(4);            | Returns the scale factor value to array index 4 | MEP_ScaleFactor[4]                        |
| SFO_MepEn(n)              |                                                 |                                           |
| SFO_MepEn(1);             | Returns the scale factor value to array index 1 | MEP_ScaleFactor[1]                        |
| SFO_MepEn(2);             | Returns the scale factor value to array index 2 | MEP_ScaleFactor[2]                        |
| SFO_MepEn(3);             | Returns the scale factor value to array index 3 | MEP_ScaleFactor[3]                        |
| SFO_MepEn(4);             | Returns the scale factor value to array index 4 | MEP_ScaleFactor[4]                        |

(1) MEP\_ScaleFactor[0] variable is a starting value and used by the SFO software functions internally

<!-- image -->

www.ti.com

To use the HRPWM feature of the ePWMs it is recommended that the SFO functions be used as follows. For different devices that may have fewer HRPWM channels, modifications will be required in Step 1 and Step 2.

NOTE:

The following example assumes there are four ePWM instances that contain the HRPWM submodule in the device. See Section 15.1.2 to determine the number of ePWM instances that contain the HRPWM submodule.

## Step 1. Add Include Files

The SFO.h file needs to be included as follows. This include file is mandatory while using the SFO library function. These include files are optional if customized header files are used in the end applications.

## Example 15-3. A Sample of How to Add Include Files

```
#include "SFO.h" // SFO lib functions (needed for HRPWM)
```

## Step 2. Element Declaration

Declare a 5-element array of integer variables as follows:

## Example 15-4. Declaring an Element

```
int MEP_ScaleFactor[5] = {0,0,0,0,0}; // Scale factor values for ePWM1-4 int MEP_SF1, MEP_SF2, MEP_SF3, MEP_SF4 volatile struct EPWM_REGS *ePWM[] = {&EPwm1Regs, &EPwm1Regs, &EPwm2Regs, &EPwm3Regs, &EPwm4Regs};
```

## Step 3. MEP\_ScaleFactor Initialization

After power up, the SFO\_MepEn(n) function needs a starting Scale Factor value. This value can be conveniently determined by using one of the ePWM modules to run the SFO\_MepDis(n) function prior to configuring its PWM outputs for the application. SFO\_MepDis(n) function does not require a starting Scale Factor value.

As part of the one-time initialization code, include the following:

## Example 15-5. Initializing With a Scale Factor Value

```
// MEP_ScaleFactor variables initialized using function SFO_MepDis while (MEP_ScaleFactor[1] == 0) SFO_MepDis(1); //SFO for HRPWM1 while (MEP_ScaleFactor[2] == 0) SFO_MepDis(2); //SFO for HRPWM2 while (MEP_ScaleFactor[3] == 0) SFO_MepDis(3); //SFO for HRPWM3 while (MEP_ScaleFactor[4] == 0) SFO_MepDis(4); //SFO for HRPWM4 // Initialize a common seed variable MEP_ScaleFactor[0] // required for all SFO functions MEP_ScaleFactor[0] = MEP_ScaleFactor[1]; //Common variable for SFOMepEN(n) function
```

<!-- image -->

www.ti.com

## Step 4. Application Code

While the application is running, fluctuations in both device temperature and supply voltage may be expected. To be sure that optimal Scale Factors are used for each ePWM module, the SFO function should be re-run periodically as part of a slower back-ground loop. Some examples of this are shown here.

## Example 15-6. SFO Function Calls

```
main() { // User code // Case1: ePWM1,2,3,4 are running in HRPWM mode SFO_MepEn(1); // Each of these of function enables SFO_MepEn(2); // the respective MEP diagnostic logic SFO_MepEn(3); // and returns MEP Scale factor value SFO_MepEn(4); MEP_SF1 = MEP_ScaleFactor[1]; // used for ePWM1 MEP_SF2 = MEP_ScaleFactor[2]; // used for ePWM2 MEP_SF3 = MEP_ScaleFactor[3]; // used for ePWM3 MEP_SF4 = MEP_ScaleFactor[4]; // used for ePWM4 // Case2:ePWM1,2,3 only are running in HRPWM mode. One of the ePWM channel(as an example ePWM4) is used as for Scale factor calibration // Here minimum duty cycle limitation is 3 clock cycles. // // HRPWM 4 MEP diagnostics circuit is used to estimate the MEP steps // with the assumption that all HRPWM channels behave similarly // though may not be identical. SFO_MepDis(4); // MEP steps using ePWM4 MEP_SF1 = MEP_ScaleFactor[4]; // used for ePWM1 MEP_SF2 = MEP_SF1 // used for ePWM2 MEP_SF3 = MEP_SF1 // used for ePWM3 MEP_SF4 = MEP_SF1 // used for ePWM4 }
```

## 15.2.2.10.6.4 SFO\_TI\_Build\_V5 Library Routines

In SFO\_TI\_Build\_V5.lib, the diagnostic software has been optimized to use less memory, to minimize the calibration time, and to support up to 16 HRPWM channels. Table 15-46 provides functional description of the two SFO library routines in SFO\_TI\_Build\_V5.lib.

## Table 15-46. SFO V5 Library Routines

| Function              | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-----------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| int SFO_MepDis_V5 (n) | Scale Factor Optimizer V5 with MEP Disabled This routine is very similar to the SFO_MepDis() routine in the original SFO library, but with one change. It now returns a 1 when MEP disabled calibration is complete, or a 0 while calibration is still running. This function runs faster than the SFO_MepEn _V5() routine and cannot be used on an ePWM channel while HRPWM capabilities are enabled for that channel. If there is a spare ePWM channel available in the system, SFO_MepDis_V5() can be run for that channel, and the resulting MEP_ScaleFactor[n] value can be copied into the MEP_ScaleFactor[n] for all other channels. Because the MEP step behavior in a particular piece of silicon is similar on all HRPWM channels with regard to temperature and voltage, using one dedicated HRPWM channel for calibration by calling the SFO_MepDis_V5 function will reduce software overhead. The function returns a value in the variable array: MEP_ScaleFactor[n] = Number of MEP steps/SYSCLKOUT If TBCLK is not equal to SYSCLKOUT, then the returned value must be adjusted to reflect the correct TBCLK: MEP steps per TBCLK = MEP_ScaleFactor[n] × (SYSCLKOUT/TBCLK) |

## Constraints when using this function:

- MEP diagnostics logic uses SYSCLKOUT and not TBCLK. Hence, the SYSCLKOUT restriction is an important constraint.
- If TBCLK does not equal SYSCLKOUT, the TBCLK frequency must be great enough so that MEP steps per TBCLK do not exceed 255. This is due to the restriction that there can be no more than 255 MEP steps in a coarse step.
- This function cannot be run on an ePWM channel with HRPWM capabilities enabled.

## Usage:

- If one of the ePWM modules is running in normal ePWM mode, then it can be used to run the SFO diagnostics function. Here, the single MEP\_ScaleFactor value obtained for that channel can be copied and used as the MEP\_ScaleFactor for the other ePWM modules which are running HRPWM mode. This assumes that all HRPWM modules' MEP steps are similar but may not be identical.
- This routine returns a 1 when calibration is finished on the specified channel or a 0 if calibration is still running.
- The ePWM module that is not active in HRPWM mode is still fully operational in conventional PWM mode and can be used to drive PWM pins. The SFO function only makes use of the MEP diagnostics logic in the HRPWM circuitry.
- SFO\_MepDis\_V5(n) function does not require a starting Scale Factor value.
- The other ePWM modules operating in HRPWM mode incur only a 3-cycle minimum duty cycle limitation.

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-46. SFO V5 Library Routines (continued)

| Function             | Description                                                                                                                                                                                                                                                                                                                            |
|----------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| int SFO_MepEn_V5 (n) | Scale Factor Optimizer V5 with MEP Enabled This function runs slower than the SFO_MepDis_V5() routine and runs SFO diagnostics on an ePWM channel with HRPWM capabilities enabled for that channel. The function returns a value in the variable array: MEP_ScaleFactor[n] = Number of MEP steps/SYSCLKOUT = Number of MEP steps/TBCLK |

## Constraints when using this function:

- This routine must be run on one channel at a time and cannot be run on multiple channels concurrently. When it has finished updating the MEP\_ScaleFactor for a channel, it will return a 1. If it is still calibrating, it will return a 0. A background loop should exist in the user code which calls SFO\_MepEn\_V5(n) repetitively until it returns a 1. Then the function can be called for the next channel . (1)

## NOTE:

Unlike the original SFO\_MepEn(n) routine, this routine cannot run on multiple channels concurrently.

Do not call SFO\_MepEn\_V5(n) for another channel until the function returns a 1 for the current channel. Otherwise, the MEP\_ScaleFactor for both channels will become corrupted.

SFO\_MepEn\_V5(n) in SFO\_TI\_Build\_V5.lib supports only the following HRPWM configuration:

- -HRCNFG[HRLOAD] = 0 (load on CTR = 0)
- -HRCNFG[EDGMODE] = 10 (falling edge MEP control)

An upgraded version of SFO\_MepEn\_V5(n) in SFO\_TI\_Build\_V5B.lib supports all available HRPWM configurations. When using this version, the HRCNFG register must be initialized with the appropriate configuration after calling SFO\_MepDis\_V5(n) to seed the MEP\_ScaleFactor[n] and prior to calling SFO\_MepEn\_V5(n).

- MEP diagnostics logic uses SYSCLKOUT and not TBCLK. Hence, the SYSCLKOUT restriction is an important constraint.

## Usage:

- After calling SFO\_MepDis(n) to seed MEP\_ScaleFactor[n], and prior to using the SFO\_MepEn\_V5(n) function in SFO\_TI\_Build\_V5B.lib , the HRCNFG register must be initialized with the desired HRPWM configuration. Otherwise, calibration will not be initiated, and calls to SFO\_MepEn\_V5(n) will continuously return zero.
- The SFO\_MepEn\_V5(n) function requires a starting scale factor value, MEP\_ScaleFactor[0]. MEP\_ScaleFactor[0] needs to be initialized to a typical MEP step size value. To do this, SFO\_MepDis\_V5(n) can be run on an ePWM channel while the HRPWM is disabled, and the resulting MEP\_ScaleFactor[n] value can be copied into MEP\_ScaleFactor[0].
- If there are drastic environmental changes to your system (i.e. temperature/voltage), it is generally a good idea to re-seed MEP\_ScaleFactor[0] with a new typical MEP step size value for the changed conditions.
- Because SFO\_MepEn\_V5(n) can be run on only one channel at a time, it is only recommended for systems where there are no spare HRPWM channels available, so SFO calibration must be performed on all channels with HRPWM capabilities enabled. In this case, a 6-cycle MEP inactivity zone exists at the start of each PWM period on all HRPWM channels. See Section 15.2.2.10.5.3 on duty cycle range limitation.
- The function returns:
- -A 1 when it has finished SFO calibration for the current channel
- -A 0 when SFO diagnostics are still running for the channel
- -A 2 as an error indicator after calibration has completed if the resulting MEP\_ScaleFactor for
- (1) If SFO calibration must be run on multiple channels at a time while HRPWM capabilities are enabled, the previous version of the SFO library, SFO\_TI\_Build.lib, which uses more memory resources, can be used instead, and SFO\_MepEn(n) can run concurrently for up to 4 ePWM channels with HRPWM enabled.

## Table 15-46. SFO V5 Library Routines (continued)

| Function   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|            | the channel differs from the original MEP_ScaleFactor[0] seed value by more than +/- 15. The function must be called repetitively before it will return a 1. This takes a longer time to complete than the SFO_MepDis_V5(n) calibration. If it returns a 2, the MEP_ScaleFactor for the channel has finished updating and is outside the typical drift range of MEP_ScaleFactor[0] +/-15 even with large temperature and voltage variations. If the reason for the large difference between the seed and the channel scale factor is known and acceptable, the user may choose to ignore the return of 2, and treat it as a return value of 1, indicating that calibration is complete. Otherwise, if the large difference is unexpected, there are steps to take to remedy the error: 1. Check your code to ensure SFO_MepEn_V5(n) is not being called on more than one channel at a time. 2. If the above is not effective, run SFO_MepDis_V5(n) again and re-seed Mep_ScaleFactor[0]. 3. If neither of the above 2 steps work, there may be a system problem. The application firmware should perform a shutdown or an appropriate recovery procedure. • If all ePWM modules are using the same TBCLK prescaler, then it is possible to run the SFO_MepEn_V5(n) function for only one ePWM module and to use the MEP_ScaleFactor value for that module for the other modules also. In this case only one ePWM module incurs the 6-cycle duty limitation, and the remaining modules incur only a 3-cycle minimum duty limitation. This assumes that all HRPWM modules' MEP steps are similar but may not be identical. |

<!-- image -->

<!-- image -->

www.ti.com

## 15.2.2.10.6.5 SFO\_TI\_Build\_V5 Software Usage

Software library functions int SFO\_MepEn\_V5(int n) and int SFO\_MepDis\_V5(int n) calculate the MEP scale factor for ePWMn modules, where n= the ePWM channel number. The scale factor value, which represents the number of micro-steps available in a system clock period, is returned in a global array of integer values called MEP\_ScaleFactor[x], where x is the maximum number of HRPWM channels for a device plus one. For example, if the maximum number of HRPWM channels for a device is 16, the scale factor array would be MEP\_ScaleFactor[17]. Both SFO\_MepEn\_V5 and SFO\_MepDis\_V5 themselves also return a 1 when calibration has completed, indicating the MEP\_ScaleFactor has been successfully updated for the channel, and a 0 when calibration is still on-going. A return of 2 represents an out-of-range error.

Table 15-47. Software Functions

| Software functional calls    | Functional Description                                                  |
|------------------------------|-------------------------------------------------------------------------|
| int SFO_MepDis_V5(int n) (1) | int SFO_MepDis_V5(int n) (1)                                            |
| status = SFO_MepDis_V5(1)    | The scale factor in MEP_ScaleFactor[1] is updated when status = 1       |
| status = SFO_MepDis_V5(2)    | The scale factor in MEP_ScaleFactor[2] is updated when status = 1       |
| ...                          | ...                                                                     |
| status = SFP_MepDis_V5(16)   | The scale factor in MEP_ScaleFactor[16] is updated when status = 1 or 2 |
| int SFO_MepEn_V5(int n) (1)  | int SFO_MepEn_V5(int n) (1)                                             |
| status = SFO_MepEn_V5(1);    | The scale factor in MEP_ScaleFactor[1] is updated when status = 1 or 2  |
| status = SFO_MepEn_V5(2);    | The scale factor in MEP_ScaleFactor[2] is updated when status = 1 or 2  |
| ...                          | ...                                                                     |
| status = SFO_MepEn_V5(16);   | The scale factor in MEP_ScaleFactor[16] is updated when status = 1 or 2 |

(1) MEP\_ScaleFactor[0] is a starting seed value used by the SFO software functions internally.

To use the HRPWM feature of the ePWMs, it is recommended that the SFO functions in TI\_Build\_V5.lib be used as described here. For different devices that may have fewer HRPWM channels, modifications will be required in Step 1 and Step 2.

NOTE:

The following example assumes there are four ePWM instances that contain the HRPWM submodule in the device. See Section 15.1.2 to determine the number of ePWM instances that contain the HRPWM submodule.

## Step 1. Add Include Files

The SFO\_V5.h file needs to be included as follows. This include file is mandatory when using the SFO V5 library functions.

## Example 15-7. A Sample of How to Add Include Files

#include SFO\_V5.h

// SFO V5 lib functions (needed for HRPWM)

## Step 2. Define Number of HRPWM Channels Used

In the SFO\_V5.h file, the maximum number of HRPWM's used for a particular device must be defined. PWM\_CH must equal the number of HRPWM channels plus 1.

To save static variable memory, fewer than the maximum number of HRPWM channels may be defined with some caution. To do this, PWM\_CH can be set to the largest ePWM channel number plus 1. For instance, if only ePWM1A and ePWM2A channels are required as HRPWM channels, PWM\_CH can be set to 3. However, if only ePWM15A and ePWM16A channels are required as HRPWM channels, PWM\_CH must still be set to 17.

## Example 15-8. Defining Number of HRPWM Channels Used (Plus 1)

```
// SFO_V5.H // NOTE: THIS IS A VERY IMPORTANT STEP. PWM_CH MUST BE DEFINED FIRST BEFORE // BUILDING CODE. #define PWM_CH 17 // Maximum of 16 HRPWM channels (16+1=17)
```

## Step 3. Element Declaration

Declare an array of integer variables with a length equal to PWM\_CH, and an array of pointers to EPWM register structures. The array of pointers will include pointers for up to 16 EPWM register structures plus one dummy pointer in location EPWM[0] for a device with 16 EPWM channels. Likewise, it will include pointers for up to 4 EPWM register structures plus 1 for a device with 4 EPWM registers and up to 3 EPWM register structures plus 1 for a device with 3 EPWM registers.

## Example 15-9. Declaring Elements Required by SFO\_TI\_Build\_V5.lib

```
int MEP_ScaleFactor[PWM_CH] = {0,0,0,0,0, // Scale factor values for ePWM 1-16 0,0,0,0, // and MEP_ScaleFactor[0] 0,0,0,0, // For fewer HRPWM channels, there 0,0,0,0};// will be fewer zeros initialized. // Declare a volatile array of pointers to EPWM Register structures. // Only point to registers that exist. If a device has only 6 EPWMs (PWM_CH is 7), // the array will include pointers for up to 6 EPWM register structures plus one // dummy pointer in the ePWM[0] location. volatile struct EPWM_REGS *ePWM[PWM_CH] {&EPwm1Regs, &EPwm1Regs, &EPwm2Regs, &EPwm3Regs, &EPwm4Regs, &EPwm5Regs, &EPwm6Regs, &EPwm7Regs, &EPwm8Regs, &EPwm9Regs, &EPwm10Regs, &EPwm11Regs, &EPwm12Regs, &EPwm13Regs, &EPwm14Regs, &EPwm15Regs, &EPwm16Regs};
```

## Step 4. MEP\_ScaleFactor Initialization

After power up, the SFO\_MepEn\_V5(n) function needs a typical scale factor starting seed value in MEP\_ScaleFactor[0]. This value can be conveniently determined using one of the ePWM modules to run the SFO\_MepDis\_V5(n) function prior to initializing the PWM settings for the application. The SFO\_MepDis\_V5(n) function does not require a starting scale factor value.

As part of the one-time initialization code, include the following:

## Example 15-10. Initialization With a Scale Factor Value

```
// MEP_ScaleFactor variables initialized using function SFO_MepDis_V5 Uint16 I; for (I=1; i<PWM_CH; I++) // For channels 1-16 { while (SFO_MepDis_V5(I)==0); // Calls MepDis until MEP_ScaleFactor updated } // Initialize MEP_ScaleFactor[0] with a typical MEP seed value // required for SFO_MepEn_V5 MEP_ScaleFactor[0] = MEP_ScaleFactor[1];
```

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Step 5. Application Code

While the application is running, fluctuations in both device temperature and supply voltage may be expected. To be sure that optimal scale factors are used for each ePWM module, the SFO function should be re-run periodically as part of a slower background loop. Some examples of this are shown here.

## Example 15-11. SFO Function Calls

```
main() { Uint16 current_ch = 1; // keeps track of current HRPWM channel being calibrated Uint16 status; // User code // Case 1: All ePWMs are running in HRPWM mode // Here, the minimum duty cycle limitation is 6 clock cycles. status = SFO_MepEn_V5(current_ch); // MepEn called here if (status ==1) // if MEP_ScaleFactor has been updated { current_ch++; // move on to the next channel } else if (status==2) // if MEP_ScaleFactor differs from { // MEP_ScaleFactor[0] seed by more than error(); // +/-15, flag an error } if (current_ch==PWM_CH) // if last channel has been reached { current_ch = 1; // go back to channel 1 } // Case 2: all ePWMs except one are running in HRPWM mode. // One of the ePWM channels (ePWM16 in this example) is used // for SFO_MepDis_V5 scale factor calibration. // Here, the minimum duty cycle limitation is 3 clock cycles. // HRPWM16 diagnostics circuitry is used to estimate the MEP steps // with the assumption that all HRPWM channels behave similarly // though they may not be identical. while (SFO_MepDis_V5(16)==0); // wait until MEP_ScaleFactor[16] updated for (I=1; I<(PWM_CH-1); I++) // Update scale factors for ePWM 1-15. { MEP_ScaleFactor[i] = MEP_ScaleFactor[16];
```

## 15.2.2.11 ePWM Behavior During Emulation

To configure the ePWM to stop during emulation suspend events (for example, debugger breakpoints), set up the ePWM and the Debug Subsystem:

1. Set TBCTL.FREE\_SOFT= 0 or 1 (see register description for more details). This will allow the Suspend\_Control signal from the Debug Subsystem (Chapter 27) to stop and start the ePWM. Note that if FREE\_SOFT = 2 or 3, the Suspend\_Control signal is ignored and the ePWM is free running regardless of any debug suspend event. This FREE\_SOFT bit gives local control from a module perspective to gate the suspend signal coming from the Debug Subsystem.
2. Set the appropriate xxx\_Suspend\_Control register = 0x9, as described in Section 27.1.1.1, Debug Suspend Support for Peripherals . Choose the register appropriate to the peripheral you want to suspend during a suspend event.

<!-- image -->

www.ti.com