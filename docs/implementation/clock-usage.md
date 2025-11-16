# Clock System Implementation Guide - AM3358

## Overview

This document provides practical implementation examples for configuring and managing the AM3358 clock system, including DPLL configuration, peripheral clock control, and power management.

## Prerequisites

- [Clock System Overview](../clocking/clock-system-overview.md) - Architecture and concepts
- [Peripheral Clock Management](../clocking/peripheral-clock-management.md) - Peripheral-specific setup
- [PRCM Registers](../registers/prcm-registers.md) - Complete register reference

## DPLL Configuration Implementation

### DPLL Register Access Macros
```c
// Clock Manager Base Addresses
#define CM_WKUP_BASE        0x44E04000
#define CM_DPLL_BASE        0x44E06000  
#define CM_PER_BASE         0x48000000
#define CM_MPU_BASE         0x44E10000

// DPLL Control Registers
#define CM_CLKMODE_DPLL_CORE    (CM_DPLL_BASE + 0x90)
#define CM_CLKSEL_DPLL_CORE     (CM_DPLL_BASE + 0x68)
#define CM_IDLEST_DPLL_CORE     (CM_DPLL_BASE + 0x5C)
#define CM_CLKMODE_DPLL_MPU     (CM_DPLL_BASE + 0x88)  
#define CM_CLKSEL_DPLL_MPU      (CM_DPLL_BASE + 0x2C)
#define CM_IDLEST_DPLL_MPU      (CM_DPLL_BASE + 0x20)
#define CM_CLKMODE_DPLL_PER     (CM_DPLL_BASE + 0x8C)
#define CM_CLKSEL_DPLL_PER      (CM_DPLL_BASE + 0x9C)
#define CM_IDLEST_DPLL_PER      (CM_DPLL_BASE + 0x70)
#define CM_CLKMODE_DPLL_DDR     (CM_DPLL_BASE + 0x94)
#define CM_CLKSEL_DPLL_DDR      (CM_DPLL_BASE + 0x40)
#define CM_IDLEST_DPLL_DDR      (CM_DPLL_BASE + 0x34)
#define CM_CLKMODE_DPLL_DISP    (CM_DPLL_BASE + 0x98)
#define CM_CLKSEL_DPLL_DISP     (CM_DPLL_BASE + 0x54)
#define CM_IDLEST_DPLL_DISP     (CM_DPLL_BASE + 0x48)

// DPLL Mode Values
#define DPLL_MN_BYPASS_MODE     0x4
#define DPLL_LOW_POWER_BYPASS   0x5
#define DPLL_FAST_RELOCK_BYPASS 0x6
#define DPLL_LOCK_MODE          0x7

// Register access macros
#define CM_REG(addr)            (*(volatile uint32_t*)(addr))
```

### Basic DPLL Configuration Functions  
```c
// Configure DPLL with M and N values
typedef struct {
    uint32_t m;     // Multiplier (8-2047)
    uint32_t n;     // Divider (0-127) 
    uint32_t m2;    // Post divider (1-31)
} dpll_config_t;

// Generic DPLL configuration function
int configure_dpll(uint32_t clkmode_reg, uint32_t clksel_reg, uint32_t idlest_reg,
                  const dpll_config_t *config) {
    // Step 1: Put DPLL in bypass mode
    CM_REG(clkmode_reg) = DPLL_MN_BYPASS_MODE;
    
    // Wait for bypass mode
    while (CM_REG(idlest_reg) & 0x100);  // Wait for ST_MN_BYPASS
    
    // Step 2: Configure M and N values
    uint32_t clksel_val = (config->m << 8) | config->n;
    CM_REG(clksel_reg) = clksel_val;
    
    // Step 3: Lock DPLL
    CM_REG(clkmode_reg) = DPLL_LOCK_MODE;
    
    // Step 4: Wait for lock
    while (!(CM_REG(idlest_reg) & 0x1));  // Wait for ST_DPLL_CLK
    
    return 0;  // Success
}

// MPU DPLL configuration (720 MHz default)
int configure_mpu_dpll_720mhz(void) {
    dpll_config_t mpu_config = {
        .m = 720,   // 24MHz * 720 = 17.28GHz
        .n = 23,    // (23 + 1) = 24
        .m2 = 1     // 17.28GHz / 24 / 1 = 720MHz
    };
    
    return configure_dpll(CM_CLKMODE_DPLL_MPU, CM_CLKSEL_DPLL_MPU, 
                         CM_IDLEST_DPLL_MPU, &mpu_config);
}

// Core DPLL configuration (1000 MHz)
int configure_core_dpll_1000mhz(void) {
    dpll_config_t core_config = {
        .m = 1000,  // 24MHz * 1000 = 24GHz
        .n = 23,    // (23 + 1) = 24  
        .m2 = 10    // 24GHz / 24 / 10 = 100MHz (L3), 200MHz (L4)
    };
    
    return configure_dpll(CM_CLKMODE_DPLL_CORE, CM_CLKSEL_DPLL_CORE,
                         CM_IDLEST_DPLL_CORE, &core_config);
}

// Peripheral DPLL configuration (960 MHz)
int configure_per_dpll_960mhz(void) {
    dpll_config_t per_config = {
        .m = 960,   // 24MHz * 960 = 23.04GHz
        .n = 23,    // (23 + 1) = 24
        .m2 = 5     // 23.04GHz / 24 / 5 = 192MHz
    };
    
    return configure_dpll(CM_CLKMODE_DPLL_PER, CM_CLKSEL_DPLL_PER,
                         CM_IDLEST_DPLL_PER, &per_config);
}
```

