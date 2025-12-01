# Clock Management System - AM3358

## Overview

The AM3358 features a comprehensive clock management system based on the Power, Reset, and Clock Management (PRCM) module. This system provides hierarchical clock generation, distribution, and control for all processor subsystems and peripherals.

## Architecture Components

### 1. Digital Phase-Locked Loops (DPLLs)
The AM3358 integrates **five DPLLs** that generate all interface and functional clocks:

| DPLL | Purpose | Output Frequency Range | Key Consumers |
|------|---------|----------------------|---------------|
| **MPU DPLL** | ARM Cortex-A8 processor | 300MHz - 1GHz | CPU core, L1/L2 caches |
| **CORE DPLL** | Core infrastructure | 200MHz - 1GHz | Interconnects, EMIF, GPMC |
| **PER DPLL** | Peripheral clocking | 96MHz - 960MHz | USB, UART, I2C, SPI, MMC |
| **DDR DPLL** | Memory controller | 266MHz - 533MHz | EMIF (DDR2/DDR3 memory) |
| **DISP DPLL** | Display subsystem | 48MHz - 270MHz | LCD controller, pixel clock |

### 2. Clock Managers
The PRCM contains dedicated clock managers organized by power domain:

- **CM_WKUP**: Always-on domain clock management
- **CM_PER**: Peripheral domain clock management  
- **CM_MPU**: MPU subsystem clock management
- **CM_DPLL**: DPLL configuration and control
- **CM_DEVICE**: Device-level clock control
- **CM_RTC**: RTC domain clock management
- **CM_GFX**: Graphics accelerator clocking
- **CM_CEFUSE**: eFuse controller clocking

### 3. Clock Domains
Clock domains group modules sharing common clock sources and management policies:

#### WKUP Domain (Always-On)
- **Base Address**: 0x44E04000
- **Key Modules**: Timer0, Timer1, UART0, I2C0, ADC_TSC, GPIO0
- **Characteristics**: Remains active during deep sleep modes
- **Clock Sources**: 24MHz system clock, 32kHz RTC clock

#### L4PER Domain (Low-Speed Peripherals)
- **Clock Manager**: CM_PER
- **Key Modules**: UART1-5, I2C1-2, SPI0-1, Timer2-7, GPIO1-3
- **Clock Sources**: PER DPLL derivatives (48MHz, 96MHz)
- **Power Management**: Can be gated during idle

#### L3/L4 Interconnect Domain
- **Clock Sources**: CORE DPLL (200MHz typical)
- **Purpose**: System interconnect and memory interfaces
- **Critical**: Cannot be gated while system is active

#### MPU Domain
- **Clock Manager**: CM_MPU
- **Primary Module**: ARM Cortex-A8 processor
- **Clock Sources**: MPU DPLL (300MHz-1GHz)
- **Dynamic Scaling**: Supports DVFS (Dynamic Voltage/Frequency Scaling)

## Clock Generation Hierarchy

```
External Clocks
├── 24MHz System Clock (OSC0)
├── 32.768kHz RTC Clock (OSC1)
└── USB 48MHz Reference

DPLLs (Internal Generation)
├── MPU DPLL → MPU_CLK (275-1000MHz)
├── CORE DPLL → CORE_CLKOUTM4/M5/M6 (200MHz)
├── PER DPLL → PER_CLKOUTM2 (192MHz, 96MHz, 48MHz)
├── DDR DPLL → DDR_CLKOUTM2 (266-533MHz)
└── DISP DPLL → DISP_CLKOUTM2 (Pixel clocks)

System Clocks
├── L3_GCLK (CORE DPLL / 2) → 200MHz
├── L4LS_GCLK (PER DPLL / 2) → 100MHz  
├── L4_WKUP_GCLK (24MHz) → Always-on peripherals
└── SYSCLKOUT (Configurable) → External clock output
```

## Clock Control Registers

### CLKCTRL Register Format
Each peripheral has a dedicated CLKCTRL register controlling:

| Bits | Field | Description |
|------|-------|-------------|
| 31:18 | RESERVED | - |
| 17:16 | IDLEST | Module idle status (read-only) |
| 15:2 | RESERVED | - |
| 1:0 | MODULEMODE | Module clock enable control |

**MODULEMODE Values**:
- `00`: Module disabled (clocks gated)
- `01`: Reserved  
- `10`: Module enabled (auto-gated when idle)
- `11`: Module enabled (always clocked)

### CLKSTCTRL Register Format
Clock domain state control registers:

| Bits | Field | Description |
|------|-------|-------------|
| 31:9 | RESERVED | - |
| 8 | CLKACTIVITY | Clock activity status |
| 7:2 | RESERVED | - |
| 1:0 | CLKTRCTRL | Clock transition control |

