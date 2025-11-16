<!-- image -->

www.ti.com

## 11.3.2.2 AB-Synchronized Transfers

In a AB-synchronized transfer, each EDMA3 sync event initiates the transfer of 2 dimensions or one frame. In other words, each event/TR packet conveys information for one entire frame of BCNT arrays of ACNT bytes. Thus, CCNT events are needed to completely service a PaRAM set.

Arrays are always separated by SRCBIDX and DSTBIDX as shown in Figure 11-6. Frames are always separated by SRCCIDX and DSTCIDX.

Note that for AB-synchronized transfers, after a TR for the frame is submitted, the address update is to add SRCCIDX/DSTCIDX to the beginning address of the beginning array in the frame. This is different from A-synchronized transfers where the address is updated by adding SRCCIDX/DSTCIDX to the start address of the last array in the frame. See Section 11.3.3.6 for details on parameter set updates.

Figure 11-6 shows an AB-synchronized transfer of 3 (CCNT) frames of 4 (BCNT) arrays of n (ACNT) bytes. In this example, a total of 3 sync events (CCNT) exhaust a PaRAM set; that is, a total of 3 transfers of 4 arrays each completes the transfer.

Figure 11-6. AB-Synchronized Transfers (ACNT = n, BCNT = 4, CCNT = 3)

<!-- image -->

ABC-synchronized transfers are not directly supported. But can be logically achieved by chaining between multiple AB-synchronized transfers.

NOTE:

## 11.3.3 Parameter RAM (PaRAM)

The EDMA3 controller is a RAM-based architecture. The transfer context (source/destination addresses, count, indexes, etc.) for DMA or QDMA channels is programmed in a parameter RAM table within EDMA3CC, referred to as PaRAM. The PaRAM table is segmented into multiple PaRAM sets. Each PaRAM set includes eight four-byte PaRAM set entries (32-bytes total per PaRAM set), which includes typical DMA transfer parameters such as source address, destination address, transfer counts, indexes, options, etc.

The PaRAM structure supports flexible ping-pong, circular buffering, channel chaining, and auto-reloading (linking).

The contents of the PaRAM include the following:

- 256 PaRAM sets
- 64 channels that are direct mapped and can be used as link or QDMA sets if not used for DMA channels
- 64 channels remain for link or QDMA sets

<!-- image -->

By default, all channels map to PaRAM set to 0. These should be remapped before use. For more information, see (DCHMAP registers) and (QCHMAP registers).

Table 11-5. EDMA3 Parameter RAM Contents

| PaRAM Set Number   | Address                                                | Parameters    |
|--------------------|--------------------------------------------------------|---------------|
| 0                  | EDMA Base Address + 4000h to EDMA Base Address + 401Fh | PaRAM set 0   |
| 1                  | EDMA Base Address + 4020h to EDMA Base Address + 403Fh | PaRAM set 1   |
| 2                  | EDMA Base Address + 4040h to EDMA Base Address + 405Fh | PaRAM set 2   |
| 3                  | EDMA Base Address + 4060h to EDMA Base Address + 407Fh | PaRAM set 3   |
| 4                  | EDMA Base Address + 4080h to EDMA Base Address + 409Fh | PaRAM set 4   |
| 5                  | EDMA Base Address + 40A0h to EDMA Base Address + 40BFh | PaRAM set 5   |
| 6                  | EDMA Base Address + 40C0h to EDMA Base Address + 40DFh | PaRAM set 6   |
| 7                  | EDMA Base Address + 40E0h to EDMA Base Address + 40FFh | PaRAM set 7   |
| 8                  | EDMA Base Address + 4100h to EDMA Base Address + 411Fh | PaRAM set 8   |
| 9                  | EDMA Base Address + 4120h to EDMA Base Address + 413Fh | PaRAM set 9   |
| ...                | ...                                                    | ...           |
| 63                 | EDMA Base Address + 47E0h to EDMA Base Address + 47FFh | PaRAM set 63  |
| 64                 | EDMA Base Address + 4800h to EDMA Base Address + 481Fh | PaRAM set 64  |
| 65                 | EDMA Base Address + 4820h to EDMA Base Address + 483Fh | PaRAM set 65  |
| ...                | ...                                                    | ...           |
| 254                | EDMA Base Address + 5FC0h to EDMA Base Address + 5FDFh | PaRAM set 254 |
| 255                | EDMA Base Address + 5FE0h to EDMA Base Address + 5FFFh | PaRAM set 255 |

## 11.3.3.1 PaRAM

