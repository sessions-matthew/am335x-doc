# Interrupt Implementation Guide - AM3358

## Overview

This guide provides practical examples and best practices for implementing interrupt handling on the AM3358 SoC. It covers both the main ARM INTC and PRU-ICSS interrupt systems with real-world code examples.

## Prerequisites

Before implementing interrupt handling, ensure you understand:
- [Interrupt System Overview](../interrupts/interrupt-system.md) - System architecture
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - IRQ number assignments  
- [INTC Registers](../registers/intc-registers.md) - Register-level programming

## Basic Interrupt Setup

### 1. System Initialization

```c
#include <stdint.h>

// INTC Base Address
#define INTC_BASE           0x48200000
#define INTC                ((volatile uint32_t *)INTC_BASE)

// Register Offsets (in 32-bit words)
#define INTC_REVISION       (0x000/4)
#define INTC_SYSCONFIG      (0x010/4)
#define INTC_SYSSTATUS      (0x014/4)
#define INTC_SIR_IRQ        (0x040/4)
#define INTC_SIR_FIQ        (0x044/4)
#define INTC_CONTROL        (0x048/4)
#define INTC_PROTECTION     (0x04C/4)
#define INTC_IDLE           (0x050/4)
#define INTC_IRQ_PRIORITY   (0x060/4)
#define INTC_FIQ_PRIORITY   (0x064/4)
#define INTC_THRESHOLD      (0x068/4)

// Mask registers
#define INTC_MIR0           (0x090/4)
#define INTC_MIR1           (0x094/4)
#define INTC_MIR2           (0x098/4)
#define INTC_MIR3           (0x09C/4)

// Mask clear registers  
#define INTC_MIR_CLEAR0     (0x0A0/4)
#define INTC_MIR_CLEAR1     (0x0A4/4)
#define INTC_MIR_CLEAR2     (0x0A8/4)
#define INTC_MIR_CLEAR3     (0x0AC/4)

// Individual interrupt configuration
#define INTC_ILR_BASE       0x100

/**
 * Initialize the ARM Interrupt Controller
 */
void intc_init(void) {
    // Perform soft reset
    INTC[INTC_SYSCONFIG] = 0x02;
    
    // Wait for reset completion
    while (!(INTC[INTC_SYSSTATUS] & 0x01));
    
    // Configure system settings
    INTC[INTC_SYSCONFIG] = 0x00;    // Smart idle, no auto-gating
    INTC[INTC_IDLE] = 0x00;         // Normal operation mode
    INTC[INTC_THRESHOLD] = 0xFF;    // Enable all priority levels
    INTC[INTC_PROTECTION] = 0x00;   // Allow register access
    
    // Mask all interrupts initially
    INTC[INTC_MIR0] = 0xFFFFFFFF;
    INTC[INTC_MIR1] = 0xFFFFFFFF;
    INTC[INTC_MIR2] = 0xFFFFFFFF;
    INTC[INTC_MIR3] = 0xFFFFFFFF;
}
```

### 2. Configure Individual Interrupts

```c
/**
 * Configure an interrupt's priority and routing
 * @param irq_num: Interrupt number (0-127)
 * @param priority: Priority level (0=highest, 7=lowest)
 * @param use_fiq: 1 for FIQ, 0 for IRQ
 */
void intc_configure_interrupt(uint8_t irq_num, uint8_t priority, uint8_t use_fiq) {
    uint32_t ilr_offset = (INTC_ILR_BASE + irq_num * 4) / 4;
    uint32_t config = (priority << 2) | (use_fiq & 0x01);
    
    INTC[ilr_offset] = config;
}

/**
 * Enable a specific interrupt
 * @param irq_num: Interrupt number (0-127)
 */
void intc_enable_interrupt(uint8_t irq_num) {
    uint8_t reg_idx = irq_num / 32;
    uint8_t bit_pos = irq_num % 32;
    uint32_t clear_reg = INTC_MIR_CLEAR0 + reg_idx;
    
    INTC[clear_reg] = (1 << bit_pos);
}

/**
 * Disable a specific interrupt  
 * @param irq_num: Interrupt number (0-127)
 */
void intc_disable_interrupt(uint8_t irq_num) {
    uint8_t reg_idx = irq_num / 32;
    uint8_t bit_pos = irq_num % 32;
    uint32_t set_reg = INTC_MIR_SET0 + reg_idx;
    
    INTC[set_reg] = (1 << bit_pos);
}
```

