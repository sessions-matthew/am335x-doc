## 16.2.8 Protocol Description(s)

This section describes the implementation of the USB protocol(s) by the USB modules.

## 16.2.8.1 USB Controller Peripheral Mode Operation

The USB controller assumes the role of a peripheral when the USBx\_ID pin is floating or USB Mode Register[iddig=bit8] is set to 1 (provided that iddig\_mux, which is bit7 of USBnMODE is also set to 1) by the user application prior to the controller goes into session. When the USB controller go into session it will assume the role of a device.

Soft connect -After a POR or USB Module soft reset, the SOFTCONN bit of POWER register (bit 6) is cleared to 0. The controller will therefore appear disconnected until the software has set the SOFTCONN bit to 1. The application software can then choose when to set the PHY into its normal mode. Systems with a lengthy initialization procedure may use this to ensure that initialization is complete and the system is ready to perform enumeration before connecting to the USB. Once the SOFTCONN bit has been set, the software can also simulate a disconnect by clearing this bit to 0.

Entry into suspend mode -When operating as a peripheral device, the controller monitors activity on the bus and when no activity has occurred for 3 ms, it goes into Suspend mode. If the Suspend interrupt has been enabled, an interrupt will be generated at this time.

At this point, the controller can then be left active (and hence able to detect when Resume signaling occurs on the USB), or the application may arrange to disable the controller by stopping its clock. However, the controller will not then be able to detect Resume signaling on the USB if clocks are not running. If such is the case, external hardware will be needed to detect Resume signaling (by monitoring the DM and DP signals), so that the clock to the controller can be restarted.

Resume Signaling -When resume signaling occurs on the bus, first the clock to the controller must be restarted if necessary. Then the controller will automatically exit Suspend mode. If the Resume interrupt is enabled, an interrupt will be generated.

Initiating a remote wakeup -If the software wants to initiate a remote wakeup while the controller is in Suspend mode, it should set the POWER[RESUME] bit to 1. The software should leave then this bit set for approximately 10 ms (minimum of 2 ms, a maximum of 15 ms) before resetting it to 0.

NOTE: No resume interrupt will be generated when the software initiates a remote wakeup.

Reset Signaling -When reset signaling or bus condition occurs on the bus, the controller performs the following actions:

- Clears FADDR register to 0
- Clears INDEX register to 0
- Flushes all endpoint FIFOs
- Clears all controller control/status registers
- Generates a reset interrupt
- Enables all interrupts at the core level.

If the HSENA bit within the POWER register (bit 5) is set, the controller also tries to negotiate for highspeed operation. Whether high-speed operation is selected is indicated by HSMODE bit of POWER register (bit 4). When the application software receives a reset interrupt, it should close any open pipes and wait for bus enumeration to begin.

## 16.2.8.1.1 Control Transactions:Peripheral Mode

Endpoint 0 is the main control endpoint of the core. The software is required to handle all the standard device requests that may be sent or received via endpoint 0. These are described in Universal Serial Bus Specification, Revision 2.0, Chapter 9. The protocol for these device requests involves different numbers and types of transactions per request/command. To accommodate this, the software needs to take a state machine approach to command decoding and handling.

<!-- image -->

<!-- image -->

www.ti.com

The Standard Device Requests received by a USB peripheral device can be divided into three categories: Zero Data Requests (in which all the information is included in the command; no additional data is required), Write Requests (in which the command will be followed by additional data), and Read Requests (in which the device is required to send data back to the host).

This section looks at the sequence of actions that the software must perform to process these different types of device request.

NOTE: The Setup packet associated with any standard device request should include an 8-byte command. Any setup packet containing a command field other than 8 bytes will be automatically rejected by the controller.

## 16.2.8.1.1.1 Zero Data Requests: Peripheral Mode

Zero data requests have all their information included in the 8-byte command and require no additional data to be transferred. Examples of Zero Data standard device requests are:

- SET\_FEATURE
- CLEAR\_FEATURE
- SET\_ADDRESS
- SET\_CONFIGURATION
- SET\_INTERFACE

The sequence of events will begin, as with all requests, when the software receives an endpoint 0 interrupt. The RXPKTRDY bit of PERI\_CSR0 (bit 0) will also have been set. The 8-byte command should then be read from the endpoint 0 FIFO, decoded and the appropriate action taken.

For example, if the command is SET\_ADDRESS, the 7-bit address value contained in the command should be written to the FADDR register at the completion of the command. The PERI\_CSR0 register should be written by setting the SERV\_RXPKTRDY bit (bit 6) (indicating that the command has been read from the FIFO) and also setting the DATAEND bit (bit 3) (indicating that no further data is expected for this request). The interval between setting SERV\_RXPKTRDY bit and DATAEND bit should be very small to avoid getting a SETUPEND error condition. It is highly recommended to set both bits at the same time.

When the host moves to the status stage of the request, a second endpoint 0 interrupt will be generated to indicate that the request has completed. No further action is required from the software. The second interrupt is just a confirmation that the request completed successfully. For SET\_ADDRESS command, the address should be written to FADDR register at the completion of the command, i.e. when the status stage interrupt is received.

If the command is an unrecognized command, or for some other reason cannot be executed, then when it has been decoded, the PERI\_CSR0 register should be written to set the SERV\_RXPKTRDY bit (bit 6) and to set the SENDSTALL bit (bit 5). When the host moves to the status stage of the request, the controller will send a STALL packet telling the host that the request was not executed. A second endpoint 0 interrupt will be generated and the SENTSTALL bit (bit 2 of PERI\_CSR0) will be set.

If the host sends more data after the DATAEND bit has been set, then the controller will send a STALL packet automatically. An endpoint 0 interrupt will be generated and the SENTSTALL bit (bit 2 of PERI\_CSR0) will be set.

NOTE: DMA is not supported for endpoint 0; endpoint 0 is always serviced via CPU.

## 16.2.8.1.1.2 Write Requests: Peripheral Mode

Write requests involve an additional packet (or packets) of data being sent from the host after the 8-byte command. An example of a Write standard device request is: SET\_DESCRIPTOR.

The sequence of events will begin, as with all requests, when the software receives an endpoint 0 interrupt. The RXPKTRDY bit of PERI\_CSR0 will also have been set. The 8-byte command should then be read from the Endpoint 0 FIFO and decoded.

As with a zero data request, the PERI\_CSR0 register should then be written to set the SERV\_RXPKTRDY bit (bit 6) (indicating that the command has been read from the FIFO) but in this case the DATAEND bit (bit 3) should not be set (indicating that more data is expected).

2571

Universal Serial Bus (USB)

<!-- image -->

When a second endpoint 0 interrupt is received, the PERI\_CSR0 register should be read to check the endpoint status. The RXPKTRDY bit of PERI\_CSR0 should be set to indicate that a data packet has been received. The COUNT0 register should then be read to determine the size of this data packet. The data packet can then be read from the endpoint 0 FIFO.

If the length of the data associated with the request (indicated by the wLength field in the command) is greater than the maximum packet size for endpoint 0, further data packets will be sent. In this case, PERI\_CSR0 should be written to set the SERV\_RXPKTRDY bit, but the DATAEND bit should not be set.

When all the expected data packets have been received, the PERI\_CSR0 register should be written to set the SERV\_RXPKTRDY bit and to set the DATAEND bit (indicating that no more data is expected).

When the host moves to the status stage of the request, another endpoint 0 interrupt will be generated to indicate that the request has completed. No further action is required from the software, the interrupt is just a confirmation that the request completed successfully.

If the command is an unrecognized command, or for some other reason cannot be executed, then when it has been decoded, the PERI\_CSR0 register should be written to set the SERV\_RXPKTRDY bit (bit 6) and to set the SENDSTALL bit (bit 5). When the host sends more data, the controller will send a STALL to tell the host that the request was not executed. An endpoint 0 interrupt will be generated and the SENTSTALL bit of PERI\_CSR0 (bit 2) will be set.

If the host sends more data after the DATAEND has been set, then the controller will send a STALL. An endpoint 0 interrupt will be generated and the SENTSTALL bit of PERI\_CSR0 (bit 2) will be set.

## 16.2.8.1.1.3 Read Requests: Peripheral Mode

Read requests have a packet (or packets) of data sent from the function to the host after the 8-byte command. Examples of Read Standard Device Requests are:

- GET\_CONFIGURATION
- GET\_INTERFACE
- GET\_DESCRIPTOR
- GET\_STATUS
- SYNCH\_FRAME

The sequence of events will begin, as with all requests, when the software receives an endpoint 0 interrupt. The RXPKTRDY bit of PERI\_CSR0 (bit 0) will also have been set. The 8-byte command should then be read from the endpoint 0 FIFO and decoded. The PERI\_CSR0 register should then be written to set the SERV\_RXPKTRDY bit (bit 6) (indicating that the command has read from the FIFO).

The data to be sent to the host should then be written to the endpoint 0 FIFO. If the data to be sent is greater than the maximum packet size for endpoint 0, only the maximum packet size should be written to the FIFO. The PERI\_CSR0 register should then be written to set the TXPKTRDY bit (bit 1) (indicating that there is a packet in the FIFO to be sent). When the packet has been sent to the host, another endpoint 0 interrupt will be generated and the next data packet can be written to the FIFO.

When the last data packet has been written to the FIFO, the PERI\_CSR0 register should be written to set the TXPKTRDY bit and to set the DATAEND bit (bit 3) (indicating that there is no more data after this packet).

When the host moves to the status stage of the request, another endpoint 0 interrupt will be generated to indicate that the request has completed. No further action is required from the software: the interrupt is just a confirmation that the request completed successfully.

