## 8.1.11 Device Modules and Power Management Attributes List

Table 8-29. Power Domain of Various Modules

| Power Supply   | Power Domain                                          | Modules OR Supply Destinations (sinks)                              |
|----------------|-------------------------------------------------------|---------------------------------------------------------------------|
| VDD_CORE       | PD_WKUP This is non-switchable and cannot be shut OFF | Wake-Cortex M3 Subsystem                                            |
|                |                                                       | L4_WKUP peripherals                                                 |
|                |                                                       | PRCM                                                                |
|                |                                                       | Control Module                                                      |
|                |                                                       | GPIO0                                                               |
|                |                                                       | DMTIMER0_dmc                                                        |
|                |                                                       | DMTIMER1                                                            |
|                |                                                       | UART0                                                               |
|                |                                                       | I2C0                                                                |
|                |                                                       | TSC                                                                 |
|                |                                                       | WDT0                                                                |
|                |                                                       | WDT1                                                                |
|                |                                                       | SmartReflex_c2_0                                                    |
|                |                                                       | SmartReflex_c2_1                                                    |
|                |                                                       | L4_WKUP                                                             |
|                |                                                       | Top level: Pinmux gates/logic, oscillator wake logic                |
|                |                                                       | DDR PHY (DIDs)                                                      |
|                |                                                       | WKUP_DFTSS                                                          |
|                |                                                       | Debugs                                                              |
|                |                                                       | Digital section (VDD) of CORE PLL, PER PLL, Display PLL and DDR PLL |
|                |                                                       | Emulation sections of MPU                                           |
|                |                                                       | VDD of all IOs including crystal oscillators                        |
|                |                                                       | RC Oscillator                                                       |

<!-- image -->

<!-- image -->

www.ti.com

## Table 8-29. Power Domain of Various Modules (continued)

| Power Supply   | Power Domain   | Modules OR Supply Destinations (sinks)                                 |
|----------------|----------------|------------------------------------------------------------------------|
|                |                | Infrastructure                                                         |
|                |                | L3                                                                     |
|                |                | L4_PER, L4_Fast                                                        |
|                |                | EMIF4                                                                  |
|                |                | EDMA                                                                   |
|                |                | GPMC                                                                   |
|                |                | OCMC controller                                                        |
|                |                | L3 / L4_PER / L4_Fast Peripherals                                      |
|                |                | PRU-ICSS                                                               |
|                |                | LCD controller                                                         |
|                |                | Ethernet Switch                                                        |
|                |                | USB Controller                                                         |
| VDD_CORE       | PD_PER         | GPMC                                                                   |
| VDD_CORE       |                | MMC0-2                                                                 |
| VDD_CORE       |                | DMTIMER2-7                                                             |
| VDD_CORE       |                | UART1-5                                                                |
| VDD_CORE       |                | SPI0, 1                                                                |
| VDD_CORE       |                | I2C1, 2                                                                |
| VDD_CORE       |                | DCAN0, 1                                                               |
| VDD_CORE       |                | McASP0, 1                                                              |
| VDD_CORE       |                | ePWM0-2                                                                |
| VDD_CORE       |                | eCAP0-2                                                                |
| VDD_CORE       |                | eQEP0,1                                                                |
| VDD_CORE       |                | GPIO1-3                                                                |
| VDD_CORE       |                | ELM                                                                    |
| VDD_CORE       |                | AES0, 1, SHA, PKA, RNG                                                 |
| VDD_CORE       |                | Mailbox0, Spinlock                                                     |
| VDD_CORE       |                | OCP_WP                                                                 |
| VDD_CORE       |                | Others                                                                 |
| VDD_CORE       |                | USB2PHYCORE (VDD/digital section)                                      |
| VDD_CORE       | PD_GFX         | SGX530                                                                 |
|                | PD_MPU         | CPU, L1, L2 of MPU                                                     |
| VDD_MPU        | PD_WKUP        | Interrupt controller of MPU Subsystem Digital Portion (VDD) of MPU PLL |
| VDD_RTC        |                | 1. RTC                                                                 |
|                | PD_RTC         | VDD for 32 768 Hz Crystal Osc                                          |
|                |                | VDD for IO for the alarm pin                                           |

## 8.1.11.1 Power Domain Power Down Sequence

The following sequence of steps happen during the power down of a power domain

All IPs (belonging to a power domain) with STANDBY interface will assert STANDBY. STANDBY assertion should get triggered by IP based on its activity on OCP initiator port. IP should assert STANDBY whenever initiator port is IDLE. Some of the IPs may not have this feature and they will require SW write to standby-mode register to get STANDBY assertion from IP.

1. SW will request all modules in given power domain to go to disable state by programming module control register inside PRCM.
2. PRCM will start and wait for completion of power management handshake with IPs (IdleReq/IdleAck).
3. PRCM will gate-off all the clocks to the power domain.
4. SW will request all clock domains in given power domain to go to 'force sleep' mode by programming functional clock domain register in PRCM. Note that PRCM has already gated-off clocks and this register programming may look redundant.
5. SW will request PRCM to take this power domain to OFF state by programming PWRSTCTRL register. Note that this step can be skipped if PWRSTCTRL is permanently programmed to OFF state. When this is done, functional clock domain register decides when power domain will be taken to OFF state. Only reason not to have OFF state in PWRSTCTRL is to take power domain to just clock gate state without power gating.
6. PSCON specific to this power domain will assert isolation enable for the domain.
7. PRCM will assert warm and cold reset to the power domain.
8. PSCON will assert control signals to switch-off power using on-die switches.
9. On-die switches will send acknowledge back to PSCON.

## 8.1.11.2 Power Domain Power-Up Sequence

The following sequence of steps occurs during power-up of a power domain. This sequence is not relevant to always-on domain as this domain will never go to OFF state as long as the device is powered. This sequence will be repeated each time a domain is taken to ON state from OFF (including first time power-up). Note that some of the details are intentionally taken out here to simplify things.

There can be multiple reasons to start power-up sequence for a domain. For example it can be due to an interrupt from one of the IPs which is powered-up.

1. SW will request required clock domains inside this power domain to go to force wake-up state by programming functional clock domain register.
2. PRCM will enable clocks to the required clock domains.
3. PSCON specific to this power domain will assert control signal to un-gate the power.
4. Once power is un-gated, on die switches will send acknowledge back to PSCON.
5. PRCM will de-assert cold and warm reset to the power domain.
6. PRCM will turn-off isolation cells.
7. SW will request PRCM to enable required module in the power domain by programming module control register.
8. PRCM will initiate and wait for completion of PM protocol to enable the modules (IdleReq/IdleAck).

<!-- image -->