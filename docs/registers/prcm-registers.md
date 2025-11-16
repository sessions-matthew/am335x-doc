# PRCM Register Reference - AM3358

## Overview

This document provides comprehensive register-level documentation for the Power, Reset, and Clock Management (PRCM) module in the AM3358. The PRCM controls all clock generation, distribution, power management, and reset functionality for the entire system.

## PRCM Module Organization

The PRCM is organized into several clock manager domains and power manager domains that control all aspects of power, reset, and clock management for the AM3358 system.

### Power Domains
The AM3358 contains the following power domains:
- **WKUP**: Always-on domain (RTC, some timers, GPIO0)
- **PER**: Peripheral domain (most peripherals)
- **MPU**: ARM Cortex-A8 processor domain
- **GFX**: Graphics accelerator domain
- **RTC**: Real-time clock domain
- **CEFUSE**: eFuse controller domain

### Clock Manager Base Addresses
| Domain | Base Address | Purpose |
|--------|-------------|---------|
| **CM_PER** | 0x48000000 | Peripheral domain clock management |
| **CM_WKUP** | 0x44E04000 | Wakeup domain clock management |  
| **CM_DPLL** | 0x44E06000 | DPLL configuration and control |
| **CM_MPU** | 0x44E10000 | MPU subsystem clock management |
| **CM_DEVICE** | 0x44E14000 | Device-level clock control |
| **CM_RTC** | 0x44E18000 | RTC domain clock management |
| **CM_GFX** | 0x44E1C000 | Graphics clock management |
| **CM_CEFUSE** | 0x44E20000 | eFuse controller clocking |

### Power Manager Base Addresses  
| Domain | Base Address | Purpose |
|--------|-------------|---------|
| **PRM_PER** | 0x44E00C00 | Peripheral domain power management |
| **PRM_WKUP** | 0x44E00D00 | Wakeup domain power management |
| **PRM_MPU** | 0x44E00E00 | MPU power management |
| **PRM_DEVICE** | 0x44E00F00 | Device power management |
| **PRM_RTC** | 0x44E00E04 | RTC power management |
| **PRM_GFX** | 0x44E00F04 | Graphics power management |
| **PRM_CEFUSE** | 0x44E00F08 | eFuse power management |

## Clock Control Registers (CLKCTRL)

### Standard CLKCTRL Register Format
All peripheral CLKCTRL registers follow this format:

| Bits | Field | Access | Reset | Description |
|------|-------|--------|-------|-------------|
| 31:18 | RESERVED | R | 0x0 | Reserved |
| 17:16 | IDLEST | R | 0x3 | Module idle status |
| 15:2 | RESERVED | R | 0x0 | Reserved |
| 1:0 | MODULEMODE | RW | 0x0 | Module clock control |

#### IDLEST Field Values
- **00**: Functional (module is active)
- **01**: Transition (module transitioning)  
- **10**: Idle (module is idle)
- **11**: Disabled (module is disabled)

#### MODULEMODE Field Values
- **00**: Module disabled (clocks gated)
- **01**: Reserved
- **10**: Module enabled (automatic clock gating)
- **11**: Module enabled (no automatic clock gating)

### CM_PER Domain CLKCTRL Registers

