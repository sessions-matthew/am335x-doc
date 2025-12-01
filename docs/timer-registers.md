# DMTIMER Register Reference - AM3358

## Overview

This document provides complete register-level documentation for the AM3358 DMTIMER modules. The AM3358 includes eight timer instances with two distinct register layouts: standard DMTIMER (Timer0, Timer2-7) and specialized DMTIMER_1MS (Timer1) for system tick generation.

## Register Map Summary

### Base Addresses and Clock Sources
- **TIMER0**: 0x44E05000 (WKUP domain, 32kHz CLK)
- **TIMER1**: 0x44E31000 (WKUP domain, 32kHz CLK, 1MS specialized)
- **TIMER2**: 0x48040000 (L4PER domain, 24MHz CLK)
- **TIMER3**: 0x48042000 (L4PER domain, 24MHz CLK)
- **TIMER4**: 0x48044000 (L4PER domain, 24MHz CLK)
- **TIMER5**: 0x48046000 (L4PER domain, 24MHz CLK)
- **TIMER6**: 0x48048000 (L4PER domain, 24MHz CLK)
- **TIMER7**: 0x4804A000 (L4PER domain, 24MHz CLK)

**Clock Sources**: All timers can be configured to use either the system clock (24MHz) or the 32.768kHz oscillator through PRCM configuration.

### Standard DMTIMER Register Layout

Used by TIMER0, TIMER2-7:

| Offset | Register | Name | Access | Reset | Description |
|--------|----------|------|--------|-------|-------------|
| 0x00 | TIDR | Timer Identification | R | Varies | Module identification |
| 0x10 | TIOCP_CFG | OCP Configuration | RW | 0x00 | OCP interface configuration |
| 0x20 | IRQ_EOI | End of Interrupt | W | - | Interrupt acknowledgment |
| 0x24 | IRQSTATUS_RAW | Raw Interrupt Status | R | 0x00 | Unmasked interrupt status |
| 0x28 | IRQSTATUS | Interrupt Status | RW | 0x00 | Masked interrupt status |
| 0x2C | IRQENABLE_SET | Interrupt Enable Set | RW | 0x00 | Enable interrupt sources |
| 0x30 | IRQENABLE_CLR | Interrupt Enable Clear | RW | 0x00 | Disable interrupt sources |
| 0x34 | IRQWAKEEN | Wakeup Enable | RW | 0x00 | Wakeup interrupt enable |
| 0x38 | TCLR | Timer Control | RW | 0x00 | Timer control and configuration |
| 0x3C | TCRR | Timer Counter | RW | 0x00 | Current counter value |
| 0x40 | TLDR | Timer Load | RW | 0x00 | Auto-reload value |
| 0x44 | TTGR | Timer Trigger | RW | 0x00 | Counter reload trigger |
| 0x48 | TWPS | Write Posted Status | R | 0x00 | Write synchronization status |
| 0x4C | TMAR | Timer Match | RW | 0x00 | Compare/match value |
| 0x50 | TCAR1 | Timer Capture 1 | R | 0x00 | First capture value |
| 0x54 | TSICR | Sync Interface Control | RW | 0x00 | Clock synchronization |
| 0x58 | TCAR2 | Timer Capture 2 | R | 0x00 | Second capture value |

### DMTIMER_1MS Register Layout

Used by TIMER1 only:

