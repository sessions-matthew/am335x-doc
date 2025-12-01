# GPIO Register Reference - AM3358

## Overview

This document provides complete register-level documentation for the AM3358 GPIO modules. Each of the four GPIO banks (GPIO0-3) contains identical register sets for controlling 32 individual I/O pins with advanced interrupt and debounce capabilities.

## GPIO Module Base Addresses

| Bank | Base Address | Clock Domain | IRQ | Pin Range |
|------|-------------|--------------|-----|-----------|
| **GPIO0** | 0x44E07000 | WKUP | 96 | GPIO0_0 - GPIO0_31 |
| **GPIO1** | 0x4804C000 | L4PER | 98 | GPIO1_0 - GPIO1_31 |
| **GPIO2** | 0x481AC000 | L4PER | 32 | GPIO2_0 - GPIO2_31 |
| **GPIO3** | 0x481AE000 | L4PER | 62 | GPIO3_0 - GPIO3_31 |

**Note**: Each GPIO bank has two interrupt lines (0 and 1) for better interrupt distribution and priority handling.

## GPIO Register Map

The address of each register is calculated by adding the offset to the base address. 

Examples:
- the address of GPIO2_OE is ALWAYS calculated as 0x481AC000 (GPIO2) + 0x134 (GPIO_OE) = 0x481AC134 (GPIO2_OE). 
- GPIO2_OE is ALWAYS calculated as GPIO2 + GPIO_OE

Note that _OE in GPIO2_OE directly refers to GPIO_OE and is an exact match the table below for GPIO_OE.

Each GPIO bank contains the following register set:

| Offset | Register | Access | Reset | Description |
|--------|----------|--------|-------|-------------|
| 0x000 | GPIO_REVISION | R | 0x50600801 | Module revision identifier |
| 0x010 | GPIO_SYSCONFIG | RW | 0x00 | System configuration |
| 0x020 | GPIO_EOI | W | - | End of interrupt |
| 0x024 | GPIO_IRQSTATUS_RAW_0 | R | 0x00 | Raw interrupt status (line 0) |
| 0x028 | GPIO_IRQSTATUS_RAW_1 | R | 0x00 | Raw interrupt status (line 1) |
| 0x02C | GPIO_IRQSTATUS_0 | RW | 0x00 | Interrupt status (line 0) |
| 0x030 | GPIO_IRQSTATUS_1 | RW | 0x00 | Interrupt status (line 1) |
| 0x034 | GPIO_IRQSTATUS_SET_0 | RW | 0x00 | Interrupt enable set (line 0) |
| 0x038 | GPIO_IRQSTATUS_SET_1 | RW | 0x00 | Interrupt enable set (line 1) |
| 0x03C | GPIO_IRQSTATUS_CLR_0 | RW | 0x00 | Interrupt enable clear (line 0) |
| 0x040 | GPIO_IRQSTATUS_CLR_1 | RW | 0x00 | Interrupt enable clear (line 1) |
| 0x044 | GPIO_IRQWAKEN_0 | RW | 0x00 | Wake-up enable (line 0) |
| 0x048 | GPIO_IRQWAKEN_1 | RW | 0x00 | Wake-up enable (line 1) |
| 0x114 | GPIO_SYSSTATUS | R | 0x00 | System status |
| 0x130 | GPIO_CTRL | RW | 0x00 | Module control |
| 0x134 | GPIO_OE | RW | 0xFFFFFFFF | Output enable |
| 0x138 | GPIO_DATAIN | R | 0x00 | Input data |
| 0x13C | GPIO_DATAOUT | RW | 0x00 | Output data |
| 0x140 | GPIO_LEVELDETECT0 | RW | 0x00 | Low level detection enable |
| 0x144 | GPIO_LEVELDETECT1 | RW | 0x00 | High level detection enable |
| 0x148 | GPIO_RISINGDETECT | RW | 0x00 | Rising edge detection enable |
| 0x14C | GPIO_FALLINGDETECT | RW | 0x00 | Falling edge detection enable |
| 0x150 | GPIO_DEBOUNCENABLE | RW | 0x00 | Debounce enable |
| 0x154 | GPIO_DEBOUNCINGTIME | RW | 0x00 | Debounce timing |
| 0x190 | GPIO_CLEARDATAOUT | W | - | Clear output data |
| 0x194 | GPIO_SETDATAOUT | W | - | Set output data |