### Dynamic Frequency Scaling Implementation
```c
// MPU frequency scaling options
typedef enum {
    MPU_FREQ_300MHZ,
    MPU_FREQ_600MHZ, 
    MPU_FREQ_720MHZ,
    MPU_FREQ_1000MHZ
} mpu_frequency_t;

// MPU DPLL configurations for different frequencies
static const dpll_config_t mpu_freq_configs[] = {
    [MPU_FREQ_300MHZ]  = {.m = 300, .n = 23, .m2 = 1},   // 300 MHz
    [MPU_FREQ_600MHZ]  = {.m = 600, .n = 23, .m2 = 1},   // 600 MHz
    [MPU_FREQ_720MHZ]  = {.m = 720, .n = 23, .m2 = 1},   // 720 MHz  
    [MPU_FREQ_1000MHZ] = {.m = 1000, .n = 23, .m2 = 1}   // 1000 MHz
};

// Scale MPU frequency dynamically
int scale_mpu_frequency(mpu_frequency_t new_freq) {
    if (new_freq >= sizeof(mpu_freq_configs) / sizeof(mpu_freq_configs[0])) {
        return -1;  // Invalid frequency
    }
    
    const dpll_config_t *config = &mpu_freq_configs[new_freq];
    
    return configure_dpll(CM_CLKMODE_DPLL_MPU, CM_CLKSEL_DPLL_MPU,
                         CM_IDLEST_DPLL_MPU, config);
}

// Get current MPU frequency
uint32_t get_mpu_frequency(void) {
    uint32_t clksel = CM_REG(CM_CLKSEL_DPLL_MPU);
    uint32_t m = (clksel >> 8) & 0x7FF;
    uint32_t n = clksel & 0x7F;
    
    // Calculate frequency: 24MHz * M / (N + 1)
    return (24000000 * m) / (n + 1);
}

// Example usage: Scale to 600MHz for power saving
void enter_power_save_mode(void) {
    scale_mpu_frequency(MPU_FREQ_600MHZ);
}

void exit_power_save_mode(void) {
    scale_mpu_frequency(MPU_FREQ_720MHZ);
}
```

## Peripheral Clock Control Implementation

