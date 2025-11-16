# Timer Interrupts and Events - AM3358

## Overview

The AM3358 timer subsystem provides comprehensive interrupt and event handling capabilities. Each timer can generate multiple types of interrupts and events that enable precise timing control, PWM generation, input capture, and system synchronization.

## Timer Interrupt Architecture

### Interrupt Sources

Each DMTIMER generates interrupts from three main sources:

#### 1. Overflow Interrupt (OVF)
- **Trigger**: Counter transitions from 0xFFFFFFFF to 0x00000000
- **Usage**: Periodic timing, system tick generation
- **Auto-reload**: Counter reloads from TLDR register
- **Flag**: IRQ_OVF_IT_FLAG (bit 1 in IRQSTATUS)

#### 2. Match Interrupt (MAT)
- **Trigger**: Counter value equals TMAR register value
- **Usage**: Compare operations, PWM generation, specific timing events
- **Behavior**: Occurs once per counter cycle at match point
- **Flag**: IRQ_MAT_IT_FLAG (bit 0 in IRQSTATUS)

#### 3. Capture Interrupt (TCAR)
- **Trigger**: External event on timer input pin (Timer4-7 only)
- **Usage**: Input capture, event timestamping, frequency measurement
- **Modes**: Single or dual capture
- **Flag**: IRQ_TCAR_IT_FLAG (bit 2 in IRQSTATUS)

### Interrupt Vector Assignments

| Timer | IRQ Number | INTC Priority | Wake-up Capable |
|-------|------------|---------------|-----------------|
| TIMER0 | 66 | Configurable | Yes |
| TIMER1 | 67 | Configurable | Yes |
| TIMER2 | 68 | Configurable | No |
| TIMER3 | 69 | Configurable | No |
| TIMER4 | 92 | Configurable | No |
| TIMER5 | 93 | Configurable | No |
| TIMER6 | 94 | Configurable | No |
| TIMER7 | 95 | Configurable | No |

### Interrupt Control Registers

#### IRQSTATUS_RAW (0x24)
Raw interrupt status before masking:
| Bit | Field | Description |
|-----|-------|-------------|
| 0 | MAT_IT_FLAG | Match interrupt raw status |
| 1 | OVF_IT_FLAG | Overflow interrupt raw status |
| 2 | TCAR_IT_FLAG | Capture interrupt raw status |

#### IRQSTATUS (0x28)
Masked interrupt status (read) / Clear interrupts (write):
| Bit | Field | Description |
|-----|-------|-------------|
| 0 | MAT_IT_FLAG | Match interrupt status |
| 1 | OVF_IT_FLAG | Overflow interrupt status |
| 2 | TCAR_IT_FLAG | Capture interrupt status |

#### IRQENABLE_SET (0x2C)
Enable interrupts (write 1 to enable):
| Bit | Field | Description |
|-----|-------|-------------|
| 0 | MAT_IT_ENABLE | Enable match interrupt |
| 1 | OVF_IT_ENABLE | Enable overflow interrupt |
| 2 | TCAR_IT_ENABLE | Enable capture interrupt |

#### IRQENABLE_CLR (0x30)
Disable interrupts (write 1 to disable):
| Bit | Field | Description |
|-----|-------|-------------|
| 0 | MAT_IT_ENABLE | Disable match interrupt |
| 1 | OVF_IT_ENABLE | Disable overflow interrupt |
| 2 | TCAR_IT_ENABLE | Disable capture interrupt |

#### IRQWAKEEN (0x34)
Wake-up enable (Timer0/1 only):
| Bit | Field | Description |
|-----|-------|-------------|
| 0 | MAT_WUP_ENA | Enable match wake-up |
| 1 | OVF_WUP_ENA | Enable overflow wake-up |
| 2 | TCAR_WUP_ENA | Enable capture wake-up |

## Interrupt Programming Guide

### Basic Interrupt Setup

