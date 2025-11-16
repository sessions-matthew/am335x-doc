# GPIO Pin Multiplexing Implementation Guide - AM3358

## Overview

This document provides practical implementation examples for configuring AM3358 pin multiplexing, focusing on GPIO and peripheral pin configuration through the Control Module registers.

## Prerequisites

- [Pin Multiplexing Guide](../peripherals/gpio/pinmux.md) - Hardware specifications and pin maps
- [GPIO System Overview](../peripherals/gpio/gpio-overview.md) - GPIO architecture
- [Control Module Registers](../registers/control-registers.md) - Register reference

## Basic Pin Configuration Implementation

### Register Access Macros
```c
// Control Module base and register definitions
#define CONTROL_MODULE_BASE    0x44E10000
#define PIN_CONFIG_BASE        0x44E10800

// Pin configuration bit field definitions
#define PIN_MODE_MASK     0x07
#define PIN_MODE(x)       ((x) & PIN_MODE_MASK)
#define PIN_PULLUDEN      (1 << 3)  // 0=Pull enabled, 1=Pull disabled
#define PIN_PULLTYPESEL   (1 << 4)  // 0=Pull-down, 1=Pull-up  
#define PIN_RXACTIVE      (1 << 5)  // Receiver enable
#define PIN_SLEWCTRL      (1 << 6)  // 0=Fast, 1=Slow

// Pin configuration values
#define PIN_MODE_0        0x00  // Primary function
#define PIN_MODE_1        0x01  // Alternative function 1
#define PIN_MODE_2        0x02  // Alternative function 2
#define PIN_MODE_3        0x03  // Alternative function 3
#define PIN_MODE_4        0x04  // Alternative function 4
#define PIN_MODE_5        0x05  // Alternative function 5
#define PIN_MODE_6        0x06  // Alternative function 6
#define PIN_MODE_7        0x07  // GPIO mode

// Common pin configurations
#define PIN_INPUT         (PIN_RXACTIVE)
#define PIN_INPUT_PULLUP  (PIN_RXACTIVE | PIN_PULLTYPESEL)
#define PIN_INPUT_PULLDOWN (PIN_RXACTIVE)
#define PIN_INPUT_NOPULL  (PIN_RXACTIVE | PIN_PULLUDEN)
#define PIN_OUTPUT        (0x00)
#define PIN_OUTPUT_PULLUP (PIN_PULLTYPESEL)
#define PIN_OUTPUT_PULLDOWN (0x00)

// Pin offset definitions for common GPIO pins
#define CONF_GPMC_AD0_OFFSET     0x800  // GPIO1_0
#define CONF_GPMC_AD1_OFFSET     0x804  // GPIO1_1
#define CONF_GPMC_AD2_OFFSET     0x808  // GPIO1_2
#define CONF_GPMC_AD3_OFFSET     0x80C  // GPIO1_3
#define CONF_GPMC_AD12_OFFSET    0x830  // GPIO1_12
#define CONF_GPMC_AD13_OFFSET    0x834  // GPIO1_13
#define CONF_GPMC_AD14_OFFSET    0x838  // GPIO1_14
#define CONF_GPMC_AD15_OFFSET    0x83C  // GPIO1_15

// Access macro for pin configuration registers
#define PIN_CONFIG_REG(offset) (*(volatile uint32_t*)(CONTROL_MODULE_BASE + (offset)))
```

### Basic Pin Configuration Functions
```c
// Configure pin as GPIO with basic settings
void configure_gpio_pin_basic(uint32_t offset) {
    volatile uint32_t *pin_config = (uint32_t *)(CONTROL_MODULE_BASE + offset);
    
    // Configure as GPIO (mode 7) with pull-up and receiver enabled
    *pin_config = PIN_MODE_7 | PIN_INPUT_PULLUP;
}

// Configure GPIO1_12 as output
void configure_gpio1_12_output(void) {
    PIN_CONFIG_REG(CONF_GPMC_AD12_OFFSET) = PIN_MODE_7 | PIN_OUTPUT;
}

// Configure GPIO1_13 as input with pull-up
void configure_gpio1_13_input_pullup(void) {
    PIN_CONFIG_REG(CONF_GPMC_AD13_OFFSET) = PIN_MODE_7 | PIN_INPUT_PULLUP;
}

// Configure GPIO1_14 as input with no pull resistor
void configure_gpio1_14_input_nopull(void) {
    PIN_CONFIG_REG(CONF_GPMC_AD14_OFFSET) = PIN_MODE_7 | PIN_INPUT_NOPULL;
}
```

## UART Pin Configuration Implementation