| Offset | Register | Purpose |
|--------|----------|---------|
| 0x00 | CM_PER_L4LS_CLKSTCTRL | L4LS clock domain state control |
| 0x04 | CM_PER_L3S_CLKSTCTRL | L3S clock domain state control |
| 0x0C | CM_PER_L3_CLKSTCTRL | L3 clock domain state control |
| 0x14 | CM_PER_CPGMAC0_CLKCTRL | Ethernet MAC clock control |
| 0x18 | CM_PER_LCDC_CLKCTRL | LCD controller clock control |
| 0x1C | CM_PER_USB0_CLKCTRL | USB0 clock control |
| 0x20 | CM_PER_TPTC0_CLKCTRL | TPTC0 clock control |
| 0x28 | CM_PER_EMIF_CLKCTRL | EMIF clock control |
| 0x2C | CM_PER_OCMCRAM_CLKCTRL | OCMC RAM clock control |
| 0x30 | CM_PER_GPMC_CLKCTRL | GPMC clock control |
| 0x34 | CM_PER_MCASP0_CLKCTRL | McASP0 clock control |
| 0x38 | CM_PER_UART5_CLKCTRL | UART5 clock control |
| 0x3C | CM_PER_MMC0_CLKCTRL | MMC0 clock control |
| 0x40 | CM_PER_ELM_CLKCTRL | ELM clock control |
| 0x44 | CM_PER_I2C2_CLKCTRL | I2C2 clock control |
| 0x48 | CM_PER_I2C1_CLKCTRL | I2C1 clock control |
| 0x4C | CM_PER_SPI0_CLKCTRL | SPI0 clock control |
| 0x50 | CM_PER_SPI1_CLKCTRL | SPI1 clock control |
| 0x54 | CM_PER_L4LS_CLKCTRL | L4LS interconnect clock control |
| 0x58 | CM_PER_MCASP1_CLKCTRL | McASP1 clock control |
| 0x5C | CM_PER_UART1_CLKCTRL | UART1 clock control |
| 0x60 | CM_PER_UART2_CLKCTRL | UART2 clock control |
| 0x64 | CM_PER_UART3_CLKCTRL | UART3 clock control |
| 0x68 | CM_PER_UART4_CLKCTRL | UART4 clock control |
| 0x6C | CM_PER_TIMER7_CLKCTRL | Timer7 clock control |
| 0x70 | CM_PER_TIMER2_CLKCTRL | Timer2 clock control |
| 0x74 | CM_PER_TIMER3_CLKCTRL | Timer3 clock control |
| 0x78 | CM_PER_TIMER4_CLKCTRL | Timer4 clock control |
| 0x7C | CM_PER_GPIO1_CLKCTRL | GPIO1 clock control |
| 0x80 | CM_PER_GPIO2_CLKCTRL | GPIO2 clock control |
| 0x84 | CM_PER_GPIO3_CLKCTRL | GPIO3 clock control |
| 0x88 | CM_PER_TPCC_CLKCTRL | TPCC clock control |
| 0x8C | CM_PER_DCAN0_CLKCTRL | DCAN0 clock control |
| 0x90 | CM_PER_DCAN1_CLKCTRL | DCAN1 clock control |
| 0x94 | CM_PER_EPWMSS1_CLKCTRL | PWMSS1 clock control |
| 0x98 | CM_PER_EMIF_FW_CLKCTRL | EMIF firewall clock control |
| 0x9C | CM_PER_EPWMSS0_CLKCTRL | PWMSS0 clock control |
| 0xA0 | CM_PER_EPWMSS2_CLKCTRL | PWMSS2 clock control |
| 0xA4 | CM_PER_L3_INSTR_CLKCTRL | L3 instrumentation clock control |
| 0xA8 | CM_PER_L3_CLKCTRL | L3 interconnect clock control |
| 0xAC | CM_PER_IEEE5000_CLKCTRL | IEEE1500 clock control |
| 0xB0 | CM_PER_PRUSS_CLKCTRL | PRU-ICSS clock control |
| 0xB4 | CM_PER_TIMER5_CLKCTRL | Timer5 clock control |
| 0xB8 | CM_PER_TIMER6_CLKCTRL | Timer6 clock control |
| 0xBC | CM_PER_MMC1_CLKCTRL | MMC1 clock control |
| 0xC0 | CM_PER_MMC2_CLKCTRL | MMC2 clock control |
| 0xC4 | CM_PER_TPTC1_CLKCTRL | TPTC1 clock control |
| 0xC8 | CM_PER_TPTC2_CLKCTRL | TPTC2 clock control |
| 0xCC | Reserved | Reserved |
| 0xD0 | CM_PER_SPINLOCK_CLKCTRL | Spinlock clock control |
| 0xD4 | CM_PER_MAILBOX0_CLKCTRL | Mailbox0 clock control |
| 0xE8 | CM_PER_L4HS_CLKCTRL | L4 High Speed clock control |
| 0xEC | CM_PER_L4FW_CLKCTRL | L4 Firewall clock control |
| 0xF0 | CM_PER_L3S_CLKCTRL | L3 Slow clock control |
| 0xF4 | CM_PER_GPMC_CLKCTRL | GPMC clock control |
| 0xA8 | CM_PER_L3_CLKCTRL | L3 interconnect clock control |
| 0xAC | CM_PER_IEEE5000_CLKCTRL | IEEE1500 clock control |
| 0xB0 | CM_PER_PRU_ICSS_CLKCTRL | PRU-ICSS clock control |
| 0xB4 | CM_PER_TIMER5_CLKCTRL | Timer5 clock control |
| 0xB8 | CM_PER_TIMER6_CLKCTRL | Timer6 clock control |
| 0xBC | CM_PER_MMC1_CLKCTRL | MMC1 clock control |
| 0xC0 | CM_PER_MMC2_CLKCTRL | MMC2 clock control |
| 0xC4 | CM_PER_TPTC1_CLKCTRL | TPTC1 clock control |
| 0xC8 | CM_PER_TPTC2_CLKCTRL | TPTC2 clock control |
| 0xCC | CM_PER_SPINLOCK_CLKCTRL | Spinlock clock control |
| 0xD0 | CM_PER_MAILBOX0_CLKCTRL | Mailbox0 clock control |
| 0xD8 | CM_PER_L4HS_CLKCTRL | L4HS interconnect clock control |
| 0xDC | CM_PER_TPTC3_CLKCTRL | TPTC3 clock control |
| 0xE4 | CM_PER_OCPWP_L3_CLKSTCTRL | OCP WP L3 clock domain state |
| 0xE8 | CM_PER_OCPWP_CLKCTRL | OCP watchpoint clock control |
| 0xEC | CM_PER_PRU_ICSS_CLKSTCTRL | PRU-ICSS clock domain state |
| 0xF0 | CM_PER_CPSW_CLKSTCTRL | CPSW clock domain state |
| 0xF4 | CM_PER_LCDC_CLKSTCTRL | LCDC clock domain state |
| 0xF8 | CM_PER_CLKDIV32K_CLKCTRL | 32K clock divider control |
| 0xFC | CM_PER_CLK_24MHZ_CLKSTCTRL | 24MHz clock domain state |

