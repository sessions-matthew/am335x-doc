## 26.1 Functional Description

This chapter describes the booting functionality of the device, referred hereafter as ROM Code. The booting functionality covers the following features:

Memory Booting: Booting the device by starting code stored on permanent memories like flash-memory or memory cards. This process is usually performed after either device cold or warm reset.

Peripheral Booting: Booting the device by downloading the executable code over a communication interface like UART, USB or Ethernet. This process is intended for flashing a device.

The device always starts up in secure mode. The ROM Code takes care of early initialization. The ROM code switches the device into public mode. Hence the Public ROM Code provides run-time services for cache maintenance.

## 26.1.1 Device Types

This device has two types of production devices: a high-secure (HS) device and a general-purpose (GP) device. The fundamental difference between these two types of production devices is the approach to secure booting. The HS Device doesn't allow booting code which is not trusted (authenticated, that is digitally signed and checked for integrity). On the other hand the GP Device has its security features disabled and does not require signed code for booting the device. Image formats are different depending on the device type and described in this chapter.

## 26.1.2 Architecture

The architecture of the Public ROM Code is shown in Figure 26-1. It is split into three main layers with a top-down approach: high-level, drivers, and hardware abstraction layer (HAL). One layer communicates with a lower level layer through a unified interface.

The high level layer is in charge of the main tasks of the Public ROM Code: watchdog and clocks configuration and main booting routine.

The drivers layer implements the logical and communication protocols for any booting device in accordance with the interface specification.

Finally the HAL implements the lowest level code for interacting with the hardware infrastructure IPs. End booting devices are attached to device IO pads.

<!-- image -->