# DMTIMER Overview - AM335x Family General Purpose Timers

## Introduction

The AM335x family includes multiple DMTIMER (Dual-Mode Timer) instances that provide flexible timing capabilities for the system. **All DMTIMER instances are fully available on the AM3358**. These timers support various operating modes including basic timing, PWM generation, and input capture.

## Timer Instances

### Regular DMTIMER (Timer2-7)
- **Instances**: Timer2, Timer3, Timer4, Timer5, Timer6, Timer7
- **Base Addresses**: 
  - Timer2: 0x48040000 (IRQ 68)
  - Timer3: 0x48042000 (IRQ 69)
  - Timer4: 0x48044000 (IRQ 92)
  - Timer5: 0x48046000 (IRQ 93)
  - Timer6: 0x48048000 (IRQ 94)
  - Timer7: 0x4804A000 (IRQ 95)
- **Clock Domain**: L4PER (Peripheral domain)
- **Register Layout**: Standard DMTIMER (AM335x TRM Table 20-10)

### DMTIMER_1MS (Timer1)
- **Instance**: Timer1 only
- **Base Address**: 0x44E31000
- **IRQ Number**: 67 (TINT1_1MS)
- **Purpose**: Specialized for 1ms system tick generation
- **Register Layout**: DMTIMER_1MS (Table 20-35)

## Key Features

### Timing Capabilities
- **Resolution**: 32-bit counter with configurable prescaler
- **Clock Sources**: 
  - 24MHz system clock (CLK_M_OSC)
  - 32.768kHz oscillator (CLK_32K_RTC)
- **Prescaler**: 8 settings (1, 2, 4, 8, 16, 32, 64, 128)
- **Auto-reload**: Programmable reload value for continuous operation

### Operating Modes
1. **Free-Running Timer**: Continuous counting
2. **One-Shot Timer**: Single timeout event
3. **PWM Generator**: Pulse Width Modulation output
4. **Input Capture**: Timestamp external events
5. **Compare Mode**: Generate events at specific count values

### Interrupt Sources
- **Overflow (OVF)**: Counter overflow event
- **Match (MAT)**: Counter matches compare register
- **Capture (TCAR)**: Input capture event occurred

## Functional Block Diagram

```
Clock Sources → [Prescaler] → [32-bit Counter] → Interrupts
                                    ↓
                              [Compare Logic] → PWM Output
                                    ↓
                              [Capture Logic] ← External Input
```

## Programming Model

### Basic Timer Operation
1. **Configure Clock Source**: Set TSICR register
2. **Set Prescaler**: Configure PTV and PRE bits in TCLR
3. **Load Counter**: Write initial value to TLDR
4. **Enable Timer**: Set ST bit in TCLR
5. **Handle Interrupts**: Service overflow/match/capture events

### PWM Generation
1. **Set Compare Mode**: Enable CE bit in TCLR
2. **Configure Match Value**: Write to TMAR register
3. **Set PWM Mode**: Configure PT and SCPWM bits
4. **Enable Auto-reload**: Set AR bit for continuous operation

### Input Capture
1. **Configure Capture Mode**: Set TCM bits in TCLR
2. **Select Trigger Edge**: Rising, falling, or both edges
3. **Enable Capture**: Set CAPT_MODE bit
4. **Read Captured Values**: TCAR1 and TCAR2 registers

## Clock Management

### Clock Source Selection
The TSICR (Timer Synchronous Interface Control) register controls clock source:
- **Bit 1-0**: Clock source selection
  - 00: 24MHz system clock
  - 01: 32.768kHz RTC clock
  - 10: External clock (ECLKIN)
  - 11: Reserved

### Frequency Calculation
```
Timer Frequency = Input Clock / (2^(PTV+1))
where PTV = Prescaler value (0-7)
```

## Power Management

### Clock Gating
- Timers can be individually clock-gated through CM_PER
- Automatic clock gating when timer is stopped
- Wake-up capability from low-power modes

### Power Domains
- Timer2-7: CORE power domain
- Timer1: WKUP (Always-on) power domain

## Register Summary

### Common Registers (All Timers)
- **TIDR**: Timer identification
- **TIOCP_CFG**: OCP interface configuration
- **TCLR**: Timer control (main configuration)
- **TCRR**: Current counter value
- **TLDR**: Load/reload value
- **TTGR**: Trigger register
- **TWPS**: Write posting status
- **TMAR**: Match/compare value
- **TCAR1/TCAR2**: Capture registers
- **TSICR**: Clock source control

### Regular DMTIMER Specific
- **IRQ_EOI**: End of interrupt
- **IRQSTATUS_RAW**: Raw interrupt status
- **IRQSTATUS**: Masked interrupt status
- **IRQENABLE_SET/CLR**: Interrupt enable control
- **IRQWAKEEN**: Wakeup enable

### DMTIMER_1MS Specific
- **TISTAT**: Timer status
- **TISR**: Interrupt status
- **TIER**: Interrupt enable
- **TWER**: Wakeup enable
- **TPIR/TNIR**: 1ms tick increment registers
- **TCVR**: Counter value register
- **TOCR/TOWR**: Overflow counter registers

## Implementation Notes

### Write Posting
- Register writes may be posted (non-blocking)
- TWPS register indicates pending writes
- Critical for time-sensitive operations

### Interrupt Handling
- Clear interrupt flags after servicing
- Regular timers: Write to IRQSTATUS
- DMTIMER_1MS: Write to TISR

### Synchronization
- Counter reads may require synchronization
- Use TCRR for current count value
- TTGR trigger can force counter reload

## Error Conditions

### Common Issues
1. **Clock not enabled**: Verify CM_PER settings
2. **Interrupt not clearing**: Ensure proper flag clearing
3. **Prescaler misconfiguration**: Check PTV/PRE bit settings
4. **Write posting delay**: Wait for TWPS before critical reads

### Debug Techniques
- Read TIDR to verify timer accessibility
- Check TWPS for pending register writes
- Monitor interrupt status registers
- Verify clock source configuration

## Related Documentation

- [DMTIMER Register Reference](../../registers/AM335x_DMTIMER_Register_Reference.md) - Complete register definitions
- [Timer Implementation Guide](../../implementation/timer-usage.md) - Programming examples
- [PWM Generation Guide](../../implementation/pwm-generation.md) - PWM-specific configuration
- [Clock Management](../../clocking/clock-domains.md) - System clock configuration

## References

- AM335x Technical Reference Manual, Chapter 20
- AM335x Technical Reference Manual, Tables 20-10 and 20-35
- BeagleBone System Reference Manual
- ARM Cortex-A8 Technical Reference Manual