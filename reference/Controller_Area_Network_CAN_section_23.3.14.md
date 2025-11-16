## 23.3.13 Debug/Suspend Mode

The module supports the usage of an external debug unit by providing functions like pausing DCAN activities and making message RAM content accessible via OCP interface.

Before entering debug/suspend mode, the circuit will either wait until a started transmission or reception will be finished and bus idle state is recognized, or immediately interrupt a current transmission or reception. This is depending on bit IDS in the CTL register.

Afterwards, the DCAN enters debug/suspend mode, indicated by InitDbg flag in the CTL register.

During debug/suspend mode, all DCAN registers can be accessed. Reading reserved bits will return '0'. Writing to reserved bits will have no effect.

Also, the message RAM will be memory mapped. This allows the external debug unit to read the message RAM. For the memory organization, see Section 23.3.18.3).

NOTE:

During debug/suspend mode, the message RAM cannot be accessed via the IFx register sets.

Writing to control registers in debug/suspend mode may influence the CAN state machine and further message handling.

For debug support, the auto clear functionality of the following DCAN registers is disabled:

- ES register (clear of status flags by read)
- IF1CMD and IF2CMD (clear of DMAActive flag by read/write)

## 23.3.14 Configuration of Message Objects

The whole message RAM should be configured before the end of the initialization, however it is also possible to change the configuration of message objects during CAN communication.

The CAN software driver library should offer subroutines that:

- Transfer a complete message structure into a message object. (Configuration)
- Transfer the data bytes of a message into a message object and set TxRqst and NewDat. (Start a new transmission)
- Get the data bytes of a message from a message object and clear NewDat (and IntPnd). (Read received data)
- Get the complete message from a message object and clear NewDat (and IntPnd). (Read a received message, including identifier, from a message object with UMask = '1')

Parameters of the subroutines are the Message Number and a pointer to a complete message structure or to the data bytes of a message structure.

Two examples of assigning the IFx interface register sets to these subroutines are shown here:

In the first method, the tasks of the application program that may access the module are divided into two groups. Each group is restricted to the use of one of the interface register sets. The tasks of one group may interrupt tasks of the other group, but not of the same group.

In the second method, which may be a special case of the first method, there are only two tasks in the application program that access the module. A Read\_Message task that uses IF2 or IF3 to get received messages from the message RAM and a Write\_Message task that uses IF1 to write messages to be transmitted (or to be configured) into the message RAM. Both tasks may interrupt each other.

<!-- image -->

<!-- image -->

www.ti.com

## 23.3.14.1 Configuration of a Transmit Object for Data Frames

Table 23-4 shows how a transmit object can be initialized.

## Table 23-4. Initialization of a Transmit Object

|   MsgVal | Arb   | Data   | Mask   |   EoB |   Dir |   NewDat |   MsgLst |   RxIE | TxIE   |   IntPnd | RmtEn   |   TxRqst |
|----------|-------|--------|--------|-------|-------|----------|----------|--------|--------|----------|---------|----------|
|        1 | appl. | appl.  | appl.  |     1 |     1 |        0 |        0 |      0 | appl.  |        0 | appl.   |        0 |

The arbitration bits (ID[28:0] and Xtd bit) are given by the application. They define the identifier and type of the outgoing message. If an 11-bit identifier (standard frame) is used (Xtd = '0'), it is programmed to ID[28:18]. In this case, ID[17:0] can be ignored.

The data registers (DLC[3:0] and Data0-7) are given by the application. TxRqst and RmtEn should not be set before the data is valid.

If the TxIE bit is set, the IntPnd bit will be set after a successful transmission of the message object.

If the RmtEn bit is set, a matching received remote frame will cause the TxRqst bit to be set; the remote frame will autonomously be answered by a data frame.

The mask bits (Msk[28:0], UMask, MXtd, and MDir bits) may be used (UMask='1') to allow groups of remote frames with similar identifiers to set the TxRqst bit. The Dir bit should not be masked. For details, see Section 23.3.15.8. Identifier masking must be disabled (UMask = '0') if no remote frames are allowed to set the TxRqst bit (RmtEn = '0').

## 23.3.14.2 Configuration of a Transmit Object for Remote Frames

It is not necessary to configure transmit objects for the transmission of remote frames. Setting TxRqst for a receive object causes the transmission of a remote frame with the same identifier as the data frame for which this receive object is configured.

