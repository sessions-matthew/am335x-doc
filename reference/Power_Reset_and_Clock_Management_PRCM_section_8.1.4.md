Table 8-8. Clock Domain States

| State           | Description                                                                                                                                                                                                                                                                                                                                                                                                               |
|-----------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| ACTIVE          | Every nondisabled slave module (that is, those whose MODULEMODE value is not set to disabled) is put out of IDLE state. All interface clocks to the nondisabled slave modules in the clock domain are provided. All functional and interface clocks to the active master modules (that is, not in STANDBY) in the clock domain are provided. All enabled optional clocks to the modules in the clock domain are provided. |
| IDLE_TRANSITION | This is a transitory state. Every master module in the clock domain is in STANDBY state. Every idle request to all the slave modules in the clock domain is asserted. The functional clocks to the slave module in enabled state (that is, those whose MODULEMODE values are set to enabled) remain active. All enabled optional clocks to the modules in the clock domain are provided.                                  |
| INACTIVE        | All clocks within the clock domain are gated. Every slave module in the clock is in IDLE state and set to disabled. Every slave module in the clock domain (that is, those whose MODULEMODE is set to disabled) is in IDLE state and set to disabled. Every optional functional clock in the clock domain is gated                                                                                                        |

Each clock domain transition behavior is managed by an associated register bit field in the CM\_&lt;Clock domain&gt;\_CLKSTCTRL[x] CLKTRCTRL PRCM module

Table 8-9. Clock Transition Mode Settings

| CLKTRCTRL Bit Value   | Selected Mode   | Description                                                                                                           |
|-----------------------|-----------------|-----------------------------------------------------------------------------------------------------------------------|
| 0x0                   | NO_SLEEP        | Sleep transition cannot be initiated. Wakeup transition may however occur.                                            |
| 0x1                   | SW_SLEEP        | A software-forced sleep transition. The transition is initiated when the associated hardware conditions are satisfied |
| 0x2                   | SW_WKUP         | A software-forced clock domain wake-up transition is initiated                                                        |
| 0x3                   | Reserved        | NA                                                                                                                    |

## 8.1.4 Power Management

The PRCM module manages the switching on and off of the power supply to the device modules. To minimize device power consumption, the power to the modules can be switched off when they are not in use. Independent power control of sections of the device allows the PRCM module to turn on and off specific sections of the device without affecting the others.

## 8.1.4.1 Power Domain

A power domain is a section (that is, a group of modules) of the device with an independent and dedicated power manager (see Figure). A power domain can be turned on and off without affecting the other parts of the device.

<!-- image -->

PRCM

/dd —

dure o4 cerer rover Donaln Arcnteclure

<!-- image -->

www.ti.com

\_ • -

Figure 8-4. Generic Power Domain Architecture

<!-- image -->

To minimize device power consumption, the modules are grouped into power domains. A power domain can be split into a logic area and a memory area.

Table 8-10. States of a Memory Area in a Power Domain

| State   | Description                                      |
|---------|--------------------------------------------------|
| ON      | The memory array is powered and fully functional |
| OFF     | The memory array is powered down                 |

Table 8-11. States of a Logic Area in a Power Domain

| State   | Description                                               |
|---------|-----------------------------------------------------------|
| ON      | Logic is fully powered                                    |
| OFF     | Logic power switches are off. All the logic (DFF) is lost |

PM

## 8.1.4.2 Power Domain Management

The power manager associated with each power domain is assigned the task of managing the domain power transitions. It ensures that all hardware conditions are satisfied before it can initiate a power domain transition from a source to a target power state

Table 8-12. Power Domain Control and Status Registers

