## 23.3.18 Message RAM

The DCAN message RAM contains message objects and parity bits for the message objects. There are up to 64 message objects in the message RAM.

During normal operation, accesses to the message RAM are performed via the interface register sets, and the CPU cannot directly access the message RAM.

The interface register sets IF1 and IF2 provide indirect read/write access from the CPU to the message RAM. The IF1 and IF2 register sets can buffer control and user data to be transferred to and from the message objects.

The third interface register set IF3 can be configured to automatically receive control and user data from the message RAM when a message object has been updated after reception of a CAN message. The CPU does not need to initiate the transfer from message RAM to IF3 register set.

The message handler avoids potential conflicts between concurrent accesses to message RAM and CAN frame reception/transmission.

There are two modes where the message RAM can be directly accessed by the CPU:

- Debug/Suspend mode (see Section 23.3.18.3)
- RAM Direct Access (RDA) mode (see Section 23.3.18.4)

<!-- image -->

<!-- image -->

www.ti.com

## 23.3.18.1 Structure of Message Objects

Table 23-8 shows the structure of a message object.

The grayed fields are those parts of the message object which are represented in dedicated registers. For example, the transmit request flags of all message objects are represented in centralized transmit request registers.

## Table 23-8. Structure of a Message Object

| Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   | Message Object   |
|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|------------------|
| UMask            | Msk[28: 0]       | MXtd             | MDi r            | EoB              | unused           | NewDat           | MsgLst           | RxIE             | TxIE             | IntPnd           | RmtEn            | TxRqst           |
| MsgVal           | ID[28:0]         | Xtd              | Dir              | DLC[3:0]         | Data 0           | Data 1           | Data 2           | Data 3           | Data 4           | Data 5           | Data 6           | Data 7           |

## Table 23-9. Field Descriptions

