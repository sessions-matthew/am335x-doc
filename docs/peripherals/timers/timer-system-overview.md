# Timer System Overview - AM335x Family

## Introduction

The AM335x family provides a comprehensive timer subsystem consisting of eight 32-bit general-purpose timers, a watchdog timer, and a real-time clock (RTC). **All timer instances are available on the AM3358**. These timing resources serve various system functions from basic timing operations to PWM generation, input capture, and system monitoring.

## Timer Architecture Overview

### Timer Instances Summary (AM335x Family)

| Timer | Type | Base Address | Clock Domain | IRQ | Pin Access | Primary Use | AM3358 |
|-------|------|--------------|--------------|-----|------------|-------------|---------|
| TIMER0 | DMTIMER | 0x44E05000 | WKUP | 66 | No | Wakeup domain timing | ✅ Available |
| TIMER1 | DMTIMER_1MS | 0x44E31000 | WKUP | 67 | No | 1ms system tick | ✅ Available |
| TIMER2 | DMTIMER | 0x48040000 | L4PER | 68 | No | General purpose | ✅ Available |
| TIMER3 | DMTIMER | 0x48042000 | L4PER | 69 | No | General purpose | ✅ Available |
| TIMER4 | DMTIMER | 0x48044000 | L4PER | 92 | Yes | PWM/Capture | ✅ Available |
| TIMER5 | DMTIMER | 0x48046000 | L4PER | 93 | Yes | PWM/Capture | ✅ Available |
| TIMER6 | DMTIMER | 0x48048000 | L4PER | 94 | Yes | PWM/Capture | ✅ Available |
| TIMER7 | DMTIMER | 0x4804A000 | L4PER | 95 | Yes | PWM/Capture | ✅ Available |

**Notes**: 
- Timer IRQ numbers are per AM335x TRM Chapter 6 (Interrupts)
- Timers 4-7 have external pin access for PWM output and input capture
- TIMER1 is specialized for 1ms system tick generation

### Clock Sources

All timers can be configured to use one of several clock sources:

#### Available Clock Sources
- **CLK_M_OSC**: 24 MHz master oscillator (default)
- **CLK_32KHZ**: 32.768 kHz RTC oscillator
- **TCLKIN**: External clock input (Timer4-7 only)
- **CLK_RC32K**: 32 kHz RC oscillator

#### Clock Selection Registers
- **CLKSEL_TIMER2_CLK** (0x44E10508): Timer2 clock selection
- **CLKSEL_TIMER3_CLK** (0x44E1050C): Timer3 clock selection  
- **CLKSEL_TIMER4_CLK** (0x44E10510): Timer4 clock selection
- **CLKSEL_TIMER5_CLK** (0x44E10518): Timer5 clock selection
- **CLKSEL_TIMER6_CLK** (0x44E1051C): Timer6 clock selection
- **CLKSEL_TIMER7_CLK** (0x44E10504): Timer7 clock selection
- **CLKSEL_TIMER1MS_CLK** (0x44E10528): Timer1 (1ms) clock selection

**Base Address**: CM_DPLL (0x44E10000) + offset

## DMTIMER (General Purpose Timers)

### Core Features

#### Counter Operation
- **32-bit up-counter**: Full 32-bit counting range (0 to 0xFFFFFFFF)
- **Auto-reload**: Automatic reload from TLDR register on overflow
- **Real-time access**: Counter can be read/written while running
- **Start/stop control**: Software-controlled timer enable/disable

#### Prescaler Support
The timers include a programmable prescaler that divides the input clock:
- **Prescaler values**: 1, 2, 4, 8, 16, 32, 64, 128 (3-bit selection)
- **Formula**: Effective_Clock = Input_Clock / Prescaler
- **Resolution**: Determines minimum timing resolution

#### Operating modes
1. **Free Running**: Continuous counting with overflow interrupt
2. **One-Shot**: Single timeout event, then stop
3. **Compare Mode**: Generate interrupt when counter matches TMAR
4. **Capture Mode**: Timestamp external events on dedicated input
5. **PWM Mode**: Generate pulse-width modulated output signals

### Timer Resolution and Range

| Clock Source | Prescaler | Resolution | Maximum Period |
|--------------|-----------|------------|----------------|
| 24 MHz | 1 | 41.67 ns | ~178.9 seconds |
| 24 MHz | 128 | 5.33 µs | ~6.37 hours |
| 32.768 kHz | 1 | 30.52 µs | ~36.4 hours |
| 32.768 kHz | 128 | 3.91 ms | ~194.2 days |

### Interrupt Sources

Each DMTIMER generates interrupts from three sources:
- **Overflow (OVF)**: Counter overflow from 0xFFFFFFFF to 0x00000000
- **Match (MAT)**: Counter value matches TMAR register
- **Capture (TCAR)**: External event captured on timer input pin

### Write Posted Mode

