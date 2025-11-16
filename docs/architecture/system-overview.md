# AM3358 System Architecture Overview

## Introduction

The Texas Instruments AM3358 is a high-performance ARM Cortex-A8 based System-on-Chip (SoC) designed for industrial applications, HMI (Human Machine Interface), and general-purpose embedded computing. It is the primary processor used in the BeagleBone Black development board.

## Key System Specifications

### Core Processor
- **CPU**: ARM Cortex-A8 32-bit RISC processor
- **Operating Frequency**: Up to 1 GHz
- **SIMD Support**: NEON coprocessor for multimedia processing
- **Cache Hierarchy**:
  - L1 Instruction Cache: 32KB with single-error detection (parity)
  - L1 Data Cache: 32KB with single-error detection (parity)  
  - L2 Cache: 256KB with Error Correcting Code (ECC)
- **Boot ROM**: 176KB on-chip
- **Dedicated RAM**: 64KB
- **Debug Support**: JTAG interface

### Memory Subsystem

#### On-Chip Memory
- **Shared L3 RAM**: 64KB general-purpose On-Chip Memory Controller (OCMC) RAM
- **Accessibility**: Available to all bus masters
- **Retention Support**: Fast wakeup capability

#### External Memory Interface (EMIF)
- **Supported Types**: mDDR (LPDDR), DDR2, DDR3, DDR3L
- **Data Bus Width**: 16-bit
- **Maximum Address Space**: 1GB total addressable
- **Device Configurations**: One x16 or two x8 memory devices
- **Operating Frequencies**:
  - mDDR: 200 MHz clock (400 MHz data rate)
  - DDR2: 266 MHz clock (532 MHz data rate)
  - DDR3/DDR3L: 400 MHz clock (800 MHz data rate)

#### General Purpose Memory Controller (GPMC)
- **Interface Types**: 8-bit and 16-bit asynchronous memory
- **Chip Selects**: Up to 7 (NAND, NOR, Muxed-NOR, SRAM)
- **Error Correction**:
  - BCH Code: 4-, 8-, or 16-bit ECC
  - Hamming Code: 1-bit ECC
- **Error Locator Module (ELM)**: BCH-based error location for 512-byte blocks

### Real-Time Processing Unit

#### PRU-ICSS (Programmable Real-Time Unit - Industrial Communication Subsystem)
The PRU-ICSS enables deterministic, real-time processing for industrial protocols.

**Key Features**:
- **Protocol Support**: EtherCAT, PROFIBUS, PROFINET, EtherNet/IP, and more
- **Processing Units**: Two independent PRUs
- **Architecture**: 32-bit load/store RISC processors
- **Operating Frequency**: 200 MHz
- **Instruction Memory**: 8KB per PRU with single-error detection (parity)
- **Data Memory**: 8KB per PRU with single-error detection (parity)
- **Shared Resources**:
  - 12KB shared RAM with single-error detection (parity)
  - Three 120-byte register banks accessible by each PRU
- **Arithmetic Support**: Single-cycle 32-bit multiplier with 64-bit accumulator
- **I/O Capabilities**: Enhanced GPIO with shift-in/out and parallel latch support
- **Connectivity**: Local interconnect bus for internal and external master access

### Interrupt System
- **Interrupt Controller**: Handles up to 128 interrupt requests
- **PRU-ICSS INTC**: Dedicated interrupt controller for handling system input events
- **Priority Management**: Configurable interrupt priorities and routing

## System Integration

### Bus Architecture
The AM3358 uses a hierarchical bus structure based on the L3 and L4 interconnects:
- **L3 Main Interconnect**: High-performance bus for processors and memory controllers
- **L4 Peripheral Interconnects**: Lower-speed bus for peripheral access
- **Local Buses**: Specialized interconnects within subsystems (e.g., PRU-ICSS)

### Clock Management
- **Primary Clock Sources**: External crystal oscillators
- **PLLs**: Multiple Phase-Locked Loops for frequency generation
- **Clock Domains**: Separate clock domains for different subsystems
- **Power Management**: Clock gating for power optimization

### Reset System
- **Power-On Reset**: System-wide initialization
- **Warm Reset**: Subsystem-specific reset capability
- **Watchdog Reset**: Automatic system recovery
- **Debug Reset**: JTAG-controlled reset for development

## Major Functional Blocks

### Communication Interfaces
- **Ethernet**: CPSW (Common Platform Ethernet Switch)
- **USB**: Host, Device, and OTG support
- **Serial**: Multiple UART, SPI, and I2C controllers
- **CAN**: Controller Area Network interfaces

### Timing and Control
- **DMTIMER**: Multiple general-purpose timers
- **DMTIMER_1MS**: Specialized 1ms system tick timer
- **Watchdog**: System reliability monitoring
- **RTC**: Battery-backed real-time clock

### Analog Interfaces
- **ADC**: Analog-to-Digital Converter
- **Touch Screen Controller**: Resistive touch screen support

### Security Features
- **Secure Boot**: Verified boot process
- **Cryptographic Acceleration**: Hardware security modules
- **Debug Security**: Configurable debug access control

## Power Management

### Operating Modes
- **Active Mode**: Full system operation
- **Standby**: Reduced power with context retention
- **Deep Sleep**: Minimal power consumption
- **RTC-only**: Ultra-low power with RTC active

### Voltage Domains
- **Core Domain**: CPU and internal logic
- **I/O Domain**: Peripheral interfaces
- **RTC Domain**: Always-on real-time clock
- **Memory Domain**: DDR and internal memory

## Package and Pinout
- **Package Types**: BGA (Ball Grid Array)
- **Pin Count**: Varies by device variant (AM3351, AM3352, etc.)
- **Pin Multiplexing**: Configurable pin functions for flexible I/O assignment

## Device Variants

The AM335x family includes several variants with different feature sets:
- **AM3359**: Full feature set
- **AM3358**: Standard configuration (BeagleBone Black)
- **AM3357**: Reduced feature set
- **AM3356**: Industrial temperature range
- **AM3354**: Basic configuration
- **AM3352**: Entry-level variant
- **AM3351**: Minimal feature set

## Related Documentation

- [DMTIMER Register Reference](../registers/AM335x_DMTIMER_Register_Reference.md)
- [Memory Map Overview](../memory-map/system-memory-map.md)
- [Interrupt System](../interrupts/interrupt-system.md)
- [PRU-ICSS Detailed Guide](../peripherals/pru-icss/overview.md)

## References

- AM335x Technical Reference Manual (SPRUH73Q)
- AM335x Datasheet (SPRS717L)
- ARM Cortex-A8 Technical Reference Manual
- BeagleBone System Reference Manual