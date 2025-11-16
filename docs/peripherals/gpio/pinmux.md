# Pin Multiplexing Guide - AM3358

## Overview

The AM3358 pin multiplexing system allows a single physical pin to serve multiple peripheral functions through software configuration. This flexibility enables optimal pin usage based on application requirements while maintaining signal integrity and electrical characteristics.

## Pin Multiplexing Architecture

### Control Module Structure
The Control Module manages pin configuration through dedicated registers that control:
- **Function Selection**: Choose from up to 8 modes per pin
- **Pull Resistor Configuration**: Enable/disable pull-up or pull-down
- **Slew Rate Control**: Fast or slow edge transitions  
- **Receiver Enable**: Enable input buffer for bidirectional pins
- **Pin Type**: Determine electrical characteristics

### Pin Configuration Register Format
Each pin is controlled by a 32-bit configuration register:

```
Bits [31:7]  : Reserved (0x00)
Bit  [6]     : SLEWCTRL - Slew rate control (0=Fast, 1=Slow)  
Bit  [5]     : RXACTIVE - Receiver enable (0=Disabled, 1=Enabled)
Bit  [4]     : PULLTYPESEL - Pull type (0=Pull-down, 1=Pull-up)
Bit  [3]     : PULLUDEN - Pull enable (0=Pull enabled, 1=Pull disabled)
Bits [2:0]   : MUXMODE - Function select (0-7)
```

## Control Module Base Address
- **Base**: 0x44E10000 (Control Module)
- **Pin Configuration Range**: 0x44E10800 - 0x44E10A34

## Pin Configuration Register Format

Each pin has a 32-bit configuration register with the following bit fields:
- **Bits [2:0]**: MUXMODE - Function select (0-7)
- **Bit [3]**: PULLUDEN - Pull resistor enable (0=enabled, 1=disabled)  
- **Bit [4]**: PULLTYPESEL - Pull type select (0=pull-down, 1=pull-up)
- **Bit [5]**: RXACTIVE - Input buffer enable (0=disabled, 1=enabled)
- **Bit [6]**: SLEWCTRL - Slew rate control (0=fast, 1=slow)

## Implementation Examples

**AM335x Family vs AM3358 Note**: This documentation covers the full AM335x family pin multiplexing capabilities. **The AM3358 implements all peripherals shown** per the official datasheet. All UART instances (UART0-5) are available with their respective pin muxing options.

For practical pin configuration code examples, see:
- [Pin Multiplexing Implementation Guide](../../implementation/pinmux-usage.md) - Complete programming examples

## Complete Pin Map Reference

### GPIO Bank 0 Pins
GPIO0 pins are primarily on the wake-up domain and often serve system functions:

| GPIO | Pin Name | Control Offset | Alt Functions |
|------|----------|----------------|---------------|
| GPIO0_0 | MDIO_DATA | 0x948 | Mode 0: MDIO_DATA, Mode 7: GPIO0_0 |
| GPIO0_1 | MDIO_CLK | 0x94C | Mode 0: MDIO_CLK, Mode 7: GPIO0_1 |
| GPIO0_2 | SPI0_SCLK | 0x950 | Mode 0: SPI0_SCLK, Mode 7: GPIO0_2 |
| GPIO0_3 | SPI0_D0 | 0x954 | Mode 0: SPI0_D0, Mode 7: GPIO0_3 |
| GPIO0_4 | SPI0_D1 | 0x958 | Mode 0: SPI0_D1, Mode 7: GPIO0_4 |
| GPIO0_5 | SPI0_CS0 | 0x95C | Mode 0: SPI0_CS0, Mode 7: GPIO0_5 |
| GPIO0_6 | SPI0_CS1 | 0x960 | Mode 0: SPI0_CS1, Mode 7: GPIO0_6 |
| GPIO0_7 | ECAP0_IN_PWM0_OUT | 0x964 | Mode 0: ECAP0, Mode 1: PWM0, Mode 7: GPIO0_7 |
| GPIO0_8 | LCD_DATA12 | 0x8D0 | Mode 0: LCD_DATA12, Mode 7: GPIO0_8 |
| GPIO0_9 | LCD_DATA13 | 0x8D4 | Mode 0: LCD_DATA13, Mode 7: GPIO0_9 |
| GPIO0_10 | LCD_DATA14 | 0x8D8 | Mode 0: LCD_DATA14, Mode 7: GPIO0_10 |
| GPIO0_11 | LCD_DATA15 | 0x8DC | Mode 0: LCD_DATA15, Mode 7: GPIO0_11 |