| Name      | Value              | Description                                                                                                                                                                                                                                                                                                                                                                                                               |
|-----------|--------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| MsgVal    | 0 1                | Message valid The message object is ignored by the message handler. The message object is to be used by the message handler. Note: This bit may be kept at level '1' even when the identifier bits ID[28:0], the control bits Xtd, Dir, or the data length code are changed. It should be reset if the Messages Object is no longer required.                                                                             |
| UMask     | 0 1                | Use acceptance mask Mask bits (Msk[28:0], MXtd and MDir) are ignored and not used for acceptance filtering. Mask bits are used for acceptance filtering. Note: If the UMask bit is set to one, the message object's mask bits have to be programmed during initialization of the message object before MsgVal is set to one.                                                                                              |
| ID[28:0]  | ID[28:0] ID[28:18] | Message identifier 29-bit ('extended') identifier bits 11-bit ('standard') identifier bits                                                                                                                                                                                                                                                                                                                                |
| Msk[28:0] | 0 1                | Identifier mask The corresponding bit in the message identifier is not used for acceptance filtering (don't care). The corresponding bit in the message identifier is used for acceptance filtering.                                                                                                                                                                                                                      |
| Xtd       | 0 1                | Mask extended identifier The extended identifier bit (IDE) has no effect on the acceptance filtering. The extended identifier bit (IDE) is used for acceptance filtering. Note: When 11-bit ('standard') Identifiers are used for a message object, the identifiers of received data frames are written into bits ID[28:18]. For acceptance filtering, only these bits together with mask bits Msk[28:18] are considered. |
| Dir       | 0 1                | Message direction Direction = receive: On TxRqst, a remote frame with the identifier of this message object is transmitted. On reception of a data frame with matching identifier, the message is stored in this message object. Direction = transmit: On TxRqst, a data frame is transmitted. On reception of a remote frame with matching identifier, the TxRqst bit of this message object is set (if RmtEn = one).    |
| MDir      | 0 1                | Mask message direction The message direction bit (Dir) has no effect on the acceptance filtering. The message direction bit (Dir) is used for acceptance filtering.                                                                                                                                                                                                                                                       |
| EOB       | 0 1                | End of block The message object is part of a FIFO Buffer block and is not the last message object of this FIFO Buffer block. The message object is a single message object or the last message object in a FIFO Buffer Block. Note: This bit is used to concatenate multiple message objects to build a FIFO Buffer. For single message objects (not belonging to a FIFO Buffer), this bit must always be set to one.     |

Table 23-9. Field Descriptions (continued)

| Name     | Value   | Description                                                                                                                                                                                                                                                                                                                                                                 |
|----------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| NewDat   |         | New data                                                                                                                                                                                                                                                                                                                                                                    |
|          | 0       | No new data has been written into the data bytes of this message object by the message handler since the last time when this flag was cleared by the CPU.                                                                                                                                                                                                                   |
|          | 1       | The message handler or the CPU has written new data into the data bytes of this message object.                                                                                                                                                                                                                                                                             |
| MsgLst   |         | Message lost (only valid for message objects with direction = receive)                                                                                                                                                                                                                                                                                                      |
|          | 0       | No message was lost since the last time when this bit was reset by the CPU.                                                                                                                                                                                                                                                                                                 |
|          | 1       | The message handler stored a new message into this message object when NewDat was still set, so the previous message has been overwritten.                                                                                                                                                                                                                                  |
| RxIE     |         | Receive interrupt enable                                                                                                                                                                                                                                                                                                                                                    |
|          | 0       | IntPnd will not be triggered after the successful reception of a frame.                                                                                                                                                                                                                                                                                                     |
|          |         | IntPnd will be triggered after the successful reception of a frame.                                                                                                                                                                                                                                                                                                         |
|          | 1       |                                                                                                                                                                                                                                                                                                                                                                             |
| TxIE     |         | Transmit interrupt enable                                                                                                                                                                                                                                                                                                                                                   |
|          | 0       | IntPnd will not be triggered after the successful transmission of a frame.                                                                                                                                                                                                                                                                                                  |
|          | 1       | IntPnd will be triggered after the successful transmission of a frame.                                                                                                                                                                                                                                                                                                      |
| IntPnd   |         | Interrupt pending                                                                                                                                                                                                                                                                                                                                                           |
|          | 0       | This message object is not the source of an interrupt.                                                                                                                                                                                                                                                                                                                      |
|          | 1       | message object is the source of an interrupt. The interrupt Identifier in the interrupt register will point                                                                                                                                                                                                                                                                 |
|          |         | This to this message object if there is no other interrupt source with higher priority.                                                                                                                                                                                                                                                                                     |
| RmtEn    |         | Remote enable                                                                                                                                                                                                                                                                                                                                                               |
|          | 0       | At the reception of a remote frame, TxRqst is not changed.                                                                                                                                                                                                                                                                                                                  |
|          | 1       | At the reception of a remote frame, TxRqst is set.                                                                                                                                                                                                                                                                                                                          |
| TxRqst   |         | Transmit request                                                                                                                                                                                                                                                                                                                                                            |
|          | 0       | This message object is not waiting for a transmission.                                                                                                                                                                                                                                                                                                                      |
|          | 1       | The transmission of this message object is requested and is not yet done.                                                                                                                                                                                                                                                                                                   |
| DLC[3:0] |         | Data length code                                                                                                                                                                                                                                                                                                                                                            |
|          | 0       | Data frame has 0 to 8 data bytes.                                                                                                                                                                                                                                                                                                                                           |
|          |         | Data frame has 8 data bytes.                                                                                                                                                                                                                                                                                                                                                |
|          | 1       | Note: The data length code of a message object must be defined to the same value as in the                                                                                                                                                                                                                                                                                  |
|          |         | corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message.                                                                                                                                                                                              |
| Data 0   |         | 1st data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
| Data 1   |         | 2nd data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
| Data 3   |         | 4th data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
| Data 4   |         | 5th data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
| Data 5   |         | 6th data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
| Data 6   |         | 7th data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
| Data 7   |         | 8th data byte of a CAN data frame                                                                                                                                                                                                                                                                                                                                           |
|          |         | Note: Byte Data 0 is the first data byte shifted into the shift register of the CAN core during a reception, byte Data 7 is the last. When the message handler stores a data frame, it will write all the eight data bytes into a message object. If the data length code is less than 8, the remaining bytes of the message object may be overwritten by undefined values. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.3.18.2 Addressing Message Objects in RAM

The starting location of a particular message object in RAM is: Message RAM base address + (message object number) * 0x20

This means that message object 1 starts at offset 0x0020; message object 2 starts at offset 0x0040, etc.

'0' is not a valid message object number.

The base address for DCAN0 RAM is 0x481C\_D000 and DCAN1 RAM is 0x481D\_1000.

Message object number 1 has the highest priority.

Table 23-10. Message RAM addressing in Debug/Suspend and RDA Mode

| Message Object Number               | Offset From Base Address   | Word Number   | Debug/Suspend Mode, see Section 23.3.18.3   | RDA mode, see Section 23.3.18.4   |
|-------------------------------------|----------------------------|---------------|---------------------------------------------|-----------------------------------|
| 1                                   | 0x0020                     | 1             | Parity                                      | Data Bytes 4-7                    |
| 1                                   | 0x0024                     | 2             | MXtd,MDir,Mask                              | Data Bytes 0-3                    |
| 1                                   | 0x0028                     | 3             | Xtd,Dir,ID                                  | ID[27:0],DLC                      |
| 1                                   | 0x002C                     | 4             | Ctrl                                        | Mask,Xtd,Dir,ID[28]               |
| 1                                   | 0x0030                     | 5             | Data Bytes 3-0                              | Parity,Ctrl,MXtd,MDir             |
| 1                                   | 0x0034                     | 6             | Data Bytes 7-4                              | …                                 |
| …                                   | …                          | …             | …                                           | …                                 |
| 31                                  | 0x03E0                     | 1             | Parity                                      | Data Bytes 4-7                    |
| 31                                  | 0x03E4                     | 2             | MXtd,MDir,Mask                              | Data Bytes 0-3                    |
| 31                                  | 0x03E8                     | 3             | Xtd,Dir,ID                                  | ID[27:0],DLC                      |
| 31                                  | 0x03EC                     | 4             | Ctrl                                        | Mask,Xtd,Dir,ID[28]               |
| 31                                  | 0x03F0                     | 5             | Data Bytes 3-0                              | Parity,Ctrl,MXtd,MDir             |
| 31                                  | 0x03F4                     | 6             | Data Bytes 7-4                              | …                                 |
| …                                   | …                          | …             | …                                           | …                                 |
| 63                                  | 0x07E0                     | 1             | Parity                                      | Data Bytes 4-7                    |
| 63                                  | 0x07E4                     | 2             | MXtd,MDir,Mask                              | Data Bytes 0-3                    |
| 63                                  | 0x07E8                     | 3             | Xtd,Dir,ID                                  | ID[27:0],DLC                      |
| 63                                  | 0x07EC                     | 4             | Ctrl                                        | Mask,Xtd,Dir,ID[28]               |
| 63                                  | 0x07F0                     | 5             | Data Bytes 3-0                              | Parity,Ctrl,MXtd,MDir             |
| 63                                  | 0x07F4                     | 6             | Data Bytes 7-4                              | …                                 |
| last implemented ( 32(DCAN3) or 64) | 0x0000                     | 1             | Parity                                      | Data Bytes 4-7                    |
| last implemented ( 32(DCAN3) or 64) | 0x0004                     | 2             | MXtd,MDir,Mask                              | Data Bytes 0-3                    |
| last implemented ( 32(DCAN3) or 64) | 0x0008                     | 3             | Xtd,Dir,ID                                  | ID[27:0],DLC                      |
| last implemented ( 32(DCAN3) or 64) | 0x000C                     | 4             | Ctrl                                        | Mask,Xtd,Dir,ID[28]               |
| last implemented ( 32(DCAN3) or 64) | 0x0010                     | 5             | Data Bytes 3-0                              | Parity,Ctrl,MXtd,MDir             |
| last implemented ( 32(DCAN3) or 64) | 0x0014                     | 6             | Data Bytes 7-4                              | …                                 |

## 23.3.18.3 Message RAM Representation in Debug/Suspend Mode

In debug/suspend mode, the message RAM will be memory mapped. This allows the external debug unit to access the message RAM.

NOTE:

During debug/suspend mode, the message RAM cannot be accessed via the IFx register sets.

Table 23-11. Message RAM Representation in Debug/Suspend Mode

| Bit #          | 31/ 15        | 30/ 14        | 29/ 13        | 29/ 12        | 27/ 11        | 26/ 10        | 25/ 9         | 24/ 8         | 23/ 7         | 22/ 6         | 21/ 5         | 20/ 4         | 19/ 3         | 18/ 2         | 17/ 1         | 16/ 0         |
|----------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
|                | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| MsgAddr + 0x00 | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Parity[4:0]   | Parity[4:0]   | Parity[4:0]   | Parity[4:0]   | Parity[4:0]   |
| MsgAddr + 0x04 | MXt d         | MDir          | Rsvd          | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    | Msk[28:16]    |
| MsgAddr + 0x04 | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     | Msk[15:0]     |
| MsgAddr + 0x0C | Rsv d         | Xtd           | Dir           | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     | ID[28:16]     |
| MsgAddr + 0x0C | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      | ID[15:0]      |
| MsgAddr + 0x0C | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      | Reserved      |
| MsgAddr + 0x0C | Rsv d         | Msg Lst       | Rsvd          | UMas k        | TxIE          | RxTE          | RmtE n        | Rsv d         | EOB           | Reserved      | Reserved      | Reserved      | DLC[3:0]      | DLC[3:0]      | DLC[3:0]      | DLC[3:0]      |
| MsgAddr + 0x10 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 | Data 3 Data 2 |
| MsgAddr + 0x10 | Data 1        | Data 1        | Data 1        | Data 1        | Data 1        | Data 1        | Data 1        | Data 1        | Data 0        | Data 0        | Data 0        | Data 0        | Data 0        | Data 0        | Data 0        | Data 0        |
| MsgAddr + 0x14 | Data 7        | Data 7        | Data 7        | Data 7        | Data 7        | Data 7        | Data 7        | Data 7        | Data 6        | Data 6        | Data 6        | Data 6        | Data 6        | Data 6        | Data 6        | Data 6        |
| MsgAddr + 0x14 | Data 5        | Data 5        | Data 5        | Data 5        | Data 5        | Data 5        | Data 5        | Data 5        | Data 4        | Data 4        | Data 4        | Data 4        | Data 4        | Data 4        | Data 4        | Data 4        |

## 23.3.18.4 Message RAM Representation in Direct Access Mode

When the RDA bit in the TEST register is set while the DCAN module is in test mode (test bit in the CTL register is set), the CPU has direct access to the message RAM. Due to the 32-bit bus structure, the RAM is split into word lines to support this feature. The CPU has access to one word line at a time only.

In RAM direct access mode, the RAM is represented by a continuous memory space within the address frame of the DCAN module, starting at the message RAM base address.

Note: During direct access mode, the message RAM cannot be accessed via the IFx register sets.

Any read or write to the RAM addresses for RamDirectAccess during normal operation mode (TestMode bit or RDA bit not set) will be ignored.

Table 23-12. Message RAM Representation in RAM Direct Access Mode

| Bit #          | 31/ 15            | 30/ 14            | 29/ 13            | 29/ 12            | 27/ 11            | 26/ 10            | 25/ 9             | 24/ 8             | 23/ 7             | 22/ 6             | 21/ 5             | 20/ 4             | 19/ 3             | 18/ 2             | 17/ 1             | 16/ 0             |
|----------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| MsgAddr + 0x00 | Data 4            | Data 4            | Data 4            | Data 4            | Data 4            | Data 4            | Data 4            | Data 4            | Data 5            | Data 5            | Data 5            | Data 5            | Data 5            | Data 5            | Data 5            | Data 5            |
| MsgAddr + 0x00 | Data 6            | Data 6            | Data 6            | Data 6            | Data 6            | Data 6            | Data 6            | Data 6            | Data 7            | Data 7            | Data 7            | Data 7            | Data 7            | Data 7            | Data 7            | Data 7            |
| MsgAddr + 0x04 | 0                 | 0                 | 0                 | 0                 | 0                 | 0                 | 0                 | 0                 | Data 1            | Data 1            | Data 1            | Data 1            | Data 1            | Data 1            | Data 1            | Data 1            |
| MsgAddr + 0x04 | Data 2            | Data 2            | Data 2            | Data 2            | Data 2            | Data 2            | Data 2            | Data 2            | Data 3            | Data 3            | Data 3            | Data 3            | Data 3            | Data 3            | Data 3            | Data 3            |
| MsgAddr + 0x08 | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         | ID[27:12]         |
| MsgAddr + 0x08 | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] | ID[11:0] DLC[3:0] |
|                | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        | Msk[28:13]        |

SPRUH73Q-October 2011-Revised December 2019

<!-- image -->