If the command is an unrecognized command, or for some other reason cannot be executed, then when it has been decoded, the PERI\_CSR0 register should be written to set the SERV\_RXPKTRDY bit (bit 6) and to set the SENDSTALL bit (bit 5). When the host requests data, the controller will send a STALL to tell the host that the request was not executed. An endpoint 0 interrupt will be generated and the SENTSTALL bit of PERI\_CSR0 (bit 2) will be set.

If the host requests more data after DATAEND (bit 3) has been set, then the controller will send a STALL. An endpoint 0 interrupt will be generated and the SENTSTALL bit of PERI\_CSR0 (bit 2) will be set.

<!-- image -->

www.ti.com

## 16.2.8.1.1.4 Endpoint 0 States: Peripheral Mode

When the USB controller is operating as a peripheral device, the endpoint 0 control needs three modes IDLE, TX and RX - corresponding to the different phases of the control transfer and the states endpoint 0 enters for the different phases of the transfer (described in later sections).

The default mode on power-up or reset should be IDLE. RXPKTRDY bit of PERI\_CSR0 (bit 0) becoming set when endpoint 0 is in IDLE state indicates a new device request. Once the device request is unloaded from the FIFO, the controller decodes the descriptor to find whether there is a data phase and, if so, the direction of the data phase of the control transfer (in order to set the FIFO direction). See Figure 16-3.

Depending on the direction of the data phase, endpoint 0 goes into either TX state or RX state. If there is no Data phase, endpoint 0 remains in IDLE state to accept the next device request

The actions that the CPU needs to take at the different phases of the possible transfers (for example, loading the FIFO, setting TXPKTRDY) are indicated in Figure 16-4.

Figure 16-3. CPU Actions at Transfer Phases

<!-- image -->

Universal Serial Bus (USB)

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 16.2.8.1.1.4.1 Endpoint 0 Interrupt Generating Events: Peripheral Mode

An Endpoint 0 interrupt is generated when any of the below events occur and Interrupt Service handler should determine the right event and launch the proper handler

The following events will cause Endpoint 0 Interrupt to be generated while the controller is operating assuming the role of a device/peripheral:

- The controller sets the RXPKTRDY bit of PERI\_CSR0 (bit 0) after a valid token has been received and data has been written to the FIFO (legal status condition).
- The controller clears the TXPKTRDY bit of PERI\_CSR0 (bit 1) after the packet of data in the FIFO has been successfully transmitted to the host (legal status condition).
- The controller sets the SENTSTALL bit of PERI\_CSR0 (bit 2) after a control transaction is ended due to a protocol violation (illegal status condition).
- The controller sets the SETUPEND bit of PERI\_CSR0 (bit 4) because a control transfer has ended before DATAEND (bit 3 of PERI\_CSR0) is set (illegal status condition).

In order to determine the cause of the interrupt, the detail below recommends the order of cause determination and execution.

Whenever the endpoint 0 service routine is entered, the software must first check to see if the current control transfer has been ended due to either a STALL condition or a premature end of control transfer. If the control transfer ends due to a STALL condition, the SENTSTALL bit would be set. If the control transfer ends due to a premature end of control transfer, the SETUPEND bit would be set. In either case, the software should abort processing the current control transfer and set the state to IDLE.

Once the software has determined that the interrupt was not generated by an illegal bus state, the next action taken depends on the endpoint state.

If endpoint 0 is in IDLE state, the only valid reason an interrupt can be generated is as a result of the controller receiving data from the bus. The service routine must check for this by testing the RXPKTRDY bit of PERI\_CSR0 (bit 0). If this bit is set, then the controller has received a SETUP packet. This must be unloaded from the FIFO and decoded to determine the action the controller must take. Depending on the command contained within the SETUP packet, endpoint 0 will enter one of three states:

- If the command is a single packet transaction (SET\_ADDRESS, SET\_INTERFACE etc.) without any data phase, the endpoint will remain in IDLE state.
- If the command has an OUT data phase (SET\_DESCRIPTOR etc.), the endpoint will enter RX state.
- If the command has an IN data phase (GET\_DESCRIPTOR etc.), the endpoint will enter TX state.
- If the endpoint 0 is in TX state, the interrupt indicates that the core has received an IN token and data from the FIFO has been sent. The software must respond to this either by placing more data in the FIFO if the host is still expecting more data or by setting the DATAEND bit to indicate that the data phase is complete. Once the data phase of the transaction has been completed, endpoint 0 should be returned to IDLE state to await the next control transaction (status stage).
- If the endpoint is in RX state, the interrupt indicates that a data packet has been received. The software must respond by unloading the received data from the FIFO. The software must then determine whether it has received all of the expected data. If it has, the software should set the DATAEND bit and return endpoint 0 to IDLE state. If more data is expected, the firmware should set the SERV\_RXPKTRDY bit of PERI\_CSR0 (bit 6) to indicate that it has read the data in the FIFO and leave the endpoint in RX state.

2575

Universal Serial Bus (USB)

## 16.2.8.1.1.4.2 Idle Mode: Control Transfer of Peripheral Mode

IDLE mode is the mode the Endpoint 0 control needs to select at power-on or reset and is the mode to which the Endpoint 0 control should return when the RX and TX modes are terminated.

It is also the mode in which the SETUP phase of control transfer is handled (as outlined in Figure 16-5).

Figure 16-5. Flow Chart of Setup Stage of a Control Transfer in Peripheral Mode

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 16.2.8.1.1.4.3 TX Mode: Control Transfer of Peripheral Mode

When the endpoint is in TX state, all arriving IN tokens need to be treated as part of a data phase until the required amount of data has been sent to the host. If either a SETUP or an OUT token is received while the endpoint is in the TX state, this will cause a SETUPEND condition to occur as the core expects only IN tokens.

Three events can cause TX mode to be terminated before the expected amount of data has been sent as shown in Figure 16-6:

1. The host sends an invalid token causing a SETUPEND condition (bit 4 of PERI\_CSR0 is set).
2. The firmware sends a packet containing less than the maximum packet size for Endpoint 0.
3. The firmware sends an empty data packet.

Until the transaction is terminated, the firmware simply needs to load the FIFO when it receives an interrupt which indicates that a packet has been sent from the FIFO. An interrupt is generated when TXPKTRDY is cleared.

When the firmware forces the termination of a transfer (by sending a short or empty data packet), it should set the DATAEND bit of PERI\_CSR0 (bit 3) to indicate to the core that the data phase is complete and that the core should next receive an acknowledge packet.

Figure 16-6. Flow Chart of Transmit Data Stage of a Control Transfer in Peripheral Mode

<!-- image -->

Universal Serial Bus (USB)

## 16.2.8.1.1.4.4 Rx Mode: Control Transfer of Peripheral Mode

In RX mode, all arriving data should be treated as part of a data phase until the expected amount of data has been received. If either a SETUP or an IN token is received while the endpoint is in RX state, a SETUPEND condition will occur as the controller expects only OUT tokens.

Three events can cause RX mode to be terminated before the expected amount of data has been received as shown in Figure 16-7:

1. The host sends an invalid token causing a SETUPEND condition (setting bit 4 of PERI\_CSR0).
2. The host sends a packet which contains less than the maximum packet size for endpoint 0.
3. The host sends an empty data packet.

Until the transaction is terminated, the software unloads the FIFO when it receives an interrupt that indicates new data has arrived (setting RXPKTRDY bit of PERI\_CSR0) and to clear RXPKTRDY by setting the SERV\_RXPKTRDY bit of PERI\_CSR0 (bit 6).

When the software detects the termination of a transfer (by receiving either the expected amount of data or an empty data packet), it should set the DATAEND bit (bit 3 of PERI\_CSR0) to indicate to the controller that the data phase is complete and that the core should receive an acknowledge packet next.

Figure 16-7. Flow Chart of Receive Data Stage of a Control Transfer in Peripheral Mode

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 16.2.8.1.1.4.5 Error Handling: Control Transfer of Peripheral Mode

A control transfer may be aborted due to a protocol error on the USB, the host prematurely ending the transfer, or if the software wishes to abort the transfer (for example, because it cannot process the command).

The controller automatically detects protocol errors and sends a STALL packet to the host under the following conditions:

- The host sends more data during the OUT Data phase of a write request than was specified in the command. This condition is detected when the host sends an OUT token after the DATAEND bit (bit 3 of PERI\_CSR0) has been set.
- The host requests more data during the IN Data phase of a read request than was specified in the command. This condition is detected when the host sends an IN token after the DATAEND bit in the PERI\_CSR0 register has been set.
- The host sends more than Max Packet Size data bytes in an OUT data packet.
- The host sends a non-zero length DATA1 packet during the STATUS phase of a read request.

When the controller has sent the STALL packet, it sets the SENTSTALL bit (bit 2 of PERI\_CSR0) and generates an interrupt. When the software receives an endpoint 0 interrupt with the SENTSTALL bit set, it should abort the current transfer, clear the SENTSTALL bit, and return to the IDLE state.

If the host prematurely ends a transfer by entering the STATUS phase before all the data for the request has been transferred, or by sending a new SETUP packet before completing the current transfer, then the SETUPEND bit (bit 4 of PERI\_CSR0) will be set and an endpoint 0 interrupt generated. When the software receives an endpoint 0 interrupt with the SETUPEND bit set, it should abort the current transfer, set the SERV\_SETUPEND bit (bit 7 of PERI\_CSR0), and return to the IDLE state. If the RXPKTRDY bit (bit 0 of PERI\_CSR0) is set this indicates that the host has sent another SETUP packet and the software should then process this command.

If the software wants to abort the current transfer, because it cannot process the command or has some other internal error, then it should set the SENDSTALL bit (bit 5 of PERI\_CSR0). The controller will then send a STALL packet to the host, set the SENTSTALL bit (bit 2 of PERI\_CSR0) and generate an endpoint 0 interrupt.

## 16.2.8.1.1.5 Additional Conditions: Control Transfer of Peripheral Mode

