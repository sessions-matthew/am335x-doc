<!-- image -->

## 20.3.4 Use Cases

The following list includes high-level steps to start using the RTC:

1. Enable the module clock domains (for details on which clock domain, see Section 20.3.2, Integration ).
2. Enable the RTC module using CTRL\_REG.RTC\_disable.
3. Enable the 32K clock from PER PLL, if using the internal RTC oscillator.
4. Write to the kick registers (KICK0R, KICK1R) in the RTC.
5. Configure the timer in RTCSS for desired application (set time and date, alarm wakeup, and so on).
6. Start the RTC (in CTRL\_REG.STOP\_RTC).

## 20.3.5 RTC Registers

Table 20-63 lists the memory-mapped registers for the RTC. All register offset addresses not listed in Table 20-63 should be considered as reserved locations and the register contents should not be modified.

Table 20-63. RTC Registers

| Offset   | Acronym            | Register Name                        | Section           |
|----------|--------------------|--------------------------------------|-------------------|
| 0h       | SECONDS_REG        | Seconds Register                     | Section 20.3.5.1  |
| 4h       | MINUTES_REG        | Minutes Register                     | Section 20.3.5.2  |
| 8h       | HOURS_REG          | Hours Register                       | Section 20.3.5.3  |
| Ch       | DAYS_REG           | Day of the Month Register            | Section 20.3.5.4  |
| 10h      | MONTHS_REG         | Month Register                       | Section 20.3.5.5  |
| 14h      | YEARS_REG          | Year Register                        | Section 20.3.5.6  |
| 18h      | WEEKS_REG          | Day of the Week Register             | Section 20.3.5.7  |
| 20h      | ALARM_SECONDS_REG  | Alarm Seconds Register               | Section 20.3.5.8  |
| 24h      | ALARM_MINUTES_REG  | Alarm Minutes Register               | Section 20.3.5.9  |
| 28h      | ALARM_HOURS_REG    | Alarm Hours Register                 | Section 20.3.5.10 |
| 2Ch      | ALARM_DAYS_REG     | Alarm Day of the Month Register      | Section 20.3.5.11 |
| 30h      | ALARM_MONTHS_REG   | Alarm Months Register                | Section 20.3.5.12 |
| 34h      | ALARM_YEARS_REG    | Alarm Years Register                 | Section 20.3.5.13 |
| 40h      | RTC_CTRL_REG       | Control Register                     | Section 20.3.5.14 |
| 44h      | RTC_STATUS_REG     | Status Register                      | Section 20.3.5.15 |
| 48h      | RTC_INTERRUPTS_REG | Interrupt Enable Register            | Section 20.3.5.16 |
| 4Ch      | RTC_COMP_LSB_REG   | Compensation (LSB) Register          | Section 20.3.5.17 |
| 50h      | RTC_COMP_MSB_REG   | Compensation (MSB) Register          | Section 20.3.5.18 |
| 54h      | RTC_OSC_REG        | Oscillator Register                  | Section 20.3.5.19 |
| 60h      | RTC_SCRATCH0_REG   | Scratch 0 Register (General-Purpose) | Section 20.3.5.20 |
| 64h      | RTC_SCRATCH1_REG   | Scratch 1 Register (General-Purpose) | Section 20.3.5.21 |
| 68h      | RTC_SCRATCH2_REG   | Scratch 2 Register (General-Purpose) | Section 20.3.5.22 |
| 6Ch      | KICK0R             | Kick 0 Register (Write Protect)      | Section 20.3.5.23 |
| 70h      | KICK1R             | Kick 1 Register (Write Protect)      | Section 20.3.5.24 |
| 74h      | RTC_REVISION       | Revision Register                    | Section 20.3.5.25 |
| 78h      | RTC_SYSCONFIG      | System Configuration Register        | Section 20.3.5.26 |
| 7Ch      | RTC_IRQWAKEEN      | Wakeup Enable Register               | Section 20.3.5.27 |
| 80h      | ALARM2_SECONDS_REG | Alarm2 Seconds Register              | Section 20.3.5.28 |
| 84h      | ALARM2_MINUTES_REG | Alarm2 Minutes Register              | Section 20.3.5.29 |
| 88h      | ALARM2_HOURS_REG   | Alarm2 Hours Register                | Section 20.3.5.30 |
| 8Ch      | ALARM2_DAYS_REG    | Alarm2 Day of the Month Register     | Section 20.3.5.31 |
| 90h      | ALARM2_MONTHS_REG  | Alarm2 Months Register               | Section 20.3.5.32 |
| 94h      | ALARM2_YEARS_REG   | Alarm2 Years Register                | Section 20.3.5.33 |
| 98h      | RTC_PMIC           | RTC PMIC Register                    | Section 20.3.5.34 |

## Table 20-63. RTC Registers (continued)

| Offset   | Acronym      | Register Name         | Section           |
|----------|--------------|-----------------------|-------------------|
| 9Ch      | RTC_DEBOUNCE | RTC Debounce Register | Section 20.3.5.35 |

<!-- image -->

<!-- image -->

## 20.3.5.1 SECONDS\_REG Register (offset = 0h) [reset = 0h]

SECONDS\_REG is shown in Figure 20-61 and described in Table 20-64.

The SECONDS\_REG is used to program the required seconds value of the current time. Seconds are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. If the seconds value is 45, then the value of SEC0 is 5 and value of SEC1 is 4.

## Figure 20-61. SECONDS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21            | 20            | 19            | 18            | 17            | 16            |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | SEC1 SEC0     | SEC1 SEC0     | SEC1 SEC0     | SEC1 SEC0     | SEC1 SEC0     | SEC1 SEC0     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-64. SECONDS\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                           |
|-------|----------|--------|---------|---------------------------------------|
| 31-7  | RESERVED | R      | 0h      |                                       |
| 6-4   | SEC1     | R/W    | 0h      | 2nd digit of seconds, Range is 0 to 5 |
| 3-0   | SEC0     | R/W    | 0h      | 1st digit of seconds, Range is 0 to 9 |

## 20.3.5.2 MINUTES\_REG Register (offset = 4h) [reset = 0h]

MINUTES\_REG is shown in Figure 20-62 and described in Table 20-65.

The MINUTES\_REG is used to program the minutes value of the current time. Minutes are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. If the minutes value is 32, then the value of MIN0 is 2 and value of MIN1 is 3.

## Figure 20-62. MINUTES\_REG Register

| 31                 | 30                 | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 | 23                 | 22                 | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           | RESERVED           |
| R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               | R-0h               |
| 15                 | 14                 | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  | 7                  | 6                  | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 | RESERVED MIN1 MIN0 |
| R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h | R-0h R/W-0h R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-65. MINUTES\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                           |
|-------|----------|--------|---------|---------------------------------------|
| 31-7  | RESERVED | R      | 0h      |                                       |
| 6-4   | MIN1     | R/W    | 0h      | 2nd digit of minutes, Range is 0 to 5 |
| 3-0   | MIN0     | R/W    | 0h      | 1st digit of minutes, Range is 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.3 HOURS\_REG Register (offset = 8h) [reset = 0h]

HOURS\_REG is shown in Figure 20-63 and described in Table 20-66.

The HOURS\_REG is used to program the hours value of the current time. Hours are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. In 24Hr time mode if you want to set the hour as 18, then HOUR0 is set as 8 and HOUR1 is set as 1.

