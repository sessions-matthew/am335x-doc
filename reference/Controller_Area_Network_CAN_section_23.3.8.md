## 23.3.8 CAN Operation

After hardware reset, the Init bit in the CAN control register (CTL) is set and all CAN protocol functions are disabled. The CAN module must be initialized before operating it. Figure 23-3 illustrates the basic initialization flow for the CAN module.

## 23.3.8.1 CAN Module Initialization

A general CAN module initialization would mean the following two critical steps:

- Configuration of the CAN bit timing
- Configuration of message objects

To initialize the CAN controller, the CPU has to set up the CAN bit timing and those message objects that have to be used for CAN communication. Message objects that are not needed, can be deactivated.

Figure 23-3. CAN Module General Initialization Flow

<!-- image -->

## 23.3.8.1.1 Configuration of CAN Bit Timing

The CAN module must be in initialization mode to configure the CAN bit timing.

For CAN bit timing software configuration flow, see Figure 23-4.

Step 1: Enter initialization mode by setting the Init (Initialization) bit in the CAN control register.

While the Init bit is set, the message transfer from and to the CAN bus is stopped, and the status of the CAN\_TX output is recessive (high).

The CAN error counters are not updated. Setting the Init bit does not change any other configuration register.

Also, note that the CAN module is in initialization mode on hardware reset and during Bus-Off.

<!-- image -->

<!-- image -->

www.ti.com

Figure 23-4. CAN Bit-Timing Configuration

<!-- image -->

Step 2: Set the Configure Change Enable (CCE) bit in the CAN control register.

The access to the Bit Timing register (BTR) for the configuration of the bit timing is enabled when both the Init and CCE bits in the CAN Control register are set.

Step 3: Wait for the Init bit to get set. This would make sure that the module has entered Initialization mode .

Step 4: Write the bit timing values into the bit timing register. See Section 23.3.16.2 for the BTR value calculation for a given bit timing.

Step 5: Clear the CCE and Init bit.

Step 6: Wait for the Init bit to clear. This would ensure that the module has come out of initialization mode .

Following these steps, the module comes to operation by synchronizing itself to the CAN bus, provided the BTR is configured as per the CAN bus baud rate, although the message objects have to be configured before carrying out any communication.

NOTE:

The module will not come out of the initialization mode if any incorrect BTR values are written in step 4.

NOTE:

The required message objects should be configured as transmit or receive objects before the start of data transfer as explained in Section 23.3.8.1.

## 23.3.8.1.2 Configuration of Message Objects

The message objects can be configured only through the interface registers; the CPU does not have direct access to the message object (message RAM) . Familiarize yourself with the interface register set (IFx) usage (see Section 23.3.17) and the message object structure (see Section 23.3.18) before configuring the message objects.

For more information regarding the procedure to configure the message objects, see Section 23.3.14. All the message objects should be configured to particular identifiers or set to not valid before the message transfer is started. It is possible to change the configuration of message objects during normal operation (that is between data transfers).

NOTE:

The message objects initialization is independent of the bit-timing configuration.

## 23.3.8.1.3 DCAN RAM Hardware Initialization

The memory hardware initialization for the DCAN module is enabled in the device control register (DCAN\_RAMINIT) which initializes the RAM with zeros and sets parity bits accordingly. Wait for the RAMINIT\_DONE bit to be set to ensure successful RAM initialization. Ensure the clock to the DCAN module is enabled before starting this initialization.

For more details on RAM hardware initialization, see Chapter 9, Control Module .

## 23.3.8.2 CAN Message Transfer (Normal Operation)

Once the DCAN is initialized and the Init bit is reset to zero, the CAN core synchronizes itself to the CAN bus and is ready for message transfer as per the configured message objects.

The CPU may enable the interrupt lines (setting IE0 and IE1 to '1') at the same time when it clears Init and CCE. The status interrupts EIE and SIE may be enabled simultaneously.

The CAN communication can be carried out in any of the following two modes: interrupt and polling.

The interrupt register points to those message objects with IntPnd = '1'. It is updated even if the interrupt lines to the CPU are disabled (IE0/IE1 are zero).

The CPU may poll all MessageObject's NewDat and TxRqst bits in parallel from the NewData X registers and the Transmission Request X Registers (TXRQ X). Polling can be made easier if all transmit objects are grouped at the low numbers and all receive objects are grouped at the high numbers.

Received messages are stored into their appropriate message objects if they pass acceptance filtering.

The whole message (including all arbitration bits, DLC and up to eight data bytes) is stored into the message object. As a consequence (e.g., when the identifier mask is used), the arbitration bits which are masked to 'don't care' may change in the message object when a received message is stored.

The CPU may read or write each message at any time via the interface registers, as the message handler guarantees data consistency in case of concurrent accesses.

If a permanent message object (arbitration and control bits set up during configuration and leaving unchanged for multiple CAN transfers) exists for the message, it is possible to only update the data bytes.

