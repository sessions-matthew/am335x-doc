## 23.3.16 CAN Bit Timing

The DCAN supports bit rates between less than 1 kBit/s and 1000 kBit/s.

Each member of the CAN network has its own clock generator, typically derived from a crystal oscillator. The bit timing parameters can be configured individually for each CAN node, creating a common bit rate even though the CAN nodes' oscillator periods (f osc ) may be different.

The frequencies of these oscillators are not absolutely stable. Small variations are caused by changes in temperature or voltage and by deteriorating components. As long as the variations remain inside a specific oscillator tolerance range (df), the CAN nodes are able to compensate for the different bit rates by resynchronizing to the bit stream.

In many cases, the CAN bit synchronization will amend a faulty configuration of the CAN bit timing to such a degree that only occasionally an error frame is generated. In the case of arbitration however, when two or more CAN nodes simultaneously try to transmit a frame, a misplaced sample point may cause one of the transmitters to become error passive.

The analysis of such sporadic errors requires a detailed knowledge of the CAN bit synchronization inside a CAN node and of the CAN nodes' interaction on the CAN bus.

Even if minor errors in the configuration of the CAN bit timing do not result in immediate failure, the performance of a CAN network can be reduced significantly.

## 23.3.16.1 Bit Time and Bit Rate

According to the CAN specification, the bit time is divided into four segments (see Figure 23-13):

- Synchronization segment (Sync\_Seg)
- Propagation time segment (Prop\_Seg)
- Phase buffer segment 1 (Phase\_Seg1)
- Phase buffer segment 2 (Phase\_Seg2)

## Figure 23-13. Bit Timing

<!-- image -->

Each segment consists of a specific number of time quanta. The length of one time quantum (t q ), which is the basic time unit of the bit time, is given by the CAN\_CLK and the baud rate prescalers (BRPE and BRP). With these two baud rate prescalers combined, divider values from 1 to 1024 can be programmed:

t q = Baud Rate Prescaler / CAN\_CLK

Apart from the fixed length of the synchronization segment, these numbers are programmable. Table 23-7 describes the minimum programmable ranges required by the CAN protocol.

A given bit rate may be met by different bit time configurations.

<!-- image -->

<!-- image -->

www.ti.com

Table 23-7. Parameters of the CAN Bit Time

| Parameter                        | Range         | Remark                                             |
|----------------------------------|---------------|----------------------------------------------------|
| Sync_Seg                         | 1 t q (fixed) | Synchronization of bus input to CAN_CLK            |
| Prop_Seg                         | [1 …8] t q    | Compensates for the physical delay times           |
| Phase_Seg1                       | [1 …8] t q    | May be lengthened temporarily by synchronization   |
| Phase_Seg2                       | [1 …8] t q    | May be shortened temporarily by synchronization    |
| Synchronization Jump Width (SJW) | [1 …4] t q    | May not be longer than either Phase Buffer Segment |

NOTE:

For proper functionality of the CAN network, the physical delay times and the oscillator's tolerance range have to be considered.

## 23.3.16.1.1 Synchronization Segment

The synchronization segment (Sync\_Seg) is the part of the bit time where edges of the CAN bus level are expected to occur. If an edge occurs outside of Sync\_Seg, its distance to the Sync\_Seg is called the phase error of this edge.

## 23.3.16.1.2 Propagation Time Segment

This part of the bit time is used to compensate physical delay times within the CAN network. These delay times consist of the signal propagation time on the bus and the internal delay time of the CAN nodes.

Any CAN node synchronized to the bit stream on the CAN bus can be out of phase with the transmitter of the bit stream, caused by the signal propagation time between the two nodes. The CAN protocol's nondestructive bitwise arbitration and the dominant acknowledge bit provided by receivers of CAN messages require that a CAN node transmitting a bit stream must also be able to receive dominant bits transmitted by other CAN nodes that are synchronized to that bit stream. The example in Figure 23-14 shows the phase shift and propagation times between two CAN nodes.

Figure 23-14. The Propagation Time Segment

<!-- image -->

Delay A\_to\_B &gt;= node output delay(A) + bus line delay(AÆB) + node input delay(B)

Prop\_Seg &gt;= Delay A\_to\_B + Delay B\_to\_A

