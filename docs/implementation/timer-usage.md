# Timer Implementation Guide - AM3358

## Overview

This document provides comprehensive implementation guidance for using the AM3358 timer subsystem, including initialization, basic timing operations, PWM generation, input capture, and advanced features.

## Basic Timer Setup

### Include Files and Definitions

```c
#include <stdint.h>
#include <stdbool.h>

/* Timer Base Addresses */
#define TIMER0_BASE     0x44E05000
#define TIMER1_BASE     0x44E31000  /* DMTIMER_1MS */
#define TIMER2_BASE     0x48040000
#define TIMER3_BASE     0x48042000
#define TIMER4_BASE     0x48044000
#define TIMER5_BASE     0x48046000
#define TIMER6_BASE     0x48048000
#define TIMER7_BASE     0x4804A000

/* Common Timer Register Offsets */
#define TIMER_TIDR              0x00    /* Identification Register */
#define TIMER_TIOCP_CFG         0x10    /* OCP Configuration */
#define TIMER_IRQ_EOI           0x20    /* End of Interrupt */
#define TIMER_IRQSTATUS_RAW     0x24    /* Raw Interrupt Status */
#define TIMER_IRQSTATUS         0x28    /* Interrupt Status */
#define TIMER_IRQENABLE_SET     0x2C    /* Interrupt Enable Set */
#define TIMER_IRQENABLE_CLR     0x30    /* Interrupt Enable Clear */
#define TIMER_IRQWAKEEN         0x34    /* Wakeup Enable */
#define TIMER_TCLR              0x38    /* Control Register */
#define TIMER_TCRR              0x3C    /* Counter Register */
#define TIMER_TLDR              0x40    /* Load Register */
#define TIMER_TTGR              0x44    /* Trigger Register */
#define TIMER_TWPS              0x48    /* Write Posted Status */
#define TIMER_TMAR              0x4C    /* Match Register */
#define TIMER_TCAR1             0x50    /* Capture Register 1 */
#define TIMER_TSICR             0x54    /* Synchronous Interface Control */
#define TIMER_TCAR2             0x58    /* Capture Register 2 */

/* TIMER1 (1MS) Additional Registers */
#define TIMER1MS_TPIR           0x5C    /* Positive Increment */
#define TIMER1MS_TNIR           0x60    /* Negative Increment */
#define TIMER1MS_TCVR           0x64    /* Current Value */
#define TIMER1MS_TOCR           0x68    /* Overflow Counter */
#define TIMER1MS_TOWR           0x6C    /* Overflow Wrapper */

/* Clock Control Base Addresses */
#define CM_PER_BASE             0x44E00000
#define CM_WKUP_BASE            0x44E00400

/* Clock Control Offsets */
#define CM_PER_TIMER2_CLKCTRL   0x80
#define CM_PER_TIMER3_CLKCTRL   0x84
#define CM_PER_TIMER4_CLKCTRL   0x88
#define CM_PER_TIMER5_CLKCTRL   0xEC
#define CM_PER_TIMER6_CLKCTRL   0xF0
#define CM_PER_TIMER7_CLKCTRL   0x7C
#define CM_WKUP_TIMER0_CLKCTRL  0x10
#define CM_WKUP_TIMER1_CLKCTRL  0xC4

/* Clock Selection Base Address */
#define CLKSEL_BASE             0x44E10500

/* Clock Selection Offsets */ 
#define CLKSEL_TIMER2_CLK       0x08
#define CLKSEL_TIMER3_CLK       0x0C
#define CLKSEL_TIMER4_CLK       0x10
#define CLKSEL_TIMER5_CLK       0x18
#define CLKSEL_TIMER6_CLK       0x1C
#define CLKSEL_TIMER7_CLK       0x04
#define CLKSEL_TIMER1MS_CLK     0x28

/* TCLR Register Bits */
#define TCLR_ST         (1 << 0)    /* Start/Stop */
#define TCLR_AR         (1 << 1)    /* Auto-reload */
#define TCLR_PTV_SHIFT  2           /* Prescaler Value */
#define TCLR_PTV_MASK   (0x7 << TCLR_PTV_SHIFT)
#define TCLR_PRE        (1 << 5)    /* Prescaler Enable */
#define TCLR_CE         (1 << 6)    /* Compare Enable */
#define TCLR_SCPWM      (1 << 7)    /* PWM Output Default */
#define TCLR_TCM_SHIFT  8           /* Transition Capture Mode */
#define TCLR_TCM_MASK   (0x3 << TCLR_TCM_SHIFT)
#define TCLR_TRG_SHIFT  10          /* Trigger Output Mode */
#define TCLR_TRG_MASK   (0x3 << TCLR_TRG_SHIFT)
#define TCLR_PT         (1 << 12)   /* Pulse/Toggle */
#define TCLR_CAPT_MODE  (1 << 13)   /* Capture Mode */
#define TCLR_GPO_CFG    (1 << 14)   /* General Purpose Output */

/* Interrupt Bits */
#define IRQ_MAT_IT_FLAG (1 << 0)    /* Match Interrupt */
#define IRQ_OVF_IT_FLAG (1 << 1)    /* Overflow Interrupt */
#define IRQ_TCAR_IT_FLAG (1 << 2)   /* Capture Interrupt */

/* Clock Sources */
#define CLKSEL_CLK_M_OSC    0       /* 24 MHz */
#define CLKSEL_CLK_32KHZ    1       /* 32.768 kHz */
#define CLKSEL_TCLKIN       2       /* External clock */
#define CLKSEL_CLK_RC32K    3       /* 32 kHz RC */

/* Timer IRQ Numbers */
#define TIMER0_IRQ      66
#define TIMER1_IRQ      67  /* 1MS Timer */
#define TIMER2_IRQ      68
#define TIMER3_IRQ      69
#define TIMER4_IRQ      92
#define TIMER5_IRQ      93
#define TIMER6_IRQ      94
#define TIMER7_IRQ      95

/* Timer Configuration Structure */
typedef struct {
    volatile uint32_t *base;
    uint32_t clock_source;
    uint32_t prescaler;
    bool auto_reload;
    uint32_t period;
    bool posted_mode;
} timer_config_t;
```