| Register/Bit Field                          | Type    | Description                                                                                          |
|---------------------------------------------|---------|------------------------------------------------------------------------------------------------------|
| PM_<Power domain>_PWRSTCTRL[1:0] POWERSTATE | Control | Selects the target power state of the power domain among OFF, ON, or RETENTION.                      |
| PM_<Power domain>_PWRSTST[1:0] POWERSTATEST | Status  | Identifies the current state of the power domain. It can be OFF, ON, or RETENTION.                   |
| PM_<Power domain>_PWRSTST[2] LOGICSTATEST   | Status  | Identifies the current state of the logic area in the power domain. It can be OFF or ON.             |
| PM_<Power domain>_PWRSTST[5:4] MEMSTATEST   | Status  | Identifies the current state of the memory area in the power domain. It can be OFF, ON, or RETENTION |

## 8.1.4.2.1 Power-Management Techniques

The following section describes the state-of-the-art power-management techniques supported by the device.

## 8.1.4.2.1.1 Adaptive Voltage Scaling

AVS is a power-management technique based in Smart Reflex that is used for automatic control of the operating voltages of the device to reduce active power consumption. With Smart Reflex, power-supply voltage is adapted to silicon performance, either statically (based on performance points predefined in the manufacturing process of a given device) or dynamically (based on the temperature-induced real-time performance of the device). A comparison of these predefined performance points to the real-time on-chip measured performance determines whether to raise or lower the power-supply voltage. AVS achieves the optimal performance/power trade-off for all devices across the technology process spectrum and across temperature variation. The device voltage is automatically adapted to maintain performance of the device

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.4.3 Power Modes

The following is a high-level description of the different power modes of the device. They are listed in order from highest power consumption, lowest wakeup latency (Standby), to lowest power consumption, highest wakeup latency (RTC-only). If your application requires some sort of power management, you must determine which power mode level described below satisfies your requirements. Each level must be evaluated based on power consumed and latency (the time it takes to wakeup to Active mode). Specific values are detailed in the device-specific data sheet. Note that not all modes are supported by software packages supplied by Texas Instruments.

Table 8-13. Typical Power Modes

| Power Modes   | Application State                                                                                                                                                                                                                                                               | Power Domains, Clocks, and Voltage Supply States                                                                                                                                                                                                  |
|---------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Active        | All Features                                                                                                                                                                                                                                                                    | Power supplies: All power supplies are ON. VDD_MPU = 1.1 V (nom) VDD_CORE = 1.1 V (nom) Clocks: Main Oscillator (OSC0) = ON All DPLLs are locked. Power domains: PD_PER = ON PD_MPU = ON PD_GFX = ON or OFF (depending on use case) PD_WKUP = ON  |
| Standby       | DDR memory is in self-refresh and contents are preserved. Wakeup from any GPIO. CortexA8 context/register contents are lost and must be saved before entering standby. On exit, context must be restored from DDR. For wakeup, boot ROM executes and branches to system resume. | Power supplies: All power supplies are ON. VDD_MPU = 0.95 V (nom) VDD_CORE = 0.95 V (nom) Clocks: Main Oscillator (OSC0) = ON All DPLLs are in bypass. Power domains: PD_PER = ON PD_MPU = OFF PD_GFX = OFF PD_WKUP = ON DDR is in self-refresh.  |
| Deepsleep1    | On-chip peripheral registers are preserved. Cortex-A8 context/registers are lost, so the application needs to save them to the L3 OCMC RAM or DDR before entering DeepSleep. DDR is in self-refresh. For wakeup, boot ROM executes and branches to system resume.               | Power supplies: All power supplies are ON. VDD_MPU = 0.95 V (nom) VDD_CORE = 0.95 V (nom) Clocks: Main Oscillator (OSC0) = OFF All DPLLs are in bypass. Power domains: PD_PER = ON PD_MPU = OFF PD_GFX = OFF PD_WKUP = ON DDR is in self-refresh. |

Table 8-13. Typical Power Modes (continued)