When working as a peripheral device, the controller automatically responds to certain conditions on the USB bus or actions by the host. The details are:

- Stall Issued to Control Transfers
1. The host sends more data during an OUT Data phase of a Control transfer than was specified in the device request during the SETUP phase. This condition is detected by the controller when the host sends an OUT token (instead of an IN token) after the software has unloaded the last OUT packet and set DATAEND.
2. The host requests more data during an IN data phase of a Control transfer than was specified in the device request during the SETUP phase. This condition is detected by the controller when the host sends an IN token (instead of an OUT token) after the software has cleared TXPKTRDY and set DATAEND in response to the ACK issued by the host to what should have been the last packet.
3. The host sends more than MaxPktSize data with an OUT data token.
4. The host sends the wrong PID for the OUT Status phase of a Control transfer.
5. The host sends more than a zero length data packet for the OUT Status phase.
- Zero Length Out Data Packets In Control Transfer
- A zero length OUT data packet is used to indicate the end of a Control transfer. In normal operation, such packets should only be received after the entire length of the device request has been transferred (i.e., after the software has set DataEnd). If, however, the host sends a zero length OUT data packet before the entire length of device request has been transferred, this signals the premature end of the transfer. In this case, the controller will automatically flush any IN token loaded by software ready for the Data phase from the FIFO and set SETUPEND bit (bit 4 of PERI\_CSR0).

2579

Universal Serial Bus (USB)

## 16.2.8.1.2 Bulk Transfer: Peripheral Mode

Bulk transactions are handled by endpoints other than endpoint 0. It is used to handle non-periodic, large bursty communication typically used for a transfer that use any available bandwidth and can also be delayed until bandwidth is available.

## 16.2.8.1.2.1 Bulk IN Transactions: Peripheral Mode

A Bulk IN transaction is used to transfer non-periodic data from the USB peripheral device to the host.

The following optional features are available for use with a Tx endpoint used in peripheral mode for Bulk IN transactions:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO awaiting transmission to the host. Double packet buffering is enabled by setting the DPB bit of TXFIFOSZ register (bit 4).
- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint is able to accept another packet in its FIFO. This feature allows the DMA controller to load packets into the FIFO without processor intervention

## 16.2.8.1.2.1.1 Bulk IN Transaction Setup: Peripheral Mode