### Clock and Power Management

```c
/**
 * Enable timer module clock
 */
void timer_enable_clock(int timer_num) {
    volatile uint32_t *clkctrl_reg;
    
    switch (timer_num) {
        case 0:
            clkctrl_reg = (uint32_t *)(CM_WKUP_BASE + CM_WKUP_TIMER0_CLKCTRL);
            break;
        case 1:
            clkctrl_reg = (uint32_t *)(CM_WKUP_BASE + CM_WKUP_TIMER1_CLKCTRL);
            break;
        case 2:
            clkctrl_reg = (uint32_t *)(CM_PER_BASE + CM_PER_TIMER2_CLKCTRL);
            break;
        case 3:
            clkctrl_reg = (uint32_t *)(CM_PER_BASE + CM_PER_TIMER3_CLKCTRL);
            break;
        case 4:
            clkctrl_reg = (uint32_t *)(CM_PER_BASE + CM_PER_TIMER4_CLKCTRL);
            break;
        case 5:
            clkctrl_reg = (uint32_t *)(CM_PER_BASE + CM_PER_TIMER5_CLKCTRL);
            break;
        case 6:
            clkctrl_reg = (uint32_t *)(CM_PER_BASE + CM_PER_TIMER6_CLKCTRL);
            break;
        case 7:
            clkctrl_reg = (uint32_t *)(CM_PER_BASE + CM_PER_TIMER7_CLKCTRL);
            break;
        default:
            return;
    }
    
    /* Enable module clock */
    *clkctrl_reg = 0x02;  /* Module enable */
    
    /* Wait for module to be accessible */
    while ((*clkctrl_reg & 0x30000) != 0);
}

/**
 * Configure timer clock source
 */
void timer_set_clock_source(int timer_num, uint32_t clock_source) {
    volatile uint32_t *clksel_reg;
    
    switch (timer_num) {
        case 1:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER1MS_CLK);
            break;
        case 2:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER2_CLK);
            break;
        case 3:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER3_CLK);
            break;
        case 4:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER4_CLK);
            break;
        case 5:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER5_CLK);
            break;
        case 6:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER6_CLK);
            break;
        case 7:
            clksel_reg = (uint32_t *)(CLKSEL_BASE + CLKSEL_TIMER7_CLK);
            break;
        default:
            return;  /* Timer0 uses fixed clock */
    }
    
    *clksel_reg = clock_source;
}
```

### Basic Timer Initialization

```c
/**
 * Initialize timer with basic configuration
 */
int timer_init(timer_config_t *config) {
    volatile uint32_t *timer = config->base;
    uint32_t tclr_value = 0;
    
    /* Enable clock first */
    int timer_num = ((uint32_t)config->base - TIMER0_BASE) / 0x2000;
    if (timer_num > 7) timer_num = 1; /* Handle TIMER1 special case */
    
    timer_enable_clock(timer_num);
    timer_set_clock_source(timer_num, config->clock_source);
    
    /* Soft reset the timer */
    timer[TIMER_TIOCP_CFG/4] = 0x01;  /* Soft reset */
    while (timer[TIMER_TIOCP_CFG/4] & 0x01);  /* Wait for reset complete */
    
    /* Configure OCP interface */
    if (config->posted_mode) {
        timer[TIMER_TIOCP_CFG/4] = 0x04;  /* Posted mode */
    } else {
        timer[TIMER_TIOCP_CFG/4] = 0x00;  /* Normal mode */
    }
    
    /* Stop timer during configuration */
    timer[TIMER_TCLR/4] = 0;
    
    /* Configure prescaler */
    if (config->prescaler > 1) {
        tclr_value |= TCLR_PRE;  /* Enable prescaler */
        
        /* Set prescaler value (log2 of actual prescaler) */
        int ptv = 0;
        int prescaler = config->prescaler;
        while (prescaler > 1) {
            prescaler >>= 1;
            ptv++;
        }
        if (ptv > 7) ptv = 7;  /* Maximum prescaler is 128 (2^7) */
        
        tclr_value |= (ptv << TCLR_PTV_SHIFT);
    }
    
    /* Configure auto-reload */
    if (config->auto_reload) {
        tclr_value |= TCLR_AR;
        timer[TIMER_TLDR/4] = 0xFFFFFFFF - config->period + 1;
        timer[TIMER_TCRR/4] = 0xFFFFFFFF - config->period + 1;
    } else {
        timer[TIMER_TLDR/4] = 0;
        timer[TIMER_TCRR/4] = 0;
    }
    
    /* Apply configuration */
    timer[TIMER_TCLR/4] = tclr_value;
    
    return 0;  /* Success */
}

/**
 * Start timer operation
 */
void timer_start(volatile uint32_t *timer_base) {
    volatile uint32_t *timer = timer_base;
    timer[TIMER_TCLR/4] |= TCLR_ST;
}

/**
 * Stop timer operation
 */
void timer_stop(volatile uint32_t *timer_base) {
    volatile uint32_t *timer = timer_base;
    timer[TIMER_TCLR/4] &= ~TCLR_ST;
}

/**
 * Read current timer value
 */
uint32_t timer_read_counter(volatile uint32_t *timer_base) {
    volatile uint32_t *timer = timer_base;
    return timer[TIMER_TCRR/4];
}

/**
 * Write timer counter value
 */
void timer_write_counter(volatile uint32_t *timer_base, uint32_t value) {
    volatile uint32_t *timer = timer_base;
    timer[TIMER_TCRR/4] = value;
}
```

