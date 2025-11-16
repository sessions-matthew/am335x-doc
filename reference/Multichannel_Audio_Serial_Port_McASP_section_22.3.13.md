<!-- image -->

www.ti.com

## 22.3.13 Interrupts

## 22.3.13.1 Interrupt Multiplexing

The processor includes an interrupt controller (INTC) to manage CPU interrupts. The INTC maps the device events to 12 CPU interrupts. The McASP generates 4 interrupts to the processor.

The event inputs can be routed to 12 maskable interrupts to the CPU (INT[15:4]). The INTC interrupt selector allows the McASP system events to be routed to any of the 12 CPU interrupt inputs. Furthermore, the INTC provides status flags and allows the combination of events, as shown in Figure 22-34. You must properly configure the INTC by enabling, masking, and routing the McASP system events to the desired CPU interrupts.

<!-- image -->

## 22.3.13.2 Transmit Data Ready Interrupt

The transmit data ready interrupt (XDATA) is generated if XDATA is 1 in the XSTAT register and XDATA is also enabled in XINTCTL. Section 22.3.10.1.1 provides details on when XDATA is set in the XSTAT register.

A transmit start of frame interrupt (XSTAFRM) is triggered by the recognition of transmit frame sync. A transmit last slot interrupt (XLAST) is a qualified version of the data ready interrupt (XDATA). It has the same behavior as the data ready interrupt, but is further qualified by having the data requested belonging to the last slot (the slot that just ended was next-to-last TDM slot, current slot is last slot).

## 22.3.13.3 Receive Data Ready Interrupt

The receive data ready interrupt (RDATA) is generated if RDATA is 1 in the RSTAT register and RDATA is also enabled in RINTCTL. Section 22.3.10.1.2 provides details on when RDATA is set in the RSTAT register.

A receiver start of frame interrupt (RSTAFRM) is triggered by the recognition of a receiver frame sync. A receiver last slot interrupt (RLAST) is a qualified version of the data ready interrupt (RDATA). It has the same behavior as the data ready interrupt, but is further qualified by having the data in the buffer come from the last TDM time slot (the slot that just ended was last TDM slot).

## 22.3.13.4 Error Interrupts

Upon detection, the following error conditions generate interrupt flags:

- In the receive status register (RSTAT):
- -Receiver overrun (ROVRN).
- -Unexpected receive frame sync (RSYNCERR).
- -Receive clock failure (RCKFAIL).
- -Receive DMA error (RDMAERR).

- In the transmit status register (XSTAT):
- -Transmit underrun (XUNDRN).
- -Unexpected transmit frame sync (XSYNCERR).
- -Transmit clock failure (XCKFAIL).
- -Transmit DMA error (XDMAERR).

Each interrupt source also has a corresponding enable bit in the receive interrupt control register (RINTCTL) and transmit interrupt control register (XINTCTL). If the enable bit is set in RINTCTL or XINTCTL, an interrupt is requested when the interrupt flag is set in RSTAT or XSTAT. If the enable bit is not set, no interrupt request is generated. However, the interrupt flag may be polled.

## 22.3.13.5 Audio Mute (AMUTE) Function

The McASP includes an automatic audio mute function (Figure 22-35) that asserts in hardware the AMUTE pin to a preprogrammed output state, as selected by the MUTEN bit in the audio mute control register (AMUTE). The AMUTE pin is asserted when one of the interrupt flags is set or an external device issues an error signal on the AMUTEIN input. Typically, the AMUTEIN input is shared with a device interrupt pin (for example EXT\_INT4).

The AMUTEIN input allows the on-chip logic to consider a mute input from other devices in the system, so that all errors may be considered. The AMUTEIN input has a programmable polarity to allow it to adapt to different devices, as selected by the INPOL bit in AMUTE, and it must be enabled explicitly.

In addition to the external AMUTEIN input, the AMUTE pin output may be asserted when one of the error interrupt flags is set and its mute function is enabled in AMUTE.

When one or more of the errors is detected and enabled, the AMUTE pin is driven to an active state that is selected by MUTEN in AMUTE. The active polarity of the AMUTE pin is programmable by MUTEN (and the inactive polarity is the opposite of the active polarity). The AMUTE pin remains driven active until software clears all the error interrupt flags that are enabled to mute, and until the AMUTEIN is inactive.

Figure 22-35. Audio Mute (AMUTE) Block Diagram

<!-- image -->

<!-- image -->

www.ti.com