```c
#include "timer_interrupts.h"

/**
 * Configure timer interrupts
 */
void timer_configure_interrupts(volatile uint32_t *timer_base, uint32_t int_mask) {
    volatile uint32_t *timer = timer_base;
    
    /* Clear any pending interrupts */
    timer[TIMER_IRQSTATUS/4] = 0x07;  /* Clear all */
    
    /* Enable specified interrupts */
    timer[TIMER_IRQENABLE_SET/4] = int_mask;
}

/**
 * Generic timer interrupt service routine
 */
void timer_interrupt_handler(int timer_num) {
    volatile uint32_t *timer = timer_bases[timer_num];
    uint32_t int_status;
    
    /* Read interrupt status */
    int_status = timer[TIMER_IRQSTATUS/4];
    
    /* Handle overflow interrupt */
    if (int_status & IRQ_OVF_IT_FLAG) {
        timer_handle_overflow(timer_num);
    }
    
    /* Handle match interrupt */
    if (int_status & IRQ_MAT_IT_FLAG) {
        timer_handle_match(timer_num);
    }
    
    /* Handle capture interrupt */
    if (int_status & IRQ_TCAR_IT_FLAG) {
        timer_handle_capture(timer_num);
    }
    
    /* Clear handled interrupts */
    timer[TIMER_IRQSTATUS/4] = int_status;
    
    /* Write End of Interrupt */
    timer[TIMER_IRQ_EOI/4] = 0x01;
}
```

### System Tick Implementation

```c
/* System tick variables */
static volatile uint32_t system_tick_count = 0;
static volatile uint32_t system_time_ms = 0;

/**
 * Configure Timer1 for 1ms system tick
 */
void setup_system_tick(void) {
    volatile uint32_t *timer = (uint32_t *)TIMER1_BASE;
    
    /* Enable timer clock */
    timer_enable_clock(1);
    timer_set_clock_source(1, CLKSEL_CLK_32KHZ);
    
    /* Configure for 1ms period */
    timer[TIMER_TCLR/4] = 0;  /* Stop timer */
    timer[TIMER_TLDR/4] = 0xFFFFFFE0;  /* ~1ms at 32kHz */
    timer[TIMER_TCRR/4] = 0xFFFFFFE0;  /* Load counter */
    
    /* Configure fine timing for precise 1ms */
    timer[TIMER1MS_TPIR/4] = 232000;    /* Positive increment */
    timer[TIMER1MS_TNIR/4] = -768000;   /* Negative increment */
    
    /* Enable overflow interrupt */
    timer_configure_interrupts(timer, IRQ_OVF_IT_FLAG);
    
    /* Enable interrupt in INTC */
    intc_enable_interrupt(TIMER1_IRQ);
    intc_set_priority(TIMER1_IRQ, 0);  /* Highest priority */
    
    /* Start timer */
    timer[TIMER_TCLR/4] = TCLR_ST | TCLR_AR;  /* Start with auto-reload */
}

/**
 * System tick interrupt handler
 */
void timer_handle_overflow(int timer_num) {
    if (timer_num == 1) {  /* System tick timer */
        system_tick_count++;
        system_time_ms++;
        
        /* Call system tick hook */
        if (system_tick_hook) {
            system_tick_hook();
        }
        
        /* Process delayed function calls */
        process_delayed_calls();
        
        /* Update software timers */
        update_software_timers();
    }
}

/**
 * Get system time in milliseconds
 */
uint32_t get_system_time_ms(void) {
    return system_time_ms;
}

/**
 * Get high-resolution system time
 */
uint64_t get_system_time_us(void) {
    volatile uint32_t *timer = (uint32_t *)TIMER1_BASE;
    uint32_t ms, counter, sub_ms;
    uint64_t total_us;
    
    /* Atomic read of time components */
    do {
        ms = system_time_ms;
        counter = timer[TIMER_TCRR/4];
        sub_ms = timer[TIMER1MS_TCVR/4];
    } while (ms != system_time_ms);  /* Ensure consistent read */
    
    /* Convert to microseconds */
    total_us = (uint64_t)ms * 1000;
    total_us += (sub_ms * 1000) / 32768;  /* Convert sub-ms to microseconds */
    
    return total_us;
}
```