### 3. Main Interrupt Handler

```c
/**
 * Main IRQ handler - called by ARM exception vector
 */
void irq_handler(void) {
    uint32_t irq_num;
    
    // Read active interrupt number
    irq_num = INTC[INTC_SIR_IRQ] & 0x7F;
    
    // Check for spurious interrupt
    if (irq_num == 127) {
        // Spurious interrupt - just acknowledge and return
        INTC[INTC_CONTROL] = 0x01;
        return;
    }
    
    // Dispatch to appropriate handler
    interrupt_dispatch(irq_num);
    
    // Acknowledge interrupt completion
    INTC[INTC_CONTROL] = 0x01;
}

/**
 * FIQ handler - called by ARM exception vector
 */
void fiq_handler(void) {
    uint32_t fiq_num;
    
    // Read active FIQ number
    fiq_num = INTC[INTC_SIR_FIQ] & 0x7F;
    
    // Handle FIQ (typically single, high-priority source)
    fast_interrupt_handler(fiq_num);
    
    // Acknowledge FIQ completion
    INTC[INTC_CONTROL] = 0x02;
}
```

## Peripheral-Specific Examples

### UART Interrupt Handling

```c
#define UART0_BASE          0x44E09000
#define UART0_IRQ           62

#define UART_IER_OFFSET     0x04
#define UART_IIR_OFFSET     0x08
#define UART_LSR_OFFSET     0x14
#define UART_RBR_OFFSET     0x00
#define UART_THR_OFFSET     0x00

// UART interrupt types
#define UART_IIR_RHR        0x04    // Receiver holding register
#define UART_IIR_THR        0x02    // Transmitter holding register
#define UART_IIR_LSR        0x06    // Line status

/**
 * Initialize UART0 interrupts
 */
void uart0_interrupt_init(void) {
    volatile uint32_t *uart0 = (uint32_t *)UART0_BASE;
    
    // Configure UART0 interrupt in INTC
    intc_configure_interrupt(UART0_IRQ, 3, 0);  // Priority 3, IRQ
    intc_enable_interrupt(UART0_IRQ);
    
    // Enable UART interrupts
    uart0[UART_IER_OFFSET/4] = 0x01;  // Enable RHR interrupt
}

/**
 * UART0 interrupt service routine
 */
void uart0_isr(void) {
    volatile uint32_t *uart0 = (uint32_t *)UART0_BASE;
    uint32_t iir, lsr;
    
    // Read interrupt identification
    iir = uart0[UART_IIR_OFFSET/4] & 0x0F;
    
    switch (iir) {
        case UART_IIR_RHR:
            // Receive data available
            while (uart0[UART_LSR_OFFSET/4] & 0x01) {
                uint8_t data = uart0[UART_RBR_OFFSET/4] & 0xFF;
                uart_receive_char(data);
            }
            break;
            
        case UART_IIR_THR:
            // Transmitter holding register empty
            uart_transmit_ready();
            break;
            
        case UART_IIR_LSR:
            // Line status error
            lsr = uart0[UART_LSR_OFFSET/4];
            uart_handle_error(lsr);
            break;
    }
}
```

### GPIO Interrupt Handling

