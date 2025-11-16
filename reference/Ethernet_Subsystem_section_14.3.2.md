## 14.3.1.3.4.4 MDIO Interrupts

MDIO\_LINKINT is set if there is a change in the link state of the PHY corresponding to the address in the PHYADDRMON field of the MDIOUSERPHYSEL n register and the corresponding LINKINTENB bit is set.The MDIO\_LINKINT event is also captured in the MDIOLINKINTMASKED register.When the GO bit in the MDIOUSERACCESS n registers transitions from 1 to 0, indicating the completion of a user access, and the corresponding USERINTMASKSET bit in the MDIOUSERINTMASKSET register is set, the MDIO\_USERINT signal is asserted 1. The MDIO\_USERINT event is also captured in the MDIOUSERINTMASKED register.

To enable the miscellaneous pulse interrupt:

The miscellaneous interrupt(s) is selected by setting one or more bits in the miscellaneous interrupt enable register (MISC\_EN).

- The Statistics interrupt is enabled by setting to 1 the STAT\_INT\_MASK bit in the DMA\_INTMASK\_SET register.
- The HOST\_PEND is enabled by setting to 1 the HOST\_ERR\_INT\_MASK in the DMA\_INTMASK\_SET register.

Upon receiving of an interrupt, software should perform the following:

- Read the C n \_MISC\_STAT register to determine the source of the interrupt.
- Process the interrupt.
- Write the value 3h to the CPDMA\_EOI\_VECTOR register.

## 14.3.1.4 Embedded Memories

| Memory Type Description             | Number of Instances   |
|-------------------------------------|-----------------------|
| Single port 2560 by 64 RAM          | 3 (Packet FIFOs)      |
| Single port 64-word by 1152-bit RAM | 1 (ALE)               |
| Single port 2048-word by 32-bit RAM | 1 (CPPI)              |

## 14.3.2 CPSW\_3G

The CPSW\_3G GMII interfaces are compliant to the IEEE Std 802.3 Specification.

The CPSW\_3G contains two CPGMAC\_SL interfaces (ports 1 and 2), one CPPI 3.0 interface Host Port (port 0), Common Platform Time Sync (CPTS), ALE Engine and CPDMA.

The top level block diagram of CPSW\_3G is shown below:

<!-- image -->

<!-- image -->

www.ti.com

Figure 14-6. CPSW\_3G Block Diagram

<!-- image -->

## 14.3.2.1 Media Independent Interface (GMII)

The CPSW\_3G contains two CPGMAC\_SL submodules. Each CPGMAC\_SL has a single GMII interface. The CPGMAC\_SL submodules are ports 1 and 2. For more details, see Section 14.3.3, Ethernet Mac Sliver (CPGMAC\_SL) .

## 14.3.2.2 IEEE 1588v2 Clock Synchronization Support

The CPSW\_3G supports IEEE 1588v2 clock synchronization. Ethernet GMII Transmit (egress) and receive (ingress) time sync operation are also supported.

## 14.3.2.2.1 IEEE 1588v2 Receive Packet Operation

There are two CPSW\_3G receive time sync interfaces for each ethernet port. The first is the TS\_RX\_MII interface and the second is the TS\_RX\_DEC interface. Both interfaces are generated in the switch and are input to the CPTS module. There are register bits in the CPSW\_3G that control time sync operations in addition to the registers in the CPTS module. The pX\_ts\_rx\_en bit in the switch Px\_Control register must be set for receive time sync operation to be enabled (TS\_RX\_MII).

The TS\_RX\_MII interface issues a record signal (pX\_ts\_rx\_mii\_rec) along with a handle (pX\_ts\_rx\_mii\_hndl[3:0]) to the CPTS controller for each packet that is received. The record signal is a single clock pulse indicating that a receive packet has been detected at the associated port MII interface.

The handle value is incremented with each packet and rolls over to zero after 15. There are 16 possible handle values so there can be a maximum of 16 packets 'in flight' from the TS\_RX\_MII to the TS\_RX\_DEC block (through the CPGMAC\_SL) at any given time. A handle value is reused (not incremented) for any received packet that is shorter than about 31 octets (including preamble). Handle reuse on short packets prevents any possible overrun condition if multiple fragments are consecutively received.

The TS\_RX\_MII logic is in the receive wireside clock domain. There is no decode logic in the TS\_RX\_MII to determine if the packet is a time sync event packet or not. Each received packet generates a record signal and new handle. The handle is sent to the CPTS controller with the record pulse and the handle is also sent to the TS\_RX\_DEC block along with the packet. The packet decode is performed in the TS\_RX\_DEC block. The decode function is separated from the record function because in some systems the incoming packet can be encrypted. The decode function would be after packet decryption in those systems.

<!-- image -->

The TS\_RX\_DEC function decodes each received packet and determines if the packet meets the time sync event packet criteria. If the packet is determined to be a time sync event packet, then the time sync event packet is signaled to the CPTS controller via the TS\_RX\_DEC interface (pX\_ts\_rx\_dec\_evnt, pX\_ts\_rx\_dec\_hndl[3:0], pX\_ts\_rx\_dec\_msg\_type, pX\_ts\_rx\_dec\_seq\_id). The event signal is a single clock pulse indicating that the packet matched the time sync event packet criteria and that the associated packet handle, message type, and sequence ID are valid. No indication is given for received packets that do not meet the time sync event criteria. The 16-bit sequence ID is found in the time sync event packet at the sequence ID offset into the PTP message header (pX\_ts\_seq\_id\_offset). A packet is determined to be a receive event packet under the following conditions:

## 14.3.2.2.1.1 Annex F

1. Receive time sync is enabled (pX\_ts\_rx\_en is set in the switch Px\_Control register).
2. One of the following sequences is true:

Where the first packet ltype matches:

- ts\_ltype1 and pX\_ts\_ltype1\_en is set
- ts\_ltype2 and pX\_ts\_ltype2\_en is set
- vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set
- vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet ltype matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set
- vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set
3. The PTP message begins in the byte after the LTYPE.
4. The packet message type is enabled in the pX\_ts\_msg\_type\_en field in the Px\_TS\_SEQ\_MTYPE register.
5. The packet was received without error (not long/short/mac\_ctl/crc/code/align).
6. The ALE determined that the packet is to be sent only to the host (port 0).

## 14.3.2.2.1.2 Annex D

1. Receive time sync is enabled (pX\_ts\_rx\_en is set in the switch Px\_Control register).
2. One of the following sequences is true:

Where the first packet ltype matches:

- 0x0800 and pX\_ts\_annex\_d\_en is set
- vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
- vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
- vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
3. Byte 14 (the byte after the LTYPE) contains 0x45 (IP\_VERSION).
- Note: The byte numbering assumes that there are no vlans. The byte number is intended to show the relative order of the bytes.
4. Byte 22 contains 0x00 if the pX\_ts\_ttl\_nonzero bit in the switch Px\_Control register is zero or byte 22 contains any value if pX\_ts\_ttl\_nonzero is set. Byte 22 is the time to live field.

<!-- image -->

## www.ti.com

5. Byte 23 contains 0x11 (UDP Fixed).
6. Byte 30 contains decimal 224 (0xe0).
7. Byte 31 contains 0x00.
8. Byte 32 contains 0x01.
9. Byte 33 contains one of the following:
- Decimal 129 and the pX\_ts\_129 bit in the switch Px\_Control register is set
- Decimal 130 and the pX\_ts\_130 bit in the switch Px\_Control register is set
- Decimal 131 and the pX\_ts\_131 bit in the switch Px\_Control register is set
- Decimal 129 and the pX\_ts\_132 bit in the switch Px\_Control register is set
10. Bytes 36 and 37 contain one of the following:
- Decimal 0x01 and 0x3f respectively and and the pX\_ts\_319 bit in the switch Px\_Control register is set.
- Decimal 0x01 and 0x40 respectively and and the pX\_ts\_320 bit in the switch Px\_Control register is set.
11. The PTP message begins in byte 42.
12. The packet message type is enabled in the pX\_ts\_msg\_type\_en field in Px\_Control.
13. The packet was received without error (not long/short/mac\_ctl/crc/code/align).
14. The ALE determined that the packet is to be sent only to the host (port 0).

## 14.3.2.2.2 IEEE 1588v2 Transmit Packet Operation

There are two CPSW\_3G transmit time sync interfaces for each ethernet port. The first is the TS\_TX\_DEC interface and the second is the TS\_TX\_MII interface. Both interfaces are generated in the switch and are input to the CPTS module. The pX\_ts\_tx\_en bit in the Px\_Control register must be set for transmit time sync operation to be enabled.

The TS\_TX\_DEC function decodes each packet to be transmitted and determines if the packet meets the time sync event packet criteria. If the packet is determined to be a time sync event packet, then the time sync event is signaled to the CPTS controller via the TS\_TX\_DEC interface (pX\_ts\_tx\_dec\_evnt, pX\_ts\_tx\_dec\_hndl[3:0], pX\_ts\_tx\_dec\_msg\_type, pX\_ts\_tx\_dec\_seq\_id). The event signal is a single clock pulse indicating that the packet matched the time sync event packet criteria and that the associated packet handle, message type, and sequence ID are valid.

The 16-bit sequence ID is found in the time sync event packet at the sequence ID offset into the message header (pX\_ts\_seq\_id\_offset). No indication is given for transmit packets that do not meet the time sync event criteria. The time sync event packet handle is also passed along with the packet to the TS\_TX\_MII with an indication that the packet is a time sync event packet. Unlike receive, only transmit event packets increment the handle value. The decode function is separated from the record function because some systems may encript the packet. The encription is after the decode function on transmit (egress). A packet is determined to be a transmit event packet if the following is met:

## 14.3.2.2.2.1 Annex F

1. Transmit time sync is enabled (pX\_ts\_tx\_en is set in the switch Px\_Control register).
2. One of the following sequences is true:
- The first packet ltype matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- The first packet ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set
- The first packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet ltype matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- The first packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet

ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set

- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches ts\_ltype1 and pX\_ts\_ltype1\_en is set
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches ts\_ltype2 and pX\_ts\_ltype2\_en is set
3. The packet message type is enabled in pX\_ts\_msg\_type\_en.
4. The packet was received by the host (port 0).

## 14.3.2.2.2.2 Annex D

1. Transmit time sync is enabled (pX\_ts\_tx\_en is set in the switch Px\_Control register).
2. One of the following sequences is true:
- The first packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
- The first packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches 0x0800 and pX\_ts\_annex\_d\_en is set
3. Byte 14 (the byte after the LTYPE) contains 0x45 (IP\_VERSION).

Note: The byte numbering assumes that there are no vlans. The byte number is intended to show the relative order of the bytes. If VLAN(s) are present, then the byte numbers push down.

4. Byte 22 contains 0x00 if the pX\_ts\_ttl\_nonzero bit in the switch Px\_Control register is zero or byte 22 contains any value if pX\_ts\_ttl\_nonzero is set. Byte 22 is the time to live field.
5. Byte 23 contains 0x11 (UDP Fixed).
6. Byte 30 contains decimal 224 (0xe0)
7. Byte 31 contains 0x00
8. Byte 32 contains 0x01
9. Byte 33 contains one of the following:
- Decimal 129 and the pX\_ts\_129 bit in the switch Px\_Control register is set
- Decimal 130 and the pX\_ts\_130 bit in the switch Px\_Control register is set
- Decimal 131 and the pX\_ts\_131 bit in the switch Px\_Control register is set
- Decimal 132 and the pX\_ts\_132 bit in the switch Px\_Control register is set
10. Bytes 36 and 37 contain either of the following:
- Decimal 1 (hex 0x01) and decimal 63 (hex 0x3f) respectively and and the pX\_ts\_319 bit in the switch Px\_Control register is set
- Decimal 1 (hex 0x01) and decimal 64 (hex 0x40) respectively and and the pX\_ts\_320 bit in the switch Px\_Control register is set
11. The PTP message begins in byte 42 (this is offset 0).
12. The packet message type is enabled in pX\_ts\_msg\_type\_en.
13. The packet was received by the host (port 0).

The TS\_TX\_MII interface issues a single clock record signal (pX\_ts\_tx\_mii\_rec) at the beginning of each transmitted packet. If the packet is a time sync event packet then a single clock event signal (pX\_ts\_tx\_mii\_evnt) along with a handle (pX\_ts\_rx\_mii\_hndl[2:0]) will be issued before the next record signal for the next packet. The event signal will not be issued for packets that did not meet the time sync event criteria in the TS\_TX\_DEC function. If consecutive record indications occur without an interleaving event indication, then the packet associated with the first record was not a time sync event packet.

<!-- image -->

<!-- image -->

www.ti.com

The record signal is a single clock pulse indicating that a transmit packet egress has been detected at the associated port MII interface. The handle value is incremented with each time sync event packet and rolls over to zero after 7. There are 8 possible handle values so there can be a maximum of eight time sync event packets 'in flight' from the TS\_TX\_DEC to the TS\_TX\_MII block at any given time. The handle value increments only on time sync event packets. The TS\_TX\_MII logic is in the transmit wireside clock domain.

## 14.3.2.3 Device Level Ring (DLR) Support

Device Level Ring (DLR) support is enabled by setting the dlr\_en bit in the CPSW\_Control register. When enabled, incoming received DLR packets are detected and sent to queue 3 (highest priority) of the egress port(s). If the host port is the egress port for a DLR packet then the packet is sent on the CPDMA Rx channel selected by the p0\_dlr\_cpdma\_ch field in the P0\_Control register. The supervisor node MAC address feature is supported with the dlr\_unicast bit in the unicast address table entry.

