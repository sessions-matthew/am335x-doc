<!-- image -->

www.ti.com

## 16.2.9 Communications Port Programming Interface (CPPI) 4.1 DMA

The CPPI DMA module supports the transmission and reception of USB packets. The CPPI DMA is designed to facilitate the segmentation and reassembly of CPPI compliant packets to/from smaller data blocks that are natively compatible with the specific requirements of each networking port. Multiple Tx and Rx channels are provided for all endpoints (excluding endpoint 0) within the DMA allowing multiple segmentation or reassembly operations to be effectively performed in parallel (but not actually simultaneously). The DMA controller maintains state information for each of the ports/channels which allows packet segmentation and reassembly operations to be time division multiplexed between channels in order to share the underlying DMA hardware. A DMA scheduler is used to control the ordering and rate at which this multiplexing occurs.

The CPPI (version 4.1) DMA controller sub-module is a common 15 port DMA controller. It supports 15 Tx and 15 Rx channels and each port attaches to the associated endpoint in the controller. Port 1 maps to endpoint 1 and Port 2 maps to endpoint 2 and so on with Port 15 mapped to endpoint 15; endpoint 0 can not utilize the DMA and the firmware is responsible to load or offload the endpoint 0 FIFO via CPU.

## 16.2.9.1 CPPI Terminology

Host -The host is an intelligent system resource that configures and manages each communications control module. The host is responsible for allocating memory, initializing all data structures, and responding to port interrupts.

Main Memory -The area of data storage managed by the CPU. The CPPI DMA (CDMA) reads and writes CPPI packets from and to main memory. This memory can exist internal or external from the device.

Queue Manager (QM) -The QM is responsible for accelerating management of a variety of Packet Queues and Free Descriptor / Buffer Queues. It provides status indications to the CDMA Scheduler when queues are empty or full.

CPPI DMA (CDMA) -The CDMA is responsible for transferring data between the CPPI FIFO and Main Memory. It acquires free Buffer Descriptor from the QM (Receive Submit Queue) for storage of received data, posts received packets pointers to the Receive Completion Queue, transmits packets stored on the Transmit Submit Queue (Transmit Queue) , and posts completed transmit packets to the Transmit Completion Queue.

CDMA Scheduler (CDMAS) -The CDMAS is responsible for scheduling CDMA transmit and receive operations. It uses Queue Indicators from the QM and the CDMA to determine the types of operations to schedule.

CPPI FIFO -The CPPI FIFO provides FIFO interfaces (for each of the 15 transmit and 15 receive endpoints).

Transfer DMA (XDMA) -The XDMA receives DMA requests from the Mentor USB 2.0 Core and initiates DMAs to the CPPI FIFO.

Endpoint FIFOs -The Endpoint FIFOs are the USB packet storage elements used by the Mentor USB 2.0 Core for packet transmission or reception. The XDMA transfers data between the CPPI FIFO and the Endpoint FIFOs for transmit operations and between the Endpoint FIFOs and the CPPI FIFO for receive operations.

Port -Aport is the communications module (peripheral hardware) that contains the control logic for Direct Memory Access for a single transmit/receive interface or set of interfaces. Each port may have multiple communication channels that transfer data using homogenous or heterogeneous protocols. A port is usually subdivided into transmit and receive pairs which are independent of each other. Each endpoint, excluding endpoint 0, has its own dedicated port.

Channel -Achannel refers to the sub-division of information (flows) that is transported across ports. Each channel has associated state information. Channels are used to segregate information flows based on the protocol used, scheduling requirements (example: CBR, VBR, ABR), or concurrency requirements (that is, blocking avoidance). All fifteen ports per USB Module have dedicated single channels, channel 0, associated for their use in a USB application.

Universal Serial Bus (USB)

<!-- image -->

Data Buffer -Adata buffer is a single data structure that contains payload information for transmission to or reception from a port. A data buffer is a byte aligned contiguous block of memory used to store packet payload data. A data buffer may hold any portion of a packet and may be linked together (via descriptors) with other buffers to form packets. Data buffers may be allocated anywhere within the 32-bit memory space. The Buffer Length field of the packet descriptor indicates the number of valid data bytes in the buffer. There may be from 1 to 4M-1 valid data bytes in each buffer.

Host Buffer Descriptor (Buffer Descriptor) -Abuffer descriptor is a single data structure that contains information about one or more data buffers. This type of descriptor is required when more than one descriptor is needed to define an entire packet, i.e., it either defines the middle of a packet or end of a packet.

Start of Packet (SOP) -Packet along side Buffer Descriptors are used to hold information about Packets. When multiple Descriptors are used to hold a single packet information or a single Descriptor is used to hold a single packet information, the first descriptor is referred to as a Packet Descriptor which is also Start-of-Packet Descriptor.

Host Packet Descriptor (Packet Descriptor) -Apacket descriptor is another name for the first buffer descriptor within a packet. Some fields within a data buffer descriptor are only valid when it is a packet descriptor including the tags, packet length, packet type, and flags. This type of descriptor is always used to define a packet since it provides packet level information that is useful to both the ports and the Host in order to properly process the packet. It is the only descriptor used when single descriptor solely defines a packet. When multiple descriptors are needed to define a packet, the packet descriptor is the first descriptor used to define a packet.

Free Descriptor/Buffer Queue -Afree descriptor/buffer queue is a hardware managed list of available descriptors with pre-linked empty buffers that are to be used by the receive ports for host type descriptors. Free Descriptor/Buffer Queues are implemented by the Queue Manager.

Teardown Descriptor -Teardown Descriptor is a special structure which is not used to describe either a packet or a buffer but is instead used to describe the completion of a channel halt and teardown event. Channel teardown is an important function because it ensures that when a connection is no longer needed that the hardware can be reliably halted and any remaining packets which had not yet been transmitted can be reclaimed by the Host without the possibility of losing buffer or descriptor references (which results in a memory leak).

Packet Queue -Apacket queue is hardware managed list of valid (i.e. populated) packet descriptors that is used for forwarding a packet from one entity to another for any number of purposes. NOTE: All descriptors (regardless of type) must be allocated at addresses that are naturally aligned to the smallest power of 2 that is equal to or greater than the descriptor size.

## 16.2.9.2 Data Structures

Two data structures are mainly used to identify data buffers used by packet and buffer descriptors. A third Descriptor, Teardown Descriptor, exists. The purpose of this Descriptor is a channel halt and teardown event. Each of these Descriptor layouts as well as bit fields are shown below.

## 16.2.9.2.1 Host Packet Descriptor/ Packet Descriptor (SOP Descriptor)

Descriptors are designed to be used when USB like application requires support for true, unlimited fragment count scatter/gather type operations. The Packet Descriptor is the first descriptor on multiple descriptors setup or the only descriptor in a single descriptors setup. The Packet Descriptor contains the following information:

- Indicator which identifies the descriptor as a packet descriptor (always 10h
- Source and destination tags (reserved)
- Packet type
- Packet length
- Protocol specific region size
- Protocol specific control/statusbits
- Pointer to the first valid byte in the SOP data buffer

<!-- image -->

## www.ti.com

- Length of the SOP data buffer
- Pointer to the next buffer descriptor in the

Packet descriptors can vary in size by design of their defined fields from 32 bytes up to 104 bytes. Within this range, packet descriptors always contain 32 bytes of required information and may also contain 8 bytes of software specific tagging information and up to 64 bytes (indicated in 4 byte increments) of protocol specific information. How much protocol specific information (and therefore the allocated size of the descriptors) is application dependent. Port will make use of the first 32 bytes only.

From a general USB use perspective, a 32-byte descriptor size is suffix and the use of this size is expected for a normal USB usage.

The packet descriptor layout is shown in Figure 16-13 and described within Table 16-9 through Table 1616.

Figure 16-13. Packet Descriptor Layout

<!-- image -->

Table 16-9. Packet Descriptor Word 0 (PD0) Bit Field Descriptions

| Bits   | Field Name                         | Description                                                                                                                                                                                                                                                                                                                                                                           |
|--------|------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27  | Descriptor type                    | The host packet descriptor type is 16 decimal (10h). The CPU initializes this field.                                                                                                                                                                                                                                                                                                  |
| 26-22  | Protocol-specific valid word count | This field indicates the valid number of 32-bit words in the protocol-specific region. The CPU initializes this field. This is encoded in increments of 4 bytes as: 0 = 0 byte 1 = 4 bytes ... 16 = 64 bytes 17-31 = Reserved                                                                                                                                                         |
| 21-0   | Packet length                      | The length of the packet in bytes. If the packet length is less than the sum of the buffer lengths, then the packet data will be truncated. A packet length greater than the sum of the buffers is an error. The valid range for the packet length is 0 to (4M - 1) bytes. The CPU initializes this field for transmitted packets; the DMA overwrites this field on packet reception. |

Universal Serial Bus (USB)

<!-- image -->

Table 16-10. Packet Descriptor Word 1 (PD1) Bit Field Descriptions

| Bits   | Field Name                | Description                                                                                                                                                                                       |
|--------|---------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27  | Source Tag; Port #        | This field indicates the port number (0-31) from which the packet originated. The DMA overwrites this field on packet reception. This is the RX Endpoint number from which the packet originated. |
| 26-21  | Source Tag; Channel #     | This field indicates the channel number within the port from which the packet originated. The DMA overwrites this field on packet reception. This field is always 0-67.                           |
| 20-16  | Source Tag: Sub-channel # | This field indicates the sub-channel number (0-31) within the channel from which the packet originated. The DMA overwrites this field on packet reception. This field is always 0.                |
| 15-0   | Destination Tag           | This field is application-specific. This field is always 0.                                                                                                                                       |

Table 16-11. Packet Descriptor Word 2 (PD2) Bit Field Descriptions

| Bits   | Field Name                   | Description                                                                                                                                                                                                                                                                                                                                                         |
|--------|------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31     | Packet error                 | This bit indicates if an error occurred during reception of this packet (0 = no error occurred; 1 = error occurred). The DMA overwrites t his field on packet reception. Additional information about different errors may be encoded in the protocol specific fields in the descriptor.                                                                            |
| 30-26  |                              | This field indicates the type of this packet. The CPU initializes this field for transmitted packets; the DMA overwrites this field on packet reception. This field is encoded as: 5 = USB 8-31 = Reserved                                                                                                                                                          |
| 25-20  | Reserved                     | Reserved                                                                                                                                                                                                                                                                                                                                                            |
| 19     | Zero-length packet indicator | If a zero-length USB packet is received, the XDMA will send the CDMA a data block with a byte count of 0 and this bit is set. The CDMA will then perform normal EOP termination of the packet without transferring data. For transmit, if a packet has this bit set, the XDMA will ignore the CPPI packet size and send a zero-length packet to the USB controller. |
| 18-16  | Protocol-specific            | This field contains protocol-specific flags/information that can be assigned based on the packet type. Not used for USB.                                                                                                                                                                                                                                            |
| 15     | Return policy                | This field indicates the return policy for this packet. The CPU initializes this field. 0 = Entire packet (still linked together) should be returned to the queue specified in bits 11-0. 1 = Each buffer should be returned to the queue specified in bits 11-0 of Word 2 in their respective descriptors. The Tx DMA will return each buffer in sequence.         |
| 14     | On-chip                      | This field indicates whether or not this descriptor is in a region which is in on-chip memory space (1) or in external memory (0).                                                                                                                                                                                                                                  |
| 13-12  | Packet return queue mgr #    | This field indicates which queue manager in the system the descriptor is to be returned to after transmission is complete. This field is not altered by the DMA during transmission or reception and is initialized by the CPU. There is only one queue manager in the USB HS/FS device controller. This field must always be 0.                                    |
| 11-0   | Packet return queue #        | This field indicates the queue number within the selected queue manager that the descriptor is to be returned to after transmission is complete. This field is not altered by the DMA during transmission or reception and is initialized by the CPU.                                                                                                               |

Table 16-12. Packet Descriptor Word 3 (PD3) Bit Field Descriptions

| Bits   | Field Name      | Description                                                                                                                                                                               |
|--------|-----------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22  | Reserved        | Reserved                                                                                                                                                                                  |
| 21-0   | Buffer 0 length | The buffer length field indicates how many valid data bytes are in the buffer. The CPU initializes this field for transmitted packets; the DMA overwrites this field on packet reception. |

<!-- image -->

www.ti.com

## Table 16-13. Packet Descriptor Word 4 (PD4) Bit Field Descriptions

| Bits   | Field Name       | Description                                                                                                                                                                                                           |
|--------|------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0   | Buffer 0 pointer | The buffer pointer is the byte-aligned memory address of the buffer associated with the buffer descriptor. The CPU initializes this field for transmitted packets; the DMA overwrites this field on packet reception. |

## Table 16-14. Packet Descriptor Word 5 (PD5) Bit Field Descriptions

| Bits   | Field Name              | Description                                                                                                                                                                                                                                                                                    |
|--------|-------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0   | Next descriptor pointer | The 32-bit word aligned memory address of the next buffer descriptor in the packet. If the value of this pointer is zero, then the current buffer is the last buffer in the packet. The CPU initializes this field for transmitted packets; the DMA overwrites this field on packet reception. |

Table 16-15. Packet Descriptor Word 6 (PD6) Bit Field Descriptions

| Bits   | Field Name               | Description                                                                                                                                                                                                                                                                                                                                                                                             |
|--------|--------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22  | Reserved                 | Reserved                                                                                                                                                                                                                                                                                                                                                                                                |
| 21-0   | Original buffer 0 length | The buffer length field indicates the original size of the buffer in bytes. This value is not overwritten during reception. This value is read by the Rx DMA to determine the actual buffer size as allocated by the CPU at initialization. Since the buffer length in Word 3 is overwritten by the Rx port during reception, this field is necessary to permanently store the buffer size information. |

Table 16-16. Packet Descriptor Word 7 (PD7) Bit Field Descriptions

| Bits   | Field Name                | Description                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|--------|---------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22  | Reserved                  | Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 21-0   | Original buffer 0 pointer | The buffer pointer is the byte-aligned memory address of the buffer associated with the buffer descriptor. This value is not overwritten during reception. This value is read by the Rx DMA to determine the actual buffer location as allocated by the CPU at initialization. Since the buffer pointer in Word 4 is overwritten by the Rx port during reception, this field is necessary to permanently store the buffer pointer information. |

## 16.2.9.2.2 Host Buffer Descriptor/Buffer Descriptor (BD)

The buffer descriptor is identical in size and organization to a Packet Descriptor but does not include valid information in the packet level fields and does not include a populated region for protocol specific information. The packet level fields are not needed since the SOP descriptor contains this information and additional copy of this data is not needed/necessary.

Host buffer descriptors are designed to be linked onto a host packet descriptor or another host buffer descriptor to provide support for unlimited scatter / gather type operations. Host buffer descriptors provide information about a single corresponding data buffer. Every host buffer descriptor stores the following information:

- Pointer to the first valid byte in the data
- Length of the data buffer
- Pointer to the next buffer descriptor in the packet

Buffer descriptors always contain 32 bytes of required information. Since it is a requirement that it is possible to convert a descriptor between a Buffer Descriptor and a Packet Descriptor (by filling in the appropriate fields) in practice, Buffer Descriptors will be allocated using the same sizes as Packet Descriptors. In addition, since the 5 LSBs of the Descriptor Pointers are used in CPPI 4.1 for the purpose of indicating the length of the descriptor, the minimum size of a descriptor is always 32 bytes

Universal Serial Bus (USB)

<!-- image -->

The buffer descriptor layout is shown in Figure 16-14 and described within Table 16-17 through Table 1624 .

Figure 16-14. Buffer Descriptor (BD) Layout

<!-- image -->

Table 16-17. Buffer Descriptor Word 0 (BD0) Bit Field Descriptions

| Bits   | Field Name   | Description   |
|--------|--------------|---------------|
| 31-0   | Reserved     | Reserved      |

Table 16-18. Buffer Descriptor Word 1 (BD1) Bit Field Descriptions

| Bits   | Field Name   | Description   |
|--------|--------------|---------------|
| 31-0   | Reserved     | Reserved      |

Table 16-19. Buffer Descriptor Word 2 (BD2) Bit Field Descriptions

| Bits   | Field Name                | Description                                                                                                                                                                                                                                                                                                                    |
|--------|---------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15  | Reserved                  | Reserved                                                                                                                                                                                                                                                                                                                       |
| 14     | On-chip                   | This field indicates whether or not this descriptor is in a region which is on-chip memory space (1) or in external memory (0).                                                                                                                                                                                                |
| 13-12  | Packet return queue mgr # | This field indicates which queue manager in the system the descriptor is to be returned to after transmission is complete. This field is not altered by the DMA during transmission or reception and is initialized by the CPU. There is only 1 queue manager in the USB HS/FS device controller. This field must always be 0. |
| 11-0   | Packet return queue #     | This field indicates the queue number within the selected queue manager that the descriptor is to be returned to after transmission is complete. This field is not altered by the DMA during transmission or reception and is initialized by the CPU.                                                                          |

Table 16-20. Buffer Descriptor Word 3 (BD3) Bit Field Descriptions

| Bits   | Field Name      | Description                                                                                                                                                                                 |
|--------|-----------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22  | Reserved        | Reserved                                                                                                                                                                                    |
| 21-0   | Buffer 0 length | The buffer length field indicates how many valid data bytes are in the buffer. The CPU initializes this field for transmitted packets. The DMA overwrites this field upon packet reception. |

<!-- image -->

www.ti.com

## Table 16-21. Buffer Descriptor Word 4 (BD4) Bit Field Descriptions

| Bits   | Field Name       | Description                                                                                                                                                                                                             |
|--------|------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0   | Buffer 0 pointer | The buffer pointer is the byte-aligned memory address of the buffer associated with the buffer descriptor. The CPU initializes this field for transmitted packets. The DMA overwrites this field upon packet reception. |

Table 16-22. Buffer Descriptor Word 5 (BD5) Bit Field Descriptions

| Bits   | Field Name               | Description                                                                                                                                                                                                                                                                                              |
|--------|--------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0   | Next description pointer | The 32-bit word aligned memory address of the next buffer descriptor in the packet. If the value of this pointer is zero, then the current descriptor is the last descriptor in the packet. The CPU initializes this field for transmitted packets. The DMA overwrites this field upon packet reception. |

Table 16-23. Buffer Descriptor Word 6 (BD6) Bit Field Descriptions

| Bits   | Field Name               | Description                                                                                                                                                                                                                                                                                                                                                                                             |
|--------|--------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-22  | Reserved                 | Reserved                                                                                                                                                                                                                                                                                                                                                                                                |
| 21-0   | Original buffer 0 length | The buffer length field indicates the original size of the buffer in bytes. This value is not overwritten during reception. This value is read by the Rx DMA to determine the actual buffer size as allocated by the CPU at initialization. Since the buffer length in Word 3 is overwritten by the Rx port during reception, this field is necessary to permanently store the buffer size information. |

Table 16-24. Buffer Descriptor Word 7 (BD7) Bit Field Descriptions

| Bits   | Field Name                | Description                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|--------|---------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0   | Original buffer 0 pointer | The buffer pointer is the byte-aligned memory address of the buffer associated with the buffer descriptor. This value is not overwritten during reception. This value is read by the Rx DMA to determine the actual buffer location as allocated by the CPU at initialization. Since the buffer pointer in Word 4 is overwritten by the Rx port during reception, this field is necessary to permanently store the buffer pointer information. |

## 16.2.9.2.3 Teardown Descriptor

The Teardown Descriptor is not like the packet or buffer descriptors since it is not used to describe either a packet or a buffer. The teardown descriptor is always 32 bytes long and is comprised of 4 bytes of actual teardown information and 28 bytes of pad. The teardown descriptor layout and associated bit field descriptions are shown in the Figure below and Tables that follows. Since the 5 LSBs of the descriptor pointers are used in CPPI 4.1 for the purpose of indicating the length of the descriptor, the minimum size of a descriptor is 32 bytes.

The teardown descriptor is used to describe a channel halt and teardown event. Channel teardown ensures that when a connection is no longer needed that the hardware can be reliably halted and any remaining packets which had not yet been transmitted can be reclaimed by the host without the possibility of losing buffer or descriptor references (which results in a memory leak).

The teardown descriptor contains the following information:

- Indicator which identifies the descriptor as a teardown packet descriptor
- DMA controller number where teardown
- Channel number within DMA where teardown occurred
- Indicator of whether this teardown was for the Tx or Rx channel

Universal Serial Bus (USB)

<!-- image -->

Figure 16-15. Teardown Descriptor Layout

<!-- image -->

Table 16-25. Teardown Descriptor Word 0 Bit Field Descriptions

| Bits   | Field Name      | Description                                                     |
|--------|-----------------|-----------------------------------------------------------------|
| 31-27  | Descriptor type | The teardown descriptor type is 19 decimal (13h)                |
| 26-17  | Reserved        | Reserved                                                        |
| 16     | TX_RX           | Indicates whether teardown is a TX (0) or RX (1).               |
| 15-10  | DMA number      | Indicates the DMA number for this teardown.                     |
| 9-6    | Reserved        | Reserved                                                        |
| 5-0    | Channel number  | Indicates the channel number within the DMA that was torn down. |

Table 16-26. Teardown Descriptor Words 1 to 7 Bit Field Descriptions

| Bits   | Field Name   | Description   |
|--------|--------------|---------------|
| 31-0   | Reserved     | Reserved      |

Teardown operation of an endpoint requires three operations. The teardown register in the CPPI DMA must be written, the corresponding endpoint bit in TEARDOWN of the USB module must be set, and the FlushFIFO bit in the Mentor USB controller Tx/RxCSR register must be set.

The following is the Transmit teardown procedure highlighting the steps required to be followed:

1. Set the TX\_TEARDOWN bit in the CPPI DMA TX channel n global configuration register (TXGCRn).
2. Set the appropriate TX\_TDOWN bit in the USBOTG controller's USB teardown register (TEARDOWN). Write Tx Endpoint Number to teardown to TEARDOWN[TX\_TDOWN] field.
3. Check if the teardown descriptor has been received on the teardown queue: The completion queue (see Queue Assignment table) is usually used as the Teardown Completion queue when the Teardown descriptor has been received, the descriptor address will be loaded onto CTRLD[Completion Queue #] register:
- a. If not, go to step 2
- b. If so, go to step 4
4. Set the appropriate TX\_TDOWN bit in the USBOTG controller's USB teardown register (TEARDOWN). Set the bit corresponding to the Channel Number within TEARDOWN[TX\_TDOWN] field.
5. Flush the TX FIFO in the Mentor OTG core: Set PERI\_TXCSR[FLUSHFIFO] for the corresponding Endpoint.
6. Re-enable the Tx DMA channel.
- a. Clear TXGCRn[TX\_TEARDOWN and TX\_ENABLE] bit.
- b. Set TXGCRn[TX\_ENABLE] bit.

<!-- image -->

www.ti.com

## 16.2.9.3 Queue Manager

The queue manager (QM) is a hardware module that is responsible for accelerating management of the queues, i.e. queues are maintained within a queue manager module. Packets are added to a queue by writing the 32-bit descriptor address to a particular memory mapped location in the queue manager module. Packets are de-queued by reading the same location for that particular queue. A single queue manager exists within the device and handles all available 156 queues within the USB subsystem

Descriptors are queued onto a logical queue (pushed) by writing the descriptor pointer to the Queue N Register D. When the Queue N Register D is written, this kicks off the queue manager causing it to add the descriptor to the tail of queue.

The QM keeps track of the order of the descriptors pushed within a queue or the linking status of the descriptors. To accomplish this linking status, QM will first resolve the 32-bit descriptor pointer into a 16-bit index which is used for linking a queue pointer purposes. Once the address to index computation is performed, i.e., the physical index information is determined, the QM will link that descriptor onto the descriptor chain that is maintained for that logical queue by writing the linking information out to a linking RAM which is external to the queue manager. More on linking RAM discussion would follow in latter sections. The QM will also update the queue tail pointers appropriately. Since logical queues within the queue manager are maintained using linked lists, queues cannot become full and no check for fullness is required before queuing a packet descriptor.

## 16.2.9.3.1 Queue Types

Several types of queues exist (a total of 156 queues) within the CPPI 4.1 DMA. Regardless of the type of queue, queues are used to hold pointers to Packet or Buffer Descriptors while they are being passed between the Host and / or any of the ports in the system. All queues are maintained within the single Queue Manager module.

## The following types of Queues exist:

- Free descriptor queue (unassigned to specific endpoint but assigned to specific endpoint type; receive endpoints - can be used as a receive submit queue)
- Transmit submit queue
- Transmit completion (return) queue
- Receive completion (return) queue
- Teardown queue

Dedicated queues exist where one or more queues are assigned for the use of a single endpoint and nondedicated queues exist where no specific queue assignment to an endpoint is required (but pertains to receive endpoints only). Transmit endpoints are not allowed to use free descriptor queues.

Dedicated queues exist for each specific endpoint use and non-dedicated queues exist that can be used by any/all receive endpoints. Three queues are reserved for each endpoint/port for transmit actions with two of the three queues being transmit submit queues while the remaining queue is used as a completion/return queue. For receive actions, the only dedicated queues are completion/return queues; one queue is assigned/reserved for each receive endpoint. 32 free descriptor queues that do not have dedicated endpoint-queue assignment exist and these queues are used to service any receive endpoint as receive submit queues.

Table 16-27 displays queue-endpoint assignments.

Table 16-27. Queue-Endpoint Assignments

|   Queue Start Number |   Queue Count | Queue-Endpoint Association                                    |
|----------------------|---------------|---------------------------------------------------------------|
|                    0 |            32 | Free Descriptor Queues/Rx Submit Queues (USB0/1 Rx Endpoints) |
|                   32 |             2 | USB0 Tx Endpoint 1                                            |
|                   34 |             2 | USB0 Tx Endpoint 2                                            |
|                   36 |             2 | USB0 Tx Endpoint 3                                            |
|                   38 |             2 | USB0 Tx Endpoint 4                                            |

<!-- image -->

Table 16-27. Queue-Endpoint Assignments (continued)

|   Queue Start Number |   Queue Count | Queue-Endpoint Association           |
|----------------------|---------------|--------------------------------------|
|                   40 |             2 | USB0 Tx Endpoint 5                   |
|                   42 |             2 | USB0 Tx Endpoint 6                   |
|                   44 |             2 | USB0 Tx Endpoint 7                   |
|                   46 |             2 | USB0 Tx Endpoint 8                   |
|                   48 |             2 | USB0 Tx Endpoint 9                   |
|                   50 |             2 | USB0 Tx Endpoint 10                  |
|                   52 |             2 | USB0 Tx Endpoint 11                  |
|                   54 |             2 | USB0 Tx Endpoint 12                  |
|                   56 |             2 | USB0 Tx Endpoint 13                  |
|                   58 |             2 | USB0 Tx Endpoint 14                  |
|                   60 |             2 | USB0 Tx Endpoint 15                  |
|                   62 |             2 | USB1 Tx Endpoint 1                   |
|                   64 |             2 | USB1 Tx Endpoint 2                   |
|                   66 |             2 | USB1 Tx Endpoint 3                   |
|                   68 |             2 | USB1 Tx Endpoint 4                   |
|                   70 |             2 | USB1 Tx Endpoint 5                   |
|                   72 |             2 | USB1 Tx Endpoint 6                   |
|                   74 |             2 | USB1 Tx Endpoint 7                   |
|                   76 |             2 | USB1 Tx Endpoint 8                   |
|                   78 |             2 | USB1 Tx Endpoint 9                   |
|                   80 |             2 | USB1 Tx Endpoint 10                  |
|                   82 |             2 | USB1 Tx Endpoint 11                  |
|                   84 |             2 | USB1 Tx Endpoint 12                  |
|                   86 |             2 | USB1 Tx Endpoint 13                  |
|                   88 |             2 | USB1 Tx Endpoint 14                  |
|                   90 |             2 | USB1 Tx Endpoint 15                  |
|                   92 |             1 | Reserved                             |
|                   93 |             1 | USB0 Tx Endpoint 1 completion queue  |
|                   94 |             1 | USB0 Tx Endpoint 2 completion queue  |
|                   95 |             1 | USB0 Tx Endpoint 3 completion queue  |
|                   96 |             1 | USB0 Tx Endpoint 4 completion queue  |
|                   97 |             1 | USB0 Tx Endpoint 5 completion queue  |
|                   98 |             1 | USB0 Tx Endpoint 6 completion queue  |
|                   99 |             1 | USB0 Tx Endpoint 7 completion queue  |
|                  100 |             1 | USB0 Tx Endpoint 8 completion queue  |
|                  101 |             1 | USB0 Tx Endpoint 9 completion queue  |
|                  102 |             1 | USB0 Tx Endpoint 10 completion queue |
|                  103 |             1 | USB0 Tx Endpoint 11 completion queue |
|                  104 |             1 | USB0 Tx Endpoint 12 completion queue |
|                  104 |             1 | USB0 Tx Endpoint 13 completion queue |
|                  106 |             1 | USB0 Tx Endpoint 14 completion queue |
|                  107 |             1 | USB0 Tx Endpoint 15 completion queue |
|                  108 |             1 | Reserved                             |
|                  109 |             1 | USB0 Rx Endpoint 1 completion queue  |
|                  110 |             1 | USB0 Rx Endpoint 2 completion queue  |
|                  111 |             1 | USB0 Rx Endpoint 3 completion queue  |
|                  112 |             1 | USB0 Rx Endpoint 4 completion queue  |

<!-- image -->

www.ti.com

Table 16-27. Queue-Endpoint Assignments (continued)

|   Queue Start Number |   Queue Count | Queue-Endpoint Association           |
|----------------------|---------------|--------------------------------------|
|                  113 |             1 | USB0 Rx Endpoint 5 completion queue  |
|                  114 |             1 | USB0 Rx Endpoint 6 completion queue  |
|                  115 |             1 | USB0 Rx Endpoint 7 completion queue  |
|                  116 |             1 | USB0 Rx Endpoint 8 completion queue  |
|                  117 |             1 | USB0 Rx Endpoint 9 completion queue  |
|                  118 |             1 | USB0 Rx Endpoint 10 completion queue |
|                  119 |             1 | USB0 Rx Endpoint 11 completion queue |
|                  120 |             1 | USB0 Rx Endpoint 12 completion queue |
|                  121 |             1 | USB0 Rx Endpoint 13 completion queue |
|                  122 |             1 | USB0 Rx Endpoint 14 completion queue |
|                  123 |             1 | USB0 Rx Endpoint 15 completion queue |
|                  124 |             1 | Reserved                             |
|                  125 |             1 | USB1 Tx Endpoint 1 completion queue  |
|                  126 |             1 | USB1 Tx Endpoint 2 completion queue  |
|                  127 |             1 | USB1 Tx Endpoint 3 completion queue  |
|                  128 |             1 | USB1 Tx Endpoint 4 completion queue  |
|                  129 |             1 | USB1 Tx Endpoint 5 completion queue  |
|                  130 |             1 | USB1 Tx Endpoint 6 completion queue  |
|                  131 |             1 | USB1 Tx Endpoint 7 completion queue  |
|                  132 |             1 | USB1 Tx Endpoint 8 completion queue  |
|                  133 |             1 | USB1 Tx Endpoint 9 completion queue  |
|                  134 |             1 | USB1 Tx Endpoint 10 completion queue |
|                  135 |             1 | USB1 Tx Endpoint 11 completion queue |
|                  136 |             1 | USB1 Tx Endpoint 12 completion queue |
|                  137 |             1 | USB1 Tx Endpoint 13 completion queue |
|                  138 |             1 | USB1 Tx Endpoint 14 completion queue |
|                  139 |             1 | USB1 Tx Endpoint 15 completion queue |
|                  140 |             1 | Reserved                             |
|                  141 |             1 | USB1 Rx Endpoint 1 completion queue  |
|                  142 |             1 | USB1 Rx Endpoint 2 completion queue  |
|                  143 |             1 | USB1 Rx Endpoint 3 completion queue  |
|                  144 |             1 | USB1 Rx Endpoint 4 completion queue  |
|                  145 |             1 | USB1 Rx Endpoint 5 completion queue  |
|                  146 |             1 | USB1 Rx Endpoint 6 completion queue  |
|                  147 |             1 | USB1 Rx Endpoint 7 completion queue  |
|                  148 |             1 | USB1 Rx Endpoint 8 completion queue  |
|                  149 |             1 | USB1 Rx Endpoint 9 completion queue  |
|                  150 |             1 | USB1 Rx Endpoint 10 completion queue |
|                  151 |             1 | USB1 Rx Endpoint 11 completion queue |
|                  152 |             1 | USB1 Rx Endpoint 12 completion queue |
|                  153 |             1 | USB1 Rx Endpoint 13 completion queue |
|                  154 |             1 | USB1 Rx Endpoint 14 completion queue |
|                  155 |             1 | USB1 Rx Endpoint 15 completion queue |

Universal Serial Bus (USB)

## 16.2.9.3.2 Free Descriptor Queue (Receive Submit Queue)

Receive endpoints/channels use queues, referred to as free descriptor queues, or receive submit queues, to forward completed receive packets to the host. The entries on the free descriptor queues have preattached empty buffers whose size and location are described in the original buffer information fields in the descriptor. The host is required to allocate both the descriptor and buffer and pre-link them prior to adding (submitting) a descriptor to one of the available free descriptor queue. The first 32 queues (queue 0 up to queue 31) are reserved for all 30 USB0/1 (endpoints 1 to 15 of each USB module) receive endpoints/channels to handle incoming packets to the device.

## 16.2.9.3.3 Transmit Submit Queue

Transmit ports use packet queues, referred to as transmit submit queues, to store the packets that are waiting to be transmitted. Each transmit endpoint has dedicated queues (2 queues per port) that are reserved exclusively for a use by a single endpoint. Multiple queues per port/channel are allocated to facilitate quality of service (QoS) for applications that require QoS. The first 30 queues, queue 32 up to queue 61, are allocated for USB0 transmit endpoints 1 to 15 with two queues per endpoint.queues 62 up to queue 91, are allocated for transmit USB1 endpoints 1 to 15.

## 16.2.9.3.4 Transmit Completion (Return) Queue

Transmit ports use packet queues, referred to as "transmit completion queues, to return packet descriptors to the host after packets have been transmitted. A singe queue is reserved to be used by a single transmit endpoint. Application s/w needs to insure that the right set of queues is used to return the Descriptors after the completion of a packet transmission based on the endpoint number used. For USB0 transmit endpoints 1 to 15, queues 93-107 are reserved and assigned for use as a completion queue, respectively. Similarly for USB1 transmit endpoints 1 to 15, queues 125-139 are used as completion queues, respectively.

Transmit Completion Queues are also used to return packet Descriptors when performing a Transmit channel teardown operation.

## 16.2.9.3.5 Receive Completion (Return) Queue

Receive ports use packet queues, referred to as receive completion queues, to return packet descriptors to the port after packets have been received. A singe queue is reserved to be used by a single receive endpoint. Application s/w needs to insure that the right set of queues is used to return the descriptors after the completion of a packet reception based on the endpoint number used. For USB0 receive endpoints 1 to 15 queues 122-136 are reserved/assigned for use as a receive completion queue respectively. Similarly for USB1 receive endpoints 1 to 15, queues 137-151 is used as completion queue respectively.

Receive channel teardown is not necessary for receive transactions and no channel teardown information nor resource is available

## 16.2.9.3.6 Diverting Queue Packets from one Queue to Another

The host can move the entire contents of one queue to another queue by writing the source queue number and the destination queue number to the Queue Diversion register. When diverting packets, the descriptors are pushed onto the tail of the destination queue.

## 16.2.9.4 Memory Regions and Linking RAM

In addition to allocating buffer for raw data and memory for Descriptors, the host is responsible for allocating additional memory for exclusive use of the CPPI DMA Queue Manager to be used as a scratch PAD RAM. The queue manager uses this memory to manage states of descriptors submitted within the submit queues. In other words, this memory needs not to be managed by the user software and firmware responsibility lies only for allocation/reserving a chunk of memory for the use of the queue manager. The allocated memory can be a single block of memory that is contiguous or two blocks of memory that are not contiguous. These two blocks of memory are referred to as a Linking RAM Regions and should not be confused with memory regions that are used to store descriptors. That is, the use of the term region should be used in the context of its use.

<!-- image -->

<!-- image -->

www.ti.com

To accomplish the linking of submitted descriptors, the queue manager will first resolve the 32-bit descriptor pointer into a 16-bit index which is used for linking and queue pointer purposes. Once the physical index information is determined, the queue manager will link that descriptor onto the descriptor chain that is maintained for that logical queue by writing the linking information out to a linking RAM which is external to the queue manager. The queue manager will also update the queue tail pointer appropriately. Since logical queues within the queue manager are maintained using linked lists, queues cannot become full and no check for fullness is required before queuing a packet descriptor.

The actual physical size of the Linking RAM region(s) to be allocated depends on the total number of descriptors defined within all memory regions. A minimum of four bytes of memory needs to be allocated for each Descriptor defined within all 16 memory regions.

The queue manager has the capability of managing up to 16 memory regions. These memory regions are used to store descriptors of variable sizes. The total number of descriptors that can be managed by the queue manager should not exceed 64K. Each memory region has descriptors of one configurable size, that is, descriptors with different sizes cannot be housed within a single memory region. These 64K descriptors are referenced internally in the queue manager by a 16-bit quantity index.

The information about the Linking RAM regions and the size that are allocated is communicated to the CPPI DMA via three registers dedicated for this purpose. Two of the three registers are used to store the 32-bit aligned start addresses of the Linking RAM regions. The remaining one register is used to store the size of the first Linking RAM. The linking RAM size value stored here is the number of descriptors that is to be managed by the queue manager within that region not the physical size of the buffer, which is four times the number of descriptors.

Note that application is not required to use both linking RAM regions, if the size of the Linking RAM for the first region is large enough to accommodate all descriptors defined. No linking RAM size register for linking RAM region 2 exists. The size of the second linking RAM, when used, is indirectly computed from the total number of descriptors defined less the number of descriptors managed by the first linking RAM

Figure 16-16 displays the relationship between several memory regions and linking RAM.

Figure 16-16. Relationship Between Memory Regions and Linking RAM

<!-- image -->

## 16.2.9.5 Zero Length Packets

A special case is the handling of null packets with the CPPI 4.1 compliant DMA controller. Upon receiving a zero length USB packet, the XFER DMA will send a data block to the DMA controller with byte count of zero and the zero byte packet bit of INFO Word 2 set. The DMA controller will then perform normal End of Packet termination of the packet, without transferring data.

Universal Serial Bus (USB)

<!-- image -->

If a zero-length USB packet is received, the XDMA will send the CDMA a data block with a byte count of 0 and this bit set. The CDMA will then perform normal EOP termination of the packet without transferring data. For transmit, if a packet has this bit set, the XDMA will ignore the CPPI packet size and send a zerolength packet to the USB controller.

## 16.2.9.6 CPPI DMA Scheduler

The CPPI DMA scheduler is responsible for controlling the rate and order between the different Tx and Rx threads/transfers that are provided in the CPPI DMA controller. The scheduler table RAM exists within the scheduler.

The DMA controller maintains state information for each of the channels which allows packet segmentation and reassembly operations to be time division multiplexed between channels in order to share the underlying DMA hardware. A DMA scheduler is used to control the ordering and rate at which this multiplexing occurs.

## 16.2.9.6.1 CPPI DMA Scheduler Operation

Once the scheduler is enabled it will begin processing the entries in the table. When appropriate the scheduler will pass credits to the DMA controller to perform a Tx or Rx operation. The operation of the DMA controller is as follows:

1. After the DMA scheduler is enabled it begins with the table index set to 0.
2. The scheduler reads the entry pointed to by the index and checks to see if the channel in question is currently in a state where a DMA operation can be accepted.
- a. The DMA channel must be enabled AND
- b. The CPPI FIFO that the channel talks to has free space on TX (FIFO full signal is not asserted) or a valid block on Rx (FIFO empty signal is not asserted)
3. If the DMA channel is capable of processing a credit to transfer a block, the DMA scheduler will issue that credit via the DMA scheduling interface which is a point to point connection between the DMA Scheduler and the DMA Controller.
- a. The DMA controller may not be ready to accept the credit immediately and is provided a sched\_ready signal which is used to stall the scheduler until it can accept the credit. The DMA controller only asserts the sched\_ready signal when it is in the IDLE state.
- b. Once a credit has been accepted (indicated by sched\_req and sched\_ready both asserted), the scheduler will increment the index to the next entry and will start again at step 2.
4. If the channel in question is not currently capable of processing a credit, the scheduler will increment the index in the scheduler table to the next entry and will start at step 2.
5. Note that when the scheduler attempts to increment its index, to the value programmed in the table size register, the index will be reset to 0.

## 16.2.9.6.1.1 CPPI DMA Scheduler Initialization

Before the scheduler can be used, the host is required to initialize and enable the block. This initialization is performed as follows:

1. The Host initializes entries within an internal memory array in the scheduler. This array contains up to 256 entries (4 entries per table word n where n=0-63) and each entry consists of a DMA channel number and a bit indicating if this is a Tx or Rx opportunity. These entries represent both the order and frequency that various Tx and Rx channels will be processed. A table size of 256 entries allows channel bandwidth to be allocated with a maximum precision of 1/256th of the total DMA bandwidth. The more entries that are present for a given channel, the bigger the slice of the bandwidth that channel will be given. Larger tables can be accommodated to allow for more precision. This array can only be written by the Host, it cannot be read.
2. If the application does not need to use the entire 256 entries, firmware can initialize the portion of the 256 entries and indicate the size of the entries used by writing onto an internal register in the scheduler which sets the actual size of the array (it can be less than 256 entries).
3. The host writes an internal register bit to enable the scheduler. The scheduler is not required to be disabled in order to change the scheduler array contents.

<!-- image -->

www.ti.com

## 16.2.9.6.1.2 CPPI DMA Scheduler Programming Examples

Consider a three endpoints use on a system with the following configurations: EP1-Tx, EP2-Rx, and EP2Tx. Two assumptions are considered:

Case 1: Assume that you would like to service each enabled endpoints (EP1-Tx, EP2-Rx, and EP2-Tx) with equal priority.

The scheduler handles the rate at which an endpoint is serviced by the number of credits programmed (entries) for that particular endpoint within the scheduler Table Words. The scheduler has up to 256 credits that it can grant and for this example the user can configure the number of entries/credits to be anywhere from 3 to 256 with a set of 3 entries.

However, the optimum and direct programming for this scenario would be programming only the first three entries of the scheduler via scheduler Table WORD[0]. Since this case expects the Scheduler to use only the first three entries, you communicate that by programming DMA\_SCHED\_CTRL.LAST\_ENTRY with 2 (that is, 3 -1). The Enabled Endpoint numbers and the data transfer direction is then communicated by programming the first three entries of WORD[0] (ENTRY0\_CHANNEL = 1: ENTRY0\_RXTX = 0; ENTRY1\_CHANNEL = 2: ENTRY1\_RXTX = 1;ENTRY2\_CHANNEL = 2: ENTRY2\_RXTX = 0). With this programming, the Scheduler will only service the first three entries in a round-robin fashion, checking each credited endpoint for transfer one after the other, and servicing the endpoint that has data to transfer.

Case 2: Enabled endpoint EP1-Tx is serviced at twice the rate as the other enabled endpoints (EP2-Rx and EP2-Tx).

The number of entries/credit that has to be awarded to EP1-Tx has to be twice as much of the others. Four entries/credits would suffix to satisfy our requirement with two credits for EP1-Tx, one credit for EP2Rx, and one credit for EP2-Tx. This requirement is satisfied by allocating any two of the four entries to EP1-Tx endpoint. Again for this example, scheduler Table WORD[0] would suffice since it can handle the first 4 entries. Even though several scenarios exist to programming the order of service for this case, one scenario would be to allow servicing EP1-Tx to back-to-back followed by the other enabled endpoints. Program DMA\_SCHED\_CTRL.LAST\_ENTRY with 3 (that is, 4 -1). Program WORD[0] (ENTRY0\_CHANNEL = 1: ENTRY0\_RXTX = 0; ENTRY1\_CHANNEL = 1: ENTRY1\_RXTX = 0; ENTRY2\_CHANNEL = 2: ENTRY2\_RXTX = 1; ENTRY3\_CHANNEL = 2: ENTRY3\_RXTX = 0).

## 16.2.9.7 CPPI DMA State Registers

The port must store and maintain state information for each transmit and receive port/channel. The state information is referred to as the Tx DMA State and Rx DMA State.

## 16.2.9.7.1 Transmit DMA State Registers

The Tx DMA State is a combination of control fields and protocol specific port scratchpad space used to manipulate data structures and transmit packets. Each transmit channel has two queues. Each queue has a one head descriptor pointer and one completion pointer. There are thirty Tx DMA State registers; one for each port/channel.

The following information is stored in the Tx DMA State:

- Tx Queue Head Descriptor Pointer(s)
- Tx Completion Pointer(s)
- Protocol specific control/status (port scratchpad)

## 16.2.9.7.2 Receive DMA State Registers

The Rx DMA State is a combination of control fields and protocol specific port scratchpad space used to manipulate data structures in order to receive packets. Each receive channel has only one queue. Each channel queue has one head descriptor pointer and one completion pointer. There are thirty Rx DMA State registers; one for each port/channel.

The following information is stored in the Rx DMA State:

- Rx Queue Head Descriptor Pointer
- Rx Queue Completion Pointer

Universal Serial Bus (USB)

- Rx Buffer Offset

## 16.2.9.8 CPPI DMA Protocols Supported

Four different type of DMA transfers are supported by the CPPI 4.1 DMA; Transparent, RNDIS, Generic RNDIS, and Linux CDC. The following sections will outline the details on these DMA transfer types.

## 16.2.9.8.1 Transparent DMA Transfer

Transparent Mode DMA operation is the default DMA mode where DMA interrupt is generated whenever a DMA packet is transferred. In the transparent mode, DMA packet size cannot be greater than USB MaxPktSize for the endpoint. This transfer type is ideal for transfer (not packet) sizes that are less than a max packet size.

## 16.2.9.8.1.1 Transparent DMA Transfer Setup

The following will configure all 30 ports/channels for Transparent DMA Transfer type.

Make sure that RNDIS Mode is disabled globally. This allows the application to configure the CPPI DMA protocol in use to be configured per endpoint need. To disable RNDIS operation, clear RNDIS bit in the USB Control Registers corresponding to the USB Module (default setting), i.e., CTRL0[RNDIS]=0 and CTRL1[RNDIS]=0.

Configure the USB0/1 Tx/Rx DMA Mode Registers (USB0/1 TX(RX)MODE0/1) for the Endpoint field in use is programmed for Transparent Mode, i.e., TXMODE0/1[TXn\_MODE] = 00b and RXMODE0/1[RXn\_MODE] = 00b.

## 16.2.9.8.2 RNDIS DMA Transfer

RNDIS mode DMA is used for large transfers (i.e., total data size to be transferred is greater than USB MaxPktSize where the MzxPktSize is a multiple of 64 bytes) that requires multiple USB packets. This is accomplished by breaking the larger packet into smaller packets, where each packet size being USB MaxPktSize except the last packet where its size is less than USB MaxPktSize, including zero bytes. This implies that multiple USB packets of MaxPktSize will be received and transferred together as a single large DMA transfer and the DMA interrupt is generated only at the end of the complete reception of DMA transfer. The protocol defines the end of the complete transfer by receiving a short USB packet (smaller than USB MaxPktSize as mentioned in USB specification 2.0). If the DMA packet size is an exact multiple of USB MaxPktSize, the DMA controller waits for a zero byte packet at the end of complete transfer to signify the completion of the transfer.

NOTE: RNDIS Mode DMA is supported only when USB MaxPktSize is an integral multiple of 64 bytes.

## 16.2.9.8.2.1 RNDIS DMA Transfer Setup

If all endpoints in use are desired to operate in RNDIS mode, it is only suffix to configure RNDIS DMA operation in RNDIS mode at the global level and application can ignore individual endpoint DMA mode configuration. This is achieved by programming CTRLR0/1[RNDIS] with a '1.'

However if DMA mode is required to be configured at the endpoint level, it is required to disable the use of RNDIS at the global level, this is achieved by clearing RNDIS bit field (CTRLR0/1[RNDIS]=0), since global configuration over-rides endpoint configuration.

To configure RNDIS DMA mode use, configure the field that correspond to the USB module endpoint using the corresponding USB0/1 TX(RX) Mode Register, i.e., TXMODE0/1[TXn\_MODE] = 01b and RXMODE0/1[RXn\_MODE] = 01b

## 16.2.9.8.3 Generic RNDIS DMA Transfer

Generic RNDIS DMA transfer mode is identical to the normal RNDIS mode in nearly all respects, except for the exception case where the last packet of the transfer can either be a short packet or the MaxPktSize. When the last packet size is equal to the MaxPktSize then no additional zero-byte packet is sent when using Generic RNDIS transfer. Generic RNDIS transfer makes use of a USB0/1 GENERIC RNDIS EPn Size register (there exists a register for each endpoint) that must be programmed with the

<!-- image -->

<!-- image -->

www.ti.com transfer size (in bytes) of the transfer for the USB Module (USB0 or USB1) prior to posting a transfer transaction. If the transfer size is an integer multiple of USB MaxPktSize then no additional zero-byte packet is sent when using Generic RNDIS transfer. However, if the a short packet has been sent prior to programmed size count, the transfer would end in a similar fashion an RDIS transfer would behave. For example, it the USB MaxPktSize (Tx/RxMaxP) is programmed with a value of 64, the Generic RNDIS EP Size register for that endpoint must be programmed with a value that is an integer multiple of 64 (for example, 64, 128, 192, 256, etc.) for it behave differently than RNDIS transfer. In other words, when using Generic RNDIS mode and the DMA is tasked to transfer data transfer size that is less or equal the size value programmed within the USB0/1 GENERIC RNDIS EPn Size register.

This means that Generic RNDIS mode will perform data transfer in the same manner as RNDIS mode, closing the CPPI packet if a USB packet with a size less than the USB MaxPktSize size value is received. Otherwise, the packet will be closed when the value in the Generic RNDIS EP Size register is reached.

Using USB0/1 GENERIC RNDIS EPn Size register, a packet of up to 64K bytes (65536 bytes) can be transferred. This is to allow the host software to program the USB module to transfer data that is an exact multiple of the USB MaxPktSize (Tx/RxMaxP programmed value) without having to send an additional short packet to terminate.

NOTE: As in RNDIS mode, the USB max packet size (Tx/RxMaxp programmed value) of any Generic RNDIS mode enabled endpoints must be a multiple of 64 bytes. Generic RNDIS acceleration should not be enabled for endpoints where the max packet size is not a multiple of 64 bytes. Only transparent mode should be used for such endpoints.

## 16.2.9.8.3.1 Generic RNDIS DMA Transfer Setup

Disable the use of RNDIS at the global level, this is achieved by clearing RNDIS bit field (CTRLR0/1[RNDIS]=0), since global configuration over-rides endpoint configuration.

Configure the field that correspond to the USB module endpoint using the corresponding USB0/1 TX(RX) Mode Register, i.e., TXMODE0/1[TXn\_MODE] = 11b and RXMODE0/1[RXn\_MODE] = 11b.

## 16.2.9.8.4 Linux CDC DMA Transfer

Linux CDC DMA transfer mode acts in the same manner as RNDIS packets, except for the case where the last data matches the max USB packet size requiring additional zero-byte packet transfer in RNDIS mode and this is not the case for Linux CDC. If the last data packet of a transfer is a short packet where the data size is greater than zero and less the USB MaxPktSize, then the behavior of the Linux CDC DMA transfer type is identical with the RNDIS DMA transfer type. The only exception is when the short packet length terminating the transfer is a Null Packet. In this case, instead of transferring the Null Packet, it will transfer a data packet of size 1 byte with the data value of 00h.

In transmit operation, if an endpoint is configured or CDC Linux mode, upon receiving a Null Packet from the CPPI DMA, the XFER DMA will then generate a packet containing 1 byte of data, whose value is 00h, indicating the end of the transfer. During receive operation, the XFER DMA will recognize the one byte zero packet as a termination of the data transfer, and sends a block of data with the EOP indicator set and a byte count of one to the CPPI DMA controller. The CPPI DMA realizing the end of the transfer termination will not update/increase the packet size count of the Host Packet Descriptor.

## 16.2.9.8.4.1 Linux CDC DMA Transfer Setup

Disable the use of RNDIS at the global level, this is achieved by clearing RNDIS bit field (CTRLR0/1[RNDIS]=0), since global configuration over-rides endpoint configuration.

Configure the field that correspond to the USB module endpoint using the corresponding USB0/1 TX(RX) Mode Register, i.e., TXMODE0/1[TXn\_MODE] = 10b and RXMODE0/1[RXn\_MODE] = 10b.

## 16.2.9.9 USB Data Flow Using DMA

The necessary steps required to perform a USB data transfer using the CPPI 4.1 DMA is expressed using an example for both transmit and receive cases. Assume USB0 is ready to perform a USB data transfer of size 608 bytes (see Figure 16-17).

2619

Universal Serial Bus (USB)

<!-- image -->

The 608 bytes data to be transferred is described using three descriptors. Since each data buffer defined within a single descriptor has a size of 256 bytes, a 608 bytes data buffer would require three descriptors.

<!-- image -->

## Example assumptions:

- The CPPI data buffers are 256 bytes in length.
- USB0 module is to be used to perform this transfer. Note that the steps required is similar for USB1 use.
- The USB0 endpoint 1 Tx and Rx endpoint 1 size are programmed to handle max USB packet size of 512 bytes.
- A single transfer length is 608 bytes.
- The SOP offset is 0.

The above translates to the following multi-descriptor setup:

## Transmit Case

## Transmit setup is as follows:

- One packet descriptor with packet length (this is NOT data buffer length, the term packet used here is to mean a transfer length not USB packet) field of 608 bytes and a Data Buffer of size 256 Bytes linked to the 1st host buffer descriptor.
- Two buffer descriptors with first buffer descriptor (this is the one linked to the packet descriptor) defining the second data buffer size of 256 Bytes which in turn is linked to the next (second) buffer descriptor.
- Second buffer fescriptor with a fata buffer size of 96 bytes (can be greater, the packet descriptor contain the size of the packet) linked to no other descriptor (NULL).

## Receive Case

For this example since each data buffer size is 256 bytes, we would require a minimum of three descriptors that would define data buffer size of 608 bytes. The receive setup is as follows:

- Two buffer descriptors with 256 bytes of data buffer size
- One buffer descriptor with 96 bytes (can be greater) of data buffer size

Within the rest of this section, the following nomenclature is used:

- BD -Buffer Descriptor or Host Buffer Descriptor
- DB -Data Buffer Size of 256 Bytes

<!-- image -->

## www.ti.com

PBD -Pointer to Host Buffer Descriptor

PD -Host Packet Descriptor

PPD -Pointer to Host Packet Descriptor

TXSQ -Transmit Queue or Transmit Submit Queue (for USB0 EP1, use Queues 32 or 33, for USB1 EP1 use Queues 62 or 63)

TXCQ -Transmit Completion Queue or Transmit Return Queue (for USB0 Tx EP1, use Queue 93, and for USB1 Tx EP1 use Queue 125)

RXCQ -Receive Completion Queue or Receive Return Queue (for USB0 Rx EP1, use Queue 109, for USB1 Rx EP1 use Queue 141)

RXSQ -Receive Free/Buffer Descriptor Queue or Receive Submit Queue. (For USB0 Rx EP1 Queue 0 is used and for USB1 Rx EP1 Queue 16 should be used

## 16.2.9.9.1 Transmit USB Data Flow Using DMA

The transmit descriptors and queue status configuration prior to the transfer taking place is shown in Figure 16-18.

<!-- image -->

Figure 16-18. Transmit Descriptors and Queue Status Configuration

<!-- image -->

## 16.2.9.9.1.1 Transmit Initialization (Step 1)

The CPU performs the following steps for transmit initialization:

1. Initializes Memory Region 0 base address and Memory Region 0 size, Link RAM0 Base address, Link RAM0 data size, and Link RAM1 Base address.
2. Creates PD, BDs, and DBs in main memory and link as indicated in Figure 16-19.
3. Initializes and configures the Queue Manager, Channel Setup, DMA Scheduler, and Mentor USB 2.0 Core.
4. Adds (pushes) the PPD and the two PBDs to the TXSQ by writing the Packet Descriptor address to the TXSQ CTRL D Register.

Figure 16-19 captures the BD/DB pair in main memory and later submitted within the TXSQ.

<!-- image -->

www.ti.com

Figure 16-19. Transmit USB Data Flow Example (Initialization)

<!-- image -->

## 16.2.9.9.1.2 CDMA and XDMA Transfer Packet Data Into Endpoint FIFO (Step 2)

The steps for CDMA and XDMA to transfer packet data into endpoint FIFO are as follows:

1. The Queue Manager informs the CDMAS that the TXSQ is not empty.
2. CDMAS checks that the CPPI FIFO FIFO\_full is not asserted, then issues a credit to the CDMA.
3. CDMA reads the Packet Descriptor pointer (PPD) and descriptor size hint from the queue manager
4. For each 64-byte block of data in the packet data payload (note that packet refers here to CPPI packet which is not the same as USB packet and it means to refer to data transfer size):
- a. The CDMA transfers a max burst of 64-byte block (OCP burst) from the data to be transferred in main memory to the CPPI FIFO
- b. The XDMA sees FIFO\_empty not asserted and transfers 64-byte block from CPPI FIFO to Endpoint FIFO.
- c. The CDMA performs the above two steps ('a' and 'b') three more times since the data size of the HPD is 256 bytes.
5. The CDMA reads the first buffer descriptor pointer (PBD).
6. For each 64-byte block of data in the packet data payload:
- a. The CDMA transfers a max burst of 64-byte block from the data to be transferred in main memory to the CPPI FIFO.
- b. The XDMA sees FIFO\_empty not asserted and transfers 64-byte block from CPPI FIFO to Endpoint FIFO.
- c. The CDMA performs the above two steps ('a' and 'b') two more times since data size of the HBD is 256 bytes.
7. The CDMA reads the second Buffer Descriptor pointer (PBD
8. For each 64-byte block of data in the packet data payload:
- a. The CDMA transfers a max burst of 64-byte block from the data to be transferred in main memory to the CPPI FIFO.
- b. The XDMA sees FIFO\_empty not asserted and transfers 64-byte block from CPPI FIFO to Endpoint FIFO.
- c. The CDMA transfers the last remaining 32-byte from the data to be transferred in main memory to the CPPI FIFO.
- d. The XDMA sees FIFO\_empty not asserted and transfers 32-byte block from CPPI FIFO to Endpoint FIFO.

Universal Serial Bus (USB)

## 16.2.9.9.1.3 USB 2.0 Core Transmits USB Packets for Tx (Step 3)

1. Once the XDMA has transferred enough 64-byte blocks of burst of data from the CPPI FIFO to fill the Endpoint FIFO (accumulated 512 bytes), it signals the Mentor USB 2.0 Core that a TX packet is ready (sets the endpoint's TxPktRdy bit).
2. The USB 2.0 Core will transmit the packet from the Endpoint FIFO out on the USB BUS when it receives a corresponding IN request from the attached USB Host.
3. After the USB packet is transferred, the USB 2.0 Core issues a TX DMA\_req to the XDMA.
4. This process is repeated until (the above steps '1', '2', and '3') the entire packet has been transmitted. The XDMA will also generate the required termination packet depending on the termination mode configured for the endpoint.

## 16.2.9.9.1.4 Return Packet to Completion Queue and Interrupt CPU for Tx (Step 4)

1. After all data for the packet has been transmitted (as specified by the packet size field), the CDMA will write the pointer of the Packet Descriptor only to the TX Completion Queue specified in the return queue manager / queue number fields of the packet descriptor.
2. The Queue Manager then indicates the status of the TXSQ (empty) to the CDMAS and the TXCQ to the CPU via an interrupt.

## 16.2.9.9.2 Receive USB Data Flow Using DMA

The receive buffer descriptors and queue status configuration prior to the transfer taking place is shown in Figure 16-20.

<!-- image -->

<!-- image -->

www.ti.com

Figure 16-20. Receive Buffer Descriptors and Queue Status Configuration

<!-- image -->

## 16.2.9.9.2.1 Receive Initialization (Step 1)

1. The CPU initializes Queue Manager with the Memory Region 0 base address and Memory Region 0 size, Link RAM0 Base address, Link RAM0 data size, and Link RAM1 Base address.
2. The CPU creates BDs, and DBs in main memory and link them creating a BD and DB pairs.
3. CPU then initializes the RXCQ queue and configures the Queue Manager, Channel Setup, DMA Scheduler, and USB 2.0 Core.
4. It then adds (pushes) the address of the addresses/pointers of three Buffer Descriptors (PBDs) into the

2625

Universal Serial Bus (USB)

RXSQ by writing onto CTRL D register.

Figure 16-21 displays receive operation Initialization.

Figure 16-21. Receive USB Data Flow Example (Initialization)

<!-- image -->

## 16.2.9.9.2.2 USB 2.0 Core Receives a Packet, XDMA Starts Data Transfer for Receive (Step 2)

1. The USB 2.0 Core receives a USB packet from the USB Host and stores it in the Endpoint FIFO.
2. It then asserts a DMA\_req to the XDMA informing it that data is available in the Endpoint FIFO.
3. The XDMA verifies the corresponding CPPI FIFO is not full via the FIFO\_full signal, then starts transferring 64-byte data blocks (burst) from the Endpoint FIFO into the CPPI FIFO.

## 16.2.9.9.2.3 CDMA Transfers Data from SSRAM / PPU to Main Memory for Receive (Step 3)

1. The CDMAS see FIFO\_empty de-asserted (there is RX data in the FIFO) and issues a transaction credit to the CDMA.
2. The CDMA begins packet reception by fetching the first PBD from the Queue Manager using the Free Descriptor / Buffer Queue 0 (Rx Submit Queue) index that was initialized in the RX port DMA state for that channel.
3. The CDMA will then begin writing the 64-byte block of packet data into this DB.
4. The CDMA will continue filling the buffer with additional 64-byte blocks of data from the CPPI FIFO and will fetch additional PBD as needed using the Free Descriptor / Buffer Queue 1, 2, and 3 indexes for the 2nd, 3rd, and remaining buffers in the packet. After each buffer is filled, the CDMA writes the buffer descriptor to main memory.

## 16.2.9.9.2.4 CDMA Completes the Packet Transfer for Receive (Step 4)

1. After the entire packet has been received, the CDMA writes the packet descriptor to main memory.
2. The CDMA then writes the packet descriptor to the RXCQ specified in the Queue Manager / Queue Number fields in the RX Global Configuration Register.
3. The Queue Manager then indicates the status of the RXCQ to the CPU via an interrupt.
4. The CPU can then process the received packet by popping the received packet information from the RXCQ and accessing the packet's data from main memory.

<!-- image -->