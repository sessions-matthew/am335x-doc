# Peripheral Clock Management - AM3358

## Overview

This document provides detailed information on managing clocks for individual peripherals in the AM3358. Each peripheral requires proper clock configuration for functionality, and many support multiple clock sources for different operating modes.

## Clock Management Principles

### 1. Clock Enable/Disable Sequence
All peripherals follow a standard clock management sequence:

1. **Enable Interface Clock**: Allows register access
2. **Configure Clock Source**: Select appropriate functional clock
3. **Enable Functional Clock**: Provides operational timing
4. **Verify Clock Active**: Check status before operation
5. **Disable Clocks**: Gate clocks when not needed for power saving

### 2. Clock Dependencies
- **Interface Clock**: Required for register access (typically L4 interconnect clock)
- **Functional Clock**: Required for peripheral operation (varies by module)
- **Optional Clocks**: Some modules have additional clock inputs (e.g., external references)

## Peripheral Clock Configurations

### UART Clock Management

#### Clock Sources
- **Functional Clock**: 48MHz (from PER DPLL)
- **Interface Clock**: L4_WKUP (24MHz) or L4LS (100MHz)

#### Clock Enable Process
1. **Module Enable**: Set MODULEMODE to enabled (0x2) in CLKCTRL register
2. **Status Wait**: Wait for IDLEST field to indicate functional state
3. **Ready State**: Module is now clocked and accessible for configuration

#### Baud Rate Calculations
UART baud rate is derived from the 48MHz functional clock using:

**Baud Rate = Functional Clock ÷ (16 × Divisor)**

For 115200 baud: Divisor = 48MHz ÷ (16 × 115200) = 26 (actual: 115384 baud)

### Timer Clock Management

#### Clock Sources Available
| Source | Frequency | Domain | Usage |
|--------|-----------|--------|-------|
| 32K_FCLK | 32.768kHz | WKUP | Low-power timing |
| SYS_CLK | 24MHz | All | System timing |
| TCLKIN | External | All | External reference |
| L4LS_GCLK | 100MHz | PER | High-resolution timing |

#### Timer Types
- **DMTIMER**: Standard timer with multiple clock source options
- **DMTIMER_1MS**: Specialized 1ms timer optimized for 32kHz operation

#### Clock Selection Process
1. **Module Enable**: Enable timer module in PRCM
2. **Clock Source Select**: Configure CLKSEL register for desired source
3. **Verification**: Confirm clock source is active and stable

### MMC/SD Clock Management

#### Clock Requirements
- **Interface Clock**: L4LS_GCLK (100MHz)
- **Functional Clock**: 96MHz (from PER DPLL)
- **Card Clock**: Derived from functional clock (400kHz - 50MHz)

#### Operating Modes
| Mode | Max Card Clock | Use Case |
|------|---------------|----------|
| Identification | 400kHz | Card detection/initialization |
| Default Speed | 25MHz | Standard transfer mode |
| High Speed | 50MHz | Enhanced performance mode |

#### Clock Configuration Process
1. **Module Enable**: Enable MMC module clocks
2. **Source Verification**: Confirm 96MHz functional clock availability
3. **Card Clock Setup**: Configure internal dividers for target card frequency

### GPIO Clock Management

#### Clock Sources
- **Interface Clock**: L4_WKUP (24MHz) or L4LS (100MHz)
- **Debounce Clock**: 32kHz (from CLKDIV32K)

#### Clock Domains
| GPIO Bank | Clock Domain | Interface Clock | Always-On |
|-----------|--------------|----------------|-----------|
| GPIO0 | WKUP | L4_WKUP | Yes |
| GPIO1 | PER | L4LS | No |
| GPIO2 | PER | L4LS | No |
| GPIO3 | PER | L4LS | No |

#### Configuration Notes
- **GPIO0**: Always-on domain, never gated
- **GPIO1-3**: Can be gated for power savings when unused
- **Debounce**: All banks share 32kHz debounce clock

### I2C Clock Management

#### Clock Sources
- **Interface Clock**: L4_WKUP (24MHz) or L4LS (100MHz)  
- **Functional Clock**: 96MHz (from CORE DPLL)

#### I2C Speed Modes
| Mode | SCL Frequency | Functional Clock Usage |
|------|--------------|----------------------|
| Standard | 100kHz | Internal dividers from 96MHz |
| Fast | 400kHz | Internal dividers from 96MHz |
| Fast Plus | 1MHz | Internal dividers from 96MHz |