## Figure 20-63. HOURS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| PM_nAM   | RESERVED | HOUR1    |          |          | HOUR0    |          |          |
| R/W-0h   | R-0h     | R/W-0h   |          |          | R/W-0h   |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-66. HOURS\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                           |
|-------|----------|--------|---------|-------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                       |
| 7     | PM_nAM   | R/W    | 0h      | Only used in PM_AM mode (otherwise 0) 0h = AM 1h = PM |
| 6     | RESERVED | R      | 0h      |                                                       |
| 5-4   | HOUR1    | R/W    | 0h      | 2nd digit of hours, Range is 0 to 2                   |
| 3-0   | HOUR0    | R/W    | 0h      | 1st digit of hours, Range is 0 to 9                   |

## 20.3.5.4 DAYS\_REG Register (offset = Ch) [reset = 1h]

DAYS\_REG is shown in Figure 20-64 and described in Table 20-67.

The DAYS\_REG is used to program the day of the month value of the current date. Days are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. If the day value of the date is 28, DAY0 is set as 8 and DAY1 is set as 2.

## Figure 20-64. DAYS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DAY1     | DAY1     | DAY0     | DAY0     | DAY0     | DAY0     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-1h   | R/W-1h   | R/W-1h   | R/W-1h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-67. DAYS\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                        |
|-------|----------|--------|---------|------------------------------------|
| 31-6  | RESERVED | R      | 0h      |                                    |
| 5-4   | DAY1     | R/W    | 0h      | 2nd digit of days, Range is 0 to 3 |
| 3-0   | DAY0     | R/W    | 1h      | 1st digit of days, Range is 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.5 MONTHS\_REG Register (offset = 10h) [reset = 1h]

MONTHS\_REG is shown in Figure 20-65 and described in Table 20-68.

The MONTHS\_REG is used to set the month in the year value of the current date. Months are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. Usual notation is taken for month value: 1 = January, 2 = February, continuing until 12 = December.

## Figure 20-65. MONTHS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | MONTH1   |          | MONTH0   |          |          |
| R-0h     | R-0h     | R-0h     | R/W-0h   |          | R/W-1h   |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-68. MONTHS\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                          |
|-------|----------|--------|---------|--------------------------------------|
| 31-5  | RESERVED | R      | 0h      |                                      |
| 4     | MONTH1   | R/W    | 0h      | 2nd digit of months, Range is 0 to 1 |
| 3-0   | MONTH0   | R/W    | 1h      | 1st digit of months, Range is 0 to 9 |

## 20.3.5.6 YEARS\_REG Register (offset = 14h) [reset = 0h]

YEARS\_REG is shown in Figure 20-66 and described in Table 20-69.

The YEARS\_REG is used to program the year value of the current date. The year value is represented by only the last 2 digits and is stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. The year 1979 is programmed as 79 with YEAR0 set as 9 and YEAR1 set as 7.

Figure 20-66. YEARS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | YEAR1    | YEAR1    | YEAR1    | YEAR1    | YEAR0    | YEAR0    | YEAR0    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-69. YEARS\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                         |
|-------|----------|--------|---------|-------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                     |
| 7-4   | YEAR1    | R/W    | 0h      | 2nd digit of years, Range is 0 to 9 |
| 3-0   | YEAR0    | R/W    | 0h      | 1st digit of years, Range is 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.7 WEEKS\_REG Register (offset = 18h) [reset = 0h]

WEEKS\_REG is shown in Figure 20-67 and described in Table 20-70.

The WEEKS\_REG is used to program the day of the week value of the current date. The day of the week is stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent. Sunday is treated as 0, Monday 1, and ending at Saturday with 6.

## Figure 20-67. WEEKS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WEEK     | WEEK     | WEEK     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-70. WEEKS\_REG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------|
| 31-3  | RESERVED | R      | 0h      |                                                                    |
| 2-0   | WEEK     | R/W    | 0h      | 1st digit of days in a week, Range from 0 (Sunday) to 6 (Saturday) |

## 20.3.5.8 ALARM\_SECONDS\_REG Register (offset = 20h) [reset = 0h]

ALARM\_SECONDS\_REG is shown in Figure 20-68 and described in Table 20-71.

The ALARM\_SECONDS\_REG is used to program the second value for the alarm interrupt. Seconds are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-68. ALARM\_SECONDS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          | R-0h          |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ALARMSEC1     | ALARMSEC1     | ALARMSEC1     | ALARMSEC0     | ALARMSEC0     | ALARMSEC0     | ALARMSEC0     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-71. ALARM\_SECONDS\_REG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                           |
|-------|-----------|--------|---------|---------------------------------------|
| 31-7  | RESERVED  | R      | 0h      |                                       |
| 6-4   | ALARMSEC1 | R/W    | 0h      | 2nd digit of seconds, Range is 0 to 5 |
| 3-0   | ALARMSEC0 | R/W    | 0h      | 1st digit of seconds, Range is 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.9 ALARM\_MINUTES\_REG Register (offset = 24h) [reset = 0h]

ALARM\_MINUTES\_REG is shown in Figure 20-69 and described in Table 20-72.

The ALARM\_MINUTES\_REG is used to program the minute value for the alarm interrupt. Minutes are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-69. ALARM\_MINUTES\_REG Register

| 31       | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|----------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23       | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15       | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7        | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| RESERVED | ALARM_MIN1 | ALARM_MIN1 | ALARM_MIN1 | ALARM_MIN0 | ALARM_MIN0 | ALARM_MIN0 | ALARM_MIN0 |
| R-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-72. ALARM\_MINUTES\_REG Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                           |
|-------|------------|--------|---------|---------------------------------------|
| 31-7  | RESERVED   | R      | 0h      |                                       |
| 6-4   | ALARM_MIN1 | R/W    | 0h      | 2nd digit of minutes, Range is 0 to 5 |
| 3-0   | ALARM_MIN0 | R/W    | 0h      | 1st digit of minutes, Range is 0 to 9 |

## 20.3.5.10 ALARM\_HOURS\_REG Register (offset = 28h) [reset = 0h]

ALARM\_HOURS\_REG is shown in Figure 20-70 and described in Table 20-73.

The ALARM\_HOURS\_REG is used to program the hour value for the alarm interrupt. Hours are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-70. ALARM\_HOURS\_REG Register

| 31            | 30       | 29          | 28       | 27       | 26          | 25       | 24       |
|---------------|----------|-------------|----------|----------|-------------|----------|----------|
| RESERVED      | RESERVED | RESERVED    | RESERVED | RESERVED | RESERVED    | RESERVED | RESERVED |
| R-0h          | R-0h     | R-0h        | R-0h     | R-0h     | R-0h        | R-0h     | R-0h     |
| 23            | 22       | 21          | 20       | 19       | 18          | 17       | 16       |
| RESERVED      | RESERVED | RESERVED    | RESERVED | RESERVED | RESERVED    | RESERVED | RESERVED |
| R-0h          | R-0h     | R-0h        | R-0h     | R-0h     | R-0h        | R-0h     | R-0h     |
| 15            | 14       | 13          | 12       | 11       | 10          | 9        | 8        |
| RESERVED      | RESERVED | RESERVED    | RESERVED | RESERVED | RESERVED    | RESERVED | RESERVED |
| R-0h          | R-0h     | R-0h        | R-0h     | R-0h     | R-0h        | R-0h     | R-0h     |
| 7             | 6        | 5           | 4        | 3        | 2           | 1        | 0        |
| ALARM_PM_n AM | RESERVED | ALARM_HOUR1 |          |          | ALARM_HOUR0 |          |          |
| R/W-0h        | R-0h     | R/W-0h      |          |          | R/W-0h      |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-73. ALARM\_HOURS\_REG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                           |
|-------|--------------|--------|---------|-------------------------------------------------------|
| 31-8  | RESERVED     | R      | 0h      |                                                       |
| 7     | ALARM_PM_nAM | R/W    | 0h      | Only used in PM_AM mode (otherwise 0) 0h = AM 1h = PM |
| 6     | RESERVED     | R      | 0h      |                                                       |
| 5-4   | ALARM_HOUR1  | R/W    | 0h      | 2nd digit of hours, Range is 0 to 2                   |
| 3-0   | ALARM_HOUR0  | R/W    | 0h      | 1st digit of hours, Range is 0 to 9                   |