| Offset | Register | Name | Access | Reset | Description |
|--------|----------|------|--------|-------|-------------|
| 0x00 | TIDR | Timer Identification | R | Varies | Module identification |
| 0x10 | TIOCP_CFG | OCP Configuration | RW | 0x00 | OCP interface configuration |
| 0x14 | TISTAT | Timer Status | R | 0x00 | Timer module status |
| 0x18 | TISR | Interrupt Status | RW | 0x00 | Interrupt status register |
| 0x1C | TIER | Interrupt Enable | RW | 0x00 | Interrupt enable register |
| 0x20 | TWER | Wakeup Enable | RW | 0x00 | Wakeup enable register |
| 0x24 | TCLR | Timer Control | RW | 0x00 | Timer control register |
| 0x28 | TCRR | Timer Counter | RW | 0x00 | Current counter value |
| 0x2C | TLDR | Timer Load | RW | 0x00 | Auto-reload value |
| 0x30 | TTGR | Timer Trigger | RW | 0x00 | Counter reload trigger |
| 0x34 | TWPS | Write Posted Status | R | 0x00 | Write synchronization status |
| 0x38 | TMAR | Timer Match | RW | 0x00 | Compare/match value |
| 0x3C | TCAR1 | Timer Capture 1 | R | 0x00 | First capture value |
| 0x40 | TSICR | Sync Interface Control | RW | 0x00 | Clock synchronization |
| 0x44 | TCAR2 | Timer Capture 2 | R | 0x00 | Second capture value |
| 0x48 | TPIR | Positive Increment | RW | 0x00 | Fine timing positive increment |
| 0x4C | TNIR | Negative Increment | RW | 0x00 | Fine timing negative increment |
| 0x50 | TCVR | Current Value | R | 0x00 | Sub-millisecond counter |
| 0x54 | TOCR | Overflow Counter | RW | 0x00 | Overflow counter register |
| 0x58 | TOWR | Overflow Wrapper | RW | 0x00 | Overflow wrapper register |

## Key Differences Between Regular DMTIMER and DMTIMER_1MS

### Register Layout Differences

1. **Interrupt Handling**:
   - Regular DMTIMER uses separate RAW/masked status registers (0x24/0x28)
   - DMTIMER_1MS uses single status register (0x18) with enable register (0x1C)

2. **Status and Control**:
   - Regular DMTIMER has IRQ_EOI register at 0x20
   - DMTIMER_1MS has TISTAT register at 0x14

3. **Specialized 1MS Registers**:
   - DMTIMER_1MS includes 5 additional registers (0x48-0x58) for 1ms tick generation
   - These registers (TPIR, TNIR, TCVR, TOCR, TOWR) are unique to DMTIMER_1MS

### Functional Differences

1. **Purpose**:
   - Regular DMTIMER: General-purpose timing and PWM generation
   - DMTIMER_1MS: Specialized for 1ms system tick generation

2. **Clock Sources**:
   - Both support 24MHz system clock and 32.768kHz oscillator
   - DMTIMER_1MS optimized for 1ms tick accuracy

3. **Interrupt Sources**:
   - Both support overflow, match, and capture interrupts
   - Same interrupt bit definitions (TIMER_IRQ_MAT, TIMER_IRQ_OVF, TIMER_IRQ_TCAR)

## Detailed Register Descriptions

### Common Register Descriptions

#### TCLR - Timer Control Register
**Purpose**: Primary timer control and configuration

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-14 | Reserved | R | 0x0 | Reserved |
| 13-12 | GPO_CFG | RW | 0x0 | PWM pin configuration |
| 11-10 | CAPT_MODE | RW | 0x0 | Capture mode selection |
| 9 | PT | RW | 0x0 | Pulse/toggle mode |
| 8 | TRG | RW | 0x0 | Trigger mode |
| 7 | TCM | RW | 0x0 | Transition capture mode |
| 6 | SCPWM | RW | 0x0 | PWM output default state |
| 5 | CE | RW | 0x0 | Compare enable |
| 4 | PRE | RW | 0x0 | Prescaler enable |
| 3-2 | PTV | RW | 0x0 | Prescaler value (2^(PTV+1)) |
| 1 | AR | RW | 0x0 | Auto-reload enable |
| 0 | ST | RW | 0x0 | Start/stop timer |

**Field Descriptions**:
- **ST**: 1=Start timer, 0=Stop timer
- **AR**: 1=Auto-reload from TLDR on overflow
- **PTV**: Prescaler value, divides input clock by 2^(PTV+1)
- **CE**: 1=Enable compare mode with TMAR register