## Detailed Register Descriptions

### GPIO_REVISION Register (Offset 0x000)
- **Access**: Read-only
- **Reset**: 0x50600801
- **Purpose**: Module identification and revision information

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31:30 | SCHEME | R | 0x1 | Module scheme |
| 29:28 | Reserved | R | 0x1 | Reserved |
| 27:16 | FUNC | R | 0x60 | Function code (GPIO) |
| 15:11 | RTL | R | 0x1 | RTL version |
| 10:8 | MAJOR | R | 0x0 | Major revision |
| 7:6 | CUSTOM | R | 0x0 | Custom version |
| 5:0 | MINOR | R | 0x1 | Minor revision |

### GPIO_SYSCONFIG Register (Offset 0x010)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: System configuration and power management

| Bits | Field | Description | Values |
|------|-------|-------------|--------|
| 4:3 | IDLEMODE | Idle mode configuration | 00=Force-idle, 01=No-idle, 10=Smart-idle, 11=Smart-idle wakeup |
| 2 | ENAWAKEUP | Wake-up feature enable | 0=Disabled, 1=Enabled |
| 1 | SOFTRESET | Software reset | 0=Normal, 1=Reset |
| 0 | AUTOIDLE | Automatic idle enable | 0=Disabled, 1=Enabled |

**Programming**: Configure for smart-idle mode with wake-up capability and auto-idle enabled. See implementation guide for complete configuration examples.

### GPIO_SYSSTATUS Register (Offset 0x114)
- **Access**: Read-only
- **Reset**: 0x00000000
- **Purpose**: System reset status

| Bits | Field | Description |
|------|-------|-------------|
| 0 | RESETDONE | Reset completion status (1=Reset completed) |

### GPIO_CTRL Register (Offset 0x130)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Module control and clock gating

| Bits | Field | Description |
|------|-------|-------------|
| 2:1 | GATINGRATIO | Clock gating ratio |
| 0 | DISABLEMODULE | Module disable (1=Disable clocks) |

### GPIO_OE Register (Offset 0x134)
- **Access**: Read/Write
- **Reset**: 0xFFFFFFFF (all inputs)
- **Purpose**: Pin direction control (Output Enable)

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | OUTPUTEN | Pin direction per bit (0=Output, 1=Input) |

**Usage**: Configure individual pins as inputs (1) or outputs (0). Reset default is all pins configured as inputs for safety. Multiple pins can be configured simultaneously using bit masks.

### GPIO_DATAIN Register (Offset 0x138)
- **Access**: Read-only
- **Reset**: 0x00000000
- **Purpose**: Read input pin states

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | DATAIN | Input data per pin (reflects actual pin state) |

**Usage**: Read current logic level of GPIO pins. Value reflects actual pin state regardless of output enable setting. Use for reading input pins or monitoring output pin states.

### GPIO_DATAOUT Register (Offset 0x13C)  
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Control output pin states

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | DATAOUT | Output data per pin (0=Low, 1=High) |

**Usage**: Direct read/write access to output pin states. For atomic operations, prefer using SETDATAOUT and CLEARDATAOUT registers to avoid read-modify-write race conditions.

### GPIO_SETDATAOUT Register (Offset 0x194)
- **Access**: Write-only
- **Purpose**: Atomic set operation for output pins

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | SETDATAOUT | Set output bits (write 1 to set corresponding bit in DATAOUT) |

**Usage**: Writing 1 to any bit position sets the corresponding bit in DATAOUT register. Atomic operation - no read-modify-write required. Multiple pins can be set simultaneously.

### GPIO_CLEARDATAOUT Register (Offset 0x190)
- **Access**: Write-only  
- **Purpose**: Atomic clear operation for output pins

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | CLEARDATAOUT | Clear output bits (write 1 to clear corresponding bit in DATAOUT) |