### PWM Interrupt Control

```c
/* PWM control structure */
typedef struct {
    volatile uint32_t *timer_base;
    uint32_t frequency;
    uint32_t duty_cycle;
    uint32_t period_cycles;
    bool interrupt_enabled;
    void (*period_callback)(void);
    void (*match_callback)(void);
} pwm_channel_t;

static pwm_channel_t pwm_channels[4];  /* Timer4-7 */

/**
 * Setup PWM with interrupt callbacks
 */
void setup_pwm_with_interrupts(int timer_num, uint32_t freq_hz, uint32_t duty_percent,
                               void (*period_cb)(void), void (*match_cb)(void)) {
    if (timer_num < 4 || timer_num > 7) return;
    
    int channel = timer_num - 4;
    pwm_channel_t *pwm = &pwm_channels[channel];
    volatile uint32_t *timer = timer_bases[timer_num];
    
    /* Calculate timing parameters */
    uint32_t timer_clock = 24000000;  /* 24 MHz */
    pwm->period_cycles = timer_clock / freq_hz;
    uint32_t duty_cycles = (pwm->period_cycles * duty_percent) / 100;
    
    /* Configure timer */
    timer[TIMER_TCLR/4] = 0;  /* Stop timer */
    timer[TIMER_TLDR/4] = 0xFFFFFFFF - pwm->period_cycles + 1;
    timer[TIMER_TMAR/4] = 0xFFFFFFFF - pwm->period_cycles + duty_cycles + 1;
    timer[TIMER_TCRR/4] = 0xFFFFFFFF - pwm->period_cycles + 1;
    
    /* Configure PWM mode */
    uint32_t tclr = TCLR_AR | TCLR_CE | TCLR_PT | (1 << TCLR_TRG_SHIFT);
    timer[TIMER_TCLR/4] = tclr;
    
    /* Setup callbacks */
    pwm->timer_base = timer;
    pwm->frequency = freq_hz;
    pwm->duty_cycle = duty_percent;
    pwm->period_callback = period_cb;
    pwm->match_callback = match_cb;
    
    /* Enable interrupts if callbacks provided */
    uint32_t int_mask = 0;
    if (period_cb) int_mask |= IRQ_OVF_IT_FLAG;
    if (match_cb) int_mask |= IRQ_MAT_IT_FLAG;
    
    if (int_mask) {
        timer_configure_interrupts(timer, int_mask);
        intc_enable_interrupt(TIMER0_IRQ + timer_num);
        pwm->interrupt_enabled = true;
    }
    
    /* Start PWM */
    timer[TIMER_TCLR/4] = tclr | TCLR_ST;
}

/**
 * PWM interrupt handlers
 */
void timer_handle_match(int timer_num) {
    if (timer_num >= 4 && timer_num <= 7) {
        int channel = timer_num - 4;
        pwm_channel_t *pwm = &pwm_channels[channel];
        
        if (pwm->match_callback) {
            pwm->match_callback();
        }
    }
}

void timer_handle_overflow_pwm(int timer_num) {
    if (timer_num >= 4 && timer_num <= 7) {
        int channel = timer_num - 4;
        pwm_channel_t *pwm = &pwm_channels[channel];
        
        if (pwm->period_callback) {
            pwm->period_callback();
        }
    }
}
```

### Input Capture Interrupts  