## Interrupt-Based Timer Operations

### Interrupt Configuration

```c
/**
 * Enable timer interrupts
 */
void timer_enable_interrupts(volatile uint32_t *timer_base, uint32_t int_mask) {
    volatile uint32_t *timer = timer_base;
    timer[TIMER_IRQENABLE_SET/4] = int_mask;
}

/**
 * Disable timer interrupts
 */
void timer_disable_interrupts(volatile uint32_t *timer_base, uint32_t int_mask) {
    volatile uint32_t *timer = timer_base;
    timer[TIMER_IRQENABLE_CLR/4] = int_mask;
}

/**
 * Clear timer interrupt status
 */
void timer_clear_interrupts(volatile uint32_t *timer_base, uint32_t int_mask) {
    volatile uint32_t *timer = timer_base;
    timer[TIMER_IRQSTATUS/4] = int_mask;
}

/**
 * Get timer interrupt status
 */
uint32_t timer_get_interrupt_status(volatile uint32_t *timer_base) {
    volatile uint32_t *timer = timer_base;
    return timer[TIMER_IRQSTATUS/4];
}
```

### Basic Timer ISR Example

```c
/* Global variables for timer callback */
static void (*timer_callbacks[8])(int timer_num);

/**
 * Generic timer interrupt service routine
 */
void timer_isr(int timer_num) {
    volatile uint32_t *timer;
    uint32_t int_status;
    
    /* Get timer base address */
    switch (timer_num) {
        case 0: timer = (uint32_t *)TIMER0_BASE; break;
        case 1: timer = (uint32_t *)TIMER1_BASE; break;
        case 2: timer = (uint32_t *)TIMER2_BASE; break;
        case 3: timer = (uint32_t *)TIMER3_BASE; break;
        case 4: timer = (uint32_t *)TIMER4_BASE; break;
        case 5: timer = (uint32_t *)TIMER5_BASE; break;
        case 6: timer = (uint32_t *)TIMER6_BASE; break;
        case 7: timer = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    /* Read interrupt status */
    int_status = timer[TIMER_IRQSTATUS/4];
    
    /* Clear all interrupts */
    timer[TIMER_IRQSTATUS/4] = int_status;
    
    /* Write EOI to acknowledge interrupt */
    timer[TIMER_IRQ_EOI/4] = 0x01;
    
    /* Call user callback if registered */
    if (timer_callbacks[timer_num]) {
        timer_callbacks[timer_num](timer_num);
    }
}

/**
 * Register timer callback function
 */
void timer_register_callback(int timer_num, void (*callback)(int)) {
    if (timer_num >= 0 && timer_num < 8) {
        timer_callbacks[timer_num] = callback;
    }
}

/* Specific timer ISRs that call generic handler */
void timer0_isr(void) { timer_isr(0); }
void timer1_isr(void) { timer_isr(1); }
void timer2_isr(void) { timer_isr(2); }
void timer3_isr(void) { timer_isr(3); }
void timer4_isr(void) { timer_isr(4); }
void timer5_isr(void) { timer_isr(5); }
void timer6_isr(void) { timer_isr(6); }
void timer7_isr(void) { timer_isr(7); }
```

### Periodic Timer Example

```c
/**
 * Configure timer for periodic interrupts
 */
void setup_periodic_timer(int timer_num, uint32_t period_us) {
    timer_config_t config;
    volatile uint32_t *timer;
    uint32_t timer_frequency = 24000000;  /* 24 MHz default */
    uint32_t prescaler = 1;
    uint32_t reload_value;
    
    /* Calculate optimal prescaler and reload value */
    uint64_t total_cycles = (uint64_t)timer_frequency * period_us / 1000000;
    
    while (total_cycles > 0xFFFFFFFF && prescaler < 128) {
        prescaler *= 2;
        total_cycles /= 2;
    }
    
    reload_value = (uint32_t)total_cycles;
    
    /* Configure timer */
    switch (timer_num) {
        case 0: timer = (uint32_t *)TIMER0_BASE; break;
        case 1: timer = (uint32_t *)TIMER1_BASE; break;
        case 2: timer = (uint32_t *)TIMER2_BASE; break;
        case 3: timer = (uint32_t *)TIMER3_BASE; break;
        case 4: timer = (uint32_t *)TIMER4_BASE; break;
        case 5: timer = (uint32_t *)TIMER5_BASE; break;
        case 6: timer = (uint32_t *)TIMER6_BASE; break;
        case 7: timer = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    config.base = timer;
    config.clock_source = CLKSEL_CLK_M_OSC;
    config.prescaler = prescaler;
    config.auto_reload = true;
    config.period = reload_value;
    config.posted_mode = false;
    
    timer_init(&config);
    
    /* Enable overflow interrupt */
    timer_enable_interrupts(timer, IRQ_OVF_IT_FLAG);
    
    /* Enable timer interrupt in INTC */
    intc_enable_interrupt(TIMER0_IRQ + timer_num);
    
    /* Start timer */
    timer_start(timer);
}

/**
 * Example periodic timer callback
 */
void periodic_timer_callback(int timer_num) {
    static int tick_count = 0;
    
    tick_count++;
    
    /* Toggle LED every 100 ticks */
    if (tick_count % 100 == 0) {
        gpio_toggle_pin(GPIO1_BASE, 21);  /* User LED */
    }
    
    /* Print message every 1000 ticks */
    if (tick_count % 1000 == 0) {
        printf("Timer %d: %d ticks\n", timer_num, tick_count);
    }
}
```

