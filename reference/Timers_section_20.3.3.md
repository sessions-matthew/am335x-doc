<!-- image -->

## 20.3.3 Functional Description

This section defines the module interrupt capabilities and requirements.

## 20.3.3.1 Functional Block Diagram

Figure 20-56 shows the RTC module block diagram. Figure 20-57 shows a functional block diagram of the RTC.

Figure 20-56. RTC Block Diagram

<!-- image -->

Figure 20-57. RTC Functional Block Diagram

<!-- image -->

## 20.3.3.2 Clock Source

The clock reference for the RTC can be sourced from an external crystal (used with the 32K RTC Oscillator), an external 32KHz oscillator, or from the Peripheral PLL. The RTC has an internal oscillator buffer to support direct operation with a crystal. The crystal is connected between pins RTC\_XTALIN and RTC\_XTALOUT. RTC\_XTALIN is the input to the on-chip oscillator and RTC\_XTALOUT is the output from the oscillator back to the crystal. The oscillator can be enabled or disabled by using the RTC\_OSC\_REG register. For more information about the RTC crystal connection, see your device-specific data manual.

An external 32.768-kHz clock oscillator may be used instead of a crystal. In such a case, the clock source is connected to RTC\_XTALIN, and RTC\_XTALOUT is left unconnected.

The source of the 32-KHz clock is selected using the OSC\_CLK.SEL\_32KCLK\_SRC bit.

If the RTC is not used, the RTC\_XTALIN pin should be held low and RTC\_XTALOUT should be left unconnected. The RTC\_disable bit in the control register (CTRL\_REG) can be set to save power; however, the RTC\_disable bit should not be cleared once it has been set. If the application requires the RTC module to stop and continue, the STOP\_RTC bit in CTRL\_REG should be used instead.

RTCINT

## 20.3.3.3 Signal Descriptions

Table 20-59 lists the signals and their descriptions for the RTC.

## Table 20-59. RTC Signals

| Signal      | I/O   | Description                                                                                                                                                                                                                    |
|-------------|-------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| RTC_XTALIN  | I     | RTC time base input signal. RTC_XTALIN can either be driven with a 32.768-kHz reference clock, or RTC_XTALIN and RTC_XTALOUT can be connected to an external crystal. This signal is the input to the RTC internal oscillator. |
| RTC_XTALOUT | O     | RTC time base output signal. RTC_XTALOUT is the output from the RTC internal oscillator. If a crystal is not used as the time base for RTC_XTALIN, RTC_XTALOUT should be left unconnected.                                     |

## 20.3.3.4 Interrupt Support

## 20.3.3.4.1 CPU Interrupts

The RTC generates two interrupt outputs:

- timer\_intr (RTCINT) is a timer interrupt.
- alarm\_intr (RTCALARMINT) is an alarm interrupt.

NOTE:

Both interrupt outputs support high-level and high-pulse.

## 20.3.3.4.2 Interrupt Description

## 20.3.3.4.2.1 Timer Interrupt RTCINT (timer\_intr)

The timer interrupt can be generated periodically: every second, every minute, every hour, or every day (see INTERRUPTS\_REG[1:0] for a description of how to set this up). The IT\_TIMER bit of the interrupt register enables this interrupt. The timer interrupt is active-low.

The RTC\_STATUS\_REG[5:2] are only updated at each new interrupt and occur according to Table 20-60. For example, bit 2 (SEC) will always be set when one second has passed. It will also be set when one minute has passed since the completion of one minute also marks the completion of one second (from 59 seconds to 60 seconds). The same holds true for hours and days: each of them will also correspond to the passing of a second.

Conversely, bit 5 (DAY) will always be set when a day has passed. It might also be set when an hour, minute, or second has passed. However, this only occurs when the elapsed hour, minute, or second corresponds to the start of a new day.

Table 20-60. Interrupt Trigger Events