```c
/* Capture data structures */
typedef struct {
    uint32_t timestamp;
    uint32_t period;
    uint32_t pulse_width;
    bool valid;
} capture_data_t;

typedef struct {
    volatile uint32_t *timer_base;
    capture_data_t current_capture;
    capture_data_t last_capture;
    uint32_t capture_count;
    uint8_t capture_mode;  /* 0=single edge, 1=dual edge */
    void (*capture_callback)(int timer_num, capture_data_t *data);
} capture_channel_t;

static capture_channel_t capture_channels[4];  /* Timer4-7 */

/**
 * Setup input capture with interrupts
 */
void setup_input_capture(int timer_num, uint8_t capture_mode, 
                        void (*callback)(int, capture_data_t*)) {
    if (timer_num < 4 || timer_num > 7) return;
    
    int channel = timer_num - 4;
    capture_channel_t *cap = &capture_channels[channel];
    volatile uint32_t *timer = timer_bases[timer_num];
    
    /* Initialize capture channel */
    cap->timer_base = timer;
    cap->capture_mode = capture_mode;
    cap->capture_callback = callback;
    cap->capture_count = 0;
    
    /* Configure timer for free-running mode */
    timer[TIMER_TCLR/4] = 0;  /* Stop timer */
    timer[TIMER_TLDR/4] = 0;  /* Free running */
    timer[TIMER_TCRR/4] = 0;  /* Start from 0 */
    
    /* Configure capture mode */
    uint32_t tclr = TCLR_AR;  /* Auto-reload for continuous operation */
    
    if (capture_mode == 0) {
        /* Single edge capture on rising edge */
        tclr |= (1 << TCLR_TCM_SHIFT);  /* Capture on rising edge */
    } else {
        /* Dual edge capture */
        tclr |= TCLR_CAPT_MODE;         /* Dual capture mode */
        tclr |= (2 << TCLR_TCM_SHIFT);  /* Capture on both edges */
    }
    
    timer[TIMER_TCLR/4] = tclr;
    
    /* Enable capture interrupt */
    timer_configure_interrupts(timer, IRQ_TCAR_IT_FLAG);
    intc_enable_interrupt(TIMER0_IRQ + timer_num);
    
    /* Start timer */
    timer[TIMER_TCLR/4] = tclr | TCLR_ST;
}

/**
 * Capture interrupt handler
 */
void timer_handle_capture(int timer_num) {
    if (timer_num < 4 || timer_num > 7) return;
    
    int channel = timer_num - 4;
    capture_channel_t *cap = &capture_channels[channel];
    volatile uint32_t *timer = cap->timer_base;
    
    /* Read capture values */
    uint32_t capture1 = timer[TIMER_TCAR1/4];
    uint32_t capture2 = timer[TIMER_TCAR2/4];
    
    cap->capture_count++;
    cap->current_capture.timestamp = capture1;
    cap->current_capture.valid = true;
    
    if (cap->capture_mode == 1 && cap->capture_count >= 2) {
        /* Dual edge mode - calculate pulse width */
        if (capture2 >= capture1) {
            cap->current_capture.pulse_width = capture2 - capture1;
        } else {
            /* Handle overflow */
            cap->current_capture.pulse_width = (0xFFFFFFFF - capture1) + capture2 + 1;
        }
    }
    
    if (cap->capture_count >= 2) {
        /* Calculate period from consecutive captures */
        if (cap->current_capture.timestamp >= cap->last_capture.timestamp) {
            cap->current_capture.period = cap->current_capture.timestamp - 
                                         cap->last_capture.timestamp;
        } else {
            /* Handle overflow */
            cap->current_capture.period = (0xFFFFFFFF - cap->last_capture.timestamp) + 
                                         cap->current_capture.timestamp + 1;
        }
    }
    
    /* Call user callback */
    if (cap->capture_callback) {
        cap->capture_callback(timer_num, &cap->current_capture);
    }
    
    /* Save current as last for next calculation */
    cap->last_capture = cap->current_capture;
}

/**
 * Example: Frequency measurement callback
 */
void frequency_measurement_callback(int timer_num, capture_data_t *data) {
    if (data->period > 0) {
        uint32_t frequency = 24000000 / data->period;  /* 24 MHz timer clock */
        printf("Timer%d: Frequency = %u Hz\n", timer_num, frequency);
    }
}

/**
 * Example: Pulse width measurement callback
 */
void pulse_width_callback(int timer_num, capture_data_t *data) {
    if (data->pulse_width > 0) {
        uint32_t width_us = (data->pulse_width * 1000000) / 24000000;
        printf("Timer%d: Pulse width = %u µs\n", timer_num, width_us);
    }
}
```

## Advanced Interrupt Features

### Interrupt Priority Management

