## 4.4.5 ECAP

The PRU ECAP module within the PRU-ICSS is identical to the ECAP module in the AM335x PWMSS. For additional details about the ECAP module, see Section 15.3, Pulse-Width Modulation Subsystem (PWMSS) .

## 4.4.6 MII\_RT

## 4.4.6.1 Introduction

The Real-time Media Independent Interface (MII\_RT) provides a programmable I/O interface for the PRUs to access and control up to two MII ports. The MII\_RT module can also be configured to push and pull data independent of the PRU cores.

NOTE:

To ensure the MII\_RT IO timing values published in the device data manual, the ocp\_clk must be configured for 200 MHz (default value) and the TX\_CLK\_DELAY bit field in the PRUSS\_MII\_RT\_TXCFG0/1 register must be configured as follows:

- 100 Mbps mode: 6h (non-default value)
- 10 Mbps mode: 0h (default value)

## 4.4.6.1.1 Features

The PRU-ICSS MII\_RT module supports:

- Two MII ports
- -Each MII port has:
- 32-byte RX L1 FIFO
- 64-byte RX L2 buffer
- 64-byte TX L1 FIFO
- -Rate decoupling on TX L1 FIFO
- -Configurable pre-amble removal on RX L1 FIFO and insertion on TX L1 FIFO
- -Configurable TX L1 FIFO trigger (10 bits with 40 ns ticks)
- MII port multiplexer per direction to support line/ring structure
- -Link detection through RX\_ERR
- Cyclic redundancy check (CRC)
- -CRC32 generation on TX path
- -CRC32 checker on RX path

## 4.4.6.1.2 Unsupported Features

The PRU-ICSS MII\_RT module does not support:

- Auto padding in TX L1 FIFO
- Dynamic TX multiplexer switching during packet handling
- -Can allow one PRU to handle both MII interfaces and a second PRU to manage the host and switch functions.

## 4.4.6.1.3 Block Diagram

Figure 4-32 shows the MII\_RT in context of the PRU-ICSS. This diagram is a conceptual block diagram and does not necessarily reflect actual topologies.

<!-- image -->

<!-- image -->

www.ti.com

Figure 4-32. MII\_RT Block Diagram

<!-- image -->

## 4.4.6.2 Functional Description

## 4.4.6.2.1 Data Path Configuration

The MII\_RT module supports three basic data path configurations. These configurations are compared in Table 4-29 and described in the following sections.

Table 4-29. Data Path Configuration Comparison

| Configuration                                                  | PRU Dependency   | Data Servicing             | Port-to-Port Latency            |
|----------------------------------------------------------------|------------------|----------------------------|---------------------------------|
| Auto-forward                                                   | Snoop only       | One word in flight         | Low                             |
| 8- or 16-bit processing with on- the-fly modifications (RX L1) | Yes              | One word or byte in flight | Low                             |
| 32-byte double buffer or ping- pong processing (RX L2)         | Yes              | Multi-words in flight      | Medium (application- dependent) |

## 4.4.6.2.1.1 Auto-forward with Optional PRU Snoop

Data is automatically forwarded from the MII RX port to the MII TX port without manipulations, as shown in Figure 4-33. This configuration does not depend on the PRU core. However, it does support an option for PRU to snoop or monitor the received data through the RX L2, shown in Figure 4-34. The PRU does not access data and status bits through R31, and it does not modify and push data.

## Figure 4-33. Auto-forward

<!-- image -->

Figure 4-34. Auto-forward with PRU Snoop

<!-- image -->

## 4.4.6.2.1.2 8- or 16-bit Processing with On-the-Fly Modifications

This configuration services one byte or word in flight and has low latency. The PRU has the option to manipulate the received word and control popping data from the RX L1 FIFO and pushing it on the TX L1 FIFO.

Figure 4-35. 8- or 16-bit Processing with On-the-Fly Modifications

<!-- image -->

## 4.4.6.2.1.3 32-byte Double Buffer or Ping-Pong Processing

This configuration supports high bandwidth, high efficiency transactions. Often implementations using this mode permit relaxed servicing requirements allowing the PRU to manipulate the received data before transmitting.

Data received in this configuration is passed into the RX L2 buffer. The PRU reads multiple bytes of data from one of the RX L2 banks through the high bandwidth broadside interface and XFR instructions. The PRU can then store or manipulate data before pushing it to the TX L1 FIFO for transmission on the MII TX port.

Figure 4-36. 32-byte Double Buffer or Ping-Pong Processing

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.6.2.2 Definition and Terms

## 4.4.6.2.2.1 Data Frame Structure

The data received and transmitted over MII conforms with the following frame structure:

## Table 4-30. Frame Structure

| Inter-frame   | Preamble   | Start of Frame Delimiter (SFD)   | Data   | Cyclic Redundancy Check (CRC)   |
|---------------|------------|----------------------------------|--------|---------------------------------|

The data following the SFD is formatted in a 4-bit nibble structure. Figure 4-37 illustrates the nibble order. The MSB arriving first is on the LSB side of a nibble. When receiving data, the MII\_RT receive logic will wait for the next nibble to arrive before constructing a byte and delivering to the PRU.

Figure 4-37. Data Nibble Structure

<!-- image -->

## 4.4.6.2.2.2 PRU R30 and R31