**Usage**: Writing 1 to any bit position clears the corresponding bit in DATAOUT register. Atomic operation - ideal for interrupt-safe pin control and simultaneous multi-pin operations.

## Interrupt Control Registers

### GPIO_IRQSTATUS_0 Register (Offset 0x02C)
- **Access**: Read/Write (write 1 to clear)
- **Reset**: 0x00000000
- **Purpose**: Interrupt status for interrupt line 0

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | INTLINE0 | Interrupt status per pin (write 1 to clear) |

### GPIO_IRQSTATUS_1 Register (Offset 0x030)
- **Access**: Read/Write (write 1 to clear)
- **Reset**: 0x00000000  
- **Purpose**: Interrupt status for interrupt line 1

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | INTLINE1 | Interrupt status per pin (write 1 to clear) |

### GPIO_IRQSTATUS_SET_0 Register (Offset 0x034)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable interrupts on line 0

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | INTLINE0 | Interrupt enable per pin (1=Enable, 0=Disable) |

### GPIO_IRQSTATUS_SET_1 Register (Offset 0x038)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable interrupts on line 1

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | INTLINE1 | Interrupt enable per pin (1=Enable, 0=Disable) |

**Interrupt Configuration**: Each GPIO pin can generate interrupts on either line 0 or line 1. Enable interrupts by setting corresponding bits in IRQSTATUS_SET registers, then configure edge/level detection as needed.

## Edge and Level Detection Registers

### GPIO_LEVELDETECT0 Register (Offset 0x140)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable low level detection per pin

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | LEVELDETECT0 | Low level detection enable (1=Enable) |

### GPIO_LEVELDETECT1 Register (Offset 0x144)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable high level detection per pin

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | LEVELDETECT1 | High level detection enable (1=Enable) |

### GPIO_RISINGDETECT Register (Offset 0x148)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable rising edge detection per pin

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | RISINGDETECT | Rising edge detection enable (1=Enable) |

### GPIO_FALLINGDETECT Register (Offset 0x14C)  
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable falling edge detection per pin

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | FALLINGDETECT | Falling edge detection enable (1=Enable) |

**Detection Modes**: Each pin supports multiple simultaneous detection modes:
- **Level Detection**: Continuous monitoring of logic levels (high and/or low)
- **Edge Detection**: Transition detection (rising and/or falling)
- **Combined Detection**: Multiple modes can be enabled simultaneously for comprehensive monitoring

## Debounce Control Registers

### GPIO_DEBOUNCENABLE Register (Offset 0x150)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable debounce function per pin

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | DEBOUNCENABLE | Debounce enable per pin (1=Enable) |

### GPIO_DEBOUNCINGTIME Register (Offset 0x154)
- **Access**: Read/Write
- **Reset**: 0x00000000  
- **Purpose**: Configure debounce timing

| Bits | Field | Description |
|------|-------|-------------|
| 7:0 | DEBOUNCETIME | Debounce time (value × 31µs) |

**Debounce Configuration**: 
- **Time Resolution**: 31µs per unit (based on 32kHz debounce clock)
- **Maximum Time**: 255 × 31µs = 7.905ms
- **Common Values**: 32 units = ~1ms, 161 units = ~5ms, 323 units = ~10ms
- **Application**: Essential for mechanical switch inputs to eliminate contact bounce

## Wake-up Control Registers

### GPIO_IRQWAKEN_0 Register (Offset 0x044)
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable wake-up on interrupt line 0

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | WAKEUPENABLE0 | Wake-up enable per pin for line 0 |

### GPIO_IRQWAKEN_1 Register (Offset 0x048)
- **Access**: Read/Write  
- **Reset**: 0x00000000
- **Purpose**: Enable wake-up on interrupt line 1

| Bits | Field | Description |
|------|-------|-------------|
| 31:0 | WAKEUPENABLE1 | Wake-up enable per pin for line 1 |

