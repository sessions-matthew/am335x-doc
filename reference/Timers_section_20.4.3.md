## 20.4.3 Functional Description

## 20.4.3.1 Power Management

There are two clock domains in the watchdog timers:

- Functional clock domain: WDTi\_FCLK is a 32 kHz watchdog timer functional clock. It is used to clock the watchdog timer internal logic.
- Interface clock domain: WDTi\_ICLK is a 125 MHz watchdog timer interface clock. It is used to synchronize the watchdog timer L4 port to the L4 interconnect. All accesses from the interconnect are synchronous to WDTi\_ICLK.

In this device, the clocks to the watchdog timers are always On. The clocks cannot be turned off if the watchdog timers are not being used.

## 20.4.3.2 Interrupts

Table 20-101 list the event flags, and their masks, that cause module interrupts.

Table 20-101. Watchdog Timer Events

| Event Flag                | Event Mask                                | Mapping   | Comments                     |
|---------------------------|-------------------------------------------|-----------|------------------------------|
| WDT_WIRQSTAT[0] EVENT_OVF | WDT_WIRQENSET/WDT_WIRQENCLR[0] OVF_IT_ENA | WDTINT    | Watchdog timer overflow      |
| WDT_WIRQSTAT[1] EVENT_DLY | WDT_WIRQENSET/WDT_WIRQENCLR[1] DLY_IT_ENA | WDTINT    | Watchdog delay value reached |

## 20.4.3.3 General Watchdog Timer Operation

The watchdog timers are based on an upward 32-bit counter coupled with a prescaler. The counter overflow is signaled through two independent signals: a simple reset signal and an interrupt signal, both active low. Figure 20-97 is a functional block diagram of the watchdog timer.

The interrupt generation mechanism is controlled through the WDT\_WIRQENSET/WDT\_WIRQENCLR and WDT\_WIRQSTAT registers.

The prescaler ratio can be set from 1 to 128 by accessing the WDT\_WCLR[4:2] PTV bit field and the WDT\_WCLR[5] PRE bit of the watchdog control register (WDT\_WCLR).

The current timer value can be accessed on-the-fly by reading the watchdog timer counter register (WDT\_WCRR), modified by accessing the watchdog timer load register (WDT\_WLDR) (no on-the-fly update), or reloaded by following a specific reload sequence on the watchdog timer trigger register (WDT\_WTGR). A start/stop sequence applied to the watchdog timer start/stop register (WDT\_WSPR) can start and stop the watchdog timers.

Figure 20-97. 32-Bit Watchdog Timer Functional Block Diagram

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 20.4.3.4 Reset Context

The watchdog timers are enabled after reset. Table 20-102 lists the default reset values of the two watchdog timer load registers (the WDT\_WLDR) and prescaler ratios (the WDT\_WCLR[4:2] PTV bit field). To get these values, software must read the corresponding WDT\_WCLR[4:2] PTV bit field and the 32-bit register to retrieve the static configuration of the module.

Table 20-102. Count and Prescaler Default Reset Values

| Timer   | WDT_WLDR Reset Value   |   PTV Reset Value |
|---------|------------------------|-------------------|
| WDT     | FFFF FFBEh             |                 0 |

## 20.4.3.5 Overflow/Reset Generation

When the watchdog timer counter register (WDT\_WCRR) overflows, an active-low reset pulse is generated to the PRCM module. This RESET pulse causes the PRCM module to generate global WARM reset of the device, which causes the nRESETIN\_OUT pin to be driven out of the device. This pulse is one prescaled timer clock cycle wide and occurs at the same time as the timer counter overflow.

After reset generation, the counter is automatically reloaded with the value stored in the watchdog load register (WDT\_WLDR) and the prescaler is reset (the prescaler ratio remains unchanged). When the reset pulse output is generated, the timer counter begins incrementing again.

Figure 20-98 shows a general functional view of the watchdog timers.

Figure 20-98. Watchdog Timers General Functional View

<!-- image -->

## 20.4.3.6 Prescaler Value/Timer Reset Frequency

Each watchdog timer is composed of a prescaler stage and a timer counter.

The timer rate is defined by the following values:

- Value of the prescaler fields (the WDT\_WCLR[5] PRE bit and the WDT\_WCLR[4:2] PTV bit field)
- Value loaded into the timer load register (WDT\_WLDR)

The prescaler stage is clocked with the timer clock and acts as a clock divider for the timer counter stage. The ratio is managed by accessing the ratio definition field (the WDT\_WCLR[4:2] PTV bit field) and is enabled with the WDT\_WCLR[5] PRE bit.