Each parameter set of PaRAM is organized into eight 32-bit words or 32 bytes, as shown in Figure 11-7 and described in Table 11-6. Each PaRAM set consists of 16-bit and 32-bit parameters.

<!-- image -->

<!-- image -->

Table 11-6. EDMA3 Channel Parameter Description

| Offset Address (bytes)   | Acronym   | Parameter                   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|--------------------------|-----------|-----------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0h                       | OPT       | Channel Options             | Transfer configuration options                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 4h                       | SRC       | Channel Source Address      | The byte address from which data is transferred                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 8h (1)                   | ACNT      | Count for 1st Dimension     | Unsigned value specifying the number of contiguous bytes within an array (first dimension of the transfer). Valid values range from 1 to 65 535.                                                                                                                                                                                                                                                                                                                                                               |
| 8h (1)                   | BCNT      | Count for 2nd Dimension     | Unsigned value specifying the number of arrays in a frame, where an array is ACNT bytes. Valid values range from 1 to 65 535.                                                                                                                                                                                                                                                                                                                                                                                  |
| Ch                       | DST       | Channel Destination Address | The byte address to which data is transferred                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 10h (1)                  | SRCBIDX   | Source BCNT Index           | Signed value specifying the byte address offset between source arrays within a frame (2nd dimension). Valid values range from -32 768 and 32 767.                                                                                                                                                                                                                                                                                                                                                              |
| 10h (1)                  | DSTBIDX   | Destination BCNT Index      | Signed value specifying the byte address offset between destination arrays within a frame (2nd dimension). Valid values range from -32 768 and 32 767.                                                                                                                                                                                                                                                                                                                                                         |
| 14h (1)                  | LINK      | Link Address                | The PaRAM address containing the PaRAM set to be linked (copied from) when the current PaRAM set is exhausted. A value of FFFFh specifies a null link.                                                                                                                                                                                                                                                                                                                                                         |
| 14h (1)                  | BCNTRLD   | BCNT Reload                 | The count value used to reload BCNT when BCNT decrements to 0 (TR is submitted for the last array in 2nd dimension). Only relevant in A-synchronized transfers.                                                                                                                                                                                                                                                                                                                                                |
| 18h (1)                  | SRCCIDX   | Source CCNT Index           | Signed value specifying the byte address offset between frames within a block (3rd dimension). Valid values range from -32 768 and 32 767.                                                                                                                                                                                                                                                                                                                                                                     |
| 18h (1)                  | SRCCIDX   | Source CCNT Index           | A-synchronized transfers: The byte address offset from the beginning of the last source array in a frame to the beginning of the first source array in the next frame.                                                                                                                                                                                                                                                                                                                                         |
| 18h (1)                  | SRCCIDX   | Source CCNT Index           | AB-synchronized transfers: The byte address offset from the beginning of the first source array in a frame to the beginning of the first source array in the next frame.                                                                                                                                                                                                                                                                                                                                       |
| 18h (1)                  | DSTCIDX   | Destination CCNT index      | Signed value specifying the byte address offset between frames within a block (3rd dimension). Valid values range from -32 768 and 32 767. A-synchronized transfers: The byte address offset from the beginning of the last destination array in a frame to the beginning of the first destination array in the next frame. AB-synchronized transfers: The byte address offset from the beginning of the first destination array in a frame to the beginning of the first destination array in the next frame. |
| 1Ch                      | CCNT      | Count for 3rd Dimension     | Unsigned value specifying the number of frames in a block, where a frame is BCNT arrays of ACNT bytes. Valid values range from 1 to 65 535.                                                                                                                                                                                                                                                                                                                                                                    |
| 1Ch                      | RSVD      | Reserved                    | Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior.                                                                                                                                                                                                                                                                                                                                                                        |

(1) If OPT, SRC, or DST is the trigger word for a QDMA transfer, then doing a 32-bit access is required for that field. TI also recommends performing only 32-bit accesses on the parameter RAM for best code compatibility. For example, switching the endianness of the processor swaps addresses of the 16-bit fields, but 32-bit accesses avoid the issue entirely.

<!-- image -->

<!-- image -->

## 11.3.3.2 EDMA3 Channel PaRAM Set Entry Fields

## 11.3.3.2.1 Channel Options Parameter (OPT)

The channel options parameter (OPT) is shown in Figure 11-8 and described in Table 11-7.

## Figure 11-8. Channel Options Parameter (OPT)