### CM_WKUP Domain CLKCTRL Registers

| Offset | Register | Purpose |
|--------|----------|---------|
| 0x00 | CM_WKUP_CLKSTCTRL | WKUP clock domain state control |
| 0x04 | CM_WKUP_CONTROL_CLKCTRL | Control module clock control |
| 0x08 | CM_WKUP_GPIO0_CLKCTRL | GPIO0 clock control |
| 0x0C | CM_WKUP_L4WKUP_CLKCTRL | L4WKUP interconnect clock control |
| 0x10 | CM_WKUP_TIMER0_CLKCTRL | Timer0 clock control |
| 0x14 | CM_WKUP_DEBUGSS_CLKCTRL | Debug subsystem clock control |
| 0x18 | CM_L3_AON_CLKSTCTRL | L3 AON clock domain state |
| 0x1C | CM_AUTOIDLE_DPLL_MPU | MPU DPLL auto-idle control |
| 0x20 | CM_IDLEST_DPLL_MPU | MPU DPLL idle status |
| 0x24 | CM_SSC_DELTAMSTEP_DPLL_MPU | MPU DPLL SSC delta M step |
| 0x28 | CM_SSC_MODFREQDIV_DPLL_MPU | MPU DPLL SSC modulation |
| 0x2C | CM_CLKSEL_DPLL_MPU | MPU DPLL configuration |
| 0x34 | CM_AUTOIDLE_DPLL_DDR | DDR DPLL auto-idle control |
| 0x38 | CM_IDLEST_DPLL_DDR | DDR DPLL idle status |
| 0x3C | CM_SSC_DELTAMSTEP_DPLL_DDR | DDR DPLL SSC delta M step |
| 0x40 | CM_SSC_MODFREQDIV_DPLL_DDR | DDR DPLL SSC modulation |
| 0x44 | CM_CLKSEL_DPLL_DDR | DDR DPLL configuration |
| 0x4C | CM_AUTOIDLE_DPLL_DISP | Display DPLL auto-idle |
| 0x50 | CM_IDLEST_DPLL_DISP | Display DPLL idle status |
| 0x54 | CM_SSC_DELTAMSTEP_DPLL_DISP | Display DPLL SSC delta M |
| 0x58 | CM_SSC_MODFREQDIV_DPLL_DISP | Display DPLL SSC modulation |
| 0x5C | CM_CLKSEL_DPLL_DISP | Display DPLL configuration |
| 0x64 | CM_AUTOIDLE_DPLL_CORE | Core DPLL auto-idle control |
| 0x68 | CM_IDLEST_DPLL_CORE | Core DPLL idle status |
| 0x6C | CM_SSC_DELTAMSTEP_DPLL_CORE | Core DPLL SSC delta M |
| 0x70 | CM_SSC_MODFREQDIV_DPLL_CORE | Core DPLL SSC modulation |
| 0x74 | CM_CLKSEL_DPLL_CORE | Core DPLL configuration |
| 0x7C | CM_AUTOIDLE_DPLL_PER | Peripheral DPLL auto-idle |
| 0x80 | CM_IDLEST_DPLL_PER | Peripheral DPLL idle status |
| 0x84 | CM_SSC_DELTAMSTEP_DPLL_PER | Peripheral DPLL SSC delta M |
| 0x88 | CM_SSC_MODFREQDIV_DPLL_PER | Peripheral DPLL SSC modulation |
| 0x8C | CM_CLKSEL_DPLL_PER | Peripheral DPLL configuration |
| 0x94 | CM_DIV_M4_DPLL_CORE | Core DPLL M4 divider |
| 0x98 | CM_DIV_M5_DPLL_CORE | Core DPLL M5 divider |
| 0x9C | CM_CLKMODE_DPLL_MPU | MPU DPLL mode control |
| 0xA0 | CM_CLKMODE_DPLL_PER | Peripheral DPLL mode control |
| 0xA4 | CM_CLKMODE_DPLL_CORE | Core DPLL mode control |
| 0xA8 | CM_CLKMODE_DPLL_DDR | DDR DPLL mode control |
| 0xAC | CM_CLKMODE_DPLL_DISP | Display DPLL mode control |
| 0xB0 | CM_CLKSEL_DPLL_PERIPH | Peripheral DPLL select |
| 0xB4 | CM_DIV_M2_DPLL_DDR | DDR DPLL M2 divider |
| 0xB8 | CM_DIV_M2_DPLL_DISP | Display DPLL M2 divider |
| 0xBC | CM_DIV_M2_DPLL_MPU | MPU DPLL M2 divider |
| 0xC0 | CM_DIV_M2_DPLL_PER | Peripheral DPLL M2 divider |
| 0xC4 | CM_WKUP_WKUP_M3_CLKCTRL | Wakeup M3 clock control |
| 0xC8 | CM_WKUP_UART0_CLKCTRL | UART0 clock control |
| 0xCC | CM_WKUP_I2C0_CLKCTRL | I2C0 clock control |
| 0xD0 | CM_WKUP_ADC_TSC_CLKCTRL | ADC/TSC clock control |
| 0xD4 | CM_WKUP_SMARTREFLEX0_CLKCTRL | SmartReflex0 clock control |
| 0xD8 | CM_WKUP_TIMER1_CLKCTRL | Timer1 clock control |
| 0xDC | CM_WKUP_SMARTREFLEX1_CLKCTRL | SmartReflex1 clock control |
| 0xE0 | CM_L4_WKUP_AON_CLKSTCTRL | L4 WKUP AON clock domain |
| 0xE4 | CM_WKUP_WDT1_CLKCTRL | Watchdog1 clock control |
| 0xE8 | CM_DIV_M6_DPLL_CORE | Core DPLL M6 divider |