## PWM Generation

### PWM Configuration

```c
/**
 * Configure timer for PWM output
 */
void timer_setup_pwm(int timer_num, uint32_t frequency_hz, uint32_t duty_percent) {
    volatile uint32_t *timer;
    timer_config_t config;
    uint32_t timer_clock = 24000000;  /* 24 MHz */
    uint32_t prescaler = 1;
    uint32_t period_cycles;
    uint32_t duty_cycles;
    uint32_t tclr_value;
    
    /* Only Timer4-7 support PWM output pins */
    if (timer_num < 4 || timer_num > 7) {
        return;
    }
    
    /* Get timer base address */
    switch (timer_num) {
        case 4: timer = (uint32_t *)TIMER4_BASE; break;
        case 5: timer = (uint32_t *)TIMER5_BASE; break;
        case 6: timer = (uint32_t *)TIMER6_BASE; break;
        case 7: timer = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    /* Calculate period and duty cycles */
    period_cycles = timer_clock / frequency_hz;
    
    /* Adjust prescaler if period is too large */
    while (period_cycles > 0xFFFFFFFF && prescaler < 128) {
        prescaler *= 2;
        period_cycles /= 2;
    }
    
    duty_cycles = (period_cycles * duty_percent) / 100;
    
    /* Initialize timer */
    config.base = timer;
    config.clock_source = CLKSEL_CLK_M_OSC;
    config.prescaler = prescaler;
    config.auto_reload = true;
    config.period = period_cycles;
    config.posted_mode = false;
    
    timer_init(&config);
    
    /* Configure PWM mode */
    tclr_value = timer[TIMER_TCLR/4];
    tclr_value |= TCLR_CE;        /* Enable compare */
    tclr_value |= TCLR_PT;        /* Pulse mode */
    tclr_value &= ~TCLR_SCPWM;    /* Default PWM output (active high) */
    tclr_value |= (1 << TCLR_TRG_SHIFT);  /* Enable trigger output */
    
    timer[TIMER_TCLR/4] = tclr_value;
    
    /* Set match value for duty cycle */
    timer[TIMER_TMAR/4] = 0xFFFFFFFF - period_cycles + duty_cycles + 1;
    
    /* Configure pin muxing for PWM output */
    setup_pwm_pin_mux(timer_num);
}

/**
 * Update PWM duty cycle
 */
void timer_set_pwm_duty(volatile uint32_t *timer_base, uint32_t duty_percent) {
    volatile uint32_t *timer = timer_base;
    uint32_t period = 0xFFFFFFFF - timer[TIMER_TLDR/4] + 1;
    uint32_t duty_cycles = (period * duty_percent) / 100;
    
    timer[TIMER_TMAR/4] = 0xFFFFFFFF - period + duty_cycles + 1;
}

/**
 * Configure pin muxing for PWM output
 */
void setup_pwm_pin_mux(int timer_num) {
    volatile uint32_t *control_module = (uint32_t *)0x44E10000;
    
    switch (timer_num) {
        case 4:
            /* Configure timer4 pin for PWM output */
            /* This depends on specific pin requirements */
            /* Example: P8_7 (GPIO2_2) -> Mode 2 for timer4 */
            control_module[0x890/4] = 0x02;  /* timer4 mode */
            break;
            
        case 5:
            /* Configure timer5 pin for PWM output */
            /* Example: P8_9 (GPIO2_5) -> Mode 2 for timer5 */
            control_module[0x89C/4] = 0x02;  /* timer5 mode */
            break;
            
        case 6:
            /* Configure timer6 pin for PWM output */
            /* Example: P8_10 (GPIO2_4) -> Mode 2 for timer6 */
            control_module[0x898/4] = 0x02;  /* timer6 mode */
            break;
            
        case 7:
            /* Configure timer7 pin for PWM output */
            /* Example: P8_8 (GPIO2_3) -> Mode 2 for timer7 */
            control_module[0x894/4] = 0x02;  /* timer7 mode */
            break;
    }
}
```

### PWM Control Example