<!-- image -->

<!-- image -->

## 20.3.5.11 ALARM\_DAYS\_REG Register (offset = 2Ch) [reset = 1h]

ALARM\_DAYS\_REG is shown in Figure 20-71 and described in Table 20-74.

The ALARM\_DAYS\_REG is used to program the day of the month value for the alarm interrupt. Days are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-71. ALARM\_DAYS\_REG Register

| 31       | 30       | 29         | 28         | 27         | 26         | 25         | 24         |
|----------|----------|------------|------------|------------|------------|------------|------------|
| RESERVED | RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23       | 22       | 21         | 20         | 19         | 18         | 17         | 16         |
| RESERVED | RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15       | 14       | 13         | 12         | 11         | 10         | 9          | 8          |
| RESERVED | RESERVED | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7        | 6        | 5          | 4          | 3          | 2          | 1          | 0          |
| RESERVED | RESERVED | ALARM_DAY1 | ALARM_DAY1 | ALARM_DAY1 | ALARM_DAY0 | ALARM_DAY0 | ALARM_DAY0 |
| R-0h     | R-0h     | R/W-0h     | R/W-0h     | R/W-0h     | R/W-1h     | R/W-1h     | R/W-1h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-74. ALARM\_DAYS\_REG Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                           |
|-------|------------|--------|---------|---------------------------------------|
| 31-6  | RESERVED   | R      | 0h      |                                       |
| 5-4   | ALARM_DAY1 | R/W    | 0h      | 2nd digit for days, Range from 0 to 3 |
| 3-0   | ALARM_DAY0 | R/W    | 1h      | 1st digit for days, Range from 0 to 9 |

## 20.3.5.12 ALARM\_MONTHS\_REG Register (offset = 30h) [reset = 1h]

ALARM\_MONTHS\_REG is shown in Figure 20-72 and described in Table 20-75.

The ALARM\_MONTHS\_REG is used to program the month in the year value for the alarm interrupt. The month is stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-72. ALARM\_MONTHS\_REG Register

| 31       | 30       | 29       | 28            | 27       | 26           | 25           | 24           |
|----------|----------|----------|---------------|----------|--------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h         | R-0h         | R-0h         |
| 23       | 22       | 21       | 20            | 19       | 18           | 17           | 16           |
| RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h         | R-0h         | R-0h         |
| 15       | 14       | 13       | 12            | 11       | 10           | 9            | 8            |
| RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h         | R-0h         | R-0h         |
| 7        | 6        | 5        | 4             | 3        | 2            | 1            | 0            |
| RESERVED | RESERVED | RESERVED | ALARM_MONT H1 |          | ALARM_MONTH0 | ALARM_MONTH0 | ALARM_MONTH0 |
| R-0h     | R-0h     | R-0h     | R/W-0h        |          | R/W-1h       | R/W-1h       | R/W-1h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-75. ALARM\_MONTHS\_REG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                            |
|-------|--------------|--------|---------|----------------------------------------|
| 31-5  | RESERVED     | R      | 0h      |                                        |
| 4     | ALARM_MONTH1 | R/W    | 0h      | 2nd digit of months, Range from 0 to 1 |
| 3-0   | ALARM_MONTH0 | R/W    | 1h      | 1st digit of months, Range from 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.13 ALARM\_YEARS\_REG Register (offset = 34h) [reset = 0h]

ALARM\_YEARS\_REG is shown in Figure 20-73 and described in Table 20-76.

The ALARM\_YEARS\_REG is used to program the year for the alarm interrupt. Only the last two digits are used to represent the year and is stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-73. ALARM\_YEARS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22          | 21          | 20          | 19          | 18          |             | 17          | 16          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6           | 5           | 4           | 3           |             | 2           | 1           | 0           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ALARM_YEAR1 | ALARM_YEAR1 | ALARM_YEAR1 | ALARM_YEAR1 | ALARM_YEAR0 | ALARM_YEAR0 | ALARM_YEAR0 | ALARM_YEAR0 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-76. ALARM\_YEARS\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                           |
|-------|-------------|--------|---------|---------------------------------------|
| 31-8  | RESERVED    | R      | 0h      |                                       |
| 7-4   | ALARM_YEAR1 | R/W    | 0h      | 2nd digit of years, Range from 0 to 9 |
| 3-0   | ALARM_YEAR0 | R/W    | 0h      | 1st digit of years, Range from 0 to 9 |

## 20.3.5.14 RTC\_CTRL\_REG Register (offset = 40h) [reset = 0h]

RTC\_CTRL\_REG is shown in Figure 20-74 and described in Table 20-77.

The RTC\_CTRL\_REG contains the controls to enable/disable the RTC, set the 12/24 hour time mode, to enable the 30 second rounding feature, and to STOP/START the RTC. The SET\_32\_COUNTER bit must only be used when the RTC is frozen. The RTC\_DISABLE bit must only be used to completely disable the RTC function. When this bit is set, the 32 kHz clock is gated and the RTC is frozen. From this point, resetting this bit to zero can lead to unexpected behavior. This bit should only be used if the RTC function is unwanted in the application, in order to save power. MODE\_12\_24: It is possible to switch between the two modes at any time without disturbing the RTC. Read or write is always performed with the current mode. Auto compensation is enabled by the AUTO\_COMP bit. If the COMP\_REG value is positive, compensation occurs after the second change event. COMP\_REG cycles are removed from the next second. If the COMP\_REG value is negative, compensation occurs before the second change event. COMP\_REG cycles are added to the current second. This enables it to compensate with one 32-kHz period accuracy each hour. The ROUND\_30S bit is a toggle bit; the ARM can only write 1 and the RTC clears it. If the ARM sets the ROUND\_30S bit and then reads it, the ARM reads 1 until the round-to-theclosest-minute is performed at the next second. The ARM can stop the RTC by clearing the STOP\_RTC bit (owing to internal resynchronization, the RUN bit of the status register (STATUS\_REG) must be checked to ensure that the RTC is frozen), then update TC values, and re-start the RTC by resetting the STOP\_RTC bit.

Figure 20-74. RTC\_CTRL\_REG Register