## DPLL Configuration Registers

### DPLL Control Register (CM_CLKMODE_DPLL_*)
| Bits | Field | Description |
|------|-------|-------------|
| 31:4 | RESERVED | Reserved |
| 3:0 | DPLL_EN | DPLL enable mode |

**DPLL_EN Values**:
- **001**: MN bypass mode (low power)
- **100**: Lock mode (normal operation)
- **101**: Idle bypass mode  
- **110**: Fast relock mode
- **111**: Lock mode with SSC (spread spectrum)

### DPLL Configuration Register (CM_CLKSEL_DPLL_*)
| Bits | Field | Description |
|------|-------|-------------|
| 31:24 | RESERVED | Reserved |
| 23:8 | DPLL_MULT | DPLL multiplier (M) value |
| 7 | RESERVED | Reserved |
| 6:0 | DPLL_DIV | DPLL divider (N) value |

**Frequency Calculation**:
```
DPLL_OUTPUT = (REF_CLK * M) / (N + 1)
```

### DPLL Divider Registers (CM_DIV_M*_DPLL_*)
| Bits | Field | Description |
|------|-------|-------------|
| 31:5 | RESERVED | Reserved |
| 4:0 | DIVIDER | Output divider value |

## Clock State Control Registers (CLKSTCTRL)