Prop\_Seg &gt;= 2 • [max(node output delay+ bus line delay + node input delay)]

<!-- image -->

In this example, both nodes A and B are transmitters performing an arbitration for the CAN bus. The node A has sent its start of frame bit less than one bit time earlier than node B, therefore node B has synchronized itself to the received edge from recessive to dominant. Since node B has received this edge delay(A\_to\_B) after it has been transmitted, node B's bit timing segments are shifted with regard to node A. Node B sends an identifier with higher priority and so it will win the arbitration at a specific identifier bit when it transmits a dominant bit while node A transmits a recessive bit. The dominant bit transmitted by node B will arrive at node A after the delay (B\_to\_A).

Due to oscillator tolerances, the actual position of node A's sample point can be anywhere inside the nominal range of node A's Phase Buffer Segments, so the bit transmitted by node B must arrive at node A before the start of Phase\_Seg1. This condition defines the length of Prop\_Seg.

If the edge from recessive to dominant transmitted by node B would arrive at node A after the start of Phase\_Seg1, it could happen that node A samples a recessive bit instead of a dominant bit, resulting in a bit error and the destruction of the current frame by an error flag.

This error only occurs when two nodes arbitrate for the CAN bus which have oscillators of opposite ends of the tolerance range and are separated by a long bus line; this is an example of a minor error in the bit timing configuration (Prop\_Seg too short) that causes sporadic bus errors.

Some CAN implementations provide an optional 3 Sample Mode. The DCAN does not. In this mode, the CAN bus input signal passes a digital low-pass filter, using three samples and a majority logic to determine the valid bit value. This results in an additional input delay of 1 t q , requiring a longer Prop\_Seg.

## 23.3.16.1.3 Phase Buffer Segments and Synchronization

The phase buffer segments (Phase\_Seg1 and Phase\_Seg2) and the synchronization jump width (SJW) are used to compensate for the oscillator tolerance.

The phase buffer segments surround the sample point and may be lengthened or shortened by synchronization.

The synchronization jump width (SJW) defines how far the resynchronizing mechanism may move the sample point inside the limits defined by the phase buffer segments to compensate for edge phase errors.

Synchronizations occur on edges from recessive to dominant. Their purpose is to control the distance between edges and sample points.

Edges are detected by sampling the actual bus level in each time quantum and comparing it with the bus level at the previous sample point. A synchronization may be done only if a recessive bit was sampled at the previous sample point and if the actual time quantum's bus level is dominant.

An edge is synchronous if it occurs inside of Sync\_Seg; otherwise, its distance to the Sync\_Seg is the edge phase error, measured in time quanta. If the edge occurs before Sync\_Seg, the phase error is negative, else it is positive.

Two types of synchronization exist: hard synchronization and resynchronizing. A hard synchronization is done once at the start of a frame; inside a frame, only resynchronization is possible.

- Hard Synchronization

After a hard synchronization, the bit time is restarted with the end of Sync\_Seg, regardless of the edge phase error. Thus hard synchronization forces the edge which has caused the hard synchronization, to lie within the synchronization segment of the restarted bit time.

- Bit Resynchronizations

Resynchronization leads to a shortening or lengthening of the Bit time such that the position of the sample point is shifted with regard to the edge.

When the phase error of the edge which causes resynchronization is positive, Phase\_Seg1 is lengthened. If the magnitude of the phase error is less than SJW, Phase\_Seg1 is lengthened by the magnitude of the phase error, else it is lengthened by SJW.

When the phase error of the edge which causes Resynchronization is negative, Phase\_Seg2 is shortened. If the magnitude of the phase error is less than SJW, Phase\_Seg2 is shortened by the magnitude of the phase error, else it is shortened by SJW.

<!-- image -->

## www.ti.com

If the magnitude of the phase error of the edge is less than or equal to the programmed value of SJW, the results of hard synchronization and resynchronization are the same. If the magnitude of the phase error is larger than SJW, the resynchronization cannot compensate the phase error completely, and an error of (phase error - SJW) remains.

Only one synchronization may be done between two sample points. The synchronizations maintain a minimum distance between edges and sample points, giving the bus level time to stabilize and filtering out spikes that are shorter than (Prop\_Seg + Phase\_Seg1).

