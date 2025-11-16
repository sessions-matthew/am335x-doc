<!-- image -->

www.ti.com

## 15.3.3 Use Cases

The following sections will provide Applications examples and code snippets to show how to configure and operate the eCAP module. For clarity and ease of use, below are useful #defines which will help in the understanding of the examples.

```
// ECCTL1 ( ECAP Control Reg 1) //========================== // CAPxPOL bits #define EC_RISING 0x0 #define EC_FALLING 0x1 // CTRRSTx bits #define EC_ABS_MODE 0x0 #define EC_DELTA_MODE 0x1 // PRESCALE bits #define EC_BYPASS 0x0 #define EC_DIV1 0x0 #define EC_DIV2 0x1 #define EC_DIV4 0x2 #define EC_DIV6 0x3 #define EC_DIV8 0x4 #define EC_DIV10 0x5 // ECCTL2 ( ECAP Control Reg 2) //========================== // CONT/ONESHOT bit #define EC_CONTINUOUS 0x0 #define EC_ONESHOT 0x1 // STOPVALUE bit #define EC_EVENT1 0x0 #define EC_EVENT2 0x1 #define EC_EVENT3 0x2 #define EC_EVENT4 0x3 // RE-ARM bit #define EC_ARM 0x1 // TSCTRSTOP bit #define EC_FREEZE 0x0 #define EC_RUN 0x1 // SYNCO_SEL bit #define EC_SYNCIN 0x0 #define EC_CTR_PRD 0x1 #define EC_SYNCO_DIS 0x2 // CAP/APWM mode bit #define EC_CAP_MODE 0x0 #define EC_APWM_MODE 0x1 // APWMPOL bit #define EC_ACTV_HI 0x0 #define EC_ACTV_LO 0x1 // Generic #define EC_DISABLE 0x0 #define EC_ENABLE 0x1 #define EC_FORCE 0x1
```

## 15.3.3.1 Absolute Time-Stamp Operation Rising Edge Trigger Example

Figure 15-110 shows an example of continuous capture operation (Mod4 counter wraps around). In this figure, TSCTR counts-up without resetting and capture events are qualified on the rising edge only, this gives period (and frequency) information.

On an event, the TSCTR contents (time-stamp) is first captured, then Mod4 counter is incremented to the next state. When the TSCTR reaches FFFF FFFFh (maximum value), it wraps around to 0000 0000h (not shown in Figure 15-110), if this occurs, the CNTOVF (counter overflow) flag is set, and an interrupt (if enabled) occurs, CNTOVF (counter overflow) Flag is set, and an Interrupt (if enabled) occurs. Captured time-stamps are valid at the point indicated by the diagram, after the 4th event, hence event CEVT4 can conveniently be used to trigger an interrupt and the CPU can read data from the CAP n registers.

Figure 15-110. Capture Sequence for Absolute Time-Stamp, Rising Edge Detect

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-94. ECAP Initialization for CAP Mode Absolute Time, Rising Edge Trigger

| Register   | Bit         | Value         |
|------------|-------------|---------------|
| ECCTL1     | CAP1POL     | EC_RISING     |
| ECCTL1     | CAP2POL     | EC_RISING     |
| ECCTL1     | CAP3POL     | EC_RISING     |
| ECCTL1     | CAP4POL     | EC_RISING     |
| ECCTL1     | CTRRST1     | EC_ABS_MODE   |
| ECCTL1     | CTRRST2     | EC_ABS_MODE   |
| ECCTL1     | CTRRST3     | EC_ABS_MODE   |
| ECCTL1     | CTRRST4     | EC_ABS_MODE   |
| ECCTL1     | CAPLDEN     | EC_ENABLE     |
| ECCTL1     | PRESCALE    | EC_DIV1       |
| ECCTL2     | CAP_APWM    | EC_CAP_MODE   |
| ECCTL2     | CONT_ONESHT | EC_CONTINUOUS |
| ECCTL2     | SYNCO_SEL   | EC_SYNCO_DIS  |
| ECCTL2     | SYNCI_EN    | EC_DISABLE    |
| ECCTL2     | TSCTRSTOP   | EC_RUN        |

