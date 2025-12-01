# TI AM335x SoC Documentation Project

## Overview

This project provides comprehensive, AI-agent and human-readable documentation for the Texas Instruments AM335x System-on-Chip (SoC), commonly used in the BeagleBone Black (AM3358) and other embedded systems. Includes RAG 
summaries of key hardware components by Claude 4. Reference documents where broken down by section and then passed
through docling to get more parseable/debuggable (and hopefully human readable) documents. Documents in docs are
corrected by a mix of Claude 4 RAG and manual review.

## Purpose

- **For AI Agents**: Structured, searchable documentation with clear implementation details
- **For Humans**: Organized reference materials with cross-links and practical examples
- **For Developers**: Implementation guides, register references, and integration patterns

## Documentation Index

📖 **[Complete Documentation Index](docs/INDEX.md)** - Organized by category and topic

### Quick Links

#### System Architecture
- [System Overview](docs/system-overview.md) - AM3358 SoC architecture and specifications
- [Clock System](docs/clock-system-overview.md) - Clock management and DPLLs
- [Interrupt System](docs/interrupt-system.md) - Interrupt architecture overview

#### GPIO (General Purpose I/O)
- [GPIO Overview](docs/gpio-overview.md) - GPIO system architecture
- [GPIO Registers](docs/gpio-registers.md) - Register reference
- [Pin Multiplexing](docs/pinmux.md) - Pin configuration guide
- [Pinmux Implementation](docs/pinmux-usage.md) - Usage examples

#### Timers
- [Timer System Overview](docs/timer-system-overview.md) - Timer architecture
- [DMTIMER Overview](docs/dmtimer-overview.md) - General purpose timers
- [Timer Usage Guide](docs/timer-usage.md) - Implementation examples
- [Timer Interrupts](docs/timer-interrupts.md) - Interrupt handling
- [Timer Registers](docs/timer-registers.md) - Register reference

#### UART (Serial Communication)
- [UART Overview](docs/uart-overview.md) - UART architecture
- [UART Usage Guide](docs/uart-usage.md) - Implementation examples
- [UART Registers](docs/uart-registers.md) - Register reference

#### Interrupts
- [Interrupt Overview](docs/interrupt-overview.md) - Implementation guide
- [Interrupt Vectors](docs/interrupt-vectors.md) - Vector table
- [INTC Registers](docs/interrupt-registers.md) - Register reference
- [PRU Interrupts](docs/pru-interrupt-overview.md) - PRU-ICSS interrupts

#### Clock & Power Management
- [Clock System](docs/clock-system-overview.md) - Clock architecture
- [Peripheral Clocks](docs/peripheral-clock-management.md) - Per-peripheral control
- [PRCM Registers](docs/prcm-registers.md) - Power/Reset/Clock registers