```c
#define GPIO0_BASE          0x44E07000
#define GPIO0_IRQ_A         86
#define GPIO0_IRQ_B         87

#define GPIO_IRQSTATUS_0    0x2C
#define GPIO_IRQSTATUS_1    0x30  
#define GPIO_IRQENABLE_0    0x34
#define GPIO_IRQENABLE_1    0x38
#define GPIO_RISINGDETECT   0x148
#define GPIO_FALLINGDETECT  0x14C

/**
 * Configure GPIO pin for interrupt
 * @param pin: GPIO pin number (0-31)
 * @param rising: Enable rising edge detection
 * @param falling: Enable falling edge detection
 */
void gpio0_configure_interrupt(uint8_t pin, uint8_t rising, uint8_t falling) {
    volatile uint32_t *gpio0 = (uint32_t *)GPIO0_BASE;
    uint32_t pin_mask = (1 << pin);
    
    // Configure edge detection
    if (rising) {
        gpio0[GPIO_RISINGDETECT/4] |= pin_mask;
    }
    if (falling) {
        gpio0[GPIO_FALLINGDETECT/4] |= pin_mask;
    }
    
    // Enable interrupt for pin (using interrupt line 0)
    gpio0[GPIO_IRQENABLE_0/4] |= pin_mask;
    
    // Configure and enable in INTC
    intc_configure_interrupt(GPIO0_IRQ_A, 2, 0);  // High priority
    intc_enable_interrupt(GPIO0_IRQ_A);
}

/**
 * GPIO0 interrupt service routine
 */
void gpio0_isr(void) {
    volatile uint32_t *gpio0 = (uint32_t *)GPIO0_BASE;
    uint32_t status;
    
    // Read interrupt status
    status = gpio0[GPIO_IRQSTATUS_0/4];
    
    // Clear interrupts
    gpio0[GPIO_IRQSTATUS_0/4] = status;
    
    // Handle each pin that triggered
    for (int pin = 0; pin < 32; pin++) {
        if (status & (1 << pin)) {
            gpio_pin_interrupt_handler(pin);
        }
    }
}
```

### Timer Interrupt Handling

```c
#define DMTIMER2_BASE       0x48040000
#define DMTIMER2_IRQ        68

#define TIMER_TISR          0x18
#define TIMER_TIER          0x1C
#define TIMER_TCLR          0x24
#define TIMER_TCRR          0x28
#define TIMER_TLDR          0x2C
#define TIMER_TMAR          0x38

// Timer interrupt flags
#define TIMER_IRQ_MAT       0x01    // Match interrupt
#define TIMER_IRQ_OVF       0x02    // Overflow interrupt
#define TIMER_IRQ_TCAR      0x04    // Capture interrupt

/**
 * Configure timer for periodic interrupts
 * @param period_ms: Interrupt period in milliseconds
 */
void timer2_interrupt_init(uint32_t period_ms) {
    volatile uint32_t *timer = (uint32_t *)DMTIMER2_BASE;
    uint32_t reload_value;
    
    // Calculate reload value (assuming 24MHz clock)
    reload_value = 0xFFFFFFFF - (period_ms * 24000);
    
    // Stop timer
    timer[TIMER_TCLR/4] = 0x00;
    
    // Configure timer
    timer[TIMER_TLDR/4] = reload_value;     // Auto-reload value
    timer[TIMER_TCRR/4] = reload_value;     // Current value
    timer[TIMER_TIER/4] = TIMER_IRQ_OVF;    // Enable overflow interrupt
    
    // Configure INTC
    intc_configure_interrupt(DMTIMER2_IRQ, 4, 0);  // Medium priority
    intc_enable_interrupt(DMTIMER2_IRQ);
    
    // Start timer with auto-reload
    timer[TIMER_TCLR/4] = 0x03;  // Start + auto-reload
}

/**
 * Timer2 interrupt service routine
 */
void timer2_isr(void) {
    volatile uint32_t *timer = (uint32_t *)DMTIMER2_BASE;
    uint32_t status;
    
    // Read interrupt status
    status = timer[TIMER_TISR/4];
    
    // Clear interrupts
    timer[TIMER_TISR/4] = status;
    
    if (status & TIMER_IRQ_OVF) {
        // Handle timer overflow (periodic tick)
        system_tick_handler();
    }
    
    if (status & TIMER_IRQ_MAT) {
        // Handle timer match
        timer_match_handler();
    }
}
```

## PRU-ICSS Interrupt Integration

### ARM-to-PRU Communication