DMTIMERs support write-posted mode for improved performance:
- **Normal Mode**: Write operations wait for synchronization (slower, safer)
- **Posted Mode**: Write operations return immediately (faster, requires status checking)
- **Status Monitoring**: TWPS register indicates pending write operations

## DMTIMER_1MS (Timer1)

### Special Purpose Design

TIMER1 is specifically designed for generating 1ms system ticks:

#### Unique Features
- **Dedicated 1ms functionality**: Optimized for system tick generation  
- **Enhanced resolution**: Additional sub-millisecond timing support
- **Wake-up capability**: Can wake system from low-power states
- **Specialized registers**: Additional registers for fine timing control

#### Additional Registers
- **TPIR**: Positive increment register for fine timing
- **TNIR**: Negative increment register for fine timing  
- **TCVR**: Current value register for sub-ms timing
- **TOCR**: Overflow counter register
- **TOWR**: Overflow wrapper register

#### Clock Configuration
TIMER1 typically uses the 32.768 kHz clock source with special divider logic to achieve precise 1ms interrupts.

## Pin Muxing and External Connections

### Timer4-7 Pin Access

Only TIMER4-7 have external pin connections available:

#### TIMER4 Signals
- **Pin**: timer4 (multiple mux options)
- **Functions**: 
  - Input capture (EVENTCAPT)
  - PWM output (PORGPOCFG)
  - Trigger output

#### TIMER5 Signals  
- **Pin**: timer5 (multiple mux options)
- **Functions**:
  - Input capture (EVENTCAPT)
  - PWM output (PORGPOCFG)
  - Trigger output

#### TIMER6 Signals
- **Pin**: timer6 (multiple mux options) 
- **Functions**:
  - Input capture (EVENTCAPT)
  - PWM output (PORGPOCFG)
  - Trigger output

#### TIMER7 Signals
- **Pin**: timer7 (multiple mux options)
- **Functions**:
  - Input capture (EVENTCAPT) 
  - PWM output (PORGPOCFG)
  - Trigger output

### External Clock Input (TCLKIN)

TIMER4-7 can accept external clock input:
- **Signal**: TCLKIN
- **Purpose**: External timing reference
- **Configuration**: Selected via CLKSELx_TIMERx_CLK registers

## PWM Generation Capabilities

### PWM Output Configuration

Timers 4-7 can generate PWM signals with the following characteristics:

#### PWM Parameters
- **Frequency Range**: Determined by clock source and reload value
- **Duty Cycle**: Controlled by TMAR (match) register value  
- **Resolution**: Up to 32-bit resolution (practically limited by frequency)
- **Polarity**: Configurable active high/low

#### PWM Calculation
```
PWM_Frequency = Timer_Clock / ((TLDR_Value + 1) * Prescaler)
Duty_Cycle = (TLDR_Value - TMAR_Value + 1) / (TLDR_Value + 1)
```

### PWM Configuration Modes

#### Mode 1: SCPWM = 0 (Default)
- **Output**: Pulses high for duration between match and overflow
- **Duty cycle**: Controlled by TMAR value
- **Typical use**: Standard PWM applications

#### Mode 2: SCPWM = 1 (Inverted)
- **Output**: Pulses low for duration between match and overflow
- **Duty cycle**: Inverted from Mode 1
- **Typical use**: Active-low PWM requirements

## Input Capture Functionality

### Capture Event Detection

Timers 4-7 support input capture on external pins:

#### Capture Trigger Options
- **Rising edge**: CAPT_MODE = 0, CAPTEDGE = 1
- **Falling edge**: CAPT_MODE = 0, CAPTEDGE = 0  
- **Both edges**: CAPT_MODE = 1

#### Capture Registers
- **TCAR1**: First capture value register
- **TCAR2**: Second capture value register (dual capture mode)

#### Applications
- **Frequency measurement**: Measure period between edges
- **Pulse width measurement**: Measure high/low time
- **Event timestamping**: Record precise timing of external events

## Power Management

### Clock Management

#### Clock Control Registers
Each timer has dedicated clock control:
- **CM_PER_TIMERx_CLKCTRL**: Clock enable and idle management
- **Module modes**: Disabled, enabled, idle states
- **Standby modes**: Force, smart, no standby

#### Low Power Features
- **Clock gating**: Automatic clock disable when idle
- **Standby modes**: Reduced power consumption
- **Wake-up support**: Timer0/1 can wake from low-power states

### Power Domain Assignment

- **WKUP Domain**: TIMER0, TIMER1 (always powered)
- **PER Domain**: TIMER2-7 (can be powered down)

## System Integration

### Interrupt Controller Integration

All timer interrupts connect to the ARM INTC:

#### Interrupt Priority
Timer interrupts can be configured with different priorities in the INTC for real-time response requirements.

#### Interrupt Sharing
Each timer has a dedicated IRQ line - no sharing between timers.

### DMA Integration

While timers don't directly support DMA, they can trigger DMA operations:
- **Event triggers**: Timer events can trigger EDMA transfers
- **Synchronization**: Timer-based DMA synchronization for periodic transfers

