# GPIO Register Programming Guide - AM3358

## Overview

This document provides comprehensive programming examples for the AM3358 GPIO modules. All four GPIO banks (GPIO0-3) share identical register sets, allowing consistent programming approaches across different banks.

## GPIO Base Addresses and Definitions

```c
// GPIO base addresses
#define GPIO0_BASE    0x44E07000  // WKUP domain - always-on
#define GPIO1_BASE    0x4804C000  // PER domain
#define GPIO2_BASE    0x481AC000  // PER domain  
#define GPIO3_BASE    0x481AE000  // PER domain

// Register offset definitions
#define GPIO_REVISION         0x000
#define GPIO_SYSCONFIG        0x010
#define GPIO_EOI              0x020
#define GPIO_IRQSTATUS_RAW_0  0x024
#define GPIO_IRQSTATUS_RAW_1  0x028
#define GPIO_IRQSTATUS_0      0x02C
#define GPIO_IRQSTATUS_1      0x030
#define GPIO_IRQSTATUS_SET_0  0x034
#define GPIO_IRQSTATUS_SET_1  0x038
#define GPIO_IRQSTATUS_CLR_0  0x03C
#define GPIO_IRQSTATUS_CLR_1  0x040
#define GPIO_IRQWAKEN_0       0x044
#define GPIO_IRQWAKEN_1       0x048
#define GPIO_SYSSTATUS        0x114
#define GPIO_CTRL             0x130
#define GPIO_OE               0x134
#define GPIO_DATAIN           0x138
#define GPIO_DATAOUT          0x13C
#define GPIO_LEVELDETECT0     0x140
#define GPIO_LEVELDETECT1     0x144
#define GPIO_RISINGDETECT     0x148
#define GPIO_FALLINGDETECT    0x14C
#define GPIO_DEBOUNCENABLE    0x150
#define GPIO_DEBOUNCINGTIME   0x154
#define GPIO_CLEARDATAOUT     0x190
#define GPIO_SETDATAOUT       0x194

// Register access macros
#define GPIO_REG(base, offset)  (*(volatile uint32_t*)((base) + (offset)))

// Specific register definitions for GPIO1
#define GPIO1_OE              GPIO_REG(GPIO1_BASE, GPIO_OE)
#define GPIO1_DATAIN          GPIO_REG(GPIO1_BASE, GPIO_DATAIN)
#define GPIO1_DATAOUT         GPIO_REG(GPIO1_BASE, GPIO_DATAOUT)
#define GPIO1_SETDATAOUT      GPIO_REG(GPIO1_BASE, GPIO_SETDATAOUT)
#define GPIO1_CLEARDATAOUT    GPIO_REG(GPIO1_BASE, GPIO_CLEARDATAOUT)
#define GPIO1_IRQSTATUS_0     GPIO_REG(GPIO1_BASE, GPIO_IRQSTATUS_0)
#define GPIO1_IRQSTATUS_SET_0 GPIO_REG(GPIO1_BASE, GPIO_IRQSTATUS_SET_0)
#define GPIO1_RISINGDETECT    GPIO_REG(GPIO1_BASE, GPIO_RISINGDETECT)
#define GPIO1_FALLINGDETECT   GPIO_REG(GPIO1_BASE, GPIO_FALLINGDETECT)

// Clock management registers
#define CM_PER_GPIO1_CLKCTRL  (*(volatile uint32_t*)0x44E000AC)
#define CM_PER_GPIO2_CLKCTRL  (*(volatile uint32_t*)0x44E000B0)
#define CM_PER_GPIO3_CLKCTRL  (*(volatile uint32_t*)0x44E000B4)
#define CM_WKUP_GPIO0_CLKCTRL (*(volatile uint32_t*)0x44E00408)
```

## System Configuration Programming

### GPIO Module Configuration

