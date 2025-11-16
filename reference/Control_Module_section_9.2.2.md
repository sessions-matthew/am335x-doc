<!-- image -->

www.ti.com

## 9.1 Introduction

The control module includes status and control logic not addressed within the peripherals or the rest of the device infrastructure. This module provides interface to control the following areas of the device:

- Functional I/O multiplexing
- Emulation controls
- Device control and status
- DDR PHY control and IO control registers
- EDMA event multiplexing control registers

Note: For writing to the control module registers, the MPU will need to be in privileged mode of operation and writes will not work from user mode.

## 9.2 Functional Description

## 9.2.1 Control Module Initialization

The control module responds only to the internal POR and device type. At power on, reset values for the registers define the safe state for the device. In the initialization mode, only modules to be used at boot time are associated with the pads. Other module inputs are internally tied and output pads are turned off. After POR, software sets the pad functional multiplexing and configuration registers to the desired values according to the requested device configuration.

General-purpose (GP) devices include features that are inaccessible or unavailable. These inaccessible registers define the default or fixed device configuration or behavior.

The CONTROL\_STATUS[7:0] SYS\_BOOT bit field reflects the state of the sys\_boot pins captured at POR in the PRCM module.

## 9.2.2 Pad Control Registers

The Pad Control Registers are 32-bit registers to control the signal muxing and other aspects of each I/O pad. After POR, software must set the pad functional multiplexing and configuration registers to the desired values according to the requested device configuration. The configuration is controlled by pads or by a group of pads. Each configurable pin has its own configuration register for pullup/down control and for the assignment to a given module.

The following table shows the generic Pad Control Register Description.

Table 9-1. Pad Control Register Field Descriptions

| Bit   | Field       | Value   | Description                                                                             |
|-------|-------------|---------|-----------------------------------------------------------------------------------------|
| 31-7  | Reserved    |         | Reserved. Read returns 0.                                                               |
| 6     | SLEWCTRL    |         | Select between faster or slower slew rate.                                              |
| 5     | RXACTIVE    |         | Input enable value for the Pad. Set to 0 for output only. Set to 1 for input or output. |
| 4     | PULLTYPESEL |         | Pad pullup/pulldown type selection                                                      |
| 3     | PULLUDEN    | 0 1     | Pad Pullup/pulldown enable Pullup/pulldown enabled.                                     |
|       |             |         | Pad functional signal mux                                                               |
| 2-0   | MUXMODE     |         | select                                                                                  |

(1) Some peripherals do not support slow slew rate. To determine which interfaces support each slew rate, see AM335x Sitara Processors (literature number SPRS717).

## 9.2.2.1 Mode Selection

The MUXMODE field in the pad control registers defines the multiplexing mode applied to the pad. Modes are referred to by their decimal (from 0 to 7) or binary (from 0b000 to 0b111) representation. For most pads, the reset value for the MUXMODE field in the registers is 0b111. The exceptions are pads to be used at boot time to transfer data from selected peripherals to the external flash memory.

Table 9-2. Mode Selection

| MUXMODE   | Selected Mode         |
|-----------|-----------------------|
| 000b      | Primary Mode = Mode 0 |
| 001b      | Mode 1                |
| 010b      | Mode 2                |
| 011b      | Mode 3                |
| 100b      | Mode 4                |
| 101b      | Mode 5                |
| 110b      | Mode 6                |
| 111b      | Mode 7                |

Mode 0 is the primary mode. When mode 0 is set, the function mapped to the pin corresponds to the name of the pin. Mode 1 to mode 7 are possible modes for alternate functions. On each pin, some modes are used effectively for alternate functions, while other modes are unused and correspond to no functional configuration.

## CAUTION

The multiplexer controlling the signal mode selection is not a glitch-free structure. Thus, it is possible to see the signal glitch for a few nanoseconds during the MUXMODE change. The user must ensure a glitch does not cause contention or negatively impact an external device connected to the pad.

## 9.2.2.2 Pull Selection

There is no automatic gating control to ensure that internal weak pull- down/pull up resistors on a pad are disconnected whenever the pad is configured as output. If a pad is always configured in output mode, it is recommended for user software to disable any internal pull resistor tied to it, to avoid unnecessary consumption. The following table summarizes the various possible combinations of PULLTYPESEL and PULLUDEN fields of PAD control register.

Table 9-3. Pull Selection

| PULL TYPE   | PULL TYPE    | Pin Behavior                        |
|-------------|--------------|-------------------------------------|
| PULLTYPESEL | PULLUDENABLE |                                     |
| 0b          | 0b           | Pulldown selected and activated     |
| 0b          | 1b           | Pulldown selected but not activated |
| 1b          | 0b           | Pullup selected and activated       |
| 1b          | 1b           | Pullup selected but not activated   |

## 9.2.2.3 RX Active

The RXACTIVE bit is used to enable and disable the input buffer. This control can be used to help with power leakage or device isolation through the I/O. The characteristic of the signal is ultimately dictated by the mux mode the pad is put into.

<!-- image -->