```c
#define PRU_INTC_BASE       0x4A320000
#define PRU_INTC            ((volatile uint32_t *)PRU_INTC_BASE)

// PRU-ICSS INTC Register offsets
#define PRU_INTC_SECR0      (0x280/4)
#define PRU_INTC_ESR0       (0x300/4)
#define PRU_INTC_HIPIR0     (0x900/4)

/**
 * Send interrupt to PRU core
 * @param event_num: System event number (0-63)
 */
void send_interrupt_to_pru(uint8_t event_num) {
    if (event_num < 32) {
        PRU_INTC[PRU_INTC_SRSR0] = (1 << event_num);
    } else {
        PRU_INTC[PRU_INTC_SRSR1] = (1 << (event_num - 32));
    }
}

/**
 * Handle PRU-to-ARM interrupt
 */
void pru_host_interrupt_handler(uint8_t host_num) {
    uint32_t hipir;
    uint32_t event_num;
    
    // Read highest priority interrupt
    hipir = PRU_INTC[PRU_INTC_HIPIR0 + host_num];
    
    if (!(hipir & 0x80000000)) {  // Check if interrupt pending
        event_num = hipir & 0x3FF;
        
        // Process the PRU event
        process_pru_event(event_num);
        
        // Clear the event
        if (event_num < 32) {
            PRU_INTC[PRU_INTC_SECR0] = (1 << event_num);
        } else {
            PRU_INTC[PRU_INTC_SECR1] = (1 << (event_num - 32));
        }
    }
}
```

## Advanced Interrupt Techniques

### Nested Interrupt Handling

```c
// Global interrupt nesting counter
static volatile uint32_t interrupt_nesting_level = 0;

/**
 * Enter critical section (disable interrupts)
 */
uint32_t enter_critical_section(void) {
    uint32_t cpsr;
    
    // Read current CPSR and disable IRQ
    __asm__ volatile (
        "mrs %0, cpsr\n"
        "orr r1, %0, #0x80\n"  // Set IRQ disable bit
        "msr cpsr_c, r1\n"
        : "=r" (cpsr)
        :
        : "r1"
    );
    
    return cpsr;
}

/**
 * Exit critical section (restore interrupt state)
 */
void exit_critical_section(uint32_t cpsr) {
    __asm__ volatile (
        "msr cpsr_c, %0\n"
        :
        : "r" (cpsr)
    );
}

/**
 * Nestable interrupt handler
 */
void nestable_irq_handler(void) {
    uint32_t irq_num;
    uint32_t old_threshold;
    
    interrupt_nesting_level++;
    
    // Read active interrupt
    irq_num = INTC[INTC_SIR_IRQ] & 0x7F;
    
    if (irq_num != 127) {  // Not spurious
        // Get current interrupt priority
        uint8_t current_priority = (INTC[INTC_IRQ_PRIORITY] & 0x7F) >> 2;
        
        // Set threshold to current priority to allow higher priority interrupts
        old_threshold = INTC[INTC_THRESHOLD];
        INTC[INTC_THRESHOLD] = current_priority;
        
        // Acknowledge current interrupt to allow nesting
        INTC[INTC_CONTROL] = 0x01;
        
        // Re-enable interrupts for higher priority
        __asm__ volatile ("cpsie i");
        
        // Handle the interrupt
        interrupt_dispatch(irq_num);
        
        // Disable interrupts before cleanup
        __asm__ volatile ("cpsid i");
        
        // Restore threshold
        INTC[INTC_THRESHOLD] = old_threshold;
    } else {
        // Spurious interrupt
        INTC[INTC_CONTROL] = 0x01;
    }
    
    interrupt_nesting_level--;
}
```

### Interrupt Coalescing

```c
#define MAX_COALESCED_INTERRUPTS 16

struct interrupt_event {
    uint8_t irq_num;
    uint32_t timestamp;
    void *data;
};

static struct interrupt_event coalesced_events[MAX_COALESCED_INTERRUPTS];
static volatile uint8_t event_count = 0;
static volatile uint8_t coalescing_active = 0;

/**
 * Start interrupt coalescing
 */
void start_interrupt_coalescing(void) {
    coalescing_active = 1;
    event_count = 0;
    
    // Start coalescing timer (e.g., 1ms)
    timer2_interrupt_init(1);
}

/**
 * Coalesced interrupt handler
 */
void coalesced_interrupt_handler(uint8_t irq_num) {
    if (coalescing_active && event_count < MAX_COALESCED_INTERRUPTS) {
        // Store event for later processing
        coalesced_events[event_count].irq_num = irq_num;
        coalesced_events[event_count].timestamp = get_system_time();
        event_count++;
    } else {
        // Process immediately if coalescing disabled or buffer full
        interrupt_dispatch(irq_num);
    }
}

/**
 * Process coalesced interrupts (called by timer)
 */
void process_coalesced_interrupts(void) {
    uint8_t i;
    uint32_t saved_state = enter_critical_section();
    
    // Process all coalesced events
    for (i = 0; i < event_count; i++) {
        interrupt_dispatch(coalesced_events[i].irq_num);
    }
    
    // Reset event count
    event_count = 0;
    
    exit_critical_section(saved_state);
}
```