```c
/**
 * Example: LED brightness control using PWM
 */
void pwm_led_demo(void) {
    int duty;
    
    /* Setup Timer4 for 1 kHz PWM */
    timer_setup_pwm(4, 1000, 0);
    timer_start((uint32_t *)TIMER4_BASE);
    
    /* Gradually increase brightness */
    for (duty = 0; duty <= 100; duty += 10) {
        timer_set_pwm_duty((uint32_t *)TIMER4_BASE, duty);
        delay_ms(500);
    }
    
    /* Gradually decrease brightness */
    for (duty = 100; duty >= 0; duty -= 10) {
        timer_set_pwm_duty((uint32_t *)TIMER4_BASE, duty);
        delay_ms(500);
    }
}

/**
 * Example: Motor control using PWM
 */
typedef struct {
    volatile uint32_t *timer_base;
    int timer_num;
    uint32_t max_frequency;
    uint32_t current_frequency;
    uint32_t current_duty;
} motor_control_t;

void motor_init(motor_control_t *motor, int timer_num, uint32_t max_freq) {
    motor->timer_num = timer_num;
    motor->max_frequency = max_freq;
    motor->current_frequency = 1000;  /* Start at 1 kHz */
    motor->current_duty = 0;          /* Start stopped */
    
    switch (timer_num) {
        case 4: motor->timer_base = (uint32_t *)TIMER4_BASE; break;
        case 5: motor->timer_base = (uint32_t *)TIMER5_BASE; break;
        case 6: motor->timer_base = (uint32_t *)TIMER6_BASE; break;
        case 7: motor->timer_base = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    timer_setup_pwm(timer_num, motor->current_frequency, motor->current_duty);
    timer_start(motor->timer_base);
}

void motor_set_speed(motor_control_t *motor, uint32_t speed_percent) {
    if (speed_percent > 100) speed_percent = 100;
    
    motor->current_duty = speed_percent;
    timer_set_pwm_duty(motor->timer_base, speed_percent);
}
```

## Input Capture Implementation

### Capture Configuration

```c
/**
 * Configure timer for input capture
 */
void timer_setup_capture(int timer_num, uint32_t capture_mode) {
    volatile uint32_t *timer;
    timer_config_t config;
    uint32_t tclr_value;
    
    /* Only Timer4-7 support capture input pins */
    if (timer_num < 4 || timer_num > 7) {
        return;
    }
    
    /* Get timer base address */
    switch (timer_num) {
        case 4: timer = (uint32_t *)TIMER4_BASE; break;
        case 5: timer = (uint32_t *)TIMER5_BASE; break;
        case 6: timer = (uint32_t *)TIMER6_BASE; break;
        case 7: timer = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    /* Initialize timer for free-running mode */
    config.base = timer;
    config.clock_source = CLKSEL_CLK_M_OSC;
    config.prescaler = 1;
    config.auto_reload = false;  /* Free running */
    config.period = 0;
    config.posted_mode = false;
    
    timer_init(&config);
    
    /* Configure capture mode */
    tclr_value = timer[TIMER_TCLR/4];
    
    if (capture_mode == 0) {
        /* Single edge capture */
        tclr_value &= ~TCLR_CAPT_MODE;
        tclr_value |= (1 << TCLR_TCM_SHIFT);  /* Capture on rising edge */
    } else {
        /* Dual edge capture */
        tclr_value |= TCLR_CAPT_MODE;
        tclr_value |= (2 << TCLR_TCM_SHIFT);  /* Capture on both edges */
    }
    
    timer[TIMER_TCLR/4] = tclr_value;
    
    /* Enable capture interrupt */
    timer_enable_interrupts(timer, IRQ_TCAR_IT_FLAG);
    
    /* Configure pin muxing for capture input */
    setup_capture_pin_mux(timer_num);
    
    /* Enable timer interrupt in INTC */
    intc_enable_interrupt(TIMER0_IRQ + timer_num);
}

/**
 * Configure pin muxing for capture input
 */
void setup_capture_pin_mux(int timer_num) {
    volatile uint32_t *control_module = (uint32_t *)0x44E10000;
    
    switch (timer_num) {
        case 4:
            /* Configure timer4 pin for capture input */
            control_module[0x890/4] = 0x22;  /* timer4 input mode, pull-up */
            break;
            
        case 5:
            /* Configure timer5 pin for capture input */
            control_module[0x89C/4] = 0x22;  /* timer5 input mode, pull-up */
            break;
            
        case 6:
            /* Configure timer6 pin for capture input */
            control_module[0x898/4] = 0x22;  /* timer6 input mode, pull-up */
            break;
            
        case 7:
            /* Configure timer7 pin for capture input */
            control_module[0x894/4] = 0x22;  /* timer7 input mode, pull-up */
            break;
    }
}
```

### Frequency Measurement Example

```c
/* Global variables for frequency measurement */
static uint32_t last_capture_time[8];
static uint32_t capture_count[8];
static uint32_t measured_frequency[8];

/**
 * Capture interrupt handler for frequency measurement
 */
void capture_timer_callback(int timer_num) {
    volatile uint32_t *timer;
    uint32_t current_time;
    uint32_t period;
    
    /* Get timer base address */
    switch (timer_num) {
        case 4: timer = (uint32_t *)TIMER4_BASE; break;
        case 5: timer = (uint32_t *)TIMER5_BASE; break;
        case 6: timer = (uint32_t *)TIMER6_BASE; break;
        case 7: timer = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    /* Read capture value */
    current_time = timer[TIMER_TCAR1/4];
    
    if (capture_count[timer_num] > 0) {
        /* Calculate period */
        if (current_time >= last_capture_time[timer_num]) {
            period = current_time - last_capture_time[timer_num];
        } else {
            /* Handle counter overflow */
            period = (0xFFFFFFFF - last_capture_time[timer_num]) + current_time + 1;
        }
        
        /* Calculate frequency */
        if (period > 0) {
            measured_frequency[timer_num] = 24000000 / period;  /* 24 MHz clock */
        }
    }
    
    last_capture_time[timer_num] = current_time;
    capture_count[timer_num]++;
}

/**
 * Start frequency measurement
 */
void start_frequency_measurement(int timer_num) {
    capture_count[timer_num] = 0;
    measured_frequency[timer_num] = 0;
    
    timer_register_callback(timer_num, capture_timer_callback);
    timer_setup_capture(timer_num, 0);  /* Single edge capture */
    timer_start((uint32_t *)(TIMER0_BASE + timer_num * 0x2000));
}

/**
 * Get measured frequency
 */
uint32_t get_measured_frequency(int timer_num) {
    return measured_frequency[timer_num];
}
```

