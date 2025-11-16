# AM3358 System Memory Map

## Overview

The AM3358 uses a 32-bit address space with a hierarchical memory organization. This document provides a comprehensive mapping of all system memory regions, peripheral addresses, and special function areas.

## Address Space Organization

The AM3358 address space is organized into several major regions:

```
0x00000000 - 0x1FFFFFFF : External Memory (EMIF)
0x20000000 - 0x3FFFFFFF : External Memory Continuation  
0x40000000 - 0x4FFFFFFF : L4 Peripheral Region
0x50000000 - 0x5FFFFFFF : GPMC Memory Region
0x60000000 - 0x7FFFFFFF : Reserved
0x80000000 - 0x9FFFFFFF : External Memory (EMIF) - Aliased
0xA0000000 - 0xFFFFFFFF : Reserved/Special Regions
```

## External Memory Interface (EMIF)

### Primary EMIF Region
- **Base Address**: 0x80000000
- **Size**: 512MB (configurable)
- **Type**: DDR2/DDR3/mDDR/LPDDR
- **Usage**: Main system memory (RAM)

### EMIF Controller Registers
- **Base Address**: 0x4C000000
- **Size**: 1MB
- **Description**: EMIF configuration and status registers

## On-Chip Memory

### Boot ROM
- **Base Address**: 0x40014000  
- **Size**: 176KB
- **Type**: Read-only
- **Usage**: Boot code and system initialization

### On-Chip RAM (OCMC)
- **Base Address**: 0x40300000
- **Size**: 64KB
- **Type**: General-purpose SRAM
- **Features**: 
  - Accessible by all masters
  - Supports retention for fast wakeup
  - ECC protection available

### L3 OCMC SRAM
- **Base Address**: 0x40300000
- **End Address**: 0x4030FFFF
- **Size**: 64KB
- **Access**: All system masters

## L4 Peripheral Memory Map

### L4 Slow Interconnect (L4_SLOW)
Base region: 0x44000000 - 0x44FFFFFF

| Base Address | End Address | Peripheral | Description |
|--------------|-------------|------------|-------------|
| 0x44E00000 | 0x44E03FFF | Control Module | System control registers |
| 0x44E04000 | 0x44E05FFF | CM_WKUP | Wakeup clock management |
| 0x44E06000 | 0x44E06FFF | CM_DPLL | DPLL clock management |
| 0x44E07000 | 0x44E09FFF | GPIO0 | GPIO Bank 0 |
| 0x44E0B000 | 0x44E0BFFF | I2C0 | I2C Controller 0 |
| 0x44E0D000 | 0x44E0DFFF | ADC_TSC | ADC and Touch Screen |
| 0x44E10000 | 0x44E11FFF | CM_MPU | MPU clock management |
| 0x44E31000 | 0x44E31FFF | DMTIMER1 | 1MS Timer |
| 0x44E35000 | 0x44E35FFF | WDT1 | Watchdog Timer 1 |
| 0x44E3E000 | 0x44E3EFFF | RTC | Real Time Clock |

### L4 Fast Interconnect (L4_FAST)  
Base region: 0x48000000 - 0x48FFFFFF

| Base Address | End Address | Peripheral | Description |
|--------------|-------------|------------|-------------|
| 0x48000000 | 0x48003FFF | CM_PER | Peripheral clock management |
| 0x48022000 | 0x48023FFF | UART1 | Serial Port 1 |
| 0x48024000 | 0x48025FFF | UART2 | Serial Port 2 |
| 0x48030000 | 0x48031FFF | SPI0 | SPI Controller 0 |
| 0x48038000 | 0x48039FFF | McASP0 | Multi-channel Audio Serial Port |
| 0x48040000 | 0x48041FFF | DMTIMER2 | General Purpose Timer 2 |
| 0x48042000 | 0x48043FFF | DMTIMER3 | General Purpose Timer 3 |
| 0x48044000 | 0x48045FFF | DMTIMER4 | General Purpose Timer 4 |
| 0x48046000 | 0x48047FFF | DMTIMER5 | General Purpose Timer 5 |
| 0x48048000 | 0x48049FFF | DMTIMER6 | General Purpose Timer 6 |
| 0x4804A000 | 0x4804BFFF | DMTIMER7 | General Purpose Timer 7 |
| 0x4804C000 | 0x4804DFFF | GPIO1 | GPIO Bank 1 |
| 0x481A0000 | 0x481A1FFF | SPI1 | SPI Controller 1 |
| 0x481AC000 | 0x481ACFFF | GPIO2 | GPIO Bank 2 |
| 0x481AE000 | 0x481AEFFF | GPIO3 | GPIO Bank 3 |

## High-Speed Peripheral Region

### Ethernet (CPSW)
- **Base Address**: 0x4A100000
- **Size**: 32KB
- **Description**: Common Platform Ethernet Switch
- **Components**:
  - CPSW Subsystem: 0x4A100000
  - CPSW Port 1: 0x4A100100  
  - CPSW Port 2: 0x4A100200
  - CPSW CPDMA: 0x4A100800