#### TWPS - Write Posted Status Register
**Purpose**: Indicates write synchronization status for posted writes

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-6 | Reserved | R | 0x0 | Reserved |
| 5 | W_PEND_TMAR | R | 0x0 | TMAR write pending |
| 4 | W_PEND_TTGR | R | 0x0 | TTGR write pending |
| 3 | W_PEND_TLDR | R | 0x0 | TLDR write pending |
| 2 | W_PEND_TCRR | R | 0x0 | TCRR write pending |
| 1 | W_PEND_TCLR | R | 0x0 | TCLR write pending |
| 0 | Reserved | R | 0x0 | Reserved |

### Timer Identification Register (TIDR) - Offset 0x00
- **Access**: Read-only
- **Reset**: Device-specific
- **Purpose**: Module identification and revision information

| Bits | Field | Description |
|------|-------|-------------|
| 31:16 | SCHEME | Identification scheme (typically 0x1) |
| 15:11 | FUNC | Function identifier |
| 10:8 | RTL | RTL version |
| 7:6 | MAJOR | Major revision |
| 5:0 | MINOR | Minor revision |

### OCP Configuration Register (TIOCP_CFG) - Offset 0x10
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: OCP interface configuration and power management

| Bits | Field | Description | Values |
|------|-------|-------------|--------|
| 4:3 | CLOCKACTIVITY | Clock activity control | 00=OCP+Func off, 01=OCP on, 10=Func on, 11=Both on |
| 2 | EMUFREE | Emulation mode | 0=Sensitive, 1=Free-running |
| 1 | IDLEMODE | Idle mode select | 0=Force idle, 1=No idle |
| 0 | SOFTRESET | Software reset | 0=Normal, 1=Reset (auto-clear) |

### Timer Control Register (TCLR) - Offset 0x38/0x24
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Primary timer control and configuration

| Bits | Field | Description | Values |
|------|-------|-------------|--------|
| 13 | PWM_TRG | PWM trigger output | 0=Disabled, 1=Enabled |
| 12 | CAPT_MODE | Capture mode selection | 0=Single, 1=Second capture |
| 11 | PT | Pulse/Toggle mode | 0=Pulse, 1=Toggle |
| 10 | TRG | Trigger output mode | 0=No trigger, 1=Overflow+Match |
| 9:8 | TCM | Transition Capture Mode | 00=Disabled, 01=Rising, 10=Falling, 11=Both |
| 7 | SCPWM | PWM default output value | 0=Low, 1=High |
| 6 | CE | Compare Enable | 0=Disabled, 1=Compare with TMAR |
| 5 | PRE | Prescaler Enable | 0=Bypassed, 1=Enabled |
| 4:2 | PTV | Prescaler Value | 000=÷2, 001=÷4, ..., 111=÷256 |
| 1 | AR | Auto-reload | 0=One-shot, 1=Auto-reload from TLDR |
| 0 | ST | Start/Stop | 0=Stop, 1=Start |

**Programming Example**:
```c
// Configure for PWM mode with auto-reload
uint32_t tclr = (1 << 1) |    // Auto-reload enable
                (1 << 5) |    // Prescaler enable
                (2 << 2) |    // Prescaler = divide by 8
                (1 << 6) |    // Compare enable
                (1 << 11);    // Toggle mode for PWM
TIMER_TCLR = tclr;
```

### Timer Counter Register (TCRR) - Offset 0x3C/0x28
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Current 32-bit counter value

**Programming Notes**:
- Counts up from loaded value to 0xFFFFFFFF
- Reloads from TLDR when AR=1 and counter overflows
- Can be written to set specific counter value
- Reading provides instantaneous counter value

### Timer Load Register (TLDR) - Offset 0x40/0x2C
- **Access**: Read/Write  
- **Reset**: 0x00000000
- **Purpose**: Auto-reload value for counter

**Programming Example**:
```c
// Configure for 1ms timing at 24MHz clock with /8 prescaler
// Target: 3MHz / 3000 = 1kHz (1ms period)
uint32_t reload_val = 0xFFFFFFFF - 3000 + 1;
TIMER_TLDR = reload_val;
TIMER_TCRR = reload_val;  // Initialize counter
```

### Timer Match Register (TMAR) - Offset 0x4C/0x38
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Compare value for PWM and match interrupts

**Usage Scenarios**:
- **PWM Mode**: Determines duty cycle (compare point)
- **Compare Mode**: Generates interrupt when TCRR matches TMAR
- **Output Control**: Controls PWM output transitions