**Wake-up Capability**: 
- **GPIO0 Bank**: Always-on domain, provides system wake-up from deepest sleep modes
- **GPIO1-3 Banks**: Limited wake-up capability depending on power domain state
- **Configuration**: Enable both interrupt and wake-up bits for complete wake functionality
- **Applications**: Power buttons, external event detection, system recovery

## Register Access Patterns


## GPIO Register Map - Absolute Addresses Pre-Calculated

Quick reference table with absolute addresses for all GPIO registers.

### GPIO0 (Base: 0x44E07000)

| Address | Register | Description |
|---------|----------|-------------|
| 0x44E07000 | GPIO0_REVISION | Module Revision Identifier |
| 0x44E07010 | GPIO0_SYSCONFIG | System Configuration |
| 0x44E07020 | GPIO0_EOI | End of Interrupt |
| 0x44E07024 | GPIO0_IRQSTATUS_RAW_0 | Raw Interrupt Status (Line 0) |
| 0x44E07028 | GPIO0_IRQSTATUS_RAW_1 | Raw Interrupt Status (Line 1) |
| 0x44E0702C | GPIO0_IRQSTATUS_0 | Interrupt Status (Line 0) |
| 0x44E07030 | GPIO0_IRQSTATUS_1 | Interrupt Status (Line 1) |
| 0x44E07034 | GPIO0_IRQSTATUS_SET_0 | Interrupt Enable Set (Line 0) |
| 0x44E07038 | GPIO0_IRQSTATUS_SET_1 | Interrupt Enable Set (Line 1) |
| 0x44E0703C | GPIO0_IRQSTATUS_CLR_0 | Interrupt Enable Clear (Line 0) |
| 0x44E07040 | GPIO0_IRQSTATUS_CLR_1 | Interrupt Enable Clear (Line 1) |
| 0x44E07044 | GPIO0_IRQWAKEN_0 | Wake-up Enable (Line 0) |
| 0x44E07048 | GPIO0_IRQWAKEN_1 | Wake-up Enable (Line 1) |
| 0x44E07114 | GPIO0_SYSSTATUS | System Status |
| 0x44E07130 | GPIO0_CTRL | Module Control |
| 0x44E07134 | GPIO0_OE | Output Enable |
| 0x44E07138 | GPIO0_DATAIN | Input Data |
| 0x44E0713C | GPIO0_DATAOUT | Output Data |
| 0x44E07140 | GPIO0_LEVELDETECT0 | Low Level Detection Enable |
| 0x44E07144 | GPIO0_LEVELDETECT1 | High Level Detection Enable |
| 0x44E07148 | GPIO0_RISINGDETECT | Rising Edge Detection Enable |
| 0x44E0714C | GPIO0_FALLINGDETECT | Falling Edge Detection Enable |
| 0x44E07150 | GPIO0_DEBOUNCENABLE | Debounce Enable |
| 0x44E07154 | GPIO0_DEBOUNCINGTIME | Debounce Timing |
| 0x44E07190 | GPIO0_CLEARDATAOUT | Clear Output Data |
| 0x44E07194 | GPIO0_SETDATAOUT | Set Output Data |

### GPIO1 (Base: 0x4804C000)