Table 20-103 lists the prescaler clock ratio values.

Table 20-103. Prescaler Clock Ratio Values

|   WDT_WCLR[5] PRE | WDT_WCLR[4:2] PTV   |   Clock Divider (PS) |
|-------------------|---------------------|----------------------|
|                 0 | X                   |                    1 |
|                 1 | 0                   |                    1 |
|                 1 | 1                   |                    2 |
|                 1 | 2                   |                    4 |
|                 1 | 3                   |                    8 |
|                 1 | 4                   |                   16 |
|                 1 | 5                   |                   32 |
|                 1 | 6                   |                   64 |
|                 1 | 7                   |                  128 |

Thus the watchdog timer overflow rate is expressed as:

OVF\_Rate = (FFFF FFFFh - WDT\_WLDR + 1) × (wd-functional clock period) × PS

where wd-functional clock period = 1/(wd-functional clock frequency) and PS = 2 (PTV)

| CAUTION                                                                                                                                                                                                                                                                                                                 |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Internal resynchronization causes some latency in any software write to WDT_WSPR before WDT_WSPR is updated with the programmed value: 1.5 × functional clock cycles ≤ write_WDT_WSPR_latency ≤ 2.5 × functional clock cycles Remember to consider this latency whenever the watchdog timer must be started or stopped. |

For example, for a timer clock input of 32 kHz with a prescaler ratio value of 1 (clock divided by 2) and WDT\_WCLR[5] PRE = 1 (clock divider enabled), the reset period is as listed in Table 20-104.

Table 20-104. Reset Period Examples

| WDT_WLDR Value   | Reset Period   |
|------------------|----------------|
| 0000 0000h       | 74 h 34 min    |
| FFFF 0000h       | 4 s            |
| FFFF FFF0h       | 1 ms           |
| FFFF FFFFh       | 62.5 µs        |

## CAUTION

- Ensure that the reloaded value allows the correct operation of the application. When a watchdog timer is enabled, software must periodically trigger a reload before the counter overflows. Hence, the value of the WDT\_WLDR[31:0] bit field must be chosen according to the ongoing activity preceding the watchdog reload.
- Due to design reasons, WDT\_WLDR[31:0] = FFFF FFFFh is a special case, although such a value of WDT\_WLDR is meaningless. When WDT\_WLDR is programmed with the overflow value, a triggering event generates a reset/interrupt one functional clock cycle later, even if the watchdog timer is stopped.

<!-- image -->

<!-- image -->

www.ti.com

Table 20-105 lists the default reset periods for the watchdog timers.

Table 20-105. Default Watchdog Timer Reset Periods

| Watchdog Timers   | Clock Source   | Default Reset Period   |
|-------------------|----------------|------------------------|
| WDT               | 32 kHz         | 2 s                    |

## 20.4.3.7 Triggering a Timer Reload

To reload the timer counter and reset the prescaler before reaching overflow, a reload command is executed by accessing the watchdog timer trigger register (WDT\_WTGR) using a specific reload sequence.

The specific reload sequence is performed whenever the written value on the WDT\_WTGR register differs from its previous value. In this case, reload is executed in the same way as an overflow autoreload, but without the generation of a reset pulse.

The timer counter is loaded with the value of the watchdog timer load register (the WDT\_WLDR[31:0] TIMER\_LOAD bit field), and the prescaler is reset.

## 20.4.3.8 Start/Stop Sequence for Watchdog Timers (Using the WDT\_WSPR Register)

To start and stop a watchdog timer, access must be made through the start/stop register (WDT\_WSPR) using a specific sequence.

To disable the timer, follow this sequence:

1. Write XXXX AAAAh in WDT\_WSPR.
2. Poll for posted write to complete using WDT\_WWPS.W\_PEND\_WSPR.
3. Write XXXX 5555h in WDT\_WSPR.
4. Poll for posted write to complete using WDT\_WWPS.W\_PEND\_WSPR.

To enable the timer, follow this sequence:

1. Write XXXX BBBBh in WDT\_WSPR.
2. Poll for posted write to complete using WDT\_WWPS.W\_PEND\_WSPR.
3. Write XXXX 4444h in WDT\_WSPR.
4. Poll for posted write to complete using WDT\_WWPS.W\_PEND\_WSPR.

All other write sequences on the WDT\_WSPR register have no effect on the start/stop feature of the module.

## 20.4.3.9 Modifying Timer Count/Load Values and Prescaler Setting