Apart from noise spikes, most synchronizations are caused by arbitration. All nodes synchronize 'hard' on the edge transmitted by the 'leading' transceiver that started transmitting first, but due to propagation delay times, they cannot become ideally synchronized. The leading transmitter does not necessarily win the arbitration; therefore, the receivers have to synchronize themselves to different transmitters that subsequently take the lead and that are differently synchronized to the previously leading transmitter. The same happens at the acknowledge field, where the transmitter and some of the receivers will have to synchronize to that receiver that takes the lead in the transmission of the dominant acknowledge bit.

Synchronizations after the end of the arbitration will be caused by oscillator tolerance, when the differences in the oscillator's clock periods of transmitter and receivers sum up during the time between synchronizations (at most ten bits). These summarized differences may not be longer than the SJW, limiting the oscillator's tolerance range.

Figure 23-15 shows how the phase buffer segments are used to compensate for phase errors. There are three drawings of each two consecutive bit timings. The upper drawing shows the synchronization on a 'late' edge, the lower drawing shows the synchronization on an 'early' edge, and the middle drawing is the reference without synchronization.

Figure 23-15. Synchronization on Late and Early Edges

<!-- image -->

In the first example, an edge from recessive to dominant occurs at the end of Prop\_Seg. The edge is "late" since it occurs after the Sync\_Seg. Reacting to the late edge, Phase\_Seg1 is lengthened so that the distance from the edge to the sample point is the same as it would have been from the Sync\_Seg to the sample point if no edge had occurred. The phase error of this late edge is less than SJW, so it is fully compensated and the edge from dominant to recessive at the end of the bit, which is one nominal bit time long, occurs in the Sync\_Seg.

In the second example, an edge from recessive to dominant occurs during Phase\_Seg2. The edge is "early" since it occurs before a Sync\_Seg. Reacting to the early edge, Phase\_Seg2 is shortened and Sync\_Seg is omitted, so that the distance from the edge to the sample point is the same as it would have been from a Sync\_Seg to the sample point if no edge had occurred. As in the previous example, the magnitude of this early edge's phase error is less than SJW, so it is fully compensated.

<!-- image -->

The phase buffer segments are lengthened or shortened temporarily only; at the next bit time, the segments return to their nominal programmed values.

In these examples, the bit timing is seen from the point of view of the CAN implementation's state machine, where the bit time starts and ends at the sample points. The state machine omits Sync\_Seg when synchronizing on an early edge because it cannot subsequently redefine that time quantum of Phase\_Seg2 where the edge occurs to be the Sync\_Seg.

Figure 23-16 shows how short dominant noise spikes are filtered by synchronizations. In both examples, the spike starts at the end of Prop\_Seg and has the length of (Prop\_Seg + Phase\_Seg1).

In the first example, the synchronization jump width is greater than or equal to the phase error of the spike's edge from recessive to dominant. Therefore the sample point is shifted after the end of the spike; a recessive bus level is sampled.

In the second example, SJW is shorter than the phase error, so the sample point cannot be shifted far enough; the dominant spike is sampled as actual bus level.

Figure 23-16. Filtering of Short Dominant Spikes

<!-- image -->

## 23.3.16.1.4 Oscillator Tolerance Range

With the introduction of CAN protocol version 1.2, the option to synchronize on edges from dominant to recessive became obsolete. Only edges from recessive to dominant are considered for synchronization. The protocol update to version 2.0 (A and B) had no influence on the oscillator tolerance.

The tolerance range df for an oscillator's frequency f osc around the nominal frequency f nom with:

<!-- formula-not-decoded -->

depends on the proportions of Phase\_Seg1, Phase\_Seg2, SJW, and the bit time. The maximum tolerance df is the defined by two conditions (both shall be met):

<!-- formula-not-decoded -->

It has to be considered that SJW may not be larger than the smaller of the phase buffer segments and that the propagation time segment limits that part of the bit time that may be used for the phase buffer segments.

Recessive

<!-- image -->

www.ti.com

The combination Prop\_Seg = 1 and Phase\_Seg1 = Phase\_Seg2 = SJW = 4 allows the largest possible oscillator tolerance of 1.58%. This combination with a propagation time segment of only 10% of the bit time is not suitable for short bit times; it can be used for bit rates of up to 125 kBit/s (bit time = 8 μ s) with a bus length of 40 m.

