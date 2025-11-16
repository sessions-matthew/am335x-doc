## 3.1.6 Power Management

## 3.1.6.1 Power Domains

The MPU subsystem is divided into four power domains controlled by the PRCM, as shown in Figure 3-5.

NOTE:

The emulation domain and the core domain are not fully embedded in MPU subsystem.

Figure 3-5. MPU Subsystem Power Domain Overview

<!-- image -->

Power management requirements at the device level govern power domains for the MPU subsystem. The device-level power domains are directly aligned with voltage domains and thus can be represented as a cross reference to the different voltage domains.

Table 3-4 shows the different power domains of the MPU subsystem and the modules inside.

Table 3-4. Overview of the MPU Subsystem Power Domain

| Functional Power Domain   | Physical Power Domain per System/Module                                                               |
|---------------------------|-------------------------------------------------------------------------------------------------------|
| MPU subsystem domain      | ARM, AXI2OCP, I2Asynch Bridge, ARM L1 and L2 periphery logic and array, ICE-Crusher, ETM, APB modules |
| MPU NEON domain           | ARM NEON accelerator                                                                                  |
| CORE domain               | MPU interrupt controller                                                                              |
| EMU domain                | EMU (ETB,DAP)                                                                                         |

<!-- image -->

<!-- image -->

www.ti.com

NOTE:

L1 and L2 array memories have separate control signals into the in MPU Subsystem, thus directly controlled by PRCM For details on the physical power domains and the voltage domains, see Chapter 8, Power, Reset, and Clock Management (PRCM) .

## 3.1.6.2 Power States

Each power domain can be driven by the PRCM in 3 different states, depending on the functional mode required by the user.

For each power domain the PRCM manages all transitions by controlling domain clocks, domain resets, domain logic power switches and memory power switches.

Table 3-5. MPU Power States

| Power State   | Logic Power   | Memory Power   | Clocks                  |
|---------------|---------------|----------------|-------------------------|
| Active        | On            | On or Off      | On (at least one clock) |
| Inactive      | On            | On or Off      | Off                     |
| Off           | Off           | Off            | Off (all clocks)        |

## 3.1.6.3 Power Modes

The major part of the MPU subsystem belongs to the MPU power domain. The modules inside this power domain can be off at a time when the ARM processor is in an OFF or standby mode. IDLE/WAKEUP control is managed by the clock generator block but initiated by the PRCM module.

The MPU Standby status can be checked with CM\_MPU\_MPU\_CLKCTRL.STBYST. For the MPU to be on, the core (referred here as the device core) power must be on. Device power management does not allow INTC to go to OFF state when MPU domain is on (active or one of retention modes).

The NEON core has independent power off mode when not in use. Enabling and disabling of NEON can be controlled by software.

## CAUTION

The MPU L1 cache memory does not support retention mode, and its array switch is controlled together with the MPU logic. For compliance, the L1 retention control signals exist at the PRCM boundary, but are not used. The ARM L2 can be put into retention independently of the other domains.

Table 3-6 outlines the supported operational power modes. All other combinations are illegal. The ARM L2, NEON, and ETM/Debug can be powered up/down independently. The APB/ATB ETM/Debug column refers to all three features: ARM emulation, trace, and debug.

The MPU subsystem must be in a power mode where the MPU power domain, NEON power domain, debug power domain, and INTC power domain are in standby, or off state.