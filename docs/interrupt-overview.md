# Interrupt Implementation Guide - AM3358

## Overview

This guide provides practical examples and best practices for implementing interrupt handling on the AM3358 SoC. It covers both the main ARM INTC and PRU-ICSS interrupt systems with real-world code examples.

## Prerequisites

Before implementing interrupt handling, ensure you understand:
- [Interrupt System Overview](../interrupts/interrupt-system.md) - System architecture
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - IRQ number assignments  
- [INTC Registers](../registers/intc-registers.md) - Register-level programming

## Related Documentation

- [Interrupt System Overview](../interrupts/interrupt-system.md) - Architecture overview
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - Complete IRQ listings
- [INTC Registers](../registers/intc-registers.md) - Register reference
- [PRU-ICSS Interrupts](../interrupts/pru-icss-interrupts.md) - PRU interrupt system

## References

- AM335x Technical Reference Manual, Chapter 6 (Interrupts)
- ARM Cortex-A8 Technical Reference Manual
- ARM Architecture Reference Manual
- Real-time Systems Design and Analysis (Burns & Wellings)