### GPIO Bank 1 Pins  
GPIO1 pins offer diverse peripheral functions:

| GPIO | Pin Name | Control Offset | Alt Functions |
|------|----------|----------------|---------------|
| GPIO1_0 | GPMC_AD0 | 0x800 | Mode 0: GPMC_AD0, Mode 1: MMC1_DAT0, Mode 7: GPIO1_0 |
| GPIO1_1 | GPMC_AD1 | 0x804 | Mode 0: GPMC_AD1, Mode 1: MMC1_DAT1, Mode 7: GPIO1_1 |
| GPIO1_2 | GPMC_AD2 | 0x808 | Mode 0: GPMC_AD2, Mode 1: MMC1_DAT2, Mode 7: GPIO1_2 |
| GPIO1_3 | GPMC_AD3 | 0x80C | Mode 0: GPMC_AD3, Mode 1: MMC1_DAT3, Mode 7: GPIO1_3 |
| GPIO1_4 | GPMC_AD4 | 0x810 | Mode 0: GPMC_AD4, Mode 1: MMC1_DAT4, Mode 7: GPIO1_4 |
| GPIO1_5 | GPMC_AD5 | 0x814 | Mode 0: GPMC_AD5, Mode 1: MMC1_DAT5, Mode 7: GPIO1_5 |
| GPIO1_6 | GPMC_AD6 | 0x818 | Mode 0: GPMC_AD6, Mode 1: MMC1_DAT6, Mode 7: GPIO1_6 |
| GPIO1_7 | GPMC_AD7 | 0x81C | Mode 0: GPMC_AD7, Mode 1: MMC1_DAT7, Mode 7: GPIO1_7 |
| GPIO1_12 | GPMC_AD12 | 0x830 | Mode 0: GPMC_AD12, Mode 2: LCD_DATA23, Mode 7: GPIO1_12 |
| GPIO1_13 | GPMC_AD13 | 0x834 | Mode 0: GPMC_AD13, Mode 2: LCD_DATA22, Mode 7: GPIO1_13 |
| GPIO1_14 | GPMC_AD14 | 0x838 | Mode 0: GPMC_AD14, Mode 2: LCD_DATA21, Mode 7: GPIO1_14 |
| GPIO1_15 | GPMC_AD15 | 0x83C | Mode 0: GPMC_AD15, Mode 2: LCD_DATA20, Mode 7: GPIO1_15 |
| GPIO1_16 | GPMC_A0 | 0x840 | Mode 0: GPMC_A0, Mode 1: GMII2_TXEN, Mode 7: GPIO1_16 |
| GPIO1_17 | GPMC_A1 | 0x844 | Mode 0: GPMC_A1, Mode 1: GMII2_RXDV, Mode 7: GPIO1_17 |
| GPIO1_28 | GPMC_BEN1 | 0x878 | Mode 0: GPMC_BEN1, Mode 1: GMII2_COL, Mode 7: GPIO1_28 |
| GPIO1_29 | GPMC_CSN0 | 0x87C | Mode 0: GPMC_CSN0, Mode 7: GPIO1_29 |
| GPIO1_30 | GPMC_CSN1 | 0x880 | Mode 0: GPMC_CSN1, Mode 1: GMII2_CRS, Mode 7: GPIO1_30 |
| GPIO1_31 | GPMC_CSN2 | 0x884 | Mode 0: GPMC_CSN2, Mode 1: GMII2_RXER, Mode 7: GPIO1_31 |