| 31       | 30          | 29              | 28        | 27         | 26        | 25        | 24       |
|----------|-------------|-----------------|-----------|------------|-----------|-----------|----------|
| RESERVED | RESERVED    | RESERVED        | RESERVED  | RESERVED   | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h        | R-0h            | R-0h      | R-0h       | R-0h      | R-0h      | R-0h     |
| 23       | 22          | 21              | 20        | 19         | 18        | 17        | 16       |
| RESERVED | RESERVED    | RESERVED        | RESERVED  | RESERVED   | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h        | R-0h            | R-0h      | R-0h       | R-0h      | R-0h      | R-0h     |
| 15       | 14          | 13              | 12        | 11         | 10        | 9         | 8        |
| RESERVED | RESERVED    | RESERVED        | RESERVED  | RESERVED   | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h        | R-0h            | R-0h      | R-0h       | R-0h      | R-0h      | R-0h     |
| 7        | 6           | 5               | 4         | 3          | 2         | 1         | 0        |
| RESERVED | RTC_DISABLE | SET_32_COUN TER | TEST_MODE | MODE_12_24 | AUTO_COMP | ROUND_30S | STOP_RTC |
| R-0h     | R/W-0h      | R/W-0h          | R/W-0h    | R/W-0h     | R/W-0h    | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-77. RTC\_CTRL\_REG Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                 |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED       | R      | 0h      |                                                                                                                                                                                             |
| 6     | RTC_DISABLE    | R/W    | 0h      | Disable RTC module and gate 32-kHz reference clock. 0h = RTC enable 1h = RTC disable (no 32 kHz clock)                                                                                      |
| 5     | SET_32_COUNTER | R/W    | 0h      | Set the 32-kHz counter with the value stored in the compensation registers when the SET_32_COUNTER bit is set. 0h = No action. 1h = Set the 32Khz counter with compensation registers value |
| 4     | TEST_MODE      | R/W    | 0h      | Test mode. 0h = Functional mode 1h = Test mode (Auto compensation is enabled when the 32Khz counter reaches its end)                                                                        |

<!-- image -->

<!-- image -->

## Table 20-77. RTC\_CTRL\_REG Register Field Descriptions (continued)

|   Bit | Field      | Type   | Reset   | Description                                                                                                                      |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------|
|     3 | MODE_12_24 | R/W    | 0h      | Enable 12-hour mode for HOURS and ALARMHOURS registers. 0h = 24-hr mode 1h = 12-hour mode                                        |
|     2 | AUTO_COMP  | R/W    | 0h      | Enable oscillator compensation mode. 0h = No auto compensation 1h = Auto compensation enabled                                    |
|     1 | ROUND_30S  | R/W    | 0h      | Enable one-time rounding to nearest minute on next time register read. 0h = No update 1h = Time is rounded to the nearest minute |
|     0 | STOP_RTC   | R/W    | 0h      | Stop the RTC 32-kHz counter. 0h = RTC is frozen 1h = RTC is running                                                              |

## 20.3.5.15 RTC\_STATUS\_REG Register (offset = 44h) [reset = 0h]

RTC\_STATUS\_REG is shown in Figure 20-75 and described in Table 20-78.

The RTC\_STATUS\_REG contains bits that signal the status of interrupts, events to the processor. Status for the alarm interrupt and timer events are notified by the register. The alarm interrupt keeps its low level until the ARM writes 1 in the ALARM bit of the RTC\_STATUS\_REG register. ALARM2: This bit will indicate the status of the alarm interrupt. Writing a 1 to the bit clears the interrupt. ALARM: This bit will indicate the status of the alarm interrupt. Writing a 1 to the bit clears the interrupt. ONE\_DAY\_EVENT1: This bit will indicate if a day event has occurred. An interrupt will be generated to the processor based on the masking of the interrupt controller. ONE\_HR\_EVENT1: This bit will indicate if an hour event has occurred. An interrupt will be generated to the processor based on the masking of the interrupt controller. ONE\_MIN\_EVENT1: This bit will indicate if a minute event has occurred. An interrupt will be generated to the processor based on the masking of the interrupt controller. ONE\_SEC\_EVENT1: This bit will indicate if a second event has occurred. An interrupt will be generated to the processor based on the masking of the interrupt controller. RUN: This bit will indicate if RTC is frozen or it is running. The RUN bit shows the real state of the RTC. Indeed, because the STOP\_RTC signal is resynchronized on 32-kHz clock the action of this bit is delayed. BUSY: This bit will give the status of RTC module. The Time and alarm registers can be modified only when this bit is 0. The timer interrupt is a negative edge sensitive low-level pulse (1 OCP cycle duration).

| Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   | Figure 20-75. RTC_STATUS_REG Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                | RESERVED                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| ALARM2                                  | ALARM                                   | ONE_DAY_EV ENT                          | ONE_HR_EVE NT                           | ONE_MIN_EVE NT                          | ONE_SEC_EV ENT                          | RUN                                     | BUSY                                    |
| R/W-0h                                  | R/W-0h                                  | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-78. RTC\_STATUS\_REG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED      | R      | 0h      |                                                                                                                                                            |
| 7     | ALARM2        | R/W    | 0h      | Indicates that an alarm2 interrupt has been generated. Software needs to wait 31 us before it clears this status to allow pmic_pwr_enable 1->0 transition. |
| 6     | ALARM         | R/W    | 0h      | Indicates that an alarm interrupt has been generated                                                                                                       |
| 5     | ONE_DAY_EVENT | R      | 0h      | One day has occurred                                                                                                                                       |
| 4     | ONE_HR_EVENT  | R      | 0h      | One hour has occurred                                                                                                                                      |
| 3     | ONE_MIN_EVENT | R      | 0h      | One minute has occurred                                                                                                                                    |
| 2     | ONE_SEC_EVENT | R      | 0h      | One second has occurred                                                                                                                                    |
| 1     | RUN           | R      | 0h      | RTC is frozen or is running. 0h = RTC is frozen 1h = RTC is running                                                                                        |
| 0     | BUSY          | R      | 0h      | Status of RTC module. 0h = Updating event in more than 15 s 1h = Updating event                                                                            |

<!-- image -->

<!-- image -->

## 20.3.5.16 RTC\_INTERRUPTS\_REG Register (offset = 48h) [reset = 0h]

RTC\_INTERRUPTS\_REG is shown in Figure 20-76 and described in Table 20-79.

The RTC\_INTERRUPTS\_REG is used to enable or disable the RTC from generating interrupts. The timer interrupt and alarm interrupt can be controlled using this register. The ARM must respect the BUSY period to prevent spurious interrupt. To set a period timer interrupt, the respective period value must be set in the EVERY field. For example, to set a periodic timer interrupt for every hour, the EVERY field has to be set to 2. Along with this the IT\_TIMER bit also has to be set for the periodic interrupt to be generated. IT\_ALARM bit has to be set to generate an alarm interrupt.

Figure 20-76. RTC\_INTERRUPTS\_REG Register

| 31       | 30       | 29       | 28        | 27       | 26       | 25       | 24       |
|----------|----------|----------|-----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20        | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12        | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4         | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | IT_ALARM2 | IT_ALARM | IT_TIMER | EVERY    |          |
| R-0h     | R-0h     | R-0h     | R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h   |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-79. RTC\_INTERRUPTS\_REG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                    |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------|
| 31-5  | RESERVED  | R      | 0h      |                                                                                                |
| 4     | IT_ALARM2 | R/W    | 0h      | Enable one interrupt when the alarm value is reached (TC ALARM2 registers) by the TC registers |
| 3     | IT_ALARM  | R/W    | 0h      | Enable one interrupt when the alarm value is reached (TC ALARM registers) by the TC registers  |
| 2     | IT_TIMER  | R/W    | 0h      | Enable periodic interrupt. 0h = Interrupt disabled 1h = Interrupt enabled                      |
| 1-0   | EVERY     | R/W    | 0h      | Interrupt period. 0h = Every second 1h = Every minute 2h = Every hour 3h = Every day           |

