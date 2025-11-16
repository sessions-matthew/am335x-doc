<!-- image -->

www.ti.com

The CPGMAC does not source the transmit error (MTXERR) signal. Any transmit frame from the CPGMAC with an error (that is, underrun) will be indicated as an error by an error CRC. Transmit error is assumed to be deasserted at all times and is not an input into the CPRGMII module.

The RGMII0/1\_ID\_MODE bit value in the GMII\_SEL register should only be set to 1 for 'no internal delay'. The device does not support internal delay mode for RGMII.

## 14.3.7 Common Platform Time Sync (CPTS)

The CPTS module is used to facilitate host control of time sync operations. It enables compliance with the IEEE 1588-2008(v2) standard for a precision clock synchronization protocol.

## 14.3.7.1 Architecture

Figure 14-10. CPTS Block Diagram

<!-- image -->

Figure 14-10 shows the architecture of the CPTS module inside the 3PSW Ethernet Subsystem. Time stamp values for every packet transmitted or received on either port of the 3PSW are recorded. At the same time, each packet is decoded to determine if it is a valid time sync event. If so, an event is loaded into the Event FIFO for processing containing the recorded time stamp value when the packet was transmitted or received.

In addition, both hardware (HWx\_TS\_PUSH) and software (TS\_PUSH) can be used to read the current time stamp value though the Event FIFO

The reference clock used for the time stamp (RCLK) is sourced from one of the two sources, as shown in Figure 14-10. The source can be selected by configuring the CM\_CPTS\_RFT\_CLKSEL register in the Control Module. For more details, see Chapter 9, Control Module .

## 14.3.7.2 Time Sync Overview

The CPTS module is used to facilitate host control of time sync operations. The CPTS collects time sync events and then presents them to the host for processing. There are five types of time sync events (ethernet receive event, ethernet transmit event, time stamp push event, time stamp rollover event, and time stamp half-rollover event). Each ethernet port can cause transmit and receive events. The time stamp push is initiated by software.

## 14.3.7.2.1 Time Sync Initialization

The CPTS module should be configured as shown:

- Complete the reset sequence (VBUSP\_RST\_N) to reset the module.
- Write the rftclk\_sel[4:0] value in the RFTCLK\_Sel register with the desired reference clock multiplexor value. This value is allowed to be written only when the cpts\_en bit is cleared to zero.
- Write a one to the cpts\_en bit in the TS\_Control register. The RCLK domain is in reset while this bit is low.
- Enable the interrupt by writing a one to the ts\_pend\_en bit in the TS\_Int\_Enable register (if using interrupts and not polling).

## 14.3.7.2.2 Time Stamp Value

The time stamp value is a 32-bit value that increments on each RCLK rising edge when CPTS\_EN is set to one. When CPTS\_EN is cleared to zero the time stamp value is reset to zero. If more than 32-bits of time stamp are required by the application, the host software must maintain the necessary number of upper bits. The upper time stamp value should be incremented by the host when the rollover event is detected.

For test purposes, the time stamp can be written via the time stamp load function (CPTS\_LOAD\_VAL and CPTS\_LOAD\_EN registers).

## 14.3.7.2.3 Event FIFO

All time sync events are pushed onto the Event FIFO. There are 16 locations in the event FIFO with no overrun indication supported. Software must service the event FIFO in a timely manner to prevent FIFO overrun.

## 14.3.7.2.4 Time Sync Events

Time Sync events are 64-bit values that are pushed onto the event FIFO and read in two 32-bit reads. CPTS\_EVENT\_LOW and CPTS\_EVENT\_HIGH are defined in Section 14.5.3.10 and Section 14.5.3.11, respectively.

There are six types of sync events

- Time stamp push event
- Hardware time stamp push event
- Time stamp counter rollover event
- Time stamp counter half-rollover event
- Ethernet receive event
- Ethernet transmit event

## 14.3.7.2.4.1 Time Stamp Push Event