The PRU registers R30 and R31 are used to receive, transmit, and control the data for the PRU. As shown in Figure 4-38, the R31 is used to access data in the RX L1 FIFO, the R30 is used to transmit data from the PRU, and the R31 output is used the control the flow of receive and transmit. For more details about these registers, see the following sections.

Figure 4-38. PRU R30, R31 Operations

<!-- image -->

## 4.4.6.2.2.3 RX and TX L1 FIFO Data Movement

To advance the next data byte seen by R31, the PRU must pop the data from the RX L1 FIFO. Likewise, the PRU can push the data from R30 to the TX L1 FIFO. These operations are illustrated in Figure 4-39.

Figure 4-39. Reading and Writing FIFO Data

<!-- image -->

## 4.4.6.2.2.4 CRC Computation

## 4.4.6.2.2.4.1 Receive CRC Computation

For the incoming data, the MII\_RT calculates CRC32 and then compares against the value provided in the incoming frame. If there is a mismatch, the MII RT signals ERROR\_CRC to the PRU. If a previous node or Ethernet device appended an error nibble, the CRC calculation of received packet will be wrong because the longer frame and the frame length will end at a 4-bit boundary instead of the usual 8-bit boundary. When RX\_DV goes inactive on the 4-bit boundary, the interface will assert DATA\_RDY and BYTE\_RDY flag with the ERROR NIBBLE. The error event is also mapped into the PRU-ICSS INTC.

## 4.4.6.2.2.4.2 Transmit CRC Computation

For the outgoing data, the MII\_RT calculates the CRC32 value and inserts it into outgoing packets. The CRC value computed on each MII transmit path is also available in memory map registers (MMRs) that can be read by the PRU and used primarily for debug and diagnostic purposes. The CRC is inserted into the outgoing packet based on the commands received through the R31 register of the PRU. The CRC will be inserted into the TX L1 FIFO, and there must be enough room to store the CRC value in the FIFO or else the FIFO will overflow. As Table 4-31 shows, the CRC programming model supports three sequences that provide more flexibility. Note 'cmdR31' indicates write to the mentioned bits of the R31 command interface.

## NOTE:

If 'auto-generation of preamble' option is used (i.e. with the first push of payload into the TX FIFO the preamble is inserted into the TX FIFO automatically), then the first push of payload must be a byte push (i.e. TX\_PUSH8). If you push a word first, the CRC is not calculated correctly.

Table 4-31. TX CRC Programming Models

| Option 1   | Step 1: cmdR31 [TX_CRC_HIGH + TX_CRC_LOW + TX_EOF]                                                                                                                     |
|------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Option 2   | Step 1: cmdR31 [TX_CRC_HIGH] Step 2: wait > 6 clocks (PRU cycles) Step 3: cmdR31 [TX_CRC_LOW + TX_EOF]                                                                 |
| Option 3   | Step 1: cmdR31 [TX_CRC_HIGH] Step 2: wait > 6 clocks (PRU cycles) Step 3: read TXCRC0/1 Step 4: modify CRC[15:0] Step 5: cmdR31 [TX_PUSH16 + TX_EOF + TX_ERROR_NIBBLE] |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 4.4.6.2.3 RX MII Interface

## 4.4.6.2.3.1 RX MII Submodule Overview

The RX MII interface is composed of multiple submodules that process the incoming frames and pass receive data and status information into the PRU register R31. These submodules include:

- Latch received data
- Start of frame detection
- Start frame delimiter detection
- CRC calculation and error detection
- Enhanced link detection through RX error detection

Table 4-32 includes more details about the internal signals and output of these submodules.

## 4.4.6.2.3.1.1 Receive Data Latch

The receive data from the MII interface is stored in the receive data FIFO which is 32 bytes. The PRU can access this data through the register R31. Depending on the configuration settings, the data can be latched on reception of one or two bytes. In each scheme, the configured number of nibbles is assembled before being copied into the PRU registers. Figure 4-40 shows the inputs and outputs of the data latch logic block.

The receiver logic in MII\_RT can be programmed through the RXCFG0 and RXCFG1 registers to remove or retain the preamble + SFD from incoming frames.

<!-- image -->

## 4.4.6.2.3.1.1.1 Start of Frame Detection

The start of frame detection logic tracks the frame boundaries and signals the beginning of a frame to other components of the PRU-ICSS. This logic detects two events:

- Start of Frame (SOF) event that occurs when Receive Data Valid MII signal is sampled high.
- Start of Frame Delimiter (SFD) event is seen on MII Receive Data bus.

These event triggers can be used to add timestamp to the frames. The notification for these events is available through R31 as well as through INTC which is integrated in the PRU-ICSS. Figure 4-41 shows the inputs and outputs of the start of frame detection logic block.

Figure 4-41. Start of Frame Detection

<!-- image -->

## 4.4.6.2.3.1.1.2 CRC Error Detection

For each incoming frame, the CRC is calculated by the MII\_RT and compared against the CRC included in the frame. When the two values do not match, a CRC error is flagged. The ERROR\_CRC indication is available in the register interface (PRU R31 Receive Interface) as well as in the FIFO interface (RX L2 Status Interface). It is also provided to the INTC which is integrated in the PRU-ICSS. Figure 4-42 shows the inputs and outputs of CRC error detection logic block.

