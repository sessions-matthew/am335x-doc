# GPIO System Overview - AM335x Family

## Overview

The AM335x family includes a comprehensive General-Purpose Input/Output (GPIO) system with four GPIO banks, providing up to 128 configurable digital I/O pins. **All GPIO banks are fully available on the AM3358**. The GPIO system supports advanced features including interrupt generation, debouncing, and flexible pin multiplexing with other peripheral functions.

## GPIO Architecture

### GPIO Banks and Organization  
The AM335x family contains **four independent GPIO banks** (GPIO0-3), each supporting 32 I/O pins.

**Total GPIO Pins**: 128 (4 banks × 32 pins each)

### Key Features
- **Individual Pin Control**: Each pin configurable as input or output independently
- **Interrupt Generation**: Rising edge, falling edge, and level-triggered interrupts per pin
- **Debounce Support**: Programmable debounce timing for input pins
- **Wake-up Capability**: GPIO0 can wake system from deep sleep modes
- **Pin Multiplexing**: Shared pins with UART, SPI, I2C, Timer, and other peripherals
- **Fast Access**: Dedicated set/clear registers for atomic bit operations

## Pin Multiplexing and Availability

### Pin Sharing Architecture
Most AM3358 pins are multiplexed between GPIO and dedicated peripheral functions:

```
Physical Pin → Control Module → Pin Mux Selection → GPIO or Peripheral
```

### Pin Multiplexing Examples
| Pin Name | Mode 0 | Mode 1 | Mode 2 | Mode 3 | Mode 4 | Mode 5 | Mode 6 | Mode 7 |
|----------|--------|--------|--------|--------|--------|--------|--------|--------|
| GPMC_AD0 | GPMC_AD0 | MMC1_DAT0 | - | - | - | - | - | GPIO1_0 |
| GPMC_AD1 | GPMC_AD1 | MMC1_DAT1 | - | - | - | - | - | GPIO1_1 |
| UART0_RXD | UART0_RXD | - | d_can0_tx | I2C2_SDA | - | - | - | GPIO1_10 |
| UART0_TXD | UART0_TXD | - | d_can0_rx | I2C2_SCL | - | - | - | GPIO1_11 |
| SPI0_SCLK | SPI0_SCLK | - | - | - | - | - | - | GPIO0_2 |
| SPI0_D0 | SPI0_D0 | - | - | UART2_TXD | I2C1_SDA | - | - | GPIO0_3 |

**Note**: GPIO functionality is typically available in Mode 7 for most pins

### GPIO Pin Availability by Bank

#### GPIO0 (WKUP Domain - Always Available)
- **Total Pins**: 32 (GPIO0_0 to GPIO0_31)
- **Typical Available**: 8-16 pins (others used by critical functions)
- **Key Shared Functions**: SPI0, I2C0, UART0, Timer clocks
- **Power**: Always powered, can wake from sleep modes

#### GPIO1 (Peripheral Domain) 
- **Total Pins**: 32 (GPIO1_0 to GPIO1_31)
- **Typical Available**: 20-28 pins
- **Key Shared Functions**: GPMC, MMC0/1, UART1-2, Timer2-7
- **Power**: Can be powered down for energy savings

#### GPIO2 (Peripheral Domain)
- **Total Pins**: 32 (GPIO2_0 to GPIO2_31) 
- **Typical Available**: 24-30 pins
- **Key Shared Functions**: GPMC, LCD, MMC1, McASP, PWM, UART3-5
- **AM3358 Note**: **All UART3-5 instances available** per official datasheet
- **Power**: Can be powered down for energy savings

#### GPIO3 (Peripheral Domain)
- **Total Pins**: 32 (GPIO3_0 to GPIO3_31)
- **Typical Available**: 16-24 pins  
- **Key Shared Functions**: MMC2, McASP0, EMIF, EMU, UART3-5
- **AM3358 Note**: **All UART3-5 instances available** with pin muxing options
- **Power**: Can be powered down for energy savings

## GPIO Register Architecture

### Register Categories
Each GPIO bank contains the same register set:

1. **System Registers**: Configuration and status
2. **Data Registers**: Input/output data access
3. **Interrupt Registers**: Interrupt configuration and status
4. **Control Registers**: Pin direction and special functions

### Core GPIO Registers (per bank)

The address of each register is calculated by adding the offset to the base address. For example the address of GPIO2_OE is calculated as 0x481AC000 + 0x134 = 0x481AC134.

