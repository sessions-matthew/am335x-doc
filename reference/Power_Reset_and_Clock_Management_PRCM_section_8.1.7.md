<!-- image -->

www.ti.com

Figure 8-22. RTC, VTP, and Debounce Clock Selection

<!-- image -->

All mux selections are in PRCM unless explicitly shown otherwise in the diagrams.

## 8.1.7 Reset Management

## 8.1.7.1 Overview

The PRCM manages the resets to all power domains inside device and generation of a single reset output signal through device pin, WARMRSTn, for external use. The PRCM has no knowledge of or control over resets generated locally within a module, e.g., via the OCP configuration register bit IPName\_SYSCONFIG.SoftReset.

All PRM reset outputs are asynchronously asserted. These outputs are active-low except for the PLL resets. Deassertion is synchronous to the clock which runs a counter used to stall, or delay, reset deassertion upon source deactivation. This clock will be CLK\_M\_OSC used by all the reset managers. All modules receiving a PRCM generated reset are expected to treat the reset as asynchronous and implement local re-synchronization upon de-activation as needed.

One or more Reset Managers are required per power domain. Independent management of multiple reset domains is required to meet the reset sequencing requirements of all modules in the power domain

## 8.1.7.2 Reset Concepts and Definitions

The PRCM collects many sources of reset. Here below is a list of qualifiers of the source of reset:

- Cold reset: it affects all the logic in a given entity
- Warm reset: it is a partial reset which doesn't affect all the logic in a given entity
- Global reset: it affects the entire device
- Local reset: it affects part of the device (1 power domain for example)
- S/W reset: it is initiated by software
- H/W reset: it is hardware driven

Each reset source is specified as being a cold or warm type. Cold types are synonymous with power-onreset (POR) types. Such sources are applied globally within each receiving entity (i.e., sub-system, module, macro-cell) upon assertion. Cold reset events include: device power-up, power-domain power-up, and eFuse programming failures.

<!-- image -->

Warm reset types are not necessarily applied globally within each receiving entity. A module may use a warm reset to reset a subset of its logic. This is often done to speed-up reset recovery time, i.e., the time to transition to a safe operating state, compared to the time required upon receipt of a cold reset. Warm reset events include: software initiated per power-domain, watch-dog time-out, security violation, externally triggered, and emulation initiated.

Reset sources, warm or cold types, intended for device-wide effect are classified as global sources. Reset sources intended for regional effect are classified as local sources.

Each Reset Manager provides two reset outputs. One is a cold reset generated from the group of global and local cold reset sources it receives. The other is a warm+cold reset generated from the combined groups of, global and local, cold and warm reset sources it receives.

The Reset Manager asserts one, or both, of its reset outputs asynchronously upon reset source assertion. Reset deassertion is extended beyond the time the source gets de-asserted. The reset manager will then extend the active period of the reset outputs beyond the release of the reset source, according to the PRCM's internal constraints and device's constraints. Some reset durations can be software-configured. Most (but not all) reset sources are logged by PRCM's reset status registers. The same reset output can generally be activated by several reset sources and the same reset source can generally activate several reset outputs. All the reset signals output of the PRCM are active low. Several conventions are used in this document for signal and port names. They include:

- "\_RST" in a signal or port name is used to denote reset signal.
- "\_PWRON\_RST" in a signal or port name is used to denote a cold reset source

## 8.1.7.3 Global Power On Reset (Cold Reset)

There are several cold reset sources. See Table 8-25 for a summary of the different reset sources.

## 8.1.7.3.1 Power On Reset (PORz)

The source of power on reset is PORz signal on the device. Everything on device is reset with assertion of power on reset. This reset is non-blockable. PORz can be driven by external power management devices or power supervisor circuitry. During power-up, when power supplies to the device are ramping up, PORz needs to be driven Low. When the ramp-up is complete and supplies reach their steady-state values, PORz need to be driven High. During normal operation when any of the device power supplies are turned OFF, PORz must be driven Low.

## 8.1.7.3.2 PORz Sequence

- PORz pin at chip boundary gets asserted (goes low). Note : The state of nRESETIN\_OUT during PORz assertion should be a don't care, it should not affect PORz (only implication is if they are both asserted and nRESETIN\_OUT is deasserted after PORz you will get re-latching of boot config pins and may see warm nRESETIN\_OUT flag set in PRCM versus POR).
- All IOs will go to a known state, as defined in the device datasheet, AM335x Sitara Processors (literature number SPRS717)
- When power comes-up, PORz value will propagate to the PRCM.
- PRCM will fan out reset to the complete chip and all logic which uses async reset will get reset. nRESETIN\_OUT will go low to indicate reset-in-progress.
- External clocks will start toggling and PRCM will propagate these clocks to the chip keeping PLLs in bypass mode.
- All logic using sync reset will get reset.
- When power and clocks to the chip are stable, PORz must be de-asserted.
- Boot configuration pins are latched upon de-assertion of PORz pin
- IO cell controls from IPs for all the IOs with a few exceptions (see datasheet for details) are driven by GPIO module. GPIO puts all IOs in input mode.
- FuseFarm reset will be de-asserted to start eFuse scanning.
- Once eFuse scanning is complete, reset to the host processor and to all other peripherals (peripherals without local processor) will be de-asserted.