In configuring a TX endpoint for bulk transactions, the TXMAXP register must be written with the maximum packet size (in bytes) for the endpoint. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the endpoint and the PERI\_TXCSR register (DMAEN and DMAMODE bit fields should be set when using DMA. Table 16-4 displays the PERI\_TXCSR setting when used for Bulk transfer.

## Table 16-4. PERI\_TXCSR Register Bit Configuration for Bulk IN Transactions

| Bit Field   | Bit Name   | Description                                                                                                                                                                  |
|-------------|------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Bit 15      | AUTOSET    | Cleared to 0 if using DMA. For CPU Mode use, if AUTOSET bit is set, the TXPKTRDY bit will be automatically set when data of the maximum packet size is loaded into the FIFO. |
| Bit 14      | ISO        | Cleared to 0 for bulk mode operation.                                                                                                                                        |
| Bit 13      | MODE       | Set to 1 to make sure the FIFO is enabled (only necessary if the FIFO is shared with an RX endpoint)                                                                         |
| Bit 12      | DMAEN      | Set to 1 to enable DMA usage; not needed if CPU is being used to service the Tx Endpoint                                                                                     |
| Bit 11      | FRCDATATOG | Cleared to 0 to allow normal data toggle operations.                                                                                                                         |
| Bit 10      | DMAMODE    | Set to 1 when DMA is used to service Tx FIFO.                                                                                                                                |

When the endpoint is first configured (following a SET\_CONFIGURATION or SET\_INTERFACE command on Endpoint 0), the lower byte of PERI\_TXCSR should be written to set the CLRDATATOG bit (bit 6). This will ensure that the data toggle (which is handled automatically by the controller) starts in the correct state.

Also if there are any data packets in the FIFO, indicated by the FIFONOTEMPTY bit (bit 1 of PERI\_TXCSR) being set, they should be flushed by setting the FLUSHFIFO bit (bit 3 of PERI\_TXCSR).

NOTE: It may be necessary to set this bit twice in succession if double buffering is enabled.

<!-- image -->

<!-- image -->

www.ti.com

## 16.2.8.1.2.1.2 Bulk IN Operation: Peripheral Mode

When data is to be transferred over a Bulk IN pipe, a data packet needs to be loaded into the FIFO and the PERI\_TXCSR register written to set the TXPKTRDY bit (bit 0). When the packet has been sent, the TXPKTRDY bit will be cleared by the USB controller and an interrupt generated to signify to the user/application that the next packet can be loaded into the FIFO. If double packet buffering is enabled, then after the first packet has been loaded and the TXPKTRDY bit set, the TXPKTRDY bit will immediately be cleared (will not wait for the loaded first packet to be driven out) by the USB controller and an interrupt generated so that a second packet can be loaded into the FIFO. The software should operate in the same way, loading a packet when it receives an interrupt, regardless of whether double packet buffering is enabled or not.

In the general case, the packet size must not exceed the size specified by the lower 11 bits of the TXMAXP register. This part of the register defines the payload (packet size) for transfers over the USB and is required by the USB Specification to be either 8, 16, 32, 64 (Full-Speed or High-Speed) or 512 bytes (High-Speed only).

The host may determine that all the data for a transfer has been sent by knowing the total amount of data that is expected. Alternatively it may infer that all the data has been sent when it receives a packet which is smaller than the maximum packet size configuration for that particular endpoint (TXMAXP[10-0]). In the latter case, if the total size of the data block is a multiple of this payload, it will be necessary for the function to send a null packet after all the data has been sent. This is done by setting TXPKTRDY when the next interrupt is received, without loading any data into the FIFO.

If large blocks of data are being transferred, then the overhead of calling an interrupt service routine to load each packet can be avoided by using the CPPI DMA. A separate section detailing the use of the DMA is discussed within a latter section. Suffix is to say that the PERI\_TXCSR (DMAEN and DMAMODE) bit fields need to be set and the PERI\_TXCSR[AUTOSET] bit cleared at the core level when using the DMA with an endpoint configured for any IN transaction/transfer.

## 16.2.8.1.2.1.3 Error Handling of Bulk IN Transfer: Peripheral Mode

If the software wants to shut down the Bulk IN pipe, it should set the SENDSTALL bit (bit 4 of PERI\_TXCSR). When the controller receives the next IN token, it will send a STALL to the host, set the SENTSTALL bit (bit 5 of PERI\_TXCSR) and generate an interrupt.

When the software receives an interrupt with the SENTSTALL bit (bit 5 of PERI\_TXCSR) set, it should clear the SENTSTALL bit. It should however leave the SENDSTALL bit set until it is ready to re-enable the Bulk IN pipe.

NOTE: If the host failed to receive the STALL packet for some reason, it will send another IN token, so it is advisable to leave the SENDSTALL bit set until the software is ready to re-enable the Bulk IN pipe. When a pipe is re-enabled, the data toggle sequence should be restarted by setting the CLRDATATOG bit in the PERI\_TXCSR register (bit 6).

## 16.2.8.1.2.2 Bulk OUT Transfer: Peripheral Mode

A Bulk OUT transaction is used to transfer non-periodic data from the host to the function controller.

The following optional features are available for use with an Rx endpoint used in peripheral mode for Bulk OUT transactions:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO on reception from the host. Double packet buffering is enabled by setting the DPB bit of the RXFIFOSZ register (bit 4).
- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint has a packet in its FIFO. This feature can be used to allow the DMA controller to unload packets from the FIFO without processor intervention.

NOTE: When DMA is enabled, endpoint interrupt will not be generated for completion of packet reception. Endpoint interrupt will be generated only in the error conditions.

Universal Serial Bus (USB)

## 16.2.8.1.2.2.1 Bulk OUT Transfer Setup: Peripheral Mode

In configuring an Rx endpoint for Bulk OUT transactions, the RXMAXP register must be written with the maximum packet size (in bytes) for the endpoint. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the endpoint. When using DMA for Rx Endpoints, the PERI\_RXCSR needs to have its DMAEN bit set and have its AUTOCLEAR and DMAMODE bits cleared. In addition, the relevant interrupt enable bit in the INTRRXE register should be set (if an interrupt is required for this endpoint) and the PERI\_RXCSR register should be set as shown in Table 16-5.

Table 16-5. PERI\_RXCSR Register Bit Configuration for Bulk OUT Transactions

| Bit Field   | Bit Name   | Description                                                                                                                                                                                           |
|-------------|------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Bit 15      | AUTOCLEAR  | Cleared to 0 if using DMA. In CPU Mode of usage, if the CPU sets AUTOCLEAR bit, the RXPKTRDY bit will be automatically cleared when a packet of RXMAXP bytes has been unloaded from the Receive FIFO. |
| Bit 14      | ISO        | Cleared to 0 to enable Bulk protocol.                                                                                                                                                                 |
| Bit 13      | DMAEN      | Set to 1 if a DMA request is required for this Rx endpoint.                                                                                                                                           |
| Bit 12      | DISNYET    | Cleared to 0 to allow normal PING flow control. This will affect only high speed transactions.                                                                                                        |
| Bit 11      | DMAMODE    | Always clear this bit to 0.                                                                                                                                                                           |

When the Rx endpoint is first configured (following a SET\_CONFIGURATION or SET\_INTERFACE command on Endpoint 0), the lower byte of PERI\_RXCSR should be written to set the CLRDATATOG bit (bit 7). This will ensure that the data toggle (which is handled automatically by the USB controller) starts in the correct state.

Also if there are any data packets in the FIFO (indicated by the RXPKTRDY bit (bit 0 of PERI\_RXCSR) being set), they should be flushed by setting the FLUSHFIFO bit (bit 4 of PERI\_RXCSR).

NOTE: It may be necessary to set this bit twice in succession if double buffering is enabled.

## 16.2.8.1.2.2.2 Bulk OUT Operation: Peripheral Mode

When a data packet is received by a Bulk Rx endpoint, the RXPKTRDY bit (bit 0 of PERI\_RXCSR) is set and an interrupt is generated. The software should read the RXCOUNT register for the endpoint to determine the size of the data packet. The data packet should be read from the FIFO, and then the RXPKTRDY bit should be cleared.

The packets received should not exceed the size specified in the RXMAXP register (as this should be the value set in the wMaxPacketSize field of the endpoint descriptor sent to the host). When a block of data larger than wMaxPacketSize needs to be sent to the function, it will be sent as multiple packets. All the packets will be wMaxPacketSize in size, except the last packet which will contain the residue. The software may use an application specific method of determining the total size of the block and hence when the last packet has been received. Alternatively it may infer that the entire block has been received when it receives a packet which is less than wMaxPacketSize in size. (If the total size of the data block is a multiple of wMaxPacketSize, a null data packet will be sent after the data to signify that the transfer is complete.)

In the general case, the application software will need to read each packet from the FIFO individually. If large blocks of data are being transferred, the overhead of calling an interrupt service routine to unload each packet can be avoided by using DMA.

<!-- image -->

<!-- image -->

www.ti.com

## 16.2.8.1.2.2.3 Bulk OUT Error Handling: Peripheral Mode

If the software wants to shut down the Bulk OUT pipe, it should set the SENDSTALL bit (bit 5 of PERI\_RXCSR). When the controller receives the next packet it will send a STALL to the host, set the SENTSTALL bit (bit 6 of PERI\_RXCSR) and generate an interrupt.

When the software receives an interrupt with the SENTSTALL bit (bit 6 of PERI\_RXCSR) set, it should clear this bit. It should however leave the SENDSTALL bit set until it is ready to re-enable the Bulk OUT pipe.

NOTE: If the host failed to receive the STALL packet for some reason, it will send another packet, so it is advisable to leave the SENDSTALL bit set until the software is ready to re-enable the Bulk OUT pipe. When a Bulk OUT pipe is re-enabled, the data toggle sequence should be restarted by setting the CLRDATATOG bit (bit 7) in the PERI\_RXCSR register.

## 16.2.8.1.3 Interrupt Transfer: Peripheral Mode

An Interrupt IN transaction uses the same protocol as a Bulk IN transaction and the configuration and operation mentioned on prior sections apply to Interrupt transfer too with minor changes. Similarly, an Interrupt OUT transaction uses almost the same protocol as a Bulk OUT transaction and can be used the same way.

Tx endpoints in the USB controller have one feature for Interrupt IN transactions that they do not support in Bulk IN transactions. In Interrupt IN transactions, the endpoints support continuous toggle of the data toggle bit.

This feature is enabled by setting the FRCDATATOG bit in the PERI\_TXCSR register (bit 11). When this bit is set, the controller will consider the packet as having been successfully sent and toggle the data bit for the endpoint, regardless of whether an ACK was received from the host.

Another difference is that interrupt endpoints do not support PING flow control. This means that the controller should never respond with a NYET handshake, only ACK/NAK/STALL. To ensure this, the DISNYET bit in the PERI\_RXCSR register (bit 12) should be set to disable the transmission of NYET handshakes in high-speed mode.

Though DMA can be used with an interrupt OUT endpoint, it generally offers little benefit as interrupt endpoints are usually expected to transfer all their data in a single packet.

## 16.2.8.1.4 Isochronous Transfer: Peripheral Mode

Isochronous transfers are used when working with isochronous data. Isochronous transfers provide periodic, continuous communication between host and device.

## 16.2.8.1.4.1 Isochronous IN Transactions: Peripheral Mode

An Isochronous IN transaction is used to transfer periodic data from the function controller to the host.

The following optional features are available for use with a Tx endpoint used in Peripheral mode for Isochronous IN transactions:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO awaiting transmission to the host. Double packet buffering is enabled by setting the DPB bit of TXFIFOSZ register (bit 4).

NOTE: Double packet buffering is generally advisable for isochronous transactions in order to avoid underrun errors as described in later section.

- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint is able to accept another packet in its FIFO. This feature allows the DMA controller to load packets into the FIFO without processor intervention.
- However, this feature is not particularly useful with Isochronous endpoints because the packets transferred are often not maximum packet size and the PERI\_TXCSR register needs to be accessed following every packet to check for Underrun errors.
- When DMA is enabled and DMAMODE bit of PERI\_TXCSR is set, endpoint interrupt will not be generated for completion of packet transfer. Endpoint interrupt will be generated only in the error conditions.

Universal Serial Bus (USB)

## 16.2.8.1.4.1.1 Isochronous IN Transfer Setup: Peripheral Mode

In configuring a Tx endpoint for Isochronous IN transactions, the TXMAXP register must be written with the maximum packet size (in bytes) for the endpoint. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the endpoint. In addition, the relevant interrupt enable bit in the INTRTXE register should be set (if an interrupt is required for this endpoint) and the PERI\_TXCSR register should be set as shown in Table 16-6.

Table 16-6. PERI\_TXCSR Register Bit Configuration for Isochronous IN Transactions

| Bit Field   | Bit Name   | Description                                                                                        |
|-------------|------------|----------------------------------------------------------------------------------------------------|
| Bit 14      | ISO        | Set to 1 to enable Isochronous transfer protocol.                                                  |
| Bit 13      | MODE       | Set to 1 to ensure the FIFO is enabled (only necessary if the FIFO is shared with an Rx endpoint). |
| Bit 12      | DMAEN      | Set to 1 if DMA Requests have to be enabled.                                                       |
| Bit 11      | FRCDATATOG | Ignored in Isochronous mode.                                                                       |
| Bit 10      | DMAMODE    | Set to 1 when DMA is enabled.                                                                      |

## 16.2.8.1.4.1.2 Isochronous IN Transfer Operation: Peripheral Mode

An isochronous endpoint does not support data retries, so if data underrun is to be avoided, the data to be sent to the host must be loaded into the FIFO before the IN token is received. The host will send one IN token per frame (or microframe in High-speed mode), however the timing within the frame (or microframe) can vary. If an IN token is received near the end of one frame and then at the start of the next frame, there will be little time to reload the FIFO. For this reason, double buffering of the endpoint is usually necessary.

An interrupt is generated whenever a packet is sent to the host and the software may use this interrupt to load the next packet into the FIFO and set the TXPKTRDY bit in the PERI\_TXCSR register (bit 0) in the same way as for a Bulk Tx endpoint. As the interrupt could occur almost any time within a frame(/microframe), depending on when the host has scheduled the transaction, this may result in irregular timing of FIFO load requests. If the data source for the endpoint is coming from some external hardware, it may be more convenient to wait until the end of each frame(/microframe) before loading the FIFO as this will minimize the requirement for additional buffering. This can be done by using either the SOF interrupt or the external SOF\_PULSE signal from the controller to trigger the loading of the next data packet. The SOF\_PULSE is generated once per frame(/microframe) when a SOF packet is received. (The controller also maintains an external frame(/microframe) counter so it can still generate a SOF\_PULSE when the SOF packet has been lost.) The interrupts may still be used to set the TXPKTRDY bit in PERI\_TXCSR (bit 0) and to check for data overruns/underruns.

Starting up a double-buffered Isochronous IN pipe can be a source of problems. Double buffering requires that a data packet is not transmitted until the frame(/microframe) after it is loaded. There is no problem if the function loads the first data packet at least a frame(/microframe) before the host sets up the pipe (and therefore starts sending IN tokens). But if the host has already started sending IN tokens by the time the first packet is loaded, the packet may be transmitted in the same frame(/microframe) as it is loaded, depending on whether it is loaded before, or after, the IN token is received. This potential problem can be avoided by setting the ISOUPDATE bit in the POWER register (bit 7). When this bit is set, any data packet loaded into an Isochronous Tx endpoint FIFO will not be transmitted until after the next SOF packet has been received, thereby ensuring that the data packet is not sent too early.

## 16.2.8.1.4.1.3 Isochronous IN Error Handling: Peripheral Mode

If the endpoint has no data in its FIFO when an IN token is received, it will send a null data packet to the host and set the UNDERRUN bit in the PERI\_TXCSR register (bit 2). This is an indication that the software is not supplying data fast enough for the host. It is up to the application to determine how this error condition is handled.

<!-- image -->

<!-- image -->

www.ti.com

If the software is loading one packet per frame(/microframe) and it finds that the TXPKTRDY bit in the PERI\_TXCSR register (bit 0) is set when it wants to load the next packet, this indicates that a data packet has not been sent (perhaps because an IN token from the host was corrupted). It is up to the application how it handles this condition: it may choose to flush the unsent packet by setting the FLUSHFIFO bit in the PERI\_TXCSR register (bit 3), or it may choose to skip the current packet.

## 16.2.8.1.4.2 Isochronous OUT Transactions: Peripheral Mode

An isochronous OUT transaction is used to transfer periodic data from the host to the function controller.

Following optional features are available for use with an Rx endpoint used in Peripheral mode for Isochronous OUT transactions:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO on reception from the host. Double packet buffering is enabled by setting the DPB bit of RXFIFOSZ register (bit 4). NOTE: Double packet buffering is generally advisable for Isochronous transactions in order to avoid overrun errors.
- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint has a packet in its FIFO. This feature can be used to allow the DMA controller to unload packets from the FIFO without processor intervention.
- However, this feature is not particularly useful with Isochronous endpoints because the packets transferred are often not maximum packet size and the PERI\_RXCSR register needs to be accessed following every packet to check for Overrun or CRC errors.

When DMA is enabled, endpoint interrupt will not be generated for completion of packet reception. Endpoint interrupt will be generated only in the error conditions.

## 16.2.8.1.4.2.1 Isochronous OUT Setup: Peripheral Mode

In configuring an Rx endpoint for Isochronous OUT transactions, the RXMAXP register must be written with the maximum packet size (in bytes) for the endpoint. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the endpoint. In addition, the relevant interrupt enable bit in the INTRRXE register should be set (if an interrupt is required for this endpoint) and the PERI\_RXCSR register should be set as shown in Table 16-7.

Table 16-7. PERI\_RXCSR Register Bit Configuration for Isochronous OUT Transactions

| Bit Field   | Bit Name   | Description                                                                                                                                                                                           |
|-------------|------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Bit 15      | AUTOCLEAR  | Cleared to 0 if using DMA. In CPU Mode of usage, if the CPU sets AUTOCLEAR bit, the RXPKTRDY bit will be automatically cleared when a packet of RXMAXP bytes has been unloaded from the Receive FIFO. |
| Bit 14      | ISO        | Set to 1 to configure endpoint usage for Isochronous transfer.                                                                                                                                        |
| Bit 13      | DMAEN      | Set to 1 if a DMA request is required for this Rx endpoint.                                                                                                                                           |
| Bit 12      | DISNYET    | Ignored in Isochronous Mode.                                                                                                                                                                          |
| Bit 11      | DMAMODE    | Always clear this bit to 0.                                                                                                                                                                           |

Universal Serial Bus (USB)

## 16.2.8.1.4.2.2 Isochronous OUT Operation: Peripheral Mode

An Isochronous endpoint does not support data retries so, if a data overrun is to be avoided, there must be space in the FIFO to accept a packet when it is received. The host will send one packet per frame (or microframe in High-speed mode); however, the time within the frame can vary. If a packet is received near the end of one frame(/microframe) and another arrives at the start of the next frame, there will be little time to unload the FIFO. For this reason, double buffering of the endpoint is usually necessary.

An interrupt is generated whenever a packet is received from the host and the software may use this interrupt to unload the packet from the FIFO and clear the RXPKTRDY bit in the PERI\_RXCSR register (bit 0) in the same way as for a Bulk Rx endpoint. As the interrupt could occur almost any time within a frame(/microframe), depending on when the host has scheduled the transaction, the timing of FIFO unload requests will probably be irregular. If the data sink for the endpoint is going to some external hardware, it may be better to minimize the requirement for additional buffering by waiting until the end of each frame(/microframe) before unloading the FIFO. This can be done by using either the SOF interrupt or the external SOF\_PULSE signal from the controller to trigger the unloading of the data packet. The SOF\_PULSE is generated once per frame(/microframe) when a SOF packet is received. (The controller also maintains an external frame(/microframe) counter so it can still generate a SOF\_PULSE when the SOF packet has been lost.) The interrupts may still be used to clear the RXPKTRDY bit in PERI\_RXCSR and to check for data overruns/underruns.

## 16.2.8.1.4.2.3 Isochronous OUT Error Handling: Peripheral Mode

If there is no space in the FIFO to store a packet when it is received from the host, the OVERRUN bit in the PERI\_RXCSR register (bit 2) will be set. This is an indication that the software is not unloading data fast enough for the host. It is up to the application to determine how this error condition is handled

If the controller finds that a received packet has a CRC error, it will still store the packet in the FIFO and set the RXPKTRDY bit (bit 0 of PERI\_RXCSR) and the DATAERROR bit (bit 3 of PERI\_RXCSR). It is left up to the application to determine how this error condition is handled.

The number of USB packets sent in any microframe will depend on the amount of data to be transferred, and is indicated through the PIDs used for the individual packets. If the indicated number of packets have not been received by the end of a microframe, the INCOMPRX bit (bit 8) bit in the PERI\_RXCSR register will be set to indicate that the data in the FIFO is incomplete. Equally, if a packet of the wrong data type is received, then the PID Error bit is the PERI\_RXCSR register will be set. In each case, an interrupt will, however, still be generated to allow the data that has been received to be read from the FIFO.

Note: The circumstances in which a PID Error or INCOMPRX is reported depends on the precise sequence of packets received.

When the core is operating in peripheral mode, the details are in Table 16-8.

Table 16-8. Isochronous OUT Error Handling: Peripheral Mode

| No. Packet(s) Expected   | Data Packet(s) Received   | Response                     |
|--------------------------|---------------------------|------------------------------|
| 1                        | DATA0                     | OK                           |
|                          | DATA1                     | PID Error set                |
|                          | DATA2                     | PID Error set                |
|                          | MDATA                     | PID Error set                |
| 2                        | DATA0                     | OK                           |
|                          | DATA1                     | INCOMPRX Set                 |
|                          | DATA2                     | INCOMPRX Set + PID Error set |
|                          | MDATA                     | INCOMPRX Set                 |
|                          | MDATA DATA0               | PID Error Set                |
|                          | MDATA DATA1               | OK                           |
|                          | MDATA DATA2               | PID Error Set                |
|                          | MDATA MDATA               | PID Error Set                |
| 3                        | DATA0                     | OK                           |
|                          | DATA1                     | INCOMPRX Set                 |

<!-- image -->

<!-- image -->

www.ti.com

Table 16-8. Isochronous OUT Error Handling: Peripheral Mode (continued)

| No. Packet(s) Expected   | Data Packet(s) Received   | Response      |
|--------------------------|---------------------------|---------------|
|                          | DATA2                     | INCOMPRX Set  |
|                          | MDATA                     | INCOMPRX Set  |
|                          | MDATA DATA0               | PID Error set |
|                          | MDATA DATA1               | OK            |
|                          | MDATA DATA2               | INCOMPRX Set  |
|                          | MDATA MDATA               | INCOMPRX Set  |
|                          | MDATA MDATA DATA0         | PID Error set |
|                          | MDATA MDATA DATA1         | PID Error set |
|                          | MDATA MDATA DATA2         | OK            |
|                          | MDATA MDATA MDATA         | PID Error set |

## 16.2.8.2 USB Controller Host Mode Operation

The USB controller assumes the role of a host when the USBx\_ID pin state is grounded or USB Mode Register[iddig=bit8] is cleared to 0 (provided that iddig\_mux, which is bit7 of USBnMODE is also set to 1) by the user application prior to the controller goes into session. When the USB controller go into session, application/firmware sets the DEVCTL[SESSION] bit to 1, it will assume the role of a host.

- Entry into Suspend mode. When operating as a host, the USB controller can be prompted to go into Suspend mode by setting the SUSPENDM bit in the POWER register. When this bit is set, the controller will complete the current transaction then stop the transaction scheduler and frame counter. No further transactions will be started and no SOF packets will be generated. If the ENSUSPM bit (bit 0 of POWER register) is set, the UTMI+ PHY will go into low-power mode when the controller goes into suspend mode.
- Sending Resume Signaling. When the application requires the controller to leave suspend mode, it needs to clear the SUSPENDM bit in the POWER register, set the RESUME bit and leave it set for 20ms. While the RESUME bit is high, the controller will generate Resume signaling on the bus. After 20 ms, the CPU should clear the RESUME bit, at which point the frame counter and transaction scheduler will be started.
- Responding to Remote Wake-up. If Resume signaling is detected from the target while the controller is in suspend mode, the UTMI+ PHY will be brought out of low-power mode and UTMI clock is restarted. The controller will then exit suspend mode and automatically set the RESUME bit in the POWER register (bit 2) to '1' to take over generating the Resume signaling from the target. If the resume interrupt is enabled, an interrupt will be generated.
- Reset Signaling. If the RESET bit in the POWER register (bit 3) is set while the controller is in Host mode, it will generate Reset signaling on the bus. If the HSENAB bit in the POWER register (bit 5) was set, it will also try to negotiate for high-speed operation. The software should keep the RESET bit set for at least 20 ms to ensure correct resetting of the target device. After the software has cleared the bit, the controller will start its frame counter and transaction scheduler. Whether high-speed operation is selected will be indicated by HSMODE bit of POWER register (bit 4).

Universal Serial Bus (USB)

## 16.2.8.2.1 Control Transactions: Host Mode

Host control transactions are conducted through Endpoint 0 and the software is required to handle all the Standard Device Requests that may be sent or received via Endpoint 0 (as described in Universal Serial Bus Specification, Revision 2.0). Endpoint 0 can only be serviced via CPU and DMA mode can not be used.

There are three categories of Standard Device Requests to be handled: Zero Data Requests (in which all the information is included in the command); Write Requests (in which the command will be followed by additional data); and Read Requests (in which the device is required to send data back to the host).

1. Zero Data Requests comprise a SETUP command followed by an IN Status Phase.
2. Write Requests comprise a SETUP command, followed by an OUT Data Phase which is in turn followed by an IN Status Phase.
3. Read Requests comprise a SETUP command, followed by an IN Data Phase which is in turn followed by an OUT Status Phase.

A timeout may be set to limit the length of time for which the host controller will retry a transaction which is continually NAKed by the target. This limit can be between 2 and 2 15 frames/microframes and is set through the NAKLIMIT0 register.

The following sections describe the actions that the CPU needs to take in issuing these different types of request through looking at the steps to take in the different phases of a control transaction.

Note: Before initiating any transactions as a Host, the FADDR register needs to be set to address the peripheral device. When the device is first connected, FADDR should be set to zero. After a SET\_ADDRESS command is issued, FADDR should be set the target's new address.

## 16.2.8.2.1.1 Setup Phase of Control Transaction: Host Mode

For the SETUP Phase of a control transaction (Figure 16-8), the software driving the USB host device needs to:

1. Load the 8 bytes of the required Device request command into the Endpoint 0 FIFO
2. 2.

Set SETUPPKT and TXPKTRDY (bits 3 and 1 of HOST\_CSR0, respectively). NOTE: These bits must be set together. The controller then proceeds to send a SETUP token followed by the 8-byte command/request to Endpoint 0 of the addressed device, retrying as necessary. Note: On errors, the controller retries the transaction three times.

3. At the end of the attempt to send the 8-byte request data, the controller will generate an Endpoint 0 interrupt. The software should then read HOST\_CSR0 to establish whether the RXSTALL bit (bit 2), the ERROR bit (bit 4) or the NAK\_TIMEOUT bit (bit 7) has been set.

If RXSTALL is set, it indicates that the target did not accept the command (for example, because it is not supported by the target device) and so has issued a STALL response. If ERROR is set, it means that the controller has tried to send the SETUP Packet and the following data packet three times without getting any response.

If NAK\_TIMEOUT is set, it means that the controller has received a NAK response to each attempt to send the SETUP packet, for longer than the time set in HOST\_NAKLIMIT0. The controller can then be directed either to continue trying this transaction (until it times out again) by clearing the NAK\_TIMEOUT bit or to abort the transaction by flushing the FIFO before clearing the NAK\_TIMEOUT bit.

4. If none of RXSTALL, ERROR or NAK\_TIMEOUT is set, the SETUP Phase has been correctly ACKed and the software should proceed to the following IN Data Phase, OUT Data Phase or IN Status Phase specified for the particular Standard Device Request.

<!-- image -->

<!-- image -->

www.ti.com

Figure 16-8. Flow Chart of Setup Stage of a Control Transfer in Host Mode

<!-- image -->

## 16.2.8.2.1.2 Data Phase (IN Data Phase) of a Control Transaction: Host Mode

For the IN Data Phase of a control transaction (Figure 16-9), the software driving the USB host device needs to

1. Set REQPKT bit of HOST\_CSR0 (bit 5)
2. Wait while the controller sends the IN token and receives the required data back.
3. When the controller generates the Endpoint 0 interrupt, read HOST\_CSR0 to establish whether the RXSTALL bit (bit 2), the ERROR bit (bit 4), the NAK\_TIMEOUT bit (bit 7) or RXPKTRDY bit (bit 0) has been set.
4. If RXSTALL is set, it indicates that the target has issued a STALL response.

Universal Serial Bus (USB)

<!-- image -->

If ERROR is set, it means that the controller has tried to send the required IN token three times without getting any response. If NAK\_TIMEOUT bit is set, it means that the controller has received a NAK response to each attempt to send the IN token, for longer than the time set in HOST\_NAKLIMIT0. The controller can then be directed either to continue trying this transaction (until it times out again) by clearing the NAK\_TIMEOUT bit or to abort the transaction by clearing REQPKT before clearing the NAK\_TIMEOUT bit

4. If RXPKTRDY has been set, the software should read the data from the Endpoint 0 FIFO, then clear RXPKTRDY.
5. If further data is expected, the software should repeat Steps 1-4.

When all the data has been successfully received, the CPU should proceed to the OUT Status Phase of the Control Transaction.

Figure 16-9. Flow Chart of Data Stage (IN Data Phase) of a Control Transfer in Host Mode

<!-- image -->

## 16.2.8.2.1.3 Data Phase (OUT Data Phase) of a Control Transaction: Host Mode

For the OUT Data Phase of a control transaction (Figure 16-10), the software driving the USB host device needs to:

<!-- image -->

## www.ti.com

1. Load the data to be sent into the endpoint 0 FIFO.
2. Set the TXPKTRDY bit of HOST\_CSR0 (bit 1). The controller then proceeds to send an OUT token followed by the data from the FIFO to Endpoint 0 of the addressed device, retrying as necessary.
3. At the end of the attempt to send the data, the controller will generate an Endpoint 0 interrupt. The software should then read HOST\_CSR0 to establish whether the RXSTALL bit (bit 2), the ERROR bit (bit 4) or the NAK\_TIMEOUT bit (bit 7) has been set.
4. If RXSTALL bit is set, it indicates that the target has issued a STALL response.
5. If ERROR bit is set, it means that the controller has tried to send the OUT token and the following data packet three times without getting any response. If NAK\_TIMEOUT is set, it means that the controller has received a NAK response to each attempt to send the OUT token, for longer than the time set in the HOST\_NAKLIMIT0 register. The controller can then be directed either to continue trying this transaction (until it times out again) by clearing the NAK\_TIMEOUT bit or to abort the transaction by flushing the FIFO before clearing the NAK\_TIMEOUT bit.
6. If none of RXSTALL, ERROR or NAKLIMIT is set, the OUT data has been correctly ACKed.
7. When all the data has been successfully sent, the software should proceed to the IN Status Phase of
8. If further data needs to be sent, the software should repeat Steps 1-3. the Control Transaction.
9. 4.

<!-- image -->

Figure 16-10. Flow Chart of Data Stage (OUT Data Phase) of a Control Transfer in Host Mode

<!-- image -->

## 16.2.8.2.1.4 Status Phase (Status for OUT Data Phase or Setup Phase) of a Control Transaction: Host Mode

IN Status Phase of a control transfer exists for a Zero Data Request or for a Write Request of a control transfer. The IN Status Phase follows the Setup Stage, if no Data Stage of a control transfer exists, or OUT Data Phase of a Data Stage of a control transfer.

For the IN Status Phase of a control transaction (Figure 16-11), the software driving the USB Host device needs to:

1. Set the STATUSPKT and REQPKT bits of HOST\_CSR0 (bit 6 and bit 5, respectively).
2. Wait while the controller sends an IN token and receives a response from the USB peripheral device.
3. When the controller generates the Endpoint 0 interrupt, read HOST\_CSR0 to establish whether the RXSTALL bit (bit 2), the ERROR bit (bit 4), the NAK\_TIMEOUT bit (bit 7) or RXPKTRDY bit (bit 0) has been set.

If RXSTALL bit is set, it indicates that the target could not complete the command and so has issued a

<!-- image -->

www.ti.com

STALL response.

If ERROR bit is set, it means that the controller has tried to send the required IN token three times without getting any response.

If NAK\_TIMEOUT bit is set, it means that the controller has received a NAK response to each attempt to send the IN token, for longer than the time set in the HOST\_NAKLIMIT0 register. The controller can then be directed either to continue trying this transaction (until it times out again) by clearing the NAK\_TIMEOUT bit or to abort the transaction by clearing REQPKT bit and STATUSPKT bit before clearing the NAK\_TIMEOUT bit.

4. The CPU should clear the STATUSPPKT bit of HOST\_CSR0 together with (i.e., in the same write operation as) RxPktRdy if this has been set.

Figure 16-11. Flow Chart of Status Stage of Zero Data Request or Write Request of a Control Transfer in Host Mode

<!-- image -->

## 16.2.8.2.1.5 Status Phase for a Read Request of a Control Transaction: Host Mode

OUT Status Phase of a control transfer exist for a Read Request or a control transfer where data was received by the host controller. The OUT Status phase follows the IN Data Stage of a control transfer.

For the OUT Status Phase of a control transaction (Figure 16-12), the CPU driving the host device needs to:

Universal Serial Bus (USB)

<!-- image -->

1. Set STATUSPKT and TXPKTRDY bits of HOST\_CSR0 (bit 6 and bit 1, respectively). NOTE: These bits need to be set together
2. Wait while the controller sends the OUT token and a zero-length DATA1 packet.
3. At the end of the attempt to send the data, the controller will generate an Endpoint 0 interrupt. The software should then read HOST\_CSR0 to establish whether the RXSTALL bit (bit 2), the ERROR bit (bit 4) or the NAK\_TIMEOUT bit (bit 7) has been set.
4. If RXSTALL bit is set, it indicates that the target could not complete the command and so has issued a STALL response.
5. If ERROR bit is set, it means that the controller has tried to send the STATUS Packet and the following data packet three times without getting any response.
6. If NAK\_TIMEOUT bit is set, it means that the controller has received a NAK response to each attempt to send the IN token, for longer than the time set in the HOST\_NAKLIMIT0 register. The controller can then be directed either to continue trying this transaction (until it times out again) by clearing the NAK\_TIMEOUT bit or to abort the transaction by flushing the FIFO before clearing the NAK\_TIMEOUT bit.
4. If none of RXSTALL, ERROR or NAK\_TIMEOUT bits is set, the STATUS Phase has been correctly ACKed.

<!-- image -->

www.ti.com

Figure 16-12. Chart of Status Stage of a Read Request of a Control Transfer in Host Mode

<!-- image -->

## 16.2.8.2.2 Bulk Transfer: Host Mode

Bulk transactions are handled by endpoints other than endpoint 0. It is used to handle non-periodic, large bursty communication typically used for a transfer that use any available bandwidth and can also be delayed until bandwidth is available.

## 16.2.8.2.2.1 Bulk IN Transactions: Host Mode

A Bulk IN transaction may be used to transfer non-periodic data from the external USB peripheral to the host.

Universal Serial Bus (USB)

<!-- image -->

The following optional features are available for use with an Rx endpoint used in host mode to receive the data:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO on reception from the host. This allows that one packet can be received while another is being read. Double packet buffering is enabled by setting the DPB bit of RXFIFOSZ register (bit 4).
- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint has a packet in its FIFO. This feature can be used to allow the DMA controller to unload packets from the FIFO without processor intervention.
- When DMA is enabled, endpoint interrupt will not be generated for completion of packet reception. Endpoint interrupt will be generated only in the error conditions. For more information see section on CPPI DMA

## 16.2.8.2.2.1.1 Bulk IN Setup: Host Mode

Before initiating any Bulk IN Transactions in Host mode:

- The HOST\_RXTYPE register for the endpoint that is to be used needs to be programmed as:
- -Operating speed in the SPEED bit field (bits 7 and 6).
- -Set 10 (binary value) in the PROT field for bulk transfer.
- -Endpoint Number of the target device in RENDPN field. This is the endpoint number contained in the Rx endpoint descriptor returned by the target device during enumeration.
- The RXMAXP register for the controller endpoint must be written with the maximum packet size (in bytes) for the transfer. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the target endpoint.
- The HOST\_RXINTERVAL register needs to be written with the required value for the NAK limit (2-215 frames/microframes), or set to zero if the NAK timeout feature is not required.
- The relevant interrupt enable bit in the INTRRXE register should be set (if an interrupt is required for this endpoint).

Note: Whether interrupt is handled from PDR level or Core level, interrupt is required to be enabled at the core level. See details on Core Interrupt registers, CTRLR register, and sections on Interrupt Handling

- The AUTOREQ bit field should be used only when servicing transfers using CPU mode and must be cleared when using DMA Mode. For DMA Mode, dedicated registers USB0/1 Req Registers exist and the HOST\_RXCSR[AUTOREQ] should be cleared.

When DMA is enabled, the following bits of HOST\_RXCSR register should be set as:

- -Clear AUTOCLEAR.
- -Set DMAEN (bit 13) to 1 if a DMA request is required for this endpoint.
- -Clear DSINYET (bit 12) to 0 to allow normal PING flow control. This will affect only High Speed transactions.
- -Clear DMAMODE (bit 11) to 0.

Note: If DMA is enabled, the USB0/1 Auto Req register can be set for generating IN tokens automatically after receiving the data. Set the bit field RXn\_AUTOREQ (where n is the endpoint number) with binary value 01 or 11.

<!-- image -->

www.ti.com

When the endpoint is first configured, the endpoint data toggle should be cleared to 0 either by using the DATATOGWREN and DATATOG bits of HOST\_RXCSR (bit 10 and bit 9) to toggle the current setting or by setting the CLRDATATOG bit of HOST\_RXCSR (bit 7). This will ensure that the data toggle (which is handled automatically by the controller) starts in the correct state. Also if there are any data packets in the FIFO (indicated by the RXPKTRDY bit (bit 0 of HOST\_RXCSR) being set), they should be flushed by setting the FLUSHFIFO bit of HOST\_RXCSR (bit 4).

NOTE: It may be necessary to set this bit twice in succession if double buffering is enabled.

## 16.2.8.2.2.1.2 Bulk IN Operation: Host Mode

When Bulk data is required from the USB peripheral device, the software should set the REQPKT bit in the corresponding HOST\_RXCSR register (bit 5). The controller will then send an IN token to the selected peripheral endpoint and waits for data to be returned.

If data is correctly received, RXPKTRDY bit of HOST\_RXCSR (bit 0) is set. If the USB peripheral device responds with a STALL, RXSTALL bit (bit 6 of HOST\_RXCSR) is set. If a NAK is received, the controller tries again and continues to try until either the transaction is successful or the POLINTVL\_NAKLIMIT set in the HOST\_RXINTERVAL register is reached. If no response at all is received, two further attempts are made before the controller reports an error by setting the ERROR bit of HOST\_RXCSR (bit 2).

The controller then generates the appropriate endpoint interrupt, whereupon the software should read the corresponding HOST\_RXCSR register to determine whether the RXPKTRDY, RXSTALL, ERROR or DATAERR\_NAKTIMEOUT bit is set and act accordingly. If the DATAERR\_NAKTIMEOUT bit is set, the controller can be directed either to continue trying this transaction (until it times out again) by clearing the DATAERR\_NAKTIMEOUT bit or to abort the transaction by clearing REQPKT bit before clearing the DATAERR\_NAKTIMEOUT bit.

The packets received should not exceed the size specified in the RXMAXP register (as this should be the value set in the wMaxPacketSize field of the endpoint descriptor sent to the host).

In the general case, the application software (if CPU is servicing the endpoint) will need to read each packet from the FIFO individually. If large blocks of data are being transferred, the overhead of calling an interrupt service routine to unload each packet can be avoided by using DMA.

Note: When using DMA, see Section 16.2.9, Communications Port Programming Interface (CPPI) 4.1 DMA , for the proper configuration of the core register, HOST\_RXCSR.

## 16.2.8.2.2.1.3 Bulk IN Error Handling: Host Mode

If the target wants to shut down the Bulk IN pipe, it will send a STALL response to the IN token. This will result in the RXSTALL bit of HOST\_RXCSR (bit 6) being set.

## 16.2.8.2.2.2 Bulk OUT Transactions: Host Mode

A Bulk OUT transaction may be used to transfer non-periodic data from the host to the USB peripheral.

Following optional features are available for use with a Tx endpoint used in Host mode to transmit this data:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO awaiting transmission to the peripheral device. Double packet buffering is enabled by setting the DPB bit of TXFIFOSZ register (bit 4).
- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint is able to accept another packet in its FIFO. This feature can be used to allow the DMA controller to load packets into the FIFO without processor intervention. For more information on using DMA, consult the section discussing CPPI DMA.
- When DMA is enabled and DMAMODE bit in HOST\_TXCSR register is set, an endpoint interrupt will not be generated for completion of packet reception. An endpoint interrupt will be generated only in the error conditions.

2597

Universal Serial Bus (USB)

## 16.2.8.2.2.2.1 Bulk OUT Setup: Host Mode

Before initiating any bulk OUT transactions:

- The target function address needs to be set in the TXFUNCADDR register for the selected controller endpoint. (TXFUNCADDR register is available for all endpoints from EP0 to EP15.)
- The HOST\_TXTYPE register for the endpoint that is to be used needs to be programmed as:
- -Operating speed in the SPEED bit field (bits 7 and 6).
- -Set PROT field to 10b for bulk transfer.
- -Enter Endpoint Number of the target device in TENDPN field. This is the endpoint number contained in the OUT(Tx) endpoint descriptor returned by the target device during enumeration.
- The TXMAXP register for the controller endpoint must be written with the maximum packet size (in bytes) for the transfer. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the target endpoint.
- The HOST\_TXINTERVAL register needs to be written with the required value for the NAK limit (2-215 frames/microframes), or set to zero if the NAK timeout feature is not required.
- The relevant interrupt enable bit in the INTRTXE register should be set (if an interrupt is required for this endpoint).
- The following bits of HOST\_TXCSR register should be set as:
- -Set the MODE bit (bit 13) to 1 to ensure the FIFO is enabled (only necessary if the FIFO is shared with an Rx endpoint).
- -Clear the FRCDATATOG bit (bit 11) to 0 to allow normal data toggle operations.
- -Clear/Set AUTOSET bit (bit 15). The setting of this bit depends on the desire of the user/application in automatically setting the TXPKTRDY bit when servicing transactions using CPU.

Note: If DMA is needs to be used in place of the CPU, the following table displays the setting of the core register HOST\_TXCSR register in Host mode. For the CPPI DMA registers settings consult the section on CPPI DMA within this document.

| Bit Field   | Bit Name   | Description                                                                                                                                                                  |
|-------------|------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Bit 15      | AUTOSET    | Cleared to 0 if using DMA. For CPU Mode use, if AUTOSET bit is set, the TXPKTRDY bit will be automatically set when data of the maximum packet size is loaded into the FIFO. |
| Bit 14      | ISO        | Cleared to 0 for bulk mode operation.                                                                                                                                        |
| Bit 13      | MODE       | Set to 1 to make sure the FIFO is enabled (only necessary if the FIFO is shared with an RX endpoint)                                                                         |
| Bit 12      | DMAEN      | Set to 1 to enable DMA usage; not needed if CPU is being used to service the Tx Endpoint                                                                                     |
| Bit 11      | FRCDATATOG | Cleared to 0 to allow normal data toggle operations.                                                                                                                         |
| Bit 10      | DMAMODE    | Set to 1 when DMA is used to service Tx FIFO.                                                                                                                                |

When the endpoint is first configured, the endpoint data toggle should be cleared to 0 either by using the DATATOGWREN bit and DATATOG bit of HOST\_TXCSR (bit 9 and bit 8) to toggle the current setting or by setting the CLRDATATOG bit of HOST\_TXCSR (bit 6). This will ensure that the data toggle (which is handled automatically by the controller) starts in the correct state. Also, if there are any data packets in the FIFO (indicated by the FIFONOTEMPTY bit of HOST\_TXCSR register (bit 1) being set), they should be flushed by setting the FLUSHFIFO bit (bit 3 of HOST\_TXCSR).

NOTE: It may be necessary to set this bit twice in succession if double buffering is enabled.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 16.2.8.2.2.2.2 Bulk OUT Operation: Host Mode

When Bulk data is required to be sent to the USB peripheral device, the software should write the first packet of the data to the FIFO (or two packets if double-buffered) and set the TXPKTRDY bit in the corresponding HOST\_TXCSR register (bit 0). The controller will then send an OUT token to the selected peripheral endpoint, followed by the first data packet from the FIFO.

If data is correctly received by the peripheral device, an ACK should be received whereupon the controller will clear TXPKTRDY bit of HOST\_TXCSR (bit 0). If the USB peripheral device responds with a STALL, the RXSTALL bit (bit 5) of HOST\_TXCSR is set. If a NAK is received, the controller tries again and continues to try until either the transaction is successful or the NAK limit set in the HOST\_TXINTERVAL register is reached. If no response at all is received, two further attempts are made before the controller reports an error by setting ERROR bit in HOST\_TXCSR (bit 2).

The controller then generates the appropriate endpoint interrupt, whereupon the software should read the corresponding HOST\_TXCSR register to determine whether the RXSTALL (bit 5), ERROR (bit 2) or NAK\_TIMEOUT (bit 7) bit is set and act accordingly. If the NAK\_TIMEOUT bit is set, the controller can be directed either to continue trying this transaction (until it times out again) by clearing the NAK\_TIMEOUT bit or to abort the transaction by flushing the FIFO before clearing the NAK\_TIMEOUT bit.

If large blocks of data are being transferred, then the overhead of calling an interrupt service routine to load each packet can be avoided by using DMA.

## 16.2.8.2.2.2.3 Bulk OUT Error Handling: Host Mode

If the target wants to shut down the Bulk OUT pipe, it will send a STALL response. This is indicated by the RXSTALL bit of HOST\_TXCSR register (bit 5) being set.

## 16.2.8.2.3 Interrupt Transfer: Host Mode

When the controller is operating as the host, interactions with an Interrupt endpoint on the USB peripheral device are handled in very much the same way as the equivalent Bulk transactions (described in previous sections).

The principal difference as far as operational steps are concerned is that the PROT field of HOST\_RXTYPE and HOST\_TXTYPE (bits 5-4) need to be set (binary value) to represent an Interrupt transaction. The required polling interval also needs to be set in the HOST\_RXINTERVAL and HOST\_TXINTERVAL registers.

## 16.2.8.2.4 Isochronous Transfer: Host Mode

Isochronous transfers are used when working with isochronous data. Isochronous transfers provide periodic, continuous communication between host and device.

An Isochronous IN transaction is used to transfer periodic data from the USB peripheral to the host.

## 16.2.8.2.4.1 Isochronous IN Transactions: Host Mode

The following optional features are available for use with an Rx endpoint used in Host mode to receive this data:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO on reception from the host. This allows that one packet can be received while another is being read. Double packet buffering is enabled by setting the DPB bit of RXFIFOSZ register (bit 4).
- AutoRequest: When the AutoRequest feature is enabled, the REQPKT bit of HOST\_RXCSR (bit 5) will be automatically set when the RXPKTRDY bit is cleared. This only applies when the CPU is being used to service the endpoint. When using DMA, this bit field needs to be cleared to Zero. CPPI DMA has its own configuration registers that renders a similar task, USB0/1 Auto Req registers, that needs to be used to have a similar effect. For more information, see Section 16.2.9, Communications Port Programming Interface (CPPI) 4.1 DMA .
- DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint has a packet in its FIFO. This feature can be used to allow the DMA controller to unload packets from the FIFO without processor intervention. However, this feature is not particularly useful with isochronous

2599

Universal Serial Bus (USB)

<!-- image -->

endpoints because the packets transferred are often not maximum packet size.

- When DMA is enabled, endpoint interrupt will not be generated for completion of packet reception. Endpoint interrupt will be generated only in the error conditions.

## 16.2.8.2.4.1.1 Isochronous IN Transfer Setup: Host

Before initiating an Isochronous IN Transactions in Host mode:

- The target function address needs to be set in the RXFUNCADDR register for the selected controller endpoint (RXFUNCADDR register is available for all endpoints from EP0 to EP4).
- The HOST\_RXTYPE register for the endpoint that is to be used needs to be programmed as:
- -Operating speed in the SPEED bit field (bits 7 and 6).
- -Set 01 (binary value) in the PROT field for isochronous transfer.
- -Endpoint Number of the target device in RENDPN field. This is the endpoint number contained in the Rx endpoint descriptor returned by the target device during enumeration.
- The RXMAXP register for the controller endpoint must be written with the maximum packet size (in bytes) for the transfer. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the target endpoint.
- The HOST\_RXINTERVAL register needs to be written with the required transaction interval (usually one transaction per frame/microframe).
- The relevant interrupt enable bit in the INTRRXE register should be set (if an interrupt is required for this endpoint).
- The following bits of HOST\_RXCSR register should be set as:
- -Clear AUTOCLEAR
- -Set the DMAEN bit (bit 13) to 1 if a DMA request is required for this endpoint.
- -Clear the DISNYET it (bit 12) to 0 to allow normal PING flow control. This will only affect High Speed transactions.
- -Clear DMAMODE bit (bit 11) to 0.
- If DMA is enabled, AUTOREQ register can be set for generating IN tokens automatically after receiving the data. Set the bit field RXn\_AUTOREQ (where n is the endpoint number) with binary value 01 or 11. For detailed information on using CPPI DMA, consult related section within this document.

## 16.2.8.2.4.1.2 Isochronous IN Operation: Host Mode

The operation starts with the software setting REQPKT bit of HOST\_RXCSR (bit 5). This causes the controller to send an IN token to the target.

When a packet is received, an interrupt is generated which the software may use to unload the packet from the FIFO and clear the RXPKTRDY bit in the HOST\_RXCSR register (bit 0) in the same way as for a Bulk Rx endpoint. As the interrupt could occur almost any time within a frame(/microframe), the timing of FIFO unload requests will probably be irregular. If the data sink for the endpoint is going to some external hardware, it may be better to minimize the requirement for additional buffering by waiting until the end of each frame before unloading the FIFO. This can be done by using the SOF\_PULSE signal from the controller to trigger the unloading of the data packet. The SOF\_PULSE is generated once per frame(/microframe). The interrupts may still be used to clear the RXPKTRDY bit in HOST\_RXCSR.

## 16.2.8.2.4.1.3 Isochronous IN Error Handling: Host Mode

If a CRC or bit-stuff error occurs during the reception of a packet, the packet will still be stored in the FIFO but the DATAERR\_NAKTIMEOUT bit of HOST\_RXCSR (bit 3) is set to indicate that the data may be corrupt.

<!-- image -->

www.ti.com

Note: The number of USB packets sent in any microframe will depend on the amount of data to be transferred, and is indicated through the PIDs used for the individual packets. If the indicated numbers of packets have not been received by the end of a microframe, the INCOMPRX bit in the HOST\_RXCSR register will be set to indicate that the data in the FIFO is incomplete. Equally, if a packet of the wrong data type is received, then the PID Error bit is the HOST\_RXCSR register will be set. In each case, an interrupt will, however, still be generated to allow the data that has been received to be read from the FIFO.

## 16.2.8.2.4.2 Isochronous OUT Transactions: Host Mode

An Isochronous OUT transaction may be used to transfer periodic data from the host to the USB peripheral.

Following optional features are available for use with a Tx endpoint used in Host mode to transmit this data:

- Double packet buffering: When enabled, up to two packets can be stored in the FIFO awaiting transmission to the peripheral device. Double packet buffering is enabled by setting the DPB bit of TXFIFOSZ register (bit 4).

DMA: If DMA is enabled for the endpoint, a DMA request will be generated whenever the endpoint is able to accept another packet in its FIFO. This feature can be used to allow the DMA controller to load packets into the FIFO without processor intervention.

However, this feature is not particularly useful with isochronous endpoints because the packets transferred are often not maximum packet size.

When DMA is enabled and endpoint interrupt will not be generated for completion of packet reception. Endpoint interrupt will be generated only in the error conditions.

## 16.2.8.2.4.2.1 Isochronous OUT Transfer Setup: Host Mode

Before initiating any Isochronous OUT transactions:

- The target function address needs to be set in the TXFUNCADDR register for the selected controller endpoint (TXFUNCADDR register is available for all endpoints from EP0 to EP4).
- The HOST\_TXTYPE register for the endpoint that is to be used needs to be programmed as:
- -Operating speed in the SPEED bit field (bits 7 and 6).
- -Set 01 (binary value) in the PROT field for isochronous transfer.
- -Endpoint Number of the target device in TENDPN field. This is the endpoint number contained in the OUT(Tx) endpoint descriptor returned by the target device during enumeration.
- The TXMAXP register for the controller endpoint must be written with the maximum packet size (in bytes) for the transfer. This value should be the same as the wMaxPacketSize field of the Standard Endpoint Descriptor for the target endpoint.
- The HOST\_TXINTERVAL register needs to be written with the required transaction interval (usually one transaction per frame/microframe).
- The relevant interrupt enable bit in the INTRTXE register should be set (if an interrupt is required for this endpoint).
- The following bits of HOST\_TXCSR register should be set as:
- -Set the MODE bit (bit 13) to 1 to ensure the FIFO is enabled (only necessary if the FIFO is shared with an Rx endpoint).
- -Set the DMAEN bit (bit 12) to 1 if a DMA request is required for this endpoint
- -The FRCDATATOG bit (bit 11) is ignored for isochronous transactions.
- -Set the DMAMODE bit (bit 10) to 1 when DMA is enabled. For more details in using DMA, consult CPPI DMA section within this document.

## 16.2.8.2.4.2.2 Isochronous OUT Transfer Operation: Host Mode

The operation starts when the software writes to the FIFO and sets TXPKTRDY bit of HOST\_TXCSR (bit 0). This triggers the controller to send an OUT token followed by the first data packet from the FIFO.

<!-- image -->

An interrupt is generated whenever a packet is sent and the software may use this interrupt to load the next packet into the FIFO and set the TXPKTRDY bit in the HOST\_TXCSR register (bit 0) in the same way as for a Bulk Tx endpoint. As the interrupt could occur almost any time within a frame, depending on when the host has scheduled the transaction, this may result in irregular timing of FIFO load requests. If the data source for the endpoint is coming from some external hardware, it may be more convenient to wait until the end of each frame before loading the FIFO as this will minimize the requirement for additional buffering. This can be done by using the SOF\_PULSE signal from the controller to trigger the loading of the next data packet. The SOF\_PULSE is generated once per frame(/microframe). The interrupts may still be used to set the TXPKTRDY bit in HOST\_TXCSR.

## 16.2.8.2.4.3 High Bandwidth Isochronous Transactions: Host Mode

Place Holder: Details to be populated.