Figure 4-42. CRC Error Detection

<!-- image -->

## 4.4.6.2.3.1.1.3 RX Error Detection and Action

The RX error detection logic tracks the receive error signaled by the physical layer and informs the PRUICSS INTC whenever an error is detected. Figure 4-43 shows the inputs and outputs of the RX error detection logic block. Note the following dependencies:

- RX\_ERR signal is only sampled when RX\_DV is asserted.
- All nibbles are discarded post RX\_ERR event, including the nibble which had RX\_ERR asserted. This state will remain until EOF occurs.
- Due to this fact, RX L1 FIFO and RX L2 FIFO will never receive any data with RX\_ERR or post RX\_ERR during that frame.

Figure 4-43. RX Error Detection

<!-- image -->

This submodule also keeps track of a running count of receive error events within a 10 μ s error detection window, as shown in Figure 4-44. The INTC is notified when 32 or more events have occurred in a 10 μ s error detection window. The error detection window is not a sliding window but a non-overlapping window with no specific initialization time with respect to incoming traffic. The timer starts its 10 μ s counts immediately after de-assertion of reset to the MII\_RT module.

<!-- image -->

<!-- image -->

www.ti.com

Figure 4-44. Error Detection Window with Running Counter

<!-- image -->

- A There are fewer than 32 consecutive error events in the 10 μ s window. The detection module will not forward to the interrupt controller (INTC).
- B There are more or equal to 32 error events in the 10 μ s window. The detection module will notify the interrupt controller (INTC).

## 4.4.6.2.3.1.2 RX Data Path Options to PRU

There are two data path options for delivering received data to the PRU, described further in the subsequent sections:

1. RX MII port → RX L1 FIFO → PRU (one word in flight)
2. RX MII port → RX L1 FIFO → RX L2 buffer → PRU (multi-word in flight)

Once the PRU has received RX data, the PRU can both manipulate received data or send data to the TX MII Interface.

## 4.4.6.2.3.1.2.1 RX MII Port → RX L1 FIFO → PRU

The RX L1 FIFO to PRU interface is depicted in Figure 4-45. In this mode, the data received from the MII interface is fed into the 32-byte RX L1 FIFO. The first data byte into the FIFO is automatically available in R31 of the PRU. Therefore, the PRU firmware can directly operate on this data without having to read it in a separate instruction. This allows the PRU to access receive data with low latency.

Figure 4-45. RX L1 to PRU Interface

<!-- image -->

When the new data is received, the PRU is provided with up to two bytes at a time in the R31 register, as shown in Figure 4-46. Once the PRU processes the incoming data, it instructs the MII\_RT by writing to the R31 command interface bits to pop one or two bytes of data from the 32-byte RX FIFO. The pop operation causes current contents of R31 to be refreshed with new data from the incoming packet. Each time the data is popped, the status bits change to indicate so. If the pop is completed and there is no new data, the status bits immediately change to indicate no new data. Note the current R31 content, including data, will be lost after issuing the pop operation. If this information needs to be accessed later, the PRU should store the existing R31 content before popping new data.

<!-- image -->

Table 4-32 describes the receive interface data and status contents provided by the R31 register. These contents are available when R31 is read. To configure this register, the PRU GPI mode should be set for MII\_RT mode in the CFG register space. Note the following:

<!-- image -->

1. If the data from the receive path is not read in time, it could cause an overflow event because the data is still continuously provided to the 32-byte receive FIFO. Due to the receive FIFO overflow, the data gets automatically discarded to avoid lack of space in the FIFO. At the same time, an interrupt is raised to the INTC through a system event (PRU&lt;n&gt;\_RX\_OVERFLOW). To detect an overflow condition, the PRU should poll for this system event condition, and a RX RESET command through the R31 command interface is required to clear out from this condition. The received Ethernet frame is corrupted and should not be used for further processing, as bytes have been dropped due to the overflow condition. A FIFO reset is recommended.
2. The receive data in the R31 register is available following synchronization to the PRU clock domain. So, there is a finite delay (120 ns) when data is available from MII interface and it is accessible to the PRU.
3. The receive FIFO also has the capability to be reset through software. When reset, all contents of receive FIFO are purged and it may result in the current frame not being received as expected. When a frame is being received and the PRU resets the RX FIFO, the remaining frame is not placed into the RX FIFO. However, any new frame arriving on the receive MII port will be stored in the FIFO.

<!-- image -->

www.ti.com

## Table 4-32. PRU R31: Receive Interface Data and Status (Read Mode)

