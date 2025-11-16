## 15.2 Enhanced PWM (ePWM) Module

## 15.2.1 Introduction

An effective PWM peripheral must be able to generate complex pulse width waveforms with minimal CPU overhead or intervention. It needs to be highly programmable and very flexible while being easy to understand and use. The ePWM unit described here addresses these requirements by allocating all needed timing and control resources on a per PWM channel basis. Cross coupling or sharing of resources has been avoided; instead, the ePWM is built up from smaller single channel modules with separate resources and that can operate together as required to form a system. This modular approach results in an orthogonal architecture and provides a more transparent view of the peripheral structure, helping users to understand its operation quickly.

In this chapter, the letter x within a signal or module name is used to indicate a generic ePWM instance on a device. For example, output signals EPWMxA and EPWMxB refer to the output signals from the ePWMx instance. Thus, EPWM1A and EPWM1B belong to ePWM1 and, likewise, EPWM2A and EPWM2B belong to ePWM2.

## 15.2.1.1 Submodule Overview

The ePWM module represents one complete PWM channel composed of two PWM outputs: EPWMxA and EPWMxB. Multiple ePWM modules are instanced within a device as shown in Figure 15-7. Each ePWM instance is identical with one exception. Some instances include a hardware extension that allows more precise control of the PWM outputs. This extension is the high-resolution pulse width modulator (HRPWM) and is described in Section 15.2.2.10. See Section 15.1.2 to determine which ePWM instances include this feature. Each ePWM module is indicated by a numerical value starting with 0. For example ePWM0 is the first instance and ePWM2 is the third instance in the system and ePWMx indicates any instance.

The ePWM modules are chained together via a clock synchronization scheme that allows them to operate as a single system when required. Additionally, this synchronization scheme can be extended to the capture peripheral modules (eCAP). The number of modules is device-dependent and based on target application needs. Modules can also operate stand-alone.

Each ePWM module supports the following features:

- Dedicated 16-bit time-base counter with period and frequency control
- Two PWM outputs (EPWMxA and EPWMxB) that can be used in the following configurations::
- -Two independent PWM outputs with single-edge operation
- -Two independent PWM outputs with dual-edge symmetric operation
- -One independent PWM output with dual-edge asymmetric operation
- Asynchronous override control of PWM signals through software.
- Programmable phase-control support for lag or lead operation relative to other ePWM modules.
- Hardware-locked (synchronized) phase relationship on a cycle-by-cycle basis.
- Dead-band generation with independent rising and falling edge delay control.
- Programmable trip zone allocation of both cycle-by-cycle trip and one-shot trip on fault conditions.
- A trip condition can force either high, low, or high-impedance state logic levels at PWM outputs.
- Programmable event prescaling minimizes CPU overhead on interrupts.
- PWM chopping by high-frequency carrier signal, useful for pulse transformer gate drives.

Each ePWM module is connected to the input/output signals shown in Figure 15-7. The signals are described in detail in subsequent sections.

The order in which the ePWM modules are connected may differ from what is shown in Figure 15-7. See Section 15.2.2.3.3.2 for the synchronization scheme for a particular device. Each ePWM module consists of seven submodules and is connected within a system via the signals shown in Figure 15-8.

<!-- image -->

<!-- image -->

www.ti.com

Figure 15-7. Multiple ePWM Modules

<!-- image -->

NOTE: Figure 15-7 is a generic block diagram. For specific implementation, see Section 15.1.2.1, PWMSS Synchronization Detail .

<!-- image -->

Figure 15-8. Submodules and Signal Connections for an ePWM Module

<!-- image -->

Figure 15-9 shows more internal details of a single ePWM module. The main signals used by the ePWM module are:

- PWM output signals (EPWMxA and EPWMxB). The PWM output signals are made available external to the device through the GPIO peripheral described in the system control and interrupts guide for your device.
- Trip-zone signals (TZ1 to TZn). These input signals alert the ePWM module of an external fault condition. Each module on a device can be configured to either use or ignore any of the trip-zone signals. The trip-zone signal can be configured as an asynchronous input through the GPIO peripheral. See Section 15.1.2 to determine how many trip-zone pins are available in the device.
- Time-base synchronization input (EPWMxSYNCI) and output (EPWMxSYNCO) signals. The synchronization signals daisy chain the ePWM modules together. Each module can be configured to either use or ignore its synchronization input. The clock synchronization input and output signal are brought out to pins only for ePWM0 (ePWM module #0). The synchronization output for ePWM2 (EPWM2SYNCO) is also connected to the SYNCI of the first enhanced capture module (eCAP0).
- Peripheral Bus. The peripheral bus is 32-bits wide and allows both 16-bit and 32-bit writes to the ePWM register file.

Figure 15-9 also shows the key internal submodule interconnect signals. Each submodule is described in Section 15.2.2.

<!-- image -->

www.ti.com

Figure 15-9. ePWM Submodules and Critical Internal Signal Interconnects

<!-- image -->