### Generic Clock Control Functions
```c
// Peripheral clock control registers
#define CM_PER_GPIO1_CLKCTRL    (CM_PER_BASE + 0xAC)
#define CM_PER_GPIO2_CLKCTRL    (CM_PER_BASE + 0xB0) 
#define CM_PER_GPIO3_CLKCTRL    (CM_PER_BASE + 0xB4)
#define CM_PER_UART1_CLKCTRL    (CM_PER_BASE + 0x6C)
#define CM_PER_UART2_CLKCTRL    (CM_PER_BASE + 0x70)
#define CM_PER_I2C1_CLKCTRL     (CM_PER_BASE + 0x48)
#define CM_PER_I2C2_CLKCTRL     (CM_PER_BASE + 0x44)
#define CM_PER_SPI0_CLKCTRL     (CM_PER_BASE + 0x4C)
#define CM_PER_SPI1_CLKCTRL     (CM_PER_BASE + 0x50)
#define CM_PER_TIMER2_CLKCTRL   (CM_PER_BASE + 0x80)
#define CM_PER_TIMER3_CLKCTRL   (CM_PER_BASE + 0x84)

#define CM_WKUP_GPIO0_CLKCTRL   (CM_WKUP_BASE + 0x8)
#define CM_WKUP_UART0_CLKCTRL   (CM_WKUP_BASE + 0xB4)
#define CM_WKUP_I2C0_CLKCTRL    (CM_WKUP_BASE + 0xB8)
#define CM_WKUP_TIMER0_CLKCTRL  (CM_WKUP_BASE + 0x10)
#define CM_WKUP_TIMER1_CLKCTRL  (CM_WKUP_BASE + 0xC4)

// Module mode definitions
#define MODULE_MODE_DISABLED    0x0
#define MODULE_MODE_ENABLED     0x2
#define MODULE_MODE_AUTO        0x1

// Clock state definitions  
#define IDLEST_FUNC             0x0     // Module functional
#define IDLEST_TRANS            0x1     // Module in transition
#define IDLEST_IDLE             0x2     // Module in idle
#define IDLEST_DISABLED         0x3     // Module disabled

// Generic peripheral clock enable
int enable_peripheral_clock(uint32_t clkctrl_reg) {
    // Enable module clock
    CM_REG(clkctrl_reg) = (CM_REG(clkctrl_reg) & ~0x3) | MODULE_MODE_ENABLED;
    
    // Wait for module to be accessible (timeout after reasonable attempts)
    int timeout = 1000;
    while (timeout-- > 0) {
        uint32_t idlest = (CM_REG(clkctrl_reg) >> 16) & 0x3;
        if (idlest == IDLEST_FUNC) {
            return 0;  // Success
        }
    }
    
    return -1;  // Timeout
}

// Generic peripheral clock disable
int disable_peripheral_clock(uint32_t clkctrl_reg) {
    // Disable module clock
    CM_REG(clkctrl_reg) = (CM_REG(clkctrl_reg) & ~0x3) | MODULE_MODE_DISABLED;
    
    // Wait for module to be disabled
    int timeout = 1000;
    while (timeout-- > 0) {
        uint32_t idlest = (CM_REG(clkctrl_reg) >> 16) & 0x3;
        if (idlest == IDLEST_DISABLED) {
            return 0;  // Success
        }
    }
    
    return -1;  // Timeout
}

// Check if peripheral clock is enabled
bool is_peripheral_clock_enabled(uint32_t clkctrl_reg) {
    uint32_t modulemode = CM_REG(clkctrl_reg) & 0x3;
    uint32_t idlest = (CM_REG(clkctrl_reg) >> 16) & 0x3;
    
    return (modulemode == MODULE_MODE_ENABLED) && (idlest == IDLEST_FUNC);
}
```

### Specific Peripheral Clock Functions
```c
// UART clock control
int enable_uart_clock(int uart_num) {
    uint32_t clkctrl_reg;
    
    switch (uart_num) {
        case 0: clkctrl_reg = CM_WKUP_UART0_CLKCTRL; break;
        case 1: clkctrl_reg = CM_PER_UART1_CLKCTRL; break;
        case 2: clkctrl_reg = CM_PER_UART2_CLKCTRL; break;
        default: return -1;
    }
    
    return enable_peripheral_clock(clkctrl_reg);
}

// GPIO clock control 
int enable_gpio_clock(int gpio_bank) {
    uint32_t clkctrl_reg;
    
    switch (gpio_bank) {
        case 0: clkctrl_reg = CM_WKUP_GPIO0_CLKCTRL; break;
        case 1: clkctrl_reg = CM_PER_GPIO1_CLKCTRL; break;
        case 2: clkctrl_reg = CM_PER_GPIO2_CLKCTRL; break;
        case 3: clkctrl_reg = CM_PER_GPIO3_CLKCTRL; break;
        default: return -1;
    }
    
    return enable_peripheral_clock(clkctrl_reg);
}

// I2C clock control
int enable_i2c_clock(int i2c_num) {
    uint32_t clkctrl_reg;
    
    switch (i2c_num) {
        case 0: clkctrl_reg = CM_WKUP_I2C0_CLKCTRL; break;
        case 1: clkctrl_reg = CM_PER_I2C1_CLKCTRL; break;
        case 2: clkctrl_reg = CM_PER_I2C2_CLKCTRL; break;
        default: return -1;
    }
    
    return enable_peripheral_clock(clkctrl_reg);
}

// SPI clock control
int enable_spi_clock(int spi_num) {
    uint32_t clkctrl_reg;
    
    switch (spi_num) {
        case 0: clkctrl_reg = CM_PER_SPI0_CLKCTRL; break;
        case 1: clkctrl_reg = CM_PER_SPI1_CLKCTRL; break;
        default: return -1;
    }
    
    return enable_peripheral_clock(clkctrl_reg);
}

// Timer clock control
int enable_timer_clock(int timer_num) {
    uint32_t clkctrl_reg;
    
    switch (timer_num) {
        case 0: clkctrl_reg = CM_WKUP_TIMER0_CLKCTRL; break;
        case 1: clkctrl_reg = CM_WKUP_TIMER1_CLKCTRL; break;  
        case 2: clkctrl_reg = CM_PER_TIMER2_CLKCTRL; break;
        case 3: clkctrl_reg = CM_PER_TIMER3_CLKCTRL; break;
        default: return -1;
    }
    
    return enable_peripheral_clock(clkctrl_reg);
}
```

