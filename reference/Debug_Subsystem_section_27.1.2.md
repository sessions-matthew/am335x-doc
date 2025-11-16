<!-- image -->

www.ti.com

## 27.1 Functional Description

## 27.1.1 Debug Resource Manager (DRM)

## 27.1.1.1 Debug Suspend Support for Peripherals

When a processor is halted, peripherals associated with the processor must appropriately respond to this event to avoid incorrect actions.

An example of this is the action of the Watchdog Timer (WDT) during a debug halt. Typically watchdog timers fire a reset to restart a system after a timeout. The reset could be misfired during debug if a processor is halted for a fairly long time and prevents a WDT monitor from refreshing the timer.

To prevent this incorrect action, the watchdog timer supports a debug suspend event. This event allows the WDT to stop counting during a CPU halt.

Other peripherals also support a debug suspend event. The list of supported peripherals is shown in Table 27-3.

Note that several peripherals have local control to gate the suspend event coming from the Debug Subsystem. For example, the WDT has an EMUFREE bit in the WDSC register to block the suspend event coming from the Debug Subsystem. Ensure this bit is set correctly to allow the suspend event to properly control the peripheral module.

Recommended Suspend Control Register Value:

Normal mode: 0x0

Suspend peripheral during debug halt: 0x9

## 27.1.2 Debug Ports

## 27.1.2.1 IEEE1149.1

The target debug interface has the following signals:

- Five standard IEEE1149.1 JTAG signals:
- -nTRST
- -TCK
- -TMS
- -TDI
- -TDO
- Two EMU [1:0] or five EMU [4:0] TI extensions, depending on the pin count (14 pins or 20 pins) in the JTAG header of the device.

Table 27-1 describes the IEEE1149.1 signals.

Table 27-1. IEEE1149.1 Signals

| Signal Name   | Type(1)   | Function         | Description                                                                                                               |
|---------------|-----------|------------------|---------------------------------------------------------------------------------------------------------------------------|
| nTRST         | I         | Test reset       | When asserted (active low), causes all test and debug logic in the device to be reset along with the IEEE1149.1 interface |
| TCK           | I         | Test clock       | This is the test clock used to drive an IEEE1149.1 TAP state- machine and logic.                                          |
| TMS           | I         | Test mode select | Directs the next state of the IEEE1149.1 TAP state-machine                                                                |
| TDI           | I         | Test data input  | Scans data input to the device                                                                                            |
| TDO           | O         | Test data output | Scans data output by the device                                                                                           |
| EMU0          | I/O       | Emulation 0      | Channel 0 trigger, or boot mode, or trace port                                                                            |
| EMU1          | I/O       | Emulation 1      | Channel 1 trigger, or boot mode, or trace port                                                                            |
| EMU2(2)       | O         | Emulation 2      | Trace port                                                                                                                |
| EMU3(2)       | O         | Emulation 3      | Trace port                                                                                                                |
| EMU4(2)       | O         | Emulation 4      | Trace port                                                                                                                |

(1) I = Input; O = Output; I/O = Bidirectional

(2) 20-pin JTAG header only

The JTAG ID code is 0x0B98 C02F. The code is accessed through the ICEPick module embedded in the debug subsystem.

## 27.1.2.2 Debugger Connection

## 27.1.2.2.1 ICEPick Module

The debugger connects to the device through its JTAG interface. The first level of debug interface seen by the debugger is the IEEE1149.7 adapter connected to the ICEPick module embedded in the debug subsystem.

NOTE:

ICEPick version D (ICEPick-D) is used in the device.

System-on-chip (SoC) designs typically have multiple processors, each having a JTAG TAP embedded in the processor. The ICEPick module manages these TAPs and the power, reset, and clock controls for modules that have TAPs.

ICEPick provides the following debug capabilities:

- Debug connect logic for enabling or disabling most ICEPick instructions
- Dynamic TAP insertion:
- -Serially linking up to 16 TAP controllers
- -Individually selecting one or more of the TAPs for scan without disrupting the instruction register (IR) state of other TAPs
- Power, reset, and clock management:
- -Provides the power and clock states of each domain
- -Provides debugger control of the power domain of a processor. Can force the domain power and clocks on, and prohibit the domain from being clock-gated or powered down while a debugger is connected.
- -Applies system reset
- -Provides wait-in-reset (WIR) boot mode
- -Provides global and local WIR release
- -Provides global and local reset blocking

The ICEPick module implements a connect register, which must be configured with a predefined key to enable the full set of JTAG instructions. When the debug connect key is properly programmed, ICEPick signals and subsystems emulation logics should be turned on.

<!-- image -->

<!-- image -->

www.ti.com

## 27.1.2.2.2 Boot Modes

The initial configuration of ICEPick is determined by the level of the dpm\_emu0 and dpm\_emu1 pins upon POR release. At POR, dpm\_emu0 and dpm\_emu1 are automatically configured as inputs. The dpm\_emu0 and dpm\_emu1 pins are free when POR is released.

Table 27-2 summarizes the ICEPick boot modes.

Table 27-2. ICEPick Boot Modes Upon POR

|   EMU1 |   EMU0 | TAPs in the TDI → TDO Path   | Other Effects/Comments   |
|--------|--------|------------------------------|--------------------------|
|      0 |      0 | None                         | Reserved (do not use)    |
|      0 |      1 | None                         | Reserved (do not use)    |
|      1 |      0 | ICEPick                      | TAP only + WIR mode      |
|      1 |      1 | ICEPick                      | TAP only (default mode)  |

## 27.1.2.2.2.1 Default Boot Mode

In ICEPick-only configuration, none of the secondary TAPs are selected. The ICEPick TAP is the only TAP between device-level TDI and TDO pins. This is the recommended boot mode.

## 27.1.2.2.2.2 Wait-In-Reset

The device can boot to invoke WIR mode. If the device is booted in this mode, all processors within the device that support a TAP through ICEPick are held in reset until released. Individual processors may be released from reset (local), or all processors held in the reset state may be released at the same time (global).

Note that the PRU processors in PRU-ICSS do not support the WIR feature.