### Clock State Control Register Format
| Bits | Field | Access | Description |
|------|-------|--------|-------------|
| 31:9 | RESERVED | R | Reserved |
| 8 | CLKACTIVITY | R | Clock activity status |
| 7:2 | RESERVED | R | Reserved |
| 1:0 | CLKTRCTRL | RW | Clock transition control |

**CLKTRCTRL Values**:
- **00**: NO_SLEEP (force clock domain active)
- **01**: SW_SLEEP (software-controlled sleep)
- **10**: SW_WKUP (software-controlled wakeup)  
- **11**: HW_AUTO (hardware automatic control)

## Programming Examples

### Enable Peripheral Clock
```c
// Enable UART1 clock in CM_PER domain
void enable_uart1_clock(void) {
    // Enable UART1 module clock
    CM_PER_UART1_CLKCTRL = 0x2;  // MODULEMODE = enabled
    
    // Wait for module to become functional
    while ((CM_PER_UART1_CLKCTRL & 0x30000) != 0x0) {
        // Poll IDLEST field until functional
    }
    
    // UART1 is now clocked and accessible
}
```

### Configure DPLL
```c
// Configure MPU DPLL for 720MHz output (24MHz reference)
void configure_mpu_dpll_720mhz(void) {
    // Put DPLL in bypass mode
    CM_CLKMODE_DPLL_MPU = 0x5;  // MN bypass mode
    
    // Wait for bypass mode
    while (!(CM_IDLEST_DPLL_MPU & 0x100));
    
    // Configure M=720, N=23 for 720MHz
    CM_CLKSEL_DPLL_MPU = (720 << 8) | 23;
    
    // Set M2 divider to 1 (no division)
    CM_DIV_M2_DPLL_MPU = 1;
    
    // Lock DPLL
    CM_CLKMODE_DPLL_MPU = 0x7;  // Lock mode
    
    // Wait for DPLL lock
    while (!(CM_IDLEST_DPLL_MPU & 0x1));
    
    // MPU DPLL now generates 720MHz
}
```