```c
/**
 * Configure timer interrupt priorities for real-time systems
 */
void configure_timer_priorities(void) {
    /* System tick - highest priority */
    intc_set_priority(TIMER1_IRQ, 0);
    
    /* Control loops - high priority */
    intc_set_priority(TIMER4_IRQ, 1);  /* Motor control PWM */
    intc_set_priority(TIMER5_IRQ, 1);  /* Servo control */
    
    /* Measurement - medium priority */
    intc_set_priority(TIMER6_IRQ, 2);  /* Frequency measurement */
    intc_set_priority(TIMER7_IRQ, 2);  /* Pulse width measurement */
    
    /* General timing - lower priority */
    intc_set_priority(TIMER2_IRQ, 3);
    intc_set_priority(TIMER3_IRQ, 3);
}
```

### Wake-up Functionality

```c
/**
 * Configure timer wake-up from low-power modes
 */
void setup_timer_wakeup(int timer_num, uint32_t wakeup_sources) {
    volatile uint32_t *timer = timer_bases[timer_num];
    
    /* Only Timer0 and Timer1 support wake-up */
    if (timer_num != 0 && timer_num != 1) return;
    
    /* Enable wake-up sources */
    timer[TIMER_IRQWAKEEN/4] = wakeup_sources;
    
    /* Configure power management */
    configure_timer_power_management(timer_num, true);
}

/**
 * Example: Wake-up on RTC alarm using Timer0
 */
void setup_rtc_alarm_wakeup(uint32_t alarm_seconds) {
    volatile uint32_t *timer = (uint32_t *)TIMER0_BASE;
    
    /* Configure Timer0 for RTC wake-up */
    timer_enable_clock(0);
    timer_set_clock_source(0, CLKSEL_CLK_32KHZ);
    
    /* Calculate alarm count (32.768 kHz clock) */
    uint32_t alarm_count = alarm_seconds * 32768;
    
    /* Configure timer */
    timer[TIMER_TCLR/4] = 0;  /* Stop timer */
    timer[TIMER_TLDR/4] = 0xFFFFFFFF - alarm_count + 1;
    timer[TIMER_TCRR/4] = 0xFFFFFFFF - alarm_count + 1;
    
    /* Enable overflow wake-up */
    setup_timer_wakeup(0, IRQ_OVF_IT_FLAG);
    
    /* Start timer */
    timer[TIMER_TCLR/4] = TCLR_ST | TCLR_AR;
}
```

### Multi-Timer Synchronization

```c
/**
 * Synchronize timer interrupts across multiple timers
 */
typedef struct {
    volatile uint32_t *timer_base;
    uint32_t sync_offset;
    bool sync_enabled;
} timer_sync_t;

static timer_sync_t sync_timers[8];
static volatile bool sync_master_triggered = false;

/**
 * Setup synchronized timer operation
 */
void setup_synchronized_timers(int master_timer, int *slave_timers, 
                              uint32_t *offsets, int count) {
    int i;
    
    /* Configure master timer */
    sync_timers[master_timer].timer_base = timer_bases[master_timer];
    sync_timers[master_timer].sync_offset = 0;
    sync_timers[master_timer].sync_enabled = true;
    
    /* Configure slave timers */
    for (i = 0; i < count; i++) {
        int slave = slave_timers[i];
        sync_timers[slave].timer_base = timer_bases[slave];
        sync_timers[slave].sync_offset = offsets[i];
        sync_timers[slave].sync_enabled = true;
    }
    
    /* Enable interrupts on master timer */
    timer_configure_interrupts(timer_bases[master_timer], IRQ_OVF_IT_FLAG);
}

/**
 * Master timer interrupt triggers synchronized actions
 */
void synchronized_timer_handler(int timer_num) {
    int i;
    
    if (!sync_timers[timer_num].sync_enabled) return;
    
    /* Trigger synchronized actions on all timers */
    for (i = 0; i < 8; i++) {
        if (sync_timers[i].sync_enabled && i != timer_num) {
            /* Perform synchronized action with offset */
            execute_synchronized_action(i, sync_timers[i].sync_offset);
        }
    }
    
    sync_master_triggered = true;
}
```

