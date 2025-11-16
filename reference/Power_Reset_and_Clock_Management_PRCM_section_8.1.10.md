<!-- image -->

www.ti.com

## 8.1.9 IO State

All IOs except for JTAG i/f and Reset output (and any special cases mentioned in pinlist) should have their output drivers tri-state and internal pulls enabled during assertion of all reset sources. JTAG i/f IO is affected only by TRSTz.

Note : The PRUs and Cortex M3 processor are held under reset after global warm reset by assertion of software source of reset. Other domains are held under reset after global warm reset until the MPU software enables their respective interface clock.

## 8.1.10 Voltage and Power Domains

The following table shows how the device core logic is partitioned into two core logic voltage domains and four power domains. The table lists which voltage and power domain a functional module belongs.

Table 8-27. Core Logic Voltage and Power Domains

| Logic Voltage Domain Name   | Module           |
|-----------------------------|------------------|
| CORE                        | All Core Modules |
| RTC                         | RTC              |

## 8.1.10.1 Voltage Domains

The core logic is divided into two voltage domains: VDD\_CORE and VDD\_RTC.

## 8.1.10.2 Power Domains

In order to reduce power due to leakage, the core logic supply voltage to 4 of these power domains can be turned OFF with internal power switches. The internal power switches are controlled through memory mapped registers in Control Module.

In a use case whereby all the modules within a power domain are not used that power domain can be placed in the OFF state.

Error: Reference source not found shows the allowable combination power domain ON/OFF states and which power domains are switched via internal power switches. At power-on-reset, all domains except always-on will be in the power domain OFF state.

Table 8-28. Power Domain State Table

|                            | POWER DOMAIN   | POWER DOMAIN   | POWER DOMAIN   | POWER DOMAIN   | POWER DOMAIN   | POWER DOMAIN   |
|----------------------------|----------------|----------------|----------------|----------------|----------------|----------------|
| MODE                       | WAKEUP         | MPU            | GFX            | PER            | RTC            | EFUSE          |
| No Voltage Supply          | N/A            | N/A            | N/A            | N/A            | N/A            | N/A            |
| Power On Reset             | ON             | OFF            | OFF            | OFF            | OFF            | OFF            |
| ALL OTHER FUNCTIONAL MODES | ON             | DON'T CARE     | DON'T CARE     | DON'T CARE     | DON'T CARE     | DON'T CARE     |
| Internal Power Switch      | NO             | YES            | YES            | YES            | YES            | YES            |