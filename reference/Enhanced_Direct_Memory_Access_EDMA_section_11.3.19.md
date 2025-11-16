<!-- image -->

www.ti.com

## 11.3.19 EDMA Transfer Examples

The EDMA3 channel controller performs a variety of transfers depending on the parameter configuration. The following sections provide a description and PaRAM configuration for some typical use case scenarios.

## 11.3.19.1 Block Move Example

The most basic transfer performed by the EDMA3 is a block move. During device operation it is often necessary to transfer a block of data from one location to another, usually between on-chip and off-chip memory.

In this example, a section of data is to be copied from external memory to internal L2 SRAM as shown in Figure 11-20. Figure 11-21 shows the parameters for this transfer.

The source address for the transfer is set to the start of the data block in external memory, and the destination address is set to the start of the data block in L2. If the data block is less than 64K bytes, the PaRAM configuration shown in Figure 11-21 holds true with the synchronization type set to Asynchronized and indexes cleared to 0. If the amount of data is greater than 64K bytes, BCNT and the Bindexes need to be set appropriately with the synchronization type set to AB-synchronized. The STATIC bit in OPT is set to prevent linking.

This transfer example may also be set up using QDMA. For successive transfer submissions, of a similar nature, the number of cycles used to submit the transfer are fewer depending on the number of changing transfer parameters. You may program the QDMA trigger word to be the highest numbered offset in the PaRAM set that undergoes change.

## Figure 11-20. Block Move Example

<!-- image -->

Figure 11-21. Block Move Example PaRAM Configuration

| Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|
| Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) |
| Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| Reserved                          | Count for 3rd Dimension (CCNT)    |

(a) EDMA Parameters

| Parameter Contents                | Parameter Contents                |
|-----------------------------------|-----------------------------------|
| 0010 0008h                        | 0010 0008h                        |
| Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0001h                             | 0100h                             |
| Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0000h                             | 0000h                             |
| 0000h                             | FFFFh                             |
| 0000h                             | 0000h                             |
| 0000h                             | 0001h                             |

(b) Channel Options Parameter (OPT) Content

<!-- image -->

## 11.3.19.2 Subframe Extraction Example

The EDMA3 can efficiently extract a small frame of data from a larger frame of data. By performing a 2Dto-1D transfer, the EDMA3 retrieves a portion of data for the CPU to process. In this example, a 640 × 480-pixel frame of video data is stored in external memory. Each pixel is represented by a 16-bit halfword. The CPU extracts a 16 × 12-pixel subframe of the image for processing. To facilitate more efficient processing time by the CPU, the EDMA3 places the subframe in internal L2 SRAM. Figure 11-22 shows the transfer of a subframe from external memory to L2. Figure 11-23 shows the parameters for this transfer.

The same PaRAM entry options are used for QDMA channels, as well as DMA channels. The STATIC bit in OPT is set to prevent linking. For successive transfers, only changed parameters need to be programmed before triggering the channel.

<!-- image -->

9

Figure 11-23. Subframe Extraction Example PaRAM Configuration

(a) EDMA Parameters

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0010 000Ch                        | 0010 000Ch                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC)      | Channel Source Address (SRC)      | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 000Ch                             | 0020h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0020h                             | 0500h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0000h                             | FFFFh                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                             | 0000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | 0001h                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b) Channel Options Parameter (OPT) Content

<!-- image -->

<!-- image -->

<!-- image -->

| www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | www.ti.com Functional   | Description   | Description   | Description   |
|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|-------------------------|---------------|---------------|---------------|
| 31                      | 30                      | 28                      | 27                      | 24                      | 23                      | 22                      | 21                      | 20                      | 19                      |                         | 18            | 17            | 16            |
| 0                       | 000                     | 000                     | 0000                    | 0000                    | 0                       | 0                       | 0                       | 1                       | 00                      | 00                      | 00            | 00            | 00            |
| PRIV                    | Reserved                | Reserved                | PRIVID                  | PRIVID                  | ITCCHEN                 | TCCHEN                  | ITCINTEN                | TCINTEN                 | Reserved                | Reserved                | TCC           | TCC           | TCC           |
| 15                      | 12                      | 11                      |                         | 8                       | 7                       |                         |                         | 4                       | 3                       |                         | 2             | 1             | 0             |
| 0000                    | 0000                    | 0000                    | 0                       | 000                     | 000                     | 0000                    | 0000                    | 0000                    | 0000                    | 1                       | 1             | 0             | 0             |
| TCC                     | TCC                     | TCC                     | TCCMOD                  | FWID                    | FWID                    | Reserved                | Reserved                | Reserved                | Reserved                | STATIC                  | SYNCDIM       | DAM           | SAM           |