## 20.3.5.17 RTC\_COMP\_LSB\_REG Register (offset = 4Ch) [reset = 0h]

RTC\_COMP\_LSB\_REG is shown in Figure 20-77 and described in Table 20-80.

The COMP\_LSB\_REG is used to program the LSB value of the 32 kHz periods to be added to the 32 kHz counter every hour. This is used to compensate the oscillator drift. The COMP\_LSB\_REG works together with the compensation (MSB) register (COMP\_MSB\_REG). The AUTOCOMP bit in the control register (CTRL\_REG) must be enabled for compensation to take place. This register must be written in two's complement. That means that to add one 32-kHz oscillator period every hour, the ARM must write FFFFh into RTC\_COMP\_MSB\_REG and RTC\_COMP\_LSB\_REG. To remove one 32-kHz oscillator period every hour, the ARM must write 0001h into RTC\_COMP\_MSB\_REG and RTC\_COMP\_LSB\_REG. The 7FFFh value is forbidden.

## Figure 20-77. RTC\_COMP\_LSB\_REG Register

| 31                    | 30                    | 29                    | 28                    | 27                    | 26                    | 25                    | 24                    | 23                    | 22                    | 21                    | 20                    | 19                    | 18                    | 17                    | 16                    |
|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
| RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              |
| R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |
| 15                    | 14                    | 13                    | 12                    | 11                    | 10                    | 9                     | 8                     | 7                     | 6                     | 5                     | 4                     | 3                     | 2                     | 1                     | 0                     |
| RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB | RESERVED RTC_COMP_LSB |
| R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-80. RTC\_COMP\_LSB\_REG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                       |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------|
| 31-8  | RESERVED     | R      | 0h      |                                                                                   |
| 7-0   | RTC_COMP_LSB | R/W    | 0h      | Indicates number of 32-kHz periods to be added into the 32-kHz counter every hour |

<!-- image -->

<!-- image -->

## 20.3.5.18 RTC\_COMP\_MSB\_REG Register (offset = 50h) [reset = 0h]

RTC\_COMP\_MSB\_REG is shown in Figure 20-78 and described in Table 20-81.

The COMP\_MSB\_REG is used to program the MSB value of the 32 kHz periods to be added to the 32 kHz counter every hour. This is used to compensate the oscillator drift. The COMP\_MSB\_REG works together with the compensation (LSB) register (COMP\_LSB\_REG) to set the hourly oscillator compensation value. The AUTOCOMP bit in the control register (CTRL\_REG) must be enabled for compensation to take place. This register must be written in two's complement. That means that to add one 32-kHz oscillator period every hour, the ARM must write FFFFh into RTC\_COMP\_MSB\_REG and RTC\_COMP\_LSB\_REG. To remove one 32-kHz oscillator period every hour, the ARM must write 0001h into RTC\_COMP\_MSB\_REG and RTC\_COMP\_LSB\_REG. The 7FFFh value is forbidden.

## Figure 20-78. RTC\_COMP\_MSB\_REG Register

| 31                    | 30                    | 29                    | 28                    | 27                    | 26                    | 25                    | 24                    | 23                    | 22                    | 21                    | 20                    | 19                    | 18                    | 17                    | 16                    |
|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
| RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              | RESERVED              |
| R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  | R-0h                  |
| 15                    | 14                    | 13                    | 12                    | 11                    | 10                    | 9                     | 8                     | 7                     | 6                     | 5                     | 4                     | 3                     | 2                     | 1                     | 0                     |
| RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB | RESERVED RTC_COMP_MSB |
| R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           | R-0h R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-81. RTC\_COMP\_MSB\_REG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                       |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------|
| 31-8  | RESERVED     | R      | 0h      |                                                                                   |
| 7-0   | RTC_COMP_MSB | R/W    | 0h      | Indicates number of 32-kHz periods to be added into the 32-kHz counter every hour |

## 20.3.5.19 RTC\_OSC\_REG Register (offset = 54h) [reset = 10h]

RTC\_OSC\_REG is shown in Figure 20-79 and described in Table 20-82.

## Figure 20-79. RTC\_OSC\_REG Register

| 31       | 30        | 29       | 28        | 27              | 26         | 25       | 24       |
|----------|-----------|----------|-----------|-----------------|------------|----------|----------|
| RESERVED | RESERVED  | RESERVED | RESERVED  | RESERVED        | RESERVED   | RESERVED | RESERVED |
| R-0h     | R-0h      | R-0h     | R-0h      | R-0h            | R-0h       | R-0h     | R-0h     |
| 23       | 22        | 21       | 20        | 19              | 18         | 17       | 16       |
| RESERVED | RESERVED  | RESERVED | RESERVED  | RESERVED        | RESERVED   | RESERVED | RESERVED |
| R-0h     | R-0h      | R-0h     | R-0h      | R-0h            | R-0h       | R-0h     | R-0h     |
| 15       | 14        | 13       | 12        | 11              | 10         | 9        | 8        |
| RESERVED | RESERVED  | RESERVED | RESERVED  | RESERVED        | RESERVED   | RESERVED | RESERVED |
| R-0h     | R-0h      | R-0h     | R-0h      | R-0h            | R-0h       | R-0h     | R-0h     |
| 7        | 6         | 5        | 4         | 3               | 2          | 1        | 0        |
| RESERVED | EN_32KCLK | RESERVED | OSC32K_GZ | SEL_32KCLK_ SRC | RES_SELECT | SW2      | SW1      |
| R-0h     | R/W-0h    | R-0h     | R/W-1h    | R/W-0h          | R/W-0h     | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-82. RTC\_OSC\_REG Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                             |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED       | R      | 0h      |                                                                                                                                                                                                         |
| 6     | EN_32KCLK      | R/W    | 0h      | 32-kHz clock enable post clock mux of rtc_32k_clk_rtc_32k_aux_clk and rtc_32k_clk_rtc_32k_clk 0h = Disable. 1h = Enable.                                                                                |
| 5     | RESERVED       | R      | 0h      |                                                                                                                                                                                                         |
| 4     | OSC32K_GZ      | R/W    | 1h      | Disable the oscillator and apply high impedance to the output 0h = Enable 1h = Disabled and high impedance                                                                                              |
| 3     | SEL_32KCLK_SRC | R/W    | 0h      | 32-kHz clock source select 0h = Selects internal clock source, namely rtc_32k_clk_rtc_32k_aux_clk 1h = Selects external clock source, namely rtc_32k_clk_rtc_32k_clk that is from the 32-kHz oscillator |
| 2     | RES_SELECT     | R/W    | 0h      | External feedback resistor 0h = Internal 1h = External                                                                                                                                                  |
| 1     | SW2            | R/W    | 0h      | Inverter size adjustment                                                                                                                                                                                |
| 0     | SW1            | R/W    | 0h      | Inverter size adjustment                                                                                                                                                                                |

<!-- image -->

<!-- image -->

## 20.3.5.20 RTC\_SCRATCH0\_REG Register (offset = 60h) [reset = 0h]

RTC\_SCRATCH0\_REG is shown in Figure 20-80 and described in Table 20-83.

The RTC\_SCRATCH0\_REG is used to hold some required values for the RTC register.