### Clock Domain Control
```c
// Enable automatic clock management for L4LS domain
void configure_l4ls_auto_clock(void) {
    // Set L4LS domain to hardware automatic control
    CM_PER_L4LS_CLKSTCTRL = 0x3;  // HW_AUTO mode
    
    // Individual peripherals can now auto-gate their clocks
}
```

## Clock Source Selection Registers

### Control Module Clock Selection (Base: 0x44E10000)
| Offset | Register | Purpose |
|--------|----------|---------|
| 0x508 | CLKSEL_TIMER2_CLK | Timer2 clock source selection |
| 0x50C | CLKSEL_TIMER3_CLK | Timer3 clock source selection |
| 0x510 | CLKSEL_TIMER4_CLK | Timer4 clock source selection |
| 0x518 | CLKSEL_TIMER5_CLK | Timer5 clock source selection |
| 0x51C | CLKSEL_TIMER6_CLK | Timer6 clock source selection |
| 0x520 | CLKSEL_TIMER7_CLK | Timer7 clock source selection |
| 0x528 | CLKSEL_TIMER1MS_CLK | Timer1 (1ms) clock source selection |
| 0x52C | CLKSEL_WDT1_CLK | Watchdog1 clock source selection |
| 0x530 | CLKSEL_MAC_CLK | Ethernet MAC clock selection |

### Clock Selection Values
For Timer clock selection registers:
- **0**: 32kHz clock (32K_FCLK)
- **1**: System clock (SYS_CLK - 24MHz)  
- **2**: External clock (TCLKIN)

## Power Management Integration

### Module Power State Control
```c
// Check if module can be safely disabled
bool can_disable_module(uint32_t clkctrl_reg) {
    uint32_t status = *(volatile uint32_t*)clkctrl_reg;
    uint32_t idlest = (status >> 16) & 0x3;
    
    // Module can be disabled if it's idle
    return (idlest == 0x2);  // Idle state
}

// Safe module disable sequence  
void safe_disable_module(uint32_t clkctrl_reg) {
    // Wait for module to become idle
    while (!can_disable_module(clkctrl_reg)) {
        // Wait for idle condition
    }
    
    // Disable module clock
    *(volatile uint32_t*)clkctrl_reg &= ~0x3;  // MODULEMODE = disabled
}
```

## Register Access Macros

```c
// CM_PER base address
#define CM_PER_BASE                 0x48000000

// CM_WKUP base address  
#define CM_WKUP_BASE                0x44E04000

// Example register definitions
#define CM_PER_UART1_CLKCTRL        (CM_PER_BASE + 0x5C)
#define CM_PER_TIMER2_CLKCTRL       (CM_PER_BASE + 0x70)
#define CM_WKUP_UART0_CLKCTRL       (CM_WKUP_BASE + 0xC8)
#define CM_WKUP_TIMER1_CLKCTRL      (CM_WKUP_BASE + 0xD8)

// DPLL control registers
#define CM_CLKMODE_DPLL_MPU         (CM_WKUP_BASE + 0x9C)
#define CM_CLKSEL_DPLL_MPU          (CM_WKUP_BASE + 0x2C)
#define CM_DIV_M2_DPLL_MPU          (CM_WKUP_BASE + 0xBC)
#define CM_IDLEST_DPLL_MPU          (CM_WKUP_BASE + 0x20)

// Register access helpers
#define REG32(addr)                 (*(volatile uint32_t*)(addr))
#define SET_BITS(reg, mask)         ((reg) |= (mask))
#define CLR_BITS(reg, mask)         ((reg) &= ~(mask))
#define GET_FIELD(reg, shift, mask) (((reg) >> (shift)) & (mask))
```

## Related Documentation
- [Clock System Overview](../clocking/clock-system-overview.md) - High-level clock architecture
- [Peripheral Clock Management](../clocking/peripheral-clock-management.md) - Individual peripheral setup
- [Timer Registers](./timer-registers.md) - Timer-specific register details
- [Power Management](../power/power-management.md) - Power domain control