## 11.3.19.3 Data Sorting Example

Many applications require the use of multiple data arrays; it is often desirable to have the arrays arranged such that the first elements of each array are adjacent, the second elements are adjacent, and so on. Often this is not how the data is presented to the device. Either data is transferred via a peripheral with the data arrays arriving one after the other or the arrays are located in memory with each array occupying a portion of contiguous memory spaces. For these instances, the EDMA3 can reorganize the data into the desired format. Figure 11-24 shows the data sorting.

To determine the parameter set values, the following need to be considered:

- ACNT - Program this to be the size in bytes of an element.
- BCNT - Program this to be the number of elements in a frame.
- CCNT - Program this to be the number of frames.
- SRCBIDX - Program this to be the size of the element or ACNT.
- DSTBIDX - CCNT × ACNT
- SRCCDX - ACNT × BCNT
- DSTCIDX - ACNT

The synchronization type needs to be AB-synchronized and the STATIC bit is 0 to allow updates to the parameter set. It is advised to use normal EDMA3 channels for sorting.

It is not possible to sort this with a single trigger event. Instead, the channel can be programmed to be chained to itself. After BCNT elements get sorted, intermediate chaining could be used to trigger the channel again causing the transfer of the next BCNT elements and so on. Figure 11-25 shows the parameter set programming for this transfer, assuming channel 0 and an element size of 4 bytes.

## Figure 11-24. Data Sorting Example

<!-- image -->

| Channel Source Address (SRC)   | A_1   | A_2   | A_3   | ...   | ...   | A_1022   | A_1023   | A_1024   | Channel Destination Address (DST)   | A_1    | B_1    | C_1    | D_1    |
|--------------------------------|-------|-------|-------|-------|-------|----------|----------|----------|-------------------------------------|--------|--------|--------|--------|
| Channel Source Address (SRC)   | B_1   | B_2   | B_3   | ...   | ...   | B_1022   | B_1023   | B_1024   | Channel Destination Address (DST)   | A_2    | B_2    | C_2    | D_2    |
| Channel Source Address (SRC)   | C_1   | C_2   | C_3   | ...   | ...   | C_1022   | C_1023   | C_1024   | Channel Destination Address (DST)   | A_3    | B_3    | C_3    | D_3    |
| Channel Source Address (SRC)   | D_1   | D_2   | D_3   | ...   | ...   | D_1022   | D_1023   | D_1024   | Channel Destination Address (DST)   | ...    | ...    | ...    | ...    |
|                                |       |       |       |       |       |          |          |          | Channel Destination Address (DST)   | ...    | ...    | ...    | ...    |
|                                |       |       |       |       |       |          |          |          | Channel Destination Address (DST)   | A_1022 | B_1022 | C_1022 | D_1022 |
|                                |       |       |       |       |       |          |          |          | Channel Destination Address (DST)   | A_1023 | B_1023 | C_1023 | D_1023 |
|                                |       |       |       |       |       |          |          |          | Channel Destination Address (DST)   | A_1024 | B_1024 | C_1024 | D_1024 |

(a) EDMA Parameters

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0090 0004h                        | 0090 0004h                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC)      | Channel Source Address (SRC)      | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0400h                             | 0004h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0010h                             | 0004h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0000h                             | FFFFh                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0004h                             | 1000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | 0004h                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b) Channel Options Parameter (OPT) Content

<!-- image -->

## 11.3.19.4 Peripheral Servicing Example

The EDMA3 channel controller also services peripherals in the background of CPU operation, without requiring any CPU intervention. Through proper initialization of the EDMA3 channels, they can be configured to continuously service on-chip and off-chip peripherals throughout the device operation. Each event available to the EDMA3 has its own dedicated channel, and all channels operate simultaneously. The only requirements are to use the proper channel for a particular transfer and to enable the channel event in the event enable register (EER). When programming an EDMA3 channel to service a peripheral, it is necessary to know how data is to be presented to the processor. Data is always provided with some kind of synchronization event as either one element per event (non-bursting) or multiple elements per event (bursting).