### Event Chaining and Cascading

```c
/**
 * Chain timer events for complex timing sequences
 */
typedef struct {
    int source_timer;
    int target_timer;
    uint32_t delay_cycles;
    bool active;
} timer_chain_t;

static timer_chain_t timer_chains[8];

/**
 * Setup timer event chaining
 */
void setup_timer_chain(int source, int target, uint32_t delay) {
    timer_chain_t *chain = &timer_chains[source];
    
    chain->source_timer = source;
    chain->target_timer = target;
    chain->delay_cycles = delay;
    chain->active = true;
    
    /* Enable source timer interrupt */
    timer_configure_interrupts(timer_bases[source], IRQ_OVF_IT_FLAG);
}

/**
 * Timer chain handler
 */
void timer_chain_handler(int timer_num) {
    timer_chain_t *chain = &timer_chains[timer_num];
    
    if (!chain->active) return;
    
    /* Trigger target timer with delay */
    volatile uint32_t *target = timer_bases[chain->target_timer];
    
    if (chain->delay_cycles == 0) {
        /* Immediate trigger */
        target[TIMER_TTGR/4] = 1;  /* Trigger target timer */
    } else {
        /* Setup delayed trigger using match interrupt */
        target[TIMER_TMAR/4] = target[TIMER_TCRR/4] + chain->delay_cycles;
        timer_configure_interrupts(target, IRQ_MAT_IT_FLAG);
    }
}
```

## Interrupt Performance Optimization

### Fast Interrupt Handlers

```c
/**
 * Optimized interrupt handler for high-frequency timers
 */
__attribute__((interrupt("IRQ")))
void timer_fast_isr(void) {
    register volatile uint32_t *timer asm("r0") = (uint32_t *)TIMER4_BASE;
    register uint32_t status asm("r1");
    
    /* Fast interrupt status read and clear */
    status = timer[TIMER_IRQSTATUS/4];
    timer[TIMER_IRQSTATUS/4] = status;
    
    /* Minimal processing for high-speed PWM */
    if (status & IRQ_OVF_IT_FLAG) {
        /* Update PWM duty cycle from lookup table */
        timer[TIMER_TMAR/4] = pwm_duty_table[pwm_table_index++];
        if (pwm_table_index >= PWM_TABLE_SIZE) pwm_table_index = 0;
    }
    
    /* Write EOI */
    timer[TIMER_IRQ_EOI/4] = 0x01;
}
```

### Interrupt Latency Reduction

```c
/**
 * Minimize interrupt latency for critical timers
 */
void optimize_timer_interrupt_latency(int timer_num) {
    /* Configure timer for posted mode to reduce write latency */
    volatile uint32_t *timer = timer_bases[timer_num];
    timer[TIMER_TIOCP_CFG/4] = 0x04;  /* Posted mode */
    
    /* Pre-calculate critical values */
    precompute_timer_values(timer_num);
    
    /* Use FIQ for absolute minimum latency */
    intc_configure_fiq(TIMER0_IRQ + timer_num);
    
    /* Disable cache for timer registers if necessary */
    mmu_set_cache_policy((uint32_t)timer, 4096, CACHE_DISABLED);
}
```

### Batch Interrupt Processing

```c
/**
 * Process multiple timer interrupts efficiently
 */
void timer_batch_interrupt_handler(void) {
    uint32_t pending_timers = intc_get_pending_interrupts(TIMER0_IRQ, 8);
    int timer_num = 0;
    
    /* Process all pending timer interrupts in priority order */
    while (pending_timers) {
        if (pending_timers & (1 << timer_num)) {
            /* Clear this timer from pending mask */
            pending_timers &= ~(1 << timer_num);
            
            /* Process this timer's interrupt */
            timer_interrupt_handler(timer_num);
        }
        timer_num++;
    }
}
```

## Debugging Timer Interrupts

### Interrupt Monitoring