|                      |   One day has passed | One hour has passed   | One minute has passed   | One second has passed   |
|----------------------|----------------------|-----------------------|-------------------------|-------------------------|
| STATUS_REG[5] (DAY)  |                    1 | 0/1 (1)               | 0/1 (1)                 | 0/1 (1)                 |
| STATUS_REG[4] (HOUR) |                    1 | 1                     | 0/1 (1)                 | 0/1 (1)                 |
| STATUS_REG[3] (MIN)  |                    1 | 1                     | 1                       | 0/1 (1)                 |
| STATUS_REG[2] (SEC)  |                    1 | 1                     | 1                       | 1                       |

(1) This event is only triggered when the elapsed time unit (for example, Day) corresponds to the passage of another unit (for example, Seconds). For example, when the clock ticks from 00:23:59:59 (days : hours : minutes : seconds) to 01:00:00:00.

<!-- image -->

<!-- image -->

www.ti.com

## 20.3.3.4.2.2 Alarm Interrupt RTCALARMINT (alarm\_intr)

The alarm interrupt can be generated when the time set into TC ALARM registers is exactly the same as in the TC registers. This interrupt is then generated if the IT\_ALARM bit of the interrupts register is set. This interrupt is low-level sensitive. RTC\_STATUS\_REG[6] indicates that IRQ\_ALARM\_CHIP has occurred. This interrupt is disabled by writing '1' into the RTC\_STATUS\_REG[6].

## To set up an alarm:

- Modify the ALARM\_SECONDS, ALARM\_MINUTES, ALARM\_HOURS, ALARM\_DAY, ALARM\_WEEK, ALARM\_MONTH, and ALARM\_YEAR registers to the exact time you want an alarm to generate.
- Set the IT\_ALARM bit in the RTC\_INTERRUPTS register to enable the alarm interrupt.

## 20.3.3.5 Programming/Usage Guide

## 20.3.3.5.1 Time/Calendar Data Format

The time and calendar data in the RTC is stored as binary-coded decimal (BCD) format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. Although most of the time/calendar registers have 4 bits assigned to each BCD digit, some of the register fields are shorter since the range of valid numbers may be limited. For example, only 3 bits are required to represent the day of the week (WEEKS\_REG) since only BCD numbers 1 through 7 are required. The following time and calendar registers are supported (BCD Format):

Note that the ALARM registers which share the names above also share the same BCD formatting.

- SECOND - Second Count (00-59)
- MINUTE - Minute Count (00-59)
- HOUR - Hour Count (12HR: 01-12; 24HR: 00-23)
- DAY - Day of the Month Count (01-31)
- WEEK - Day of the Week (0-6: SUN = 0)
- MONTH - Month Count (01-12; JAN = 1)
- YEAR - Year Count (00-99)

## 20.3.3.5.2 Register Access

The three register types are as follows and each has its own access constraints:

- TC and TC alarm registers
- General registers
- Compensation registers

## 20.3.3.5.3 OCP MMR Spurious WRT Protection

The module also contains a kicker mechanism (Figure 20-58) to prevent any spurious writes from changing the register values. This mechanism requires two MMR writes to the Kick0 and Kick1 registers with exact data values before the kicker lock mechanism is released. Once released, the MMRs are writeable. The Kick0 data is 83E7 0B13h; the Kick1 data is 95A4 F1E0h. Note that it remains in an unlocked state until an OCP reset or invalid data pattern is written to one of the Kick0 or Kick1 registers.

Figure 20-58. Kick Register State Machine Diagram

<!-- image -->

<!-- image -->

<!-- image -->

- S0 is the Reset/Idle state
- S1 is an OCP wrt cycle of 83E7 0B13h at Kick0 completed state
- S2 is the UNLOCK MMR WRT state
- S0 -&gt; S1 when OCP wrt cycle of 83E7 0B13h at Kick0
- S1 -&gt; S2 when OCP wrt cycle of 95A4 F1E0h at Kick1
- S1 -&gt; S0 when OCP reset event
- S2 -&gt; S0 when OCP reset event OR OCP wrt cycle of NOT 83E7 0B13h at Kick0 OR OCP wrt cycle at Kick1
- S2 -&gt;S1 when OCP wrt cycle of 83E7 0B13h at Kick0