## 11.3.19.4.1 Non-bursting Peripherals

Non-bursting peripherals include the on-chip multichannel audio serial port (McASP) and many external devices, such as codecs. Regardless of the peripheral, the EDMA3 channel configuration is the same.

The McASP transmit and receive data streams are treated independently by the EDMA3. The transmit and receive data streams can have completely different counts, data sizes, and formats. Figure 11-26 shows servicing incoming McASP data.

To transfer the incoming data stream to its proper location in DDR memory, the EDMA3 channel must be set up for a 1D-to-1D transfer with A-synchronization. Because an event (AREVT) is generated for every word as it arrives, it is necessary to have the EDMA3 issue the transfer request for each element individually. Figure 11-27 shows the parameters for this transfer. The source address of the EDMA3 channel is set to the data port address (DAT) for McASP, and the destination address is set to the start of the data block in DDR. Because the address of serializer buffer is fixed, the source B index is cleared to 0 (no modification) and the destination B index is set to 01b (increment).

Based on the premise that serial data is typically a high priority, the EDMA3 channel should be programmed to be on queue 0.

Figure 11-25. Data Sorting Example PaRAM Configuration

<!-- image -->

<!-- image -->

www.ti.com

Figure 11-26. Servicing Incoming McASP Data Example

<!-- image -->

Figure 11-27. Servicing Incoming McASP Data Example PaRAM Configuration

(a) EDMA Parameters

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0010 0000h                        | 0010 0000h                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| McASP RX Address                  | McASP RX Address                  | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0100h                             | 0001h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                             | 0000h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0000h                             | FFFFh                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                             | 0000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | 0004h                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b) Channel Options Parameter (OPT) Content

<!-- image -->

## 11.3.19.4.2 Bursting Peripherals

Higher bandwidth applications require that multiple data elements be presented to the processor core for every synchronization event. This frame of data can either be from multiple sources that are working simultaneously or from a single high-throughput peripheral that streams data to/from the processor.

In this example, a port is receiving a video frame from a camera and presenting it to the processor one array at a time. The video image is 640 × 480 pixels, with each pixel represented by a 16-bit element. The image is to be stored in external memory. Figure 11-28 shows this example.

To transfer data from an external peripheral to an external buffer one array at a time based on EVT n , channel n must be configured. Due to the nature of the data (a video frame made up of arrays of pixels) the destination is essentially a 2D entity. Figure 11-29 shows the parameters to service the incoming data with a 1D-to-2D transfer using AB-synchronization. The source address is set to the location of the video framer peripheral, and the destination address is set to the start of the data buffer. Because the input address is static, the SRCBIDX is 0 (no modification to the source address). The destination is made up of arrays of contiguous, linear elements; therefore, the DSTBIDX is set to pixel size, 2 bytes. ANCT is equal to the pixel size, 2 bytes. BCNT is set to the number of pixels in an array, 640. CCNT is equal to the total number of arrays in the block, 480. SRCCIDX is 0 because the source address undergoes no increment. The DSTCIDX is equal to the difference between the starting addresses of each array. Because a pixel is 16 bits (2 bytes), DSTCIDX is equal to 640 × 2.

Figure 11-28. Servicing Peripheral Burst Example

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

(a) EDMA Parameters

| Parameter Contents          | Parameter Contents          | Parameter                         | Parameter                         |
|-----------------------------|-----------------------------|-----------------------------------|-----------------------------------|
| 0010 0004h                  | 0010 0004h                  | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address      | Channel Source Address      | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0280h                       | 0002h                       | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address | Channel Destination Address | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0002h                       | 0000h                       | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0000h                       | FFFFh                       | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0500h                       | 0000h                       | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                       | 01E0h                       | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b) Channel Options Parameter (OPT) Content

Figure 11-29. Servicing Peripheral Burst Example PaRAM Configuration

<!-- image -->

## 11.3.19.4.3 Continuous Operation