## Performance Optimization

### Fast Interrupt Response

```c
/**
 * Optimized FIQ handler for single high-priority interrupt
 * This should be placed in fast memory (OCMC RAM)
 */
__attribute__((section(".fast_code")))
void optimized_fiq_handler(void) {
    // Minimize register usage and memory accesses
    volatile uint32_t *gpio0 = (uint32_t *)GPIO0_BASE;
    uint32_t status;
    
    // Read and clear GPIO interrupt in single operation
    status = gpio0[GPIO_IRQSTATUS_0/4];
    gpio0[GPIO_IRQSTATUS_0/4] = status;
    
    // Minimal processing - set flag for main loop
    if (status & 0x01) {  // Pin 0 interrupt
        emergency_flag = 1;
    }
    
    // Quick FIQ acknowledgment
    INTC[INTC_CONTROL] = 0x02;
}
```

### Interrupt Load Balancing

```c
/**
 * Monitor interrupt load and adjust priorities
 */
void monitor_interrupt_performance(void) {
    static uint32_t interrupt_counts[128] = {0};
    static uint32_t last_check_time = 0;
    uint32_t current_time = get_system_time();
    
    // Check every second
    if (current_time - last_check_time > 1000) {
        // Analyze interrupt rates
        for (int i = 0; i < 128; i++) {
            if (interrupt_counts[i] > 1000) {  // High rate interrupt
                // Consider lowering priority or coalescing
                adjust_interrupt_priority(i, 6);  // Lower priority
            }
        }
        
        // Reset counters
        memset(interrupt_counts, 0, sizeof(interrupt_counts));
        last_check_time = current_time;
    }
}
```

## Error Handling and Debug

### Interrupt Storm Protection

```c
#define MAX_INTERRUPT_RATE  10000  // Max interrupts per second per source

static uint32_t interrupt_rate_counters[128] = {0};
static uint32_t interrupt_timestamps[128] = {0};

/**
 * Check for interrupt storm and protect system
 */
int check_interrupt_storm(uint8_t irq_num) {
    uint32_t current_time = get_system_time();
    uint32_t time_diff = current_time - interrupt_timestamps[irq_num];
    
    if (time_diff < 1000) {  // Within 1 second
        interrupt_rate_counters[irq_num]++;
        
        if (interrupt_rate_counters[irq_num] > MAX_INTERRUPT_RATE) {
            // Disable runaway interrupt
            intc_disable_interrupt(irq_num);
            
            // Log error
            log_error("Interrupt storm detected on IRQ %d", irq_num);
            
            return -1;  // Storm detected
        }
    } else {
        // Reset counter for new time window
        interrupt_rate_counters[irq_num] = 1;
        interrupt_timestamps[irq_num] = current_time;
    }
    
    return 0;  // Normal operation
}
```

### Debug and Profiling

```c
/**
 * Interrupt latency measurement
 */
void measure_interrupt_latency(uint8_t irq_num) {
    static uint32_t latency_measurements[128] = {0};
    uint32_t start_time, end_time, latency;
    
    // Record start time (should be set by hardware or early in ISR)
    start_time = interrupt_start_times[irq_num];
    end_time = get_system_time();
    
    latency = end_time - start_time;
    
    // Update running average
    latency_measurements[irq_num] = 
        (latency_measurements[irq_num] * 7 + latency) / 8;
    
    // Alert if latency too high
    if (latency > 1000) {  // 1ms threshold
        log_warning("High interrupt latency: IRQ %d, %d us", irq_num, latency);
    }
}
```

## Best Practices Summary

### Do's
1. **Keep ISRs Short**: Minimize time spent in interrupt context
2. **Use Appropriate Priorities**: Assign based on real-time requirements
3. **Proper Acknowledgment**: Always acknowledge interrupts correctly
4. **Error Handling**: Implement robust error detection and recovery
5. **Testing**: Thoroughly test interrupt interactions and edge cases