### UART Pin Multiplexing Options (AM335x Family)

#### UART0 (Debug/Console) - ✅ AM3358 Available
| Signal | Pin Name | Control Offset | Modes | AM3358 Status |
|--------|----------|----------------|-------|---------------|
| UART0_RXD | UART0_RXD | 0x970 | Mode 0: UART0_RXD | ✅ Available |
| UART0_TXD | UART0_TXD | 0x974 | Mode 0: UART0_TXD | ✅ Available |

#### UART1 (Full Modem) - ✅ AM3358 Available
| Signal | Pin Name | Control Offset | Modes | AM3358 Status |
|--------|----------|----------------|-------|---------------|
| UART1_RXD | UART1_RXD | 0x980 | Mode 0: UART1_RXD | ✅ Available |
| UART1_TXD | UART1_TXD | 0x984 | Mode 0: UART1_TXD | ✅ Available |
| UART1_CTS | UART1_CTSN | 0x978 | Mode 0: UART1_CTSN | ✅ Available |
| UART1_RTS | UART1_RTSN | 0x97C | Mode 0: UART1_RTSN | ✅ Available |
| UART1_DTR | UART1_DTR | 0x968 | Mode 0: UART1_DTR | ✅ Available |
| UART1_DSR | UART1_DSR | 0x96C | Mode 0: UART1_DSR | ✅ Available |
| UART1_DCD | UART1_DCD | 0x964 | Mode 0: UART1_DCD | ✅ Available |
| UART1_RI | UART1_RI | 0x960 | Mode 0: UART1_RI | ✅ Available |

#### UART2 (General Purpose) - ✅ AM3358 Available
| Signal | Pin Name | Control Offset | Modes | AM3358 Status |
|--------|----------|----------------|-------|---------------|
| UART2_RXD | SPI0_SCLK | 0x950 | Mode 1: UART2_RXD | ✅ Available |
| UART2_TXD | SPI0_D0 | 0x954 | Mode 1: UART2_TXD | ✅ Available |
| UART2_CTS | SPI0_D1 | 0x958 | Mode 1: UART2_CTS | ✅ Available |
| UART2_RTS | SPI0_CS0 | 0x95C | Mode 1: UART2_RTS | ✅ Available |

#### UART3 (Extended) - ✅ AM3358 Available
| Signal | Pin Name | Control Offset | Modes | AM3358 Status |
|--------|----------|----------------|-------|---------------|
| UART3_RXD | MII1_COL | 0x908 | Mode 3: UART3_RXD | ✅ Available (Mode 3) |
| UART3_TXD | MII1_CRS | 0x90C | Mode 3: UART3_TXD | ✅ Available (Mode 3) |
| UART3_CTS | MII1_RX_ER | 0x914 | Mode 3: UART3_CTS | ✅ Available (Mode 3) |
| UART3_RTS | MII1_TX_EN | 0x918 | Mode 3: UART3_RTS | ✅ Available (Mode 3) |

#### UART4 (Extended) - ✅ AM3358 Available
| Signal | Pin Name | Control Offset | Modes | AM3358 Status |
|--------|----------|----------------|-------|---------------|
| UART4_RXD | GPMC_WAIT0 | 0x870 | Mode 6: UART4_RXD | ✅ Available (Mode 6) |
| UART4_TXD | GPMC_WPN | 0x874 | Mode 6: UART4_TXD | ✅ Available (Mode 6) |
| UART4_CTS | GPMC_BEN1 | 0x878 | Mode 6: UART4_CTS | ✅ Available (Mode 6) |
| UART4_RTS | GPMC_CSN0 | 0x87C | Mode 6: UART4_RTS | ✅ Available (Mode 6) |

