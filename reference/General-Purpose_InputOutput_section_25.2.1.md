## 25.2 Integration

The device instantiates four GPIO\_V2 modules. Each GPIO module provides the support for 32 dedicated pins with input and output configuration capabilities. Input signals can be used to generate interruptions and wake-up signal. Two Interrupt lines are available for bi-processor operation. Pins can be dedicated to be used as a keyboard controller.

With four GPIO modules, the device allows for a maximum of 128 GPIO pins. (The exact number available varies as a function of the device configuration and pin muxing.) GPIO0 is in the Wakeup domain and may be used to wakeup the device via external sources. GPIO[1:3] are located in the peripheral domain.

Figure 25-1 and Figure 25-2 show the GPIO integration.

Figure 25-1. GPIO0 Module Integration

<!-- image -->

Figure 25-2. GPIO[1-3] Module Integration

<!-- image -->

## 25.2.1 GPIO Connectivity Attributes

The general connectivity attributes for the GPIO modules in the device are shown in Table 25-1 and Table 25-2.

<!-- image -->