## 23.3.14.3 Configuration of a Single Receive Object for Data Frames

Table 23-5 shows how a receive object for data frames can be initialized.

## Table 23-5. Initialization of a single Receive Object for Data Frames

|   MsgVal | Arb   | Data   | Mask   |   EoB |   Dir |   NewDat |   MsgLst | RxIE   |   TxIE |   IntPnd |   RmtEn |   TxRqst |
|----------|-------|--------|--------|-------|-------|----------|----------|--------|--------|----------|---------|----------|
|        1 | appl. | appl.  | appl.  |     1 |     0 |        0 |        0 | appl.  |      0 |        0 |       0 |        0 |

The arbitration bits (ID[28:0] and Xtd bit) are given by the application. They define the identifier and type of accepted received messages. If an 11-bit Identifier (standard frame) is used (Xtd = '0'), it is programmed to ID[28:18]. In this case, ID[17:0] can be ignored. When a data frame with an 11-bit Identifier is received, ID[17:0] is set to '0'.

The data length code (DLC[3:0]) is given by the application. When the message handler stores a data frame in the message object, it will store the received data length code and eight data bytes. If the data length code is less than 8, the remaining bytes of the message object may be overwritten by non specified values.

The mask bits (Msk[28:0], UMask, MXtd, and MDir bits) may be used (UMask = '1') to allow groups of data frames with similar identifiers to be accepted. The Dir bit should not be masked in typical applications. If some bits of the mask bits are set to 'don't care,' the corresponding bits of the arbitration register will be overwritten by the bits of the stored data frame.

If the RxIE bit is set, the IntPnd bit will be set when a received data frame is accepted and stored in the message object.

If the TxRqst bit is set, the transmission of a remote frame with the same identifier as actually stored in the arbitration bits will be triggered. The content of the arbitration bits may change if the mask bits are used (UMask = '1') for acceptance filtering.

## 23.3.14.4 Configuration of a Single Receive Object for Remote Frames

Table 23-6 shows how a receive object for remote frames can be initialized.

## Table 23-6. Initialization of a Single Receive Object for Remote Frames

|   MsgVal | Arb   | Data   | Mask   |   EoB |   Dir |   NewDat |   MsgLst | RxIE   |   TxIE |   IntPnd |   RmtEn |   TxRqst |
|----------|-------|--------|--------|-------|-------|----------|----------|--------|--------|----------|---------|----------|
|        1 | appl. | appl.  | appl.  |     1 |     1 |        0 |        0 | appl.  |      0 |        0 |       0 |        0 |

A receive object for remote frames may be used to monitor remote frames on the CAN bus. The remote frame stored in the receive object will not trigger the transmission of a data frame. Receive objects for remote frames may be expanded to a FIFO buffer (see Section 23.3.14.5).

UMask must be set to '1.' The mask bits (Msk[28:0], UMask, MXtd, and MDir bits) may be set to 'mustmatch' or to 'don't care,' to allow groups of remote frames with similar identifiers to be accepted. The Dir bit should not be masked in typical applications. For details, see Section 23.3.15.8.

The arbitration bits (ID[28:0] and Xtd bit) may be given by the application. They define the identifier and type of accepted received remote frames. If some bits of the mask bits are set to 'don't care,' the corresponding bits of the arbitration bits will be overwritten by the bits of the stored remote frame. If an 11bit Identifier (standard frame) is used (Xtd = '0'), it is programmed to ID[28:18]. In this case, ID[17:0] can be ignored. When a remote frame with an 11-bit Identifier is received, ID[17:0] will be set to '0.'

The data length code (DLC[3:0]) may be given by the application. When the message handler stores a remote frame in the message object, it will store the received data length code. The data bytes of the message object will remain unchanged.

If the RxIE bit is set, the IntPnd bit will be set when a received remote frame is accepted and stored in the message object.

## 23.3.14.5 Configuration of a FIFO Buffer

With the exception of the EoB bit, the configuration of receive objects belonging to a FIFO buffer is the same as the configuration of a single receive object.

To concatenate multiple message objects to a FIFO buffer, the identifiers and masks (if used) of these message objects have to be programmed to matching values. Due to the implicit priority of the message objects, the message object with the lowest number will be the first message object of the FIFO buffer. The EoB bit of all message objects of a FIFO buffer except the last one have to be programmed to zero. The EoB bits of the last message object of a FIFO Buffer is set to one, configuring it as the end of the block.

<!-- image -->