### Interrupt Status Register (IRQSTATUS/TISR)
- **Standard DMTIMER**: Offset 0x28
- **DMTIMER_1MS**: Offset 0x18
- **Access**: Read/Write (write 1 to clear)
- **Reset**: 0x00000000

| Bit | Field | Description |
|-----|-------|-------------|
| 2 | TCAR_IT_FLAG | Capture interrupt flag |
| 1 | OVF_IT_FLAG | Overflow interrupt flag |
| 0 | MAT_IT_FLAG | Match interrupt flag |

### Interrupt Enable Register (IRQENABLE_SET/TIER)
- **Standard DMTIMER**: Offset 0x2C
- **DMTIMER_1MS**: Offset 0x1C  
- **Access**: Read/Write
- **Reset**: 0x00000000

| Bit | Field | Description |
|-----|-------|-------------|
| 2 | TCAR_IT_ENA | Capture interrupt enable |
| 1 | OVF_IT_ENA | Overflow interrupt enable |
| 0 | MAT_IT_ENA | Match interrupt enable |

### Write Posted Status Register (TWPS) - Offset 0x48/0x34
- **Access**: Read-only
- **Reset**: 0x00000000
- **Purpose**: Indicates pending write operations

| Bit | Field | Description |
|-----|-------|-------------|
| 5 | W_PEND_TMAR | TMAR write pending |
| 4 | W_PEND_TTGR | TTGR write pending |
| 3 | W_PEND_TLDR | TLDR write pending |
| 2 | W_PEND_TCRR | TCRR write pending |
| 1 | W_PEND_TCLR | TCLR write pending |

**Programming Example**:
```c
// Safe register write with synchronization
TIMER_TCLR = new_value;
while (TIMER_TWPS & (1 << 1)) {
    // Wait for TCLR write to complete
}
```

### Capture Registers (TCAR1/TCAR2) - Offset 0x50,0x58/0x3C,0x44
- **Access**: Read-only
- **Reset**: 0x00000000
- **Purpose**: Store captured counter values on input transitions

**Programming Notes**:
- TCAR1 captures first transition value
- TCAR2 captures second transition value (if CAPT_MODE=1)
- Values captured based on TCM field setting
- Useful for measuring pulse widths and frequencies

## DMTIMER_1MS Specific Registers

### Positive Increment Register (TPIR) - Offset 0x48
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Fine timing adjustment for 1ms tick generation

### Negative Increment Register (TNIR) - Offset 0x4C
- **Access**: Read/Write  
- **Reset**: 0x00000000
- **Purpose**: Fine timing adjustment for 1ms tick generation

### Current Value Register (TCVR) - Offset 0x50
- **Access**: Read-only
- **Reset**: 0x00000000
- **Purpose**: Sub-millisecond counter value for fine timing

## Timer Instance Configuration

| Timer | Base Address | IRQ | Clock Domain | Typical Usage |
|-------|-------------|-----|--------------|---------------|
| TIMER0 | 0x44E05000 | 66 | WKUP | System tick (alternative) |
| TIMER1 | 0x44E31000 | 67 | WKUP | System tick (1ms) |
| TIMER2 | 0x48040000 | 68 | L4PER | PWM generation |
| TIMER3 | 0x48042000 | 69 | L4PER | Input capture |
| TIMER4 | 0x48044000 | 92 | L4PER | General purpose |
| TIMER5 | 0x48046000 | 93 | L4PER | General purpose |
| TIMER6 | 0x48048000 | 94 | L4PER | General purpose |
| TIMER7 | 0x4804A000 | 95 | L4PER | General purpose |

## Programming Guidelines

### Initialization Sequence
1. **Clock Configuration**: Enable functional and interface clocks
2. **Software Reset**: Set SOFTRESET bit and wait for completion
3. **Load Values**: Configure TLDR and TCRR registers
4. **Control Setup**: Configure TCLR for desired mode
5. **Interrupt Setup**: Enable required interrupts
6. **Start Timer**: Set ST bit in TCLR