## Example 15-18. Code Snippet for CAP Mode Absolute Time, Rising Edge Trigger

```
// Code snippet for CAP mode Absolute Time, Rising edge trigger // Run Time ( e.g. CEVT4 triggered ISR call) //========================================== TSt1 = ECAPxRegs.CAP1; // Fetch Time-Stamp captured at t1 TSt2 = ECAPxRegs.CAP2; // Fetch Time-Stamp captured at t2 TSt3 = ECAPxRegs.CAP3; // Fetch Time-Stamp captured at t3 TSt4 = ECAPxRegs.CAP4; // Fetch Time-Stamp captured at t4 Period1 = TSt2-TSt1; // Calculate 1st period Period2 = TSt3-TSt2; // Calculate 2nd period Period3 = TSt4-TSt3; // Calculate 3rd period
```

## 15.3.3.2 Absolute Time-Stamp Operation Rising and Falling Edge Trigger Example

In Figure 15-111 the eCAP operating mode is almost the same as in the previous section except capture events are qualified as either rising or falling edge, this now gives both period and duty cycle information: Period1 = t 3 - t 1 , Period2 = t 5 - t 3 , …etc. Duty Cycle1 (on-time %) = (t 2 - t 1 ) / Period1 x 100%, etc. Duty Cycle1 (off-time %) = (t 3 - t 2 ) / Period1 x 100%, etc.

Figure 15-111. Capture Sequence for Absolute Time-Stamp, Rising and Falling Edge Detect

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-95. ECAP Initialization for CAP Mode Absolute Time, Rising and Falling Edge Trigger

| Register   | Bit         | Value         |
|------------|-------------|---------------|
| ECCTL1     | CAP1POL     | EC_RISING     |
| ECCTL1     | CAP2POL     | EC_FALLING    |
| ECCTL1     | CAP3POL     | EC_RISING     |
| ECCTL1     | CAP4POL     | EC_FALLING    |
| ECCTL1     | CTRRST1     | EC_ABS_MODE   |
| ECCTL1     | CTRRST2     | EC_ABS_MODE   |
| ECCTL1     | CTRRST3     | EC_ABS_MODE   |
| ECCTL1     | CTRRST4     | EC_ABS_MODE   |
| ECCTL1     | CAPLDEN     | EC_ENABLE     |
| ECCTL1     | PRESCALE    | EC_DIV1       |
| ECCTL2     | CAP_APWM    | EC_CAP_MODE   |
| ECCTL2     | CONT_ONESHT | EC_CONTINUOUS |
| ECCTL2     | SYNCO_SEL   | EC_SYNCO_DIS  |
| ECCTL2     | SYNCI_EN    | EC_DISABLE    |
| ECCTL2     | TSCTRSTOP   | EC_RUN        |

## Example 15-19. Code Snippet for CAP Mode Absolute Time, Rising and Falling Edge Trigger

```
// Code snippet for CAP mode Absolute Time, Rising & Falling edge triggers // Run Time ( e.g. CEVT4 triggered ISR call) //========================================== TSt1 = ECAPxRegs.CAP1; // Fetch Time-Stamp captured at t1 TSt2 = ECAPxRegs.CAP2; // Fetch Time-Stamp captured at t2 TSt3 = ECAPxRegs.CAP3; // Fetch Time-Stamp captured at t3 TSt4 = ECAPxRegs.CAP4; // Fetch Time-Stamp captured at t4 Period1 = TSt3-TSt1; // Calculate 1st period DutyOnTime1 = TSt2-TSt1; // Calculate On time DutyOffTime1 = TSt3-TSt2; // Calculate Off time
```

## 15.3.3.3 Time Difference (Delta) Operation Rising Edge Trigger Example