### Pulse Width Measurement

```c
/* Global variables for pulse width measurement */
typedef struct {
    uint32_t rising_time;
    uint32_t falling_time;
    uint32_t pulse_width;
    uint32_t period;
    bool valid_measurement;
    uint32_t state;  /* 0 = waiting for rising, 1 = waiting for falling */
} pulse_measurement_t;

static pulse_measurement_t pulse_data[8];

/**
 * Dual capture callback for pulse width measurement
 */
void pulse_width_callback(int timer_num) {
    volatile uint32_t *timer;
    uint32_t capture1, capture2;
    pulse_measurement_t *pulse = &pulse_data[timer_num];
    
    /* Get timer base address */
    switch (timer_num) {
        case 4: timer = (uint32_t *)TIMER4_BASE; break;
        case 5: timer = (uint32_t *)TIMER5_BASE; break;
        case 6: timer = (uint32_t *)TIMER6_BASE; break;
        case 7: timer = (uint32_t *)TIMER7_BASE; break;
        default: return;
    }
    
    /* Read both capture registers */
    capture1 = timer[TIMER_TCAR1/4];
    capture2 = timer[TIMER_TCAR2/4];
    
    /* Process captures based on current state */
    if (pulse->state == 0) {
        /* Looking for rising edge */
        pulse->rising_time = capture1;
        pulse->state = 1;
    } else {
        /* Looking for falling edge */
        pulse->falling_time = capture2;
        
        /* Calculate pulse width */
        if (pulse->falling_time >= pulse->rising_time) {
            pulse->pulse_width = pulse->falling_time - pulse->rising_time;
        } else {
            /* Handle overflow */
            pulse->pulse_width = (0xFFFFFFFF - pulse->rising_time) + 
                                pulse->falling_time + 1;
        }
        
        pulse->valid_measurement = true;
        pulse->state = 0;  /* Reset for next measurement */
    }
}

/**
 * Start pulse width measurement
 */
void start_pulse_width_measurement(int timer_num) {
    pulse_data[timer_num].valid_measurement = false;
    pulse_data[timer_num].state = 0;
    
    timer_register_callback(timer_num, pulse_width_callback);
    timer_setup_capture(timer_num, 1);  /* Dual edge capture */
    timer_start((uint32_t *)(TIMER0_BASE + timer_num * 0x2000));
}

/**
 * Get pulse width measurement
 */
bool get_pulse_width(int timer_num, uint32_t *width_us) {
    pulse_measurement_t *pulse = &pulse_data[timer_num];
    
    if (pulse->valid_measurement) {
        *width_us = (pulse->pulse_width * 1000000) / 24000000;  /* Convert to microseconds */
        pulse->valid_measurement = false;  /* Mark as read */
        return true;
    }
    
    return false;
}
```

## Advanced Timer Features

### Write Posted Mode

```c
/**
 * Wait for write posted operations to complete
 */
void timer_wait_for_write_posted(volatile uint32_t *timer_base, uint32_t reg_mask) {
    volatile uint32_t *timer = timer_base;
    
    /* Wait for specific register writes to complete */
    while (timer[TIMER_TWPS/4] & reg_mask) {
        /* Wait for synchronization */
    }
}

/**
 * Write to timer register with posted mode handling
 */
void timer_write_register_posted(volatile uint32_t *timer_base, 
                                uint32_t reg_offset, uint32_t value) {
    volatile uint32_t *timer = timer_base;
    uint32_t reg_bit;
    
    /* Determine TWPS bit for this register */
    switch (reg_offset) {
        case TIMER_TCLR:    reg_bit = (1 << 0); break;
        case TIMER_TCRR:    reg_bit = (1 << 1); break;
        case TIMER_TLDR:    reg_bit = (1 << 2); break;
        case TIMER_TTGR:    reg_bit = (1 << 3); break;
        case TIMER_TMAR:    reg_bit = (1 << 4); break;
        default: reg_bit = 0; break;
    }
    
    /* Wait for previous write to complete */
    if (reg_bit) {
        timer_wait_for_write_posted(timer_base, reg_bit);
    }
    
    /* Perform write */
    timer[reg_offset/4] = value;
}

/**
 * Efficient multi-register update in posted mode
 */
void timer_update_multiple_registers(volatile uint32_t *timer_base,
                                   uint32_t tclr, uint32_t tldr, uint32_t tmar) {
    volatile uint32_t *timer = timer_base;
    
    /* Stop timer first */
    timer[TIMER_TCLR/4] &= ~TCLR_ST;
    timer_wait_for_write_posted(timer_base, (1 << 0));
    
    /* Update load and match registers */
    timer[TIMER_TLDR/4] = tldr;
    timer[TIMER_TMAR/4] = tmar;
    
    /* Wait for register updates */
    timer_wait_for_write_posted(timer_base, (1 << 2) | (1 << 4));
    
    /* Update control register and restart */
    timer[TIMER_TCLR/4] = tclr | TCLR_ST;
}
```

### Timer Synchronization