## Clock Domain Management Implementation

### Clock Domain Control
```c
// Clock domain state control registers
#define CM_PER_L4LS_CLKSTCTRL   (CM_PER_BASE + 0x0)
#define CM_PER_L3S_CLKSTCTRL    (CM_PER_BASE + 0x4) 
#define CM_PER_L4FW_CLKSTCTRL   (CM_PER_BASE + 0x8)
#define CM_PER_L3_CLKSTCTRL     (CM_PER_BASE + 0xC)
#define CM_WKUP_CLKSTCTRL       (CM_WKUP_BASE + 0x0)
#define CM_MPU_CLKSTCTRL        (CM_MPU_BASE + 0x0)

// Clock domain state values
#define CLKTRCTRL_NO_SLEEP      0x0  // No sleep, all clocks active
#define CLKTRCTRL_SW_SLEEP      0x1  // Software-controlled sleep
#define CLKTRCTRL_SW_WKUP       0x2  // Software-controlled wake-up  
#define CLKTRCTRL_HW_AUTO       0x3  // Hardware automatic control

// Configure clock domain behavior
void configure_clock_domain(uint32_t clkstctrl_reg, uint32_t mode) {
    CM_REG(clkstctrl_reg) = (CM_REG(clkstctrl_reg) & ~0x3) | (mode & 0x3);
}

// Enable automatic clock gating for power savings
void enable_clock_auto_gating(void) {
    configure_clock_domain(CM_PER_L4LS_CLKSTCTRL, CLKTRCTRL_HW_AUTO);
    configure_clock_domain(CM_PER_L3S_CLKSTCTRL, CLKTRCTRL_HW_AUTO);
    configure_clock_domain(CM_PER_L4FW_CLKSTCTRL, CLKTRCTRL_HW_AUTO);
    configure_clock_domain(CM_PER_L3_CLKSTCTRL, CLKTRCTRL_HW_AUTO);
}

// Disable clock gating for maximum performance
void disable_clock_gating(void) {
    configure_clock_domain(CM_PER_L4LS_CLKSTCTRL, CLKTRCTRL_NO_SLEEP);
    configure_clock_domain(CM_PER_L3S_CLKSTCTRL, CLKTRCTRL_NO_SLEEP);
    configure_clock_domain(CM_PER_L4FW_CLKSTCTRL, CLKTRCTRL_NO_SLEEP);
    configure_clock_domain(CM_PER_L3_CLKSTCTRL, CLKTRCTRL_NO_SLEEP);
}
```

## Frequency Calculation Implementation