| 31    | 30       | 28       | 27       | 24     | 23      | 22       | 21       | 20       | 19       | 18       | 17    | 16    |
|-------|----------|----------|----------|--------|---------|----------|----------|----------|----------|----------|-------|-------|
| PRIV  | Reserved | Reserved | PRIVID   | PRIVID | ITCCHEN | TCCHEN   | ITCINTEN | TCINTEN  | Reserved | Reserved | TCC   | TCC   |
| R-0   | R-0      | R-0      | R-0      | R-0    | R/W-0   | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0 | R/W-0 |
| 15    |          | 12       | 11       | 10 8   | 7       |          |          | 4        | 3        | 2        | 1     | 0     |
| TCC   | TCC      | TCC      | TCCMOD E | FWID   |         | Reserved | Reserved | Reserved | STATIC   | SYNCDIM  | DAM   | SAM   |
| R/W-0 | R/W-0    | R/W-0    | R/W-0    | R/W-0  |         | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0 | R/W-0 |

Table 11-7. Channel Options Parameters (OPT) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | PRIV     |         | Privilege level (supervisor versus user) for the host/CPU/DMA that programmed this PaRAM set. This value is set with the EDMA3 master's privilege value when any part of the PaRAM set is written.                                                                                                                                                     |
|       |          | 0       | User level privilege.                                                                                                                                                                                                                                                                                                                                  |
|       |          | 1       | Supervisor level privilege.                                                                                                                                                                                                                                                                                                                            |
| 30-28 | Reserved | 0       | Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior.                                                                                                                                                                                                                |
| 27-24 | PRIVID   | 0-Fh    | Privilege identification for the external host/CPU/DMA that programmed this PaRAM set. This value is set with the EDMA3 master's privilege identification value when any part of the PaRAM set is written.                                                                                                                                             |
| 23    | ITCCHEN  |         | Intermediate transfer completion chaining enable.                                                                                                                                                                                                                                                                                                      |
|       |          | 0       | Intermediate transfer complete chaining is disabled.                                                                                                                                                                                                                                                                                                   |
|       |          |         | Intermediate transfer complete chaining is enabled.                                                                                                                                                                                                                                                                                                    |
|       |          | 1       | When enabled, the chained event register (CER/CERH) bit is set on every intermediate chained transfer completion (upon completion of every intermediate TR in the PaRAM set, except the final TR in the                                                                                                                                                |
|       |          |         | PaRAM set). The bit (position) set in CER or CERH is the TCC value specified.                                                                                                                                                                                                                                                                          |
| 22    | TCCHEN   |         | Transfer complete chaining enable.                                                                                                                                                                                                                                                                                                                     |
|       |          | 0       | Transfer complete chaining is disabled.                                                                                                                                                                                                                                                                                                                |
|       |          | 1       | Transfer complete chaining is enabled.                                                                                                                                                                                                                                                                                                                 |
|       |          |         | When enabled, the chained event register (CER/CERH) bit is set on final chained transfer completion (upon completion of the final TR in the PaRAM set). The bit (position) set in CER or CERH is the TCC value specified.                                                                                                                              |
| 21    | ITCINTEN |         | Intermediate transfer completion interrupt enable.                                                                                                                                                                                                                                                                                                     |
|       |          | 0       | Intermediate transfer complete interrupt is disabled.                                                                                                                                                                                                                                                                                                  |
|       |          | 1       | Intermediate transfer complete interrupt is enabled. When enabled, the interrupt pending register (IPR / IPRH) bit is set on every intermediate transfer completion (upon completion of every intermediate TR in the PaRAM set, except the final TR in the PaRAM set). The bit (position) set in IPR or IPRH is the TCC value specified. To generate a |
|       |          |         | completion interrupt to the CPU, the corresponding IER [TCC] / IERH [TCC] bit must be set.                                                                                                                                                                                                                                                             |
| 20    | TCINTEN  |         | Transfer complete interrupt enable.                                                                                                                                                                                                                                                                                                                    |
|       |          | 0       | Transfer complete interrupt is disabled.                                                                                                                                                                                                                                                                                                               |
|       |          |         | Transfer complete interrupt is enabled. When enabled, the interrupt pending register (IPR / IPRH) bit is set on transfer completion (upon completion of the final TR in the PaRAM set). The bit (position) set in IPR or IPRH is the TCC value specified. To generate a completion interrupt to the CPU, the corresponding IER[TCC] / IERH [TCC]       |
|       |          | 1       | bit must be set.                                                                                                                                                                                                                                                                                                                                       |
| 19-18 | Reserved | 0       | Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior.                                                                                                                                                                                                                |