| Power Modes   | Application State                                                                                                                                                                                                                                                                                                                          | Power Domains, Clocks, and Voltage Supply States                                                                                                                                                                                                   |
|---------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Deepsleep0    | PD_PER peripheral and Cortex-A8/MPU register information will be lost. On-chip peripheral register (context) information of PD-PER domain needs to be saved by application to SDRAM before entering this mode. DDR is in self-refresh. For wakeup, boot ROM executes and branches to peripheral context restore followed by system resume. | Power supplies: All power supplies are ON. VDD_MPU = 0.95 V (nom) VDD_CORE = 0.95 V (nom) Clocks: Main Oscillator (OSC0) = OFF All DPLLs are in bypass. Power domains: PD_PER = OFF PD_MPU = OFF PD_GFX = OFF PD_WKUP = ON DDR is in self-refresh. |
| RTC-Only      | RTC timer remains active and all other device functionality is disabled.                                                                                                                                                                                                                                                                   | Power supplies: All power supplies are OFF except VDDS_RTC. VDD_MPU = 0 V VDD_CORE = 0 V Clocks: Main Oscillator (OSC0) = OFF Power domains: All power domains are OFF.                                                                            |

## 8.1.4.3.1 Active

In Active mode, the supply to all voltage rails must be maintained. All power domains come up in ON state and the device is fully functional.

## 8.1.4.3.2 Standby

The device can be placed in Standby mode to reduce power consumption during low activity levels. This first level of power management allows you to maintain the device context for fast resume times. The main characteristics of this mode which distinguish it from Active mode are:

- All modules are clock gated except GPIOs
- PLLs may be placed in bypass mode if downstream clocking does not require full performance
- Voltage domains VDD\_MPU and VDD\_CORE voltage levels can be reduced to OPP50 levels because the required performance of the entire device is reduced
- MPU power domain (PD\_MPU) is in OFF state
- DDR memory is in low power self-refresh mode.

Further power reduction can be achieved in this mode if the RTC function is not required. See Section 8.1.4.3.6, Internal RTC LDO .

The above conditions result in lower power consumption than Active mode but require the user to save the MPU context to OCMC RAM or DDR to resume properly upon wakeup. Contents of the internal SRAM are lost because PD\_MPU is turned OFF. Wakeup in Standby mode is achieved using any GPIO. GPIO wakeup is possible by switching the pad to GPIO mode and configuring the corresponding GPIO bank for generating an interrupt to the MPUSS. Note that pads that do not have a GPIO muxmode (for example, ADC or USB), cannot cause these wakeups. If additional or other wakeup sources are required, the associated peripheral module clock and interconnect clock domain should remain enabled (this may require the associated PLL to remain locked) and the module must be configured appropriately for wakeup by configuring it to generate an interrupt to the MPUSS.

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.4.3.3 DeepSleep1

DeepSleep1 mode enables lower power consumption than Standby mode. The main characteristic of this mode which distinguish it from Standby mode is the main oscillator (OSC0) is disabled.

DeepSleep1 is the lowest sleep mode required for certain USB wakeup modes. See Section 8.1.4.3.7, Supported Low Power USB Wakeup Scenarios , for more information.

Further power reduction can be achieved in this mode if the RTC function is not required. See Section 8.1.4.3.6, Internal RTC LDO .

Similar to Standby mode, the contents of the internal SRAM are lost because PD\_MPU is turned OFF. In addition, the contents of the SDRAM are preserved by placing the SDRAM in self-refresh. Activity on wakeup peripherals via wake-up events enables the master crystal oscillator using the oscillator control circuit. The wakeup events also interrupt Cortex-M3. See Section 8.1.4.5, Wakeup Sources/Events , for details on wakeup sources.

## 8.1.4.3.4 DeepSleep0

DeepSleep0 mode enables lower power consumption than DeepSleep1. The main characteristics of the mode which distinguish it from other higher power modes are:

- All on-chip power domains are shut off (except PD\_WKUP and PD\_RTC remain ON) to reduce power leakage
- VDD\_CORE power (except VDDA analog) to DPLLs is turned OFF using dpll\_pwr\_sw\_ctrl register (PG 2.x only)
- VDDS\_SRAM\_CORE\_BG is in retention using SMA2.vsldo\_core\_auto\_ramp\_en (PG2.x only)