Configuring an EDMA3 channel to receive a single frame of data is useful, and is applicable to some systems. A majority of the time, however, data is going to be continuously transmitted and received throughout the entire operation of the processor. In this case, it is necessary to implement some form of linking such that the EDMA3 channels continuously reload the necessary parameter sets. In this example, McASP is configured to transmit and receive data on a T1 array. To simplify the example, only two channels are active for both transmit and receive data streams. Each channel receives packets of 128 elements. The packets are transferred from the serial port to internal memory and from internal memory to the serial port, as shown Figure 11-30.

The McASP generates AREVT for every element received and generates AXEVT for every element transmitted. To service the data streams, the DMA channels associated with the McASP must be setup for 1D-to-1D transfers with A-synchronization.

Figure 11-31 shows the parameter entries for the channel for these transfers. To service the McASP continuously, the channels must be linked to a duplicate PaRAM set in the PaRAM. After all frames have been transferred, the EDMA3 channels reload and continue. Figure 11-32 shows the reload parameters for the channel.

## 11.3.19.4.3.1 Receive Channel

EDMA3 channel 15 services the incoming data stream of McASP. The source address is set to that of the receive serializer buffer, and the destination address is set to the first element of the data block. Because there are two data channels being serviced, A and B, they are to be located separately within the L2 SRAM.

To facilitate continuous operation, a copy of the PaRAM set for the channel is placed in PaRAM set 64. The LINK option is set and the link address is provided in the PaRAM set. Upon exhausting the channel 15 parameter set, the parameters located at the link address are loaded into the channel 15 parameter set and operation continues. This function continues throughout device operation until halted by the CPU.

## 11.3.19.4.3.2 Transmit Channel

EDMA3 channel 12 services the outgoing data stream of McASP. In this case the destination address needs no update, hence, the parameter set changes accordingly. Linking is also used to allow continuous operation by the EDMA3 channel, with duplicate PaRAM set entries at PaRAM set 65.

Figure 11-30. Servicing Continuous McASP Data Example

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## Figure 11-31. Servicing Continuous McASP Data Example PaRAM Configuration

(a) EDMA Parameters for Receive Channel (PaRAM Set 15) being Linked to PaRAM Set 64

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0010 0000h                        | 0010 0000h                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| McASP RX Register                 | McASP RX Register                 | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0080h                             | 0001h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                             | 0000h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                             | 4800h                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                             | 0000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | FFFFh                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b) Channel Options Parameter (OPT) Content for Receive Channel (PaRAM Set 15)

<!-- image -->

(c) EDMA Parameters for Transmit Channel (PaRAM Set 12) being Linked to PaRAM Set 65

| Parameter Contents           | Parameter Contents           | Parameter                         | Parameter                         |
|------------------------------|------------------------------|-----------------------------------|-----------------------------------|
| 0010 1000h                   | 0010 1000h                   | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC) | Channel Source Address (SRC) | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0080h                        | 0001h                        | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| McASP TX Register            | McASP TX Register            | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0000h                        | 0001h                        | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                        | 4860h                        | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                        | 0000h                        | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                        | FFFFh                        | Reserved                          | Count for 3rd Dimension (CCNT)    |

(d) Channel Options Parameter (OPT) Content for Transmit Channel (PaRAM Set 12)

Figure 11-32. Servicing Continuous McASP Data Example Reload PaRAM Configuration

<!-- image -->

(a) EDMA Reload Parameters (PaRAM Set 64) for Receive Channel

<!-- image -->

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0010 0000h                        | 0010 0000h                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| McASP RX Register                 | McASP RX Register                 | Channel Source Address            | Channel Source Address            |
| 0080h                             | 0001h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                             | 0000h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                             | 4800h                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                             | 0000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | FFFFh                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

## (b) Channel Options Parameter (OPT) Content for Receive Channel (PaRAM Set 64)

<!-- image -->

| 31   | 30              | 28              | 27              | 24   | 23      | 22       | 21       | 20       | 19       | 18       | 17   | 16   |
|------|-----------------|-----------------|-----------------|------|---------|----------|----------|----------|----------|----------|------|------|
| 0    | 000 0000        | 000 0000        | 000 0000        |      | 0       | 0        | 0        | 1        | 00       | 00       | 00   | 00   |
| PRIV | Reserved PRIVID | Reserved PRIVID | Reserved PRIVID |      | ITCCHEN | TCCHEN   | ITCINTEN | TCINTEN  | Reserved | Reserved | TCC  | TCC  |
| 15   | 12              | 11              | 10              | 8    | 7       |          |          | 4        | 3        | 2        | 1    | 0    |
| 0000 | 0000            | 0000            | 0               | 000  |         | 0000     | 0000     | 0000     | 0        | 0        | 0    | 0    |
| TCC  | TCC             | TCC             | TCCMOD          | FWID |         | Reserved | Reserved | Reserved | STATIC   | SYNCDIM  | DAM  | SAM  |