| Offset | Register | Access | Purpose |
|--------|----------|--------|---------|
| 0x000 | GPIO_REVISION | R | Module revision information |
| 0x010 | GPIO_SYSCONFIG | RW | System configuration and power management |
| 0x114 | GPIO_SYSSTATUS | R | System status and reset completion |
| 0x130 | GPIO_CTRL | RW | Module control and gating disable |
| 0x134 | GPIO_OE | RW | Output enable (0=output, 1=input) |
| 0x138 | GPIO_DATAIN | R | Input data register |
| 0x13C | GPIO_DATAOUT | RW | Output data register |
| 0x190 | GPIO_CLEARDATAOUT | W | Atomic bit clear for outputs |
| 0x194 | GPIO_SETDATAOUT | W | Atomic bit set for outputs |

**Note**: All offsets are from the respective GPIO bank base address.

### Interrupt Control Registers

| Offset | Register | Access | Purpose |
|--------|----------|--------|---------|
| 0x020 | GPIO_EOI | W | End of interrupt acknowledgment |
| 0x024 | GPIO_IRQSTATUS_RAW_0 | R | Raw interrupt status (line 0) |
| 0x028 | GPIO_IRQSTATUS_RAW_1 | R | Raw interrupt status (line 1) |
| 0x02C | GPIO_IRQSTATUS_0 | RW | Masked interrupt status (line 0) |
| 0x030 | GPIO_IRQSTATUS_1 | RW | Masked interrupt status (line 1) |
| 0x034 | GPIO_IRQSTATUS_SET_0 | RW | Interrupt enable set (line 0) |
| 0x038 | GPIO_IRQSTATUS_SET_1 | RW | Interrupt enable set (line 1) |
| 0x03C | GPIO_IRQSTATUS_CLR_0 | RW | Interrupt enable clear (line 0) |
| 0x040 | GPIO_IRQSTATUS_CLR_1 | RW | Interrupt enable clear (line 1) |
| 0x044 | GPIO_IRQWAKEN_0 | RW | Wake-up enable (line 0) |
| 0x048 | GPIO_IRQWAKEN_1 | RW | Wake-up enable (line 1) |

**GPIO Interrupt Lines**: Each GPIO bank has two interrupt lines (0 and 1) for improved interrupt distribution and priority handling.

### Edge/Level Detection Registers

| Offset | Register | Access | Purpose |
|--------|----------|--------|---------
| 0x140 | GPIO_LEVELDETECT0 | RW | Low level detection enable |
| 0x144 | GPIO_LEVELDETECT1 | RW | High level detection enable |
| 0x148 | GPIO_RISINGDETECT | RW | Rising edge detection enable |
| 0x14C | GPIO_FALLINGDETECT | RW | Falling edge detection enable |
| 0x150 | GPIO_DEBOUNCENABLE | RW | Debounce function enable |
| 0x154 | GPIO_DEBOUNCINGTIME | RW | Debounce timing configuration |

## Clock and Power Management

### Clock Configuration
Each GPIO bank requires proper clock configuration through the Power, Reset, and Clock Management (PRCM) module:

#### Clock Dependencies
- **GPIO0**: WKUP domain clocks (always available)
- **GPIO1-3**: L4PER domain clocks (can be gated for power savings)
- **Debounce Clock**: 32kHz clock source for debounce functionality

#### Clock Control Registers
- **GPIO0**: CM_WKUP_GPIO0_CLKCTRL
- **GPIO1**: CM_PER_GPIO1_CLKCTRL  
- **GPIO2**: CM_PER_GPIO2_CLKCTRL
- **GPIO3**: CM_PER_GPIO3_CLKCTRL

### Power Domain Characteristics
| Bank | Power Domain | Sleep Behavior | Wake Capability |
|------|-------------|----------------|-----------------|
| GPIO0 | WKUP | Always active | Can wake from all sleep modes |
| GPIO1-3 | L4PER | Can be powered down | Can wake from idle/standby |

### Power Management Features
- **Module Disable**: Individual GPIO banks can be clock-gated
- **Smart Idle**: Automatic clock management based on activity
- **Wake-up Generation**: GPIO0 provides system wake-up capability
- **Debounce Power**: Separate 32kHz clock domain for low-power debounce

## GPIO Programming Model

### Basic Operations
The GPIO system provides several operational modes:

#### Pin Direction Control
- **Output Enable Register (OE)**: Controls input/output direction per pin
- **Bit Value**: 0 = Output, 1 = Input (inverted logic)
- **Reset State**: All pins default to input mode for safety

#### Data Access Methods
1. **Direct Access**: Via GPIO_DATAOUT and GPIO_DATAIN registers
2. **Atomic Set**: Via GPIO_SETDATAOUT register (write-only)
3. **Atomic Clear**: Via GPIO_CLEARDATAOUT register (write-only)

#### Interrupt Generation
- **Dual Interrupt Lines**: Each bank supports two interrupt lines
- **Detection Modes**: Edge (rising/falling) and level (high/low)
- **Per-Pin Control**: Individual interrupt enable/disable
- **Status Management**: Separate raw and masked interrupt status