### UART0 Pin Setup
```c
// Configure UART0 pins (Console/Debug)
void configure_uart0_pins(void) {
    // UART0_RXD (E15) - Mode 0, RX enabled, pull-up
    PIN_CONFIG_REG(0x970) = PIN_MODE_0 | PIN_INPUT_PULLUP;
    
    // UART0_TXD (E16) - Mode 0, TX only, no pull
    PIN_CONFIG_REG(0x974) = PIN_MODE_0 | PIN_OUTPUT;
}

// Configure UART1 pins
void configure_uart1_pins(void) {
    // UART1_RXD - Mode 0, RX enabled, pull-up  
    PIN_CONFIG_REG(0x980) = PIN_MODE_0 | PIN_INPUT_PULLUP;
    
    // UART1_TXD - Mode 0, TX only, no pull
    PIN_CONFIG_REG(0x984) = PIN_MODE_0 | PIN_OUTPUT;
}
```

## SPI Pin Configuration Implementation

### SPI0 Master Configuration
```c
// Configure SPI0 pins for master mode
void configure_spi0_master_pins(void) {
    // SPI0_SCLK (A17) - Mode 0, output, fast slew rate
    PIN_CONFIG_REG(0x950) = PIN_MODE_0 | PIN_OUTPUT;
    
    // SPI0_D0/MOSI (B17) - Mode 0, output, no pull
    PIN_CONFIG_REG(0x954) = PIN_MODE_0 | PIN_OUTPUT;
    
    // SPI0_D1/MISO (B16) - Mode 0, input, pull-up
    PIN_CONFIG_REG(0x958) = PIN_MODE_0 | PIN_INPUT_PULLUP;
    
    // SPI0_CS0 (A16) - Mode 0, output, no pull
    PIN_CONFIG_REG(0x95C) = PIN_MODE_0 | PIN_OUTPUT;
}

// Configure SPI1 pins
void configure_spi1_pins(void) {
    // SPI1_SCLK - Mode 2, output
    PIN_CONFIG_REG(0x908) = PIN_MODE_2 | PIN_OUTPUT;
    
    // SPI1_D0/MOSI - Mode 2, output  
    PIN_CONFIG_REG(0x90C) = PIN_MODE_2 | PIN_OUTPUT;
    
    // SPI1_D1/MISO - Mode 2, input, pull-up
    PIN_CONFIG_REG(0x910) = PIN_MODE_2 | PIN_INPUT_PULLUP;
    
    // SPI1_CS0 - Mode 2, output
    PIN_CONFIG_REG(0x964) = PIN_MODE_2 | PIN_OUTPUT;
}
```

## I2C Pin Configuration Implementation

### I2C0 System Bus Configuration
```c
// Configure I2C0 pins (system I2C bus)
void configure_i2c0_pins(void) {
    // I2C0_SDA (C17) - Mode 0, input/output, pull-up, slow slew
    PIN_CONFIG_REG(0x988) = PIN_MODE_0 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;
    
    // I2C0_SCL (C16) - Mode 0, input/output, pull-up, slow slew  
    PIN_CONFIG_REG(0x98C) = PIN_MODE_0 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;
}

// Configure I2C1 pins
void configure_i2c1_pins(void) {
    // I2C1_SDA - Mode 2, bidirectional, pull-up, slow slew
    PIN_CONFIG_REG(0x958) = PIN_MODE_2 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;
    
    // I2C1_SCL - Mode 2, bidirectional, pull-up, slow slew
    PIN_CONFIG_REG(0x95C) = PIN_MODE_2 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;
}
```

## Advanced Pin Configuration Implementation

### Pull Resistor Configuration
```c
// Configure different pull resistor settings
void configure_pull_resistors_example(void) {
    // GPIO1_12 with pull-up (for button input)
    PIN_CONFIG_REG(CONF_GPMC_AD12_OFFSET) = PIN_MODE_7 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;
    
    // GPIO1_13 with pull-down (for open-drain detection)  
    PIN_CONFIG_REG(CONF_GPMC_AD13_OFFSET) = PIN_MODE_7 | PIN_INPUT_PULLDOWN | PIN_SLEWCTRL;
    
    // GPIO1_14 no pull resistor (for analog/high-impedance input)
    PIN_CONFIG_REG(CONF_GPMC_AD14_OFFSET) = PIN_MODE_7 | PIN_INPUT_NOPULL | PIN_SLEWCTRL;
    
    // GPIO1_15 output with pull-up (for open-drain output)
    PIN_CONFIG_REG(CONF_GPMC_AD15_OFFSET) = PIN_MODE_7 | PIN_OUTPUT_PULLUP;
}
```