### PRU-ICSS Integration

Timers can interact with PRU-ICSS for industrial applications:
- **Event mapping**: Timer events can be mapped to PRU interrupts
- **Timestamping**: PRU can read timer values for precise timing
- **Synchronization**: Coordinate PRU and ARM timing operations

## Timer Synchronization and Coordination

### Multi-Timer Coordination

For applications requiring synchronized operation of multiple timers:

#### Simultaneous Start
- **TTGR register**: Trigger register for synchronized start
- **Software coordination**: Start multiple timers in sequence
- **Hardware events**: Use timer outputs to trigger other timers

#### Phase Alignment
- **Counter loading**: Load specific values for phase relationships
- **Match value adjustment**: Adjust match points for synchronized events
- **Overflow coordination**: Align overflow events across timers

## Performance Characteristics

### Access Latency

#### Normal Mode
- **Write latency**: Multiple OCP clock cycles for synchronization
- **Read latency**: Immediate for most registers
- **Sync time**: Depends on clock ratio between OCP and timer clocks

#### Posted Mode  
- **Write latency**: Single OCP clock cycle (immediate return)
- **Status checking**: Required via TWPS register
- **Performance gain**: Significant for multiple sequential writes

### Timing Accuracy

#### Clock Source Accuracy
- **24 MHz oscillator**: Typically ±50 ppm
- **32.768 kHz crystal**: Typically ±20 ppm  
- **RC oscillator**: Typically ±1% (less accurate)

#### Jitter Considerations
- **Interrupt latency**: Affects timing precision
- **System load**: High CPU load increases jitter
- **Clock domain crossing**: May introduce small delays

## Error Handling and Diagnostics

### Common Error Conditions

#### Write Posted Mode Errors
- **Pending writes**: TWPS register indicates unfinished operations
- **Write conflicts**: Multiple writes before sync completion
- **Recovery**: Wait for TWPS to clear before next operation

#### Clock Configuration Errors
- **Invalid clock source**: No clock or stopped clock
- **Clock ratio issues**: Extreme ratios affect synchronization
- **Detection**: Monitor timer operation and interrupt generation

### Debugging Features

#### Register Access
- **Real-time reading**: Counter values can be read while running
- **Status registers**: Comprehensive status information
- **Reset states**: Known reset values for all registers

#### Test Modes
- **Loopback**: Internal test configurations
- **Single-step**: Manual timer advancement for testing
- **Register writes**: Direct counter manipulation for testing

## Related Hardware Components

### Watchdog Timer
- **Purpose**: System monitoring and reset generation
- **Integration**: Separate from DMTIMER but similar architecture
- **Clock source**: Typically 32.768 kHz for long timeout periods

### RTC (Real-Time Clock)
- **Purpose**: Calendar and time-of-day functions
- **Integration**: Independent of DMTIMER system
- **Clock source**: 32.768 kHz crystal for accuracy

### eCAP (Enhanced Capture)
- **Purpose**: High-resolution capture and PWM
- **Integration**: Separate from DMTIMER but complementary
- **Features**: Sub-nanosecond resolution capabilities

## Application Categories

### System Timing
- **OS tick generation**: Regular system interrupts
- **Timeout management**: Software timeout detection
- **Scheduling**: Real-time task scheduling support

### Control Applications  
- **Motor control**: PWM generation for motor drives
- **Servo control**: Precise timing for servo positioning
- **Process control**: Periodic sampling and control loops

### Measurement and Monitoring
- **Frequency measurement**: Input signal frequency detection
- **Pulse width measurement**: Signal analysis
- **Event timing**: Precise event timestamping

### Communication Support
- **Protocol timing**: Communication protocol support
- **Baud rate generation**: Serial communication timing
- **Network synchronization**: Time-based network protocols

## Documentation References

- [DMTIMER Register Reference](../../registers/AM335x_DMTIMER_Register_Reference.md) - Complete register documentation
- [Timer Implementation Guide](../../implementation/timer-usage.md) - Programming examples and best practices
- [Interrupt System](../../interrupts/interrupt-system.md) - Timer interrupt handling
- [PWM Generation Guide](../../implementation/pwm-generation.md) - PWM configuration and applications
- [Input Capture Guide](../../implementation/input-capture.md) - Capture mode programming

## Summary

The AM3358 timer subsystem provides comprehensive timing capabilities through eight general-purpose timers plus specialized timing components. Key capabilities include:

- **Flexible timing**: 32-bit resolution with programmable prescaling
- **Multiple modes**: Free-running, one-shot, compare, capture, and PWM
- **External connectivity**: Timer4-7 support external pins for PWM and capture
- **Power management**: Integrated with SoC power domains and clock management
- **High performance**: Write-posted mode for minimal access latency
- **System integration**: Comprehensive interrupt and DMA integration

This timer architecture supports a wide range of applications from basic system timing to complex real-time control and measurement systems.