DeepSleep0 mode is typically used during periods of inactivity when the user requires very low power while waiting for an event that requires processing or higher performance. This is the lowest power mode which still includes DDR in self-refresh, so wakeup events do not require a full cold boot, which greatly reduces wakeup latencies over RTC-only mode.

Further power reduction can be achieved in this mode if the RTC function is not required. See Section 8.1.4.3.6, Internal RTC LDO .

Similar to DeepSleep1 mode, the contents of the internal SRAM are lost because PD\_MPU is turned OFF.

Before entering DeepSleep0 mode, peripheral and MPU context must be saved in the DDR. Upon wakeup, the boot ROM executes and checks to see if it has resumed from a DeepSleep0 state. If so, it redirects to the DDR to continue the resume process. Because power to PD\_WKUP is ON throughout DeepSleep0, power to key modules such as GPIO0, I2C, and others is maintained to allow wakeup events to exit out of this mode. In addition, power to OCMC RAM is maintained to preserve information internally during DeepSleep0.

Activity on wakeup peripherals via wakeup events enables the master crystal oscillator using the oscillator control circuit. The wakeup events also interrupt Cortex M3 which controls proper enabling of power domains and clocks in the PRCM. See Section 8.1.4.5, Wakeup Sources/Events , for details on wakeup sources during DeepSleep0 and other low power modes mentioned.

## 8.1.4.3.5 RTC-Only

RTC-only mode is an ultra-low power mode which allows the user to maintain power and clocks to the real-time clock (RTC) domain while the rest of the device is powered down. All context and memories will be lost, and the only portion of the chip that will be maintained is the RTC. Only the RTC power supply must be ON. All the remaining supplies must be OFF. The RTC battery backup domain consists of the RTC subsystem (RTCSS), a dedicated, on-chip 32.768 Hz crystal oscillator and I/Os associated with the RTCSS: pmic\_power\_en and ext\_wakeup.

Figure 8-5 gives a high level view of system which implements the RTC-only mode.

Figure 8-5. High Level System View for RTC-only Mode

<!-- image -->

Wakeup from RTC-only mode can only be achieved using the ext\_wakeup0 signal or RTC Alarm (ALARM). Once a wakeup is triggered using either of these sources, the device drives pmic\_pwr\_enable to initiate a power-up sequence by the PMIC. The device must go through a full cold boot upon wakeup from RTC-only mode.

## 8.1.4.3.6 Internal RTC LDO

The device contains an internal LDO (low dropout) regulator which powers the RTC digital core. Depending on your application, you may be able to disable this regulator to save power in low power use cases.

If your application never uses the RTC functionality, connect RTC\_KALDO\_ENn to VDDS\_RTC, CAP\_VDD\_RTC to VDD\_CORE, and RTC\_PWRONRSTn to ground. These connections disable the internal RTC LDO because RTC\_KALDO\_ENn is high, and they use the external VDD\_CORE supply to power the RTC digital core. The RTC LDO must be disabled for internal power sequencing even though the RTC is not used. Grounding the reset signal will ensure the RTC stays in reset. Disabling the internal LDO will allow the application to achieve lower power consumption in all the low power modes.

If your application uses the RTC functionality and never needs RTC-only mode, the hardware scenario is similar to the previous description, but the RTC reset signal can be connected to the device PWRONRSTn. Note that PWRONRSTn and RTC\_PWRONRSTn may be at different voltage levels, so PWRONRSTn may require level shifting before connecting to RTC\_PWRONRSTn. This connection allows full functionality of the RTC subsystem without the internal RTC LDO consuming power.

If your application uses the RTC functionality and requires RTC-only mode, the internal LDO is required to enable proper wakeup signaling from the RTC domain. The proper wakeup signaling requires the following connections:

- RTC\_KALDO\_ENn is grounded
- CAP\_VDD\_RTC is connected to 1uF decoupling capacitor to ground
- RTC\_PWRONRSTn is connected to 1.8V RTC power on reset
- PMIC\_POWER\_EN is connected to power input of PMIC
- EXT\_WAKEUP0 is connected to a wakeup source