### USB
- **USB0 Base**: 0x47400000
- **USB1 Base**: 0x47401000  
- **Size**: 4KB each
- **Features**: Host, Device, and OTG support

### PRU-ICSS (Programmable Real-time Unit)
- **Base Address**: 0x4A300000
- **Size**: 512KB
- **Components**:
  - PRU0 Instruction RAM: 0x4A334000 (8KB)
  - PRU0 Data RAM: 0x4A300000 (8KB)
  - PRU1 Instruction RAM: 0x4A338000 (8KB)  
  - PRU1 Data RAM: 0x4A302000 (8KB)
  - Shared RAM: 0x4A310000 (12KB)
  - PRU-ICSS CFG: 0x4A326000
  - PRU-ICSS UART: 0x4A328000
  - PRU-ICSS IEP: 0x4A32E000

## General Purpose Memory Controller (GPMC)

### GPMC Registers
- **Base Address**: 0x50000000
- **Size**: 16MB
- **Description**: GPMC configuration registers

### GPMC Memory Regions
The GPMC provides up to 7 chip selects (CS0-CS6) for external memory devices:

| Chip Select | Default Base | Default Size | Typical Usage |
|-------------|--------------|--------------|---------------|
| CS0 | 0x08000000 | 16MB | NOR Flash |
| CS1 | 0x09000000 | 16MB | NOR Flash / SRAM |
| CS2 | 0x0A000000 | 16MB | NOR Flash / SRAM |
| CS3 | 0x0B000000 | 16MB | SRAM |
| CS4 | 0x0C000000 | 16MB | Reserved |
| CS5 | 0x0D000000 | 16MB | Reserved |
| CS6 | 0x0E000000 | 16MB | Reserved |

### NAND Flash Interface
- **Base Address**: 0x08000000 (CS0 default)
- **Interface**: 8-bit or 16-bit
- **ECC Support**: BCH 4/8/16-bit, Hamming 1-bit

## Interrupt Controller Memory Map

### Main Interrupt Controller (INTC)
- **Base Address**: 0x48200000
- **Size**: 4KB
- **Description**: ARM Interrupt Controller
- **Interrupt Lines**: 128 total interrupt sources

### PRU-ICSS Interrupt Controller
- **Base Address**: 0x4A320000  
- **Size**: 8KB
- **Description**: PRU-specific interrupt handling

## Clock and Reset Management

### Power, Reset, and Clock Manager (PRCM)
- **CM_PER**: 0x48000000 (Peripheral clocks)
- **CM_WKUP**: 0x44E04000 (Wakeup clocks)  
- **CM_DPLL**: 0x44E06000 (DPLL management)
- **CM_MPU**: 0x44E10000 (MPU clocks)
- **PRM**: 0x44E06000 (Power and reset)

## Debug and Test Interfaces

### Debug Access Port (DAP)
- **Base Address**: 0x80001000
- **Size**: 4KB
- **Description**: ARM CoreSight debug interface

### Embedded Trace Buffer (ETB)
- **Base Address**: 0x80003000
- **Size**: 4KB  
- **Description**: Trace data collection

## Memory Protection and Security

### Secure Memory Regions
- **Secure ROM**: 0x40000000 (if available)
- **Secure RAM**: Protected regions within OCMC

### Memory Protection Unit (MPU)
- **Configuration**: Through CP15 coprocessor
- **Regions**: Up to 16 configurable regions

## Special Memory Regions

### Device Identification
- **Control Module Device ID**: 0x44E00600
- **Silicon Revision**: 0x44E00604

### Efuse Memory  
- **Base Address**: 0x44E10000
- **Size**: 8KB
- **Usage**: OTP (One-Time Programmable) configuration

## Address Translation Notes

### Physical vs Virtual Addresses
- **Physical Memory**: Direct hardware addresses as listed
- **Virtual Memory**: May differ based on MMU configuration
- **DMA Addresses**: Typically use physical addresses

### Cache Coherency Regions
- **Cacheable**: DDR memory regions (0x80000000+)
- **Non-cacheable**: Peripheral registers (0x40000000+)
- **Strongly Ordered**: Device memory regions

## Implementation Guidelines

### Memory Region Access
1. **Peripheral Registers**: Use 32-bit aligned accesses
2. **Memory Arrays**: Optimize for cache line boundaries  
3. **DMA Buffers**: Ensure proper alignment and coherency

### Address Mapping Best Practices
- Verify memory region permissions before access
- Use appropriate memory attributes (cached/non-cached)
- Consider endianness for multi-byte data structures
- Implement proper error handling for invalid addresses

## Related Documentation

- [EMIF Configuration](../peripherals/memory/emif-overview.md)
- [GPMC Programming](../peripherals/memory/gpmc-overview.md)
- [Interrupt System](../interrupts/interrupt-system.md)
- [Clock Management](../clocking/clock-domains.md)

## References

- AM335x Technical Reference Manual, Chapter 2 (Memory Map)
- ARM Cortex-A8 Technical Reference Manual
- BeagleBone System Reference Manual
- GPMC Functional Specification