Software can obtain the current time stamp value (at the time of the write) by initiating a time stamp push event. The push event is initiated by setting the TS\_PUSH bit of the CPTS\_TS\_PUSH register. The time stamp value is returned in the event, along with a time stamp push event code. Software should not push a second time stamp event on to the FIFO until the first time stamp value has been read from the event FIFO.

<!-- image -->

<!-- image -->

www.ti.com

## 14.3.7.2.4.2 Time Stamp Counter Rollover Event

The CPTS module contains a 32-bit time stamp value. The counter upper bits are maintained by host software. The rollover event indicates to software that the time stamp counter has rolled over from 0xFFFF\_FFFF to 0x0000\_0000, and the software maintained upper count value should be incremented.

## 14.3.7.2.4.3 Time Stamp Counter Half-Rollover Event

The CPTS includes a time stamp counter half-rollover event. The half-rollover event indicates to software that the time stamp value has incremented from 0x7FFF\_FFFF to 0x8000\_0000. The half-rollover event is included to enable software to correct a misaligned event condition.The half-rollover event is included to enable software to determine the correct time for each event that contains a valid time stamp value - such as an Ethernet event. If an Ethernet event occurs around a counter rollover (full rollover), the rollover event could possibly be loaded into the event FIFO before the Ethernet event, even though the Ethernet event time was actually taken before the rollover. Figure 3 below shows a misalignment condition.

This misaligned event condition arises because an ethernet event time stamp occurs at the beginning of a packet and time passes before the packet is determined to be a valid synchronization packet. The misaligned event condition occurs if the rollover occurs in the middle, after the packet time stamp has been taken, but before the packet has been determined to be a valid time sync packet.

Figure 14-11. Event FIFO Misalignment Condition

<!-- image -->

Host software must detect and correct for misaligned event conditions. For every event after a rollover and before a half-rollover, software must examine the time stamp most significant bit. If bit 31 of the time stamp value is low (0x0000\_0000 through 0x7FFF\_FFFF), then the event time stamp was taken after the rollover and no correction is required.

If the value is high (0x8000\_0000 through 0xFFFF\_FFFF), the time stamp value was taken before the rollover and a misalignment is detected. The misaligned case indicates to software that it must subtract one from the upper count value stored in software to calculate the correct time for the misaligned event.The misaligned event occurs only on the rollover boundary and not on the half-rollover boundary. Software only needs to check for misalignment from a rollover event to a half-rollover event.

## 14.3.7.2.4.4 Hardware Time Stamp Push Event

There are four hardware time stamp inputs (HW1/4\_TS\_PUSH) that can cause hardware time stamp push events to be loaded into the Event FIFO. Each hardware time stamp input is internally connected to the PORTIMERPWM output of each timer as shown in Figure 4.

Figure 14-12. HW1/4\_TSP\_PUSH Connection

<!-- image -->

The event is loaded into the event FIFO on the rising edge of the timer, and the PORT\_NUMBER field in the EVENT\_HIGH register indicates the hardware time stamp input that caused the event.

Each hardware time stamp input must be asserted for at least 10 periods of the selected RCLK clock. Each input can be enabled or disabled by setting the respective bits in the CONTROL register.

Hardware time stamps are intended to be an extremely low frequency signals, such that the event FIFO does not overrun. Software must keep up with the event FIFO and ensure that there is no overrun, or events will be lost.

## 14.3.7.2.4.5 Ethernet Port Events

## 14.3.7.2.4.5.1 Ethernet Port Receive Event

Each ethernet port can generate a receive ethernet event. Receive ethernet events are generated for valid received time sync packets. There are two CPTS interfaces for each ethernet receive port. The first is the Px\_TS\_RX\_MII interface and the second is the Px\_TS\_RX\_DEC interface. Information from these interfaces is used to generates an ethernet receive event for each ethernet time sync packet received on the associated port.

The Px\_TS\_RX\_MII interface issues a record signal (pX\_ts\_rx\_mii\_rec) along with a handle (pX\_ts\_rx\_mii\_hndl) for each packet (every packet) that is received on the associated ethernet port. The record signal is a single clock pulse indicating that a receive packet has been detected at the associated port MII interface. The handle value is incremented with each packet and rolls over to zero after 15.