See the device datasheet for more information on these signals.

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.4.3.7 Supported Low Power USB Wakeup Scenarios

Table 8-14 summarizes different USB wakeup use cases which are supported in each system sleep state (DeepSleep0, DeepSleep1, or Standby). Three use case scenarios exist:

- USB Connect: Wakeup is cause by physically inserting the USB cable.
- USB Disconnect: Wakeup is caused by physically removing the USB cable.
- USB Suspend/Resume: Wakeup is caused by a USB suspend or resume command. For example, a USB mouse click can cause a USB resume command.

Within each wakeup use case, each row describes whether or not that type of wakeup is supported in each system sleep mode. USB mode (host or device) is also considered.

There are two possible Wakeup events that are generated:

- PHY WKUP: this is an internal wakeup signal to the Cortex M3 that is generated by the USB PHY based off of USB signaling.
- VBUS2GPIO: this is an external wakeup signal coming from a level change on VBUS voltage. This event requires an external board solution which routes VBUS to a GPIO on the device. Ensure you level shift the voltage to conform to the I/O requirements. When VBUS transitions from 0V to 5V (or vice versa), the transition on a GPIO will trigger a wakeup.

Table 8-14. USB Wakeup Use Cases Supported in System Sleep States

|   No. | USB Wakeup Use Case   | System Sleep State   | USB Controller State   | USB Mode   | Supported   | USB Wakeup Event   |
|-------|-----------------------|----------------------|------------------------|------------|-------------|--------------------|
|     1 | USB Connect           | DS0                  | POWER OFF              | Host       | No          | N/A                |
|     2 | USB Connect           | DS0                  | POWER OFF              | Device     | Yes         | VBUS2GPIO          |
|     3 | USB Connect           | DS1/ Standby         | Clock Gated            | Host       | Yes         | PHY WKUP           |
|     4 | USB Connect           | DS1/ Standby         | Clock Gated            | Device     | Yes         | VBUS2GPIO          |
|     5 | USB Suspend / Resume  | DS0                  | POWER OFF              | Host       | No          | N/A                |
|     6 | USB Suspend / Resume  | DS0                  | POWER OFF              | Device     | No          | N/A                |
|     7 | USB Suspend / Resume  | DS1/ Standby         | Clock Gated            | Host       | Yes         | PHY WKUP           |
|     8 | USB Suspend / Resume  | DS1/ Standby         | Clock Gated            | Device     | Yes         | PHY WKUP           |
|     9 | USB Disconnect        | DS0                  | POWER OFF              | Host       | No          | N/A                |
|    10 | USB Disconnect        | DS0                  | POWER OFF              | Device     | No          | N/A                |
|    11 | USB Disconnect        | DS1/ Standby         | Clock Gated            | Host       | Yes         | PHY WKUP           |
|    12 | USB Disconnect        | DS1/ Standby         | Clock Gated            | Device     | Yes         | VBUS2GPIO          |

## 8.1.4.4 Main Oscillator Control During Deep Sleep

The Deepsleep oscillator circuit is used to control the main oscillator by disabling it during deep sleep and enabling during active/wakeup. By default during reset, the oscillator is enabled and the oscillator control circuit comes up disabled (in-active).In order to activate the oscillator control circuit for deepsleep, DSENABLE bit of DEEPSLEEP\_CTRL register must set. Once this is set and whenever wake M3 enters standby, the oscillator control will disable the oscillator causing the clock to be shut OFF. Any async event from the wakeup sources will cause the oscillator control to re-enable the oscillator after a period of DSCOUNT configured in DEEPSLEEP\_CTRL register.

## 8.1.4.5 Wakeup Sources/Events

Following events will wake up the device from Deep sleep(low power) modes. These are part of the Wakeup Power domain and remain always ON.

Note: For differences in operation based on AM335x silicon revision, see Section 1.2, Silicon Revision Functional Differences and Enhancements .