```c
// Configure GPIO for smart-idle with wake-up capability
void configure_gpio_system(uint32_t gpio_base) {
    volatile uint32_t *sysconfig = (volatile uint32_t*)(gpio_base + GPIO_SYSCONFIG);
    
    *sysconfig = (0x2 << 3) |  // Smart-idle mode
                 (1 << 2) |     // Enable wake-up
                 (1 << 0);      // Enable auto-idle
}

// Wait for GPIO module reset completion
bool wait_gpio_reset_complete(uint32_t gpio_base) {
    volatile uint32_t *sysstatus = (volatile uint32_t*)(gpio_base + GPIO_SYSSTATUS);
    uint32_t timeout = 1000;
    
    while (timeout-- && (*sysstatus & 0x1) == 0) {
        // Wait for RESETDONE bit
    }
    
    return (*sysstatus & 0x1) != 0;
}
```

## Basic GPIO Operations

### Pin Direction Control

```c
// Configure GPIO1_12 as output
void set_gpio1_12_output(void) {
    GPIO1_OE &= ~(1 << 12);  // Clear bit = output
}

// Configure GPIO1_15 as input  
void set_gpio1_15_input(void) {
    GPIO1_OE |= (1 << 15);   // Set bit = input
}

// Configure pins 0-7 as outputs, 8-15 as inputs
void set_gpio1_mixed_directions(void) {
    GPIO1_OE = (GPIO1_OE & 0xFFFF0000) | 0x0000FF00;
}

// Generic function for setting pin direction
void set_gpio_direction(uint32_t gpio_base, uint32_t pin, bool is_input) {
    volatile uint32_t *oe_reg = (volatile uint32_t*)(gpio_base + GPIO_OE);
    
    if (is_input) {
        *oe_reg |= (1 << pin);   // Set bit = input
    } else {
        *oe_reg &= ~(1 << pin);  // Clear bit = output
    }
}
```

### Output Control

#### Direct Register Access
```c
// Set single pin high
void set_gpio1_12_high(void) {
    GPIO1_DATAOUT |= (1 << 12);
}

// Set single pin low
void set_gpio1_12_low(void) {
    GPIO1_DATAOUT &= ~(1 << 12);
}

// Set multiple pins (bits 0-3 high, others unchanged)
void set_gpio1_lower_nibble(void) {
    GPIO1_DATAOUT = (GPIO1_DATAOUT & 0xFFFFFFF0) | 0x0F;
}
```

#### Atomic Set/Clear Operations
```c
// Atomic set - set pins 5 and 12 high simultaneously
void atomic_set_gpio1_pins(void) {
    GPIO1_SETDATAOUT = (1 << 5) | (1 << 12);
}

// Atomic clear - clear pins 3 and 7 simultaneously
void atomic_clear_gpio1_pins(void) {
    GPIO1_CLEARDATAOUT = (1 << 3) | (1 << 7);
}

// Toggle pin using atomic operations
void toggle_gpio1_pin10(void) {
    if (GPIO1_DATAOUT & (1 << 10)) {
        GPIO1_CLEARDATAOUT = (1 << 10);
    } else {
        GPIO1_SETDATAOUT = (1 << 10);
    }
}

// Generic atomic operations
void gpio_atomic_set(uint32_t gpio_base, uint32_t pin_mask) {
    volatile uint32_t *set_reg = (volatile uint32_t*)(gpio_base + GPIO_SETDATAOUT);
    *set_reg = pin_mask;
}

void gpio_atomic_clear(uint32_t gpio_base, uint32_t pin_mask) {
    volatile uint32_t *clear_reg = (volatile uint32_t*)(gpio_base + GPIO_CLEARDATAOUT);
    *clear_reg = pin_mask;
}
```

### Input Reading

```c
// Read single pin state
bool read_gpio1_pin12(void) {
    return (GPIO1_DATAIN & (1 << 12)) != 0;
}

// Read multiple pins
uint32_t read_gpio1_lower_byte(void) {
    return GPIO1_DATAIN & 0xFF;
}

// Generic pin reading function
bool gpio_read_pin(uint32_t gpio_base, uint32_t pin) {
    volatile uint32_t *datain_reg = (volatile uint32_t*)(gpio_base + GPIO_DATAIN);
    return (*datain_reg & (1 << pin)) != 0;
}

// Read pin state with debounce check
bool gpio_read_pin_debounced(uint32_t gpio_base, uint32_t pin, uint32_t samples) {
    uint32_t high_count = 0;
    
    for (uint32_t i = 0; i < samples; i++) {
        if (gpio_read_pin(gpio_base, pin)) {
            high_count++;
        }
        // Small delay between samples
        for (volatile int delay = 0; delay < 1000; delay++);
    }
    
    return high_count > (samples / 2);
}
```