## Figure 20-80. RTC\_SCRATCH0\_REG Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RTCSCRATCH0   |
|------|------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-83. RTC\_SCRATCH0\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                             |
|-------|-------------|--------|---------|-----------------------------------------|
| 31-0  | RTCSCRATCH0 | R/W    | 0h      | Scratch registers, available to program |

## 20.3.5.21 RTC\_SCRATCH1\_REG Register (offset = 64h) [reset = 0h]

RTC\_SCRATCH1\_REG is shown in Figure 20-81 and described in Table 20-84.

The RTC\_SCRATCH1\_REG is used to hold some required values for the RTC register.

## Figure 20-81. RTC\_SCRATCH1\_REG Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RTCSCRATCH1   |
|------|------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-84. RTC\_SCRATCH1\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                             |
|-------|-------------|--------|---------|-----------------------------------------|
| 31-0  | RTCSCRATCH1 | R/W    | 0h      | Scratch registers, available to program |

<!-- image -->

<!-- image -->

## 20.3.5.22 RTC\_SCRATCH2\_REG Register (offset = 68h) [reset = 0h]

RTC\_SCRATCH2\_REG is shown in Figure 20-82 and described in Table 20-85.

The RTC\_SCRATCH2\_REG is used to hold some required values for the RTC register.

## Figure 20-82. RTC\_SCRATCH2\_REG Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RTCSCRATCH2   |
|------|------------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-85. RTC\_SCRATCH2\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                             |
|-------|-------------|--------|---------|-----------------------------------------|
| 31-0  | RTCSCRATCH2 | R/W    | 0h      | Scratch registers, available to program |

## 20.3.5.23 KICK0R Register (offset = 6Ch) [reset = 0h]

KICK0R is shown in Figure 20-83 and described in Table 20-86.

The kick registers (KICKnR) are used to enable and disable write protection on the RTC registers. Out of reset, the RTC registers are write-protected. To disable write protection, correct keys must be written to the KICKnR registers. The Kick0 register allows writing to unlock the kick0 data. To disable RTC register write protection, the value of 83E7 0B13h must be written to KICK0R, followed by the value of 95A4 F1E0h written to KICK1R. RTC register write protection is enabled when any value is written to KICK0R.

## Figure 20-83. KICK0R Register

| 31   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 KICK0_   |
|------|------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-86. KICK0R Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-0  | KICK0_  | W      | 0h      | Kick0 data    |

<!-- image -->

<!-- image -->

## 20.3.5.24 KICK1R Register (offset = 70h) [reset = 0h]

KICK1R is shown in Figure 20-84 and described in Table 20-87.

The kick registers (KICKnR) are used to enable and disable write protection on the RTC registers. Out of reset, the RTC registers are write-protected. To disable write protection, correct keys must be written to the KICKnR registers. The Kick1 register allows writing to unlock the kick1 data and the kicker mechanism to write to other MMRs. To disable RTC register write protection, the value of 83E7 0B13h must be written to KICK0R, followed by the value of 95A4 F1E0h written to KICK1R.

## Figure 20-84. KICK1R Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 KICK1   |
|------|--------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-87. KICK1R Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-0  | KICK1   | W      | 0h      | Kick1 data    |

## 20.3.5.25 RTC\_REVISION Register (offset = 74h) [reset = 4EB00904h]

RTC\_REVISION is shown in Figure 20-85 and described in Table 20-88.

## Figure 20-85. RTC\_REVISION Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| SCHEME         | SCHEME         | RESERVED       | RESERVED       | FUNC           | FUNC           | FUNC           | FUNC           |
| R-1h           | R-1h           | R-0h           | R-0h           | R-EB0h         | R-EB0h         | R-EB0h         | R-EB0h         |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           |
| R-EB0h         | R-EB0h         | R-EB0h         | R-EB0h         | R-EB0h         | R-EB0h         | R-EB0h         | R-EB0h         |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| R_RTL          | R_RTL          | R_RTL          | R_RTL          | X_MAJOR        | X_MAJOR        | X_MAJOR        | X_MAJOR        |
| R-1h R-1h      | R-1h R-1h      | R-1h R-1h      | R-1h R-1h      | R-1h R-1h      | R-1h R-1h      | R-1h R-1h      | R-1h R-1h      |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR |
| R-0h R-4h      | R-0h R-4h      | R-0h R-4h      | R-0h R-4h      | R-0h R-4h      | R-0h R-4h      | R-0h R-4h      | R-0h R-4h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-88. RTC\_REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                            |
|-------|----------|--------|---------|--------------------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | Used to distinguish between old scheme and current     |
| 29-28 | RESERVED | R      | 0h      |                                                        |
| 27-16 | FUNC     | R      | EB0h    | Function indicates a software compatible module family |
| 15-11 | R_RTL    | R      | 1h      | RTL Version (R)                                        |
| 10-8  | X_MAJOR  | R      | 1h      | Major Revision                                         |
| 7-6   | CUSTOM   | R      | 0h      | Indicates a special version for a particular device    |
| 5-0   | Y_MINOR  | R      | 4h      | Minor Revision (Y)                                     |

<!-- image -->

<!-- image -->

## 20.3.5.26 RTC\_SYSCONFIG Register (offset = 78h) [reset = 2h]

RTC\_SYSCONFIG is shown in Figure 20-86 and described in Table 20-89.

## Figure 20-86. RTC\_SYSCONFIG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22       | 22       | 22       | 22       | 22       | 22       |
| 23 21 15 | 20 R-0h  | 19       | 18       | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13       | 13       | 13       | 13       | 13       | 13       |
| 12       | 12       | 12       | 12       | 12       | 12       | 12       | 12       |
| 11       | 10 R-0h  | 9        | 8        | RESERVED | 6        | 5        | 4        |
| 3        | 3        | 3        | 3        | 3        | 3        | 3        | 3        |
| 2        | 2        | 2        | 2        | 2        | 2        | 2        | 2        |
| 7 1      | 0        | RESERVED | IDLEMODE |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-89. RTC\_SYSCONFIG Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 1-0   | IDLEMODE | R/W    | 2h      | Configuration of the local target state management mode, By definition target can handle read/write transaction as long as it is out of IDLE state. 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e., regardless of the IP module's internal requirements; Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state, Backup mode, for debug only. 2h = Smart-idle mode: local target's state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements, IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3h = Smart-idle wakeup-capable mode: local target's idle state eventually follows (acknowledges the system's idle requests, depending on the IP module's internal requirements, IP module may generate (IRQ- or DMA-request-related) wakeup events when in idle state. |

## 20.3.5.27 RTC\_IRQWAKEEN Register (offset = 7Ch) [reset = 0h]

RTC\_IRQWAKEEN is shown in Figure 20-87 and described in Table 20-90.

## Figure 20-87. RTC\_IRQWAKEEN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25            | 24            |
|----------|----------|----------|----------|----------|----------|---------------|---------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h          |
| 23       | 22       | 21       | 20       | 19       | 18       | 17            | 16            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h          |
| 15       | 14       | 13       | 12       | 11       | 10       | 9             | 8             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1             | 0             |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ALARM_WAKE EN | TIMER_WAKE EN |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-90. RTC\_IRQWAKEEN Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                 |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------|
| 31-2  | RESERVED     | R      | 0h      |                                                                             |
| 1     | ALARM_WAKEEN | R/W    | 0h      | Wakeup generation for event Alarm. 0h = Wakeup disabled 1h = Wakeup enabled |
| 0     | TIMER_WAKEEN | R/W    | 0h      | Wakeup generation for event Timer. 0h = Wakeup disabled 1h = Wakeup enabled |