(c) EDMA Reload Parameters (PaRAM Set 65) for Transmit Channel

| Parameter Contents           | Parameter Contents           | Parameter                         | Parameter                         |
|------------------------------|------------------------------|-----------------------------------|-----------------------------------|
| 0010 1000h                   | 0010 1000h                   | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC) | Channel Source Address (SRC) | Channel Source Address            | Channel Source Address            |
| 0080h                        | 0001h                        | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| McASP TX Register            | McASP TX Register            | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0000h                        | 0001h                        | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                        | 4860h                        | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                        | 0000h                        | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                        | FFFFh                        | Reserved                          | Count for 3rd Dimension (CCNT)    |

## (d) Channel Options Parameter (OPT) Content for Transmit Channel (PaRAM Set 65)

<!-- image -->

| 31   | 30              | 28              | 27              | 24   | 23      | 22       | 21       | 20       | 19       | 18       | 17   | 16   |
|------|-----------------|-----------------|-----------------|------|---------|----------|----------|----------|----------|----------|------|------|
| 0    | 000 0000        | 000 0000        | 000 0000        |      | 0       | 0        | 0        | 1        | 00       | 00       | 00   | 00   |
| PRIV | Reserved PRIVID | Reserved PRIVID | Reserved PRIVID |      | ITCCHEN | TCCHEN   | ITCINTEN | TCINTEN  | Reserved | Reserved | TCC  | TCC  |
| 15   |                 | 12              | 11 10           | 8    | 7       |          |          | 4        | 3        | 2        | 1    | 0    |
| 0001 | 0001            | 0001            | 0               | 000  |         | 0000     | 0000     | 0000     | 0        | 0        | 0    | 0    |
| TCC  | TCC             | TCC             | TCCMOD          | FWID |         | Reserved | Reserved | Reserved | STATIC   | SYNCDIM  | DAM  | SAM  |

<!-- image -->

www.ti.com

## 11.3.19.4.4 Ping-Pong Buffering

Although the previous configuration allows the EDMA3 to service a peripheral continuously, it presents a number of restrictions to the CPU. Because the input and output buffers are continuously being filled/emptied, the CPU must match the pace of the EDMA3 very closely to process the data. The EDMA3 receive data must always be placed in memory before the CPU accesses it, and the CPU must provide the output data before the EDMA3 transfers it. Though not impossible, this is an unnecessary challenge. It is particularly difficult in a 2-level cache scheme.

Ping-pong buffering is a simple technique that allows the CPU activity to be distanced from the EDMA3 activity. This means that there are multiple (usually two) sets of data buffers for all incoming and outgoing data streams. While the EDMA3 transfers the data into and out of the ping buffers, the CPU manipulates the data in the pong buffers. When both CPU and EDMA3 activity completes, they switch. The EDMA3 then writes over the old input data and transfers the new output data. Figure 11-33 shows the ping-pong scheme for this example.

To change the continuous operation example, such that a ping-pong buffering scheme is used, the EDMA3 channels need only a moderate change. Instead of one parameter set, there are two; one for transferring data to/from the ping buffers and one for transferring data to/from the pong buffers. As soon as one transfer completes, the channel loads the PaRAM set for the other and the data transfers continue. Figure 11-34 shows the EDMA3 channel configuration required.

Each channel has two parameter sets, ping and pong. The EDMA3 channel is initially loaded with the ping parameters (Figure 11-34). The link address for the ping set is set to the PaRAM offset of the pong parameter set (Figure 11-35). The link address for the pong set is set to the PaRAM offset of the ping parameter set (Figure 11-36). The channel options, count values, and index values are all identical between the ping and pong parameters for each channel. The only differences are the link address provided and the address of the data buffer.

## 11.3.19.4.4.1 Synchronization with the CPU