There are 16 possible handle values so there can be a maximum of 16 packets 'in flight' from the TS\_RX\_MII to the TS\_RX\_DEC block at any given time. A handle value is reused (not incremented) for any received packet that is shorter than about 31 octets (including preamble). Handle reuse on short packets prevents any possible overrun condition (more than 16 'in flight' packets) if multiple fragments are consecutively received.

<!-- image -->

<!-- image -->

## www.ti.com

Valid receive ethernet time sync events are signaled to the CPTS via the Px\_TS\_RX\_DEC interface. When the pX\_ts\_rx\_dec\_evnt is asserted, a valid event is detected and will be loaded into the event FIFO. Only valid receive time sync packets are indicated on the Px\_TS\_RX\_DEC interface. The pX\_ts\_rx\_dec\_hndl, pX\_ts\_rx\_dec\_msg\_type, and pX\_ts\_rx\_dec\_seq\_id signals are registered on an asserted pX\_ts\_rx\_dec\_evnt. When a Tx\_TS\_RX\_DEC event is asserted, the handle value is used to retrieve the time stamp that was loaded with the same handle value from the Px\_TS\_RX\_MII interface.

## 14.3.7.2.4.5.2 Ethernet Port Transmit Event

Each ethernet port can generate a transmit ethernet event. Transmit ethernet events are generated for valid transmitted time sync packets. There are two CPTS interfaces for each ethernet transmit port. The first is the Px\_TS\_TX\_DEC interface and the second is the Px\_TS\_TX\_MII interface. Information from these interfaces is used to generates an ethernet transmit event for each ethernet time sync packet transmitted on the associated port.

Valid ethernet transmit time sync events are signaled to the CPTS via the Px\_TS\_TX\_DEC interface. When the pX\_ts\_tx\_dec\_evnt signal is asserted, a valid time sync event has been detected and will be loaded into the event FIFO. Only valid transmit time sync packets are indicated on the Px\_TS\_RX\_DEC interface. The pX\_ts\_tx\_dec\_hndl, pX\_ts\_tx\_dec\_msg\_type, pX\_ts\_tx\_dec\_seq\_id signals are registered on an asserted pX\_ts\_tx\_dec\_evnt.

The time stamp for the event will be generated and signaled from the Px\_TS\_TX\_MII interface when the packet is actually transmitted. The event will be loaded into the event FIFO when the time stamp is recorded as controlled by the Px\_TS\_TX\_MII interface. The handle value is incremented with each time sync event packet and rolls over to zero after 7. There are 8 possible handle values so there can be a maximum of 8 time sync event packets 'in flight' from the TS\_TX\_DEC to the TS\_TX\_MII block at any given time. The handle value increments only on time sync event packets.

The Px\_TS\_TX\_MII interface issues a single clock record signal (pX\_ts\_tx\_mii\_rec) at the beginning of each transmitted packet. If the packet is a time sync event packet then a single clock event signal (pX\_ts\_tx\_mii\_evnt) along with a handle (pX\_ts\_rx\_mii\_hndl) will be issued before the next record signal for the next transmitted packet. The event signal will not be issued for packets that were not indicated as valid time sync event packets on the Px\_TS\_TX\_DEC interface. If consecutive record indications occur without an interleaving event indication, then the packet associated with the first record was not a time sync event packet. The record signal is a single clock pulse indicating that a transmit packet egress has been detected at the associated port MII interface.

Table 14-20. Values of messageType field

| Message Type          | Value (hex)   |
|-----------------------|---------------|
| Sync                  | 0             |
| Delay_Req             | 1             |
| Pdelay_Req            | 2             |
| Pdelay_Resp           | 3             |
| Reserved              | 4-7           |
| Follow_Up             | 8             |
| Delay_Resp            | 9             |
| Pdelay_Resp_Follow_Up | A             |
| Announce              | B             |
| Signaling             | C             |
| Management            | D             |
| Reserved              | E-F           |