## 20.3.3.5.4 Reading the Timer/Calendar (TC) Registers

The TC registers have a read-show register. The reading of the Seconds register will update all of the TC registers. For example, the Year will only get updated on a reading of the Seconds register. The time/calendar registers are updated every second as the time changes. During a read of the SECONDS register, the RTC copies the current values of the time/date registers into shadow read registers. This isolation assures that the CPU can capture all the time/date values at the moment of the SECONDS read request and not be subject to changing register values from time updates.

If desired, the RTC also provides a one-time-triggered minute-rounding feature to round the MINUTE:SECOND registers to the nearest minute (with zero seconds). This feature is enabled by setting the ROUND\_30S bit in the control register (CTRL); the RTC automatically rounds the time values to the nearest minute upon the next read of the SECONDS register.

NOTE:

Software should always read the Seconds register first. However, the software does not have to poll any status bit to determine when to read the TC registers. Table 20-61 defines the TC set that gets shadowed.

Table 20-61. RTC Register Names and Values

| Time Unit   | Range    | Remarks                      |
|-------------|----------|------------------------------|
| Year        | 00 to 99 |                              |
| Month       | 01 to 12 |                              |
| Day         | 01 to 31 | Months 1, 3, 5, 7, 8, 10, 12 |
| Day         | 01 to 30 | Months 4, 6, 9, 11           |
| Day         | 01 to 29 | Month 2 (leap year)          |
| Day         | 01 to 28 | Month 2 (common year)        |
| Week        | 00 to 06 | Day of week                  |
| Hour        | 00 to 23 | 24 hour mode                 |
| Hour        | 01 to 12 | AM/PM mode                   |
| Minute      | 00 to 59 |                              |
| Seconds     | 00 to 59 |                              |

## 20.3.3.5.4.1 Rounding Seconds

Time can be rounded to the closest minute, by setting the ROUND\_30S bit of the control register. When this bit is set, TC values are set to the closest minute value at the next second. The ROUND\_30S bit will be automatically cleared when rounding time is performed.

## Example:

- If current time is 10H59M45S, round operation will change time to 11H00M00S.
- If current time is 10H59M29S, round operation will change time to 10H59M00S.

## 20.3.3.5.5 Modifying the TC Registers

To write correct data from/to the TC and TC alarm registers and read the TC alarm registers, the ARM must first read the BUSY bit of the STATUS register until BUSY is equal to zero. Once the BUSY flag is zero, there is a 15 µs access period in which the ARM can program the TC and TC alarm registers. Once the 15 µs access period passes, the BUSY flag has to be read again from the STATUS register as described previously. If the ARM accesses the TC registers outside of the access period, then the access is not guaranteed.

The ARM can access the STATUS\_REG and CTRL\_REG at any time, with the exception of CTRL\_REG[5] which can only be changed when the RTC is stopped. The ARM can stop the RTC by clearing the STOP\_RTC bit of the control register. After clearing this bit, the RUN bit in the STATUS\_REG (bit 1) needs to be checked to verify the RTC has in fact stopped. Once this is confirmed, the TC values can be updated. After the values have been updated, the RTC can be re-started by resetting the STOP\_RTC bit.

NOTE:

After writing to a TC register, the user must wait 4 OCP clock cycles before reading the value from the register. If this wait time is not observed and the TC register is accessed, then old data will be read from the register.

## CAUTION

In order to remove any possibility of interrupting the register's read process, thus introducing a potential risk of violating the authorized 15-microsecond access period, it is strongly recommended that you disable all incoming interrupts during the register read process.

Figure 20-59. Flow Control for Updating RTC Registers

<!-- image -->

## 20.3.3.5.5.1 General Registers