| Address | Register | Description |
|---------|----------|-------------|
| 0x4804C000 | GPIO1_REVISION | Module Revision Identifier |
| 0x4804C010 | GPIO1_SYSCONFIG | System Configuration |
| 0x4804C020 | GPIO1_EOI | End of Interrupt |
| 0x4804C024 | GPIO1_IRQSTATUS_RAW_0 | Raw Interrupt Status (Line 0) |
| 0x4804C028 | GPIO1_IRQSTATUS_RAW_1 | Raw Interrupt Status (Line 1) |
| 0x4804C02C | GPIO1_IRQSTATUS_0 | Interrupt Status (Line 0) |
| 0x4804C030 | GPIO1_IRQSTATUS_1 | Interrupt Status (Line 1) |
| 0x4804C034 | GPIO1_IRQSTATUS_SET_0 | Interrupt Enable Set (Line 0) |
| 0x4804C038 | GPIO1_IRQSTATUS_SET_1 | Interrupt Enable Set (Line 1) |
| 0x4804C03C | GPIO1_IRQSTATUS_CLR_0 | Interrupt Enable Clear (Line 0) |
| 0x4804C040 | GPIO1_IRQSTATUS_CLR_1 | Interrupt Enable Clear (Line 1) |
| 0x4804C044 | GPIO1_IRQWAKEN_0 | Wake-up Enable (Line 0) |
| 0x4804C048 | GPIO1_IRQWAKEN_1 | Wake-up Enable (Line 1) |
| 0x4804C114 | GPIO1_SYSSTATUS | System Status |
| 0x4804C130 | GPIO1_CTRL | Module Control |
| 0x4804C134 | GPIO1_OE | Output Enable |
| 0x4804C138 | GPIO1_DATAIN | Input Data |
| 0x4804C13C | GPIO1_DATAOUT | Output Data |
| 0x4804C140 | GPIO1_LEVELDETECT0 | Low Level Detection Enable |
| 0x4804C144 | GPIO1_LEVELDETECT1 | High Level Detection Enable |
| 0x4804C148 | GPIO1_RISINGDETECT | Rising Edge Detection Enable |
| 0x4804C14C | GPIO1_FALLINGDETECT | Falling Edge Detection Enable |
| 0x4804C150 | GPIO1_DEBOUNCENABLE | Debounce Enable |
| 0x4804C154 | GPIO1_DEBOUNCINGTIME | Debounce Timing |
| 0x4804C190 | GPIO1_CLEARDATAOUT | Clear Output Data |
| 0x4804C194 | GPIO1_SETDATAOUT | Set Output Data |

### GPIO2 (Base: 0x481AC000)

| Address | Register | Description |
|---------|----------|-------------|
| 0x481AC000 | GPIO2_REVISION | Module Revision Identifier |
| 0x481AC010 | GPIO2_SYSCONFIG | System Configuration |
| 0x481AC020 | GPIO2_EOI | End of Interrupt |
| 0x481AC024 | GPIO2_IRQSTATUS_RAW_0 | Raw Interrupt Status (Line 0) |
| 0x481AC028 | GPIO2_IRQSTATUS_RAW_1 | Raw Interrupt Status (Line 1) |
| 0x481AC02C | GPIO2_IRQSTATUS_0 | Interrupt Status (Line 0) |
| 0x481AC030 | GPIO2_IRQSTATUS_1 | Interrupt Status (Line 1) |
| 0x481AC034 | GPIO2_IRQSTATUS_SET_0 | Interrupt Enable Set (Line 0) |
| 0x481AC038 | GPIO2_IRQSTATUS_SET_1 | Interrupt Enable Set (Line 1) |
| 0x481AC03C | GPIO2_IRQSTATUS_CLR_0 | Interrupt Enable Clear (Line 0) |
| 0x481AC040 | GPIO2_IRQSTATUS_CLR_1 | Interrupt Enable Clear (Line 1) |
| 0x481AC044 | GPIO2_IRQWAKEN_0 | Wake-up Enable (Line 0) |
| 0x481AC048 | GPIO2_IRQWAKEN_1 | Wake-up Enable (Line 1) |
| 0x481AC114 | GPIO2_SYSSTATUS | System Status |
| 0x481AC130 | GPIO2_CTRL | Module Control |
| 0x481AC134 | GPIO2_OE | Output Enable |
| 0x481AC138 | GPIO2_DATAIN | Input Data |
| 0x481AC13C | GPIO2_DATAOUT | Output Data |
| 0x481AC140 | GPIO2_LEVELDETECT0 | Low Level Detection Enable |
| 0x481AC144 | GPIO2_LEVELDETECT1 | High Level Detection Enable |
| 0x481AC148 | GPIO2_RISINGDETECT | Rising Edge Detection Enable |
| 0x481AC14C | GPIO2_FALLINGDETECT | Falling Edge Detection Enable |
| 0x481AC150 | GPIO2_DEBOUNCENABLE | Debounce Enable |
| 0x481AC154 | GPIO2_DEBOUNCINGTIME | Debounce Timing |
| 0x481AC190 | GPIO2_CLEARDATAOUT | Clear Output Data |
| 0x481AC194 | GPIO2_SETDATAOUT | Set Output Data |