If several transmit messages should be assigned to one message object, the whole message object has to be configured before the transmission of this message is requested.

The transmission of multiple message objects may be requested at the same time. They are subsequently transmitted, according to their internal priority.

Messages may be updated or set to not valid at any time, even if a requested transmission is still pending. However, the data bytes will be discarded if a message is updated before a pending transmission has started.

Depending on the configuration of the message object, a transmission may be automatically requested by the reception of a remote frame with a matching identifier.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 23.3.8.2.1 Automatic Retransmission

According to the CAN Specification (ISO11898), the DCAN provides a mechanism to automatically retransmit frames which have lost arbitration or have been disturbed by errors during transmission. The frame transmission service will not be confirmed to the user before the transmission is successfully completed.

By default, this automatic retransmission is enabled. It can be disabled by setting the disable automatic retransmission (DAR) bit in the CTL register. Further details to this mode are provided in Section 23.3.15.3.

## 23.3.8.2.2 Auto-Bus-On

By default, after the DCAN has entered Bus-Off state, the CPU can start a Bus-Off-Recovery sequence by resetting the Init bit. If this is not done, the module will stay in Bus-Off state.

The DCAN provides an automatic Auto-Bus-On feature which is enabled by bit ABO in the CTL register. If set, the DCAN module will automatically start the Bus-Off-Recovery sequence. The sequence can be delayed by a user-defined number of L3\_SLOW\_GCLK cycles which can be defined in the Auto-Bus-On Time register (ABOTR).

NOTE:

If the DCAN goes to Bus-Off state due to a massive occurrence of CAN bus errors, it stops all bus activities and automatically sets the Init bit. Once the Init bit has been reset by the CPU or due to the Auto-Bus-On feature, the device will wait for 129 occurrences of bus Idle (equal to 129 * 11 consecutive recessive bits) before resuming normal operation. At the end of the Bus-Off recovery sequence, the error counters will be reset.

## 23.3.8.3 Test Modes

The DCAN module provides several test modes which are mainly intended for production tests or self test.

For all test modes, the Test bit in the CTL register needs to be set to one. This enables write access to the test register (TEST).

## 23.3.8.3.1 Silent Mode

The silent mode may be used to analyze the traffic on the CAN bus without affecting it by sending dominant bits (e.g., acknowledge bit, overload flag, active error flag). The DCAN is still able to receive valid data frames and valid remote frames, but it will not send any dominant bits. However, these are internally routed to the CAN core.

Figure 23-5 shows the connection of signals CAN\_TX and CAN\_RX to the CAN core in silent mode. Silent mode can be activated by setting the Silent bit in the TEST register to one. In ISO 11898-1, the silent mode is called the bus monitoring mode.

Figure 23-5. CAN Core in Silent Mode

<!-- image -->

## 23.3.8.3.2 Loopback Mode

The loopback mode is mainly intended for hardware self-test functions. In this mode, the CAN core uses internal feedback from Tx output to Rx input. Transmitted messages are treated as received messages, and can be stored into message objects if they pass acceptance filtering. The actual value of the CAN\_RX input pin is disregarded by the CAN core. Transmitted messages can still be monitored at the CAN\_TX pin.

In order to be independent from external stimulation, the CAN core ignores acknowledge sampled in the acknowledge slot of a data/remote frame.

Figure 23-6 shows the connection of signals CAN\_TX and CAN\_RX to the CAN core in loopback mode.

Loopback mode can be activated by setting bit LBack in the TEST register to one.

NOTE:

In loopback mode, the signal path from CAN core to Tx pin, the Tx pin itself, and the signal path from Tx pin back to CAN core are disregarded. For including these into the testing, see Section 23.3.8.3.3.

Figure 23-6. CAN Core in Loopback Mode

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 23.3.8.3.3 External Loopback Mode

The external loopback mode is similar to the loopback mode; however, it includes the signal path from CAN core to Tx pin, the Tx pin itself, and the signal path from Tx pin back to CAN core. When external loopback mode is selected, the input of the CAN core is connected to the input buffer of the Tx pin.

With this configuration, the Tx pin IO circuit can be tested.

External loopback mode can be activated by setting bit EXL in the TEST register to one.

Figure 23-7 shows the connection of signals CAN\_TX and CAN\_RX to the CAN core in external loopback mode.

NOTE:

When loopback mode is active (LBack bit set), the ExL bit will be ignored.

Figure 23-7. CAN Core in External Loopback Mode

<!-- image -->

## 23.3.8.3.4 Loopback Mode Combined With Silent Mode

It is also possible to combine loopback mode and silent mode by setting bits LBack and Silent at the same time. This mode can be used for a 'Hot Selftest,' that is, the DCAN hardware can be tested without affecting the CAN network. In this mode, the CAN\_RX pin is disconnected from the CAN core and no dominant bits will be sent on the CAN\_TX pin.

Figure 23-8 shows the connection of the signals CAN\_TX and CAN\_RX to the CAN core in case of the combination of loopback mode with silent mode.