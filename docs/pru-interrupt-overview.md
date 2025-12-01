# PRU-ICSS Interrupt System - AM3358

## Overview

The Programmable Real-time Unit Industrial Communication Subsystem (PRU-ICSS) contains its own dedicated interrupt controller (INTC) to handle real-time events efficiently. This system operates independently of the main ARM INTC and is optimized for deterministic, low-latency interrupt processing.

## Architecture

### PRU-ICSS INTC Structure
- **Base Address**: 0x4A320000
- **System Events**: 64 input events (0-63)
- **Channels**: 10 interrupt channels (0-9)
- **Host Interrupts**: 10 output interrupts (0-9)
- **Priority Levels**: Software-configurable priority mapping
- **Real-time**: Deterministic interrupt processing for industrial protocols

### Event Flow
```
System Events (64) → Channels (10) → Host Interrupts (10) → Main INTC
                                                           → PRU Cores
```

## System Events (0-63)

### Event Sources
The PRU-ICSS receives system events from various sources:

#### PRU Core Events (0-31)
- **PRU0 Events**: 0-15 (PRU0 internal events)
- **PRU1 Events**: 16-31 (PRU1 internal events)

#### External Events (32-63)
- **ARM Host Events**: 32-39 (ARM processor triggered)
- **UART Events**: 40-43 (PRU-ICSS UART)
- **IEP Events**: 44-47 (Industrial Ethernet Peripheral)
- **ECAP Events**: 48-51 (Enhanced Capture)
- **Reserved Events**: 52-63 (Future use)

### Event Configuration
Each system event can be:
- **Enabled/Disabled**: Individual event masking
- **Channel Mapped**: Routed to specific interrupt channel
- **Priority Assigned**: Software-defined priority levels

## Interrupt Channels (0-9)

### Channel Mapping
- **Flexible Routing**: Any system event can map to any channel
- **Multiple Events**: Multiple system events can map to one channel
- **Priority Handling**: Channels have configurable priority levels
- **Event Aggregation**: Channels combine related events

### Channel Configuration
```
Channel 0: High priority events (typically)
Channel 1: Medium priority events
...
Channel 9: Low priority events
```

## Host Interrupts (0-9)

### Host Interrupt Outputs
Each host interrupt can be routed to:

#### Main ARM INTC
- **Host 0**: IRQ 20 (PRU_ICSS_EVTOUT0)  
- **Host 1**: IRQ 21 (PRU_ICSS_EVTOUT1)
- **Host 2**: IRQ 22 (PRU_ICSS_EVTOUT2)
- **Host 3**: IRQ 23 (PRU_ICSS_EVTOUT3)
- **Host 4**: IRQ 24 (PRU_ICSS_EVTOUT4)
- **Host 5**: IRQ 25 (PRU_ICSS_EVTOUT5)
- **Host 6**: IRQ 26 (PRU_ICSS_EVTOUT6)
- **Host 7**: IRQ 27 (PRU_ICSS_EVTOUT7)
- **Host 8**: Reserved for PRU0
- **Host 9**: Reserved for PRU1

#### PRU Cores
- **Host 0**: Connected to PRU0 R31[30]
- **Host 1**: Connected to PRU0 R31[31] and PRU1 R31[31]
- **Host 2-9**: Configurable PRU interrupt inputs

## Key Registers

### System Event Configuration

#### REVID (0x000)
**Revision Identification Register**
- **Purpose**: PRU-ICSS INTC version information
- **Access**: Read-only

#### CR (0x004)  
**Control Register**
- **Bit 2**: WAKEUP_MODE - Wakeup mode enable
- **Bit 1**: NEST_MODE - Nested interrupt mode
- **Bit 0**: ENABLE - Global interrupt enable

#### GER (0x010)
**Global Enable Register**  
- **Bit 0**: ENABLE_HINT_ANY - Enable any host interrupt

#### GNLR (0x01C)
**Global Nesting Level Register**
- **Bits 8-0**: GLOBAL_NEST_LEVEL - Current nesting level

### Event Status and Control

#### SRSR0 (0x200)
**System Event Status Raw Register 0 (Events 0-31)**
- **Purpose**: Raw status of system events 0-31
- **Access**: Read-only

#### SRSR1 (0x204)  
**System Event Status Raw Register 1 (Events 32-63)**
- **Purpose**: Raw status of system events 32-63
- **Access**: Read-only

#### SECR0 (0x280)
**System Event Status Enabled/Clear Register 0**
- **Purpose**: Enabled status and clear for events 0-31
- **Write 1**: Clear corresponding event