<!-- image -->

Table 11-7. Channel Options Parameters (OPT) Field Descriptions (continued)

| Bit   | Field    | Value   | Description                                                                                                                                                                                                      |
|-------|----------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 17-12 | TCC      | 0-3Fh   | Transfer complete code. This 6-bit code sets the relevant bit in the chaining enable register (CER [TCC] /CERH [TCC]) for chaining or in the interrupt pending register (IPR [TCC] / IPRH [TCC]) for interrupts. |
| 11    | TCCMODE  |         | Transfer complete code mode. Indicates the point at which a transfer is considered completed for chaining and interrupt generation.                                                                              |
|       |          | 0       | Normal completion: A transfer is considered completed after the data has been transferred.                                                                                                                       |
|       |          | 1       | Early completion: A transfer is considered completed after the EDMA3CC submits a TR to the EDMA3TC. TC may still be transferring data when the interrupt/chain is triggered.                                     |
| 10-8  | FWID     | 0-7h    | FIFO Width. Applies if either SAM or DAM is set to constant addressing mode.                                                                                                                                     |
|       |          | 0       | FIFO width is 8-bit.                                                                                                                                                                                             |
|       |          | 1h      | FIFO width is 16-bit.                                                                                                                                                                                            |
|       |          | 2h      | FIFO width is 32-bit.                                                                                                                                                                                            |
|       |          | 3h      | FIFO width is 64-bit.                                                                                                                                                                                            |
|       |          | 4h      | FIFO width is 128-bit.                                                                                                                                                                                           |
|       |          | 5h      | FIFO width is 256-bit.                                                                                                                                                                                           |
|       |          | 6h-7h   | Reserved.                                                                                                                                                                                                        |
| 7-4   | Reserved | 0       | Reserved. Always write 0 to this bit; writes of 1 to this bit are not supported and attempts to do so may result in undefined behavior.                                                                          |
| 3     | STATIC   |         | Static set.                                                                                                                                                                                                      |
|       |          | 0       | Set is not static. The PaRAM set is updated or linked after a TR is submitted. A value of 0 should be used for DMA channels and for non-final transfers in a linked list of QDMA transfers.                      |
|       |          | 1       | Set is static. The PaRAM set is not updated or linked after a TR is submitted. A value of 1 should be used for isolated QDMA transfers or for the final transfer in a linked list of QDMA transfers.             |
| 2     | SYNCDIM  |         | Transfer synchronization dimension.                                                                                                                                                                              |
|       |          | 0       | A-synchronized. Each event triggers the transfer of a single array of ACNT bytes.                                                                                                                                |
|       |          | 1       | AB-synchronized. Each event triggers the transfer of BCNT arrays of ACNT bytes.                                                                                                                                  |
| 1     | DAM      |         | Destination address mode.                                                                                                                                                                                        |
|       |          | 0       | Increment (INCR) mode. Destination addressing within an array increments. Destination is not a FIFO.                                                                                                             |
|       |          | 1       | Constant addressing (CONST) mode. Destination addressing within an array wraps around upon reaching FIFO width.                                                                                                  |
| 0     | SAM      |         | Source address mode.                                                                                                                                                                                             |
|       |          | 0       | Increment (INCR) mode. Source addressing within an array increments. Source is not a FIFO.                                                                                                                       |
|       |          | 1       | Constant addressing (CONST) mode. Source addressing within an array wraps around upon reaching FIFO width.                                                                                                       |

## 11.3.3.2.2 Channel Source Address (SRC)

The 32-bit source address parameter specifies the starting byte address of the source. For SAM in increment mode, there are no alignment restrictions imposed by EDMA3. For SAM in constant addressing mode, you must program the source address to be aligned to a 256-bit aligned address (5 LSBs of address must be 0). The EDMA3TC will signal an error, if this rule is violated. See Section 11.3.12.3 for additional details.

## 11.3.3.2.3 Channel Destination Address (DST)

The 32-bit destination address parameter specifies the starting byte address of the destination. For DAM in increment mode, there are no alignment restrictions imposed by EDMA3. For DAM in constant addressing mode, you must program the destination address to be aligned to a 256-bit aligned address (5 LSBs of address must be 0). The EDMA3TC will signal an error, if this rule is violated. See Section 11.3.12.3 for additional details.

<!-- image -->

www.ti.com

## 11.3.3.2.4 Count for 1st Dimension (ACNT)

ACNT represents the number of bytes within the 1st dimension of a transfer. ACNT is a 16-bit unsigned value with valid values between 0 and 65 535. Therefore, the maximum number of bytes in an array is 65 535 bytes (64K - 1 bytes). ACNT must be greater than or equal to 1 for a TR to be submitted to EDMA3TC. A transfer with ACNT equal to 0 is considered either a null or dummy transfer. A dummy or null transfer generates a completion code depending on the settings of the completion bit fields in OPT.

See Section 11.3.3.5 and Section 11.3.5.3 for details on dummy/null completion conditions.

## 11.3.3.2.5 Count for 2nd Dimension (BCNT)

BCNT is a 16-bit unsigned value that specifies the number of arrays of length ACNT. For normal operation, valid values for BCNT are between 1 and 65 535. Therefore, the maximum number of arrays in a frame is 65 535 (64K - 1 arrays). A transfer with BCNT equal to 0 is considered either a null or dummy transfer. A dummy or null transfer generates a completion code depending on the settings of the completion bit fields in OPT.

See Section 11.3.3.5 and Section 11.3.5.3 for details on dummy/null completion conditions.

## 11.3.3.2.6 Count for 3rd Dimension (CCNT)

CCNT is a 16-bit unsigned value that specifies the number of frames in a block. Valid values for CCNT are between 1 and 65 535. Therefore, the maximum number of frames in a block is 65 535 (64K - 1 frames). A transfer with CCNT equal to 0 is considered either a null or dummy transfer. A dummy or null transfer generates a completion code depending on the settings of the completion bit fields in OPT.

A CCNT value of 0 is considered either a null or dummy transfer. See Section 11.3.3.5 and Section 11.3.5.3 for details on dummy/null completion conditions.

## 11.3.3.2.7 BCNT Reload (BCNTRLD)

BCNTRLD is a 16-bit unsigned value used to reload the BCNT field once the last array in the 2nd dimension is transferred. This field is only used for A-synchronized transfers. In this case, the EDMA3CC decrements the BCNT value by 1 on each TR submission. When BCNT reaches 0, the EDMA3CC decrements CCNT and uses the BCNTRLD value to reinitialize the BCNT value.

For AB-synchronized transfers, the EDMA3CC submits the BCNT in the TR and the EDMA3TC decrements BCNT appropriately. For AB-synchronized transfers, BCNTRLD is not used.

## 11.3.3.2.8 Source B Index (SRCBIDX)

SRCBIDX is a 16-bit signed value (2s complement) used for source address modification between each array in the 2nd dimension. Valid values for SRCBIDX are between -32 768 and 32 767. It provides a byte address offset from the beginning of the source array to the beginning of the next source array. It applies to both A-synchronized and AB-synchronized transfers. Some examples:

- SRCBIDX = 0000h (0): no address offset from the beginning of an array to the beginning of the next array. All arrays are fixed to the same beginning address.
- SRCBIDX = 0003h (+3): the address offset from the beginning of an array to the beginning of the next array in a frame is 3 bytes. For example, if the current array begins at address 1000h, the next array begins at 1003h.
- SRCBIDX = FFFFh (-1): the address offset from the beginning of an array to the beginning of the next array in a frame is -1 byte. For example, if the current array begins at address 5054h, the next array begins at 5053h.

## 11.3.3.2.9 Destination B Index (DSTBIDX)

DSTBIDX is a 16-bit signed value (2s complement) used for destination address modification between each array in the 2nd dimension. Valid values for DSTBIDX are between -32 768 and 32 767. It provides a byte address offset from the beginning of the destination array to the beginning of the next destination array within the current frame. It applies to both A-synchronized and AB-synchronized transfers. See SRCBIDX for examples.

## 11.3.3.2.10 Source C Index (SRCCIDX)

SRCCIDX is a 16-bit signed value (2s complement) used for source address modification in the 3rd dimension. Valid values for SRCCIDX are between -32 768 and 32 767. It provides a byte address offset from the beginning of the current array (pointed to by SRC address) to the beginning of the first source array in the next frame. It applies to both A-synchronized and AB-synchronized transfers. Note that when SRCCIDX is applied, the current array in an A-synchronized transfer is the last array in the frame (Figure 11-5), while the current array in an AB-synchronized transfer is the first array in the frame (Figure 11-6).

## 11.3.3.2.11 Destination C Index (DSTCIDX)

DSTCIDX is a 16-bit signed value (2s complement) used for destination address modification in the 3rd dimension. Valid values are between -32 768 and 32 767. It provides a byte address offset from the beginning of the current array (pointed to by DST address) to the beginning of the first destination array TR in the next frame. It applies to both A-synchronized and AB-synchronized transfers. Note that when DSTCIDX is applied, the current array in an A-synchronized transfer is the last array in the frame (Figure 11-5), while the current array in a AB-synchronized transfer is the first array in the frame (Figure 11-6).

## 11.3.3.2.12 Link Address (LINK)

The EDMA3CC provides a mechanism, called linking, to reload the current PaRAM set upon its natural termination (that is, after the count fields are decremented to 0) with a new PaRAM set. The 16-bit parameter LINK specifies the byte address offset in the PaRAM from which the EDMA3CC loads/reloads the next PaRAM set during linking.

You must program the link address to point to a valid aligned 32-byte PaRAM set. The 5 LSBs of the LINK field should be cleared to 0.

The EDMA3CC ignores the upper 2 bits of the LINK entry, allowing the programmer the flexibility of programming the link address as either an absolute/literal byte address or use the PaRAM-base-relative offset address. Therefore, if you make use of the literal address with a range from 4000h to 7FFFh, it will be treated as a PaRAM-base-relative value of 0000h to 3FFFh.

You should make sure to program the LINK field correctly, so that link update is requested from a PaRAM address that falls in the range of the available PaRAM addresses on the device.

A LINK value of FFFFh is referred to as a NULL link that should cause the EDMA3CC to perform an internal write of 0 to all entries of the current PaRAM set, except for the LINK field that is set to FFFFh. Also, see Section 11.3.5 for details on terminating a transfer.

## 11.3.3.3 Null PaRAM Set

A null PaRAM set is defined as a PaRAM set where all count fields (ACNT, BCNT, and CCNT) are cleared to 0. If a PaRAM set associated with a channel is a NULL set, then when serviced by the EDMA3CC, the bit corresponding to the channel is set in the associated event missed register (EMR, EMRH, or QEMR). This bit remains set in the associated secondary event register (SER, SERH, or QSER). This implies that any future events on the same channel are ignored by the EDMA3CC and you are required to clear the bit in SER, SERH, or QSER for the channel. This is considered an error condition, since events are not expected on a channel that is configured as a null transfer. See and for more information on the SER and EMR registers, respectively.

## 11.3.3.4 Dummy PaRAM Set

A dummy PaRAM set is defined as a PaRAM set where at least one of the count fields (ACNT, BCNT, or CCNT) is cleared to 0 and at least one of the count fields is nonzero.

If a PaRAM set associated with a channel is a dummy set, then when serviced by the EDMA3CC, it will not set the bit corresponding to the channel (DMA/QDMA) in the event missed register (EMR, EMRH, or QEMR) and the secondary event register (SER, SERH, or QSER) bit gets cleared similar to a normal transfer. Future events on that channel are serviced. A dummy transfer is a legal transfer of 0 bytes. For more information, see the SER and EMR registers.

<!-- image -->

<!-- image -->

www.ti.com

## 11.3.3.5 Dummy Versus Null Transfer Comparison

There are some differences in the way the EDMA3CC logic treats a dummy versus a null transfer request. A null transfer request is an error condition, but a dummy transfer is a legal transfer of 0 bytes. A null transfer causes an error bit (E n ) in EMR to get set and the E n bit in SER remains set, essentially preventing any further transfers on that channel without clearing the associated error registers.

Table 11-8 summarizes the conditions and effects of null and dummy transfer requests.

Table 11-8. Dummy and Null Transfer Request

| Feature                                         | Null TR   | Dummy TR   |
|-------------------------------------------------|-----------|------------|
| EMR/EMRH/QEMR is set                            | Yes       | No         |
| SER/SERH/QSER remains set                       | Yes       | No         |
| Link update (STATIC = 0 in OPT)                 | Yes       | Yes        |
| QER is set                                      | Yes       | Yes        |
| IPR/IPRH CER/CERH is set using early completion | Yes       | Yes        |

## 11.3.3.6 Parameter Set Updates

When a TR is submitted for a given DMA/QDMA channel and its corresponding PaRAM set, the EDMA3CC is responsible for updating the PaRAM set in anticipation of the next trigger event. For events that are not final, this includes address and count updates; for final events, this includes the link update.

The specific PaRAM set entries that are updated depend on the channel's synchronization type (Asynchronized or B-synchronized) and the current state of the PaRAM set. A B-update refers to the decrementing of BCNT in the case of A-synchronized transfers after the submission of successive TRs. A C-update refers to the decrementing of CCNT in the case of A-synchronized transfers after BCNT TRs for ACNT byte transfers have submitted. For AB-synchronized transfers, a C-update refers to the decrementing of CCNT after submission of every transfer request.

See Table 11-9 for details and conditions on the parameter updates. A link update occurs when the PaRAM set is exhausted, as described in Section 11.3.3.7.

After the TR is read from the PaRAM (and is in process of being submitted to EDMA3TC), the following fields are updated if needed:

- A-synchronized: BCNT, CCNT, SRC, DST.
- AB-synchronized: CCNT, SRC, DST.

The following fields are not updated (except for during linking, where all fields are overwritten by the link PaRAM set):

- A-synchronized: ACNT, BCNTRLD, SRCBIDX, DSTBIDX, SRCCIDX, DSTCIDX, OPT, LINK.
- AB-synchronized: ACNT, BCNT, BCNTRLD, SRCBIDX, DSTBIDX, SRCCIDX, DSTCIDX, OPT, LINK.

<!-- image -->

Note that PaRAM updates only pertain to the information that is needed to properly submit the next transfer request to the EDMA3TC. Updates that occur while data is moved within a transfer request are tracked within the transfer controller, and is detailed in Section 11.3.12. For A-synchronized transfers, the EDMA3CC always submits a TRP for ACNT bytes (BCNT = 1 and CCNT = 1). For AB-synchronized transfers, the EDMA3CC always submits a TRP for ACNT bytes of BCNT arrays (CCNT = 1). The EDMA3TC is responsible for updating source and destination addresses within the array based on ACNT and FWID (in OPT). For AB-synchronized transfers, the EDMA3TC is also responsible to update source and destination addresses between arrays based on SRCBIDX and DSTBIDX.

Table 11-9 shows the details of parameter updates that occur within EDMA3CC for A-synchronized and AB-synchronized transfers.

Table 11-9. Parameter Updates in EDMA3CC (for Non-Null, Non-Dummy PaRAM Set)

|            | A-Synchronized Transfer   | A-Synchronized Transfer   | A-Synchronized Transfer   | AB-Synchronized Transfer   | AB-Synchronized Transfer   | AB-Synchronized Transfer   |
|------------|---------------------------|---------------------------|---------------------------|----------------------------|----------------------------|----------------------------|
|            | B-Update                  | C-Update                  | Link Update               | B-Update                   | C-Update                   | Link Update                |
| Condition: | BCNT > 1                  | BCNT == 1 && CCNT > 1     | BCNT == 1 && CCNT == 1    | N/A                        | CCNT > 1                   | CCNT == 1                  |
| SRC        | += SRCBIDX                | += SRCCIDX                | = Link.SRC                | in EDMA3TC                 | += SRCCIDX                 | = Link.SRC                 |
| DST        | += DSTBIDX                | += DSTCIDX                | = Link.DST                | in EDMA3TC                 | += DSTCIDX                 | = Link.DST                 |
| ACNT       | None                      | None                      | = Link.ACNT               | None                       | None                       | = Link.ACNT                |
| BCNT       | -= 1                      | = BCNTRLD                 | = Link.BCNT               | in EDMA3TC                 | N/A                        | = Link.BCNT                |
| CCNT       | None                      | -= 1                      | = Link.CCNT               | in EDMA3TC                 | -=1                        | = Link.CCNT                |
| SRCBIDX    | None                      | None                      | = Link.SRCBIDX            | in EDMA3TC                 | None                       | = Link.SRCBIDX             |
| DSTBIDX    | None                      | None                      | = Link.DSTBIDX            | None                       | None                       | = Link.DSTBIDX             |
| SRCCIDX    | None                      | None                      | = Link.SRCBIDX            | in EDMA3TC                 | None                       | = Link.SRCBIDX             |
| DSTCIDX    | None                      | None                      | = Link.DSTBIDX            | None                       | None                       | = Link.DSTBIDX             |
| LINK       | None                      | None                      | = Link.LINK               | None                       | None                       | = Link.LINK                |
| BCNTRLD    | None                      | None                      | = Link.BCNTRLD            | None                       | None                       | = Link.BCNTRLD             |
| OPT (1)    | None                      | None                      | = LINK.OPT                | None                       | None                       | = LINK.OPT                 |

(1) In all cases, no updates occur if OPT.STATIC == 1 for the current PaRAM set.

## NOTE:

The EDMA3CC includes no special hardware to detect when an indexed address update calculation overflows/underflows. The address update will wrap across boundaries as programmed by the user. You should ensure that no transfer is allowed to cross internal port boundaries between peripherals. A single TR must target a single source/destination slave endpoint.

<!-- image -->

www.ti.com

## 11.3.3.7 Linking Transfers

The EDMA3CC provides a mechanism known as linking, which allows the entire PaRAM set to be reloaded from a location within the PaRAM memory map (for both DMA and QDMA channels). Linking is especially useful for maintaining ping-pong buffers, circular buffering, and repetitive/continuous transfers with no CPU intervention. Upon completion of a transfer, the current transfer parameters are reloaded with the parameter set pointed that the 16-bit link address field of the current parameter set points to. Linking only occurs when the STATIC bit in OPT is cleared.

NOTE:

You should always link a transfer (EDMA3 or QDMA) to another useful transfer. If you must terminate a transfer, then you should link the transfer to a NULL parameter set. See Section 11.3.3.3.

The link update occurs after the current PaRAM set event parameters have been exhausted. An event's parameters are exhausted when the EDMA3 channel controller has submitted all of the transfers that are associated with the PaRAM set.

A link update occurs for null and dummy transfers depending on the state of the STATIC bit in OPT and the LINK field. In both cases (null or dummy), if the value of LINK is FFFFh, then a null PaRAM set (with all 0s and LINK set to FFFFh) is written to the current PaRAM set. Similarly, if LINK is set to a value other than FFFFh, then the appropriate PaRAM location that LINK points to is copied to the current PaRAM set.

Once the channel completion conditions are met for an event, the transfer parameters that are located at the link address are loaded into the current DMA or QDMA channel's associated parameter set. This indicates that the EDMA3CC reads the entire set (eight words) from the PaRAM set specified by LINK and writes all eight words to the PaRAM set that is associated with the current channel. Figure 11-9 shows an example of a linked transfer.

Any PaRAM set in the PaRAM can be used as a link/reload parameter set. The PaRAM sets associated with peripheral synchronization events (see Section 11.3.6) should only be used for linking if the corresponding events are disabled.

If a PaRAM set location is defined as a QDMA channel PaRAM set (by QCHMAP n ), then copying the link PaRAM set into the current QDMA channel PaRAM set is recognized as a trigger event. It is latched in QER because a write to the trigger word was performed. You can use this feature to create a linked list of transfers using a single QDMA channel and multiple PaRAM sets. See Section 11.3.4.2.

Linking to itself replicates the behavior of auto-initialization, thus facilitating the use of circular buffering and repetitive transfers. After an EDMA3 channel exhausts its current PaRAM set, it reloads all of the parameter set entries from another PaRAM set, which is initialized with values that are identical to the original PaRAM set. Figure 11-9 shows an example of a linked to self transfer. Here, the PaRAM set 255 has the link field pointing to the address of parameter set 255 (linked to self).

NOTE:

If the STATIC bit in OPT is set for a PaRAM set, then link updates are not performed.

## 11.3.3.8 Constant Addressing Mode Transfers/Alignment Issues

If either SAM or DAM is set (constant addressing mode), then the source or destination address must be aligned to a 256-bit aligned address, respectively, and the corresponding BIDX should be an even multiple of 32 bytes (256 bits). The EDMA3CC does not recognize errors here, but the EDMA3TC asserts an error if this is not true. See Section 11.3.12.3.

NOTE:

The constant addressing (CONST) mode has limited applicability. The EDMA3 should be configured for the constant addressing mode (SAM/DAM = 1) only if the transfer source or destination (on-chip memory, off-chip memory controllers, slave peripherals) support the constant addressing mode. See the device-specific data manual and/or peripheral user`s guide to verify if the constant addressing mode is supported. If the constant addressing mode is not supported, the similar logical transfer can be achieved using the increment (INCR) mode (SAM/DAM =0) by appropriately programming the count and indices values.

## 11.3.3.9 Element Size

The EDMA3 controller does not use element-size and element-indexing. Instead, all transfers are defined in terms of all three dimensions: ACNT, BCNT, and CCNT. An element-indexed transfer is logically achieved by programming ACNT to the size of the element and BCNT to the number of elements that need to be transferred. For example, if you have 16-bit audio data and 256 audio samples that must be transferred to a serial port, you can only do this by programming the ACNT = 2 (2 bytes) and BCNT = 256.

Figure 11-9. Linked Transfer

<!-- image -->

<!-- image -->