### Slew Rate Control Implementation
```c
// Configure slew rate for signal integrity
void configure_slew_rates_example(void) {
    // Fast slew rate for high-frequency signals (SPI clock)
    PIN_CONFIG_REG(0x950) = PIN_MODE_0 | PIN_OUTPUT;  // Fast slew (default)
    
    // Slow slew rate for GPIO outputs (reduce EMI)
    PIN_CONFIG_REG(CONF_GPMC_AD12_OFFSET) = PIN_MODE_7 | PIN_OUTPUT | PIN_SLEWCTRL;
    
    // Slow slew for I2C signals (signal integrity)
    PIN_CONFIG_REG(0x988) = PIN_MODE_0 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;  // I2C0_SDA
    PIN_CONFIG_REG(0x98C) = PIN_MODE_0 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;  // I2C0_SCL
}
```

### Runtime Pin Function Switching
```c
// Pin function enumeration
typedef enum {
    PIN_FUNC_GPMC = 0,
    PIN_FUNC_MMC = 1,
    PIN_FUNC_LCD = 2,
    PIN_FUNC_GPIO = 7
} pin_function_t;

// Runtime pin function switching for GPMC/LCD shared pins
void switch_gpmc_lcd_pins(pin_function_t new_function) {
    uint32_t mode_value = (uint32_t)new_function;
    
    // Switch GPMC_AD[12-15] pins to new function (LCD_DATA[23-20] or GPIO)
    for (int i = 12; i <= 15; i++) {
        uint32_t offset = CONF_GPMC_AD12_OFFSET + (i - 12) * 4;
        uint32_t current_config = PIN_CONFIG_REG(offset);
        
        // Clear mode bits and set new mode
        current_config = (current_config & ~PIN_MODE_MASK) | mode_value;
        PIN_CONFIG_REG(offset) = current_config;
    }
}

// Example usage: Switch between GPMC and LCD functions
void switch_to_lcd_mode(void) {
    switch_gpmc_lcd_pins(PIN_FUNC_LCD);
}

void switch_to_gpio_mode(void) {
    switch_gpmc_lcd_pins(PIN_FUNC_GPIO);
}
```

## Generic Pin Configuration Framework

### Pin Configuration Structure
```c
// Pin configuration structure for systematic setup
typedef struct {
    uint32_t offset;    // Register offset from Control Module base
    uint32_t mode;      // Pin mode (0-7)
    bool input;         // True for input, false for output
    enum {
        PULL_NONE,
        PULL_UP, 
        PULL_DOWN
    } pull;
    bool slow_slew;     // True for slow slew rate
} pin_config_t;

// Generic pin configuration function
void configure_pin(const pin_config_t *config) {
    uint32_t value = PIN_MODE(config->mode);
    
    if (config->input) {
        value |= PIN_RXACTIVE;
    }
    
    switch (config->pull) {
        case PULL_UP:
            value |= PIN_PULLTYPESEL;
            break;
        case PULL_DOWN:
            // Pull-down is default (bit cleared)
            break;
        case PULL_NONE:
            value |= PIN_PULLUDEN;
            break;
    }
    
    if (config->slow_slew) {
        value |= PIN_SLEWCTRL;
    }
    
    PIN_CONFIG_REG(config->offset) = value;
}

// Batch pin configuration
void configure_pins_batch(const pin_config_t *configs, size_t count) {
    for (size_t i = 0; i < count; i++) {
        configure_pin(&configs[i]);
    }
}
```

### Application-Specific Pin Setup
```c
// Standard peripheral pin configurations
void setup_standard_peripherals(void) {
    // UART0 configuration (Debug console)
    pin_config_t uart0_pins[] = {
        {0x970, 0, true, PULL_UP, true},      // UART0_RXD
        {0x974, 0, false, PULL_NONE, true}   // UART0_TXD
    };
    configure_pins_batch(uart0_pins, 2);
    
    // I2C0 configuration (System I2C)  
    pin_config_t i2c0_pins[] = {
        {0x988, 0, true, PULL_UP, true},      // I2C0_SDA
        {0x98C, 0, true, PULL_UP, true}      // I2C0_SCL
    };
    configure_pins_batch(i2c0_pins, 2);
    
    // SPI0 configuration (External flash/sensors)
    pin_config_t spi0_pins[] = {
        {0x950, 0, false, PULL_NONE, false}, // SPI0_SCLK
        {0x954, 0, false, PULL_NONE, false}, // SPI0_MOSI  
        {0x958, 0, true, PULL_UP, false},    // SPI0_MISO
        {0x95C, 0, false, PULL_NONE, false}  // SPI0_CS0
    };
    configure_pins_batch(spi0_pins, 4);
}

// GPIO-specific pin setup for common use cases
void setup_application_gpio_pins(void) {
    // LED outputs (GPIO1_12-15)
    pin_config_t led_pins[] = {
        {CONF_GPMC_AD12_OFFSET, 7, false, PULL_NONE, true},  // LED0
        {CONF_GPMC_AD13_OFFSET, 7, false, PULL_NONE, true},  // LED1  
        {CONF_GPMC_AD14_OFFSET, 7, false, PULL_NONE, true},  // LED2
        {CONF_GPMC_AD15_OFFSET, 7, false, PULL_NONE, true}   // LED3
    };
    configure_pins_batch(led_pins, 4);
    
    // Button inputs (GPIO0 pins)
    pin_config_t button_pins[] = {
        {0x964, 7, true, PULL_UP, true},   // Button 0
        {0x968, 7, true, PULL_UP, true},   // Button 1
        {0x96C, 7, true, PULL_UP, true}    // Button 2  
    };
    configure_pins_batch(button_pins, 3);
}
```