To modify the timer counter value (the WDT\_WCRR register), prescaler ratio (the WDT\_WCLR[4:2] PTV bit field), delay configuration value (the WDT\_WDLY[31:0] DLY\_VALUE bit field), or the load value (the WDT\_WLDR[31:0] TIMER\_LOAD bit field), the watchdog timer must be disabled by using the start/stop sequence (the WDT\_WSPR register).

After a write access, the load register value and prescaler ratio registers are updated immediately, but new values are considered only after the next consecutive counter overflow or after a new trigger command (the WDT\_WTGR register).

## 20.4.3.10 Watchdog Counter Register Access Restriction (WDT\_WCRR Register)

A 32-bit shadow register is implemented to read a coherent value of the WDT\_WCRR register because the WDT\_WCRR register is directly related to the timer counter value and is updated on the timer clock (WDT\_FCLK). The shadow register is updated by a 16-bit LSB read command.

NOTE:

<!-- image -->

Although the L4 clock (WDT\_ICLK) is completely asynchronous with the timer clock (WDT\_FCLK), some synchronization is performed to ensure that the value of the WDT\_WCRR register is not read while it is being incremented.

When 32-bit read access is performed, the shadow register is not updated. Read access is performed directly from the accessed register.

To ensure that a coherent value is read inside WDT\_WCRR, the first read access is to the lower 16 bits (offset = 8h), followed by read access to the upper 16 bits (offset = Ah).

## 20.4.3.11 Watchdog Timer Interrupt Generation

When an interrupt source occurs, the interrupt status bit (the WDT\_WIRQSTAT[0] EVENT\_OVF or WDT\_WIRQSTAT[1] EVENT\_DLY bit) is set to 1. The output interrupt line (WDTi\_IRQ) is asserted (active low) when status (the EVENT\_xxx bit) and enable (the xxx\_IT\_ENA bit) flags are set to 1; the order is not relevant. Writing 1 to the enable bit (the status is already set at 1) also triggers the interrupt in the normal order (enable first, status next). The pending interrupt event is cleared when the set status bit is overwritten by a value of 1 by a write command in the WDT\_WIRQSTAT register. Reading the WDT\_WIRQSTAT register and writing the value back allows a fast interrupt acknowledge process.

The watchdog timer issues an overflow interrupt if this interrupt is enabled in the watchdog interrupt enable register (WDT\_WIRQENSET[0] OVF\_IT\_ENA = 1). When the overflow occurs, the interrupt status bit (the WDT\_WIRQSTAT[0] EVENT\_OVF bit) is set to 1. The output interrupt line (WDT\_IRQ) is asserted (active low) when status (EVENT\_OVF) and enable (OVF\_IT\_ENA) flags are set to 1; the order is not relevant. This interrupt can be disabled by setting the WDT\_WIRQENCLR[0] OVF\_IT\_ENA bit to 1.

The watchdog can issue the delay interrupt if this interrupt is enabled in the interrupt enable register (WDT\_WIRQENSET[1] DLY\_IT\_ENA = 1). When the counter is running and the counter value matches the value stored in the delay configuration register (WDT\_WDLY), the corresponding interrupt status bit is set in the watchdog status register (WDT\_WIRQSTAT) and the output interrupt line is asserted (active low) when the flag (EVENT\_DLY) and enable (DLY\_IT\_ENA) bits are 1 in the WDT\_WIRQSTAT and WDT\_WIRQENSET registers, respectively; the order (normally enable, then flag), is not relevant. This interrupt can be disabled by setting the WDT\_WIRQENCLR[1] DLY\_IT\_ENA bit to 1.

NOTE:

Writing 0 to the WDT\_WIRQSTAT[0] EVENT\_OVF bit or the WDT\_WIRQSTAT[1] EVENT\_DLY bit has no effect.

The two clock domains are resynchronized because the interrupt event is generated on the functional clock domain (WDTi\_FCLK) during the updating of the interrupt status register (WDT\_WIRQSTAT).

The WDT\_WDLY register is used to specify the value of the delay configuration register. The delay time to interrupt is the difference between the reload value stored in the counter load register (WDT\_WLDR) and the programmed value in this register (WDT\_WDLY).

Use the following formula to estimate the delay time:

Delay time period = (WDT\_WDLY - WDT\_WLDR + 1) × Timer clock period × Clock divider

Where:

- Timer clock period = 1/(Timer clock frequency)
- Clock divider = 2**PTV

If the counter value (WDT\_WCRR) reaches the programmed value (WDT\_WDLY), the status bit (EVENT\_DLY) gets set in the interrupt status register (WDT\_WIRQSTAT), and an interrupt occurs if the corresponding enable bit is set in the interrupt enable register (WDT\_WIRQENSET).

<!-- image -->