## 23.3.16.2 DCAN Bit Timing Registers

In the DCAN, the bit timing configuration is programmed in two register bytes, additionally a third byte for a baud rate prescaler extension of four bits (BREP) is provided. The sum of Prop\_Seg and Phase\_Seg1 (as TSEG1) is combined with Phase\_Seg2 (as TSEG2) in one byte, SJW and BRP (plus BRPE in third byte) are combined in the other byte (see Figure 23-17).

Figure 23-17. Structure of the CAN Core's CAN Protocol Controller

<!-- image -->

In this bit timing register, the components TSEG1, TSEG2, SJW and BRP have to be programmed to a numerical value that is one less than its functional value; so instead of values in the range of [1…n], values in the range of [0…-1] are programmed. That way, e.g., SJW (functional range of [1…4]) is represented by only two bits.

Therefore, the length of the bit time is (programmed values) [TSEG1 + TSEG2 + 3] t q or (functional values) [Sync\_Seg + Prop\_Seg + Phase\_Seg1 + Phase\_Seg2] tq.

The data in the bit timing register (BTR) is the configuration input of the CAN protocol controller. The baud rate prescaler (configured by BRPE/BRP) defines the length of the time quantum (the basic time unit of the bit time); the bit timing logic (configured by TSEG1, TSEG2, and SJW) defines the number of time quanta in the bit time.

The processing of the bit time, the calculation of the position of the sample point, and occasional synchronizations are controlled by the bit timing state machine, which is evaluated once each time quantum. The rest of the CAN protocol controller, the bit stream processor (BSP) state machine, is evaluated once each bit time, at the sample point.

The shift register serializes the messages to be sent and parallelizes received messages. Its loading and shifting is controlled by the BSP. The BSP translates messages into frames and vice versa. It generates and discards the enclosing fixed format bits, inserts and extracts stuff bits, calculates and checks the CRC code, performs the error management, and decides which type of synchronization is to be used. It is evaluated at the sample point and processes the sampled bus input bit. The time after the sample point that is needed to calculate the next bit to be sent (e.g., data bit, CRC bit, stuff bit, error flag, or idle) is called the information processing time (IPT), which is 0 tq for the DCAN.

<!-- image -->

Generally, the IPT is CAN controller-specific, but may not be longer than 2 tq. The IPC length is the lower limit of the programmed length of Phase\_Seg2. In case of a synchronization, Phase\_Seg2 may be shortened to a value less than IPT, which does not affect bus timing.

## 23.3.16.2.1 Calculation of the Bit Timing Parameters

Usually, the calculation of the bit timing configuration starts with a desired bit rate or bit time. The resulting bit time (1 / Bit rate) must be an integer multiple of the CAN clock period.

NOTE:

8 MHz is the minimum CAN clock frequency required to operate the DCAN at a bit rate of 1 MBit/s.

The bit time may consist of 8 to 25 time quanta. The length of the time quantum t q is defined by the baud rate prescaler with t q = (Baud Rate Prescaler) / CAN\_CLK. Several combinations may lead to the desired bit time, allowing iterations of the following steps.

First part of the bit time to be defined is the Prop\_Seg. Its length depends on the delay times measured in the system. A maximum bus length as well as a maximum node delay has to be defined for expandible CAN bus systems. The resulting time for Prop\_Seg is converted into time quanta (rounded up to the nearest integer multiple of t q ).

The Sync\_Seg is 1 t q long (fixed), leaving (bit time - Prop\_Seg - 1) t q for the two Phase Buffer Segments. If the number of remaining t q is even, the Phase Buffer Segments have the same length, Phase\_Seg2 = Phase\_Seg1, else Phase\_Seg2 = Phase\_Seg1 + 1.

The minimum nominal length of Phase\_Seg2 has to be regarded as well. Phase\_Seg2 may not be shorter than any CAN controller's Information Processing Time in the network, which is device dependent and can be in the range of [0…2] t q .

The length of the synchronization jump width is set to its maximum value, which is the minimum of four (4) and Phase\_Seg1.

The oscillator tolerance range necessary for the resulting configuration is calculated by the formulas given in Section 23.3.16.2.3.

If more than one configurations are possible to reach a certain Bit rate, it is recommended to choose the configuration which allows the highest oscillator tolerance range.