### Clock Tree Calculations
```c
// Calculate DPLL output frequency
uint32_t calculate_dpll_frequency(uint32_t ref_freq, uint32_t m, uint32_t n, uint32_t m2) {
    return (ref_freq * m) / ((n + 1) * m2);
}

// Get system clock frequencies
typedef struct {
    uint32_t osc_freq;      // Oscillator frequency (24 MHz)
    uint32_t mpu_freq;      // MPU frequency 
    uint32_t core_freq;     // Core frequency
    uint32_t per_freq;      // Peripheral frequency
    uint32_t l3_freq;       // L3 interconnect frequency
    uint32_t l4_freq;       // L4 interconnect frequency
} system_frequencies_t;

system_frequencies_t get_system_frequencies(void) {
    system_frequencies_t freqs;
    
    freqs.osc_freq = 24000000;  // 24 MHz crystal
    
    // Read DPLL configurations and calculate frequencies
    uint32_t mpu_clksel = CM_REG(CM_CLKSEL_DPLL_MPU);
    uint32_t mpu_m = (mpu_clksel >> 8) & 0x7FF;
    uint32_t mpu_n = mpu_clksel & 0x7F;
    freqs.mpu_freq = calculate_dpll_frequency(freqs.osc_freq, mpu_m, mpu_n, 1);
    
    uint32_t core_clksel = CM_REG(CM_CLKSEL_DPLL_CORE);
    uint32_t core_m = (core_clksel >> 8) & 0x7FF;
    uint32_t core_n = core_clksel & 0x7F;
    freqs.core_freq = calculate_dpll_frequency(freqs.osc_freq, core_m, core_n, 10);
    
    uint32_t per_clksel = CM_REG(CM_CLKSEL_DPLL_PER);
    uint32_t per_m = (per_clksel >> 8) & 0x7FF;
    uint32_t per_n = per_clksel & 0x7F;  
    freqs.per_freq = calculate_dpll_frequency(freqs.osc_freq, per_m, per_n, 5);
    
    // L3 and L4 are derived from CORE DPLL
    freqs.l3_freq = freqs.core_freq;      // L3 = CORE/10 * 10 = CORE  
    freqs.l4_freq = freqs.core_freq / 2;  // L4 = CORE/2
    
    return freqs;
}

// Print system clock information
void print_clock_info(void) {
    system_frequencies_t freqs = get_system_frequencies();
    
    printf("AM3358 Clock Frequencies:\\n");
    printf("  OSC:  %u Hz\\n", freqs.osc_freq);
    printf("  MPU:  %u Hz\\n", freqs.mpu_freq);
    printf("  CORE: %u Hz\\n", freqs.core_freq);
    printf("  PER:  %u Hz\\n", freqs.per_freq);
    printf("  L3:   %u Hz\\n", freqs.l3_freq);  
    printf("  L4:   %u Hz\\n", freqs.l4_freq);
}
```

## Power Management Implementation

### Sleep Mode Clock Control
```c
// Power management states
typedef enum {
    POWER_STATE_ACTIVE,
    POWER_STATE_IDLE,
    POWER_STATE_STANDBY,
    POWER_STATE_DEEP_SLEEP
} power_state_t;

// Enter idle mode (clocks gated but DPLLs active)
void enter_idle_mode(void) {
    // Enable automatic clock gating
    enable_clock_auto_gating();
    
    // Wait for interrupt (processor-specific)
    __asm__ volatile("wfi");
}

// Enter standby mode (MPU and CORE DPLLs off)
void enter_standby_mode(void) {
    // Put non-essential DPLLs in bypass mode
    CM_REG(CM_CLKMODE_DPLL_PER) = DPLL_MN_BYPASS_MODE;
    CM_REG(CM_CLKMODE_DPLL_DISP) = DPLL_MN_BYPASS_MODE;
    CM_REG(CM_CLKMODE_DPLL_DDR) = DPLL_MN_BYPASS_MODE;
    
    // Disable non-wakeup domain clocks
    configure_clock_domain(CM_PER_L4LS_CLKSTCTRL, CLKTRCTRL_SW_SLEEP);
    configure_clock_domain(CM_PER_L3S_CLKSTCTRL, CLKTRCTRL_SW_SLEEP);
    
    // Keep WKUP domain active for wake sources
    configure_clock_domain(CM_WKUP_CLKSTCTRL, CLKTRCTRL_NO_SLEEP);
    
    // Enter WFI
    __asm__ volatile("wfi");
}

// Wake up from standby mode
void wakeup_from_standby(void) {
    // Restore DPLL configurations
    configure_per_dpll_960mhz();
    
    // Restore clock domains
    enable_clock_auto_gating();
}

// Complete system initialization with clock setup
void system_clock_init(void) {
    // Configure all DPLLs
    configure_mpu_dpll_720mhz();
    configure_core_dpll_1000mhz(); 
    configure_per_dpll_960mhz();
    
    // Enable automatic clock gating for power efficiency
    enable_clock_auto_gating();
    
    // Enable essential peripheral clocks
    enable_uart_clock(0);    // Debug console
    enable_gpio_clock(0);    // Wake-up GPIO
    enable_gpio_clock(1);    // User GPIO
    enable_timer_clock(1);   // System tick timer
    
    printf("System clocks initialized\\n");
    print_clock_info();
}
```