<!-- image -->

<!-- image -->

## 20.3.5.28 ALARM2\_SECONDS\_REG Register (offset = 80h) [reset = 0h]

ALARM2\_SECONDS\_REG is shown in Figure 20-88 and described in Table 20-91.

The ALARM2\_SECONDS\_REG is used to program the second value for the alarm2 time. Seconds are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-88. ALARM2\_SECONDS\_REG Register

| 31       | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7        | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED | ALARM2_SEC1 | ALARM2_SEC1 | ALARM2_SEC1 | ALARM2_SEC0 | ALARM2_SEC0 | ALARM2_SEC0 | ALARM2_SEC0 |
| R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-91. ALARM2\_SECONDS\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                           |
|-------|-------------|--------|---------|---------------------------------------|
| 31-7  | RESERVED    | R      | 0h      |                                       |
| 6-4   | ALARM2_SEC1 | R/W    | 0h      | 2nd digit of seconds, Range is 0 to 5 |
| 3-0   | ALARM2_SEC0 | R/W    | 0h      | 1st digit of seconds, Range is 0 to 9 |

## 20.3.5.29 ALARM2\_MINUTES\_REG Register (offset = 84h) [reset = 0h]

ALARM2\_MINUTES\_REG is shown in Figure 20-89 and described in Table 20-92.

The ALARM2\_MINUTES\_REG is used to program the minute value for the alarm2 time. Minutes are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-89. ALARM2\_MINUTES\_REG Register

| 31       | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|----------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7        | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED | ALARM2_MIN1 | ALARM2_MIN1 | ALARM2_MIN1 | ALARM2_MIN0 | ALARM2_MIN0 | ALARM2_MIN0 | ALARM2_MIN0 |
| R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-92. ALARM2\_MINUTES\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                           |
|-------|-------------|--------|---------|---------------------------------------|
| 31-7  | RESERVED    | R      | 0h      |                                       |
| 6-4   | ALARM2_MIN1 | R/W    | 0h      | 2nd digit of minutes, Range is 0 to 5 |
| 3-0   | ALARM2_MIN0 | R/W    | 0h      | 1st digit of minutes, Range is 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.30 ALARM2\_HOURS\_REG Register (offset = 88h) [reset = 0h]

ALARM2\_HOURS\_REG is shown in Figure 20-90 and described in Table 20-93.

The ALARM2\_HOURS\_REG is used to program the hour value for the alarm2 time. Hours are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-90. ALARM2\_HOURS\_REG Register

| 31             | 30       | 29           | 28       | 27       | 26           | 25           | 24       |
|----------------|----------|--------------|----------|----------|--------------|--------------|----------|
| RESERVED       | RESERVED | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED |
| R-0h           | R-0h     | R-0h         | R-0h     | R-0h     | R-0h         | R-0h         | R-0h     |
| 23             | 22       | 21           | 20       | 19       | 18           | 17           | 16       |
| RESERVED       | RESERVED | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED |
| R-0h           | R-0h     | R-0h         | R-0h     | R-0h     | R-0h         | R-0h         | R-0h     |
| 15             | 14       | 13           | 12       | 11       | 10           | 9            | 8        |
| RESERVED       | RESERVED | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED |
| R-0h           | R-0h     | R-0h         | R-0h     | R-0h     | R-0h         | R-0h         | R-0h     |
| 7              | 6        | 5            | 4        | 3        | 2            | 1            | 0        |
| ALARM2_PM_ nAM | RESERVED | ALARM2_HOUR1 |          |          | ALARM2_HOUR0 | ALARM2_HOUR0 |          |
| R/W-0h         | R-0h     | R/W-0h       |          |          | R/W-0h       | R/W-0h       |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-93. ALARM2\_HOURS\_REG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                           |
|-------|---------------|--------|---------|-------------------------------------------------------|
| 31-8  | RESERVED      | R      | 0h      |                                                       |
| 7     | ALARM2_PM_nAM | R/W    | 0h      | Only used in PM_AM mode (otherwise 0) 0h = AM 1h = PM |
| 6     | RESERVED      | R      | 0h      |                                                       |
| 5-4   | ALARM2_HOUR1  | R/W    | 0h      | 2nd digit of hours, Range is 0 to 2                   |
| 3-0   | ALARM2_HOUR0  | R/W    | 0h      | 1st digit of hours, Range is 0 to 9                   |

## 20.3.5.31 ALARM2\_DAYS\_REG Register (offset = 8Ch) [reset = 1h]

ALARM2\_DAYS\_REG is shown in Figure 20-91 and described in Table 20-94.

The ALARM2\_DAYS\_REG is used to program the day of the month value for the alarm2 date. Days are stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-91. ALARM2\_DAYS\_REG Register

| 31       | 30       | 29          | 28          | 27          | 26          | 25          | 24          |
|----------|----------|-------------|-------------|-------------|-------------|-------------|-------------|
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 23       | 22       | 21          | 20          | 19          | 18          | 17          | 16          |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15       | 14       | 13          | 12          | 11          | 10          | 9           | 8           |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7        | 6        | 5           | 4           | 3           | 2           | 1           | 0           |
| RESERVED | RESERVED | ALARM2_DAY1 | ALARM2_DAY1 | ALARM2_DAY1 | ALARM2_DAY0 | ALARM2_DAY0 | ALARM2_DAY0 |
| R-0h     | R-0h     | R/W-0h      | R/W-0h      | R/W-0h      | R/W-1h      | R/W-1h      | R/W-1h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-94. ALARM2\_DAYS\_REG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                           |
|-------|-------------|--------|---------|---------------------------------------|
| 31-6  | RESERVED    | R      | 0h      |                                       |
| 5-4   | ALARM2_DAY1 | R/W    | 0h      | 2nd digit for days, Range from 0 to 3 |
| 3-0   | ALARM2_DAY0 | R/W    | 1h      | 1st digit for days, Range from 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.32 ALARM2\_MONTHS\_REG Register (offset = 90h) [reset = 1h]

ALARM2\_MONTHS\_REG is shown in Figure 20-92 and described in Table 20-95.

The ALARM2\_MONTHS\_REG is used to program the month in the year value for the alarm2 date. The month is stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-92. ALARM2\_MONTHS\_REG Register

| 31       | 30       | 29       | 28             | 27       | 26            | 25            | 24            |
|----------|----------|----------|----------------|----------|---------------|---------------|---------------|
| RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED      | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h           | R-0h     | R-0h          | R-0h          | R-0h          |
| 23       | 22       | 21       | 20             | 19       | 18            | 17            | 16            |
| RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED      | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h           | R-0h     | R-0h          | R-0h          | R-0h          |
| 15       | 14       | 13       | 12             | 11       | 10            | 9             | 8             |
| RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED      | RESERVED      | RESERVED      |
| R-0h     | R-0h     | R-0h     | R-0h           | R-0h     | R-0h          | R-0h          | R-0h          |
| 7        | 6        | 5        | 4              | 3        | 2             | 1             | 0             |
| RESERVED | RESERVED | RESERVED | ALARM2_MON TH1 |          | ALARM2_MONTH0 | ALARM2_MONTH0 | ALARM2_MONTH0 |
| R-0h     | R-0h     | R-0h     | R/W-0h         |          | R/W-1h        | R/W-1h        | R/W-1h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-95. ALARM2\_MONTHS\_REG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                            |
|-------|---------------|--------|---------|----------------------------------------|
| 31-5  | RESERVED      | R      | 0h      |                                        |
| 4     | ALARM2_MONTH1 | R/W    | 0h      | 2nd digit of months, Range from 0 to 1 |
| 3-0   | ALARM2_MONTH0 | R/W    | 1h      | 1st digit of months, Range from 0 to 9 |