www.ti.com

## CAUTION

If the reload event occurs (after a triggering sequence or after a reset sequence) before reaching the programmed value (WDT\_WDLY[31:0] WDLY\_VALUE), no interrupt is generated.

Also, no interrupt is generated if the value programmed in the delay configuration register (WDT\_WDLY) is less than the value stored in the counter load register (WDT\_WLDR).

## 20.4.3.12 Watchdog Timers Under Emulation

To configure the WDT to stop during emulation suspend events (for example, debugger breakpoints), set up the WDT and the Debug Subsystem:

1. Set WDT\_WDSC.EMUFREE=0. This will allow the Suspend\_Control signal from the Debug Subsystem (Chapter 27) to stop and start the WDT. Note that if EMUFREE=1, the Suspend\_Control signal is ignored and the WDT is free running regardless of any debug suspend event. This EMUFREE bit gives local control from a module perspective to gate the suspend signal coming from the Debug Subsystem.
2. Set the appropriate xxx\_Suspend\_Control register = 0x9, as described in Section 27.1.1.1, Debug Suspend Support for Peripherals . Choose the register appropriate to the peripheral you want to suspend during a suspend event.

## 20.4.3.13 Accessing Watchdog Timer Registers

Posted/nonposted selection applies only to functional registers that require synchronization on/from the timer functional clock domain (WDTi\_FCLK). For write/read operation, the following registers are affected:

- WDT\_WCLR
- WDT\_WCRR
- WDT\_WLDR
- WDT\_WTGR
- WDT\_WDLY
- WDT\_WSPR

The timer interface clock domain synchronous registers are not affected by the posted/nonposted selection; the write/read operation is effective and acknowledged (command accepted) after one WDT\_ICLK cycle from the command assertion. The timer interface clock domain synchronous registers are:

- WDT\_WIDR
- WDT\_WDSC
- WDT\_WDST
- WDT\_WIRQSTATRAW
- WDT\_WIRQSTAT
- WDT\_WIRQENSET
- WDT\_WIRQENCLR
- WDT\_WWPS

## 20.4.3.14 Low-Level Programming Model

This section covers the low-level hardware programming sequences for configuration and use of the module.

## 20.4.3.14.1 Global Initialization

## 20.4.3.14.1.1 Surrounding Modules Global Initialization

This section identifies the requirements for initializing the surrounding modules when the watchdog timer is to be used for the first time after a device reset. This initialization of surrounding modules is based on the integration and environment of the watchdog timer (see Table 20-106).

Table 20-106. Global Initialization of Surrounding Modules

| Surrounding Modules   | Comments                                                                                       |
|-----------------------|------------------------------------------------------------------------------------------------|
| PRCM                  | The module interface and functional clocks must be enabled.                                    |
| Control module        | Module-specific pad multiplexing must be set in the control module.                            |
| MPU INTC              | The MPU INTC configuration must be performed to enable the interrupts from the watchdog timer. |

## 20.4.3.14.1.2 Main Sequence - Watchdog Timer Module Global Initialization

Table 20-107 lists the steps for initializing the watchdog timer module when the module is to be used for the first time.

Table 20-107. Watchdog Timer Module Global Initialization

| Step                       | Register/Bit Field/Programming Model   |   Value |
|----------------------------|----------------------------------------|---------|
| Execute software reset.    | WDT_WDSC[1] SOFTRESET                  |       1 |
| Wait until reset release?  | WDT_WDSC[1] SOFTRESET                  |       0 |
| Enable delay interrupt.    | WDT_WIRQENSET[1] ENABLE_DLY            |       1 |
| Enable overflow interrupt. | WDT_WIRQENSET[0] ENABLE_OVF            |       1 |

## 20.4.3.14.2 Operational Mode Configuration

## 20.4.3.14.2.1 Main Sequence - Watchdog Timer Basic Configuration

Table 20-108 lists the steps for the basic configuration of the watchdog timer.

Table 20-108. Watchdog Timer Basic Configuration

| Step                            | Register/Bit Field/Programming Model   | Value   |
|---------------------------------|----------------------------------------|---------|
| Disable the watchdog timer.     | See Section 20.4.3.14.2.2.             |         |
| Set prescaler value.            | WDT_WCLR[4:2] PTV                      | xxx     |
| Enable prescaler.               | WDT_WCLR[5] PRE                        | 1       |
| Load delay configuration value. | WDT_WDLY                               | xxx     |
| Load timer counter value.       | WDT_WCRR                               | xxx     |
| Enable the watchdog timer.      | See Section 20.4.3.14.2.3.             |         |

<!-- image -->