| Bits   | Field Name         | Description                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|--------|--------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31:30  | RESERVED           | In case of register interface, these bits are provided to PRU by other modules in PRU-ICSS. From the MII_RT module point of view, these bits are always zero.                                                                                                                                                                                                                                                                                         |
| 29     | RX_MIN_FRM_CNT_ERR | RX_MIN_FRM_CNT_ERR is set to 1 when the count of total bytes of incoming frame is less than the value defined by RX_MIN_FRM_CNT. RX_MIN_FRM_CNT_ERR is cleared by RX_ERROR_CLR.                                                                                                                                                                                                                                                                       |
| 28     | RX_MAX_FRM_CNT_ERR | RX_MAX_FRM_CNT_ERR is set to 1 when the count of total bytes of incoming frame is more than the value defined by RX_MAX_FRM_CNT_ERR. RX_MAX_FRM_CNT_ERR is cleared by RX_ERROR_CLR.                                                                                                                                                                                                                                                                   |
| 27     | RX_EOF_ERROR       | RX_EOF_ERROR is set to 1 when an RX_EOF event or RX_ERROR event occurs. RX_EOF_ERROR is cleared by RX_ EOF_CLR and/or RX_ ERROR_CLR.                                                                                                                                                                                                                                                                                                                  |
| 26     | RX_MAX_PRE_CNT_ERR | RX_MAX_PRE_CNT_ERR is set to 1 when the number of nibbles equaling 0x5 before SFD event (0x5D) is more than the value defined by RXPCNT0/1 [RX_MAX_PRE_CNT]. RX_MAX_PRE_CNT_ERR is cleared by RX_ERROR_CLR.                                                                                                                                                                                                                                           |
| 25     | RX_ERR             | RX_ERR is set to 1 when pr1_mii0/1_rxer is asserted while pr1_mii0/1_rxdv bit is set. RX_ERR is cleared by RX_ERROR_CLR.                                                                                                                                                                                                                                                                                                                              |
| 24     | ERROR_CRC          | ERROR_CRC indicates that the frame has a CRC mismatch. This bit is valid when the RX_EOF bit is set. It should be noted that ERROR_CRC bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. ERROR_CRC is cleared by RX_ERROR_CLR.                                                                                                                                                                        |
| 23     | ERROR_NIBBLE       | ERROR_NIBBLE indicates that the frame ended in odd nibble. It should be considered valid only when the RX_EOF bit and pr1_mii0/1_rxdv are set. Nibble counter is enabled post SFD event. It should be noted that ERROR_NIBBLE bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. ERROR_NIBBLE is cleared by RX_ERROR_CLR.                                                                              |
| 22     | RX_SOF             | RX_SOF transitions from low to high when the frame data starts to arrive and pr1_mii0/1_rxdv is asserted. Note there will be a small sync delay of 0ns - 5ns. The PRU must write one to this bit through the R31 command interface to clear it. The recommended time to clear this bit is at the end of frame (EOF). It should be noted that RX_SOF bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. |
| 21     | RX_SFD             | RX_SFD transitions from low to high when the SFD sequence (0x5D) post RX_SOF is observed on the receive MII data. The PRU must write one to this bit through the R31 command interface to clear it. The recommended time to clear this bit is at the end of frame (EOF). It should be noted that RX_SFD bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO.                                             |
| 20     | RX_EOF             | RX_EOF indicates that the frame has ended and pr1_mii0/1_rxdv is de- asserted. It also validates the CRC match bit. Note there will be a small sync delay of 0ns - 5ns. The PRU must write one to clear this bit in the R31 command interface at the end of the frame. It should be noted that RX_EOF bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO.                                               |
| 19     | RX_ERROR           | RX_ERROR indicates one or more of the following errors occurred: • RX_MAX/MIN_FRM_CNT_ERR • RX_MAX/MIN_PRE_CNT_ERR • RX_ERR RX_ERROR is cleared by RX_ERROR_CLR.                                                                                                                                                                                                                                                                                      |
| 18     | WORD_RDY           | WORD_RDY indicates that all four nibbles in R31 have valid data. There is a 2 clock cycle latency from the command RX_POP16 to WORD_RDY update. Therefore, firmware needs to insure it does not read WORD_RDY until 2 clock cycles after RX_POP16.                                                                                                                                                                                                    |
| 17     | BYTE_RDY           | BYTE_RDY indicates that the lower two nibbles in R31 have valid data. There is a 2 clock cycle latency from the command RX_POP8 to BYTE_RDY update. Therefore, PRU firmware needs to insure it does not read BYTE_RDY until 2 clock cycles after RX_POP8.                                                                                                                                                                                             |

<!-- image -->

Table 4-32. PRU R31: Receive Interface Data and Status (Read Mode) (continued)

| Bits   | Field Name   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|--------|--------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 16     | DATA_RDY     | DATA_RDY indicates there is valid data in R31 ready to be read. This bit goes to zero when the PRU does a POP8/16 and there is no new data left in the receive MII port. This bit is high if there is more receive data for PRU to read. There is a 2 clock cycle latency from the command RX_POP16/8 to WORD_RDY/BYTE_RDY update. Therefore, PRU firmware must einsure it does not read BYTE_RDY/WORD_RDY until 2 clock cycles after RX_POP16/8. |
| 15:8   | BYTE1        | Data Byte 1. This data is available such that it is safe to read by the PRU when the DATA_RDY/BYTE_RDY/WORD_RDY bits are asserted.                                                                                                                                                                                                                                                                                                                |
| 7:0    | BYTE0        | Data Byte 0. This data is available such that it is safe to read by the PRU when the DATA_RDY/BYTE_RDY/WORD_RDY bits are asserted.                                                                                                                                                                                                                                                                                                                |

## 4.4.6.2.3.1.2.2 RX MII Port → RX L1 FIFO → RX L2 Buffer → PRU

The RX L2 is an optional high performance buffer between the RX L1 FIFO and the PRU. Figure 4-47 illustrates the receive data path using RX L2 buffer. This data path is characterized by multi-word in flight transactions.

<!-- image -->

www.ti.com