## Interrupt Configuration

### Basic Interrupt Setup

```c
// Enable GPIO1_15 interrupt on line 0
void enable_gpio1_15_interrupt(void) {
    GPIO1_IRQSTATUS_SET_0 |= (1 << 15);
}

// Clear pending interrupt for GPIO1_12
void clear_gpio1_12_interrupt(void) {
    GPIO1_IRQSTATUS_0 = (1 << 12);
}

// Check if GPIO1_8 interrupt is pending
bool is_gpio1_8_interrupt_pending(void) {
    return (GPIO1_IRQSTATUS_0 & (1 << 8)) != 0;
}

// Complete interrupt handling sequence
void handle_gpio1_8_interrupt(void) {
    if (GPIO1_IRQSTATUS_0 & (1 << 8)) {
        // Handle interrupt
        process_gpio1_8_event();
        
        // Clear interrupt
        GPIO1_IRQSTATUS_0 = (1 << 8);
    }
}
```

### Edge and Level Detection

```c
// Configure GPIO2_7 for both edge detection
void setup_gpio2_7_both_edges(void) {
    volatile uint32_t *rising = (volatile uint32_t*)(GPIO2_BASE + GPIO_RISINGDETECT);
    volatile uint32_t *falling = (volatile uint32_t*)(GPIO2_BASE + GPIO_FALLINGDETECT);
    volatile uint32_t *irq_set = (volatile uint32_t*)(GPIO2_BASE + GPIO_IRQSTATUS_SET_0);
    
    *rising |= (1 << 7);   // Rising edge
    *falling |= (1 << 7);  // Falling edge
    *irq_set |= (1 << 7);  // Enable interrupt
}

// Configure GPIO0_22 for high level detection  
void setup_gpio0_22_high_level(void) {
    volatile uint32_t *level1 = (volatile uint32_t*)(GPIO0_BASE + GPIO_LEVELDETECT1);
    volatile uint32_t *irq_set = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQSTATUS_SET_0);
    
    *level1 |= (1 << 22);   // High level
    *irq_set |= (1 << 22);  // Enable interrupt
}

// Configure GPIO3_12 for low level detection
void setup_gpio3_12_low_level(void) {
    volatile uint32_t *level0 = (volatile uint32_t*)(GPIO3_BASE + GPIO_LEVELDETECT0);
    volatile uint32_t *irq_set = (volatile uint32_t*)(GPIO3_BASE + GPIO_IRQSTATUS_SET_1);
    
    *level0 |= (1 << 12);   // Low level  
    *irq_set |= (1 << 12);  // Enable on line 1
}
```

## Debounce Configuration