CAN nodes with different clocks require different configurations to come to the same bit rate. The calculation of the propagation time in the CAN network, based on the nodes with the longest delay times, is done once for the whole network.

The CAN system's oscillator tolerance range is limited by the node with the lowest tolerance range.

The calculation may show that bus length or bit rate have to be decreased or that the oscillator frequencies' stability has to be increased in order to find a protocol compliant configuration of the CAN bit timing.

The resulting configuration is written into the bit timing register:

Tseg2 = Phase\_Seg2-1

Tseg1 = Phase\_Seg1+ Prop\_Seg-1

SJW = SynchronizationJumpWidth-1

BRP = Prescaler-1

## 23.3.16.2.2 Example for Bit Timing at High Baud Rate

In this example, the frequency of CAN\_CLK is 10 MHz, BRP is 0, the bit rate is 1 MBit/s.

<!-- image -->

## www.ti.com

| t q                       | 100 ns   | =   | t CAN_CLK                                                                                   |
|---------------------------|----------|-----|---------------------------------------------------------------------------------------------|
| delay of bus driver       | 60 ns    | =   |                                                                                             |
| delay of receiver circuit | 40 ns    | =   |                                                                                             |
| delay of bus line (40 m)  | 220 ns   | =   |                                                                                             |
| t Prop                    | 700 ns   | =   | INT (2*delays + 1) = 7 • t q                                                                |
| t SJW                     | 100 ns   | =   | 1 • t q                                                                                     |
| t TSeg1                   | 800 ns   | =   | t Prop + t SJW                                                                              |
| t TSeg2                   | 100 ns   | =   | Information Processing Time + 1 • t q                                                       |
| t Sync-Seg                | 100 ns   | =   | 1 • t q                                                                                     |
| bit time                  | 1000 ns  | =   | t Sync-Seg + t TSeg1 + t TSeg2                                                              |
| tolerance for CAN_CLK     | 0.43 %   | =   | /c40 /c41 /c40 /c41 /c40 /c41 /c40 /c41 min 1 , 2 2 13 _ 2 TSeg TSeg x x bit time TSeg /c45 |
|                           |          | =   | /c40 /c41 /c40 /c41 0.1 2 13 1 0.1 s x x s s /c109 /c109 /c109 /c45                         |

In this example, the concatenated bit time parameters are (1-1) 3 &amp;(8-1) 4 &amp;(1-1) 2 &amp;(1-1) 6 , so the bit timing register is programmed to = 00000700.

## 23.3.16.2.3 Example for Bit Timing at Low Baud Rate

In this example, the frequency of CAN\_CLK is 2 MHz, BRP is 1, the bit rate is 100 KBit/s.

| t q                       | 1 µs   | =   | t CAN_CLK                                                                                   |
|---------------------------|--------|-----|---------------------------------------------------------------------------------------------|
| Delay of bus driver       | 200 ns | =   |                                                                                             |
| Delay of receiver circuit | 80 ns  | =   |                                                                                             |
| Delay of bus line (40 m)  | 220 ns | =   |                                                                                             |
| t Prop                    | 1 µs   | =   | 1 • t q                                                                                     |
| t SJW                     | 4 µs   | =   | 4 • t q                                                                                     |
| t TSeg1                   | 5 µs   | =   | t Prop + t SJW                                                                              |
| t TSeg2                   | 3 µs   | =   | Information Processing Time + 3 • t q                                                       |
| t Sync-Seg                | 1 µs   | =   | 1 • t q                                                                                     |
| Bit time                  | 9 µs   | =   | t Sync-Seg + t TSeg1 + t TSeg2                                                              |
| Tolerance for CAN_CLK     |        | =   | /c40 /c41 /c40 /c41 /c40 /c41 /c40 /c41 min 1 , 2 2 13 _ 2 TSeg TSeg x x bit time TSeg /c45 |
|                           |        | =   | /c40 /c41 /c40 /c41 0.1 2 13 1 0.1 s x x s s /c109 /c109 /c109 /c45                         |

In this example, the concatenated bit time parameters are (3-1) 3 &amp;(5-1) 4 &amp;(4-1) 2 &amp;(2-1) 6 , so the bit timing register is programmed to = 0x000024C1.