<!-- image -->

## www.ti.com

- nRESETIN\_OUT will be de-asserted after time defined by PRM\_RSTTIME.RSTTIME1.
- Once host processors finish booting then all remaining peripherals will see reset de-assertion.

Note that all modules with local CPUs will have local reset asserted by default at PORz and reset deassertion would require host processor to write to respective registers in PRCM.

## Figure 8-23. PORz

<!-- image -->

- (1) nRESETIN\_OUT is not defined (can either be driven low or pulled up high) until all supplies are fully ramped up. For nRESETIN\_OUT to maintain a valid low state until the supples are ramped, an external buffer should be implemented, as shown in Figure 8-24.
- (2) For information on t sx , see AM335x Sitara Processors (literature number SPRS717).

Figure 8-24. External Buffer for nRESETIN\_OUT

<!-- image -->

## 8.1.7.3.3 Bad Device Reset

This reset is asserted whenever the DEVICE\_TYPE encodes an unsupported device type, such as the code for a "bad" device.

## 8.1.7.3.4 ICEPICK Power On Reset

The internal emulation module, ICE-Pick, generates ICEPICK\_POR\_RST. This reset is used in emulation mode only. The PRCM is required to provide an output port, ACT\_LIKE\_SECURE, which is asynchronously set to logic high upon ICEPICK\_POR\_RST assertion. This state must be maintained until a normal system POR occurs.

## 8.1.7.3.5 Global Cold Software Reset (GLOBAL\_COLD\_SW\_RST)

The source for GLOBAL\_COLD\_SW\_RST is generated internally by the PRM. It is activated upon setting the PRM\_RSTCTRL.RST\_GLOBAL\_COLD\_SW bit in the PRM memory map. This bit is self-clearing, i.e., it is automatically cleared by the hardware.

## 8.1.7.4 Global Warm Reset

## 8.1.7.4.1 External Warm Reset

nRESETIN\_OUT is a bidirectional warm reset signal. As an input, it is typically used by an external source as a device reset. Refer to Table 8-24 for a summary of the differences between a warm reset and cold reset. Some of these differences are:

- The warm reset can be blocked to the EMAC switch and its reference clock source PLL using the RESET\_ISO register in the Control Module.
- The warm reset assumes that clocks and power to the chip are stable from assertion through deassertion, whereas during the cold reset, the power supplies can become stable during assertion
- Some PRCM and Control module registers are warm reset insensitive and maintain their value throughout a warm reset
- SYSBOOT pins are not latched with a warm reset. The device will boot with the SYSBOOT values from the previous cold reset.
- Most debug subsystem logic is not affected by warm reset. This allows you to maintain any debug sessions throughout a warm reset event.
- PLLs are not affected by warm reset

As an output, nRESETIN\_OUT can be used to reset external devices. nRESET\_OUT will drive low during a cold reset or an internally generated warm reset. After completion of a cold or warm reset, nRESETIN\_OUT will continue to drive low for a period defined by PRM\_RSTTIME.RSTTIME1. RSTTIME1 is a timer that counts down to zero at a rate equal to the high frequency system input clock CLK\_M\_OSC. This allows external devices to be held in reset for some time after the AM335x comes out of reset.

Caution must be used when implementing the nRESETIN\_OUT as an bi-directional reset signal. Because of the short maximum time allowed using RSTTIME1, it does not supply an adequate debounce time for an external push button circuit. The processor could potentially start running while external components are still in reset. It is recommended that this signal be used as input only (do not connect to other devices as a reset) to implement a push button reset circuit to the AM335x, or an output only to be able to reset other devices after an AM335x reset completes.

## 8.1.7.4.1.1 Warm Reset Input/Reset Output (nRESETIN\_OUT)

Any global reset source (internal or external) causes nRESETIN\_OUT to be driven and maintained at the boundary of the device for at least the amount of time configured in the PRCM.PRM\_RSTTIME. RSTTIME1 bit field. This ensures that the device and its related peripherals are reset together. The nRESETIN\_OUT output buffer is configured as an open-drain; consequently, an external pull-up resistor is required.

After the de-assertion, the bi-directional pin nRESETIN\_OUT is tri-stated to allow for assertion from off chip source (externally).

<!-- image -->

<!-- image -->

www.ti.com

Figure 8-25. External System Reset

