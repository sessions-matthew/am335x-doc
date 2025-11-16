ICLK

PRCM

Interconnect interface

Registers

Clock generator

Module X

Device interconnect

F

## 8.1 Power, Reset, and Clock Management

## 8.1.1 Introduction

The device power-management architecture ensures maximum performance and operation time for user satisfaction (audio/video support) while offering versatile power-management techniques for maximum design flexibility, depending on application requirements. This introduction contains the following information:

- Power-management architecture building blocks for the device
- State-of-the-art power-management techniques supported by the power-management architecture of the device

## 8.1.2 Device Power-Management Architecture Building Blocks

To provide a versatile architecture supporting multiple power-management techniques, the powermanagement framework is built with three levels of resource management: clock, power, and voltage management.

These management levels are enforced by defining the managed entities or building blocks of the powermanagement architecture, called the clock, power, and voltage domains. A domain is a group of modules or subsections of the device that share a common entity (for example, common clock source, common voltage source, or common power switch). The group forming the domain is managed by a policy manager. For example, a clock for a clock domain is managed by a dedicated clock manager within the power, reset, and clock management (PRCM) module. The clock manager considers the joint clocking constraints of all the modules belonging to that clock domain (and, hence, receiving that clock).

## 8.1.3 Clock Management

The PRCM module along with the control module manages the gating (that is, switching off) and enabling of the clocks to the device modules. The clocks are managed based on the requirement constraints of the associated modules. The following sections identify the module clock characteristics, management policy, clock domains, and clock domain management

## 8.1.3.1 Module Interface and Functional Clocks

Each module within the device has specific clock input characteristic requirements. Based on the characteristics of the clocks delivered to the modules, the clocks are divided into two categories: interface clocks and functional clocks

Figure 8-1. Functional and Interface Clocks

<!-- image -->

The interface clocks have the following characteristics:

- They ensure proper communication between any module/subsystem and interconnect.
- In most cases, they supply the system interconnect interface and registers of the module.
- A typical module has one interface clock, but modules with multiple interface clocks may also exist (that is, when connected to multiple interconnect buses).

<!-- image -->

<!-- image -->

## www.ti.com

- Interface clock management is done at the device level.
- From the standpoint of the PRCM module, an interface clock is identified by an \_ICLK suffix.

Functional clocks have the following characteristics:

- They supply the functional part of a module or subsystem.
- A module can have one or more functional clocks. Some functional clocks are mandatory, while others are optional. A module needs its mandatory clock(s) to be operational. The optional clocks are used for specific features and can be shut down without stopping the module activity
- From the standpoint of the PRCM module, a functional clock is distributed directly to the related modules through a dedicated clock tree. It is identified with an \_FCLK suffix

## 8.1.3.2 Module-Level Clock Management

Each module in the device may also have specific clock requirements. Certain module clocks must be active when operating in specific modes, or may be gated otherwise. Globally, the activation and gating of the module clocks are managed by the PRCM module. Hence, the PRCM module must be aware of when to activate and when to gate the module clocks. The PRCM module differentiates the clock-management behavior for device modules based on whether the module can initiate transactions on the device interconnect (called master module or initiators) or cannot initiate transactions and only responds to the transactions initiated by the master (called slave module or targets). Thus, two hardware-based powermanagement protocols are used:

- Master standby protocol: Clock-management protocol between the PRCM and master modules.
- Slave idle protocol: Clock-management protocol between the PRCM and slave modules.

## 8.1.3.2.1 Master Standby Protocol

Master standby protocol is used to indicate that a master module must initiate a transaction on the device interconnect and requests specific (functional and interface) clocks for the purpose. The PRCM module ensures that the required clocks are active when the master module requests the PRCM module to enable them. This is called a module wake-up transition and the module is said to be functional after this transition completes. Similarly, when the master module no longer requires the clocks, it informs the PRCM module, which can then gate the clocks to the module. The master module is then said to be in standby mode. Although the protocol is completely hardware-controlled, software must configure the clock-management behavior for the module. This is done by setting the module register bit field &lt;Module&gt;\_SYSCONFIG.MIDLEMODE or &lt;Module&gt;\_SYSCONFIG.STANDBYMODE. The behavior, identified by standby mode values, must be configured.

Table 8-1. Master Module Standby-Mode Settings

| Standby Mode Value   | Selected Mode   | Description                                                                                                                                                                                                                                                                                                   |
|----------------------|-----------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x0                  | Force-standby   | The module unconditionally asserts the standby request to the PRCM module, regardless of its internal operations. The PRCM module may gate the functional and interface clocks to the module. This mode must be used carefully because it does not prevent the loss of data at the time the clocks are gated. |
| 0x1                  | No-standby      | The module never asserts the standby request to the PRCM module. This mode is safe from a module point of view because it ensures that the clocks remain active. However, it is not efficient from a power-saving perspective because it never allows the output clocks of the PRCM module to be gated        |

<!-- image -->

Table 8-1. Master Module Standby-Mode Settings (continued)

| Standby Mode Value   | Selected Mode                    | Description                                                                                                                                                                                                                                                                                                                                                                                                    |
|----------------------|----------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x2                  | Smart-standby                    | The module asserts the standby request based on its internal activity status. The standby signal is asserted only when all ongoing transactions are complete and the module is idled. The PRCM module can then gate the clocks to the module.                                                                                                                                                                  |
| 0x3                  | Smart-standbywakeup-capable mode | The module asserts the standby request based on its internal activity status. The standby signal is asserted only when all ongoing transactions are complete and the module is idle. The PRCM module can then gate the clocks to the module. The module may generate (master-related) wake-up events when in STANDBY state. The mode is relevant only if the appropriate module mwakeup output is implemented. |

The standby status of a master module is indicated by the CM\_&lt;Power\_domain&gt;\_&lt;Module&gt;\_CLKCTRL[x]. STBYST bit in the PRCM module.

Table 8-2. Master Module Standby Status

| STBYST Bit Value   | Description                   |
|--------------------|-------------------------------|
| 0x0                | The module is functional.     |
| 0x1                | The module is in standby mode |

## 8.1.3.2.2 Slave Idle Protocol

This hardware protocol allows the PRCM module to control the state of a slave module. The PRCM module informs the slave module, through assertion of an idle request, when its clocks (interface and functional) can be gated. The slave can then acknowledge the request from the PRCM module and the PRCM module is then allowed to gate the clocks to the module. A slave module is said to be in IDLE state when its clocks are gated by the PRCM module. Similarly, an idled slave module may need to be wakened because of a service request from a master module or as a result of an event (called a wake-up event; for example, interrupt or DMA request) received by the slave module. In this situation the PRCM module enables the clocks to the module and then deasserts the idle request to signal the module to wake up. Although the protocol is completely hardware-controlled, software must configure the clockmanagement behavior for the slave module. This is done by setting the module register bit field &lt;Module&gt;\_SYSCONFIG. SIDLEMODE or &lt;Module&gt;\_SYSCONFIG. IDLEMODE. The behavior, listed in the Idle Mode Value column, must be configured by software.

Table 8-3. Module Idle Mode Settings

| Idle Mode Value   | Selected Mode   | Description                                                                                                                                                                                                                                                                                                                                                          |
|-------------------|-----------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x0               | Force-idle      | The module unconditionally acknowledges the idle request from the PRCM module, regardless of its internal operations. This mode must be used carefully because it does not prevent the loss of data at the time the clock is switched off.                                                                                                                           |
| 0x1               | No-idle         | The module never acknowledges any idle request from the PRCM module. This mode is safe from a module point of view because it ensures that the clocks remain active. However, it is not efficient from a power-saving perspective because it does not allow the PRCM module output clock to be shut off, and thus the power domain to be set to a lower power state. |

<!-- image -->

www.ti.com

## Table 8-3. Module Idle Mode Settings (continued)

| Idle Mode Value   | Selected Mode                  | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------------------|--------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x2               | Smart-idle                     | The module acknowledges the idle request basing its decision on its internal activity. Namely, the acknowledge signal is asserted only when all pending transactions, interrupts, or direct memory access (DMA) requests are processed. This is the best approach to efficient system power management.                                                                                                                                                                             |
| 0x3               | Smart-idle wakeup-capable mode | The module acknowledges the idle request basing its decision on its internal wakeup-capable mode activity. Namely, the acknowledge signal is asserted only when all pending transactions, interrupts, or DMA requests are processed. This is the best approach to efficient system power management. The module may generate (IRQ- or DMA-request-related) wake-up events when in IDLE state. The mode is relevant only if the appropriate module swakeup output(s) is implemented. |

The idle status of a slave module is indicated by the CM\_&lt;Powerdomain&gt;\_&lt;Module&gt;\_CLKCTRL[x] IDLEST bit field in the PRCM module.

## Table 8-4. Idle States for a Slave Module

| IDLEST Bit VALUE   | Idle Status    | Description                                                                                                 |
|--------------------|----------------|-------------------------------------------------------------------------------------------------------------|
| 0x0                | Functional     | The module is fully functional.The interface and functional clocks are active.                              |
| 0x1                | In transition  | The module is performing a wake-up or a sleep transition.                                                   |
| 0x2                | Interface idle | The module interface clock is idled. The module may remain functional if using a separate functional clock. |
| 0x3                | Full idle      | The module is fully idle. The interface and functional clocks are gated in the module.                      |

For the idle protocol management on the PRCM module side, the behavior of the PRCM module is configured in the CM\_&lt;Power domain&gt;\_&lt;module&gt;\_CLKCTRL[x] MODULEMODE bit field. Based on the configured behavior, the PRCM module asserts the idle request to the module unconditionally (that is, immediately when the software requests).

## Table 8-5. Slave Module Mode Settings in PRCM

| MODULEMODE Bit VALUE   | Selected Mode   | Description                                                                                                                                                                                                                                                                               |
|------------------------|-----------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x0                    | Disabled        | The PRCM module unconditionally asserts the module idle request. This request applies to the gating of the functional and interface clocks to the module. If acknowledged by the module, the PRCM module can gate all clocks to the module (that is, the module is completely disabled).. |
| 0x1                    | Reserved        | NA                                                                                                                                                                                                                                                                                        |

<!-- image -->

Table 8-5. Slave Module Mode Settings in PRCM (continued)

| MODULEMODE Bit VALUE   | Selected Mode   | Description                                                                                                                                                                                                                                                                                                                                                                             |
|------------------------|-----------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x2                    | Enabled         | This mode applies to a module when the PRCM module manages its interface and functional clocks. The functional clock to the module remains active unconditionally, while the PRCM module automatically asserts/deasserts the module idle request based on the clock-domain transitions. If acknowledged by the module, the PRCM module can gate only the interface clock to the module. |
| 0x3                    | Reserved        | NA                                                                                                                                                                                                                                                                                                                                                                                      |

In addition to the IDLE and STANDBY protocol, PRCM offers also the possibility to manage optional clocks, through a direct SW control: 'OptFclken' bit from programming register.

Table 8-6. Module Clock Enabling Condition

| Clock Enabling                         | Clock Enabling          | Clock Enabling          | Clock Enabling   |
|----------------------------------------|-------------------------|-------------------------|------------------|
| Clock associated with STANDBY protocol | Clock Domain is ready   | Clock Domain is ready   |                  |
| Clock associated with STANDBY protocol |                         | MStandby is de-asserted |                  |
| Clock associated with STANDBY protocol |                         | Mwakeup is asserted     |                  |
| Clock protocol,                        | Clock Domain is ready   | Clock Domain is ready   |                  |
| Clock protocol,                        |                         | Idle status = FUNCT     |                  |
| Clock protocol,                        |                         | Idle status = TRANS     |                  |
| Clock protocol,                        |                         | SWakeup is asserted     |                  |
| Clock protocol,                        | Clock Domain is ready   | Clock Domain is ready   |                  |
| Clock protocol,                        |                         | Idle status = FUNCT     |                  |
| Clock protocol,                        |                         | Idle status = IDLE      |                  |
| Clock protocol,                        |                         | Idle status = TRANS     |                  |
| Clock protocol,                        |                         | SWakeup is asserted     |                  |
|                                        | Clock domain is ready   | Clock domain is ready   |                  |
|                                        | OptFclken=Enabled ('1') | OptFclken=Enabled ('1') |                  |

## 8.1.3.3 Clock Domain

A clock domain is a group of modules fed by clock signals controlled by the same clock manager in the PRCM module By gating the clocks in a clock domain, the clocks to all the modules belonging to that clock domain can be cut to lower their active power consumption (that is, the device is on and the clocks to the modules are dynamically switched to ACTIVE or INACTIVE (GATED) states). Thus, a clock domain allows control of the dynamic power consumption of the device. The device is partitioned into multiple clock domains, and each clock domain is controlled by an associated clock manager within the PRCM module. This allows the PRCM module to individually activate and gate each clock domain of the device

ACTIVE

INACTIVE

Module 1

IDLE\_TRANSITION

CM\_a

PRCM

-

Module 2

<!-- image -->

www.ti.com

Dor

Figure 8-2. Generic Clock Domain

<!-- image -->

Figure above is an example of two clock managers: CM\_a and CM\_b. Each clock manager manages a clock domain. The clock domain of CM\_b is composed of two clocks: a functional clock (FCLK2) and an interface clock (ICLK1), while the clock domain of CM\_a consists of a clock (CLK1) that is used by the module as a functional and interface clock. The clocks to Module 2 can be gated independently of the clock to Module 1, thus ensuring power savings when Module 2 is not in use. The PRCM module lets software check the status of the clock domain functional clocks. The CM\_&lt;Clock domain&gt;\_CLKSTCTRL[x] CLKACTIVITY\_&lt;FCLK/Clock name\_FCLK&gt; bit in the PRCM module identifies the state of the functional clock(s) within the clock domain. Table shows the possible states of the functional clock.

Table 8-7. Clock Domain Functional Clock States

| CLKACTIVITY BIT Value   | Status   | Description                                          |
|-------------------------|----------|------------------------------------------------------|
| 0x0                     | Gated    | The functional clock of the clock domain is inactive |
| 0x1                     | Active   | The functional clock of the clock domain is running  |

## 8.1.3.3.1 Clock Domain-Level Clock Management

The domain clock manager can automatically (that is, based on hardware conditions) and jointly manage the interface clocks within the clock domain. The functional clocks within the clock domain are managed through software settings. A clock domain can switch between three possible states: ACTIVE, IDLE\_TRANSITION, and INACTIVE. Figure 8-3 shows the sleep and wake-up transitions of the clock domain between ACTIVE and INACTIVE states.

Figure 8-3. Clock Domain State Transitions

<!-- image -->