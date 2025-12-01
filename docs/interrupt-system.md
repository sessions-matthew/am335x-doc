# AM3358 Interrupt System Overview

## Introduction

The AM3358 features a sophisticated interrupt system designed to handle up to 128 interrupt sources efficiently. The system includes a main ARM Interrupt Controller (INTC) for the Cortex-A8 processor and a separate PRU-ICSS interrupt controller for real-time processing units.

## System Architecture

### Main Interrupt Controller (INTC)
- **Type**: ARM-compatible interrupt controller
- **Base Address**: 0x48200000
- **Interrupt Sources**: 128 total (IRQ 0-127)
- **Output Lines**: IRQ and FIQ to ARM Cortex-A8
- **Priority Levels**: 8 configurable priority levels (0-7)
- **Preemption**: Support for nested interrupt handling

### PRU-ICSS Interrupt Controller
- **Type**: Specialized controller for PRU subsystem
- **Base Address**: 0x4A320000
- **Host Interrupts**: 10 host interrupt outputs (0-9)
- **System Events**: 64 system event inputs
- **Channels**: 10 interrupt channels
- **Purpose**: Real-time event handling for industrial protocols

## Interrupt Flow Architecture

```
Peripheral → System Event → INTC → Priority Logic → ARM Core
              ↓
         PRU-ICSS INTC → Host Interrupts → Main INTC
```

### Processing Sequence
1. **Interrupt Request**: Peripheral asserts interrupt signal
2. **Arbitration**: INTC determines highest priority pending interrupt
3. **Priority Check**: Compare against current threshold
4. **Vector Generation**: Generate interrupt number for software
5. **CPU Notification**: Assert IRQ/FIQ to ARM Cortex-A8
6. **Software Handling**: ARM processes interrupt service routine
7. **Acknowledgment**: Software acknowledges interrupt completion

## Key Features

### Priority Management
- **8 Priority Levels**: 0 (highest) to 7 (lowest)
- **Dynamic Priority**: Software-configurable per interrupt source
- **Threshold Control**: Minimum priority level for interrupt processing
- **Preemption Support**: Higher priority interrupts can preempt lower priority

### Interrupt Masking
- **Global Enable/Disable**: Master interrupt control
- **Individual Masking**: Per-interrupt enable/disable via MIR registers
- **Priority Masking**: Threshold-based priority filtering
- **FIQ/IRQ Selection**: Configurable routing to FIQ or IRQ

### Power Management Integration
- **Wakeup Capability**: Selected interrupts can wake system from low-power modes
- **Clock Gating**: INTC supports automatic clock management
- **Retention**: Critical interrupt state preserved during power transitions

## Hardware Interrupt Sources

### Core System Interrupts (0-31)
- **External Interrupts**: GPIO-based external interrupt pins
- **System Events**: Boot, reset, and system management
- **Debug**: JTAG and trace-related interrupts

### Peripheral Interrupts (32-127)
- **Communication**: UART, SPI, I2C, Ethernet, USB
- **Timing**: DMTIMERs, Watchdog, RTC
- **Memory**: EMIF, GPMC error conditions
- **Audio/Video**: McASP, Display subsystem
- **Industrial**: PWM, eQEP, eCAP modules
- **Security**: Cryptographic accelerators
- **DMA**: EDMA3 completion and error events

## Software Interface

### Register Categories
1. **Control Registers**: Global INTC configuration
2. **Priority Registers**: Interrupt priority assignment
3. **Mask Registers**: Interrupt enable/disable control
4. **Status Registers**: Pending and active interrupt status
5. **Identification Registers**: Current servicing interrupt info

### Programming Model
Basic interrupt handling sequence

1. Configure interrupt priorities
2. Unmask desired interrupts (clear MIR bits)
3. Set global enable
4. In ISR: Read SIR_IRQ for interrupt number
5. Service interrupt
6. Write EOI to acknowledge completion

### Nested Interrupt Support
- **Automatic Context Save**: Hardware saves minimal context
- **Priority Comparison**: Higher priority interrupts preempt current handler
- **Stack Management**: Software manages nested interrupt stacks
- **EOI Sequencing**: Proper end-of-interrupt acknowledgment required

## Real-Time Considerations

### Interrupt Latency
- **Hardware Latency**: ~10-20 CPU cycles for interrupt recognition
- **Software Latency**: Depends on ISR complexity and system load
- **Optimization**: Use FIQ for lowest-latency critical interrupts

### Deterministic Behavior
- **Priority-based Preemption**: Ensures high-priority events are serviced promptly
- **Fixed Hardware Delays**: Predictable interrupt controller response time
- **Software Control**: ISR design impacts overall system determinism

### PRU-ICSS Integration
- **Isolated Processing**: PRU interrupts don't affect ARM timing
- **Event Routing**: System events can trigger both PRU and ARM responses
- **Real-time Protocols**: Industrial communication protocols handled in PRU domain

## Error Handling

### Spurious Interrupts
- **Detection**: Hardware detects invalid interrupt conditions
- **Handling**: Special spurious interrupt vector (127)
- **Recovery**: Automatic system recovery from spurious conditions

### Interrupt Storm Protection
- **Rate Limiting**: Software-implemented interrupt rate monitoring
- **Masking**: Temporary interrupt disable for problematic sources
- **Diagnostics**: Status registers provide debugging information

### System Recovery
- **Watchdog Integration**: Watchdog can reset system on interrupt failure
- **Priority Reset**: Software can reset priority configurations
- **Safe State**: System enters safe state on critical interrupt failures

## Performance Optimization

### Interrupt Coalescing
- **Timer-based**: Combine multiple low-priority interrupts
- **Count-based**: Service interrupts in batches
- **Adaptive**: Dynamic adjustment based on system load

### Cache Considerations
- **ISR Placement**: Locate critical ISRs in on-chip memory
- **Cache Management**: Minimize cache pollution in interrupt context
- **Data Coherency**: Ensure shared data consistency between ISR and main code

### DMA Integration
- **Interrupt Reduction**: Use DMA to minimize CPU interrupt load
- **Completion Events**: DMA generates interrupts only on completion/error
- **Scatter-Gather**: Reduce interrupt frequency for large data transfers

## Debug and Analysis

### Debug Features
- **Interrupt History**: Track recent interrupt activity
- **Priority Monitoring**: Observe priority-based arbitration
- **Timing Analysis**: Measure interrupt response times
- **Event Correlation**: Link interrupts to system events

### Development Tools
- **Debugger Integration**: IDE support for interrupt debugging
- **Trace Capability**: Hardware trace of interrupt events
- **Profiling**: Interrupt load and timing analysis
- **Simulation**: Model interrupt behavior before hardware testing

## Related Documentation

- [Interrupt Controller Registers](../registers/intc-registers.md) - Complete INTC register reference
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - Complete IRQ number assignments
- [PRU-ICSS Interrupts](../interrupts/pru-icss-interrupts.md) - PRU interrupt system details
- [Implementation Guide](../implementation/interrupt-handling.md) - Programming examples and best practices

## References

- AM335x Technical Reference Manual, Chapter 6 (Interrupts)
- ARM Cortex-A8 Technical Reference Manual
- ARM Generic Interrupt Controller Architecture Specification
- BeagleBone System Reference Manual