Figure 4-47. RX L2 to PRU Interface

<!-- image -->

The 64-byte RX L2 buffer is divided into two 32 byte banks, or ping/pong buffers. When the RX L2 is enabled, the incoming data from the MII RX port will transmit first to the 32 byte RX L1 FIFO. RX L1 pushes data into RX L2, starting when the first byte is ready until the final EOF marker. The RX L2 buffer does not apply any backpressure to the RX L1 FIFO. Therefore, it is the PRU firmware's responsibility to fetch the data in RX L2 before it is overwritten by the cyclic buffer. The RX L1 will remain near empty, with only one byte (nibble) stored.

Each RX L2 bank holds up to 32 bytes of data, and every four nibbles (or 16 bits) of data has a corresponding 8-bit status. The data and status information are stored in packed arrays. In each bank, R2 to R9 contains the data packed array and R10 to R13 contains the status packed array. Figure 4-48 shows the relationship of the data registers and status registers. The RX L2 status registers record status information about the received data, such as ERROR\_CRC, RX\_ERROR, STATUS\_RDY, etc. The RX L2 status register details are described in Table 4-33. Note RX\_RESET clears all Data and Status elements and resets R18.

Figure 4-48. Data and Status Register Dependency

<!-- image -->

| Data Register   | R2   | R3   | R4   | R5   | R6   | R7   | R8   | R9   |
|-----------------|------|------|------|------|------|------|------|------|
| Status Register | R10  |      | R11  |      | R12  |      | R13  |      |

Table 4-33. RX L2 Status

|   Bit | Field Name   | Description                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|--------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     7 | ERROR_CRC    | ERROR_CRC indicates that the frame has a CRC mismatch. This bit is valid when the RX_EOF bit is set. It should be noted that ERROR_CRC bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. ERROR_CRC will only be set for one entry, self clear on next entry.                                                                                           |
|     6 | ERROR_NIBBLE | ERROR_NIBBLE indicates that the frame ended in odd nibble. It should be considered valid only when the RX_EOF bit and pr1_mii0/1_rxdv are set. Nibble counter is enabled post SFD event. It should be noted that ERROR_NIBBLE bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. ERROR_NIBBLE will only be set for one entry, self clear on next entry. |

Table 4-33. RX L2 Status (continued)

|   Bit | Field Name   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|--------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     5 | RX_SOF       | RX_SOF transitions from low to high when the frame data starts to arrive and pr1_mii0/1_rxdv is asserted. Note there will be a small sync delay of 0ns - 5ns. The recommended time to clear this bit is at the end of frame (EOF). It should be noted that RX_SOF bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. RX_SOF will only be set for one entry, self clear on next entry.                                                                             |
|     4 | RX_SFD       | RX_SFD transitions from low to high when the SFD sequence (0x5D) post RX_SOF is observed on the receive MII data. The recommended time to clear this bit is at the end of frame (EOF). It should be noted that RX_SFD bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. RX_SOF will only be set for one entry, self clear on next entry.                                                                                                                         |
|     3 | RX_EOF       | RX_EOF indicates that the frame has ended and pr1_mii0/1_rxdv is de-asserted. It also validates the CRC match bit. Note there will be a small sync delay of 0ns - 5ns. It should be noted that RX_EOF bit is ready in early status, which means it is calculated before data is available in RXL1 FIFO. RX_EOF will only be set for one entry, self clear on next entry. RX_EOF is set relative to the write pointer advancing, i.e. the RX_EOF bit is set after the write pointer advances, rather than before. |
|     2 | RX_ERROR     | RX_ERROR indicates one or more of the following errors occurred: • RX_MAX/MIN_FRM_CNT_ERR • RX_MAX/MIN_PRE_CNT_ERR • RX_ERR RX_ERROR is cleared by RX_ERROR_CLR.                                                                                                                                                                                                                                                                                                                                                 |
|     1 | STATUS_RDY   | STATUS_RDY is set when RX_EOF or write pointer advanced by 2. This is a simple method for software to determine if RX_EOF event has occurred or new data is available. If RX_EOF is not set, all status bits are static.                                                                                                                                                                                                                                                                                         |
|     0 | RX_ERR       | RX_ERR is set to 1 when pr1_mii0/1_rxer is asserted while pr1_mii0/1_rxdv bit is set. It will get set for first pr1_mii0/1_rxer event and self clear on SOF for the next FRAME.                                                                                                                                                                                                                                                                                                                                  |

Bank 0 and Bank 1 are used as ping/pong buffers. RX L2 supports the reading of a write pointer in R18 that allows software to determine which bank has active write transactions, as well as the specific write address within packed data arrays.

The PRU interacts with the RX L2 buffer using the high performance XFR read instructions and broadside interface. Table 4-34 shows the device XFR ID numbers for each bank.

Table 4-34. RX L2 XFR ID

| Device ID   | Function                      | Description                                                                                                                                                                                                              |
|-------------|-------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 20          | Selects RX L2 Bank0           | R2:R9 Data packed array R10:R13 Status packed array                                                                                                                                                                      |
| 21          | Selects RX L2 Bank1           | R2:R9 Data packed array R10:R13 Status packed array                                                                                                                                                                      |
| 20/21       | Byte pointer of current write | R18[5:0] Pointer indicating location of current write in data packed array. 0 = Bank0.R2.Byte0 (default and reset value) 1 = Bank0.R2.Byte1 2 = Bank0.R2.Byte2 3 = Bank0.R2.Byte3 4 = Bank0.R3.Byte0 … 63=Bank1.R9.Byte3 |

