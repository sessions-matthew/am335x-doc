<!-- image -->

www.ti.com

## 26.1.13 Wakeup

## 26.1.13.1 Overview

The device supports a comprehensive set of low-powered states to meet aggressive power budget requirements. The different low-power modes supported, from the lowest power consumption state to the highest power consumption state, include:

- RTC Only
- DeepSleep 0
- DeepSleep 1
- Standby
- Active

Of these states, the ROM code is involved only in the first three, as the A8 registers (particularly the PC) are preserved in all the other states. So for these modes, on wake up, execution will resume from the next instruction following the WFI.

In the RTC only mode, the ROM code involvement is trivial. A wakeup from the RTC only mode, from the ROM perspective, is indistinguishable from a power on reset. In DeepSleep 0 and DeepSleep 1 state, the ROM code should detect whether wakeup has occurred and branch to a user-defined return address rather than perform a full boot.

## 26.1.13.2 Wakeup Booting by ROM Code

In this device, when the A8 is in OFF mode, execution begins from the reset vector on wakeup. As the reset vector lies in the ROM code, the ROM code is the first software entity that takes control of the A8 on a wakeup.

It must be noted here that in the device, in all the modes other than RTC-only, the L3 OCMC RAM is held in retention. This is a fundamental assumption of the ROM code. Because the contents of this RAM is not lost in the DeepSleep modes, it is possible to return to a location in this memory.

This does away with the need of the ROM having to restore PLL and EMIF settings, which would have been needed if the ROM had to return to a DRAM address, as DRAM is held in self-refresh. The job of dialing up the PLLs and restoring EMIF and other peripheral register values is the responsibility of the user code. The recommendation is that such restoration code be placed in the OCMC RAM so that the wakeup procedure is compatible between secure and non-secure devices.

In the past, having complex PLL and EMIF restore code in the ROM has made wakeup debugging very complicated. This has also traditionally been a source of many bugs, as the wakeup procedures are complicated and difficult to test exhaustively in pre-silicon.

The current architecture does away with these problems. The flow in the ROM on wakeup is kept simple and minimal. It only involves identifying that the reset reason is a Wakeup, and then branching to a return address, rather than proceeding with a full boot. This also helps in improving the time required to wakeup a system that is in Deep Sleep.

Figure 26-34. Wakeup Booting by ROM

<!-- image -->

Figure 26-35. Wakeup Booting by ROM

<!-- image -->

<!-- image -->