## 20.3.5.33 ALARM2\_YEARS\_REG Register (offset = 94h) [reset = 0h]

ALARM2\_YEARS\_REG is shown in Figure 20-93 and described in Table 20-96.

The ALARM2\_YEARS\_REG is used to program the year for the alarm2 date. Only the last two digits are used to represent the year and stored as BCD format. In BCD format, the decimal numbers 0 through 9 are encoded with their binary equivalent.

## Figure 20-93. ALARM2\_YEARS\_REG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22           | 21           | 20           | 19           | 18           |              | 17           | 16           |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6            | 5            | 4            | 3            |              | 2            | 1            | 0            |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | ALARM2_YEAR1 | ALARM2_YEAR1 | ALARM2_YEAR1 | ALARM2_YEAR1 | ALARM2_YEAR0 | ALARM2_YEAR0 | ALARM2_YEAR0 | ALARM2_YEAR0 |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-96. ALARM2\_YEARS\_REG Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                           |
|-------|--------------|--------|---------|---------------------------------------|
| 31-8  | RESERVED     | R      | 0h      |                                       |
| 7-4   | ALARM2_YEAR1 | R/W    | 0h      | 2nd digit of years, Range from 0 to 9 |
| 3-0   | ALARM2_YEAR0 | R/W    | 0h      | 1st digit of years, Range from 0 to 9 |

<!-- image -->

<!-- image -->

## 20.3.5.34 RTC\_PMIC Register (offset = 98h) [reset = 0h]

RTC\_PMIC is shown in Figure 20-94 and described in Table 20-97.

## Figure 20-94. RTC\_PMIC Register

| 31                | 30                | 29                | 28       | 27               | 26               | 25               | 24               |
|-------------------|-------------------|-------------------|----------|------------------|------------------|------------------|------------------|
| RESERVED          | RESERVED          | RESERVED          | RESERVED | RESERVED         | RESERVED         | RESERVED         | RESERVED         |
| R-0h              | R-0h              | R-0h              | R-0h     | R-0h             | R-0h             | R-0h             | R-0h             |
| 23                | 22                | 21                | 20       | 19               | 18               | 17               | 16               |
|                   |                   | RESERVED          |          |                  | PWR_ENABLE_SM    | PWR_ENABLE_SM    | PWR_ENABLE _EN   |
|                   |                   | R-0h              |          |                  | R-0h             | R-0h             | R/W-0h           |
| 15                | 14                | 13                | 12       | 11               | 10               | 9                | 8                |
| EXT_WAKEUP_STATUS | EXT_WAKEUP_STATUS | EXT_WAKEUP_STATUS |          | EXT_WAKEUP_DB_EN | EXT_WAKEUP_DB_EN | EXT_WAKEUP_DB_EN | EXT_WAKEUP_DB_EN |
| R/W-0h            | R/W-0h            | R/W-0h            |          | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |
| 7                 | 6                 | 5                 | 4        | 3                | 2                | 1                | 0                |
| EXT_WAKEUP_POL    | EXT_WAKEUP_POL    | EXT_WAKEUP_POL    |          | EXT_WAKEUP_EN    | EXT_WAKEUP_EN    | EXT_WAKEUP_EN    | EXT_WAKEUP_EN    |
| R/W-0h            | R/W-0h            | R/W-0h            |          | R/W-0h           | R/W-0h           | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 20-97. RTC\_PMIC Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                         |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED          | R      | 0h      |                                                                                                                                                                                                                                                                                                                                     |
| 18-17 | PWR_ENABLE_SM     | R      | 0h      | Power state machine state. 00b = Idle/Default. 01b = Shutdown (ALARM2 and PWR_ENABLE_EN is set to 1). Note: 31 us latency from ALARM2 event). 10b = Time-based wakeup (ALARM status is set). 11b = External-event-based wakeup (one or more bit set in EXT_WAKEUP_STATUS).                                                          |
| 16    | PWR_ENABLE_EN     | R/W    | 0h      | Enable for PMIC_POWER_EN signal. 0b = Disable. When Disabled, pmic_power_en signal will always be driven as 1, ON state. 1b = Enable. When Enabled: pmic_power_en signal will be controlled by ext_wakeup, alarm, and alarm2 ON -> OFF (Turn OFF) only by ALARM2 event OFF -> ON (TURN ON) only by ALARM event OR ext_wakeup event. |
| 15-12 | EXT_WAKEUP_STATUS | R/W    | 0h      | External wakeup status. Write 1 to clear EXT_WAKEUP_STATUS[n] status of ext_wakeup[n]. 0b = External wakeup event has not occurred. 1b = External wakeup event has occurred.                                                                                                                                                        |
| 11-8  | EXT_WAKEUP_DB_EN  | R/W    | 0h      | External wakeup debounce enabled. EXT_WAKEUP_DB_EN[n] controls ext_wakeup[n]. 0b = Disable. 1b = Enable. When enabled, RTC_DEBOUNCE_REG defines the debounce time.                                                                                                                                                                  |
| 7-4   | EXT_WAKEUP_POL    | R/W    | 0h      | External wakeup inputs polarity. EXT_WAKEUP_POL[n] controls ext_wakeup[n]. 0b = Active high. 1b = Active low.                                                                                                                                                                                                                       |
| 3-0   | EXT_WAKEUP_EN     | R/W    | 0h      | Enable external wakeup inputs. EXT_WAKEUP_EN[n] controls ext_wakeup[n]. 0b = External wakeup disabled. 1b = External wakeup enabled.                                                                                                                                                                                                |

## 20.3.5.35 RTC\_DEBOUNCE Register (offset = 9Ch) [reset = 0h]

RTC\_DEBOUNCE is shown in Figure 20-95 and described in Table 20-98.

The debounce timer uses the 32768-Hz clock. It allows choosing the timing or the accuracy of debouncing . A register receives a bit from the reference pin. You will choose the timing if you use the debouncing like a timer, or you will choose the accuracy if you use the debouncing like a real debouncing. The debouncing will be finished when the reference pin will stay the same value (defined in DEBOUNCE\_REG) for a defined time.

## Figure 20-95. RTC\_DEBOUNCE Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22           | 21           | 20           | 19           | 18           | 17           | 16           |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED     |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         | R-0h         |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
| RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | RESERVED    | DEBOUNCE_REG | DEBOUNCE_REG | DEBOUNCE_REG | DEBOUNCE_REG | DEBOUNCE_REG | DEBOUNCE_REG | DEBOUNCE_REG |
| R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h | R-0h R/W-0h  | R-0h R/W-0h  | R-0h R/W-0h  | R-0h R/W-0h  | R-0h R/W-0h  | R-0h R/W-0h  | R-0h R/W-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 20-98. RTC\_DEBOUNCE Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                         |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED     | R      | 0h      |                                                                                                                     |
| 7-0   | DEBOUNCE_REG | R/W    | 0h      | Debounce time. A value, n, other than 0 results in a debounce time of 30.52 s*(n+1). 0h = Debounce time is 30.52 s. |

<!-- image -->