<!-- image -->

<!-- image -->

www.ti.com

XFR read transactions are passive and have no effect on any status or other states in RX L2. The firmware can also read R18 to determine which bank has active write transactions, and the location of the transaction. With this information, the firmware can read multiple times the stable preserved data. When RX L1 data is written to RX L2, the next status byte gets cleared at the same time the current status byte gets updated. The rest of the status buffer is persistent. When the software accesses any register of the ping/pong buffer, the software must issue an XFER read transaction to fetch the latest or current state of the ping/pong buffer. The PRU registers do not reflect the current snapshot of L2 unless an XFER is issued by the software.

## 4.4.6.2.4 TX MII Interface

Data to be transmitted is loaded into the TX L1 FIFO. The transmit FIFO (TX L1) stores up to 64 bytes of transmit data. From the FIFO, the data is sent to the MII TX port of the PHY by the MII\_RT transmit logic.

The transmit FIFO also has the capability to be reset through software (TX\_RESET). When reset, all contents of transmit FIFO are purged and this may result in a frame not getting transmitted as expected, if the transmission is already ongoing. Any new data written in the transmit FIFO results in a new frame being composed and transmitted. An overflow event will require a TX\_RESET to recover from this condition.

There are four dependencies that must be true for TX\_EN to assert:

1. TX L1 FIFO not empty
2. Interpacket gap (IPG) timer expiration
3. RX\_DV to TX\_EN timer expiration
4. TX\_EN compare timer expiration

The transmit interface also provides an underflow error signal if there was no data loaded when TX\_EN triggered. The transmit underflow signal is mapped to the INTC in PRU-ICSS. The PRU firmware must track the FIFO fill level, such as with a timer or the PRU cycle count register (PRU\_ICSS\_CTRL\_CYCLE).The current FIFO fill level cannot be accessed by PRU firmware. The firmware can issue an R31 command through R31 bit 29 (TX\_EOF) to indicate that the last byte has been written into the TX FIFO.

## 4.4.6.2.4.1 TX Data Path Options to TX L1 FIFO

There are two data path options for delivering data to the TX L1 FIFO and transmit port, described further in the subsequent sections:

1. PRU → TX L1 FIFO → TX MII port
2. RX L1 FIFO → TX L1 FIFO → TX MII port

## 4.4.6.2.4.1.1 PRU → TX L1 FIFO → TX MII Port

The PRU can be used to feed data into the TX L1 FIFO using the R30 and R31 registers, shown in Figure 4-49. The PRU writes up to two bytes of data into R30 and then pushes the data into the TX L1 FIFO by writing to the R31 command interface.

## Figure 4-49. PRU to TX L1 Interface

<!-- image -->

Figure 4-50 shows the R30 transmit interface. The lower 16 bits of the R30 (or FIFO transmit word) contain transmit data nibbles. The upper 16 bits contain mask information. The operation to be performed on the transmit interface is controlled by PRU writes to the R31 command interface. Table 4-35 describes the TXMASK and TXDATA bit fields of the R30 transmit interface.

Figure 4-50. PRU to TX MII Interface

<!-- image -->

Table 4-35. PRU R30: Transmit Interface

| Bits   | Field Name   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|--------|--------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31:16  | TXMASK       | The TXMASK is used to determine which of RX L1 FIFO received data and R30 data is sent to transmit FIFO. It must to be applied to TXDATA and RXDATA before it is transmitted. To disable TXMASK and transmit only TXDATA through R30, set to 0xFFFF. Note software should not pop the RXDATA from the RX L1 FIFO before pushing the TXDATA. This will cause new data to propagate before the push. Otherwise, software can pop and push on the same command for bytes only or delay the pop after the push for words or bytes. |
| 15:0   | TXDATA       | Data provided by the PRU to be sent to transmit path after applying the mask. When 16 bits are to be transmitted, all bits of this and TXMASK field are used. When 8 bits are to be transmitted, the bits [7:0] of this and TXMASK field are used.                                                                                                                                                                                                                                                                             |

Using the TX mask, the PRU can send a mix of R30 and RX L1 FIFO data to the TX L1 FIFO. Note the TX mask is only available when the PRU is fed one word or byte at a time by the RX L1 FIFO. It is not applicable when the RX L2 buffer is enabled. To disable TX mask, set TXMASK to 0xFFFF.

As shown in Figure 4-51, the PRU drives the MII transmit interface through its R30 register. The contents of R30 and RX data from the receive interface are taken and fed into a 64 byte transmit FIFO.

Before transmission, a mask is applied to the data portion of the R30 register. By using the mask, the PRU firmware can control whether received data from the RX L1 FIFO is sent to transmit, R30 data is sent to transmit, or a mix of the two is sent. The Boolean equation that is used by MII\_RT to compose TX data is:

TXDATA[7/15:0] = (R30[7/15:0] &amp; MASK[7/15:0]) | (RXDATA[7/15:0] &amp; ~MASK [7/15:0])

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

Figure 4-51. TX Mask Mode

<!-- image -->