To utilize the ping-pong buffering technique, the system must signal the CPU when to begin to access the new data set. After the CPU finishes processing an input buffer (ping), it waits for the EDMA3 to complete before switching to the alternate (pong) buffer. In this example, both channels provide their channel numbers as their report word and set the TCINTEN bit to generate an interrupt after completion. When channel 15 fills an input buffer, the E15 bit in the interrupt pending register (IPR) is set; when channel 12 empties an output buffer, the E12 bit in IPR is set. The CPU must manually clear these bits. With the channel parameters set, the CPU polls IPR to determine when to switch. The EDMA3 and CPU could alternatively be configured such that the channel completion interrupts the CPU. By doing this, the CPU could service a background task while waiting for the EDMA3 to complete.

<!-- image -->

## Figure 11-33. Ping-Pong Buffering for McASP Data Example

Figure 11-34. Ping-Pong Buffering for McASP Example PaRAM Configuration

<!-- image -->

(a) EDMA Parameters for Channel 15 (Using PaRAM Set 15 Linked to Pong Set 64)

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0010 D000h                        | 0010 D000h                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| McASP RX Register                 | McASP RX Register                 | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0080h                             | 0001h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                             | 0000h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                             | 4800h                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                             | 0000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | 0001h                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b) Channel Options Parameter (OPT) Content for Channel 15

<!-- image -->

<!-- image -->

www.ti.com

(c) EDMA Parameters for Channel 12 (Using PaRAM Set 12 Linked to Pong Set 66)

| Parameter Contents           | Parameter Contents           | Parameter                         | Parameter                         |
|------------------------------|------------------------------|-----------------------------------|-----------------------------------|
| 0010 C000h                   | 0010 C000h                   | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC) | Channel Source Address (SRC) | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0080h                        | 0001h                        | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| McASP TX Register            | McASP TX Register            | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0000h                        | 0001h                        | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                        | 4840h                        | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                        | 0000h                        | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                        | 0001h                        | Reserved                          | Count for 3rd Dimension (CCNT)    |

(d) Channel Options Parameter (OPT) Content for Channel 12

Figure 11-35. Ping-Pong Buffering for McASP Example Pong PaRAM Configuration

<!-- image -->

(a) EDMA Pong Parameters for Channel 15 at Set 64 Linked to Set 65

| Parameter Contents                | Parameter Contents                | Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 0010 D000h                        | 0010 D000h                        | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| McASP RX Register                 | McASP RX Register                 | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0080h                             | 0001h                             | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                             | 0000h                             | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                             | 4820h                             | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                             | 0000h                             | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                             | 0001h                             | Reserved                          | Count for 3rd Dimension (CCNT)    |

## (b) EDMA Pong Parameters for Channel 12 at Set 66 Linked to Set 67

| Parameter Contents           | Parameter Contents           | Parameter                         | Parameter                         |
|------------------------------|------------------------------|-----------------------------------|-----------------------------------|
| 0010 C000h                   | 0010 C000h                   | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC) | Channel Source Address (SRC) | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0080h                        | 0001h                        | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| McASP TX Register            | McASP TX Register            | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0000h                        | 0001h                        | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0080h                        | 4860h                        | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0000h                        | 0000h                        | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                        | 0001h                        | Reserved                          | Count for 3rd Dimension (CCNT)    |

<!-- image -->

## Figure 11-36. Ping-Pong Buffering for McASP Example Ping PaRAM Configuration

(a) EDMA Ping Parameters for Channel 15 at Set 65 Linked to Set 64

## Parameter Contents

| Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|
| Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) |
| Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| Reserved                          | Count for 3rd Dimension (CCNT)    |

| 0010 D000h                        | 0010 D000h                        |
|-----------------------------------|-----------------------------------|
| McASP RX Register                 | McASP RX Register                 |
| 0080h                             | 0001h                             |
| Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                             | 0000h                             |
| 0080h                             | 4800h                             |
| 0000h                             | 0000h                             |
| 0000h                             | 0001h                             |

## (b) EDMA Ping Parameters for Channel 12 at Set 67 Linked to Set 66

Parameter Contents

0010 C000h

Channel Source Address (SRC)

0080h

0001h

McASP TX Register

0000h

0001h

0080h

0000h

0000h

4840h

0000h

0001h

## 11.3.19.4.5 Transfer Chaining Examples

The following examples explain the intermediate transfer complete chaining function.