```c
// Configure 10ms debounce for GPIO1_13 (button input)
void setup_gpio1_13_debounce(void) {
    volatile uint32_t *debounce_time = (volatile uint32_t*)(GPIO1_BASE + GPIO_DEBOUNCINGTIME);
    volatile uint32_t *debounce_en = (volatile uint32_t*)(GPIO1_BASE + GPIO_DEBOUNCENABLE);
    
    // 10ms / 31µs ≈ 323 (0x143)
    *debounce_time = 323;
    *debounce_en |= (1 << 13);
}

// Configure 1ms debounce for GPIO0_4
void setup_gpio0_4_debounce(void) {
    volatile uint32_t *debounce_time = (volatile uint32_t*)(GPIO0_BASE + GPIO_DEBOUNCINGTIME);
    volatile uint32_t *debounce_en = (volatile uint32_t*)(GPIO0_BASE + GPIO_DEBOUNCENABLE);
    
    // 1ms / 31µs ≈ 32 (0x20)  
    *debounce_time = 32;
    *debounce_en |= (1 << 4);
}

// Disable debounce for GPIO2_18
void disable_gpio2_18_debounce(void) {
    volatile uint32_t *debounce_en = (volatile uint32_t*)(GPIO2_BASE + GPIO_DEBOUNCENABLE);
    *debounce_en &= ~(1 << 18);
}

// Generic debounce configuration
void gpio_configure_debounce(uint32_t gpio_base, uint32_t pin, uint32_t time_us) {
    volatile uint32_t *debounce_time = (volatile uint32_t*)(gpio_base + GPIO_DEBOUNCINGTIME);
    volatile uint32_t *debounce_en = (volatile uint32_t*)(gpio_base + GPIO_DEBOUNCENABLE);
    
    uint32_t debounce_value = time_us / 31;  // Convert to debounce units
    if (debounce_value > 255) debounce_value = 255;  // Clamp to max
    
    *debounce_time = debounce_value;
    *debounce_en |= (1 << pin);
}
```

## Wake-up Configuration

```c
// Configure GPIO0_31 as wake-up source (power button)
void setup_gpio0_31_wakeup(void) {
    volatile uint32_t *oe = (volatile uint32_t*)(GPIO0_BASE + GPIO_OE);
    volatile uint32_t *falling = (volatile uint32_t*)(GPIO0_BASE + GPIO_FALLINGDETECT);
    volatile uint32_t *irq_set = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQSTATUS_SET_0);
    volatile uint32_t *wakeup = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQWAKEN_0);
    
    *oe |= (1 << 31);              // Input
    *falling |= (1 << 31);         // Falling edge (button press)
    *irq_set |= (1 << 31);         // Enable interrupt
    *wakeup |= (1 << 31);          // Enable wake-up
}

// Multiple wake-up sources
void setup_multiple_wakeup_sources(void) {
    volatile uint32_t *wakeup = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQWAKEN_0);
    
    uint32_t wakeup_pins = (1 << 12) | (1 << 15) | (1 << 20);
    *wakeup |= wakeup_pins;
}

// Generic wake-up configuration
void gpio_enable_wakeup(uint32_t gpio_base, uint32_t pin, bool line1) {
    uint32_t offset = line1 ? GPIO_IRQWAKEN_1 : GPIO_IRQWAKEN_0;
    volatile uint32_t *wakeup_reg = (volatile uint32_t*)(gpio_base + offset);
    *wakeup_reg |= (1 << pin);
}
```

## Complete Setup Examples

### LED Control Setup

```c
// Complete setup for GPIO1_12 as output with LED control
void setup_gpio1_12_led(void) {
    // 1. Enable GPIO1 clock
    CM_PER_GPIO1_CLKCTRL = 0x2;
    while ((CM_PER_GPIO1_CLKCTRL & 0x30000) != 0x0);
    
    // 2. Configure pin direction as output
    GPIO1_OE &= ~(1 << 12);  // Output
    
    // 3. Set initial state (LED off)
    GPIO1_CLEARDATAOUT = (1 << 12);
    
    // GPIO1_12 is now ready for LED control
}

void led_on(void) {
    GPIO1_SETDATAOUT = (1 << 12);
}

void led_off(void) {
    GPIO1_CLEARDATAOUT = (1 << 12);
}

void led_toggle(void) {
    if (GPIO1_DATAOUT & (1 << 12)) {
        GPIO1_CLEARDATAOUT = (1 << 12);
    } else {
        GPIO1_SETDATAOUT = (1 << 12);
    }
}
```

### Interrupt-Driven Button Input