## Debugging and Verification

### Pin Configuration Debugging
```c
// Debug pin configuration utility
void debug_pin_config(uint32_t offset) {
    uint32_t config = PIN_CONFIG_REG(offset);
    
    printf("Pin config at offset 0x%03X: 0x%08X\n", offset, config);
    printf("  Mode: %d\n", config & PIN_MODE_MASK);
    printf("  Pull: %s\n", (config & PIN_PULLUDEN) ? "Disabled" : 
                          (config & PIN_PULLTYPESEL) ? "Pull-up" : "Pull-down");
    printf("  Input: %s\n", (config & PIN_RXACTIVE) ? "Enabled" : "Disabled");
    printf("  Slew: %s\n", (config & PIN_SLEWCTRL) ? "Slow" : "Fast");
}

// Verify GPIO pin configuration
bool verify_gpio_pin_config(uint32_t offset) {
    uint32_t config = PIN_CONFIG_REG(offset);
    
    // Check if configured as GPIO (mode 7)
    return (config & PIN_MODE_MASK) == PIN_MODE_7;
}

// Print all GPIO pin configurations
void debug_all_gpio_pins(void) {
    printf("GPIO Pin Configuration Status:\n");
    
    // Check GPIO1 pins (GPMC_AD pins)
    for (int i = 0; i <= 15; i++) {
        uint32_t offset = 0x800 + i * 4;
        if (verify_gpio_pin_config(offset)) {
            printf("  GPIO1_%d: ", i);
            debug_pin_config(offset);
        }
    }
}
```

### Integration with GPIO System
```c
// Complete GPIO pin setup with multiplexing and GPIO configuration
void setup_complete_gpio_pin(uint32_t pin_offset, uint32_t gpio_bank, 
                           uint32_t pin_num, bool is_input) {
    // Step 1: Configure pin multiplexing  
    if (is_input) {
        PIN_CONFIG_REG(pin_offset) = PIN_MODE_7 | PIN_INPUT_PULLUP | PIN_SLEWCTRL;
    } else {
        PIN_CONFIG_REG(pin_offset) = PIN_MODE_7 | PIN_OUTPUT;
    }
    
    // Step 2: Configure GPIO direction (assumes GPIO functions available)
    // This would integrate with GPIO register access
    // gpio_configure_direction(gpio_bank, pin_num, is_input);
    
    // Step 3: Enable GPIO clock if needed  
    // enable_gpio_clock(gpio_bank);
}

// Example: Complete setup for GPIO1_12 as output LED
void setup_gpio1_12_led(void) {
    setup_complete_gpio_pin(CONF_GPMC_AD12_OFFSET, 1, 12, false);
}

// Example: Complete setup for GPIO1_13 as input button
void setup_gpio1_13_button(void) {
    setup_complete_gpio_pin(CONF_GPMC_AD13_OFFSET, 1, 13, true);
}
```

## Performance Considerations

### Efficient Pin Configuration
```c
// Minimize register accesses for related pins
void configure_gpio_bank_efficient(uint32_t start_offset, uint32_t pin_count, 
                                 uint32_t config_value) {
    for (uint32_t i = 0; i < pin_count; i++) {
        PIN_CONFIG_REG(start_offset + i * 4) = config_value;
    }
}

// Batch configuration for performance-critical applications  
void configure_parallel_interface_pins(void) {
    // Configure 8-bit parallel data bus (GPIO2[7:0]) efficiently
    uint32_t gpio2_config = PIN_MODE_7 | PIN_OUTPUT;
    
    configure_gpio_bank_efficient(0x890, 8, gpio2_config);
}
```

## Related Documentation

- [Pin Multiplexing Guide](../peripherals/gpio/pinmux.md) - Hardware pin mapping and specifications
- [GPIO Implementation](./gpio-usage.md) - GPIO register programming examples  
- [GPIO Registers](../registers/gpio-registers.md) - Complete GPIO register reference
- [Control Module Registers](../registers/control-registers.md) - Pin mux register details