The ARM can access the STATUS\_REG and the CTRL\_REG at any time (except the CTRL\_REG[5] bit which must be changed only when the RTC is stopped). For the INTERRUPTS\_REG, the ARM should respect the available access period to prevent false interrupts.

<!-- image -->

<!-- image -->

The RTC\_DISABLE bit of the CTRL register must only be used to completely disable the RTC function. When this bit is set, the 32 kHz clock is gated, and the RTC is frozen. From this point, resetting this bit to zero can lead to unexpected behavior. In order to save power, this bit should only be used if the RTC function is unwanted in the application.

## 20.3.3.5.6 Crystal Compensation

To compensate for any inaccuracy of the 32 kHz oscillator, the ARM can perform a calibration of the oscillator frequency, calculate the drift compensation versus one-hour period, and load the compensation registers with the drift compensation value. Auto compensation is enabled by AUTO\_COMP\_EN bit in the RTC\_CTRL register. If the COMP\_REG value is positive, compensation occurs after the second change event. COMP\_REG cycles are removed from the next second. If the COMP\_REG value is negative, compensation occurs before the second change event. COMP\_REG cycles are added to the current second. This enables compensation with a 1 32-kHz period accuracy each hour. The waveform below summarizes positive and negative compensation effect.

Access to the COMP\_MSB\_REG and COMP\_LSB\_REG registers must respect the available access period. These registers should not be updated during compensation (first second of each hour), but it is alright to update them during the second preceding a compensation event. For example, the ARM could load the compensation value into these registers after each hour event, during an available access period.

Figure 20-60. Compensation Illustration

<!-- image -->

## 20.3.3.6 Scratch Registers

The RTC provides three general-purpose registers (SCRATCHx\_REG) that can be used to store 32-bit words -- these registers have no functional purpose for the RTC. Software using the RTC may find the SCRATCHx registers to be useful in indicating RTC states. For example, the SCRATCHx\_REG registers may be used to indicate write-protection lock status or unintentional power downs. To indicate writeprotection, the software should write a unique value to one of the SCRATCHx\_REG registers when writeprotection is disabled and another unique value when write-protection is enabled again. In this way, the lock-status of the registers can be determined quickly by reading the SCRATCH register. To indicate unintentional power downs, the software should write a unique value to one of the SCRATCHx\_REG registers when RTC is configured and enabled. If the RTC is unintentionally powered down, the value written to the SCRATCH register is cleared.

## 20.3.3.7 Power Management

The RTC supports the power idle protocol. It has two SWakeup ports: one for the alarm event and one for a timer event.

When the RTC is in IDLE mode, the OCP clock is turned off and the 32 kHz clock remains on. The time and calendar continue to count in IDLE mode. When the RTC is placed back in FUNCTIONAL mode, the TC registers can be read.

The Alarm SWakeup event can be used to wakeup the RTC when it is in IDLE state. In order to do so, the alarm needs to be set and enabled before RTC enters the IDLE state. Once this is done, the SWakeup will occur when the alarm event triggers.

NOTE:

Since SWakeup is not periodic, using it to wake up the RTC when in IDLE state is not recommended. Please use Alarm SWakeup instead.

## 20.3.3.8 Power Management-System Level (PMIC Mode)

The RTC genertates pmic\_power\_en control which can be used to control an external PMIC.

Table 20-62. pmic\_power\_en Description

| Port          | Direction   | Function                                                                                                                                                                                          |
|---------------|-------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| rtc_pwronrstn | Input       | Not optional. RTC true power on domain reset. Only assert when RTC has lost power. Always de-assert when RTC voltage is greater than Vmin. The port remains de-asserted during normal operations. |
| pmic_power_en | Output      | Optional. Can be used to control an external PMIC. 0 = OFF 1 = ON (reset state) ON → OFF (Turn OFF) By ALARM2 event OFF → ON (Turn ON) By ALARM event OR ext_wakeup event                         |
| ext_wakeup    | Input       |                                                                                                                                                                                                   |

<!-- image -->