#### SECR1 (0x284)
**System Event Status Enabled/Clear Register 1**
- **Purpose**: Enabled status and clear for events 32-63  
- **Write 1**: Clear corresponding event

#### ESR0 (0x300)
**Enable Set Register 0 (Events 0-31)**
- **Write 1**: Enable corresponding system event
- **Write 0**: No effect

#### ESR1 (0x304)
**Enable Set Register 1 (Events 32-63)**
- **Write 1**: Enable corresponding system event
- **Write 0**: No effect

#### ECR0 (0x380)
**Enable Clear Register 0 (Events 0-31)**
- **Write 1**: Disable corresponding system event
- **Write 0**: No effect

#### ECR1 (0x384)
**Enable Clear Register 1 (Events 32-63)**
- **Write 1**: Disable corresponding system event
- **Write 0**: No effect

### Channel and Host Mapping

#### CMR[0-15] (0x400-0x43C)
**Channel Map Registers**
- **Purpose**: Map system events to interrupt channels
- **Format**: 4 events per register, 1 byte per event

#### HMR[0-2] (0x800-0x808)
**Host Map Registers**
- **Purpose**: Map interrupt channels to host interrupts
- **Format**: 4 channels per register, 1 byte per channel

#### HIPIR[0-9] (0x900-0x924)
**Host Interrupt Prioritized Index Registers**
- **Purpose**: Highest priority pending interrupt for each host
- **Bit 31**: NONE_HINT_FLAG - No pending interrupts
- **Bits 9-0**: PRI_HINT_INDEX - Highest priority event index

### Priority and Polarity

#### GPIR (0x928)
**Global Prioritized Index Register**
- **Purpose**: Globally highest priority pending interrupt
- **Bit 31**: GLOBAL_NONE_HINT_FLAG
- **Bits 9-0**: GLOBAL_PRI_HINT_INDEX

#### SIPR0 (0xD00)
**System Interrupt Polarity Register 0**
- **Purpose**: Configure polarity for events 0-31
- **0**: Active low
- **1**: Active high

#### SIPR1 (0xD04)
**System Interrupt Polarity Register 1**
- **Purpose**: Configure polarity for events 32-63

#### SITR0 (0xD80)
**System Interrupt Type Register 0**
- **Purpose**: Configure trigger type for events 0-31
- **0**: Level sensitive
- **1**: Edge sensitive

#### SITR1 (0xD84)
**System Interrupt Type Register 1**
- **Purpose**: Configure trigger type for events 32-63

### Host Interrupt Control

#### HIER (0x1500)
**Host Interrupt Enable Register**
- **Bits 9-0**: Enable bits for host interrupts 0-9
- **1**: Enable host interrupt
- **0**: Disable host interrupt

#### HIDISR (0x1504)
**Host Interrupt Disable Register**
- **Write 1**: Disable corresponding host interrupt
- **Write 0**: No effect

#### HIESR (0x1508)
**Host Interrupt Enable Set Register**
- **Write 1**: Enable corresponding host interrupt
- **Write 0**: No effect

#### HIEISR (0x150C)
**Host Interrupt Enable Index Set Register**
- **Bits 9-0**: Current enabled status of host interrupts

#### HINLR[0-9] (0x1600-0x1624)
**Host Interrupt Nesting Level Registers**
- **Purpose**: Configure nesting level for each host interrupt
- **Bits 8-0**: NEST_HINT_LEVEL

## Programming Model

### Initialization Sequence
```c
// 1. Disable all host interrupts
INTC->HIDISR = 0x3FF;

// 2. Clear all system events
INTC->SECR0 = 0xFFFFFFFF;
INTC->SECR1 = 0xFFFFFFFF;

// 3. Configure event-to-channel mapping
// Map event 16 to channel 0
INTC->CMR[4] = (INTC->CMR[4] & 0xFFFFFF00) | 0x00;

// 4. Configure channel-to-host mapping  
// Map channel 0 to host interrupt 0
INTC->HMR[0] = (INTC->HMR[0] & 0xFFFFFF00) | 0x00;

// 5. Configure event polarity and type
INTC->SIPR0 |= (1 << 16);  // Event 16 active high
INTC->SITR0 |= (1 << 16);  // Event 16 edge triggered

// 6. Enable system events
INTC->ESR0 = (1 << 16);    // Enable event 16

// 7. Enable host interrupts
INTC->HIESR = (1 << 0);    // Enable host interrupt 0

// 8. Enable global interrupts
INTC->GER = 1;
```