## 11.3.19.4.5.1 Servicing Input/Output FIFOs with a Single Event

Many systems require the use of a pair of external FIFOs that must be serviced at the same rate. One FIFO buffers data input, and the other buffers data output. The EDMA3 channels that service these FIFOs can be set up for AB-synchronized transfers. While each FIFO is serviced with a different set of parameters, both can be signaled from a single event. For example, an external interrupt pin can be tied to the status flags of one of the FIFOs. When this event arrives, the EDMA3 needs to perform servicing for both the input and output streams. Without the intermediate transfer complete chaining feature this would require two events, and thus two external interrupt pins. The intermediate transfer complete chaining feature allows the use of a single external event (for example, a GPIO event). Figure 11-37 shows the EDMA3 setup and illustration for this example.

A GPIO event (in this case, GPINT0) triggers an array transfer. Upon completion of each intermediate array transfer of channel 48, intermediate transfer complete chaining sets the E8 bit (specified by TCC of 8) in the chained event register (CER) and provides a synchronization event to channel 8. Upon completion of the last array transfer of channel 48, transfer complete chaining-not intermediate transfer complete chaining-sets the E8 bit in CER (specified by TCCMODE:TCC) and provides a synchronization event to channel 8. The completion of channel 8 sets the I8 bit (specified by TCCMODE:TCC) in the interrupt pending register (IPR), which can generate an interrupt to the CPU, if the I8 bit in the interrupt enable register (IER) is set.

| Parameter                         | Parameter                         |
|-----------------------------------|-----------------------------------|
| Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| Channel Destination Address (DST) | Channel Destination Address (DST) |
| Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| Reserved                          | Count for 3rd Dimension (CCNT)    |

<!-- image -->

www.ti.com

Figure 11-37. Intermediate Transfer Completion Chaining Example

<!-- image -->

## 11.3.19.4.5.2 Breaking Up Large Transfers with Intermediate Chaining

Another feature of intermediate transfer chaining (ITCCHEN) is for breaking up large transfers. A large transfer may lock out other transfers of the same priority level for the duration of the transfer. For example, a large transfer on queue 0 from the internal memory to the external memory using the EMIF may starve other EDMA3 transfers on the same queue. In addition, this large high-priority transfer may prevent the EMIF for a long duration to service other lower priority transfers. When a large transfer is considered to be high priority, it should be split into multiple smaller transfers. Figure 11-38 shows the EDMA3 setup and illustration of an example single large block transfer.

## Figure 11-38. Single Large Block Transfer Example

<!-- image -->

ACNT = 16384 BCNT = 1 CCNT = 1 1D transfer of 16 KByte elements OPT.ITCINTEN = 0 OPT.TCC = Don't care EDMA3 channel 25 setup

The intermediate transfer chaining enable (ITCCHEN) provides a method to break up a large transfer into smaller transfers. For example, to move a single large block of memory (16K bytes), the EDMA3 performs an A-synchronized transfer. The element count is set to a reasonable value, where reasonable derives from the amount of time it would take to move this smaller amount of data. Assume 1 Kbyte is a reasonable small transfer in this example. The EDMA3 is set up to transfer 16 arrays of 1 Kbyte elements, for a total of 16K byte elements. The TCC field in the channel options parameter (OPT) is set to the same value as the channel number and ITCCHEN are set. In this example, EDMA3 channel 25 is used and TCC is also set to 25. The TCINTEN may also be set to trigger interrupt 25 when the last 1 Kbyte array is transferred. The CPU starts the EDMA3 transfer by writing to the appropriate bit of the event set register (ESR.E25). The EDMA3 transfers the first 1 Kbyte array. Upon completion of the first array, intermediate transfer complete code chaining generates a synchronization event to channel 25, a value specified by the TCC field. This intermediate transfer completion chaining event causes EDMA3 channel 25 to transfer the next 1 Kbyte array. This process continues until the transfer parameters are exhausted, at which point the EDMA3 has completed the 16K byte transfer. This method breaks up a large transfer into smaller packets, thus providing natural time slices in the transfer such that other events may be processed. Figure 11-39 shows the EDMA3 setup and illustration of the broken up smaller packet transfers.

Figure 11-39. Smaller Packet Data Transfers Example

<!-- image -->

<!-- image -->