```c
// Complete button input setup with interrupt
void setup_button_interrupt(void) {
    // 1. Enable GPIO0 clock (always-on domain)
    CM_WKUP_GPIO0_CLKCTRL = 0x2;
    while ((CM_WKUP_GPIO0_CLKCTRL & 0x30000) != 0x0);
    
    // 2. Configure pin as input
    volatile uint32_t *oe = (volatile uint32_t*)(GPIO0_BASE + GPIO_OE);
    *oe |= (1 << 30);  // Input
    
    // 3. Configure debounce (5ms)
    volatile uint32_t *debounce_time = (volatile uint32_t*)(GPIO0_BASE + GPIO_DEBOUNCINGTIME);
    volatile uint32_t *debounce_en = (volatile uint32_t*)(GPIO0_BASE + GPIO_DEBOUNCENABLE);
    *debounce_time = 161;  // 5ms / 31µs ≈ 161
    *debounce_en |= (1 << 30);
    
    // 4. Configure falling edge detection (button press)
    volatile uint32_t *falling = (volatile uint32_t*)(GPIO0_BASE + GPIO_FALLINGDETECT);
    *falling |= (1 << 30);
    
    // 5. Clear any pending interrupts
    volatile uint32_t *irq_status = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQSTATUS_0);
    *irq_status = (1 << 30);
    
    // 6. Enable interrupt on line 0
    volatile uint32_t *irq_set = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQSTATUS_SET_0);
    *irq_set |= (1 << 30);
    
    // 7. Enable wake-up capability
    volatile uint32_t *wakeup = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQWAKEN_0);
    *wakeup |= (1 << 30);
    
    // 8. Configure INTC for GPIO0 IRQ (96)
    configure_system_interrupt(96, gpio0_button_handler);
}

void gpio0_button_handler(void) {
    volatile uint32_t *irq_status = (volatile uint32_t*)(GPIO0_BASE + GPIO_IRQSTATUS_0);
    volatile uint32_t *eoi = (volatile uint32_t*)(GPIO0_BASE + GPIO_EOI);
    
    if (*irq_status & (1 << 30)) {
        // Handle button press
        handle_button_press();
        
        // Clear interrupt
        *irq_status = (1 << 30);
    }
    
    // End of interrupt
    *eoi = 0x1;
}
```

### Multi-Pin Parallel Interface

```c
// 8-bit parallel output interface using GPIO2[7:0]
void setup_parallel_output(void) {
    // Enable GPIO2
    CM_PER_GPIO2_CLKCTRL = 0x2;
    while ((CM_PER_GPIO2_CLKCTRL & 0x30000) != 0x0);
    
    // Configure pins 0-7 as outputs
    volatile uint32_t *oe = (volatile uint32_t*)(GPIO2_BASE + GPIO_OE);
    *oe &= ~0xFF;  // Clear bits 0-7 = outputs
    
    // Initialize to all low
    volatile uint32_t *clear_reg = (volatile uint32_t*)(GPIO2_BASE + GPIO_CLEARDATAOUT);
    *clear_reg = 0xFF;
}

void write_parallel_data(uint8_t data) {
    volatile uint32_t *clear_reg = (volatile uint32_t*)(GPIO2_BASE + GPIO_CLEARDATAOUT);
    volatile uint32_t *set_reg = (volatile uint32_t*)(GPIO2_BASE + GPIO_SETDATAOUT);
    
    // Atomic update of 8-bit data
    *clear_reg = 0xFF;              // Clear all bits
    *set_reg = (uint32_t)data;      // Set new data
}

uint8_t read_parallel_data(void) {
    volatile uint32_t *datain = (volatile uint32_t*)(GPIO2_BASE + GPIO_DATAIN);
    return (uint8_t)(*datain & 0xFF);
}

// Parallel interface with direction control
void setup_bidirectional_parallel(void) {
    CM_PER_GPIO2_CLKCTRL = 0x2;
    while ((CM_PER_GPIO2_CLKCTRL & 0x30000) != 0x0);
    
    // Start as inputs
    set_parallel_direction(true);
}

void set_parallel_direction(bool input_mode) {
    volatile uint32_t *oe = (volatile uint32_t*)(GPIO2_BASE + GPIO_OE);
    
    if (input_mode) {
        *oe |= 0xFF;   // Set bits = inputs
    } else {
        *oe &= ~0xFF;  // Clear bits = outputs
    }
}
```

## Advanced GPIO Patterns