### Event Handling
```c
// Check for pending interrupts on host 0
uint32_t hipir = INTC->HIPIR[0];

if (!(hipir & 0x80000000)) {  // Check NONE_HINT_FLAG
    uint32_t event_num = hipir & 0x3FF;
    
    // Handle the event
    handle_event(event_num);
    
    // Clear the event
    if (event_num < 32) {
        INTC->SECR0 = (1 << event_num);
    } else {
        INTC->SECR1 = (1 << (event_num - 32));
    }
}
```

## Real-time Considerations

### Deterministic Timing
- **Hardware Priority**: Fixed priority resolution in hardware
- **Minimum Latency**: ~5 PRU clock cycles from event to PRU response
- **Predictable Behavior**: No cache or pipeline effects

### Event Processing
- **Atomic Operations**: Event status changes are atomic
- **Priority Arbitration**: Hardware handles priority selection
- **Nested Interrupts**: Optional nested interrupt support

### Performance Optimization
- **Event Grouping**: Group related events to same channel
- **Priority Assignment**: Assign priorities based on real-time requirements
- **Host Mapping**: Route time-critical events to PRU cores directly

## Industrial Protocol Support

### EtherCAT
- **Sync Events**: IEP sync pulses mapped to high-priority channels
- **Frame Processing**: RX/TX events for deterministic frame handling
- **Error Events**: Exception conditions routed to ARM host

### PROFINET
- **Cycle Events**: Real-time cycle synchronization
- **Alarm Events**: Diagnostic and alarm conditions
- **Status Events**: Link and frame status updates

### EtherNet/IP
- **CIP Sync**: Common Industrial Protocol synchronization
- **I/O Events**: Real-time I/O data exchange
- **Connection Events**: Network connection management

## Integration with Main INTC

### Host Interrupt Routing
```
PRU-ICSS Host 0 → ARM INTC IRQ 20
PRU-ICSS Host 1 → ARM INTC IRQ 21
...
PRU-ICSS Host 7 → ARM INTC IRQ 27
```

### ARM Interrupt Handling
```c
// ARM ISR for PRU-ICSS Host Interrupt 0
void pru_host0_isr(void) {
    // Read PRU-ICSS HIPIR[0] for event details
    uint32_t hipir = PRU_INTC->HIPIR[0];
    
    if (!(hipir & 0x80000000)) {
        uint32_t event = hipir & 0x3FF;
        
        // Process PRU event from ARM side
        process_pru_event(event);
        
        // Clear PRU event
        if (event < 32) {
            PRU_INTC->SECR0 = (1 << event);
        } else {
            PRU_INTC->SECR1 = (1 << (event - 32));
        }
    }
    
    // Acknowledge ARM INTC
    ARM_INTC->CONTROL = 0x01;
}
```

## Debug and Diagnostics

### Event Monitoring
- **SRSR Registers**: Monitor raw event status
- **SECR Registers**: Monitor enabled and pending events
- **HIPIR Registers**: Track priority arbitration

### Performance Analysis
- **Event Counts**: Count events per channel/host
- **Latency Measurement**: Measure event-to-response time
- **Priority Conflicts**: Identify priority inversion issues

### Common Issues
- **Event Not Clearing**: Verify proper SECR write
- **Priority Problems**: Check CMR/HMR configuration
- **Missing Events**: Verify ESR enable bits

## Power Management

### Clock Control
- **Dynamic Gating**: INTC clock gated when idle
- **Wakeup Events**: Selected events can wake PRU-ICSS
- **Low Power**: Supports PRU-ICSS standby modes

### Event Retention
- **State Preservation**: Event configuration retained in standby
- **Wakeup Sources**: Configure events as wakeup sources
- **Fast Resume**: Quick restoration from low-power modes

## Related Documentation

- [PRU-ICSS Overview](../peripherals/pru-icss/overview.md) - Complete PRU-ICSS system
- [Interrupt System Overview](interrupt-system.md) - Main interrupt architecture
- [Industrial Protocols](../peripherals/pru-icss/protocols.md) - Protocol-specific interrupt usage
- [Real-time Programming](../implementation/pru-programming.md) - PRU programming guide

## References

- AM335x Technical Reference Manual, Chapter 4 (PRU-ICSS)
- AM335x Technical Reference Manual, Section 4.5.3 (PRU_ICSS_INTC Registers)
- PRU-ICSS Reference Guide
- Industrial Communication Protocol Specifications