When set, the dlr\_unicast bit causes a packet with the matching destination address to be flooded to the vlan\_member\_list minus the receive port and minus the host port (the port\_number field in the unicast address table entry is a don't care). Matching dlr\_unicast packets are flooded regardless of whether the packet is a DLR packet or not. The en\_p0\_uni\_flood bit in the ALE\_Control register has no effect on DLR unicast packets. Packets are determined to be DLR packets, as shown:

1. DLR is enabled (dlr\_en is set in the switch CPSW\_Control register).
2. One of the following sequences is true:
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches dlr\_ltype.
- The first packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the second packet ltype matches dlr\_ltype.
- The first packet ltype matches vlan\_ltype1 and pX\_vlan\_ltype1\_en is set and the second packet ltype matches vlan\_ltype2 and pX\_vlan\_ltype2\_en is set and the third packet ltype matches dlr\_ltype.

## 14.3.2.4 CPDMA RX and TX Interfaces

The CPDMA submodule is a CPPI 3.0 compliant packet DMA transfer controller. The CPPI 3.0 interface is port 0.

After reset, initialization, and configuration the host may initiate transmit operations. Transmit operations are initiated by host writes to the appropriate transmit channel head descriptor pointer contained in the STATERAM block. The transmit DMA controller then fetches the first packet in the packet chain from memory in accordance with CPPI 3.0 protocol. The DMA controller writes the packet into the external transmit FIFO in 64-byte bursts (maximum).

Receive operations are initiated by host writes to the appropriate receive channel head descriptor pointer after host initialization and configuration. The receive DMA controller writes the receive packet data to external memory in accordance with CPPI 3.0 protocol. See the CPPI Buffer Descriptors section for detailed description of Buffer Descriptors

## 14.3.2.4.1 CPPI Buffer Descriptors

The buffer descriptor is a central part of the 3PSW Ethernet Subsytem and is how the application software describes Ethernet packets to be sent and empty buffers to be filled with incoming packet data.

Host Software sends and receives network frames via the CPPI 3.0 compliant host interface. The host interface includes module registers and host memory data structures. The host memory data structures are buffer descriptors and data buffers. Buffer descriptors are data structures that contain information about a single data buffer. Buffer descriptors may be linked together to describe frames or queues of frames for transmission of data and free buffer queues available for received data.

Note: The 8k bytes of Ethernet Subsystem CPPI RAM begin at address 0x4a102000 and end at 0x4a103FFF from the 3PSW perspective. The buffer descriptors programmed to access the CPPI RAM memory should use the address range from 0x4a102000.

## 14.3.2.4.1.1 TX Buffer Descriptors

A TX buffer descriptor is a contiguous block of four 32-bit data words aligned on a 32-bit word boundary.

## Figure 14-7. Tx Buffer Descriptor Format

Word 0

31

0

Next Descriptor Pointer

Word 1

31

0

Buffer Pointer

Word 2

31

16

15

0

Buffer Offset

Buffer Length

Word 3

31

30

29

28

27

26

25

21

20

19

18

17

16

SOP

EOP

Owner

ship

EOQ

Teardown\_Com

plete

Pass

CRC

Reserved

To\_Po

rt\_En

Reserved

To\_Port

15

11

10

0

Reserved

packet\_length

## 14.3.2.4.1.1.1 CPPI Tx Data Word - 0

## Next Descriptor Pointer

The next descriptor pointer points to the 32-bit word aligned memory address of the next buffer descriptor in the transmit queue. This pointer is used to create a linked list of buffer descriptors. If the value of this pointer is zero, then the current buffer is the last buffer in the queue. The software application must set this value prior to adding the descriptor to the active transmit list. This pointer is not altered by the EMAC.The value of pNext should never be altered once the descriptor is in an active transmit queue, unless its current value is NULL.

If the pNext pointer is initially NULL, and more packets need to be queued for transmit, the software application may alter this pointer to point to a newly appended descriptor. The EMAC will use the new pointer value and proceed to the next descriptor unless the pNext value has already been read. In this latter case, the transmitter will halt on the transmit channel in question, and the software application may restart it at that time. The software can detect this case by checking for an end of queue (EOQ) condition flag on the updated packet descriptor when it is returned by the EMAC.

## 14.3.2.4.1.1.2 CPPI Tx Data Word - 1

Buffer Pointer

<!-- image -->

<!-- image -->

www.ti.com

The byte aligned memory address of the buffer associated with the buffer descriptor. The host sets the buffer\_pointer . The software application must set this value prior to adding the descriptor to the active transmit list. This pointer is not altered by the EMAC.

## 14.3.2.4.1.1.3 CPPI Tx Data Word - 2

## Buffer \_Offset

Buffer Offset - Indicates how many unused bytes are at the start of the buffer. A value of 0x0000 indicates that no unused bytes are at the start of the buffer and that valid data begins on the first byte of the buffer. A value of 0x000F (decimal 15) indicates that the first 15 bytes of the buffer are to be ignored by the port and that valid buffer data starts on byte 16 of the buffer. The host sets the buffer\_offset value (which may be zero to the buffer length minus 1). Valid only on sop.

## Buffer \_Length

Buffer Length - Indicates how many valid data bytes are in the buffer. Unused or protocol specific bytes at the beginning of the buffer are not counted in the Buffer Length field. The host sets the buffer\_length. The buffer\_length must be greater than zero.

## 14.3.2.4.1.1.4 CPPI Tx Data Word - 3

## Start of Packet (SOP) Flag

When set, this flag indicates that the descriptor points to a packet buffer that is the start of a new packet.In the case of a single fragment packet, both the SOP and end of packet (EOP) flags are set. Otherwise,the descriptor pointing to the last packet buffer for the packet sets the EOP flag. This bit is set by the software application and is not altered by the EMAC.

- 0 - Not start of packet buffer
- 1 - Start of packet buffer

## End of Packet (EOP) Flag

When set, this flag indicates that the descriptor points to a packet buffer that is last for a given packet. In the case of a single fragment packet, both the start of packet (SOP) and EOP flags are set. Otherwise, the descriptor pointing to the last packet buffer for the packet sets the EOP flag. This bit is set by the software application and is not altered by the EMAC.

- 0 - Not end of packet buffer.
- 1 - End of packet buffer.

## Ownership

When set this flag indicates that all the descriptors for the given packet (from SOP to EOP) are currently owned by the EMAC. This flag is set by the software application on the SOP packet descriptor before adding the descriptor to the transmit descriptor queue. For a single fragment packet, the SOP, EOP, and OWNER flags are all set. The OWNER flag is cleared by the EMAC once it is finished with all the descriptors for the given packet. Note that this flag is valid on SOP descriptors only.

- 0 - The packet is owned by the host
- 1 - The packet is owned by the port

## EOQ

When set, this flag indicates that the descriptor in question was the last descriptor in the transmit queue for a given transmit channel, and that the transmitter has halted. This flag is initially cleared by the software application prior to adding the descriptor to the transmit queue. This bit is set by the EMAC when the EMAC identifies that a descriptor is the last for a given packet (the EOP flag is set), and there are no more descriptors in the transmit list (next descriptor pointer is NULL).

The software application can use this bit to detect when the EMAC transmitter for the corresponding channel has halted. This is useful when the application appends additional packet descriptors to a transmit queue list that is already owned by the EMAC. Note that this flag is valid on EOP descriptors only.

- 0 - The Tx queue has more packets to transfer.

- 1 - The Descriptor buffer is the last buffer in the last packet in the queue.

## teardown\_Complete

This flag is used when a transmit queue is being torn down, or aborted, instead of allowing it to be transmitted. This would happen under device driver reset or shutdown conditions. The EMAC sets this bit in the SOP descriptor of each packet as it is aborted from transmission. Note that this flag is valid on SOP descriptors only. Also note that only the first packet in an unsent list has the TDOWNCMPLT flag set. Subsequent descriptors are not processed by the EMAC.

- 0 - The port has not completed the teardown process.
- 1 - The port has completed the commanded teardown process.

## pass\_crc

This flag is set by the software application in the SOP packet descriptor before it adds the descriptor to the transmit queue. Setting this bit indicates to the EMAC that the 4 byte Ethernet CRC is already present in the packet data, and that the EMAC should not generate its own version of the CRC.When the CRC flag is cleared, the EMAC generates and appends the 4-byte CRC. The buffer length and packet length fields do not include the CRC bytes. When the CRC flag is set, the 4-byte CRC is supplied by the software application and is already appended to the end of the packet data. The buffer length and packet length fields include the CRC bytes, as they are part of the valid packet data. Note that this flag is valid on SOP descriptors only.

- 0 - The CRC is not included with the packet data and packet length.
- 1 - The CRC is included with the packet data and packet length.

## to\_port

To Port - Port number to send the directed packet to. This field is set by the host. This field is valid on SOP. Directed packets go to the directed port, but an ALE lookup is performed to determine untagged egress in VLAN\_AWARE mode.

- 1 - Send the packet to port 1 if to\_port\_en is asserted.
- 2 - Send the packet to port 2 if to\_port\_en is asserted.

## To\_port\_enable

To Port Enable - Indicates when set that the packet is a directed packet to be sent to the to\_port field port number. This field is set by the host. The packet is sent to one port only (index not mask). This bit is valid on SOP.

0 - not a directed packet

- 1 - directed packet

## Packet Length

Specifies the number of bytes in the entire packet. Offset bytes are not included. The sum of the buffer\_length fields should equal the packet\_length. Valid only on SOP. The packet length must be greater than zero. The packet data will be truncated to the packet length if the packet length is shorter than the sum of the packet buffer descriptor buffer lengths. A host error occurs if the packet length is greater than the sum of the packet buffer descriptor buffer lengths

## 14.3.2.4.1.2 RX Buffer Descriptors

An RX buffer descriptor is a contiguous block of four 32-bit data words aligned on a 32-bit word boundary.

<!-- image -->

<!-- image -->

www.ti.com

| Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  | Word 0                  |
|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|
| 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 31                      | 0                       |                         |
| Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer | Next Descriptor Pointer |
| Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | Word 1 31               | 0                       |                         |
| Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          | Buffer Pointer          |
| Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  | Word 2                  |
| 31                      | 31                      | 27                      | 26                      |                         |                         |                         | 16                      | 15                      | 11                      |                         | 10                      |                         |                         | 0                       |                         |
| Reserved                | Reserved                | Reserved                |                         | Buffer                  | Offset                  | Offset                  | Offset                  | Reserved                | Reserved                | Reserved                |                         | Buffer Length           | Buffer Length           | Buffer Length           |                         |
| Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  | Word 3                  |
| 31                      | 30                      | 29                      | 28                      | 27                      | 26                      | 25                      | 24                      | 23                      | 22                      | 21                      | 20                      | 19                      | 18                      | 16                      |                         |
| SOP                     | EOP                     | Owner ship              | EOQ                     | Teardo wn_Co mplete     | Passe d_CR C            | Long                    | Short                   | MAC_ Ctl                | Overru n                | PKT_Err                 |                         | Rx_Vlan_Enca p          | From_Port               | From_Port               |                         |
| 15                      |                         |                         |                         | 11                      | 10                      |                         |                         |                         |                         |                         |                         |                         |                         | 0                       |                         |
| Reserved                | Reserved                | Reserved                | Reserved                | Reserved                | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           | packet_length           |

## Figure 14-8. Rx Buffer Descriptor Format

## 14.3.2.4.1.2.1 CPPI Rx Data Word - 0

## next\_descriptor\_pointer

The 32-bit word aligned memory address of the next buffer descriptor in the RX queue. This is the mechanism used to reference the next buffer descriptor from the current buffer descriptor. If the value of this pointer is zero then the current buffer is the last buffer in the queue. The host sets the next\_descriptor\_pointer .

## 14.3.2.4.1.2.2 CPPI Rx Data Word - 1

## buffer\_pointer

The byte aligned memory address of the buffer associated with the buffer descriptor. The host sets the buffer\_pointer .

## 14.3.2.4.1.2.3 CPPI Rx Data Word - 2

## Buffer \_Offset

Buffer Offset - Indicates how many unused bytes are at the start of the buffer. A value of 0x0000 indicates that there are no unused bytes at the start of the buffer and that valid data begins on the first byte of the buffer. A value of 0x000F (decimal 15) indicates that the first 15 bytes of the buffer are to be ignored by the port and that valid buffer data starts on byte 16 of the buffer. The port writes the buffer\_offset with the value from the rx\_buffer\_offset register value. The host initializes the buffer\_offset to zero for free buffers. The buffer\_length must be greater than the rx\_buffer\_offset value. The buffer offset is valid only on sop .

## Buffer \_Length

Buffer Length - Indicates how many valid data bytes are in the buffer. Unused or protocol specific bytes at the beginning of the buffer are not counted in the Buffer Length field. The host initializes the buffer\_length , but the port may overwrite the host initiated value with the actual buffer length value on SOP and/or EOP buffer descriptors. SOP buffer length values will be overwritten if the packet size is less than the size of the buffer or if the offset is nonzero. EOP buffer length values will be overwritten if the entire buffer is not filled up with data. The buffer\_length must be greater than zero.

## 14.3.2.4.1.2.4 CPPI Rx Data Word - 3

## Start of Packet (SOP) Flag

When set, this flag indicates that the descriptor points to a packet buffer that is the start of a new packet.In the case of a single fragment packet, both the SOP and end of packet (EOP) flags are set. Otherwise, the descriptor pointing to the last packet buffer for the packet has the EOP flag set. This flag is initially cleared by the software application before adding the descriptor to the receive queue. This bit is set by the EMAC on SOP descriptors.

## End of Packet (EOP) Flag

When set, this flag indicates that the descriptor points to a packet buffer that is last for a given packet. In the case of a single fragment packet, both the start of packet (SOP) and EOP flags are set. Otherwise, the descriptor pointing to the last packet buffer for the packet has the EOP flag set. This flag is initially cleared by the software application before adding the descriptor to the receive queue. This bit is set by the EMAC on EOP descriptors.

## Ownership (OWNER) Flag

When set, this flag indicates that the descriptor is currently owned by the EMAC. This flag is set by the software application before adding the descriptor to the receive descriptor queue. This flag is cleared by the EMAC once it is finished with a given set of descriptors, associated with a received packet. The flag is updated by the EMAC on SOP descriptor only. So when the application identifies that the OWNER flag is cleared on an SOP descriptor, it may assume that all descriptors up to and including the first with the EOP flag set have been released by the EMAC. (Note that in the case of single buffer packets, the same descriptor will have both the SOP and EOP flags set.)

## End of Queue (EOQ) Flag

When set, this flag indicates that the descriptor in question was the last descriptor in the receive queue for a given receive channel, and that the corresponding receiver channel has halted. This flag is initially cleared by the software application prior to adding the descriptor to the receive queue. This bit is set by the EMAC when the EMAC identifies that a descriptor is the last for a given packet received (also sets the EOP flag), and there are no more descriptors in the receive list (next descriptor pointer is NULL).The software application can use this bit to detect when the EMAC receiver for the corresponding channel has halted. This is useful when the application appends additional free buffer descriptors to an active receive queue. Note that this flag is valid on EOP descriptors only.

## Teardown Complete (TDOWNCMPLT) Flag

This flag is used when a receive queue is being torn down, or aborted, instead of being filled with received data. This would happen under device driver reset or shutdown conditions. The EMAC sets this bit in the descriptor of the first free buffer when the tear down occurs. No additional queue processing is performed.

## Pass CRC (PASSCRC) Flag

This flag is set by the EMAC in the SOP buffer descriptor if the received packet includes the 4-byte CRC.This flag should be cleared by the software application before submitting the descriptor to the receive queue.

## Long (Jabber) Flag

This flag is set by the EMAC in the SOP buffer descriptor, if the received packet is a jabber frame and was not discarded because the RX\_CEF\_EN bit was set in the MacControl. Jabber frames are frames that exceed the RXMAXLEN in length, and have CRC, code, or alignment errors.

## Short (Fragment) Flag

This flag is set by the EMAC in the SOP buffer descriptor, if the received packet is only a packet fragment and was not discarded because the RX\_CSF\_EN bit was set in the MacControl.

## Control Flag

This flag is set by the EMAC in the SOP buffer descriptor, if the received packet is an EMAC control frame and was not discarded because the RX\_CMF\_EN bit was set in the MacControl.

## Overrun Flag

<!-- image -->

<!-- image -->

www.ti.com

This flag is set by the EMAC in the SOP buffer descriptor, if the received packet was aborted due to a receive overrun.

## Pkt\_error Flag

Packet Contained Error on Ingress -

00 - no error

01 - CRC error on ingress

10 - Code error on ingress

11 - Align error on ingress

## rx\_vlan\_encap

VLAN Encapsulated Packet - Indicates when set that the packet data contains a 32-bit VLAN header word that is included in the packet byte count. This field is set by the port to be the value of the CPSW control register rx\_vlan\_encap bit

## from\_port

From Port - Indicates the port number that the packet was received on (ingress to the switch).

## Packet Length

Specifies the number of bytes in the entire packet. The packet length is reduced to 12-bits. Offset bytes are not included. The sum of the buffer\_length fields should equal the packet\_length. Valid only on SOP.

## 14.3.2.4.2 Receive DMA Interface

The Receive DMA is an eight channel CPPI 3.0 compliant interface. Each channel has a single queue for frame reception.

## 14.3.2.4.2.1 Receive DMA Host Configuration

To configure the Rx DMA for operation the host must perform the following:

- Initialize the receive addresses.
- Initialize the Rx\_HDP Registers to zero.
- Enable the desired receive interrupts in the IntMask register.
- Write the rx\_buffer\_offset register value.
- Setup the receive channel(s) buffer descriptors in host memory as required by CPPI 3.0.
- Enable the RX DMA controller by setting the rx\_en bit in the Rx\_Control register.

## 14.3.2.4.2.2 Receive Channel Teardown

The host commands a receive channel teardown by writing the channel number to the Rx\_Teardown register. When a teardown command is issued to an enabled receive channel the following will occur:

- Any current frame in reception will complete normally.
- The teardown\_complete bit will be set in the next buffer descriptor in the chain

if there is one.

- The channel head descriptor pointer will be cleared to zero
- A receive interrupt for the channel will be issued to the host.
- The host should acknowledge a teardown interrupt with a 0xfffffffc acknowledge value.

<!-- image -->

Channel teardown may be commanded on any channel at any time. The host is informed of the teardown completion by the set teardown complete buffer descriptor bit. The port does not clear any channel enables due to a teardown command. A teardown command to an inactive channel issues an interrupt that software should acknowledge with a 0xfffffffc acknowledge value (note that there is no buffer descriptor in this case). Software may read the interrupt acknowledge location to determine if the interrupt was due to a commanded teardown. The read value will be 0xfffffffc if the interrupt was due to a teardown command.

## 14.3.2.4.3 Transmit DMA Interface

The Transmit DMA is an eight channel CPPI 3.0 compliant interface. Priority between the eight queues may be either fixed or round robin as selected by tx\_ptype in the DMAControl register. If the priority type is fixed, then channel 7 has the highest priority and channel 0 has the lowest priority. Round robin priority proceeds from channel 0 to channel 7. Packet Data transfers occur on the TX\_VBUSP interface in 64byte maximum burst transfers

## 14.3.2.4.3.1 Transmit DMA Host Configuration

To configure the TX DMA for operation the host must do the following:

- Initialize the Tx\_HDP registers to a zero value.
- Enable the desired transmit interrupts in the IntMask register.
- Setup the transmit channel(s) buffer descriptors in host memory as defined in CPPI 3.0.
- Configure and enable the transmit operation as desired in the TxControl register.
- Write the appropriate Tx\_HDP registers with the appropriate values to start transmit operations.

## 14.3.2.4.3.2 Transmit Channel Teardown

The host commands a transmit channel teardown by writing the channel number to the Tx\_Teardown register. When a teardown command is issued to an enabled transmit channel the following will occur:

- Any frame currently in transmission will complete normally
- The teardown complete bit will be set in the next sop buffer descriptor (if there is one).
- The channel head descriptor pointer will be set to zero.
- An interrupt will be issued to inform the host of the channel teardown.
- The host should acknowledge a teardown interrupt with a 0xfffffffc acknowledge value

Channel teardown may be commanded on any channel at any time. The host is informed of the teardown completion by the set teardown complete buffer descriptor bit. The port does not clear any channel enables due to a teardown command. A teardown command to an inactive channel issues an interrupt that software should acknowledge with a 0xfffffffc acknowledge value (note that there is no buffer descriptor in this case). Software may read the interrupt acknowledge location to determine if the interrupt was due to a commanded teardown. The read value will be 0xfffffffc if the interrupt was due to a teardown command.

## 14.3.2.4.4 Transmit Rate Limiting

Transmit operations can be configured to rate limit the transmit data for each transmit priority. Rate limiting is enabled for a channel when the tx\_rlim[7:0] bit associated with that channel is set in the DMAControl register. Rate limited channels must be the highest priority channels. For example, if two rate limited channels are required then tx\_rlim[7:0] should be set to 11000000 with the msb corresponding to channel 7.

When any channels are configured to be rate-limiting, the priority type must be fixed for transmit. Roundrobin priority type is not allowed when rate-limiting. Each of the eight transmit priorities has an associated register to control the rate at which the priority is allowed to send data (Tx\_Pri(7..0)\_Rate) when the channel is rate-limiting. Each priority has a send count (pri(7..0)\_send\_cnt[13:0]) and an idle count (pri(7..0)\_idle\_cnt[13:0]). The transfer rate includes the inter-packet gap (12 bytes) and the preamble (8 bytes). The rate in Mbits/second that each priority is allowed to send is controlled by the below equation.

Priority Transfer rate in Mbit/s = ((priN\_idle\_cnt/(priN\_idle\_cnt + priN\_send\_cnt)) * frequency * 32

<!-- image -->

www.ti.com

Where the frequency is the CLK frequency.

## 14.3.2.4.5 Command IDLE

The cmd\_idle bit in the DMA\_Control register allows CPDMA operation to be suspended. When the idle state is commanded, the CPDMA will stop processing receive and transmit frames at the next frame boundary. Any frame currently in reception or transmission will be completed normally without suspension. For transmission, any complete or partial frame in the tx cell fifo will be transmitted. For receive, frames that are detected by the CPDMA after the suspend state is entered are ignored. No statistics will be kept for ignored frames. Commanded idle is similar in operation to emulation control and clock stop.

## 14.3.2.5 VLAN Aware Mode

The CPSW\_3G is in VLAN aware mode when the CPSW Control register vlan\_aware bit is set. In VLAN aware mode ports 0 receive packets (out of the CPSW\_3G) may or may not be VLAN encapsulated depending on the CPSW Control register rx\_vlan\_encap bit. The header packet VLAN is generated as described in Section 14.3.3, Ethernet Mac Sliver (CPGMAC\_SL) . Port 0 receive packet data is never modified. VLAN is not removed regardless of the force untagged egress bit for Port 0. VLAN encapsulated receive packets have a 32-bit VLAN header encapsulation word added to the packet data.VLAN encapsulated packets are specified by a set rx\_vlan\_encap bit in the packet buffer descriptor.

Port 0 transmit packets are never VLAN encapsulated (encapsulation is not allowed).

In VLAN aware mode, transmitted packet data is changed depending on the packet type (pkt\_type), packet priority (pkt\_pri), and VLAN information as shown in the below tables:

## Figure 14-9. VLAN Header Encapsulation Word

| 31 29            | 28          | 27   |          |    |    |    |             |     |          |    | 16   |
|------------------|-------------|------|----------|----|----|----|-------------|-----|----------|----|------|
| HDR_PKT_Priority | HDR_PKT_CFI |      |          |    |    |    | HDR_PKT_Vid |     |          |    |      |
| 15               |             | 10   | 9        | 8  | 7  | 6  | 5           | 4 3 | 2        | 1  | 0    |
| Reserved         | Reserved    |      | PKT_Type |    |    |    |             |     | Reserved |    |      |

Table 14-8. VLAN Header Encapsulation Word Field Descriptions

| Field            | Description                                                                                                                                                                    |
|------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| HDR_PKT_Priority | Header Packet VLAN priority (Highest priority: 7)                                                                                                                              |
| HDR_PKT_CFI      | Header Packet VLAN CFI bit.                                                                                                                                                    |
| HDR_PKT_Vid      | Header Packet VLAN ID                                                                                                                                                          |
| PKT_Type         | Packet Type. Indicates whether the packet is VLAN-tagged, priority-tagged, or non-tagged. 00: VLAN-tagged packet 01: Reserved 10: Priority-tagged packet 11: Non-tagged packet |

## 14.3.2.6 VLAN Unaware Mode

The CPSW\_3G is in VLAN unaware mode when the CPSW Control register vlan\_aware bit is cleared. Port 0 receive packets (out of the CPSW\_3G) may or may not be VLAN encapsulated depending on the CPSW Control register rx\_vlan\_encap bit. Port 0 transmit packets are never VLAN encapsulated.

## 14.3.2.7 Address Lookup Engine (ALE)

The address lookup engine (ALE) processes all received packets to determine which port(s) if any that the packet should the forwarded to. The ALE uses the incoming packet received port number, destination address, source address, length/type, and VLAN information to determine how the packet should be forwarded. The ALE outputs the port mask to the switch fabric that indicates the port(s) the packet should be forwarded to. The ALE is enabled when the ale\_enable bit in the ALE\_Control register is set. All packets are dropped when the ale\_enable bit is cleared to zero.

<!-- image -->

In normal operation, the CPGMAC\_SL modules are configured to issue an abort, instead of an end of packet, at the end of a packet that contains an error (runt, frag, oversize, jabber, crc, alignment, code etc.) or at the end of a mac control packet. However, when the CPGMAC\_SL configuration bit(s) cef, csf, or cmf are set, error frames, short frames or mac control frames have a normal end of packet instead of an abort at the end of the packet. When the ALE receives a packet that contains errors (due to a set header error bit), or a mac control frame and does not receive an abort, the packet will be forwarded only to the host port (port 0). No ALE learning occurs on packets with errors or mac control frames. Learning is based on source address and lookup is based on destination address.

The ALE may be configured to operate in bypass mode by setting the ale\_bypass bit in the ALE\_Control register. When in bypass mode, all CPGMAC\_SL received packets are forwarded only to the host port (port 0). Packets from the two ports can be on separate Rx DMA channels by configuring the CPDMA\_Rx\_Ch\_Map register. In bypass mode, the ALE processes host port transmit packets the same as in normal mode. In general, packets would be directed by the host in bypass mode.

The ALE may be configured to operate in OUI deny mode by setting the enable\_oui\_deny bit in the ALE\_Control register. When in OUI deny mode, a packet with a non-matching OUI source address will be dropped unless the destination address matches a multicast table entry with the super bit set. Broadcast packets will be dropped unless the broadcast address is entered into the table with the super bit set. Unicast packets will be dropped unless the unicast address is in the table with block and secure both set (supervisory unicast packet).

Multicast supervisory packets are designated by the super bit in the table entry. Unicast supervisory packets are indicated when block and secure are both set. Supervisory packets are not dropped due to rate limiting, OUI, or VLAN processing.

## 14.3.2.7.1 Address Table Entry

The ALE table contains 1024 entries. Each table entry represents a free entry, an address, a VLAN, an address/VLAN pair, or an OUI address. Software should ensure that there are not double address entries in the table. The double entry used would be indeterminate. Reserved table bits must be written with zeroes.

Source Address learning occurs for packets with a unicast, multicast or broadcast destination address and a unicast or multicast (including broadcast) source address. Multicast source addresses have the group bit (bit 40) cleared before ALE processing begins, changing the multicast source address to a unicast source address. A multicast address of all ones is the broadcast address which may be added to the table. A learned unicast source address is added to the table with the following control bits:

Table 14-9. Learned Address Control Bits

| unicast_type   |   11 |
|----------------|------|
| Block          |    0 |
| Secure         |    0 |

If a received packet has a source address that is equal to the destination address then the following occurs:

- The address is learned if the address is not found in the table.
- The address is updated if the address is found.
- The packet is dropped.

## 14.3.2.7.1.1 Free Table Entry

Table 14-10. Free (Unused) Address Table Entry Bit Values

| 71:62    | 61:60           | 59:0     |
|----------|-----------------|----------|
| Reserved | Entry Type (00) | Reserved |

<!-- image -->

www.ti.com

## 14.3.2.7.1.2 Multicast Address Table Entry

## Table 14-11. Multicast Address Table Entry Bit Values

| 71:70    | 68:66     | 65    | 64       | 63:62           | 61:60           | 59:48    | 47:0              |
|----------|-----------|-------|----------|-----------------|-----------------|----------|-------------------|
| Reserved | Port Mask | Super | Reserved | Mcast Fwd State | Entry Type (01) | Reserved | Multicast Address |

## Table Entry Type

00: Free Entry

01: Address Entry : unicast or multicast determined by dest address bit 40 .

10: VLAN entry

11: VLAN Address Entry : unicast or multicast determined by address bit 40.

## Supervisory Packet (SUPER)

When set, this field indicates that the packet with a matching multicast destination address is a supervisory packet.

0: Non-supervisory packet

1: Supervisory packet

## Port Mask(2:0) (PORT\_MASK)

This three bit field is the port bit mask that is returned with a found multicast destination address. There may be multiple bits set indicating that the multicast packet may be forwarded to multiple ports (but not the receiving port).

## Multicast Forward State (MCAST\_FWD\_STATE)

Multicast Forward State - Indicates the port state(s) required for the received port on a destination address lookup in order for the multicast packet to be forwarded to the transmit port(s). A transmit port must be in the Forwarding state in order to forward the packet. If the transmit port\_mask has multiple set bits then each forward decision is independent of the other transmit port(s) forward decision.

00: Forwarding

01: Blocking/Forwarding/Learning

10: Forwarding/Learning

11: Forwarding

The forward state test returns a true value if both the Rx and Tx ports are in the required state.

## Table Entry Type (ENTRY\_TYPE)

Address entry type. Unicast or multicast determined by address bit 40.

01: Address entry. Unicast or multicast determined by address bit 40.

## Packet Address (MULTICAST\_ADDRESS)

This is the 48-bit packet MAC address. For an OUI address, only the upper 24-bits of the address are used in the source or destination address lookup. Otherwise, all 48-bits are used in the lookup.

## 14.3.2.7.1.3 VLAN/Multicast Address Table Entry

## Table 14-12. VLAN/Multicast Address Table Entry Bit Values

| 71:69    | 68:66     | 65    | 64       | 63:62           | 61:60           | 59:48   | 47:0              |
|----------|-----------|-------|----------|-----------------|-----------------|---------|-------------------|
| Reserved | Port Mask | Super | Reserved | Mcast Fwd State | Entry Type (11) | vlan_id | Multicast Address |

## Supervisory Packet (SUPER)

When set, this field indicates that the packet with a matching multicast destination address is a supervisory packet.

0: Non-supervisory packet

1: Supervisory packet

## Port Mask(2:0) (PORT\_MASK)

This three bit field is the port bit mask that is returned with a found multicast destination address. There may be multiple bits set indicating that the multicast packet may be forwarded to multiple ports (but not the receiving port).

## Multicast Forward State (MCAST\_FWD\_STATE)

Multicast Forward State - Indicates the port state(s) required for the received port on a destination address lookup in order for the multicast packet to be forwarded to the transmit port(s). A transmit port must be in the Forwarding state in order to forward the packet. If the transmit port\_mask has multiple set bits then each forward decision is independent of the other transmit port(s) forward decision.

00 - Forwarding

01 - Blocking/Forwarding/Learning

10 - Forwarding/Learning

11 - Forwarding

The forward state test returns a true value if both the Rx and Tx ports are in the required state.

## Table Entry Type (ENTRY\_TYPE)

Address entry type. Unicast or multicast determined by address bit 40.

11: VLAN address entry. Unicast or multicast determined by address bit 40.

## VLAN ID (VLAN\_ID)

The unique identifier for VLAN identification. This is the 12-bit VLAN ID.

## Packet Address (MULTICAST\_ADDRESS)

This is the 48-bit packet MAC address. For an OUI address, only the upper 24-bits of the address are used in the source or destination address lookup. Otherwise, all 48-bits are used in the lookup.

## 14.3.2.7.1.4 Unicast Address Table Entry

## Table 14-13. Unicast Address Table Entry Bit Values

| 71:70    | 69          | 68       | 67:66       | 65    | 64     | 63:62                     | 61:60           | 59:48    | 47:0            |
|----------|-------------|----------|-------------|-------|--------|---------------------------|-----------------|----------|-----------------|
| Reserved | DLR Unicast | Reserved | Port Number | Block | Secure | Unicast Type (00) or (X1) | Entry Type (01) | Reserved | Unicast Address |

## DLR Unicast

DLR Unicast - When set, this bit indicates that the address is a Device Level Ring (DLR) unicast address. Received packets with a matching destination address will be flooded to the vlan\_member\_list (minus the receive port and the host port). The port\_number field is a don't care when this bit is set. Matching packets received on port 1 egress on port 2. Matching packets received on port 2 egress on port 1. Matching packets received on port 0 egress on ports 1 and 2.

## Port Number (PORT\_NUMBER)

Port Number - This field indicates the port number (not port mask) that the packet with a unicast destination address may be forwarded to. Packets with unicast destination addresses are forwarded only to a single port (but not the receiving port).

<!-- image -->

<!-- image -->

www.ti.com

## Block (BLOCK)

Block - The block bit indicates that a packet with a matching source or destination address should be dropped (block the address).

0 - Address is not blocked.

1 - Drop a packet with a matching source or destination address (secure must be zero)

If block and secure are both set, then they no longer mean block and secure. When both are set, the block and secure bits indicate that the packet is a unicast supervisory (super) packet and they determine the unicast forward state test criteria. If both bits are set then the packet is forwarded if the receive port is in the Forwarding/Blocking/Learning state. If both bits are not set then the packet is forwarded if the receive port is in the Forwarding state.

## Secure (SECURE)

Secure - This bit indicates that a packet with a matching source address should be dropped if the received port number is not equal to the table entry port\_number.

0 - Received port number is a don't care.

1 - Drop the packet if the received port is not the secure port for the source address and do not update the address (block must be zero)

## Unicast Type (UNICAST\_TYPE)

Unicast Type - This field indicates the type of unicast address the table entry contains.

00 - Unicast address that is not ageable.

01 - Ageable unicast address that has not been touched.

10 - OUI address - lower 24-bits are don't cares (not ageable).

11 - Ageable unicast address that has been touched.

## Table Entry Type (ENTRY\_TYPE)

Address entry. Unicast or multicast determined by address bit 40.

01: Address entry. Unicast or multicast determined by address bit 40.

## Packet Address (UNICAST\_ADDRESS)

This is the 48-bit packet MAC address. All 48-bits are used in the lookup.

## 14.3.2.7.1.5 OUI Unicast Address Table Entry

## Table 14-14. OUI Unicast Address Table Entry Bit Values

| 71:64    | 63:62             | 61:60           | 59:48    | 47:24       | 23:0     |
|----------|-------------------|-----------------|----------|-------------|----------|
| Reserved | Unicast Type (10) | Entry Type (01) | Reserved | Unicast OUI | Reserved |

## Unicast Type (UNICAST\_TYPE)

Unicast Type - This field indicates the type of unicast address the table entry contains.

00 - Unicast address that is not ageable.

01 - Ageable unicast address that has not been touched.

10 - OUI address - lower 24-bits are don't cares (not ageable).

11 - Ageable unicast address that has been touched.

## Table Entry Type (ENTRY\_TYPE)

Address entry. Unicast or multicast determined by address bit 40.

01: Address entry. Unicast or multicast determined by address bit 40.

## Packet Address (UNICAST\_OUI)

For an OUI address, only the upper 24-bits of the address are used in the source or destination address lookup.

## 14.3.2.7.1.6 VLAN/Unicast Address Table Entry

## Table 14-15. Unicast Address Table Entry Bit Values

| 71:68    | 67:66       | 65    | 64     | 63:62                     | 61:60           | 59:48   | 47:0            |
|----------|-------------|-------|--------|---------------------------|-----------------|---------|-----------------|
| Reserved | Port Number | Block | Secure | Unicast Type (00) or (X1) | Entry Type (11) | vlan_id | Unicast Address |

## Port Number (PORT\_NUMBER)

Port Number - This field indicates the port number (not port mask) that the packet with a unicast destination address may be forwarded to. Packets with unicast destination addresses are forwarded only to a single port (but not the receiving port).]

## Block (BLOCK)

Block - The block bit indicates that a packet with a matching source or destination address should be dropped (block the address).

0 - Address is not blocked.

1 - Drop a packet with a matching source or destination address (secure must be zero)

If block and secure are both set, then they no longer mean block and secure. When both are set, the block and secure bits indicate that the packet is a unicast supervisory (super) packet and they determine the unicast forward state test criteria. If both bits are set then the packet is forwarded if the receive port is in the Forwarding/Blocking/Learning state. If both bits are not set then the packet is forwarded if the receive port is in the Forwarding state.

## Secure (SECURE)

Secure - This bit indicates that a packet with a matching source address should be dropped if the received port number is not equal to the table entry port\_number.

0 - Received port number is a don't care.

1 - Drop the packet if the received port is not the secure port for the source address and do not update the address (block must be zero)

## Unicast Type (UNICAST\_TYPE)

Unicast Type - This field indicates the type of unicast address the table entry contains.

00 - Unicast address that is not ageable.

01 - Ageable unicast address that has not been touched.

10 - OUI address - lower 24-bits are don't cares (not ageable).

11 - Ageable unicast address that has been touched.

## Table Entry Type (ENTRY\_TYPE)

Address entry. Unicast or multicast determined by address bit 40.

11 - VLAN address entry. Unicast or multicast determined by address bit 40.

## VLAN ID (VLAN\_ID)

The unique identifier for VLAN identification. This is the 12-bit VLAN ID.

SPRUH73Q-October 2011-Revised December 2019

<!-- image -->

<!-- image -->

## Packet Address (UNICAST\_ADDRESS)

This is the 48-bit packet MAC address. All 48-bits are used in the lookup.

## 14.3.2.7.1.7 VLAN Table Entry

## Table 14-16. VLAN Table Entry

| 71:62    | 61:60           | 59:48   | 47:27    | 26:24                 | 23:19    | 18:16                | 15:11    | 10:8                   | 7:3      | 2:0              |
|----------|-----------------|---------|----------|-----------------------|----------|----------------------|----------|------------------------|----------|------------------|
| Reserved | Entry Type (10) | vlan_id | Reserved | Force Untagged Egress | Reserved | Reg Mcast Flood Mask | Reserved | Unreg Mcast Flood Mask | Reserved | Vlan Member List |

## Table Entry Type (ENTRY\_TYPE)

10: VLAN entry

## VLAN ID (VLAN\_ID)

The unique identifier for VLAN identification. This is the 12-bit VLAN ID.

## Force Untagged Packet Egress (FORCE\_UNTAGGED\_EGRESS)

This field causes the packet VLAN tag to be removed on egress (except on port 0).

## Registered Multicast Flood Mask (REG\_MCAST\_FLOOD\_MASK)

Mask used for multicast when the multicast address is found

## Unregistered Multicast Flood Mask (UNREG\_MCAST\_FLOOD\_MASK)

Mask used for multicast when the multicast address is not found

## VLAN Member List (VLAN\_MEMBER\_LIST)

This three bit field indicates which port(s) are members of the associated VLAN.

## 14.3.2.7.2 Packet Forwarding Processes

There are four processes that an incoming received packet may go through to determine packet forwarding. The processes are Ingress Filtering, VLAN\_Aware Lookup, VLAN\_Unaware Lookup, and Egress.

Packet processing begins in the Ingress Filtering process. Each port has an associated packet forwarding state that can be one of four values (Disabled, Blocked, Learning, or Forwarding). The default state for all ports is disabled. The host sets the packet forwarding state for each port. The receive packet processes are described in the following sections.

In the packet ingress process (receive packet process), there is a forward state test for unicast destination addresses and a forward state test for multicast addresses. The multicast forward state test indicates the port states required for the receiving port in order for the multicast packet to be forwarded to the transmit port(s). A transmit port must be in the Forwarding state for the packet to be forwarded for transmission. The mcast\_fwd\_state indicates the required port state for the receiving port as indicated in Table 14-12.

The unicast forward state test indicates the port state required for the receiving port in order to forward the unicast packet. The transmit port must be in the Forwarding state in order to forward the packet. The block and secure bits determine the unicast forward state test criteria. If both bits are set then the packet is forwarded if the receive port is in the Forwarding/Blocking/Learning state. If both bits are not set then the packet is forwarded if the receive port is in the Forwarding state. The transmit port must be in the Forwarding state regardless. The forward state test used in the ingress process is determined by the destination address packet type (multicast/unicast).

In general, packets received with errors are dropped by the address lookup engine without learning, updating, or touching the address. The error condition and the abort are indicated by the CPGMAC\_SL to the ALE. Packets with errors may be passed to the host (not aborted) by a CPGMAC\_SL port if the port has a set rx\_cmf\_en, rx\_cef\_en, or rx\_csf\_en bit(s).

<!-- image -->

Error packets that are passed to the host by the CPGMAC\_SL are considered to be bypass packets by the ALE and are sent only to the host. Error packets do not learn, update, or touch addresses regardless of whether they are aborted or sent to the host. Packets with errors received by the host are forwarded as normal.

The following control bits are in the CPGMAC\_SL1/2\_MacControl register.

rx\_cef\_en: This CPGMAC\_SL control bit enables frames that are fragments, long, jabber, CRC, code, and alignment errors to be forwarded.

rx\_csf\_en: This CPGMAC\_SL bit enables short frames to be forwarded.

rx\_cmf\_en: This CPGMAC\_SL control bit enables mac control frames to be forwarded.

## 14.3.2.7.2.1 Ingress Filtering Process

If (Rx port\_state is Disabled)

then discard the packet if (directed packet)

then use directed port number and go to Egress process if ((ale\_bypass or error packet) and (host port is not the receive port))

then use host portmask and go to Egress process if (((block) and (unicast source address found)) or ((block) and (unicast destination address found)))

then discard the packet if ((enable\_rate\_limit) and (rate limit exceeded) and (not rate\_limit\_tx)

then if (((mcast/bcast destination address found) and (not super)) or (mcast/bcast destination address not found))

then discard the packet if ((not forward state test valid) and (destination address found))

then discard the packet to any port not meeting the requirements

- Unicast destination addresses use the unicast forward state test and multicast destination addresses use the multicast forward state test.

if ((destination address not found) and ((not transmit port forwarding) or (not receive port forwarding)))

then discard the packet to any ports not meeting the above requirements if (source address found) and (secure) and (receive port number != port\_number))

then discard the packet if ((not super) and (drop\_untagged) and ((non-tagged packet) or ((priority tagged) and not(en\_vid0\_mode)) then discard the packet

## If (VLAN\_Unaware)

force\_untagged\_egress = '000000' reg\_mcast\_flood\_mask = '111111' unreg\_mcast\_flood\_mask = '111111' vlan\_member\_list = '111111'

else if (VLAN not found)

force\_untagged\_egress = unknown\_force\_untagged\_egress reg\_mcast\_flood\_mask = unknown\_reg\_mcast\_flood\_mask unreg\_mcast\_flood\_mask = unknown unreg\_mcast\_flood\_mask vlan\_member\_list = unknown\_vlan\_member\_list

## else

force\_untagged\_egress = found force\_untagged\_egress reg\_mcast\_flood\_mask = found reg\_mcast\_flood\_mask unreg\_mcast\_flood\_mask = found unreg\_mcast\_flood\_mask vlan\_member\_list = found vlan\_member\_list

if ((not super) and (vid\_ingress\_check) and (Rx port is not VLAN member))

then discard the packet

<!-- image -->

## www.ti.com

| if ((enable_auth_mode) and (source address not found) and not(destination address found and (super))) then discard the packet   |
|---------------------------------------------------------------------------------------------------------------------------------|
| if (destination address equals source address) then discard the packet                                                          |
| if (vlan_aware) goto VLAN_Aware_Lookup process else goto VLAN_Unaware_Lookup process                                            |

## 14.3.2.7.2.2 VLAN\_Aware Lookup Process

| if ((unicast packet) and (destination address found with or without VLAN) and dlr_unicast) then portmask is the vlan_member_list less the host port and goto Egress process                                                                                  |
|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| if ((unicast packet) and (destination address found with or without VLAN) and (not super)) then portmask is the logical 'AND' of the port_number and the vlan_member_list and goto Egress process                                                            |
| if ((unicast packet) and (destination address found with or without VLAN) and (super)) then portmask is the port_number and goto Egress process                                                                                                              |
| if (Unicast packet) # destination address not found then portmask is vlan_member_list less host port and goto Egress process                                                                                                                                 |
| if ((Multicast packet) and (destination address found with or without VLAN) and (not super)) then portmask is the logical 'AND' of reg_mcast_flood_mask and found destination address/VLAN portmask (port_mask) and vlan_member_list and goto Egress process |
| if ((Multicast packet) and (destination address found with or without VLAN) and (super)) then portmask is the port_mask and goto Egress process                                                                                                              |
| if (Multicast packet) # destination address not found then portmask is the logical 'AND' of unreg_mcast_flood_mask and vlan_member_list then goto Egress process                                                                                             |
| if (Broadcast packet) then use found vlan_member_list and goto Egress process                                                                                                                                                                                |

## 14.3.2.7.2.3 VLAN\_Unaware Lookup Process

| if ((unicast packet) and (destination address found with or without VLAN) and dlr_unicast) then portmask is the vlan_member_list less the host port and goto Egress process                                                                                  |
|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| if ((unicast packet) and (destination address found with or without VLAN) and (not super)) then portmask is the logical 'AND' of the port_number and the vlan_member_list and goto Egress process                                                            |
| if ((unicast packet) and (destination address found with or without VLAN) and (super)) then portmask is the port_number and goto Egress process                                                                                                              |
| if (Unicast packet) # destination address not found then portmask is vlan_member_list less host port and goto Egress process                                                                                                                                 |
| if ((Multicast packet) and (destination address found with or without VLAN) and (not super)) then portmask is the logical 'AND' of reg_mcast_flood_mask and found destination address/VLAN portmask (port_mask) and vlan_member_list and goto Egress process |
| if ((Multicast packet) and (destination address found with or without VLAN) and (super)) then portmask is the port_mask and goto Egress process                                                                                                              |
| if (Multicast packet) # destination address not found then portmask is the logical 'AND' of unreg_mcast_flood_mask and vlan_member_list then goto Egress process                                                                                             |
| if (Broadcast packet) then use found vlan_member_list and goto Egress process                                                                                                                                                                                |

## 14.3.2.7.2.4 Egress Process

| Clear Rx port from portmask (don't send packet to Rx port).                                                                                                                                            |
|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Clear disabled ports from portmask.                                                                                                                                                                    |
| if ((enable_oui_deny) and (OUI source address not found) and (not ale_bypass) and (not error packet) and not ((mcast destination address) and (super))) then Clear host port from portmask             |
| if ((enable_rate_limit) and (rate_limit_tx)) then if (not super) and (rate limit exceeded on any tx port) then clear rate limited tx port from portmask If address not found then super cannot be set. |
| If portmask is zero then discard packet                                                                                                                                                                |
| Send packet to portmask ports.                                                                                                                                                                         |

## 14.3.2.7.3 Learning/Updating/Touching Processes

The learning, updating, and touching processes are applied to each receive packet that is not aborted. The processes are concurrent with the packet forwarding process. In addition to the following, a packet must be received without error in order to learn/update/touch an address.

## 14.3.2.7.3.1 Learning Process

| If (not(Learning or Forwarding) or (enable_auth_mode) or (packet error) or (no_learn)) then do not learn address        |
|-------------------------------------------------------------------------------------------------------------------------|
| if ((Non-tagged packet) and (drop_untagged)) then do not learn address                                                  |
| if ((vlan_aware) and (VLAN not found) and (unknown_vlan_member_list = '000')) then do not learn address                 |
| if ((vid_ingress_check) and (Rx port is not VLAN member) and (VLAN found)) then do not learn address                    |
| if ((source address not found) and (vlan_aware) and not(learn_no_vid)) then learn address with VLAN                     |
| if ((source address not found) and ((not vlan_aware) or (vlan_aware and learn_no_vid))) then learn address without VLAN |

## 14.3.2.7.3.2 Updating Process

| if (dlr_unicast) then do not update address                                                                           |
|-----------------------------------------------------------------------------------------------------------------------|
| If (not(Learning or Forwarding) or (enable_auth_mode) or (packet error) or (no_sa_update)) then do not update address |
| if ((Non-tagged packet) and (drop_untagged)) then do not update address                                               |
| if ((vlan_aware) and (VLAN not found) and (unknown_vlan_member_list = '000')) then do not update address              |
| if ((vid_ingress_check) and (Rx port is not VLAN member) and (VLAN found)) then do not update address                 |
| if ((source address found) and (receive port number != port_number) and (secure or block)) then do not update address |

<!-- image -->

<!-- image -->

www.ti.com if ((source address found) and (receive port number != port\_number))

then update address

## 14.3.2.7.3.3 Touching Process

if ((source address found) and (ageable) and (not touched)) then set touched

## 14.3.2.8 Packet Priority Handling

Packets are received on three ports, two of which are CPGMAC\_SL Ethernet ports and the third port is the CPPI host port. Received packets have a received packet priority (0 to 7 with 7 being the highest priority). The received packet priority is determined as shown:

1. If the first packet LTYPE = 0x8100 then the received packet priority is the packet priority (VLAN tagged and priority tagged packets).
2. If the first packet LTYPE = 0x0800 and byte 14 (following the LTYPE) is equal to 0x45 then the received packet priority is the 6-bit TOS field in byte 15 (upper 6-bits) mapped through the port's DSCP priority mapping register (IPV4 packet).
3. The received packet priority is the source (ingress) port priority (untagged non-IPV4 packet).

The received packet priority is mapped through the receive ports associated 'packet priority to header packet priority mapping register' to obtain the header packet priority (the CPDMA Rx and Tx nomenclature is reversed from the CPGMAC\_SL nomenclature for legacy reasons). The header packet priority is mapped through the 'header priority to switch priority mapping register' to obtain the hardware switch priority (0 to 3 with 3 being the highest priority). The header packet priority is then used as the actual transmit packet priority if the VLAN information is to be sent on egress.

## 14.3.2.9 FIFO Memory Control

Each of the three CPSW\_3G ports has an identical associated FIFO. Each FIFO contains a single logical receive (ingress) queue and four logical transmit queues (priority 0 through 3). Each FIFO memory contains 20,480 bytes (20k) total organized as 2560 by 64-bit words contained in a single memory instance. The FIFO memory is used for the associated port transmit and receive queues. The tx\_max\_blks field in the FIFO's associated Max\_Blks register determines the maximum number of 1k FIFO memory blocks to be allocated to the four logical transmit queues (transmit total).

The rx\_max\_blks field in the FIFO's associated Max\_Blks register determines the maximum number of 1k memory blocks to be allocated to the logical receive queue. The tx\_max\_blks value plus the rx\_max\_blks value must sum to 20 (the total number of blocks in the FIFO). If the sum were less than 20 then some memory blocks would be unused.The default is 17 (decimal) transmit blocks and three receive blocks. The FIFO's follow the naming convention of the Ethernet ports.Host Port is Port0 and External Ports are Port1,2

## 14.3.2.10 FIFO Transmit Queue Control

There are four transmit queues in each transmit FIFO. Software has some flexibility in determining how packets are loaded into the queues and on how packet priorities are selected for transmission (how packets are removed and transmitted from queues). All ports on the switch have identical FIFO's. For the purposes of the below the transmit FIFO is switch egress even though the port 0 transmit FIFO is connected to the CPDMA receive (also switch egress). The CPDMA nomenclature is reversed from the CPGMAC\_SL nomenclature due to legacy reasons.

## 14.3.2.10.1 Normal Priority Mode

When operating in normal mode, lower priority frames are dropped before higher priority frames. The intention is to give preference to higher priority frames. Priority 3 is the highest priority and is allowed to fill the FIFO. Priority 2 will drop packets if the packet is going to take space in the last 2k available. Priority 1 will drop packets if the packet is going to take space in the last 4k available. Priority 0 will drop packets if the packet is going to take space in the last 6k available. If fewer than 4 priorities are to be implemented then the priorities should be mapped such that the highest priorities are used.

For example, if two priorities are going to be used then all packets should be mapped to priorities 3 and 2 and priorities 1 and 0 should be unused. Priority escalation may be used in normal priority mode if desired. Normal priority mode is configured as described below:

- Select normal priority mode by setting tx\_in\_sel[1:0] = 00 for all ports (default value in P0/1/2\_Tx\_In\_Ctl)
- Configure priority mapping to use only the highest priorities if less than 4 priorities are used. Refer to the Packet Priority Handling section of this chapter.

## 14.3.2.10.2 Dual Mac Mode

When operating in dual mac mode the intention is to transfer packets between ports 0 and 1 and ports 0 and 2, but not between ports 1 and 2. Each CPGMAC\_SL appears as a single MAC with no bridging between MAC's. Each CPGMAC\_SL has at least one unique (not the same) mac address.

Dual mac mode is configured as described below:

- Set the ale\_vlan\_aware bit in the ALE\_Control register. This bit configures the ALE to process in vlan aware mode.The CPSW\_3G vlan aware bit (vlan\_aware in CPSW\_Control) determines how packets VLAN's are processed on CPGMAC\_SL egress and does not affect how the ALE processes packets or the packet destination. The CPSW\_3G vlan aware bit may be set or not as required (must be set if VLAN's are to exit the switch).

## · Configure the Port 1 to Port 0 VLAN

Add a VLAN Table Entry with ports 0 and 1 as members (clear the flood masks).

Add a VLAN/Unicast Address Table Entry with the Port1/0 VLAN and a port number of 0. Packets received on port 1 with this unicast address will be sent only to port 0 (egress). If multiple mac addresses are desired for this port then multiple entries of this type may be configured.

## · Configure the Port 2 to Port 0 VLAN

Add a VLAN Table Entry with ports 0 and 2 as members (clear the flood masks).

Add a VLAN/Unicast Address Table Entry with the Port2/0 VLAN and a port number of 0. Packets received on port 2 with this unicast address will be sent only to port 0 (egress). If multiple mac addresses are desired for this port then multiple entries of this type may be configured.

- Packets from the host (port 0) to ports 1 and 2 should be directed. If directed packets are not desired then VLAN with addresses can be added for both destination ports.
- Select the dual mac mode on the port 0 FIFO by setting tx\_in\_sel[1:0] = 01 in P0\_Tx\_In\_Ctl. The intention of this mode is to allow packets from both ethernet ports to be written into the FIFO without one port starving the other port.
- The priority levels may be configured such that packets received on port 1 egress on one CPDMA RX channel while packets received on port 2 egress on a different CPDMA RX channel.

## 14.3.2.10.3 Rate Limit Mode

Rate-limit mode is intended to allow some CPDMA transmit (switch ingress) channels and some CPGMAC\_SL FIFO priorities (switch egress) to be rate-limited. Non rate-limited traffic (bulk traffic) is allowed on non rate-limited channels and FIFO priorities. The bulk traffic does not impact the rate-limited traffic. Rate-limited traffic must be configured to be sent to rate-limited queues (via packet priority handling).

<!-- image -->

<!-- image -->

www.ti.com

The allocated rates for rate-limited traffic must not be oversubscribed. For example, if port 1 is sending 15% rate limited traffic to port 2 priority 3, and port 0 is also sending 10% rate-limited traffic to port 2 priority 3, then the port 2 priority 3 egress rate must be configured to be 25% plus a percent or two for margin. The switch must be configured to allow some percentage of non rate-limited traffic. Non-ratelimited traffic must be configured to be sent to non rate-limited queues. No packets from the host should be dropped, but non rate-limited traffic received on an ethernet port can be dropped. Rate-limited mode is configured as shown:

- Set tx\_in\_sel[1:0] = 10 in P1/2\_Tx\_In\_Ctl to enable ports 1 and 2 transmit FIFO inputs to be configured for rate-limiting queues. Enabling a queue to be rate-limiting with this field affects only the packet being loaded into the FIFO, it does not configure the transmit for queue shaping.
- Configure the number of rate-limited queues for port 1 and 2 transmit FIFO's by setting the tx\_rate\_en[3:0] field in P1/2\_Tx\_In\_Ctl. Rate limited queues must be the highest number. For example, if there are two rate limited queues then 1100 would be written to this field for priorities 3 and 2. This field enables the FIFO to allow rate-limited traffic into rate-limited queues while discriminating against non rate-limited queues.
- Set p1\_priN\_shape\_en and p2\_priN\_shape\_en in the CPSW\_3G PTYPE register. These bits determine which queues actually shape the output data stream. In general, the same priorities that are set in tx\_rate\_en are set in these bits as well, but the FIFO input and output enable bits are separate to allow rate-limiting from the host to non shaped channels if desired. When queue shaping is not enabled for a queue then packets are selected for egress based on priority. When queue shaping is enabled then packets are selected for egress based on queue percentages. If shaping is required on a single queue then it must be priority 3 (priorities 2, 1 and 0 are strict priority). If shaping is required on two queues then it must be on priorities 2 and 3 (priorities 1 and 0 are strict priority). If shaping is required on three queues then it must be priorities 3, 2, and 1 (priority 0 would then get the leftovers). Priority shaping follows the requirements in the IEEE P802.1Qav/D6.0 specification. Priority shaping is not compatible with priority escalation (escalation must be disabled).
- P0\_Tx\_In\_Ctl[1:0] should remain at the default 00 value. Port 0 egress (CPDMA RX) should not be rate-limited.
- The CPDMA is configured for rate-limited transmit (switch ingress) channels by setting the highest bits of the tx\_rlim[7:0] field in the CPDMA DMA\_Control register. If there are two rate limited channels then tx\_rlim[7:0] = 11000000 (the rate limited channels must be the highest priorities). Also, tx\_ptype in the DMA\_Control register must be set (fixed priority mode). Rate limited channels must go to rate-limited FIFO queues, and the FIFO queue rate must not be oversubscribed.

## 14.3.2.11 Packet Padding

VLAN tagged ingress packets of 64 to 67-bytes will be padded to 64-bytes on egress (all ports) if the VLAN is removed on egress.

## 14.3.2.12 Flow Control

There are two types of switch flow control - CPPI port flow control and Ethernet port flow control. The CPPI and Ethernet port naming conventions for data flow into and out of the switch are reversed. For the CPPI port (port 0), transmit operations move packets from external memory into the switch and then out to either or both Ethernet transmit ports (ports 1 and 2). CPPI receive operations move packets that were received on either or both Ethernet receive ports to external memory.

## 14.3.2.12.1 CPPI Port Flow Control

The CPPI port has flow control available for transmit (switch ingress). CPPI receive operations (switch egress) do not require flow control. CPPI Transmit flow control is initiated when enabled and triggered. CPPI transmit flow control is enabled by setting the p0\_flow\_en bit in the CPSW\_Flow\_Control register. CPPI transmit flow control is enabled by default on reset because host packets should not be dropped in any mode of operation.

## 14.3.2.12.2 Ethernet Port Flow Control

The Ethernet ports have flow control available for transmit and receive. Transmit flow control stops the Ethernet port from transmitting packets to the wire (switch egress) in response to a received pause frame. Transmit flow control does not depend on FIFO usage.

The ethernet ports have flow control available for receive operations (packet ingress). Ethernet port receive flow control is initiated when enabled and triggered. Packets received on an ethernet port can be sent to the other ethernet port or the CPPI port (or both). Each destination port can trigger the receive ethernet port flow control. An ethernet destination port triggers another ethernet receive flow control when the destination port is full.

When a packet is received on an ethernet port interface with enabled flow control the below occurs:

- The packet will be sent to all ports that currently have room to take the entire packet.
- The packet will be retried until successful to all ports that indicate they don't have room for the packet.

The flow control trigger to the CPGMAC\_SL will be asserted until the packet has been sent, and there is room in the logical receive FIFO for packet runout from another flow control trigger ( rx\_pkt\_cnt = 0). Ethernet port receive flow control is disabled by default on reset. Ethernet port receive flow control requires that the rx\_flow\_en bit in the associated CPGMAC\_SL be set to one.

When receive flow control is enabled on a port, the port's associated FIFO block allocation must be adjusted. The port RX allocation must increase from the default three blocks to accommodate the flow control runout. A corresponding decrease in the TX block allocation is required. If a sending port ignores a pause frame then packets may overrun on receive (and be dropped) but will not be dropped on transmit. If flow control is disabled for gmii ports, then any packets that are dropped are dropped on transmit and not on receive.

## 14.3.2.12.2.1 Receive Flow Control

When enabled and triggered, receive flow control is initiated to limit the CPGMAC\_SL from further frame reception. Half-duplex mode receive flow control is collision based while full duplex mode issues 802.3X pause frames. In either case, receive flow control prevents frame reception by issuing the flow control appropriate for the current mode of operation. Receive flow control is enabled by the rx\_flow\_en bit in the MacControl register. Receive flow control is triggered (when enabled) when the RX\_FLOW\_TRIGGER input is asserted. The CPGMAC\_SL is configured for collision or IEEE 802.3X flow control via the fullduplex bit in the MacControl register.

## 14.3.2.12.2.1.1 Collision Based Receive Buffer Flow Control

Collision-based receive buffer flow control provides a means of preventing frame reception when the port is operating in half-duplex mode ( fullduplex is cleared in MacControl) . When receive flow control is enabled and triggered, the port will generate collisions for received frames. The jam sequence transmitted will be the twelve byte sequence C3.C3.C3.C3.C3.C3.C3.C3.C3.C3.C3.C3 (hex). The jam sequence will begin no later than approximately as the source address starts to be received. Note that these forced collisions will not be limited to a maximum of 16 consecutive collisions, and are independent of the normal back-off algorithm. Receive flow control does not depend on the value of the incoming frame destination address. A collision will be generated for any incoming packet, regardless of the destination address.

## 14.3.2.12.2.1.2 IEEE 802.3X Based Receive Flow Control

IEEE 802.3x based receive flow control provides a means of preventing frame reception when the port is operating in full-duplex mode ( fullduplex is set in MacControl) . When receive flow control is enabled and triggered, the port will transmit a pause frame to request that the sending station stop transmitting for the period indicated within the transmitted pause frame.

The CPGMAC\_SL will transmit a pause frame to the reserved multicast address at the first available opportunity (immediately if currently idle, or following the completion of the frame currently being transmitted). The pause frame will contain the maximum possible value for the pause time (0xFFFF). The MAC will count the receive pause frame time (decrements 0xFF00 downto zero) and retransmit an outgoing pause frame if the count reaches zero. When the flow control request is removed, the MAC will transmit a pause frame with a zero pause time to cancel the pause request.

<!-- image -->

<!-- image -->

## www.ti.com

Note that transmitted pause frames are only a request to the other end station to stop transmitting. Frames that are received during the pause interval will be received normally (provided the Rx FIFO is not full).

Pause frames will be transmitted if enabled and triggered regardless of whether or not the port is observing the pause time period from an incoming pause frame.

The CPGMAC\_SL will transmit pause frames as described below:

- The 48-bit reserved multicast destination address 01.80.C2.00.00.01.
- The 48-bit source address - SL\_SA(47:0).
- The 16-bit length/type field containing the value 88.08
- The 16-bit pause opcode equal to 00.01
- The 16-bit pause time value FF.FF. A pause-quantum is 512 bit-times. Pause frames sent to cancel a pause request will have a pause time value of 00.00.
- Zero padding to 64-byte data length (The CPGMAC\_SL will transmit only 64 byte pause frames).
- The 32-bit frame-check sequence (CRC word).

All quantities above are hexadecimal and are transmitted most-significant byte first. The least-significant bit is transferred first in each byte.

If rx\_flow\_en is cleared to zero while the pause time is nonzero, then the pause time will be cleared to zero and a zero count pause frame will be sent.

## 14.3.2.12.2.2 Transmit Flow Control

Incoming pause frames are acted upon, when enabled, to prevent the CPGMAC\_SL from transmitting any further frames. Incoming pause frames are only acted upon when the fullduplex and tx\_flow\_en bits in the MacControl register are set. Pause frames are not acted upon in half-duplex mode. Pause frame action will be taken if enabled, but normally the frame will be filtered and not transferred to memory.

MAC control frames will be transferred to memory if the rx\_cmf\_en (Copy MAC Frames) bit in the MacControl register is set. The tx\_flow\_en and fullduplex bits effect whether or not MAC control frames are acted upon, but they have no effect upon whether or not MAC control frames are transferred to memory or filtered.

Pause frames are a subset of MAC Control Frames with an opcode field=0x0001. Incoming pause frames will only be acted upon by the port if:

- tx\_flow\_en is set in MacControl , and
- the frame's length is 64 to rx\_maxlen bytes inclusive, and
- the frame contains no crc error or align/code errors.

The pause time value from valid frames will be extracted from the two bytes following the opcode. The pause time will be loaded into the port's transmit pause timer and the transmit pause time period will begin.

If a valid pause frame is received during the transmit pause time period of a previous transmit pause frame then:

- if the destination address is not equal to the reserved multicast address or any enabled or disabled unicast address, then the transmit pause timer will immediately expire, or
- if the new pause time value is zero then the transmit pause timer will immediately expire, else
- the port transmit pause timer will immediately be set to the new pause frame pause time value. (Any remaining pause time from the previous pause frame will be discarded).

If tx\_flow\_en in MacControl is cleared, then the pause-timer will immediately expire.

The port will not start the transmission of a new data frame any sooner than 512-bit times after a pause frame with a non-zero pause time has finished being received ( GMII\_RXDV going inactive). No transmission will begin until the pause timer has expired (the port may transmit pause frames in order to initiate outgoing flow control). Any frame already in transmission when a pause frame is received will be completed and unaffected.

Incoming pause frames consist of the below:

- A 48-bit destination address equal to:
- The reserved multicast destination address 01.80.C2.00.00.01, or
- The SL\_SA(47:0) input mac source address.
- The 48-bit source address of the transmitting device.
- The 16-bit length/type field containing the value 88.08
- The 16-bit pause opcode equal to 00.01
- The 16-bit pause\_time. A pause-quantum is 512 bit-times.
- Padding to 64-byte data length.
- The 32-bit frame-check sequence (CRC word).

All quantities above are hexadecimal and are transmitted most-significant byte first. The least-significant bit is transferred first in each byte.

The padding is required to make up the frame to a minimum of 64 bytes. The standard allows pause frames longer than 64 bytes to be discarded or interpreted as valid pause frames. The CPGMAC\_SL will recognize any pause frame between 64 bytes and rx\_maxlen bytes in length.

## 14.3.2.13 Packet Drop Interface

The packet drop interface supports an external packet drop engine. The port 1 (and port 2) CPGMAC\_SL receive FIFO VBUSP interface signals are CPSW\_3G outputs. The receive packet interface has an associated packet drop input P1\_RFIFO\_DROP (P2\_RFIFO\_DROP). An external packet drop engine may 'snoop' the received packet header and data to determine whether or not the packet should be dropped.

If the packet is to be dropped the external logic must assert the drop signal by no later than the second clock after the end of packet (or abort) indication from the CPGMAC\_SL. The drop signal should remain asserted until the second clock after the end of packet (or abort) indication. If the packet is not to be dropped then the drop signal should remain deasserted. The CPGMAC\_SL section contains more information on the receive FIFO VBUSP interface signals and end of packet indication.

## 14.3.2.14 Short Gap

The port 1 (and port 2) transmit inter-packet gap (IPG) may be shortened by eight bit times when enabled and triggered. The tx\_short\_gap\_en bit in the SL1\_MacControl (SL2\_MacControl) register enables the gap to be shortened when triggered. The condition is triggered when the port 1 (port 2) transmit FIFO has a user defined number of FIFO blocks used. The port 1 transmit FIFO blocks used determines if the port 1 gap is shortened, and the port 2 transmit FIFO blocks used determines if the port 2 gap is shortened. The CPSW\_Gap\_Thresh register value determines the port 1 short gap threshold, and the CPSW\_Gap\_Thresh register value determines the port 2 short gap threshold.

## 14.3.2.15 Switch Latency

The CPSW\_3G is a store and forward switch. The switch latency is defined as the amount of time between the end of packet reception of the received packet to the start of the output packet transmit.

| Mode       | Latency   |
|------------|-----------|
| Gig (1000) | 880ns     |
| 100        | 1.3us     |
| 10         | 6.5us     |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.3.2.16 Emulation Control

The emulation control input (EMUSUSP) and submodule emulation control registers allow CPSW\_3G operation to be completely or partially suspended. There are three CPSW\_3G submodules that contain emulation control registers (CPGMAC\_SL1, CPGMAC\_SL2, and CPDMA). The submodule emulation control registers must be accessed to facilitate CPSW\_3G emulation control. The CPSW\_3G module enters the emulation suspend state if all three submodules are configured for emulation suspend and the emulation suspend input is asserted.

A partial emulation suspend state is entered if one or two submodules is configured for emulation suspend and the emulation suspend input is asserted. Emulation suspend occurs at packet boundaries. The emulation control feature is implemented for compatibility with other peripherals.

## CPGMAC\_SL Emulation Control

The emulation control input ( TBEMUSUP ) and register bits ( soft and free in the EMControl register) allow CPGMAC\_SL operation to be suspended. When the emulation suspend state is entered, the CPGMAC\_SL will stop processing receive and transmit frames at the next frame boundary. Any frame currently in reception or transmission will be completed normally without suspension. For receive, frames that are detected by the CPGMAC\_SL after the suspend state is entered are ignored. Emulation control is implemented for compatibility with other peripherals.

## CPDMA Emulation Control

The emulation control input ( TBEMUSUP ) and register bits ( soft and free in the EMControl register) allow CPDMA operation to be suspended. When the emulation suspend state is entered, the CPDMA will stop processing receive and transmit frames at the next frame boundary. Any frame currently in reception or transmission will be completed normally without suspension. For transmission, any complete or partial frame in the tx cell fifo will be transmitted. For receive, frames that are detected by the CPDMA after the suspend state is entered are ignored. No statistics will be kept for ignored frames. Emulation control is implemented for compatibility with other peripherals.

The following table shows the operations of the emulation control input and register bits:

## Table 14-17. Operations of Emulation Control Input and Register Bits

|   EMUSUSP | soft   | free   | Description       |
|-----------|--------|--------|-------------------|
|         0 | X      | X      | Normal Operation  |
|         1 | 0      | 0      | Normal Operation  |
|         1 | 1      | 0      | Emulation Suspend |
|         1 | X      | 1      | Normal Operation  |

## Emulation Suspend Input

The emulation suspend input described above comes from the Debug Subsystem. See Chapter 27, Debug Subsystem , to enable an emulation suspend event input for the Ethernet Subsystem (EMAC).

## 14.3.2.17 Software IDLE

The submodule software idle register bits enable CPSW\_3G operation to be completely or partially suspended by software control. There are three CPSW\_3G submodules that contain software idle register bits (CPGMAC\_SL1, CPGMAC\_SL2, and CPDMA). Each of the three submodules may be individually commanded to enter the idle state. The idle state is entered at packet boundaries, and no further packet operations will occur on an idled submodule until the idle command is removed. The CPSW\_3G module enters the idle state when all three submodules are commanded to enter and have entered the idle state. Idle status is determined by reading or polling the three submodule idle bits. The CPSW\_3G is in the idle state when all three submodules are in the idle state. The CPSW\_Soft\_Idle bit may be set if desired after the submodules are in the idle state. The CPSW\_Soft\_Idle bit causes packets to not be transferred from one FIFO to another FIFO internal to the switch.

## 14.3.2.18 Software Reset

The CPSW\_3G software reset register, CPSW\_3GSS software reset register and the three submodule software reset registers enable the CPSW\_3GSS to be reset by software. There are three CPSW\_3G submodules that contain software reset registers (CPGMAC\_SL1, CPGMAC\_SL2, and CPDMA). Each of the three submodules may be individually commanded to be reset by software.

For the CPDMA, the reset state is entered at packet boundaries, at which time the CPDMA reset occurs. The CPGMAC\_SL soft reset is immediate. Submodule reset status is determined by reading or polling the submodule reset bit. If the submodule reset bit is read as a one, then the reset process has not yet completed. The submodule soft reset process could take up to 2ms each. The reset has completed if the submodule reset bit is read as a zero.

After all three submodules (in any order) have been reset and a read of each submodule reset bit indicates that the reset process is complete, the CPSW\_3G software reset register bit may be written to complete the CPSW\_3G module software reset operation. The CPSW\_3G software reset bit controls the reset of the FIFO's, the statistics submodule, and the address lookup engine (ALE). The CPSW\_3G software reset is immediate and will be indicated by reading a zero from the soft reset bit.

The CPSW\_3GSS software reset bit controls the reset of the INT, REGS and CPPI. The CPSW\_3GSS software reset is immediate and will be indicated by reading a zero from the soft reset bit.

## 14.3.2.19 FIFO Loopback

FIFO loopback mode is entered when the fifo\_loopback bit in the CPSW\_Control register is set. FIFO loopback mode causes packets received on a port to be turned around and transmitted back on the same port. Port 0 receive is fixed on channel zero in FIFO loopback mode. The RXSOFOVERRUN statistic is incremented for each packet sent in FIFO loopback mode. Packets sent in with errors are returned with errors (they are not dropped). FIFO loopback is intended as a simple mechanism for test purposes. FIFO loopback should be performed in fullduplex mode only.

## 14.3.2.20 CPSW\_3G Network Statistics

The CPSW\_3G has a set of statistics that record events associated with frame traffic on selected switch ports. The statistics values are cleared to zero 38 clocks after the rising edge of VBUSP\_RST\_N. When one or more port enable bits (stat\_port\_en[2:0]) are set, all statistics registers are write to decrement. The value written will be subtracted from the register value with the result being stored in the register. If a value greater than the statistics value is written, then zero will be written to the register (writing 0xffffffff will clear a statistics location).

When all port enable bits are cleared to zero, all statistics registers are read/write (normal write direct, so writing 0x00000000 will clear a statistics location). All write accesses must be 32-bit accesses. In the below statistics descriptions, 'the port' refers to any enabled port (with a corresponding set stat\_port\_en[2:0] bit).

The statistics interrupt (STAT\_PEND) will be issued if enabled when any statistics value is greater than or equal to 0x80000000. The statistics interrupt is removed by writing to decrement any statistics value greater than 0x80000000. The statistics are mapped into internal memory space and are 32-bits wide. All statistics rollover from 0xFFFFFFFF to 0x00000000.

## 14.3.2.20.1 Rx-only Statistics Descriptions

## 14.3.2.20.1.1 Good Rx Frames (Offset = 0h)

The total number of good frames received on the port. A good frame is defined to be:

- Any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Had a length of 64 to rx\_maxlen bytes inclusive
- Had no CRC error, alignment error or code error.

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

<!-- image -->

<!-- image -->

www.ti.com

## 14.3.2.20.1.2 Broadcast Rx Frames (Offset = 4h)

The total number of good broadcast frames received on the port. A good broadcast frame is defined to be:

- Any data or MAC control frame which was destined for only address 0xFFFFFFFFFFFF
- Had a length of 64 to rx\_maxlen bytes inclusive
- Had no CRC error, alignment error or code error.

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.3 Multicast Rx Frames (Offset = 8h)

The total number of good multicast frames received on the port. A good multicast frame is defined to be:

- Any data or MAC control frame which was destined for any multicast address other than 0xFFFFFFFFFFFF
- Had a length of 64 to rx\_maxlen bytes inclusive
- Had no CRC error, alignment error or code error

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.4 Pause Rx Frames (Offset = Ch)

The total number of IEEE 802.3X pause frames received by the port (whether acted upon or not). Such a frame:

- Contained any unicast, broadcast, or multicast address
- Contained the length/type field value 88.08 (hex) and the opcode 0x0001
- Was of length 64 to rx\_maxlen bytes inclusive
- Had no CRC error, alignment error or code error
- Pause-frames had been enabled on the port (tx\_flow\_en = 1).

The port could have been in either half or full-duplex mode.

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.5 Rx CRC Errors (Offset = 10h)

The total number of frames received on the port that experienced a CRC error. Such a frame:

- Was any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Was of length 64 to rx\_maxlen bytes inclusive
- Had no code/align error,
- Had a CRC error

Overruns have no effect upon this statistic.

A CRC error is defined to be:

- A frame containing an even number of nibbles
- Failing the Frame Check Sequence test

## 14.3.2.20.1.6 Rx Align/Code Errors (Offset = 14h)

The total number of frames received on the port that experienced an alignment error or code error. Such a frame:

- Was any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode

- Was of length 64 to rx\_maxlen bytes inclusive
- Had either an alignment error or a code error

Overruns have no effect upon this statistic.

An alignment error is defined to be:

- A frame containing an odd number of nibbles
- Failing the Frame Check Sequence test if the final nibble is ignored

A code error is defined to be a frame which has been discarded because the port's MRXER pin driven with a one for at least one bit-time's duration at any point during the frame's reception.

Note: RFC 1757 etherStatsCRCAlignErrors Ref. 1.5 can be calculated by summing Rx Align/Code Errors and Rx CRC errors.

## 14.3.2.20.1.7 Oversize Rx Frames (Offset = 18h)

The total number of oversized frames received on the port. An oversized frame is defined to be:

- Was any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Was greater than rx\_maxlen in bytes
- Had no CRC error, alignment error or code error

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.8 Rx Jabbers (Offset = 1Ch)

The total number of jabber frames received on the port. A jabber frame:

- Was any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Was greater than rx\_maxlen in bytes
- Had no CRC error, alignment error or code error

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.9 Undersize (Short) Rx Frames (Offset = 20h)

The total number of undersized frames received on the port. An undersized frame is defined to be:

- Was any data frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Was greater than rx\_maxlen in bytes
- Had no CRC error, alignment error or code error

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.10 Rx Fragments (Offset = 24h)

The total number of frame fragments received on the port. A frame fragment is defined to be:

- Any data frame (address matching does not matter)
- Less than 64 bytes long
- Having a CRC error, an alignment error, or a code error
- Not the result of a collision caused by half duplex, collision based flow control

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.3.2.20.1.11 Rx Start of Frame Overruns (Offset = 84h)

The total number of frames received on the port that had a CPDMA start of frame (SOF) overrun or were dropped by due to FIFO resource limitations. SOF overrun frame is defined to be:

- Any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Any length (including less than 64 bytes and greater than rx\_maxlen bytes)
- The CPDMA had a start of frame overrun or the packet was dropped due to FIFO resource limitations

## 14.3.2.20.1.12 Rx Middle of Frame Overruns (Offset = 88h)

The total number of frames received on the port that had a CPDMA middle of frame (MOF) overrun. MOF overrun frame is defined to be:

- Any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Any length (including less than 64 bytes and greater than rx\_maxlen bytes)
- The CPDMA had a middle of frame overrun

## 14.3.2.20.1.13 Rx DMA Overruns (Offset = 8Ch)

The total number of frames received on the port that had either a DMA start of frame (SOF) overrun or a DMA MOF overrun. An Rx DMA overrun frame is defined to be:

- Any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Any length (including less than 64 bytes and greater than rx\_maxlen bytes)
- The CPGMAC\_SL was unable to receive it because it did not have the DMA buffer resources to receive it (zero head descriptor pointer at the start or during the middle of the frame reception)

CRC errors, alignment errors and code errors have no effect upon this statistic.

## 14.3.2.20.1.14 Rx Octets (Offset = 30h)

The total number of bytes in all good frames received on the port. A good frame is defined to be:

- Any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Of length 64 to rx\_maxlen bytes inclusive
- Had no CRC error, alignment error or code error

See the Rx Align/Code Errors and Rx CRC errors statistic descriptions for definitions of alignment, code and CRC errors. Overruns have no effect upon this statistic.

## 14.3.2.20.1.15 Net Octets (Offset = 80h)

The total number of bytes of frame data received and transmitted on the port. Each frame counted:

- was any data or MAC control frame destined for any unicast, broadcast or multicast address (address match does not matter)
- Any length (including less than 64 bytes and greater than rx\_maxlen bytes)

Also counted in this statistic is:

- Every byte transmitted before a carrier-loss was experienced
- Every byte transmitted before each collision was experienced, (i.e. multiple retries are counted each time)
- Every byte received if the port is in half-duplex mode until a jam sequence was transmitted to initiate flow control. (The jam sequence was not counted to prevent double-counting)

Error conditions such as alignment errors, CRC errors, code errors, overruns and underruns do not affect the recording of bytes by this statistic.

The objective of this statistic is to give a reasonable indication of ethernet utilization

## 14.3.2.20.2 Tx-only Statistics Descriptions

The maximum and minimum transmit frame size is software controllable.

## 14.3.2.20.2.1 Good Tx Frames (Offset = 34h)

The total number of good frames received on the port. A good frame is defined to be:

- Any data or MAC control frame which matched a unicast, broadcast or multicast address, or matched due to promiscuous mode
- Any length
- Had no late or excessive collisions, no carrier loss and no underrun

## 14.3.2.20.2.2 Broadcast Tx Frames (Offset = 38h)

The total number of good broadcast frames received on the port. A good broadcast frame is defined to be:

- Any data or MAC control frame which was destined for only address 0xFFFFFFFFFFFF
- Any length
- Had no late or excessive collisions, no carrier loss and no underrun

## 14.3.2.20.2.3 Multicast Tx Frames (Offset = 3Ch)

The total number of good multicast frames received on the port. A good multicast frame is defined to be:

- Any data or MAC control frame which was destined for any multicast address other than 0xFFFFFFFFFFFF
- Any length
- Had no late or excessive collisions, no carrier loss and no underrun

## 14.3.2.20.2.4 Pause Tx Frames (Offset = 40h)

This statistic indicates the number of IEEE 802.3X pause frames transmitted by the port.

Pause frames cannot underrun or contain a CRC error because they are created in the transmitting MAC, so these error conditions have no effect upon the statistic. Pause frames sent by software will not be included in this count.

Since pause frames are only transmitted in full duplex carrier loss and collisions have no effect upon this statistic.

Transmitted pause frames are always 64 byte multicast frames so will appear in the Tx Multicast Frames and 64octet Frames statistics.

## 14.3.2.20.2.5 Collisions (Offset = 48h)

This statistic records the total number of times that the port experienced a collision. Collisions occur under two circumstances.

1. When a transmit data or MAC control frame:
- Was destined for any unicast, broadcast or multicast address
- Was any size
- Had no carrier loss and no underrun
- Experienced a collision. A jam sequence is sent for every non-late collision, so this statistic will increment on each occasion if a frame experiences multiple collisions (and increments on late collisions)

CRC errors have no effect upon this statistic.

2. When the port is in half-duplex mode, flow control is active, and a frame reception begins.

<!-- image -->

<!-- image -->

www.ti.com

## 14.3.2.20.2.6 Single Collision Tx Frames (Offset = 4Ch)

The total number of frames transmitted on the port that experienced exactly one collision. Such a frame:

- Was any data or MAC control frame destined for any unicast, broadcast or multicast address
- Was any size
- Had no carrier loss and no underrun
- Experienced one collision before successful transmission. The collision was not late.

CRC errors have no effect upon this statistic.

## 14.3.2.20.2.7 Multiple Collision Tx Frames (Offset = 50h)

The total number of frames transmitted on the port that experienced multiple collisions. Such a frame:

- Was any data or MAC control frame destined for any unicast, broadcast or multicast address
- Was any size
- Had no carrier loss and no underrun
- Experienced 2 to 15 collisions before being successfully transmitted. None of the collisions were late.

CRC errors have no effect upon this statistic.

## 14.3.2.20.2.8 Excessive Collisions (Offset = 54h)

The total number of frames for which transmission was abandoned due to excessive collisions. Such a frame:

- Was any data or MAC control frame destined for any unicast, broadcast or multicast address
- Was any size
- Had no carrier loss and no underrun
- Experienced 16 collisions before abandoning all attempts at transmitting the frame. None of the collisions were late.

CRC errors have no effect upon this statistic.

## 14.3.2.20.2.9 Late Collisions (Offset = 58h)

The total number of frames on the port for which transmission was abandoned because they experienced a late collision. Such a frame:

- Was any data or MAC control frame destined for any unicast, broadcast or multicast address
- Was any size
- Experienced a collision later than 512 bit-times into the transmission. There may have been up to 15 previous (non-late) collisions which had previously required the transmission to be re-attempted. The Late Collisions statistic dominates over the single, multiple and excessive Collisions statistics - if a late collision occurs the frame will not be counted in any of these other three statistics.

CRC errors have no effect upon this statistic.

## 14.3.2.20.2.10 Tx Underrun (Offset = 5Ch)

There should be no transmitted frames that experience underrun.

## 14.3.2.20.2.11 Deferred Tx Frames (Offset = 44h)

The total number of frames transmitted on the port that first experienced deferment. Such a frame:

- Was any data or MAC control frame destined for any unicast, broadcast or multicast address
- Was any size
- Had no carrier loss and no underrun
- Experienced no collisions before being successfully transmitted

- Found the medium busy when transmission was first attempted, so had to wait.

CRC errors have no effect upon this statistic.

## 14.3.2.20.2.12 Carrier Sense Errors (Offset = 60h)

The total number of frames received on the port that had a CPDMA middle of frame (MOF) overrun. MOF overrun frame is defined to be:

- Was any data or MAC control frame destined for any unicast, broadcast or multicast address
- Was any size
- The carrier sense condition was lost or never asserted when transmitting the frame (the frame is not retransmitted). This is a transmit only statistic. Carrier Sense is a don't care for received frames. Transmit frames with carrier sense errors are sent until completion and are not aborted.

CRC errors have no effect upon this statistic.

## 14.3.2.20.2.13 Tx Octets (Offset = 64h)

The total number of bytes in all good frames transmitted on the port. A good frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Was any size
- Had no late or excessive collisions, no carrier loss and no underrun.

## 14.3.2.20.3 Rx- and Tx-Shared Statistics Descriptions

## 14.3.2.20.3.1 Rx + Tx 64 Octet Frames (Offset = 68h)

The total number of 64-byte frames received and transmitted on the port. Such a frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Did not experience late collisions, excessive collisions, or carrier sense error
- Was exactly 64 bytes long. (If the frame was being transmitted and experienced carrier loss that resulted in a frame of this size being transmitted, then the frame will be recorded in this statistic).

CRC errors, code/align errors and overruns do not affect the recording of frames in this statistic.

## 14.3.2.20.3.2 Rx + Tx 65-127 Octet Frames (Offset = 6Ch)

The total number of frames of size 65 to 127 bytes received and transmitted on the port. Such a frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Did not experience late collisions, excessive collisions, or carrier sense error
- Was 65 to 127 bytes long

CRC errors, code/align errors, underruns and overruns do not affect the recording of frames in this statistic.

## 14.3.2.20.3.3 Rx + Tx 128-255 Octet Frames (Offset = 70h)

The total number of frames of size 128 to 255 bytes received and transmitted on the port. Such a frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Did not experience late collisions, excessive collisions, or carrier sense error
- Was 128 to 255 bytes long

CRC errors, code/align errors, underruns and overruns do not affect the recording of frames in this statistic.

<!-- image -->

<!-- image -->

www.ti.com

## 14.3.2.20.3.4 Rx + Tx 256-511 Octet Frames (Offset = 74h)

The total number of frames of size 256 to 511 bytes received and transmitted on the port. Such a frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Did not experience late collisions, excessive collisions, or carrier sense error
- Was 256 to 511 bytes long

CRC errors, code/align errors, underruns and overruns do not affect the recording of frames in this statistic.

## 14.3.2.20.3.5 Rx + Tx 512-1023 Octet Frames (Offset = 78h)

The total number of frames of size 512 to 1023 bytes received and transmitted on the port. Such a frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Did not experience late collisions, excessive collisions, or carrier sense error
- Was 512 to 1023 bytes long

CRC errors, code/align errors, underruns and overruns do not affect the recording of frames in this statistic.

## 14.3.2.20.3.6 Rx + Tx 1024\_Up Octet Frames (Offset = 7Ch)

The total number of frames of size 1024 to rx\_maxlen bytes for receive or 1024 up for transmit on the port. Such a frame is defined to be:

- Any data or MAC control frame which was destined for any unicast, broadcast or multicast address
- Did not experience late collisions, excessive collisions, or carrier sense error
- Was 1024 to rx\_maxlen bytes long on receive, or any size on transmit

CRC errors, code/align errors, underruns and overruns do not affect the recording of frames in this statistic.

## Table 14-18. Rx Statistics Summary

| Rx Statistic         | Frame/ Oct   | Rx/ Rx+T x   | Frame       | Frame       | Frame        | Frame        | Frame        | Type Frame   | Type Frame   | Type Frame   | Type Frame   | Type Frame   | Type Frame   | Type Frame       | Type Frame   | Event      | Event     | Event       | Event     | Event       |
|----------------------|--------------|--------------|-------------|-------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|--------------|------------------|--------------|------------|-----------|-------------|-----------|-------------|
| Rx Statistic         | Frame/ Oct   | Rx/ Rx+T x   | MAC         | MAC         | control Data | control Data | control Data | <64          | 64           | 65- 127      | 128- 255     | 256- 511     | 512- 1023    | 1024- rx_ maxlen | >rx_ maxle n | Flow Coll. | CRC Error | Align/ Code | Over- run | Addr. Disc. |
| Rx Statistic         | Frame/ Oct   | Rx/ Rx+T x   | Pause frame | Non- paus e | Multi- cast  | Broad- cast  | Uni- cast    | <64          | 64           | 65- 127      |              |              |              |                  | >rx_ maxle n | Flow Coll. | CRC Error | Align/ Code | Over- run | Addr. Disc. |
| Good Rx Frames       | F            | Rx           | (y|         | y|          | y|           | y|           | y)           | n            | (y|          | y|           | y|           | y|           | y| y)        |                  | n            | -          | n         | n           | -         | n           |
| Broadcast Rx Frames  | F            | Rx           | (%|         | %|          | n            | y)           | n            | n            | (y|          | y|           | y|           | y|           | y|           | y)               | n            | -          | n         | n           | -         | n           |
| Multicast Rx Frames  | F            | Rx           | (%|         | %|          | y)           | n            | n            | n            | (y|          | y|           | y|           | y|           | y|           | y)               | n            | -          | n         | n           | -         | n           |
| Pause Rx Frames      | F            | Rx           | y           | n           | n            | n            | n            | n            | (y|          | y|           | y|           | y|           | y|           | y)               | n            | -          | n         | n           | -         | -           |
| Rx CRC Errors        | F            | Rx           | (y|         | y|          | y|           | y|           | y)           | n            | (y|          | y|           | y|           | y|           | y|           | y)               | n            | -          | y         | n           | -         | n           |
| Rx Align/Code Errors | F            | Rx           | (y|         | y|          | y|           | y|           | y)           | n            | (y|          | y|           | y|           | y|           | y|           | y)               | n            | -          | -         | y           | -         | n           |
| Oversized Rx Frames  | F            | Rx           | (y|         | y|          | y|           | y|           | y)           | n            | n            | n            | n            | n            | n            | n                | y            | -          | n         | n           | -         | n           |
| Rx Jabbers           | F            | Rx           | (y|         | y|          | y|           | y|           | y)           | n            | n            | n            | n            | n            | n n          |                  | y            | -          | (y|       | y)          | -         | n           |
| Undersized Rx Frames | F            | Rx           | n           | n           | (y|          | y|           | y)           | y            | n            | n            | n            | n            | n            | n                | n            | -          | n         | n           | -         | n           |
| Rx Fragments         | F            | Rx           | n           | n           | (y|          | y|           | y)           | y^^          | n            | n            | n            | n            | n            | n                | n            | -          | (y|       | y)          | -         | -           |
| Rx Overruns          | F            | Rx           | (y|         | y|          | y|           | y|           | y)           | (y|          | y|           | y|           | y|           | y|           | y|           | y|               | y)           | -          | -         | -           | y         | n           |
| 64octet Frames       | F            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | n            | y            | n            | n            | n            | n            | n                | n            | -          | -         | -           | -         | n           |
| 65-127octet Frames   | F            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | n            | n            | y            | n            | n            | n            | n                | n            | -          | -         | -           | -         | n           |
| 128-255octet Frames  | F            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | n            | n            |              | y            | n            | n            | n                | n            | -          | -         | -           | -         | n           |
| 256-511octet Frames  | F            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | n            | n            | n            | n            | y            | n            | n                | n            | -          | -         | -           | -         | n           |
| 512-1023octet Frames | F            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | n            | n            | n            | n            | n            | y            | n                | n            | -          | -         | -           | -         | n           |
| 1024-UPoctet Frames  | F            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | n            | n            | n            | n            | n            | n            | y                | n            | -          | -         | -           | -         | n           |
| Rx Octets            | O            | Rx           | (y|         | y|          | y|           | y|           | y)           | n            | (y|          | y|           | y|           | y|           | y|           | y)               | n            | -          | n         | n           | -         | n           |
| Net Octets           | O            | Rx+T x       | (y|         | y|          | y|           | y|           | y)           | (y|          | y|           | y|           | y|           | y|           | y|           | y|               | y|           | y)         | -         | -           | -         | -           |

<!-- image -->

<!-- image -->

www.ti.com

## Notes for the Rx Statistics Summary:

1. 'AND' is assumed horizontally across the table between all conditions which form the statistic (marked y or n) except where (y|y), meaning 'OR' is indicated. Parentheses are significant.
2. '-' indicates conditions which are ignored in the formations of the statistic.
3. Statistics marked 'Rx+Tx' are formed by summing the Rx and Tx statistics, each of which is formed independently.
4. The non-pause column refers to all MAC control frames (i.e. frames with length/type=88.08) with opcodes other than 0x0001. The pauseframe column refers to MAC frames with the opcode=0x0001.
5. The multicast, broadcast and unicast columns in the table refer to non-MAC Control/non-pause frames (i.e. data frames).
6. '%' If either a MAC control frame or pause frame has a multicast or broadcast destination address then the appropriate statistics will be updated.
7. 'y^' Frame fragments are not counted if less than 8 bytes.
8. flow coll. are half-duplex collisions forced by the MAC to achieve flow-control. A collision will be forced during the first 8 bytes so should not show in frame fragments. Some of the '-'s in this column might in reality be 'n's.
9. The rx\_overruns stat show above is for rx\_mof\_overruns and rx\_sof\_overruns added together.

<!-- image -->

<!-- image -->

## Table 14-19. Tx Statistics Summary

|                              | Frame/ Oct   |            | Frame Type    | Frame Type   | Frame Type   | Frame Type   | Frame Type   | Frame Size (bytes)   | Frame Size (bytes)   | Frame Size (bytes)   | Frame Size (bytes)   | Frame Size (bytes)   | Frame Size (bytes)   |        |           |      |    |       |    |      |               |           |             |
|------------------------------|--------------|------------|---------------|--------------|--------------|--------------|--------------|----------------------|----------------------|----------------------|----------------------|----------------------|----------------------|--------|-----------|------|----|-------|----|------|---------------|-----------|-------------|
|                              | Frame/ Oct   | Tx/ Rx+ Tx | MAC control   | MAC control  | Data         | Data         | Data         |                      | 65-                  |                      |                      |                      | 1024 -               |        |           |      |    |       |    |      | Carri Que ued | Defe rred | Und er- run |
| Tx Statistic                 | Frame/ Oct   | Tx/ Rx+ Tx | Paus e (MA C) | Any (CP U)   | Multi - cast | Broa d- cast | Uni- cast    | 64                   | 127                  | 128- 255             | 256- 511             | 512- 1023            | 1535                 | > 1535 | CRC Error | Flow | 1  | 2- 15 | 16 | Late | Carri Que ued | Defe rred | Und er- run |
| Good Tx Frames               | F            | Tx         | (y|           | y|           | y| y|        | y)           |              | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | -  | -     | n  | n    | -             | -         | n           |
| Broadcast Tx Frames          | F            | Tx         | n             | (%|          | n y)         | n            |              | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | -  | -     | n  | n    | -             | -         | n           |
| Multicast Tx Frames          | F            | Tx         | (y|           | %|           | y) n         | n            |              | y|                   | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | -  | -     | n  | n    | -             | -         | n           |
| Pause Tx Frames              | F            | Tx         | y             | n            | n n          | n            |              | y                    | n                    | n                    | n                    | n                    | n                    | n      | -         | -    | -  | -     | -  | -    | -             | -         | -           |
| Collisions                   | F            | Tx         | n             | (y|          | y| y|        | y)           |              | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | (+   | +  | +     | +  | +)   | -             | -         | -           |
| Single Collision Tx Frames   | F            | Tx         | n             | (y|          | y| y|        |              | y)           | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | y  | n     | n  | n    | -             | -         | -           |
| Multiple Collision Tx Frames | F            | Tx         | n             | (y|          | y|           | y|           | y)           | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | n  | y     | n  | n    | -             | -         | -           |
| Excessive Collisions         | F            | Tx         | n             | (y|          | y| y|        |              | y)           | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | n  | n     | y  | n    | -             | -         | -           |
| Late Collisions              | F            | Tx         | n             | (y|          | y|           | y|           | y)           | n                    | (y|                  | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | -  | -     | -  | y    | -             | -         | -           |
| Deferred Tx Frames           | F            | Tx         | n             | (y|          | y|           | y|           | y)           | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    | n  | n     | n  | n    | -             | y         | n           |
| Carrier Sense Errors         | F            | Tx         | (y|           | y|           | y|           | y|           | y)           | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         | -    |    | - -   | -  | -    | -             | -         | -           |
| 64octet Frames               | F            | Rx+ Tx     | (y|           | y|           | y|           | y|           | y)           | y                    | n                    | n                    | n                    | n                    | n                    | n      | -         | -    | -  | -     | n  | n    | -             | -         | -           |
| 65-127octet Frames           | F            | Rx+ Tx     | (y|           | y|           | y|           | y|           | y)           | n                    | y                    | n                    | n                    | n                    | n                    | n      | -         | -    | -  | -     | n  | n    | -             | -         | -           |
| 128-255octet Frames          | F            | Rx+ Tx     | (y|           | y|           | y|           | y|           | y)           | n                    | n                    | y                    | n                    | n                    | n                    | n      | -         | -    | -  | -     | n  | n    | -             | -         | -           |
| 256-511octet Frames          | F            | Rx+ Tx     | (y|           | y|           | y|           | y|           | y)           | n                    | n                    | n                    | y                    | n                    | n                    | n      | -         | -    | -  | -     | n  | n    | -             | -         | -           |
| 512-1023octet Frames         | F            | Rx+ Tx     | (y|           | y|           | y|           | y|           | y)           | n                    | n                    | n                    | n                    | y                    | n                    | n      | -         | -    | -  | -     | n  | n    | -             | -         | -           |
| 1024-UPoctet Frames          | F            | Rx+ Tx     | (y|           | y|           | y|           | y|           | y)           | n                    | n                    | n                    |                      | n                    | y                    | y      | -         | -    | -  | -     | n  | n    | -             | -         | -           |
| Tx Octets                    | O            | Tx         | (y|           | y|           |              |              |              |                      |                      |                      | n                    |                      |                      | y)     | -         | -    | -  | -     | n  | n    | -             | -         | n           |
| Net Octets                   |              | Rx+        | (y|           |              | y|           | y|           | y)           | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   |        |           | -    | $  | $     |    | $    | -             | -         | -           |
|                              | O            | Tx         |               | y|           | y| y|        | y)           |              | (y|                  | y|                   | y|                   | y|                   | y|                   | y|                   | y)     | -         |      |    |       |    | $    |               |           |             |

## Notes for the Tx Statistics Summary:

1. "AND" is assumed horizontally across the table between all conditions which form the statistic (marked y or n) except where (y|y), meaning 'OR' is indicated. Parentheses are significant.
2. '-' indicates conditions which are ignored in the formations of the statistic.
3. Statistics marked 'Rx+Tx' are formed by summing the Rx and Tx statistics, each of which is formed independently.
4. Pause (MAC) frames are issued in the MAC as perfect (no CRC error) 64 byte frames in full duplex only, so they cannot collide.
5. '%' If a CPU sourced MAC control frame has a multicast or broadcast destination address then the appropriate statistics will be updated.
6. '+' indicates collisions which are 'summed' (i.e. every collision is counted in the Collisions statistic). Jam sequences used for halfduplex flow control are also counted.
7. '$' Every byte written on the wire during each retry attempt is also counted in addition to frames which experience no collisions or carrier loss.
8. The flow collision type is for half-duplex collisions forced by the MAC to achieve flow control. Some of the '-'s in this column might in reality be 'n's. To prevent double-counting, Net Octets are unaffected by the jam sequence - the 'received' bytes, however, are counted. (See Table 14-18.)
9. When the transmit Tx FIFO is drained due to the MAC being disabled or link being lost, then the frames being purged will not appear in the Tx statistics.

<!-- image -->

www.ti.com