```c
/**
 * Synchronize multiple timers to start simultaneously
 */
void timer_synchronized_start(volatile uint32_t **timers, int count) {
    int i;
    
    /* Configure all timers but don't start them */
    for (i = 0; i < count; i++) {
        /* Ensure timer is stopped */
        timers[i][TIMER_TCLR/4] &= ~TCLR_ST;
    }
    
    /* Start all timers as quickly as possible */
    for (i = 0; i < count; i++) {
        timers[i][TIMER_TCLR/4] |= TCLR_ST;
    }
}

/**
 * Phase-align multiple PWM timers
 */
void timer_align_pwm_phases(int *timer_nums, uint32_t *phase_offsets, int count) {
    volatile uint32_t *timers[count];
    uint32_t base_period;
    int i;
    
    /* Get timer base addresses */
    for (i = 0; i < count; i++) {
        switch (timer_nums[i]) {
            case 4: timers[i] = (uint32_t *)TIMER4_BASE; break;
            case 5: timers[i] = (uint32_t *)TIMER5_BASE; break;
            case 6: timers[i] = (uint32_t *)TIMER6_BASE; break;
            case 7: timers[i] = (uint32_t *)TIMER7_BASE; break;
            default: return;
        }
    }
    
    /* Get period from first timer */
    base_period = 0xFFFFFFFF - timers[0][TIMER_TLDR/4] + 1;
    
    /* Stop all timers */
    for (i = 0; i < count; i++) {
        timers[i][TIMER_TCLR/4] &= ~TCLR_ST;
    }
    
    /* Set initial counter values for phase alignment */
    for (i = 0; i < count; i++) {
        uint32_t phase_cycles = (base_period * phase_offsets[i]) / 360;
        uint32_t start_value = 0xFFFFFFFF - base_period + phase_cycles + 1;
        timers[i][TIMER_TCRR/4] = start_value;
    }
    
    /* Start all timers simultaneously */
    timer_synchronized_start(timers, count);
}
```

### 1MS Timer Special Features

```c
/**
 * Configure TIMER1 for precise 1ms operation
 */
void timer1ms_setup_precise(void) {
    volatile uint32_t *timer = (uint32_t *)TIMER1_BASE;
    timer_config_t config;
    
    /* Configure for 32.768 kHz clock source */
    config.base = timer;
    config.clock_source = CLKSEL_CLK_32KHZ;
    config.prescaler = 1;
    config.auto_reload = true;
    config.period = 32;  /* Approximately 1ms at 32.768 kHz */
    config.posted_mode = false;
    
    timer_init(&config);
    
    /* Fine-tune for exact 1ms using special registers */
    timer[TIMER1MS_TPIR/4] = 232000;    /* Positive increment */
    timer[TIMER1MS_TNIR/4] = -768000;   /* Negative increment */
    
    /* Enable overflow interrupt */
    timer_enable_interrupts(timer, IRQ_OVF_IT_FLAG);
    
    /* Start timer */
    timer_start(timer);
}

/**
 * Get sub-millisecond timing from TIMER1
 */
uint32_t timer1ms_get_sub_ms_time(void) {
    volatile uint32_t *timer = (uint32_t *)TIMER1_BASE;
    
    /* Read current value register for sub-ms precision */
    return timer[TIMER1MS_TCVR/4];
}

/**
 * 1ms timer callback for system tick
 */
void system_tick_callback(int timer_num) {
    static uint32_t system_tick_count = 0;
    
    system_tick_count++;
    
    /* Update system time */
    update_system_time_ms(system_tick_count);
    
    /* Process time-based events */
    process_timer_events();
    
    /* Trigger scheduler if using RTOS */
    schedule_tasks();
}
```

## Performance Optimization

### Optimized Register Access

```c
/**
 * Fast timer read with minimal overhead
 */
static inline uint32_t timer_read_fast(volatile uint32_t *timer_base) {
    return *(timer_base + (TIMER_TCRR/4));
}

/**
 * Batch timer operations for efficiency
 */
void timer_batch_update(volatile uint32_t *timer_base,
                       uint32_t new_period, uint32_t new_duty) {
    volatile uint32_t *timer = timer_base;
    uint32_t tclr_backup;
    
    /* Disable interrupts during update */
    __disable_irq();
    
    /* Save and stop timer */
    tclr_backup = timer[TIMER_TCLR/4];
    timer[TIMER_TCLR/4] = tclr_backup & ~TCLR_ST;
    
    /* Update registers */
    timer[TIMER_TLDR/4] = 0xFFFFFFFF - new_period + 1;
    timer[TIMER_TMAR/4] = 0xFFFFFFFF - new_period + new_duty + 1;
    timer[TIMER_TCRR/4] = 0xFFFFFFFF - new_period + 1;
    
    /* Restore timer state */
    timer[TIMER_TCLR/4] = tclr_backup;
    
    __enable_irq();
}
```

### Memory-Mapped Timer Arrays

```c
/* Timer array for efficient multi-timer operations */
static volatile uint32_t * const timer_bases[8] = {
    (uint32_t *)TIMER0_BASE,
    (uint32_t *)TIMER1_BASE,
    (uint32_t *)TIMER2_BASE,
    (uint32_t *)TIMER3_BASE,
    (uint32_t *)TIMER4_BASE,
    (uint32_t *)TIMER5_BASE,
    (uint32_t *)TIMER6_BASE,
    (uint32_t *)TIMER7_BASE
};

/**
 * Efficient multi-timer status check
 */
uint32_t get_all_timer_status(void) {
    uint32_t status = 0;
    int i;
    
    for (i = 0; i < 8; i++) {
        if (timer_bases[i][TIMER_TCLR/4] & TCLR_ST) {
            status |= (1 << i);
        }
    }
    
    return status;
}
```