Figure 15-112 shows how the eCAP module can be used to collect Delta timing data from pulse train waveforms. Here Continuous Capture mode (TSCTR counts-up without resetting, and Mod4 counter wraps around) is used. In Delta-time mode, TSCTR is Reset back to Zero on every valid event. Here Capture events are qualified as Rising edge only. On an event, TSCTR contents (time-stamp) is captured first, and then TSCTR is reset to Zero. The Mod4 counter then increments to the next state. If TSCTR reaches FFFF FFFFh (maximum value), before the next event, it wraps around to 0000 0000h and continues, a CNTOVF (counter overflow) Flag is set, and an Interrupt (if enabled) occurs. The advantage of Delta-time Mode is that the CAP n contents directly give timing data without the need for CPU calculations: Period1 = T 1 , Period2 = T 2 ,…etc. As shown in Figure 15-112, the CEVT1 event is a good trigger point to read the timing data, T 1 , T2 , T3 , T4 are all valid here.

Figure 15-112. Capture Sequence for Delta Mode Time-Stamp, Rising Edge Detect

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-96. ECAP Initialization for CAP Mode Delta Time, Rising Edge Trigger

| Register   | Bit         | Value         |
|------------|-------------|---------------|
| ECCTL1     | CAP1POL     | EC_RISING     |
| ECCTL1     | CAP2POL     | EC_RISING     |
| ECCTL1     | CAP3POL     | EC_RISING     |
| ECCTL1     | CAP4POL     | EC_RISING     |
| ECCTL1     | CTRRST1     | EC_DELTA_MODE |
| ECCTL1     | CTRRST2     | EC_DELTA_MODE |
| ECCTL1     | CTRRST3     | EC_DELTA_MODE |
| ECCTL1     | CTRRST4     | EC_DELTA_MODE |
| ECCTL1     | CAPLDEN     | EC_ENABLE     |
| ECCTL1     | PRESCALE    | EC_DIV1       |
| ECCTL2     | CAP_APWM    | EC_CAP_MODE   |
| ECCTL2     | CONT_ONESHT | EC_CONTINUOUS |
| ECCTL2     | SYNCO_SEL   | EC_SYNCO_DIS  |
| ECCTL2     | SYNCI_EN    | EC_DISABLE    |
| ECCTL2     | TSCTRSTOP   | EC_RUN        |

## Example 15-20. Code Snippet for CAP Mode Delta Time, Rising Edge Trigger

```
// Code snippet for CAP mode Delta Time, Rising edge trigger // Run Time ( e.g. CEVT1 triggered ISR call) //========================================== // Note: here Time-stamp directly represents the Period value. Period4 = ECAPxRegs.CAP1; // Fetch Time-Stamp captured at T1 Period1 = ECAPxRegs.CAP2; // Fetch Time-Stamp captured at T2 Period2 = ECAPxRegs.CAP3; // Fetch Time-Stamp captured at T3 Period3 = ECAPxRegs.CAP4; // Fetch Time-Stamp captured at T4
```

<!-- image -->

## 15.3.3.4 Time Difference (Delta) Operation Rising and Falling Edge Trigger Example

In Figure 15-113 the eCAP operating mode is almost the same as in previous section except Capture events are qualified as either Rising or Falling edge, this now gives both Period and Duty cycle information: Period1 = T 1 + T2 , Period2 = T 3 + T4 , …etc Duty Cycle1 (on-time %) = T 1 / Period1 × 100%, etc Duty Cycle1 (off-time %) = T 2 / Period1 × 100%, etc

During initialization, you must write to the active registers for both period and compare. This will then automatically copy the init values into the shadow values. For subsequent compare updates, that is, during run-time, only the shadow registers must be used.

Figure 15-113. Capture Sequence for Delta Mode Time-Stamp, Rising and Falling Edge Detect

t

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-97. ECAP Initialization for CAP Mode Delta Time, Rising and Falling Edge Triggers