## Clock Monitoring and Debugging

### Clock Status Functions
```c
// Check DPLL lock status
bool is_dpll_locked(uint32_t idlest_reg) {
    return (CM_REG(idlest_reg) & 0x1) != 0;
}

// Get DPLL mode
uint32_t get_dpll_mode(uint32_t clkmode_reg) {
    return CM_REG(clkmode_reg) & 0x7;
}

// Clock system status check
typedef struct {
    bool mpu_dpll_locked;
    bool core_dpll_locked; 
    bool per_dpll_locked;
    bool ddr_dpll_locked;
    bool disp_dpll_locked;
    uint32_t failed_modules;
} clock_status_t;

clock_status_t get_clock_system_status(void) {
    clock_status_t status = {0};
    
    // Check DPLL lock status
    status.mpu_dpll_locked = is_dpll_locked(CM_IDLEST_DPLL_MPU);
    status.core_dpll_locked = is_dpll_locked(CM_IDLEST_DPLL_CORE);
    status.per_dpll_locked = is_dpll_locked(CM_IDLEST_DPLL_PER);
    status.ddr_dpll_locked = is_dpll_locked(CM_IDLEST_DPLL_DDR);
    status.disp_dpll_locked = is_dpll_locked(CM_IDLEST_DPLL_DISP);
    
    // Check for failed peripheral clock enables
    uint32_t peripheral_regs[] = {
        CM_PER_UART1_CLKCTRL, CM_PER_GPIO1_CLKCTRL, CM_PER_I2C1_CLKCTRL
    };
    
    for (int i = 0; i < sizeof(peripheral_regs)/sizeof(peripheral_regs[0]); i++) {
        if (!is_peripheral_clock_enabled(peripheral_regs[i])) {
            status.failed_modules |= (1 << i);
        }
    }
    
    return status;
}

// Print clock system status
void print_clock_status(void) {
    clock_status_t status = get_clock_system_status();
    
    printf("Clock System Status:\\n");
    printf("  MPU DPLL:  %s\\n", status.mpu_dpll_locked ? "LOCKED" : "UNLOCKED");
    printf("  CORE DPLL: %s\\n", status.core_dpll_locked ? "LOCKED" : "UNLOCKED");
    printf("  PER DPLL:  %s\\n", status.per_dpll_locked ? "LOCKED" : "UNLOCKED");
    printf("  DDR DPLL:  %s\\n", status.ddr_dpll_locked ? "LOCKED" : "UNLOCKED");  
    printf("  DISP DPLL: %s\\n", status.disp_dpll_locked ? "LOCKED" : "UNLOCKED");
    
    if (status.failed_modules) {
        printf("  Failed peripheral clocks: 0x%X\\n", status.failed_modules);
    }
}
```

## Peripheral-Specific Clock Implementation

### UART Clock Implementation
```c
// UART clock configuration with baud rate setup
typedef struct {
    uint32_t baud_rate;
    uint32_t func_clk_freq;  // 48 MHz from PER DPLL
} uart_clock_config_t;

// Calculate UART divisor for baud rate
uint32_t calculate_uart_divisor(uint32_t baud_rate) {
    uint32_t func_clk = 48000000;  // 48MHz PER DPLL output  
    return func_clk / (16 * baud_rate);
}

// Complete UART clock setup
int setup_uart_clock(int uart_num, uint32_t baud_rate) {
    // Enable UART clock
    int result = enable_uart_clock(uart_num);
    if (result != 0) {
        return result;
    }
    
    // Calculate and verify baud rate divisor
    uint32_t divisor = calculate_uart_divisor(baud_rate);
    if (divisor == 0 || divisor > 0xFFFF) {
        return -1;  // Invalid baud rate
    }
    
    // Divisor is configured in UART registers, not clock registers
    return 0;  // Success
}
```