## 4.4.6.2.4.1.2 RX L1 FIFO → TX L1 FIFO → TX MII Port

When TXCFG0/1[TX\_AUTO\_SEQUENCE] is set, the data frame is passed from the RX to TX FIFOs without the any interaction of the PRU. This mode of operations is shown in Figure 4-52. The RX L1 will push into TX L1 as long as it is enabled and not full.

There is no PRU dependency in this mode and no option for the PRU to perform any operation to the TX L1 FIFO. RX\_RESET clears all data and status elements.

## Figure 4-52. RX L1 to TX L1 Interface

<!-- image -->

## 4.4.6.2.5 PRU R31 Command Interface

The PRU uses writes to R31[31:16] to control the reception and transmission of packets in register mode. Table 4-36 lists the available commands. Each bit in the table is a single clock pulse output from the PRU. When more than one action is to be performed in the same instant, the PRU firmware must set those command bits in one instruction.

Table 4-36. PRU R31: Command Interface (Write Mode)

|   Bit | Command         | Description                                                                                                                                                                                                                                                                                                  |
|-------|-----------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    31 | TX_CRC_ERR      | TX_CRC_ERR command when set will add 0xa5 byte to the TX L1 FIFO if the current FCS is valid. This bit can only be set with the TX_EOF command and optionally with the TX_ERROR_NIBBLE command. It cannot get set with any other commands. Note for proper operations auto-forward preamble must be enabled. |
|    30 | TX_RESET        | TX_RESET command is used to reset the transmit FIFO and clear all its contents. This is required to recover from a TX FIFO overrun.                                                                                                                                                                          |
|    29 | TX_EOF          | TX_EOF command is used to indicate that the data loaded is considered last for the current frame                                                                                                                                                                                                             |
|    28 | TX_ERROR_NIBBLE | TX_ERROR_NIBBLE command is used to insert an error nibble. This makes the frame invalid. Also, it will add 0x0 after the 32-bit CRC.                                                                                                                                                                         |
|    27 | TX_CRC_HIGH     | TX_CRC_HIGH command ends the CRC calculations and pushes CRC[31:16] to append to the outgoing frame in the TX L1 FIFO. Note TXCRC0/1 will become valid after 6 clock cycles.                                                                                                                                 |
|    26 | TX_CRC_LOW      | TX_CRC_LOW command pushes CRC[15:0] to append to the outgoing frame in the TX L1 FIFO.                                                                                                                                                                                                                       |

<!-- image -->

Table 4-36. PRU R31: Command Interface (Write Mode) (continued)

|   Bit | Command       | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|---------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    25 | TX_PUSH16     | TX_PUSH16 command applies mask to two bytes from receive path and transmit. Note TX_PUSH16 needs to occur before TX_POP16 if data is not fully masked. TX CRC requires the data to be valid for 2 clock cycles.                                                                                                                                                                                                                                                                                                           |
|    24 | TX_PUSH8      | TX_PUSH8 command applies mask to one byte from receive path and transmit. Note TX_PUSH8 needs to occur before TX_POP8 if data is not fully masked.                                                                                                                                                                                                                                                                                                                                                                        |
|    23 | RX_ ERROR_CLR | RX_ERROR_CLR command is used to clear RX_ ERROR indicator bit by writing 1.                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|    22 | RX_EOF_CLR    | RX_EOF_CLR command is used to clear RX_EOF status indicator bit by writing 1.                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|    21 | RX_SFD_CLR    | RX_SFD_CLR command is used to clear RX_SFD indicator bit by writing 1.                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|    20 | RX_SOF_CLR    | RX_SOF_CLR command is used to clear RX_SOF indicator bit by writing 1.                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|    19 | Reserved      | Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|    18 | RX_RESET      | RX_RESET is used to reset the receive FIFO and clear all contents. This is required to recover from a RX FIFO overrun, if software does not want to undrain. The typical use case is assertion after RX_EOF. If asserted during an active frame, the following actions will occur: 1. Terminate the current frame 2. Block/terminate all new data 3. Flush/clear all FIFO elements 4. Cause RX state machine into an idle state 5. Cause EOF event 6. Cause minimum frame error, if you abort before minimum size reached |
|    17 | RX_POP16      | RX_POP16 command advances the receive traffic by two bytes. This is only required when you are using R31 to read the data. After R31[15:0] is ready to read by PRU, it will set 1 to WORD_RDY, and the next new data will be allowed to advance. RX_POP16 to WORD_RDY update has 2 clock cycles latency. Firmware needs to insure it does not read WORD_RDY/BYTE_RDY until 2 clock cycles after RX_POP16.                                                                                                                 |
|    16 | RX_POP8       | RX_POP8 command advances the receive traffic by one bytes. This is only required when you are using R31 to read the data. After R31[7:0] is ready to read by PRU, it will set 1 to BYTE_RDY, and the next new data will be allowed to advance. RX_POP8 to BYTE_RDY update has 2 clock cycles latency. Firmware needs to insure it does not read WORD_RDY/BYTE_RDY until 2 clock cycles after RX_POP8.                                                                                                                     |

## 4.4.6.2.6 Other Configuration Options

## 4.4.6.2.6.1 Nibble and Byte Order

The PRU core is little endian. To support this difference, the MII\_RT supports optional nibble swapping on both the RX and TX side.