### Don'ts  
1. **Don't Block in ISRs**: Avoid long-running operations
2. **Don't Use Non-Reentrant Functions**: Avoid malloc, printf, etc.
3. **Don't Ignore Spurious Interrupts**: Always handle IRQ 127
4. **Don't Forget Memory Barriers**: Use appropriate synchronization
5. **Don't Share Resources Without Locking**: Protect shared data structures

### Performance Tips
1. **Use Fast Memory**: Place critical ISRs in OCMC RAM
2. **Minimize Register Access**: Cache frequently used values
3. **Optimize Priority Assignment**: Higher priority for time-critical interrupts
4. **Consider Coalescing**: Group related low-priority interrupts
5. **Monitor Performance**: Track latency and interrupt rates

## Enhanced INTC Register Programming

### Advanced Register Access Macros
```c
// Enhanced register access with offset calculations
#define INTC_REG(offset)        (*(volatile uint32_t*)(INTC_BASE + (offset)))
#define INTC_ITR(n)            INTC_REG(0x080 + ((n) * 4))
#define INTC_MIR(n)            INTC_REG(0x090 + ((n) * 4))  
#define INTC_MIR_CLEAR(n)      INTC_REG(0x0A0 + ((n) * 4))
#define INTC_MIR_SET(n)        INTC_REG(0x0B0 + ((n) * 4))
#define INTC_ISR_SET(n)        INTC_REG(0x0C0 + ((n) * 4))
#define INTC_ISR_CLEAR(n)      INTC_REG(0x0D0 + ((n) * 4))
#define INTC_PENDING_IRQ(n)    INTC_REG(0x0E0 + ((n) * 4))
#define INTC_PENDING_FIQ(n)    INTC_REG(0x0F0 + ((n) * 4))
#define INTC_ILR(n)            INTC_REG(0x100 + ((n) * 4))

// Utility macros for interrupt management
#define IRQ_REG_INDEX(irq)     ((irq) / 32)
#define IRQ_BIT_MASK(irq)      (1U << ((irq) % 32))
```

### Comprehensive Interrupt Management Functions
```c
// Enhanced interrupt configuration with validation
int intc_configure_interrupt_enhanced(uint32_t irq_num, uint32_t priority, bool is_fiq) {
    if (irq_num > 127 || priority > 127) {
        return -1;  // Invalid parameters
    }
    
    // Configure priority and routing
    uint32_t ilr_value = (priority << 2) | (is_fiq ? 0x02 : 0x00);
    INTC_ILR(irq_num) = ilr_value;
    
    return 0;  // Success
}

// Atomic interrupt enable/disable operations
void intc_enable_interrupt_atomic(uint32_t irq_num) {
    uint32_t reg_index = IRQ_REG_INDEX(irq_num);
    uint32_t bit_mask = IRQ_BIT_MASK(irq_num);
    
    // Atomic clear of mask bit (enable interrupt)
    INTC_MIR_CLEAR(reg_index) = bit_mask;
}

void intc_disable_interrupt_atomic(uint32_t irq_num) {
    uint32_t reg_index = IRQ_REG_INDEX(irq_num);
    uint32_t bit_mask = IRQ_BIT_MASK(irq_num);
    
    // Atomic set of mask bit (disable interrupt)
    INTC_MIR_SET(reg_index) = bit_mask;
}

// Check interrupt status functions
bool intc_is_interrupt_pending(uint32_t irq_num) {
    uint32_t reg_index = IRQ_REG_INDEX(irq_num);
    uint32_t bit_mask = IRQ_BIT_MASK(irq_num);
    
    return (INTC_PENDING_IRQ(reg_index) & bit_mask) != 0;
}

bool intc_is_interrupt_enabled(uint32_t irq_num) {
    uint32_t reg_index = IRQ_REG_INDEX(irq_num);
    uint32_t bit_mask = IRQ_BIT_MASK(irq_num);
    
    // Interrupt is enabled when MIR bit is 0
    return (INTC_MIR(reg_index) & bit_mask) == 0;
}

// Software interrupt testing
void intc_trigger_software_interrupt(uint32_t irq_num) {
    uint32_t reg_index = IRQ_REG_INDEX(irq_num);
    uint32_t bit_mask = IRQ_BIT_MASK(irq_num);
    
    INTC_ITR(reg_index) = bit_mask;
}

void intc_clear_software_interrupt(uint32_t irq_num) {
    uint32_t reg_index = IRQ_REG_INDEX(irq_num);
    uint32_t bit_mask = IRQ_BIT_MASK(irq_num);
    
    INTC_ITR(reg_index) = 0;  // Clear all bits in register
}
```