### GPIO3 (Base: 0x481AE000)

| Address | Register | Description |
|---------|----------|-------------|
| 0x481AE000 | GPIO3_REVISION | Module Revision Identifier |
| 0x481AE010 | GPIO3_SYSCONFIG | System Configuration |
| 0x481AE020 | GPIO3_EOI | End of Interrupt |
| 0x481AE024 | GPIO3_IRQSTATUS_RAW_0 | Raw Interrupt Status (Line 0) |
| 0x481AE028 | GPIO3_IRQSTATUS_RAW_1 | Raw Interrupt Status (Line 1) |
| 0x481AE02C | GPIO3_IRQSTATUS_0 | Interrupt Status (Line 0) |
| 0x481AE030 | GPIO3_IRQSTATUS_1 | Interrupt Status (Line 1) |
| 0x481AE034 | GPIO3_IRQSTATUS_SET_0 | Interrupt Enable Set (Line 0) |
| 0x481AE038 | GPIO3_IRQSTATUS_SET_1 | Interrupt Enable Set (Line 1) |
| 0x481AE03C | GPIO3_IRQSTATUS_CLR_0 | Interrupt Enable Clear (Line 0) |
| 0x481AE040 | GPIO3_IRQSTATUS_CLR_1 | Interrupt Enable Clear (Line 1) |
| 0x481AE044 | GPIO3_IRQWAKEN_0 | Wake-up Enable (Line 0) |
| 0x481AE048 | GPIO3_IRQWAKEN_1 | Wake-up Enable (Line 1) |
| 0x481AE114 | GPIO3_SYSSTATUS | System Status |
| 0x481AE130 | GPIO3_CTRL | Module Control |
| 0x481AE134 | GPIO3_OE | Output Enable |
| 0x481AE138 | GPIO3_DATAIN | Input Data |
| 0x481AE13C | GPIO3_DATAOUT | Output Data |
| 0x481AE140 | GPIO3_LEVELDETECT0 | Low Level Detection Enable |
| 0x481AE144 | GPIO3_LEVELDETECT1 | High Level Detection Enable |
| 0x481AE148 | GPIO3_RISINGDETECT | Rising Edge Detection Enable |
| 0x481AE14C | GPIO3_FALLINGDETECT | Falling Edge Detection Enable |
| 0x481AE150 | GPIO3_DEBOUNCENABLE | Debounce Enable |
| 0x481AE154 | GPIO3_DEBOUNCINGTIME | Debounce Timing |
| 0x481AE190 | GPIO3_CLEARDATAOUT | Clear Output Data |
| 0x481AE194 | GPIO3_SETDATAOUT | Set Output Data |

### Configuration Sequence
1. **Clock Enable**: Enable module clocks via PRCM
2. **System Config**: Configure SYSCONFIG for desired power management
3. **Pin Direction**: Set OE register for input/output configuration  
4. **Detection Setup**: Configure edge/level detection as needed
5. **Debounce Setup**: Enable and configure debounce timing if required
6. **Interrupt Enable**: Enable interrupts and configure system interrupt controller
7. **Wake-up Enable**: Configure wake-up capability if needed

### Operation Patterns
- **Output Control**: Use SETDATAOUT/CLEARDATAOUT for atomic operations
- **Input Reading**: Read DATAIN register for current pin states
- **Interrupt Handling**: Check IRQSTATUS, handle event, clear status bit
- **Bulk Operations**: Use bit masks for efficient multi-pin operations

### Performance Considerations
- **Atomic Operations**: Prefer SET/CLEAR registers over read-modify-write
- **Register Caching**: Cache frequently used register addresses
- **Interrupt Latency**: Minimize interrupt handler execution time
- **Power Management**: Use appropriate idle modes and wake-up configuration

## Related Documentation
- [GPIO System Overview](gpio-overview.md) - High-level GPIO architecture