### GPIO Clock Implementation
```c
// GPIO clock setup with debounce configuration
int setup_gpio_bank_clock(int gpio_bank, bool enable_debounce) {
    int result = enable_gpio_clock(gpio_bank);
    if (result != 0) {
        return result;
    }
    
    // GPIO debounce clock is always 32KHz from CLKDIV32K
    // No additional clock configuration needed
    
    return 0;
}

// Enable all GPIO bank clocks for system use
void enable_all_gpio_clocks(void) {
    enable_gpio_clock(0);  // Always-on domain
    enable_gpio_clock(1);  // Peripheral domain
    enable_gpio_clock(2);  // Peripheral domain  
    enable_gpio_clock(3);  // Peripheral domain
}
```

### Timer Clock Implementation  
```c
// Timer clock source selection
typedef enum {
    TIMER_CLK_TCLKIN,    // External clock input
    TIMER_CLK_M_OSC,     // Master oscillator (24MHz)
    TIMER_CLK_32KHZ      // 32KHz clock
} timer_clock_source_t;

// Timer-specific clock setup  
int setup_timer_clock(int timer_num, timer_clock_source_t clk_src) {
    int result = enable_timer_clock(timer_num);
    if (result != 0) {
        return result;
    }
    
    // Configure timer clock source (timer-specific registers)
    // This would be done in timer configuration, not PRCM
    
    return 0;
}

// Calculate timer frequencies based on source
uint32_t get_timer_frequency(timer_clock_source_t clk_src) {
    switch (clk_src) {
        case TIMER_CLK_M_OSC:  return 24000000;  // 24 MHz
        case TIMER_CLK_32KHZ:  return 32768;     // 32.768 KHz
        case TIMER_CLK_TCLKIN: return 0;         // External, frequency unknown
        default: return 0;
    }
}
```

### I2C Clock Implementation
```c
// I2C clock setup with frequency calculation
typedef struct {
    uint32_t scl_frequency;  // Desired SCL frequency (Hz)
    uint32_t func_clk_freq;  // Functional clock (96MHz from CORE DPLL)
} i2c_clock_config_t;

// Setup I2C clock for standard speeds
int setup_i2c_clock(int i2c_num, uint32_t scl_freq) {
    int result = enable_i2c_clock(i2c_num);
    if (result != 0) {
        return result;
    }
    
    // I2C functional clock is 96MHz from CORE DPLL
    // SCL frequency is configured in I2C registers using divisors
    uint32_t func_clk = 96000000;  // 96MHz
    
    // Verify SCL frequency is achievable
    if (scl_freq > 400000) {  // Max 400KHz for I2C
        return -1;
    }
    
    return 0;
}

// Standard I2C frequency configurations
void setup_standard_i2c_clocks(void) {
    setup_i2c_clock(0, 100000);  // I2C0: 100KHz standard mode
    setup_i2c_clock(1, 400000);  // I2C1: 400KHz fast mode
    setup_i2c_clock(2, 100000);  // I2C2: 100KHz standard mode
}
```

### SPI Clock Implementation
```c
// SPI clock configuration
typedef struct {
    uint32_t spi_frequency;   // Desired SPI frequency
    uint32_t func_clk_freq;   // Functional clock (48MHz from PER DPLL)
} spi_clock_config_t;

// Setup SPI clock with frequency validation
int setup_spi_clock(int spi_num, uint32_t spi_freq) {
    int result = enable_spi_clock(spi_num);
    if (result != 0) {
        return result;
    }
    
    // SPI functional clock is 48MHz from PER DPLL
    uint32_t func_clk = 48000000;  // 48MHz
    
    // Verify SPI frequency is achievable (divisor must be even, 2-4096)
    if (spi_freq > func_clk/2 || spi_freq < func_clk/4096) {
        return -1;  // Frequency out of range
    }
    
    return 0;
}

// Configure SPI clocks for different applications
void setup_application_spi_clocks(void) {
    setup_spi_clock(0, 12000000);  // SPI0: 12MHz for external flash
    setup_spi_clock(1, 1000000);   // SPI1: 1MHz for sensors
}
```

