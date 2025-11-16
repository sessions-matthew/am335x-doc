<!-- image -->

www.ti.com

## 22.3.13.6 Multiple Interrupts

This only applies to interrupts and not to DMA requests. The following terms are defined:

- Active Interrupt Request: a flag in RSTAT or XSTAT is set and the interrupt is enabled in RINTCTL or XINTCTL.
- Outstanding Interrupt Request: An interrupt request has been issued on one of the McASP transmit/receive interrupt ports, but that request has not yet been serviced.
- Serviced: The CPU writes to RSTAT or XSTAT to clear one or more of the active interrupt request flags.

The first interrupt request to become active for the transmitter with the interrupt flag set in XSTAT and the interrupt enabled in XINTCTL generates a request on the McASP transmit interrupt port AXINT.

If more than one interrupt request becomes active in the same cycle, a single interrupt request is generated on the McASP transmit interrupt port. Subsequent interrupt requests that become active while the first interrupt request is outstanding do not immediately generate a new request pulse on the McASP transmit interrupt port.

The transmit interrupt is serviced with the CPU writing to XSTAT. If any interrupt requests are active after the write, a new request is generated on the McASP transmit interrupt port.

The receiver operates in a similar way, but using RSTAT, RINTCTL, and the McASP receive interrupt port ARINT.

One outstanding interrupt request is allowed on each port, so a transmit and a receive interrupt request may both be outstanding at the same time.

## 22.3.14 EDMA Event Support

## 22.3.14.1 EDMA Events

There are 6 EDMA events.

## 22.3.14.2 Using the DMA for McASP Servicing

The most typical scenario is to use the DMA to service the McASP through the data port, although the DMA can also service the McASP through the configuration bus. Two possibilities exist for using the DMA events to service the McASP:

1. Use AXEVT/AREVT : Triggered upon each XDATA/RDATA transition from 0 to 1.
2. Use AXEVTO/AREVTO and AXEVTE/AREVTE : Alternating AXEVT/AREVT events for odd/even slots. Upon AXEVT/AREVT, AXEVTO/AREVTO is triggered if the event is for an odd channel, and AXEVTE/AREVTE is triggered if the event is for an even channel.

NOTE:

Check the device-specific data manual to see if AXEVTO/AREVTO and AXEVTE/AREVTE are supported. These are optional.

Figure 22-36 and Figure 22-37 show an example audio system with six audio channels (LF, RF, LS, RS, C, and LFE) transmitted from three AXRn pins on the McASP. Figure 22-36 and Figure 22-37 show when events AXEVT, AXEVTO, and AXEVTE are triggered. Figure 22-36 and Figure 22-37 also apply for the receive audio channels and show when events AREVT, AREVTO, and AREVTE are triggered.

You can either use the DMA to service the McASP upon events AXEVT and AREVT (Figure 22-36) or upon events AXEVTO, AREVTO, AXEVTE, and AREVTE (Figure 22-37).

<!-- image -->

<!-- image -->

Figure 22-37. DMA Events in an Audio Example-Four Events (Scenario 2)

<!-- image -->

In scenario 1 (Figure 22-36), a DMA event AXEVT/AREVT is triggered on each time slot. In the example, AXEVT is triggered for each of the transmit audio channel time slot (Time slot for channels LF, LS, and C; and time slot for channels RF, RS, LFE). Similarly, AREVT is triggered for each of the receive audio channel time slot. Scenario 1 allows for the use of a single DMA to transmit all audio channels, and a single DMA to receive all audio channels.

In scenario 2 (Figure 22-37), two alternating DMA events are triggered for each time slot. In the example, AXEVTE (even) is triggered for the time slot for the even audio channels (LF, LS, C) and AXEVTO (odd) is triggered for the time slot for the odd audio channels (RF, RS, LFE). AXEVTO and AXEVTE alternate in time. The same is true in the receive direction with the use of AREVTO and AREVTE. This scenario allows for the use of two DMA channels (odd and even) to transmit all audio channels, and two DMA channels to receive all audio channels.