## Debugging and Diagnostics

### Timer Status Monitoring

```c
/**
 * Get comprehensive timer status
 */
typedef struct {
    uint32_t counter_value;
    uint32_t load_value;
    uint32_t match_value;
    uint32_t control_reg;
    uint32_t interrupt_status;
    uint32_t write_posted_status;
    bool is_running;
    bool overflow_pending;
    bool match_pending;
    bool capture_pending;
} timer_status_t;

void timer_get_status(volatile uint32_t *timer_base, timer_status_t *status) {
    volatile uint32_t *timer = timer_base;
    
    status->counter_value = timer[TIMER_TCRR/4];
    status->load_value = timer[TIMER_TLDR/4];
    status->match_value = timer[TIMER_TMAR/4];
    status->control_reg = timer[TIMER_TCLR/4];
    status->interrupt_status = timer[TIMER_IRQSTATUS/4];
    status->write_posted_status = timer[TIMER_TWPS/4];
    
    status->is_running = (status->control_reg & TCLR_ST) != 0;
    status->overflow_pending = (status->interrupt_status & IRQ_OVF_IT_FLAG) != 0;
    status->match_pending = (status->interrupt_status & IRQ_MAT_IT_FLAG) != 0;
    status->capture_pending = (status->interrupt_status & IRQ_TCAR_IT_FLAG) != 0;
}

/**
 * Print timer status for debugging
 */
void timer_print_status(int timer_num) {
    timer_status_t status;
    timer_get_status(timer_bases[timer_num], &status);
    
    printf("Timer %d Status:\n", timer_num);
    printf("  Counter: 0x%08X\n", status.counter_value);
    printf("  Load: 0x%08X\n", status.load_value);
    printf("  Match: 0x%08X\n", status.match_value);
    printf("  Control: 0x%08X\n", status.control_reg);
    printf("  Running: %s\n", status.is_running ? "Yes" : "No");
    printf("  Interrupts: OVF=%d MAT=%d CAP=%d\n",
           status.overflow_pending, status.match_pending, status.capture_pending);
    printf("  Write Posted: 0x%08X\n", status.write_posted_status);
}
```

### Timer Testing Functions

```c
/**
 * Timer self-test function
 */
bool timer_self_test(int timer_num) {
    volatile uint32_t *timer = timer_bases[timer_num];
    uint32_t initial_value, test_value;
    
    /* Test counter read/write */
    initial_value = timer[TIMER_TCRR/4];
    timer[TIMER_TCRR/4] = 0x12345678;
    test_value = timer[TIMER_TCRR/4];
    
    if (test_value != 0x12345678) {
        printf("Timer %d: Counter R/W test failed\n", timer_num);
        return false;
    }
    
    /* Restore original value */
    timer[TIMER_TCRR/4] = initial_value;
    
    /* Test timer counting */
    timer[TIMER_TCRR/4] = 0;
    timer[TIMER_TCLR/4] = TCLR_ST;  /* Start timer */
    
    delay_us(100);  /* Wait 100 microseconds */
    
    test_value = timer[TIMER_TCRR/4];
    timer[TIMER_TCLR/4] = 0;  /* Stop timer */
    
    if (test_value == 0) {
        printf("Timer %d: Counting test failed\n", timer_num);
        return false;
    }
    
    printf("Timer %d: Self-test passed\n", timer_num);
    return true;
}

/**
 * Run self-test on all timers
 */
void timer_test_all(void) {
    int i;
    int passed = 0;
    
    printf("Running timer self-tests...\n");
    
    for (i = 0; i < 8; i++) {
        timer_enable_clock(i);
        if (timer_self_test(i)) {
            passed++;
        }
    }
    
    printf("Timer tests: %d/8 passed\n", passed);
}
```

## Related Documentation

- [Timer System Overview](timer-system-overview.md) - Architecture and features
- [DMTIMER Register Reference](../../registers/AM335x_DMTIMER_Register_Reference.md) - Complete register documentation
- [Interrupt System](../../interrupts/interrupt-system.md) - Timer interrupt handling
- [PWM Applications](pwm-applications.md) - Advanced PWM techniques
- [Input Capture Applications](input-capture-applications.md) - Measurement and monitoring

## Example Applications

### Simple System Tick

```c
/* Basic system tick implementation */
void setup_system_tick(void) {
    /* Use Timer1 (1MS) for system tick */
    timer1ms_setup_precise();
    timer_register_callback(1, system_tick_callback);
    intc_enable_interrupt(TIMER1_IRQ);
}
```

### Multi-Phase Motor Control

```c
/* Three-phase motor control example */
void setup_three_phase_motor(void) {
    int timers[] = {4, 5, 6};
    uint32_t phases[] = {0, 120, 240};  /* 120-degree phase shifts */
    
    /* Setup each timer for PWM */
    timer_setup_pwm(4, 20000, 50);  /* 20 kHz, 50% duty */
    timer_setup_pwm(5, 20000, 50);
    timer_setup_pwm(6, 20000, 50);
    
    /* Align phases for three-phase operation */
    timer_align_pwm_phases(timers, phases, 3);
}
```

This implementation guide provides comprehensive coverage of AM3358 timer programming from basic operations to advanced features, enabling developers to fully utilize the timer subsystem for various applications.