### Advanced Features

#### Debounce Functionality
- **Purpose**: Eliminate mechanical switch contact bounce
- **Resolution**: 31μs per unit (32kHz clock based)
- **Range**: 31μs to 7.905ms (1-255 units)
- **Per-Pin Enable**: Individual debounce control per GPIO pin

#### Wake-up Capability
- **GPIO0 Special Role**: Can wake system from deepest sleep modes
- **Wake-up Enable**: Separate control per pin and interrupt line
- **System Integration**: Requires PRCM wake-up event configuration

#### Multi-Pin Operations
- **Atomic Updates**: Set/clear multiple pins simultaneously
- **Bit Masking**: Efficient multi-pin read/write operations
- **Interrupt Batching**: Handle multiple pin interrupts efficiently

## Pin Multiplexing Configuration

### Control Module Integration
Each GPIO pin requires proper pin mux configuration in the Control Module:

#### Pin Configuration Elements
- **Mode Selection**: Typically Mode 7 for GPIO function
- **Pull Resistors**: Internal pull-up/pull-down configuration
- **Slew Rate**: Output transition speed control
- **Receiver Enable**: Input buffer enable/disable

#### Pin Mux Registers
Located in Control Module address space (0x44E10000 base):
- **Pin-specific offsets**: Each pin has dedicated configuration register
- **Standard format**: Mode, pull, slew, and receiver controls
- **Reset defaults**: Usually configured for primary peripheral function

### Typical Pin Configuration Sequence
1. **Determine Pin Requirements**: Direction, pull resistors, speed
2. **Configure Control Module**: Set pin mux to GPIO mode (Mode 7)
3. **Enable GPIO Clock**: Activate appropriate GPIO bank clock
4. **Configure GPIO Registers**: Set direction, interrupts, debounce as needed
5. **Enable System Integration**: Configure INTC for interrupts if needed

## Hardware Integration Considerations

### External Hardware Interface
- **Voltage Levels**: 3.3V CMOS logic levels
- **Drive Strength**: Configurable output drive strength
- **Input Protection**: ESD protection on all pins
- **Load Considerations**: Account for capacitive and resistive loads

### Performance Characteristics
- **Access Speed**: Single-cycle register access for atomic operations
- **Interrupt Latency**: Depends on system interrupt controller configuration
- **Power Consumption**: Varies with switching frequency and load
- **EMI Considerations**: Slew rate control helps minimize EMI

### GPIO Bank IRQ Integration
| Bank | IRQ Number | INTC Priority | Typical Usage |
|------|------------|---------------|---------------|
| GPIO0 | 96 | High | Wake-up, critical inputs |
| GPIO1 | 98 | Medium | General purpose I/O |
| GPIO2 | 32 | Medium | LCD, display interface |
| GPIO3 | 62 | Medium | Audio, communication |

## Implementation Guidelines

### Best Practices
1. **Use Atomic Operations**: Prefer SET/CLEAR registers over read-modify-write
2. **Minimize Interrupt Handlers**: Keep GPIO interrupt service routines short
3. **Power Optimization**: Disable unused GPIO banks and configure unused pins appropriately
4. **Pin Planning**: Carefully plan pin assignments considering mux conflicts
5. **Debounce Configuration**: Use hardware debounce for mechanical inputs

### Common Applications
- **LED Control**: Simple output control with current limiting resistors
- **Button Input**: Debounced input with pull-up/pull-down resistors
- **Digital Communication**: Bit-banged protocols (SPI, I2C alternatives)
- **Status Monitoring**: Input monitoring for system status indicators
- **Wake-up Sources**: GPIO0 pins for system wake-up events

### Troubleshooting
- **No GPIO Response**: Check clock enable and pin mux configuration
- **Unexpected Interrupts**: Verify edge/level detection settings and clear status
- **Power Issues**: Review unused pin configuration and bank power management
- **Performance Problems**: Consider using atomic operations and optimizing interrupt handlers

## Programming Examples
## GPIO Usage - Configure GPIO1 Pin as Output

### Overview
This document provides pseudocode for configuring a pin on GPIO1 as an output on the AM335x.

### GPIO1 Configuration Pseudocode

#### Step 1: Enable GPIO1 Module Clock

```pseudocode
// Enable GPIO1 module in CM_PER (Clock Module Peripheral)
// Register: CM_PER_GPIO1_CLKCTRL at offset 0xAC

WRITE32(CM_PER_BASE + 0xAC, 0x2)  // Enable module, functional and interface clocks

// Wait for module to be fully functional
while ((READ32(CM_PER_BASE + 0xAC) & 0x30000) != 0x0) {
    // Wait until IDLEST bits indicate module is functional
}
```

#### Step 2: Configure Pin Muxing