| Register   | Bit         | Value         |
|------------|-------------|---------------|
| ECCTL1     | CAP1POL     | EC_RISING     |
| ECCTL1     | CAP2POL     | EC_FALLING    |
| ECCTL1     | CAP3POL     | EC_RISING     |
| ECCTL1     | CAP4POL     | EC_FALLING    |
| ECCTL1     | CTRRST1     | EC_DELTA_MODE |
| ECCTL1     | CTRRST2     | EC_DELTA_MODE |
| ECCTL1     | CTRRST3     | EC_DELTA_MODE |
| ECCTL1     | CTRRST4     | EC_DELTA_MODE |
| ECCTL1     | CAPLDEN     | EC_ENABLE     |
| ECCTL1     | PRESCALE    | EC_DIV1       |
| ECCTL2     | CAP_APWM    | EC_CAP_MODE   |
| ECCTL2     | CONT_ONESHT | EC_CONTINUOUS |
| ECCTL2     | SYNCO_SEL   | EC_SYNCO_DIS  |
| ECCTL2     | SYNCI_EN    | EC_DISABLE    |
| ECCTL2     | TSCTRSTOP   | EC_RUN        |

## Example 15-21. Code Snippet for CAP Mode Delta Time, Rising and Falling Edge Triggers

```
// Code snippet for CAP mode Delta Time, Rising and Falling edge triggers // Run Time ( e.g. CEVT1 triggered ISR call) //========================================== // Note: here Time-stamp directly represents the Duty cycle values. DutyOnTime1 = ECAPxRegs.CAP2; // Fetch Time-Stamp captured at T2 DutyOffTime1 = ECAPxRegs.CAP3; // Fetch Time-Stamp captured at T3 DutyOnTime2 = ECAPxRegs.CAP4; // Fetch Time-Stamp captured at T4 DutyOffTime2 = ECAPxRegs.CAP1; // Fetch Time-Stamp captured at T1 Period1 = DutyOnTime1 + DutyOffTime1; Period2 = DutyOnTime2 + DutyOffTime2;
```

## 15.3.3.5 Application of the APWM Mode

## 15.3.3.5.1 Simple PWM Generation (Independent Channel/s) Example

In this example, the eCAP module is configured to operate as a PWM generator. Here a very simple single channel PWM waveform is generated from output pin APWM n . The PWM polarity is active high, which means that the compare value (CAP2 reg is now a compare register) represents the on-time (high level) of the period. Alternatively, if the APWMPOL bit is configured for active low, then the compare value represents the off-time.

Figure 15-114. PWM Waveform Details of APWM Mode Operation

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## Table 15-98. ECAP Initialization for APWM Mode

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 0x1000       |
| CTRPHS     | CTRPHS    | 0x0          |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_DISABLE   |
| ECCTL2     | SYNCO_SEL | EC_SYNCO_DIS |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

## Example 15-22. Code Snippet for APWM Mode

```
// Code snippet for APWM mode Example 1 // Run Time (Instant 1, e.g. ISR call) //====================== ECAPxRegs.CAP2 = 0x300; // Set Duty cycle i.e. compare value // Run Time (Instant 2, e.g. another ISR call) //====================== ECAPxRegs.CAP2 = 0x500; // Set Duty cycle i.e. compare value
```

## 15.3.3.5.2 Multichannel PWM Generation with Synchronization Example

Figure 15-115 takes advantage of the synchronization feature between eCAP modules. Here 4 independent PWM channels are required with different frequencies, but at integer multiples of each other to avoid "beat" frequencies. Hence one eCAP module is configured as the Master and the remaining 3 are Slaves all receiving their synch pulse (CTR = PRD) from the master. Note the Master is chosen to have the lower frequency (F1 = 1/20,000) requirement. Here Slave2 Freq = 2 × F1, Slave3 Freq = 4 × F1 and Slave4 Freq = 5 × F1. Note here values are in decimal notation. Also, only the APWM1 output waveform is shown.

<!-- image -->

<!-- image -->

<!-- image -->

## Table 15-99. ECAP1 Initialization for Multichannel PWM Generation with Synchronization

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 20000        |
| CTRPHS     | CTRPHS    | 0            |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_DISABLE   |
| ECCTL2     | SYNCO_SEL | EC_CTR_PRD   |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