<!-- image -->

Note: It is recommended to implement warm reset as an input only (for example, push button) or an output only (to reset external peripherals), not both.

The device will have one pin nRESETIN\_OUT which reflects chip reset status. This output will always assert asynchronously when any chip watchdog timer reset occurs if any of the following reset events occurs:

- POR (only internal stretched portion of reset event after bootstrap is latched)
- External Warm reset (nRESETIN\_OUT pin, only internal stretched portion of reset event after bootstrap is latched)
- Emulation reset (Cold or warm from ICEPICK)
- Reset requestor
- SW cold/warm reset

This output will remain asserted as long as PRCM keeps reset to the host processor asserted.

Note: TRST does not cause RSTOUTn assertion

## 8.1.7.4.1.2 Warm Reset Sequence

1. nRESETIN\_OUT pin at chip boundary gets asserted (goes low). NOTE: For Warm Reset sequence to work as described, it is expected that PORz pin is always inactive, otherwise you will get PORz functionality as described in previous section.
2. All IOs (except test and emulation) will go to tri-state immediately.
3. Chip clocks are not affected as both PLL and dividers are intact.
4. nRESETIN\_OUT gets de-asserted after 30 cycles
5. PRCM de-asserts reset to the host processor and all other peripherals without local CPUs.
6. Note that all IPs with local CPUs will have local reset asserted by default at Warm Reset and reset deassertion would require host processor to write to respective registers in PRCM.

Figure 8-26 shows the nRESETIN\_OUT waveform when using nRESETIN\_OUT as warm reset source. For the duration when external warm reset switch is closed, both the device and chip will be driving zero.

Figure 8-26. Warm Reset Sequence (External Warm Reset Source)

<!-- image -->

Figure 8-27 shows the nRESETIN\_OUT waveform when any one of the warm reset sources captured except using nRESETIN\_OUT itself as warm reset source.

<!-- image -->

Figure 8-27. Warm Reset Sequence (Internal Warm Reset Source)

<!-- image -->

## 8.1.7.4.2 Watchdog Timer

There is one watchdog timer on the device. There is a chip level register in control module register space which contains a sticky bit (cleared only by PORz) for each reset. The reset is not blockable. For more information, see section 20.4 Watchdog.

<!-- image -->

www.ti.com

## 8.1.7.4.3 Global Warm Software Reset (GLOBAL\_SW\_WARM\_RST)

GLOBAL\_WARM\_SW\_RST is internally generated by the PRCM. Activation is triggered upon setting the memory-mapped register bit, PRM\_RSTCTRL. RST\_GLOBAL\_WARM\_SW. This bit is self-clearing, and automatically cleared by the hardware.

## 8.1.7.4.4 Test Reset (TRSTz)

This reset is triggered from TRSTz pin on JTAG interface. This is a non-blockable reset and it resets test and emulation logic.

NOTE: A PORz reset assertion should cause entire device to reset including all test and emulation logic regardless of the state of TRSTz Therefore, PORz assertion will achieve full reset of the device even if TRSTz pin is pulled permanently high and no special toggling of TRSTz pin is required during power ramp to achieve full POR reset to the device. Further, it is acceptable for TRSTz input to be pulled permanently low during normal functional usage of the device in the end-system to ensure that all test and emulation logic is kept in reset.

## 8.1.7.5 Reset Characteristics

The following table shows characteristic of each reset source.

<!-- image -->

<!-- image -->

## Table 8-25. Reset Sources

|                                           | Cold Reset Sources   | Cold Reset Sources   | Cold Reset Sources   | Warm Reset sources   | Warm Reset sources   | Warm Reset sources   | Warm Reset sources   |
|-------------------------------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| Characteristic                            | Pin PORz             | SW Cold Reset        | Bad Device           | Pin Warm Reset       | Watchdog Timer       | SW Warm Reset        | TRSTz                |
| Boot pins latched                         | Y                    | N                    | N                    | N                    | N                    | N                    | N                    |
| Resets Standard Efuses                    | Y                    | N                    | N                    | N                    | N                    | N                    | N                    |
| Resets Customer Efuses                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| DRAM contents preserved                   | N                    | N                    | N                    | Y (1)                | Y (1)                | Y (1)                | Y                    |
| Resets PLLs (2)                           | Y                    | Y                    | Y                    | N                    | N                    | N                    | N                    |
| Resets Clock Dividers (2)                 | Y                    | Y                    | Y                    | N                    | N                    | N                    | N                    |
| PLLs enter bypass mode (2)                | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| Reset source blockable by emulation       | N                    | N                    | N                    | Y                    | Y                    | Y                    | Y                    |
| Resets test and emulation logic           | Y                    | Y                    | Y                    | N                    | N                    | N                    | N                    |
| Resets GMAC switch and related chip logic | Y                    | N (3)                | Y                    | N (3)                | N (3)                | N (3)                |                      |
| Resets Chip Functional Logic (4)          | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| Puts IOs in Tri-state                     | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| Resets Pinmux Registers                   | Y                    | Y                    | Y (5)                | Y (5)                | Y (5)                | Y (5)                | N                    |
| Reset out Assertion (nRESETIN_OUT Pin)    | Y                    | Y                    | Y (5)                | Y (5)                | Y (5)                | Y (5)                | N                    |
| Resets RTC                                | N                    | N                    | N                    | N                    | N                    | N                    | N                    |