**CLKTRCTRL Values**:
- `00`: NO_SLEEP (prevent domain idle)
- `01`: SW_SLEEP (software-controlled sleep)
- `10`: SW_WKUP (software-controlled wakeup)
- `11`: HW_AUTO (hardware automatic control)

## Clock Frequencies

### Default System Clock Frequencies
| Clock | Default Frequency | Range | Purpose |
|-------|------------------|--------|---------|
| SYS_CLK | 24 MHz | Fixed | System reference |
| MPU_CLK | 720 MHz | 275-1000 MHz | ARM Cortex-A8 |
| L3_CLK | 200 MHz | 100-200 MHz | Interconnect |
| L4LS_CLK | 100 MHz | 48-100 MHz | Low-speed peripherals |
| L4_WKUP_CLK | 24 MHz | Fixed | Wakeup domain |
| UART_CLK | 48 MHz | 24-192 MHz | UART functional clock |
| MMC_CLK | 96 MHz | 24-192 MHz | MMC/SD interface |
| SPI_CLK | 48 MHz | 24-192 MHz | SPI interface |

### DPLL Output Frequencies
| DPLL | M Value | N Value | Output Frequency | Usage |
|------|---------|---------|------------------|-------|
| MPU | 720 | 23 | 720 MHz | Default MPU frequency |
| CORE | 1000 | 23 | 1000 MHz | Core infrastructure (÷5 = 200MHz) |
| PER | 960 | 23 | 960 MHz | Peripherals (÷10 = 96MHz) |
| DDR | 400 | 23 | 400 MHz | DDR3-800 (÷2 = 400MHz) |
| DISP | 270 | 23 | 270 MHz | Display pixel clocks |

*Note: All calculations assume 24MHz reference clock*

## Power Management Integration

### Clock Gating Hierarchy
1. **Module Level**: Individual peripheral clock control via CLKCTRL
2. **Domain Level**: Clock domain gating via CLKSTCTRL  
3. **DPLL Level**: PLL bypass/shutdown for maximum power savings

### Dynamic Frequency Scaling
The clock management system supports runtime frequency changes through DPLL reconfiguration:

1. **Bypass Mode**: Put DPLL in bypass to change parameters
2. **Parameter Update**: Configure new M/N multiplier/divider values  
3. **Lock Mode**: Return DPLL to lock mode at new frequency
4. **Lock Wait**: Wait for DPLL to achieve lock at new frequency

This enables power management through frequency scaling based on processing requirements.

### Sleep Mode Clock Behavior
| Mode | Active Domains | Clock Sources | Wake Sources |
|------|---------------|---------------|--------------|
| **Active** | All | All DPLLs active | N/A |
| **Idle** | WKUP, Active modules | DPLLs active | Any interrupt |
| **Standby** | WKUP only | MPU/CORE DPLLs off | WKUP interrupts |
| **Deep Sleep** | RTC only | All DPLLs off | RTC alarm, external |

## Programming Interface

### Clock Enable Sequence
Peripheral clocks are enabled through a standard sequence:

1. **Module Enable**: Set MODULEMODE field to enabled (0x2)
2. **Status Check**: Wait for IDLEST field to indicate functional state (0x0)
3. **Access Ready**: Module is now clocked and accessible for configuration

### Clock Frequency Calculation  
DPLL output frequencies are calculated using the formula:

**DPLL_FREQ = (REF_FREQ × M) ÷ (N + 1)**

Where:
- REF_FREQ = Input reference frequency (typically 24 MHz)
- M = Multiplier value (8-2047)
- N = Divider value (0-127)

## Implementation Examples

For complete programming examples and clock configuration code, see:
- [Clock System Implementation](../implementation/clock-usage.md) - DPLL configuration and peripheral clock control

## Clock Domain Base Addresses

| Domain | Base Address | Purpose |
|--------|-------------|---------|
| CM_PER | 0x48000000 | Peripheral domain clock management |
| CM_WKUP | 0x44E04000 | Wakeup domain clock management |
| CM_DPLL | 0x44E06000 | DPLL configuration and control |
| CM_MPU | 0x44E10000 | MPU subsystem clock management |
| CM_DEVICE | 0x44E14000 | Device-level clock control |
| CM_RTC | 0x44E18000 | RTC domain clock management |
| CM_GFX | 0x44E1C000 | Graphics clock management |
| CM_CEFUSE | 0x44E20000 | eFuse controller clocking |

## Related Documentation
- [PRCM Registers](../registers/prcm-registers.md) - Complete register reference
- [Power Management](../power/power-management.md) - Power domain control
- [Timer Clocking](../peripherals/timers/timer-system-overview.md) - Timer clock sources
- [Peripheral Clocking](./peripheral-clock-management.md) - Individual peripheral setup