### MMC Clock Implementation
```c
// MMC clock configuration
typedef enum {
    MMC_MODE_IDENTIFICATION,  // 400KHz max for card identification
    MMC_MODE_TRANSFER,       // Up to 25MHz for data transfer
    MMC_MODE_HIGH_SPEED      // Up to 50MHz for high-speed mode
} mmc_mode_t;

// MMC clock frequency limits
static const uint32_t mmc_max_frequencies[] = {
    [MMC_MODE_IDENTIFICATION] = 400000,    // 400 KHz
    [MMC_MODE_TRANSFER]      = 25000000,   // 25 MHz
    [MMC_MODE_HIGH_SPEED]    = 50000000    // 50 MHz  
};

// Setup MMC clock for different operating modes
int setup_mmc_clock(int mmc_num, mmc_mode_t mode) {
    uint32_t clkctrl_reg;
    
    switch (mmc_num) {
        case 0: clkctrl_reg = CM_PER_MMC0_CLKCTRL; break;
        case 1: clkctrl_reg = CM_PER_MMC1_CLKCTRL; break;  
        case 2: clkctrl_reg = CM_PER_MMC2_CLKCTRL; break;
        default: return -1;
    }
    
    int result = enable_peripheral_clock(clkctrl_reg);
    if (result != 0) {
        return result;
    }
    
    // MMC functional clock is 96MHz from CORE DPLL
    // Actual MMC clock is divided down in MMC controller
    uint32_t max_freq = mmc_max_frequencies[mode];
    
    return 0;  // Clock divisor set in MMC controller registers
}
```

### ADC Clock Implementation
```c
// ADC clock configuration (24MHz max for proper operation)
int setup_adc_clock(void) {
    int result = enable_peripheral_clock(CM_WKUP_ADC_TSC_CLKCTRL);
    if (result != 0) {
        return result;
    }
    
    // ADC functional clock is 24MHz from M_OSC
    // This provides proper timing for ADC conversions
    
    return 0;
}

// Setup ADC with touch screen controller
int setup_adc_tsc_clocks(void) {
    // Both ADC and TSC share the same clock domain
    return setup_adc_clock();
}
```

## System Clock Initialization Examples

### Complete System Setup
```c
// Initialize all system clocks for typical application
void initialize_system_clocks(void) {
    printf("Initializing AM3358 clock system...\\n");
    
    // Step 1: Configure DPLLs
    configure_mpu_dpll_720mhz();
    configure_core_dpll_1000mhz();
    configure_per_dpll_960mhz();
    
    // Step 2: Enable automatic clock gating
    enable_clock_auto_gating();
    
    // Step 3: Enable essential peripheral clocks
    enable_uart_clock(0);      // Debug console
    enable_gpio_clock(0);      // System GPIO
    enable_gpio_clock(1);      // User GPIO
    enable_timer_clock(1);     // System timer
    
    // Step 4: Setup application-specific clocks as needed
    setup_standard_i2c_clocks();
    setup_application_spi_clocks();
    
    printf("Clock system initialization complete\\n");
}

// Minimal clock setup for power-constrained applications  
void initialize_minimal_clocks(void) {
    // Scale down MPU frequency for power savings
    scale_mpu_frequency(MPU_FREQ_300MHZ);
    
    // Enable only essential clocks
    enable_uart_clock(0);      // Debug console only
    enable_gpio_clock(0);      // Wake-up GPIO only
    enable_timer_clock(0);     // Wake-up timer only
    
    // Enable aggressive clock gating
    enable_clock_auto_gating();
}

// Application-specific clock setup
void setup_application_clocks(void) {
    // Enable clocks based on application requirements
    
    // Communication interfaces
    enable_uart_clock(1);      // User UART
    enable_i2c_clock(1);       // Sensor I2C
    enable_spi_clock(0);       // Flash memory SPI
    
    // GPIO for user interface
    enable_gpio_clock(1);      // LEDs and buttons
    enable_gpio_clock(2);      // Expansion connector
    
    // Timers for application use
    enable_timer_clock(2);     // PWM generation
    enable_timer_clock(3);     // Timing measurements
    
    // Multimedia interfaces (if needed)
    setup_mmc_clock(0, MMC_MODE_TRANSFER);  // SD card
}
```

## Related Documentation

- [Clock System Overview](../clocking/clock-system-overview.md) - Architecture and design concepts
- [Peripheral Clock Management](../clocking/peripheral-clock-management.md) - Individual peripheral setup  
- [PRCM Registers](../registers/prcm-registers.md) - Complete register reference
- [Power Management](../power-management/power-system-overview.md) - System power control integration