(1) The ROM software does not utilize this feature of DRAM content preservation. Hence, the AM335x re-boots like a cold boot for warm reset as well.

(2) CORE PLL is an exception when EMAC switch reset isolation is enabled

(3) Only true if GMAC switch reset isolation is enabled in control registers, otherwise will be reset.

(4) There are exception details in control module &amp; PRCM registers which are captured in the register specifications in Chapter 8 and Chapter 9. This includes some pinmux registers which are warm reset in-sensitive.

(5) Some special IOs/Muxing registers like test, emulation, GEMAC Switch (When under reset isolation mode), etc related will not be affected under warm reset conditions.

Note: The Bandgap macros for the LDOs will be reset on PORz only.

## Table 8-26. Reset Sources

|                                           | Cold Reset Sources   | Cold Reset Sources   | Cold Reset Sources   | Cold Reset Sources   | Warm Reset sources   | Warm Reset sources   | Warm Reset sources   | Warm Reset sources   | Warm Reset sources   | Warm Reset sources   |
|-------------------------------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|
| Characteristic                            | Pin PORz             | SW Cold Reset        | EMU Cold Reset       | Bad Device           | Pin Warm Reset       | EMU Warm Reset       | Watchdog Timer       | SW Warm Reset        | Security Violation   | TRSTz                |
| Boot pins latched                         | Y                    | N                    | N                    | N                    | N                    | N                    | N                    | N                    | N                    | N                    |
| Resets Standard Efuses                    | Y                    | N                    | N                    | N                    | N                    | N                    | N                    | N                    | N                    | N                    |
| Resets Customer Efuses                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| DRAM contents preserved                   | N                    | N                    | N                    | N                    | Y (1)                | Y (1)                | Y (1)                | Y (1)                | Y (1)                | Y                    |
| Resets PLLs (2)                           | Y                    | Y                    | Y                    | Y                    | N                    | N                    | N                    | N                    | N                    | N                    |
| Resets Clock Dividers (2)                 | Y                    | Y                    | Y                    | Y                    | N                    | N                    | N                    | N                    | N                    | N                    |
| PLLs enter bypass mode (2)                | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| Reset source blockable by emulation       | N                    | N                    | N                    | N                    | Y                    | Y                    | Y (3)                | Y                    | N                    | Y                    |
| Resets test and emulation logic           | Y                    | Y                    | Y                    | Y                    | N                    | N                    | N                    | N                    | N                    | N                    |
| Resets GMAC switch and related chip logic | Y                    | N (4)                | Y                    | Y                    | N (4)                | N (4)                | N (4)                | N (4)                | N                    |                      |
| Resets Chip Functional Logic (5)(6)       | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| Puts IOs in Tri- state                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | Y                    | N                    |
| Resets Pinmux Registers                   | Y                    | Y                    | Y (7)                | Y (7)                | Y (7)                | Y (7)                | Y (7)                | Y (7)                | Y (7)                | N                    |

(1) The ROM software does not utilize this feature of DRAM content preservation. Hence, the AM335x re-boots like a cold boot for warm reset as well.

(2) CORE PLL is an exception when EMAC switch reset isolation is enabled

(3) Watchdog0 (secure watchdog) reset is not block-able by emulation

(4) Only true if GMAC switch reset isolation is enabled in control registers, otherwise will be reset.

(5) There are exception details in control module &amp; PRCM registers which are captured in the register specifications in Chapter 8 and Chapter 9. This includes some pinmux registers which are warm reset in-sensitive.

(6) Exception details for debugss logic are captured in debugss specification.

(7) Some special IOs/Muxing registers like test, emulation, GEMAC Switch (When under reset isolation mode), etc related will not be affected under warm reset conditions.

<!-- image -->

<!-- image -->

## Table 8-26. Reset Sources (continued)

| Reset out Assertion (nRESETIN_O UT Pin)   | Y   | Y   | Y (7)   | Y (7)   | Y (7)   | Y (7)   | Y (7)   | Y (7)   | Y (7)   | N   |
|-------------------------------------------|-----|-----|---------|---------|---------|---------|---------|---------|---------|-----|
| Resets RTC                                | N   | N   | N       | N       | N       | N       | N       | N       | N       | N   |