## Table 15-100. ECAP2 Initialization for Multichannel PWM Generation with Synchronization

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 10000        |
| CTRPHS     | CTRPHS    | 0            |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_ENABLE    |
| ECCTL2     | SYNCO_SEL | EC_SYNCI     |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

## Table 15-101. ECAP3 Initialization for Multichannel PWM Generation with Synchronization

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 5000         |
| CTRPHS     | CTRPHS    | 0            |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_ENABLE    |
| ECCTL2     | SYNCO_SEL | EC_SYNCI     |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

Table 15-102. ECAP4 Initialization for Multichannel PWM Generation with Synchronization

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 4000         |
| CTRPHS     | CTRPHS    | 0            |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_ENABLE    |
| ECCTL2     | SYNCO_SEL | EC_SYNCO_DIS |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

<!-- image -->

www.ti.com

## Example 15-23. Code Snippet for Multichannel PWM Generation with Synchronization

```
// Code snippet for APWM mode Example 2 // Run Time (Note: Example execution of one run-time instant) //============================================================ ECAP1Regs.CAP2 = 7000; // Set Duty cycle i.e., compare value = 7000 ECAP2Regs.CAP2 = 2000; // Set Duty cycle i.e., compare value = 2000 ECAP3Regs.CAP2 = 550; // Set Duty cycle i.e., compare value = 550 ECAP4Regs.CAP2 = 6500; // Set Duty cycle i.e., compare value = 6500
```

## 15.3.3.5.3 Multichannel PWM Generation with Phase Control Example

In Figure 15-116, the Phase control feature of the APWM mode is used to control a 3 phase Interleaved DC/DC converter topology. This topology requires each phase to be off-set by 120° from each other. Hence if 'Leg' 1 (controlled by APWM1) is the reference Leg (or phase), that is, 0°, then Leg 2 need 120° off-set and Leg 3 needs 240° off-set. The waveforms in Figure 15-116 show the timing relationship between each of the phases (Legs). Note eCAP1 module is the Master and issues a sync out pulse to the slaves (modules 2, 3) whenever TSCTR = Period value.

<!-- image -->

www.ti.com

Figure 15-116. Multiphase (channel) Interleaved PWM Example Using 3 eCAP Modules

<!-- image -->

<!-- image -->

## Table 15-103. ECAP1 Initialization for Multichannel PWM Generation with Phase Control

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 1200         |
| CTRPHS     | CTRPHS    | 0            |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_DISABLE   |
| ECCTL2     | SYNCO_SEL | EC_CTR_PRD   |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

## Table 15-104. ECAP2 Initialization for Multichannel PWM Generation with Phase Control

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 1200         |
| CTRPHS     | CTRPHS    | 800          |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_ENABLE    |
| ECCTL2     | SYNCO_SEL | EC_SYNCI     |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

## Table 15-105. ECAP3 Initialization for Multichannel PWM Generation with Phase Control

| Register   | Bit       | Value        |
|------------|-----------|--------------|
| CAP1       | CAP1      | 1200         |
| CTRPHS     | CTRPHS    | 400          |
| ECCTL2     | CAP_APWM  | EC_APWM_MODE |
| ECCTL2     | APWMPOL   | EC_ACTV_HI   |
| ECCTL2     | SYNCI_EN  | EC_ENABLE    |
| ECCTL2     | SYNCO_SEL | EC_SYNCO_DIS |
| ECCTL2     | TSCTRSTOP | EC_RUN       |

## Example 15-24. Code Snippet for Multichannel PWM Generation with Phase Control

```
// Code snippet for APWM mode Example 3 // Run Time (Note: Example execution of one run-time instant) //============================================================ // All phases are set to the same duty cycle ECAP1Regs.CAP2 = 700; // Set Duty cycle i.e. compare value = 700 ECAP2Regs.CAP2 = 700; // Set Duty cycle i.e. compare value = 700 ECAP3Regs.CAP2 = 700; // Set Duty cycle i.e. compare value = 700
```