### Bit-Banged Protocols

```c
// Bit-banged SPI master using GPIO pins
#define SPI_CLK_PIN  10
#define SPI_MOSI_PIN 11
#define SPI_MISO_PIN 12
#define SPI_CS_PIN   13

void gpio_spi_init(void) {
    // Configure pins
    GPIO1_OE &= ~((1 << SPI_CLK_PIN) | (1 << SPI_MOSI_PIN) | (1 << SPI_CS_PIN));  // Outputs
    GPIO1_OE |= (1 << SPI_MISO_PIN);  // Input
    
    // Initial states
    GPIO1_SETDATAOUT = (1 << SPI_CS_PIN);    // CS high (inactive)
    GPIO1_CLEARDATAOUT = (1 << SPI_CLK_PIN); // CLK low
}

uint8_t gpio_spi_transfer(uint8_t data) {
    uint8_t result = 0;
    
    GPIO1_CLEARDATAOUT = (1 << SPI_CS_PIN);  // CS active
    
    for (int bit = 7; bit >= 0; bit--) {
        // Set MOSI
        if (data & (1 << bit)) {
            GPIO1_SETDATAOUT = (1 << SPI_MOSI_PIN);
        } else {
            GPIO1_CLEARDATAOUT = (1 << SPI_MOSI_PIN);
        }
        
        // Clock high
        GPIO1_SETDATAOUT = (1 << SPI_CLK_PIN);
        
        // Read MISO
        if (GPIO1_DATAIN & (1 << SPI_MISO_PIN)) {
            result |= (1 << bit);
        }
        
        // Clock low
        GPIO1_CLEARDATAOUT = (1 << SPI_CLK_PIN);
    }
    
    GPIO1_SETDATAOUT = (1 << SPI_CS_PIN);  // CS inactive
    
    return result;
}
```

### GPIO Matrix Keypad

```c
// 4x4 matrix keypad scanning
#define KEYPAD_ROWS    4
#define KEYPAD_COLS    4
#define ROW_START_PIN  16  // GPIO1[19:16] = rows
#define COL_START_PIN  20  // GPIO1[23:20] = columns

void keypad_init(void) {
    // Rows as outputs (drive low to scan)
    for (int i = 0; i < KEYPAD_ROWS; i++) {
        GPIO1_OE &= ~(1 << (ROW_START_PIN + i));  // Output
        GPIO1_SETDATAOUT = (1 << (ROW_START_PIN + i));  // High (inactive)
    }
    
    // Columns as inputs with pull-ups (external)
    for (int i = 0; i < KEYPAD_COLS; i++) {
        GPIO1_OE |= (1 << (COL_START_PIN + i));  // Input
    }
}

int scan_keypad(void) {
    for (int row = 0; row < KEYPAD_ROWS; row++) {
        // Drive current row low
        GPIO1_CLEARDATAOUT = (1 << (ROW_START_PIN + row));
        
        // Small delay for settling
        for (volatile int d = 0; d < 100; d++);
        
        // Check all columns
        for (int col = 0; col < KEYPAD_COLS; col++) {
            if ((GPIO1_DATAIN & (1 << (COL_START_PIN + col))) == 0) {
                // Key pressed at [row][col]
                GPIO1_SETDATAOUT = (1 << (ROW_START_PIN + row));  // Restore row
                return (row * KEYPAD_COLS) + col;
            }
        }
        
        // Restore row high
        GPIO1_SETDATAOUT = (1 << (ROW_START_PIN + row));
    }
    
    return -1;  // No key pressed
}
```

## Performance Optimization

### Bulk Operations