```pseudocode
// Configure the control module to mux the pad to GPIO mode
// Example: Configure GPIO1_28 (which might be on pad gpmc_ben1)
// Register: CONF_GPMC_BEN1 at Control Module offset

WRITE32(CONTROL_MODULE_BASE + PAD_OFFSET, 0x07)  // Mode 7 = GPIO mode
                                                   // Can OR with:
                                                   // 0x00 - No pull up/down
                                                   // 0x10 - Pull up enabled
                                                   // 0x08 - Pull down enabled
                                                   // 0x20 - Receiver enabled (for input)
```

#### Step 3: Set GPIO1 Pin as Output

```pseudocode
// GPIO1 Base Address: 0x4804C000
GPIO1_BASE = 0x4804C000

// Define register offsets
GPIO_OE_OFFSET        = 0x134  // Output Enable register
GPIO_DATAOUT_OFFSET   = 0x13C  // Data Output register
GPIO_CLEARDATAOUT_OFFSET = 0x190  // Clear Data Output register
GPIO_SETDATAOUT_OFFSET   = 0x194  // Set Data Output register

// Choose which pin (0-31)
PIN_NUMBER = 28  // Example: GPIO1_28
PIN_MASK = (1 << PIN_NUMBER)

// Configure pin as OUTPUT by clearing the bit in GPIO_OE
// 0 = Output, 1 = Input
current_oe = READ32(GPIO1_BASE + GPIO_OE_OFFSET)
current_oe = current_oe & ~PIN_MASK  // Clear bit to make it output
WRITE32(GPIO1_BASE + GPIO_OE_OFFSET, current_oe)
```

### Step 4: Set Output Value

```pseudocode
// Method 1: Using SETDATAOUT/CLEARDATAOUT (atomic operations)
// Set pin HIGH
WRITE32(GPIO1_BASE + GPIO_SETDATAOUT_OFFSET, PIN_MASK)

// Set pin LOW
WRITE32(GPIO1_BASE + GPIO_CLEARDATAOUT_OFFSET, PIN_MASK)

// Method 2: Using DATAOUT register (read-modify-write)
// Set pin HIGH
current_data = READ32(GPIO1_BASE + GPIO_DATAOUT_OFFSET)
WRITE32(GPIO1_BASE + GPIO_DATAOUT_OFFSET, current_data | PIN_MASK)

// Set pin LOW
current_data = READ32(GPIO1_BASE + GPIO_DATAOUT_OFFSET)
WRITE32(GPIO1_BASE + GPIO_DATAOUT_OFFSET, current_data & ~PIN_MASK)
```

### Complete Example: Configure GPIO1_28 as Output and Toggle

```pseudocode
// Constants
CM_PER_BASE = 0x44E00000
CM_PER_GPIO1_CLKCTRL = 0xAC
CONTROL_MODULE_BASE = 0x44E10000
CONF_GPMC_BEN1 = 0x878  // Example pad for GPIO1_28
GPIO1_BASE = 0x4804C000
GPIO_OE = 0x134
GPIO_SETDATAOUT = 0x194
GPIO_CLEARDATAOUT = 0x190

PIN = 28
PIN_MASK = (1 << PIN)

// 1. Enable GPIO1 clock
WRITE32(CM_PER_BASE + CM_PER_GPIO1_CLKCTRL, 0x2)
while ((READ32(CM_PER_BASE + CM_PER_GPIO1_CLKCTRL) & 0x30000) != 0x0) {
    // Wait for module ready
}

// 2. Configure pin mux to GPIO mode
WRITE32(CONTROL_MODULE_BASE + CONF_GPMC_BEN1, 0x07)  // Mode 7 = GPIO

// 3. Set as output
oe_value = READ32(GPIO1_BASE + GPIO_OE)
oe_value = oe_value & ~PIN_MASK  // Clear bit = output
WRITE32(GPIO1_BASE + GPIO_OE, oe_value)

// 4. Toggle the pin
WRITE32(GPIO1_BASE + GPIO_SETDATAOUT, PIN_MASK)     // Set HIGH
delay(1000)
WRITE32(GPIO1_BASE + GPIO_CLEARDATAOUT, PIN_MASK)   // Set LOW
delay(1000)
```

### Important Notes

1. **Clock Enable First**: Always enable the module clock before accessing GPIO registers
2. **Pin Muxing**: Verify correct pad configuration in the Control Module
3. **Output Enable**: Clear the bit in GPIO_OE to configure as output (0=output)
4. **Atomic Operations**: Prefer SETDATAOUT/CLEARDATAOUT for thread-safe bit manipulation
5. **GPIO Instances**: AM335x has GPIO0, GPIO1, GPIO2, GPIO3 (each with 32 pins)

## Related Documentation
- [GPIO Register Reference](gpio-registers.md) - Complete register descriptions