#### Clock Configuration
1. **Module Enable**: Enable I2C module in appropriate domain
2. **Functional Clock**: 96MHz automatically provided from CORE DPLL
3. **SCL Generation**: Configure I2C internal prescaler and dividers

### SPI Clock Management

#### Clock Sources
- **Interface Clock**: L4LS_GCLK (100MHz)
- **Functional Clock**: 48MHz (from PER DPLL)

#### SPI Operating Modes
| Mode | Max SCLK | Functional Clock Division |
|------|----------|--------------------------|
| Master | 24MHz | 48MHz ÷ 2 (minimum) |
| Slave | External | Not applicable |

#### Clock Configuration Steps
1. **Module Enable**: Enable SPI module clock
2. **Master Mode**: Configure SCLK dividers from 48MHz functional clock
3. **Slave Mode**: SCLK provided externally, no internal generation

### CAN Clock Management

#### Clock Sources
- **Interface Clock**: L4LS_GCLK (100MHz)
- **Functional Clock**: 24MHz (from SYS_CLK)

#### CAN Bit Timing
CAN bit rate calculation using 24MHz functional clock:
- **Bit Rate** = Functional Clock ÷ (Prescaler × Time Quanta)
- **Standard Rates**: 125kbps, 250kbps, 500kbps, 1Mbps

### ADC/TSC Clock Management

#### Clock Sources
- **Interface Clock**: L4_WKUP (24MHz)
- **Functional Clock**: 24MHz (from M_OSC)

#### ADC Timing Requirements
- **Conversion Clock**: Must not exceed 24MHz for accurate conversions
- **Sample Rate**: Determined by ADC configuration and functional clock
- **Touch Screen**: Shares same clock domain as ADC

### Ethernet Clock Management

#### Clock Sources
- **Interface Clock**: L4LS_GCLK (100MHz)
- **Functional Clock**: 125MHz (from GMII_SEL)
- **PHY Clocks**: 25MHz, 50MHz, 125MHz (depending on speed)

#### Ethernet Speeds
| Speed | PHY Clock | Interface |
|-------|-----------|-----------|
| 10Mbps | 25MHz | MII/RMII |
| 100Mbps | 25MHz/50MHz | MII/RMII |
| 1Gbps | 125MHz | GMII/RGMII |

## Power Management Integration

### Clock Gating
Peripheral clocks can be automatically gated when:
- **Module Idle**: No active transactions
- **Software Control**: Explicitly disabled via CLKCTRL
- **Domain Sleep**: Clock domain enters sleep state

### Dynamic Clock Scaling
Some peripherals support dynamic frequency changes:
- **Timer**: Can switch clock sources at runtime
- **MMC**: Card clock can be scaled based on transfer requirements
- **SPI**: Master mode can adjust SCLK frequency

### Wake-up Considerations
- **WKUP Domain**: Always maintains clock capability for wake events
- **PER Domain**: Clocks may be gated, requiring wake-up sequence
- **Critical Peripherals**: Some maintain clocks even in low-power modes

## Implementation Guidelines

### Best Practices
1. **Enable Order**: Enable interface clocks before functional clocks
2. **Disable Order**: Disable functional clocks before interface clocks
3. **Status Verification**: Always check IDLEST before accessing peripherals
4. **Power Optimization**: Disable unused peripheral clocks
5. **Clock Conflicts**: Avoid conflicting clock source selections

### Common Configurations
- **Debug System**: UART0, GPIO0, Timer0 (WKUP domain)
- **Communication Hub**: UART1, I2C1, SPI0 (PER domain)
- **Multimedia**: MMC0, LCD, Audio (PER domain)
- **Industrial**: CAN, ADC, PWM timers (Mixed domains)

### Troubleshooting
- **Clock Not Active**: Check DPLL lock status and CLKCTRL settings
- **Peripheral Timeout**: Verify functional clock is enabled and stable
- **Power Issues**: Review clock gating configuration and domain states
- **Performance Problems**: Check for clock frequency limitations

## Implementation Examples

For complete programming examples and clock configuration code, see:
- [Clock System Implementation Guide](../implementation/clock-usage.md) - Complete DPLL and peripheral clock programming examples

## Related Documentation

- [Clock System Overview](./clock-system-overview.md) - Overall clock architecture
- [PRCM Registers](../registers/prcm-registers.md) - Complete register reference
- [Power Management](../power-management/power-system-overview.md) - Power and clock integration
- [Peripheral Guides](../peripherals/) - Individual peripheral documentation