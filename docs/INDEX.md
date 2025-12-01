# AM335x Documentation Index

## Quick Navigation

### System Overview
- [System Architecture Overview](system-overview.md) - Complete AM3358 SoC architecture and specifications

### Clock System
- [Clock Management System](clock-system-overview.md) - DPLLs, clock domains, and frequency management
- [Peripheral Clock Management](peripheral-clock-management.md) - Per-peripheral clock control
- [PRCM Register Reference](prcm-registers.md) - Power, Reset, and Clock Management registers

### GPIO (General Purpose I/O)
- [GPIO System Overview](gpio-overview.md) - GPIO architecture and features
- [GPIO Register Reference](gpio-registers.md) - Complete GPIO register descriptions
- [Pin Multiplexing Guide](pinmux.md) - Pin configuration and multiplexing
- [GPIO Pin Multiplexing Implementation](pinmux-usage.md) - Practical pinmux examples

### Interrupts
- [Interrupt System Overview](interrupt-system.md) - High-level interrupt architecture
- [Interrupt Implementation Guide](interrupt-overview.md) - Programming and usage patterns
- [Interrupt Vector Table](interrupt-vectors.md) - Complete interrupt mapping
- [ARM INTC Registers](interrupt-registers.md) - Interrupt controller register reference
- [PRU-ICSS Interrupt System](pru-interrupt-overview.md) - PRU interrupt subsystem

### Timers
- [Timer System Overview](timer-system-overview.md) - Timer architecture and capabilities
- [DMTIMER Overview](dmtimer-overview.md) - General purpose timer features
- [Timer Implementation Guide](timer-usage.md) - Timer programming examples
- [Timer Interrupts and Events](timer-interrupts.md) - Timer interrupt handling
- [DMTIMER Register Reference](timer-registers.md) - Complete timer register descriptions

### UART (Serial Communication)
- [UART Overview](uart-overview.md) - UART architecture and features
- [UART Implementation Guide](uart-usage.md) - UART programming examples
- [UART Register Reference](uart-registers.md) - Complete UART register descriptions

## Documentation by Category

### Getting Started
1. [System Architecture Overview](system-overview.md) - Start here for SoC overview
2. [Clock Management System](clock-system-overview.md) - Understanding clocks
3. [Interrupt System Overview](interrupt-system.md) - Understanding interrupts

### Hardware Configuration
- [Pin Multiplexing Guide](pinmux.md)
- [GPIO Pin Multiplexing Implementation](pinmux-usage.md)
- [Peripheral Clock Management](peripheral-clock-management.md)

### Peripheral Guides
#### GPIO
- Overview: [GPIO System Overview](gpio-overview.md)
- Registers: [GPIO Register Reference](gpio-registers.md)
- Configuration: [Pin Multiplexing Guide](pinmux.md), [GPIO Pin Multiplexing Implementation](pinmux-usage.md)

#### Timers
- Overview: [Timer System Overview](timer-system-overview.md), [DMTIMER Overview](dmtimer-overview.md)
- Implementation: [Timer Implementation Guide](timer-usage.md)
- Interrupts: [Timer Interrupts and Events](timer-interrupts.md)
- Registers: [DMTIMER Register Reference](timer-registers.md)

#### UART
- Overview: [UART Overview](uart-overview.md)
- Implementation: [UART Implementation Guide](uart-usage.md)
- Registers: [UART Register Reference](uart-registers.md)

### Register References
- [GPIO Registers](gpio-registers.md)
- [Interrupt Controller Registers](interrupt-registers.md)
- [DMTIMER Registers](timer-registers.md)
- [UART Registers](uart-registers.md)
- [PRCM Registers](prcm-registers.md)

### Advanced Topics
- [PRU-ICSS Interrupt System](pru-interrupt-overview.md)
- [Interrupt Vector Table](interrupt-vectors.md)
- [Clock System Overview](clock-system-overview.md)

## Document Types

### Overview Documents
Provide architectural understanding and key concepts:
- system-overview.md
- gpio-overview.md
- uart-overview.md
- dmtimer-overview.md
- interrupt-system.md
- timer-system-overview.md
- clock-system-overview.md

### Implementation Guides
Step-by-step programming examples and usage patterns:
- timer-usage.md
- uart-usage.md
- interrupt-overview.md
- pinmux-usage.md

### Register References
Complete register specifications:
- gpio-registers.md
- interrupt-registers.md
- timer-registers.md
- uart-registers.md
- prcm-registers.md

### Specialized Topics
- interrupt-vectors.md
- timer-interrupts.md
- pru-interrupt-overview.md
- peripheral-clock-management.md
- pinmux.md