### Priority and Threshold Management
```c
// Advanced priority management
void intc_set_priority_threshold(uint32_t threshold) {
    if (threshold <= 127) {
        INTC_REG(INTC_THRESHOLD) = threshold & 0xFF;
    }
}

uint32_t intc_get_priority_threshold(void) {
    return INTC_REG(INTC_THRESHOLD) & 0xFF;
}

uint32_t intc_get_current_irq_priority(void) {
    return INTC_REG(INTC_IRQ_PRIORITY) & 0x7F;
}

uint32_t intc_get_current_fiq_priority(void) {
    return INTC_REG(INTC_FIQ_PRIORITY) & 0x7F;
}

// Check for spurious interrupts
bool intc_is_spurious_irq(void) {
    return (INTC_REG(INTC_IRQ_PRIORITY) & 0x80) != 0;
}

bool intc_is_spurious_fiq(void) {
    return (INTC_REG(INTC_FIQ_PRIORITY) & 0x80) != 0;
}
```

### System-Level Interrupt Control
```c
// Processor-level interrupt control
void intc_enable_processor_irq(void) {
    __asm__ volatile(
        "mrs r0, cpsr\n"
        "bic r0, r0, #0x80\n"    // Clear IRQ disable bit
        "msr cpsr_c, r0\n"
        ::: "r0"
    );
}

void intc_disable_processor_irq(void) {
    __asm__ volatile(
        "mrs r0, cpsr\n"
        "orr r0, r0, #0x80\n"    // Set IRQ disable bit
        "msr cpsr_c, r0\n"
        ::: "r0"
    );
}

void intc_enable_processor_fiq(void) {
    __asm__ volatile(
        "mrs r0, cpsr\n"
        "bic r0, r0, #0x40\n"    // Clear FIQ disable bit
        "msr cpsr_c, r0\n"
        ::: "r0"
    );
}

void intc_disable_processor_fiq(void) {
    __asm__ volatile(
        "mrs r0, cpsr\n"
        "orr r0, r0, #0x40\n"    // Set FIQ disable bit
        "msr cpsr_c, r0\n"
        ::: "r0"
    );
}

// Complete system initialization
void intc_system_init(void) {
    // Initialize INTC hardware
    intc_init();
    
    // Configure common peripheral interrupts
    setup_peripheral_interrupts();
    
    // Enable processor interrupts
    intc_enable_processor_irq();
    intc_enable_processor_fiq();
}

void setup_peripheral_interrupts(void) {
    // UART interrupts
    intc_configure_interrupt_enhanced(72, 2, false);  // UART0
    intc_configure_interrupt_enhanced(73, 2, false);  // UART1
    
    // GPIO interrupts
    intc_configure_interrupt_enhanced(96, 1, false);  // GPIO0
    intc_configure_interrupt_enhanced(98, 1, false);  // GPIO1
    intc_configure_interrupt_enhanced(32, 1, false);  // GPIO2
    intc_configure_interrupt_enhanced(62, 1, false);  // GPIO3
    
    // Timer interrupts
    intc_configure_interrupt_enhanced(66, 3, false);  // DMTIMER0
    intc_configure_interrupt_enhanced(67, 2, false);  // DMTIMER1_1MS
    
    // Enable configured interrupts
    intc_enable_interrupt_atomic(72);  // UART0
    intc_enable_interrupt_atomic(96);  // GPIO0
    intc_enable_interrupt_atomic(67);  // DMTIMER1_1MS
}
```

## Related Documentation

- [Interrupt System Overview](../interrupts/interrupt-system.md) - Architecture overview
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - Complete IRQ listings
- [INTC Registers](../registers/intc-registers.md) - Register reference
- [PRU-ICSS Interrupts](../interrupts/pru-icss-interrupts.md) - PRU interrupt system

## References

- AM335x Technical Reference Manual, Chapter 6 (Interrupts)
- ARM Cortex-A8 Technical Reference Manual
- ARM Architecture Reference Manual
- Real-time Systems Design and Analysis (Burns & Wellings)