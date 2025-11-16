<!-- image -->

www.ti.com

Table 23-12. Message RAM Representation in RAM Direct Access Mode (continued)

| Bit #          | 31/ 15    | 30/ 14    | 29/ 13    | 29/ 12    | 27/ 11    | 26/ 10    | 25/ 9     | 24/ 8     | 23/ 7     | 22/ 6     | 21/ 5     | 20/ 4     | 19/ 3     | 18/ 2    | 17/ 1    | 16/ 0      |
|----------------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|----------|----------|------------|
| MsgAddr + 0x0C | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Msk[12:0] | Xtd      | Dir      | ID[28]     |
|                | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved  | Reserved | Reserved | Parity [4] |
| MsgAddr + 0x10 | MsgLst    | MsgLst    | MsgLst    | Unused    | Unused    | Unused    | Unused    | Msg Lst   | UMa sk    | TxIE      | RxT E     |           | Rmt En    | EOB      | MX td    | MDir       |

NOTE:

Writes to unused bits have no effect.

## 23.3.19 GIO Support

The CAN\_RX and CAN\_TX pins of the DCAN module can be used as general purpose IO pins, if CAN functionality is not needed. This function is controlled by the CAN TX IO control register (TIOC) and the CAN RX IO control register (RIOC).