```c
// Efficient multi-pin configuration
void configure_gpio_bank_bulk(uint32_t gpio_base, uint32_t start_pin, 
                             uint32_t pin_count, bool output_mode) {
    volatile uint32_t *oe_reg = (volatile uint32_t*)(gpio_base + GPIO_OE);
    
    // Create mask for the pin range
    uint32_t mask = ((1 << pin_count) - 1) << start_pin;
    
    if (output_mode) {
        *oe_reg &= ~mask;  // Clear bits = outputs
    } else {
        *oe_reg |= mask;   // Set bits = inputs
    }
}

// Efficient parallel data update
void update_parallel_bus(uint32_t gpio_base, uint32_t data, uint32_t mask) {
    volatile uint32_t *clear_reg = (volatile uint32_t*)(gpio_base + GPIO_CLEARDATAOUT);
    volatile uint32_t *set_reg = (volatile uint32_t*)(gpio_base + GPIO_SETDATAOUT);
    
    // Clear all bits in the mask first
    *clear_reg = mask;
    
    // Set only the bits that should be high
    *set_reg = data & mask;
}
```

### Memory-Mapped Register Caching

```c
// Structure for cached GPIO register access
typedef struct {
    volatile uint32_t *oe;
    volatile uint32_t *datain;
    volatile uint32_t *dataout;
    volatile uint32_t *setdataout;
    volatile uint32_t *cleardataout;
    volatile uint32_t *irqstatus_0;
} gpio_regs_t;

// Initialize cached register pointers
void init_gpio_cache(gpio_regs_t *gpio, uint32_t base) {
    gpio->oe = (volatile uint32_t*)(base + GPIO_OE);
    gpio->datain = (volatile uint32_t*)(base + GPIO_DATAIN);
    gpio->dataout = (volatile uint32_t*)(base + GPIO_DATAOUT);
    gpio->setdataout = (volatile uint32_t*)(base + GPIO_SETDATAOUT);
    gpio->cleardataout = (volatile uint32_t*)(base + GPIO_CLEARDATAOUT);
    gpio->irqstatus_0 = (volatile uint32_t*)(base + GPIO_IRQSTATUS_0);
}

// Fast pin operations using cached registers
static inline void gpio_fast_set(gpio_regs_t *gpio, uint32_t pin) {
    *gpio->setdataout = (1 << pin);
}

static inline void gpio_fast_clear(gpio_regs_t *gpio, uint32_t pin) {
    *gpio->cleardataout = (1 << pin);
}

static inline bool gpio_fast_read(gpio_regs_t *gpio, uint32_t pin) {
    return (*gpio->datain & (1 << pin)) != 0;
}
```

## Error Handling and Diagnostics

```c
// GPIO diagnostics and validation
typedef struct {
    bool clock_enabled;
    bool module_active;
    uint32_t pin_directions;
    uint32_t pin_states;
    uint32_t active_interrupts;
} gpio_status_t;

bool gpio_get_status(uint32_t gpio_base, gpio_status_t *status) {
    // Check if registers are accessible
    volatile uint32_t *revision = (volatile uint32_t*)(gpio_base + GPIO_REVISION);
    if (*revision == 0 || *revision == 0xFFFFFFFF) {
        return false;  // Module not accessible
    }
    
    volatile uint32_t *oe = (volatile uint32_t*)(gpio_base + GPIO_OE);
    volatile uint32_t *datain = (volatile uint32_t*)(gpio_base + GPIO_DATAIN);
    volatile uint32_t *irqstatus = (volatile uint32_t*)(gpio_base + GPIO_IRQSTATUS_0);
    
    status->module_active = true;
    status->pin_directions = ~(*oe);  // Invert: 1=output, 0=input
    status->pin_states = *datain;
    status->active_interrupts = *irqstatus;
    
    return true;
}

// Validate GPIO pin configuration
bool gpio_validate_pin_config(uint32_t gpio_base, uint32_t pin) {
    if (pin > 31) return false;
    
    gpio_status_t status;
    if (!gpio_get_status(gpio_base, &status)) {
        return false;
    }
    
    // Additional validation checks can be added here
    return true;
}
```

## Related Documentation

- [Pin Multiplexing Implementation](./pinmux-usage.md) - Pin mux programming examples
- [Clock System Implementation](./clock-usage.md) - GPIO clock configuration examples
- [GPIO Register Reference](../registers/gpio-registers.md) - Complete register specification
- [Interrupt System Guide](../interrupts/interrupt-system.md) - System interrupt integration