On the receive side, the order of the two data bytes in RX R31 and the RX L2 buffer are configurable through the RX\_BYTE\_SWAP bit in the RXCFG0/1 registers, as shown in Table 4-37. Note the Nibble0 is the first nibble received.

Table 4-37. RX Nibble and Byte Order

| Configuration                        | Order                                                                                         |
|--------------------------------------|-----------------------------------------------------------------------------------------------|
| RXCFG0/1[RX_BYTE_SWAP] = 0 (default) | R31[15:8] / RXL2[15:8] = Byte1{Nibble3,Nibble2} R31[7:0] / RXL2[7:0] = Byte0{Nibble1,Nibble0} |

<!-- image -->

www.ti.com

## Table 4-37. RX Nibble and Byte Order (continued)

| Configuration              | Order                                                                                         |
|----------------------------|-----------------------------------------------------------------------------------------------|
| RXCFG0/1[RX_BYTE_SWAP] = 1 | R31[15:8] / RXL2[15:8] = Byte0{Nibble1,Nibble0} R31[7:0] / RXL2[7:0] = Byte1{Nibble3,Nibble2} |

On the transmit side, the order of the two data bytes and mask bytes in TX R30 are configurable through the TX\_BYTE\_SWAP bit in the TXCFG0/1 registers, as shown in Table 4-38. Note the Nibble0 is the first nibble received.

Table 4-38. TX Nibble and Byte Order

| Configuration                        | Order                                                                                                                     |
|--------------------------------------|---------------------------------------------------------------------------------------------------------------------------|
| TXCFG0/1[TX_BYTE_SWAP] = 0 (default) | R30[15:8] = Byte1{Nibble3,Nibble2} R30[7:0] = Byte0{Nibble1,Nibble0} R30[31:24] = TX_MASK[15:8] R30[23:16] = TX_MASK[7:0] |
| TXCFG0/1[TX_BYTE_SWAP] = 1           | R30[15:8] = Byte0{Nibble1,Nibble0} R30[7:0] = Byte1{Nibble3,Nibble2} R30[31:24] = TX_MASK[7:0] R30[23:16] = TX_MASK[15:8] |

## 4.4.6.2.6.2 Preamble Source

The MII\_RT module has the option to preserve and forward a received preamble in the TX data stream, use a preamble provided by the PRU, or auto-generate a preamble. These configurations are highlighted in Table 4-39.

Table 4-39. Preamble Configuration Options

| RX_CUT_PREAMBLE   | Determines whether RX preamble is passed onto RX L1/L2 FIFO                                                                                                                                                                                             |
|-------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| RX_AUTO_FWD_PRE   | Determines whether RX preamble is automatically passed to TX L1 FIFO                                                                                                                                                                                    |
| TX_AUTO_PREAMBLE  | TX interface logic auto-generates and appends preamble to TX data stream with the first push of data into the TX L1 FIFO. Enabling this option fills the TX FIFO with the preamble length, thus software must consider this to not overrun the TX FIFO. |

## 4.4.6.2.6.3 PRU and MII Port Multiplexer

The MII\_RT module supports configurable PRU core to MII TXn / RXn port mapping. By default, PRU0 is mapped to TX1 and RX0 and PRU1 is mapped to TX0 and RX1. However, the system supports the flexibility to map any PRU core to any TX and RX port. Note the mapping options are destination fixed. For example, the input to PRU0 can be either RX\_MII0 or RX\_MII1. Similarly, the input to TX\_MII0 can be either PRU0 or PRU1.

## 4.4.6.2.6.3.1 Receive Multiplexer

A multiplexer is provided to allow selecting either of the two MII interfaces for the receive data that is sent to PRU. Figure 4-53 shows the symbol of receive multiplexer of PRU.

Figure 4-53. MII Receive Multiplexer

<!-- image -->

There are two receive multiplexer instances to enable selection of RX MII path for each PRU. The select lines of the RX multiplexers are driven from the PRU-ICSS programmable registers (RXCFG0/1).

## 4.4.6.2.6.3.2 Transmit Multiplexer

On the MII transmit ports, there is a multiplexer for each MII transmit port that enables selection of either the transmit data from the PRUs or from the RX MII interface of the other MII interface. Figure 4-54 shows the symbol of transmit multiplexer of PRU.

Figure 4-54. MII Transmit Multiplexer

<!-- image -->

The transmit multiplexers enable the PRU-ICSS to either operate in a bypass mode where the PRU is not involved in processing MII traffic or use of one of the PRU cores for transmitting data into the MII interface. There are two instances of the TX MII multiplexer and the select lines for each TX multiplexer are provided by the PRU-ICSS. The select lines are common between register and FIFO interface. It is expected that the select lines will not change during the course of a frame so that can avoid data exchange error.

## 4.4.6.2.6.4 RX L2 Scratch Pad

When the RX L2 is disabled (RXCFG0/1[RX\_L2\_ENABLE] = 0), the RX L2 banks can be used as a generic scratch pad. In scrach pad mode, RX L2 Bank0 and RX L2 Bank1 operate like simple write/read memory mapped registers (MMRs). All XFR size and start operations are supported. RX\_RESET has no effect in this mode. This mode is shown in Figure 4-55.

Figure 4-55. Scratch Pad Mode

<!-- image -->

<!-- image -->