- GPIO0 bank
- dmtimer1\_1ms (timer based wakeup)
- USB2PHY (USB resume signaling from suspend) - Both USB ports supported.
- TSC (touch screen controller, ADC monitor functions )
- UART0 (Infra-red support)
- I2C0
- RTC alarm

These wake events apply on any of the deep sleep modes and standby mode.

## 8.1.4.6 Functional Sequencing for Power Management with Cortex M3

The AM335x device contains a dedicated Cortex M3 processor to handle the power management transitions. It is part of the Wake up Power domain (PD\_WKUP). Implementing the Power modes are part of the MPU and Cortex A8 processors.

The power management sequence kicks off with Cortex A8 MPU executing a WFI instruction with the following steps:

1. During Active power mode, the Cortex A8 MPU executes a WFI instruction to enter IDLE mode.
2. Cortex M3 gets an interrupts and gets active, It powers down the MPU power domain( if required).
3. Registers interrupt for the Wake up peripheral(which is listed in Wake up sources in previous section).
4. Executes WFI and goes into idle state.
5. The wake up event triggers an interrupt to Cortex M3 system and it wakes up the Cortex A8 MPU.

Generally, A8 and Cortex M3 are not expected to be active at the same time Cortex M3 along with PRCM is the power manager primarily for PD\_MPU and PD\_PER. Other power domains (e.g., PD\_GFX) may be handled directly using Cortex A8 MPU software. Figure 8-6 gives a system level view of the Power management system between Cortex A8 MPU and Cortex M3.

<!-- image -->

<!-- image -->

www.ti.com

Figure 8-6. System Level View of Power Management of Cortex A8 MPU and Cortex M3

<!-- image -->

The Cortex-M3 handles all of the low-level power management control of the AM335x. A firmware binary is provided by Texas Instruments that includes all of the necessary functions to achieve low power modes. Inter-Processor Communication (IPC) registers (ipc\_msg\_reg x , located in the Control Module Registers) are available to communicate with the Cortex-M3 so the user can provide certain configuration parameters based on the level of low power that is required. Figure 8-7 provides a mapping of these registers.

--

2

3

-

10 , l0

Not

CM3

Reserved

CMD\_STAT

CMD\_ID

CMD param 1

CMD param2

Figure 8-7. IPC Mechanism

<!-- image -->

IPC\_MSG\_REG1 contains the CMD\_STAT and CMD\_ID parameters as described in Table 8-15 and Table 8-16.

Table 8-15. CMD\_STAT Field

| CMD_STAT   | Value   | Description                                                                                                                                                                                            |
|------------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| PASS       | 0x0     | In the initialization phase, PASS (0x1) denotes that the CM3 was successfully initialized.                                                                                                             |
| FAIL       | 0x1     | In the initialization phase, 0x2 denotes CM3 could not properly initialize. When other tasks are to be done, FAIL (0x3) indicates some error in carrying out the task. Check trace vector for details. |
| WAIT4OK    | 0x2     | CM3 INTC will catch the next WFI of A8 and continue with the pre-defined sequence.                                                                                                                     |

Table 8-16. CMD\_ID Field

| CMD_ID       | Value   | Description                                                                                                                                                     |
|--------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| CMD_RTC      | 0x1     | 1. Initiates force_sleep on interconnect clocks. 2. Turns off MPU and PER power domains. 3. Programs the RTC alarm register for deasserting pmic_pwr_enable.    |
| CMD_RTC_FAST | 0x2     | Programs the RTC alarm register for deasserting pmic_pwr_enable.                                                                                                |
| CMD_DS0      | 0x3     | 1. Initiates force_sleep on interconnect clocks. 2. Turns off the MPU and PER power domains. 3. Configures the system for disabling MOSC when CM3 executes WFI. |
| CMD_DS1      | 0x5     | 1. Initiates force_sleep on interconnect clocks. 2. Turns off the MPU power domains. 3. Configures the system for disabling MOSC when CM3 executes WFI.         |

<!-- image -->