```c
/* Interrupt statistics */
typedef struct {
    uint32_t overflow_count;
    uint32_t match_count;
    uint32_t capture_count;
    uint32_t total_interrupts;
    uint32_t max_latency_cycles;
    uint32_t last_timestamp;
} timer_interrupt_stats_t;

static timer_interrupt_stats_t timer_stats[8];

/**
 * Enhanced interrupt handler with statistics
 */
void timer_interrupt_handler_debug(int timer_num) {
    uint32_t entry_time = get_cycle_count();
    volatile uint32_t *timer = timer_bases[timer_num];
    uint32_t int_status;
    timer_interrupt_stats_t *stats = &timer_stats[timer_num];
    
    /* Read and clear interrupt status */
    int_status = timer[TIMER_IRQSTATUS/4];
    timer[TIMER_IRQSTATUS/4] = int_status;
    
    /* Update statistics */
    stats->total_interrupts++;
    if (int_status & IRQ_OVF_IT_FLAG) stats->overflow_count++;
    if (int_status & IRQ_MAT_IT_FLAG) stats->match_count++;
    if (int_status & IRQ_TCAR_IT_FLAG) stats->capture_count++;
    
    /* Measure interrupt latency */
    uint32_t latency = entry_time - stats->last_timestamp;
    if (latency > stats->max_latency_cycles) {
        stats->max_latency_cycles = latency;
    }
    
    /* Process interrupts */
    timer_interrupt_handler(timer_num);
    
    /* Record exit time */
    stats->last_timestamp = get_cycle_count();
    
    /* Write EOI */
    timer[TIMER_IRQ_EOI/4] = 0x01;
}

/**
 * Print interrupt statistics
 */
void print_timer_interrupt_stats(int timer_num) {
    timer_interrupt_stats_t *stats = &timer_stats[timer_num];
    
    printf("Timer %d Interrupt Statistics:\n", timer_num);
    printf("  Total interrupts: %u\n", stats->total_interrupts);
    printf("  Overflow: %u\n", stats->overflow_count);
    printf("  Match: %u\n", stats->match_count);
    printf("  Capture: %u\n", stats->capture_count);
    printf("  Max latency: %u cycles\n", stats->max_latency_cycles);
}
```

### Interrupt Validation

```c
/**
 * Validate timer interrupt configuration
 */
bool validate_timer_interrupts(int timer_num) {
    volatile uint32_t *timer = timer_bases[timer_num];
    bool valid = true;
    
    /* Check if interrupts are properly enabled */
    uint32_t enabled = timer[TIMER_IRQENABLE_SET/4];
    uint32_t status = timer[TIMER_IRQSTATUS/4];
    
    if (enabled == 0) {
        printf("Timer %d: No interrupts enabled\n", timer_num);
        valid = false;
    }
    
    /* Check for stuck interrupts */
    if (status != 0) {
        printf("Timer %d: Pending interrupts not cleared: 0x%X\n", 
               timer_num, status);
        valid = false;
    }
    
    /* Verify INTC configuration */
    if (!intc_is_interrupt_enabled(TIMER0_IRQ + timer_num)) {
        printf("Timer %d: Interrupt not enabled in INTC\n", timer_num);
        valid = false;
    }
    
    return valid;
}
```

## Related Documentation

- [Timer System Overview](timer-system-overview.md) - Complete timer architecture
- [Timer Implementation Guide](timer-usage.md) - Programming examples
- [DMTIMER Register Reference](../../registers/AM335x_DMTIMER_Register_Reference.md) - Register details
- [Interrupt System](../../interrupts/interrupt-system.md) - INTC integration
- [Real-time Programming](../../implementation/real-time-programming.md) - RT considerations

## Summary

The AM3358 timer interrupt system provides:

- **Multiple interrupt sources**: Overflow, match, and capture events
- **Flexible configuration**: Individual enable/disable control
- **Wake-up capability**: Timer0/1 can wake from low-power modes  
- **High performance**: Optimized for real-time applications
- **Comprehensive control**: Full interrupt management through registers
- **System integration**: Complete INTC and power management support

This interrupt architecture enables precise timing control for system ticks, PWM generation, input capture, and complex timing sequences required by real-time embedded applications.