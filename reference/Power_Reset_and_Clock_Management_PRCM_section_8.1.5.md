<!-- image -->

www.ti.com

## 8.1.4.6.1 Periodic Idling of Cortex A8 MPU

To implement Cortex A8 MPU periodic ON/OFF in the use case, the control flow could be implemented according to the following steps:

1. Cortex A8 MPU executes WFI instruction
2. Any peripheral interrupt in any of the next steps will trigger a wake interrupt to Cortex M3 via MPU Subsystem's WKUP signal (INTR2 shown on the diagram). Cortex M3 powers down the MPU(PD\_MPU)
3. On receiving an interrupt Cortex M3 switches ON the MPU power domain by turning on PD\_MPU
4. Cortex M3 goes into idle mode using WFI instruction

## 8.1.4.6.2 Sleep Sequencing

This section gives the system level guidelines for sleep sequencing. The guidelines can serve as an example for implementing the sleep mode sequencing. The user can opt to implement a sequence with certain steps interchanged between the MPU and Cortex M3 processor.

1. Application saves context of peripherals to memories supporting retention and DDR - this step is only required for Deepsleep0.
2. MPU OCMC\_RAM remains in retention
3. Unused power domains are turned OFF - program clock/power domains PWRSTCTRL, save contexts etc
4. Software populates L3\_OCMC\_RAM for wakeup restoration viz Save EMIF settings, public/secure restoration pointers, etc.
5. Execute WFI from SRAM
6. Any peripheral interrupt will trigger a wake interrupt to Cortex M3 via Cortex A8 MPU's WKUP signal (INTR2 shown on the diagram).
7. After MPU power domain is clock gated PRCM will provide an interrupt to Cortex M3 (using INTR1 shown in the block diagram)
8. Cortex M3 starts execution and performs low level power sequencing to turn off certain power domain, and eventually executes WFI.
9. Hardware oscillator control circuit disables the oscillator once Cortex M3 goes into WFI

## 8.1.4.6.3 Wakeup Sequencing

This section gives the guidelines for Wakeup sequencing.

1. One of the wakeup event triggers (which was configured during the sleep sequencing) will initiate a wakeup sequence
2. The wake up event will switch on the oscillator (if it was configured to go OFF during sleep)
3. The wake up event will also trigger interrupt to Cortex M3
4. On the wakeup event due to interrupt Cortex M3 execute the following
- Restore the voltages to normal Operating voltage
- Enable PLL locking
- Cortex M3 will switch ON the power domains and/or enable clocks for PD\_PER
- Cortex M3 will switch ON the power domains and/or enable clocks for PD\_MPU
- Executes WFI
5. Cortex A8 MPU starts executing from ROM reset vector
6. Restore the application context(only for Deep sleep 0)

## 8.1.5 PRCM Module Overview

The PRCM is structured using the architectural concepts presented in the 5000x Power Management Framework. This framework provides:

<!-- image -->

A set of modular, re-usable FSM blocks to be assembled into the full clock and power management mechanism. A register set and associated programming model. Functional sub-block definitions for clock management, power management, system clock source generation, and master clock generation.

The device supports an enhanced power management scheme based on four functional power domains:

## Generic Domains

- WAKEUP
- MPU
- PER
- RTC

The PRCM provides the following functional features:

- Software configurable for direct, automatic, or a combination thereof, functional power domain state transition control
- Device power-up sequence control
- Device sleep / wake-up sequence control
- Centralized reset generation and management
- Centralized clock generation and management

The PRCM modules implement these general functional interfaces:

- OCP configuration ports
- Direct interface to device boundary
- Power switch control signals
- Device control signals
- Clocks control signals
- Resets signals
- A set of power management protocol signals for each module to control and monitor standby, idle and wake-up modes (CM and PRM)
- Emulation signals

## 8.1.5.1 Interface Descriptions

This section lists and shortly describes the different interfaces that allow PRCM to communicate with other modules or external devices.

## 8.1.5.1.1 OCP Interfaces

The PRCM has 1 target OCP interfaces, compliant with respect to the OCP/IP2 standard. The OCP port, for the PRCM module is used to control power, reset and wake-up Management.

## 8.1.5.1.2 OCP Slave Interfaces

PRCM implements a 32-bit OCP target interface compliant to the OCP/IP2.0 standard.

## 8.1.5.1.3 Power Control Interface

The Device does has power domain switches over the device, this interface provides PRCM control over power domain switches and receives responses from the power domains which indicate the switch status. It also controls the isolation signals. The control for power domain switches will be latched in PRCM Status Registers

## 8.1.5.1.4 Device Control Interface

This interface provides PRM management of several device-level features which are not specific to any single power domain. This PRM interface controls signals to/from the device for global control: