<!-- image -->

www.ti.com

## 25.3 Functional Description

This section discusses the operational details and basic functions of the GPIO peripheral.

## 25.3.1 Operating Modes

Four operating modes are defined for the module:

- Active mode: the module is running synchronously on the interface clock, interrupt can be generated according to the configuration and the external signals.
- Idle mode: the module is in a waiting state, interface clock can be stopped , no interrupt can be generated, a wake-up signal can be generated according to the configuration and external signals. Check the chip top-level functional specification for the availability of the debouncing clock while in Idle mode. If the debouncing clock is active, the debouncing cell can be used to sample and to filter the input to generate a wakeup event. Otherwise (debouncing clock inactive), the debouncing cell cannot be used, as it would gate all input signals.
- Inactive mode: the module has no activity, interface clock can be stopped, no interrupt can be generated, and the wake-up feature is inhibited.
- Disabled mode: the module is not used, internal clock paths are gated, no interrupt or wake-up request can be generated.

The Idle and Inactive modes are configured within the module and activated on request by the host processor through system interface sideband signals. The Disabled mode is set by software through a dedicated configuration bit. It unconditionally gates the internal clock paths not use for the system interface. All module registers are 8, 16 or 32-bit accessible through the OCP compatible interface (little endian encoding). In active mode, the event detection (level or transition) is performed in the GPIO module using the interface clock. The detection's precision is set by the frequency of this clock and the selected internal gating scheme.

## 25.3.2 Clocking and Reset Strategy

## 25.3.2.1 Clocks

GPIO module runs using two clocks:

- The debouncing clock is used for the debouncing sub-module logic (without the corresponding configuration registers). This module can sample the input line and filters the input level using a programmed delay.
- The interface clock provided by the peripheral bus (OCP compatible system interface). It is used through the entire GPIO module (except within the debouncing sub-module logic). It clocks the OCP interface and the internal logic. Clock gating features allow adapting the module power consumption to the activity.

## 25.3.2.2 Clocks, Gating and Active Edge Definitions

The interface clock provided by the peripheral bus (OCP compatible system interface) is used through the entire GPIO module. Two clock domains are defined: the OCP interface and the internal logic. Each clock domain can be controlled independently. Sampling operations for the data capture and for the events detection are done using the rising edge. The data loaded in the data output register (GPIO\_DATAOUT) is set at the output GPIO pins synchronously with the rising edge of the interface clock.

Five clock gating features are available:

- Clock for the system interface logic can be gated when the module is not accessed, if the AUTOIDLE configuration bit in the system configuration register (GPIO\_SYSCONFIG) is set. Otherwise, this logic is free running on the interface clock.
- Clock for the input data sample logic can be gated when the data in register is not accessed.
- Four clock groups are used for the logic in the synchronous events detection. Each 8 input GPIO\_V2 pins group will have a separate enable signal depending on the edge/level detection register setting. If a group requires no detection, then the corresponding clock will be gated. All channels are also gated using a 'one out of N' scheme. N can take the values 1, 2, 4 or 8. The interface clock is enabled for