### Write Synchronization
All timer register writes are posted to the OCP interface. Use TWPS register to ensure write completion before:
- Reading modified register values
- Performing dependent operations
- Entering low-power modes

### Clock Considerations
- Input clock frequency determines timer resolution
- Prescaler provides additional frequency division (2-256)
- Consider clock domain for power management
- WKUP domain timers remain active in sleep modes

### PWM Configuration Example
```c
// Configure Timer2 for PWM output
// 24MHz clock, 1kHz PWM, 50% duty cycle

// Reset and configure
TIMER2_TIOCP_CFG |= (1 << 0);  // Software reset
while (TIMER2_TIOCP_CFG & (1 << 0));  // Wait for reset

// Load values for 1kHz (24000 counts at 24MHz)
TIMER2_TLDR = 0xFFFFFFFF - 24000 + 1;
TIMER2_TCRR = 0xFFFFFFFF - 24000 + 1;

// Match value for 50% duty cycle
TIMER2_TMAR = 0xFFFFFFFF - 12000 + 1;

// Configure control register
TIMER2_TCLR = (1 << 1) |   // Auto-reload
              (1 << 6) |   // Compare enable  
              (1 << 11);   // Toggle mode

// Start timer
TIMER2_TCLR |= (1 << 0);   // Start
```

# RTC (Real-Time Clock) Registers - AM3358

## RTC Overview

The AM3358 includes a dedicated Real-Time Clock (RTC) module for accurate timekeeping, calendar functions, and alarm generation. The RTC operates from a 32.768kHz crystal oscillator and maintains time even during system power-down when backed by battery power.

## RTC Base Address
- **RTC Module**: 0x44E3E000 (RTC domain, always-on)

## RTC Register Map

| Offset | Register | Name | Access | Reset | Description |
|--------|----------|------|--------|-------|-------------|
| 0x00 | SECONDS_REG | Seconds Register | RW | 0x00 | Current seconds (BCD format) |
| 0x04 | MINUTES_REG | Minutes Register | RW | 0x00 | Current minutes (BCD format) |
| 0x08 | HOURS_REG | Hours Register | RW | 0x00 | Current hours (BCD format) |
| 0x0C | DAYS_REG | Day of Month Register | RW | 0x00 | Current day of month (BCD) |
| 0x10 | MONTHS_REG | Month Register | RW | 0x00 | Current month (BCD format) |
| 0x14 | YEARS_REG | Year Register | RW | 0x00 | Current year (BCD format) |
| 0x18 | WEEKS_REG | Day of Week Register | RW | 0x00 | Current day of week |
| 0x20 | ALARM_SECONDS_REG | Alarm Seconds | RW | 0x00 | Alarm seconds value (BCD) |
| 0x24 | ALARM_MINUTES_REG | Alarm Minutes | RW | 0x00 | Alarm minutes value (BCD) |
| 0x28 | ALARM_HOURS_REG | Alarm Hours | RW | 0x00 | Alarm hours value (BCD) |
| 0x2C | ALARM_DAYS_REG | Alarm Day of Month | RW | 0x00 | Alarm day of month (BCD) |
| 0x30 | ALARM_MONTHS_REG | Alarm Months | RW | 0x00 | Alarm months value (BCD) |
| 0x34 | ALARM_YEARS_REG | Alarm Years | RW | 0x00 | Alarm years value (BCD) |
| 0x40 | RTC_CTRL_REG | Control Register | RW | 0x00 | RTC control and configuration |
| 0x44 | RTC_STATUS_REG | Status Register | RW | 0x00 | RTC status and events |
| 0x48 | RTC_INTERRUPTS_REG | Interrupt Enable | RW | 0x00 | Interrupt enable control |
| 0x4C | RTC_COMP_LSB_REG | Compensation LSB | RW | 0x00 | Oscillator compensation (LSB) |
| 0x50 | RTC_COMP_MSB_REG | Compensation MSB | RW | 0x00 | Oscillator compensation (MSB) |
| 0x54 | RTC_OSC_REG | Oscillator Register | RW | 0x00 | Oscillator control |
| 0x60 | RTC_SCRATCH0_REG | Scratch Register 0 | RW | 0x00 | General purpose storage |
| 0x64 | RTC_SCRATCH1_REG | Scratch Register 1 | RW | 0x00 | General purpose storage |
| 0x68 | RTC_SCRATCH2_REG | Scratch Register 2 | RW | 0x00 | General purpose storage |
| 0x6C | KICK0R | Kick 0 Register | W | - | Write protection key 1 |
| 0x70 | KICK1R | Kick 1 Register | W | - | Write protection key 2 |
| 0x74 | RTC_REVISION | Revision Register | R | Device | Module revision |
| 0x78 | RTC_SYSCONFIG | System Configuration | RW | 0x00 | System configuration |
| 0x7C | RTC_IRQWAKEEN | Wakeup Enable | RW | 0x00 | Wakeup interrupt enable |
| 0x80 | ALARM2_SECONDS_REG | Alarm2 Seconds | RW | 0x00 | Second alarm seconds |
| 0x84 | ALARM2_MINUTES_REG | Alarm2 Minutes | RW | 0x00 | Second alarm minutes |
| 0x88 | ALARM2_HOURS_REG | Alarm2 Hours | RW | 0x00 | Second alarm hours |
| 0x8C | ALARM2_DAYS_REG | Alarm2 Day | RW | 0x00 | Second alarm day |
| 0x90 | ALARM2_MONTHS_REG | Alarm2 Months | RW | 0x00 | Second alarm months |
| 0x94 | ALARM2_YEARS_REG | Alarm2 Years | RW | 0x00 | Second alarm years |
| 0x98 | RTC_PMIC | PMIC Register | RW | 0x00 | PMIC power control |
| 0x9C | RTC_DEBOUNCE | Debounce Register | RW | 0x00 | Input debounce control |

## Key RTC Register Descriptions

### RTC Control Register (RTC_CTRL_REG) - Offset 0x40
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Primary RTC control and configuration

| Bits | Field | Description | Values |
|------|-------|-------------|--------|
| 6 | RTC_DISABLE | RTC module enable/disable | 0=Enabled, 1=Disabled (gates 32kHz clock) |
| 5 | SET_32_COUNTER | Set 32kHz counter from compensation | 0=No action, 1=Set counter |
| 4 | TEST_MODE | Test mode control | 0=Functional, 1=Test mode |
| 3 | MODE_12_24 | Time format selection | 0=24-hour, 1=12-hour |
| 2 | AUTO_COMP | Auto compensation enable | 0=Disabled, 1=Enabled |
| 1 | ROUND_30S | Round to nearest minute | 0=No action, 1=Round on next read |
| 0 | STOP_RTC | RTC counter control | 0=Frozen, 1=Running |

**Programming Example**:
```c
// Enable RTC in 24-hour mode with auto compensation
uint32_t ctrl = (1 << 0) |    // Start RTC
                (0 << 3) |    // 24-hour mode
                (1 << 2);     // Auto compensation
RTC_CTRL_REG = ctrl;
```

### RTC Status Register (RTC_STATUS_REG) - Offset 0x44
- **Access**: Read/Write (write 1 to clear interrupt bits)
- **Reset**: 0x00000000
- **Purpose**: RTC status and interrupt flags

| Bits | Field | Description |
|------|-------|-------------|
| 7 | ALARM2 | Alarm2 interrupt flag (write 1 to clear) |
| 6 | ALARM | Alarm interrupt flag (write 1 to clear) |
| 5 | ONE_DAY_EVENT | Day event occurred |
| 4 | ONE_HR_EVENT | Hour event occurred |
| 3 | ONE_MIN_EVENT | Minute event occurred |
| 2 | ONE_SEC_EVENT | Second event occurred |
| 1 | RUN | RTC running status (read-only) |
| 0 | BUSY | RTC busy status (read-only) |

### RTC Interrupt Enable Register (RTC_INTERRUPTS_REG) - Offset 0x48
- **Access**: Read/Write
- **Reset**: 0x00000000
- **Purpose**: Enable RTC interrupt sources