#### UART5 (Extended) - ✅ AM3358 Available
| Signal | Pin Name | Control Offset | Modes | AM3358 Status |
|--------|----------|----------------|-------|---------------|
| UART5_RXD | LCD_DATA9 | 0x8CC | Mode 4: UART5_RXD | ✅ Available (Mode 4) |
| UART5_TXD | LCD_DATA8 | 0x8C8 | Mode 4: UART5_TXD | ✅ Available (Mode 4) |
| UART5_CTS | LCD_DATA15 | 0x8DC | Mode 4: UART5_CTS | ✅ Available (Mode 4) |
| UART5_RTS | LCD_DATA14 | 0x8D8 | Mode 4: UART5_RTS | ✅ Available (Mode 4) |

### GPIO Bank 2 Pins
GPIO2 pins support various communication protocols:

| GPIO | Pin Name | Control Offset | Alt Functions |
|------|----------|----------------|---------------|
| GPIO2_1 | GPMC_CLK | 0x88C | Mode 0: GPMC_CLK, Mode 7: GPIO2_1 |
| GPIO2_6 | GPMC_CSN3 | 0x888 | Mode 0: GPMC_CSN3, Mode 7: GPIO2_6 |
| GPIO2_7 | GPMC_ADVN_ALE | 0x890 | Mode 0: GPMC_ADVN_ALE, Mode 7: GPIO2_7 |
| GPIO2_8 | GPMC_OEN_REN | 0x894 | Mode 0: GPMC_OEN_REN, Mode 7: GPIO2_8 |
| GPIO2_9 | GPMC_WEN | 0x898 | Mode 0: GPMC_WEN, Mode 7: GPIO2_9 |
| GPIO2_10 | GPMC_BEN0_CLE | 0x89C | Mode 0: GPMC_BEN0_CLE, Mode 7: GPIO2_10 |
| GPIO2_11 | LCD_DATA0 | 0x8A0 | Mode 0: LCD_DATA0, Mode 1: GPMC_A16, Mode 7: GPIO2_11 |
| GPIO2_12 | LCD_DATA1 | 0x8A4 | Mode 0: LCD_DATA1, Mode 1: GPMC_A17, Mode 7: GPIO2_12 |
| GPIO2_13 | LCD_DATA2 | 0x8A8 | Mode 0: LCD_DATA2, Mode 1: GPMC_A18, Mode 7: GPIO2_13 |
| GPIO2_22 | LCD_VSYNC | 0x8E0 | Mode 0: LCD_VSYNC, Mode 7: GPIO2_22 |
| GPIO2_23 | LCD_HSYNC | 0x8E4 | Mode 0: LCD_HSYNC, Mode 7: GPIO2_23 |
| GPIO2_24 | LCD_PCLK | 0x8E8 | Mode 0: LCD_PCLK, Mode 7: GPIO2_24 |
| GPIO2_25 | LCD_AC_BIAS_EN | 0x8EC | Mode 0: LCD_AC_BIAS_EN, Mode 7: GPIO2_25 |

### GPIO Bank 3 Pins  
GPIO3 pins often support specialized functions:

| GPIO | Pin Name | Control Offset | Alt Functions |
|------|----------|----------------|---------------|
| GPIO3_13 | MII1_TXD3 | 0x91C | Mode 0: MII1_TXD3, Mode 1: DCAN0_TX, Mode 7: GPIO3_13 |
| GPIO3_14 | MII1_TXD2 | 0x920 | Mode 0: MII1_TXD2, Mode 1: DCAN0_RX, Mode 7: GPIO3_14 |
| GPIO3_15 | MII1_TXCLK | 0x924 | Mode 0: MII1_TXCLK, Mode 1: UART2_RXD, Mode 7: GPIO3_15 |
| GPIO3_16 | MII1_RXCLK | 0x928 | Mode 0: MII1_RXCLK, Mode 1: UART2_TXD, Mode 7: GPIO3_16 |
| GPIO3_17 | MII1_RXDV | 0x92C | Mode 0: MII1_RXDV, Mode 1: UART3_RXD, Mode 7: GPIO3_17 |
| GPIO3_18 | MII1_TXD1 | 0x930 | Mode 0: MII1_TXD1, Mode 1: UART3_TXD, Mode 7: GPIO3_18 |
| GPIO3_19 | MII1_TXD0 | 0x934 | Mode 0: MII1_TXD0, Mode 1: UART4_RXD, Mode 7: GPIO3_19 |
| GPIO3_20 | MII1_TXEN | 0x938 | Mode 0: MII1_TXEN, Mode 1: UART4_TXD, Mode 7: GPIO3_20 |
| GPIO3_21 | MII1_RXER | 0x93C | Mode 0: MII1_RXER, Mode 1: UART5_TXD, Mode 7: GPIO3_21 |

## Advanced Pin Configuration

### Pull Resistor Options
- **Pull-up**: Used for inputs requiring default high state (buttons, open-drain signals)
- **Pull-down**: Used for inputs requiring default low state
- **No pull**: Used for analog inputs or when external pull resistors are provided

### Slew Rate Control
- **Fast slew rate**: Default setting for most digital signals
- **Slow slew rate**: Reduces EMI, used for I2C, low-speed GPIO, and signals with long traces

### Runtime Function Switching
Pins can be reconfigured at runtime to switch between different peripheral functions (GPMC ↔ LCD ↔ GPIO), enabling flexible hardware resource utilization.

## Pin Configuration Framework

For systematic pin configuration, a structured approach is recommended using configuration structures and utility functions. This enables:
- Consistent pin setup across the application
- Easy maintenance and updates
- Reduced code duplication
- Clear documentation of pin assignments

## Pin Multiplexing Best Practices

### Design Considerations
1. **Electrical Compatibility**: Ensure voltage levels and drive strength match requirements
2. **Signal Integrity**: Use appropriate slew rates for signal frequency and trace length
3. **Power Consumption**: Enable pull resistors only when necessary
4. **EMI Reduction**: Use slow slew rate for non-critical signals
5. **Pin Conflicts**: Verify no conflicts exist between selected functions

### Common Pin Assignments
Standard peripheral pin assignments follow established patterns:
- **UART pins**: RXD with pull-up, TXD as output
- **I2C pins**: Both SDA/SCL with pull-ups and slow slew rate
- **SPI pins**: SCLK/MOSI as outputs, MISO as input with pull-up
- **MMC pins**: Data and command pins with pull-ups, clock as output

### Runtime Pin Function Switching
Pins can be dynamically reconfigured by modifying the MUXMODE bits while preserving other configuration settings. This enables applications to share pins between different peripherals based on operational mode.

## Debugging Pin Configuration

### Pin State Verification
Pin configuration can be verified by reading the Control Module registers and decoding the bit fields. This helps debug pin multiplexing issues and verify correct setup.

## Integration with GPIO System

The pin multiplexing system directly integrates with the GPIO modules:

1. **Pin Configuration**: Set Control Module registers to select GPIO mode (mode 7)
2. **GPIO Setup**: Configure GPIO registers for direction, interrupts, etc.
3. **Function Coordination**: Ensure pin mux and GPIO settings are compatible
4. **Clock Management**: Enable appropriate GPIO bank clocks

Complete integration examples are available in the implementation guides.

## Related Documentation
- [GPIO System Overview](../peripherals/gpio/gpio-overview.md) - High-level GPIO architecture
- [GPIO Register Reference](../registers/gpio-registers.md) - Detailed GPIO register descriptions
- [Control Module Registers](../registers/control-registers.md) - Complete Control Module register map
- [Clock Management](../clocking/peripheral-clock-management.md) - Peripheral clock configuration
- [Hardware Design Guide](../hardware/pcb-design-guidelines.md) - PCB layout considerations for pin multiplexing