| Bits | Field | Description |
|------|-------|-------------|
| 7 | ALARM2_IT_ENA | Enable Alarm2 interrupt |
| 6 | ALARM_IT_ENA | Enable Alarm interrupt |
| 3 | IT_TIMER | Enable timer interrupt (periodic) |

### Time/Date Registers (BCD Format)
All time and date registers use Binary Coded Decimal (BCD) format:
- **SECONDS_REG** (0x00): Seconds (00-59 BCD)
- **MINUTES_REG** (0x04): Minutes (00-59 BCD)  
- **HOURS_REG** (0x08): Hours (00-23 or 01-12 BCD depending on mode)
- **DAYS_REG** (0x0C): Day of month (01-31 BCD)
- **MONTHS_REG** (0x10): Month (01-12 BCD)
- **YEARS_REG** (0x14): Year (00-99 BCD, represents 2000-2099)

**BCD Format Example**:
```c
// Set time to 14:35:22 (2:35:22 PM)
RTC_HOURS_REG = 0x14;    // 14 in BCD (1=0001, 4=0100)
RTC_MINUTES_REG = 0x35;  // 35 in BCD (3=0011, 5=0101)  
RTC_SECONDS_REG = 0x22;  // 22 in BCD (2=0010, 2=0010)
```

## RTC Write Protection

The RTC registers are write-protected and require a specific unlock sequence:

```c
// Unlock RTC registers for writing
RTC_KICK0R = 0x83E70B13;
RTC_KICK1R = 0x95A4F1E0;

// Now RTC registers can be modified
// ...perform RTC register writes...

// Lock RTC registers (optional - happens automatically)
RTC_KICK0R = 0x00000000;
RTC_KICK1R = 0x00000000;
```

## RTC Programming Guidelines

### Initialization Sequence
1. **Unlock Protection**: Write unlock sequence to KICK registers
2. **Stop RTC**: Clear STOP_RTC bit in RTC_CTRL_REG
3. **Wait for Stop**: Poll RUN bit in RTC_STATUS_REG until clear
4. **Set Time/Date**: Write time/date registers in BCD format
5. **Configure Control**: Set desired mode and features in RTC_CTRL_REG
6. **Start RTC**: Set STOP_RTC bit in RTC_CTRL_REG
7. **Lock Protection**: Write zeros to KICK registers

### Alarm Configuration
```c
// Configure alarm for 08:30:00
RTC_KICK0R = 0x83E70B13;    // Unlock
RTC_KICK1R = 0x95A4F1E0;

RTC_ALARM_HOURS_REG = 0x08;     // 8 AM in BCD
RTC_ALARM_MINUTES_REG = 0x30;   // 30 minutes in BCD  
RTC_ALARM_SECONDS_REG = 0x00;   // 0 seconds in BCD

// Enable alarm interrupt
RTC_INTERRUPTS_REG |= (1 << 6);  // ALARM_IT_ENA
```

### Reading Current Time
```c
// Wait for RTC to be ready
while (RTC_STATUS_REG & (1 << 0)) {
    // Wait while BUSY bit is set
}

// Read time registers (BCD format)
uint32_t hours = RTC_HOURS_REG;
uint32_t minutes = RTC_MINUTES_REG;
uint32_t seconds = RTC_SECONDS_REG;

// Convert BCD to decimal if needed
uint32_t hours_dec = ((hours >> 4) & 0xF) * 10 + (hours & 0xF);
```

## RTC Clock Sources and Power
- **Primary Clock**: 32.768kHz crystal oscillator
- **Power Domain**: RTC domain (independent of VDD_CORE)
- **Backup Power**: Supports battery backup via VDDS_RTC pin
- **Always-On**: Maintains time during system power-down

## RTC Interrupts
- **IRQ 65**: RTC Timer interrupt (periodic events)
- **IRQ 66**: RTC Alarm interrupt (alarm match events)

## Related Documentation
- [Timer System Overview](../peripherals/timers/timer-system-overview.md)
- [Timer Implementation Guide](../implementation/timer-usage.md)
- [Timer Interrupt Handling](../peripherals/timers/timer-interrupts.md)
- [Clock Management](../peripherals/clock-management.md)