<!-- image -->

## 11.4.1.125 QSECR Register (offset = 1094h) [reset = 0h]

QSECR is shown in Figure 11-164 and described in Table 11-151.

The QDMA secondary event clear register (QSECR) clears the status of the QDMA secondary event register (QSER) and the QDMA event register (QER). CPU writes of 1 clear the corresponding set bits in QSER and QER. Writes of 0 have no effect. Note that this differs from the secondary event clear register (SECR) operation, which only clears the secondary event register (SER) bits and does not affect the event registers. QESCR is part of a set of register that control the QDMA channels in EDMA3CC. QDMA channels (with the exception of the QDMA queue number register) consist of a set of registers, each of which have a bit location. Each bit position corresponds to a QDMA channel number. The QDMA channel registers are accessible via read/writes to the global address range. They are also accessible via read/writes to the shadow address range. The read/write accessibility in the shadow region address region is controlled by the QDMA region access registers (QRAEn/QRAEHn).

## Figure 11-164. QSECR Register

| 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|---------------------------------------------------------------------------------|
| En                                                                              |
| R-0h W-0h                                                                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-151. QSECR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                    |
| 7-0   | En       | W      | 0h      | QDMA secondary event clear register for channels 0 to 7. 0h = No effect. 1h = Corresponding bit in the QDMA secondary event register (QSER) and the QDMA event register (QER) is cleared (En = 0). |

## 11.4.2 EDMA3TC Registers

Table 11-152 lists the memory-mapped registers for the EDMA3TC. All register offset addresses not listed in Table 11-152 should be considered as reserved locations and the register contents should not be modified.

## Table 11-152. EDMA3TC Registers

| Offset   | Acronym   | Register Name                                  | Section           |
|----------|-----------|------------------------------------------------|-------------------|
| 0h       | PID       | Peripheral Identification Register             | Section 11.4.1.1  |
| 4h       | TCCFG     | EDMA3TC Configuration Register                 | Section 11.4.2.2  |
| 10h      | SYSCONFIG | EDMA3TC System Configuration Register          | Section 15.1.3.2  |
| 100h     | TCSTAT    | EDMA3TC Channel Status Register                | Section 11.4.2.4  |
| 120h     | ERRSTAT   | Error Register                                 | Section 11.4.2.5  |
| 124h     | ERREN     | Error Enable Register                          | Section 11.4.2.6  |
| 128h     | ERRCLR    | Error Clear Register                           | Section 11.4.2.7  |
| 12Ch     | ERRDET    | Error Details Register                         | Section 11.4.2.8  |
| 130h     | ERRCMD    | Error Interrupt Command Register               | Section 11.4.2.9  |
| 140h     | RDRATE    | Read Rate Register                             | Section 11.4.2.10 |
| 240h     | SAOPT     | Source Active Options Register                 | Section 11.4.2.11 |
| 244h     | SASRC     | Source Active Source Address Register          | Section 11.4.2.12 |
| 248h     | SACNT     | Source Active Count Register                   | Section 11.4.2.13 |
| 24Ch     | SADST     | Source Active Destination Address Register     | Section 11.4.2.14 |
| 250h     | SABIDX    | Source Active Source B-Index Register          | Section 11.4.2.15 |
| 254h     | SAMPPRXY  | Source Active Memory Protection Proxy Register | Section 11.4.2.16 |
| 258h     | SACNTRLD  | Source Active Count Reload Register            | Section 11.4.2.17 |

Table 11-152. EDMA3TC Registers (continued)

| Offset   | Acronym   | Register Name                                                 | Section           |
|----------|-----------|---------------------------------------------------------------|-------------------|
| 25Ch     | SASRCBREF | Source Active Source Address B-Reference Register             | Section 11.4.2.18 |
| 260h     | SADSTBREF | Source Active Destination Address B-Reference Register        | Section 11.4.2.19 |
| 280h     | DFCNTRLD  | Destination FIFO Set Count Reload                             | Section 11.4.2.20 |
| 284h     | DFSRCBREF | Destination FIFO Set Destination Address B Reference Register | Section 11.4.2.21 |
| 288h     | DFDSTBREF | Destination FIFO Set Destination Address B Reference Register | Section 11.4.2.22 |
| 300h     | DFOPT0    | Destination FIFO Options Register 0                           | Section 11.4.2.23 |
| 304h     | DFSRC0    | Destination FIFO Source Address Register 0                    | Section 11.4.2.24 |
| 308h     | DFCNT0    | Destination FIFO Count Register 0                             | Section 11.4.2.25 |
| 30Ch     | DFDST0    | Destination FIFO Destination Address Register 0               | Section 11.4.2.26 |
| 310h     | DFBIDX0   | Destination FIFO BIDX Register 0                              | Section 11.4.2.27 |
| 314h     | DFMPPRXY0 | Destination FIFO Memory Protection Proxy Register 0           | Section 11.4.2.28 |
| 340h     | DFOPT1    | Destination FIFO Options Register 1                           | Section 11.4.2.29 |
| 344h     | DFSRC1    | Destination FIFO Source Address Register 1                    | Section 11.4.2.30 |
| 348h     | DFCNT1    | Destination FIFO Count Register 1                             | Section 11.4.2.31 |
| 34Ch     | DFDST1    | Destination FIFO Destination Address Register 1               | Section 11.4.2.32 |
| 350h     | DFBIDX1   | Destination FIFO BIDX Register 1                              | Section 11.4.2.33 |
| 354h     | DFMPPRXY1 | Destination FIFO Memory Protection Proxy Register 1           | Section 11.4.2.34 |
| 380h     | DFOPT2    | Destination FIFO Options Register 2                           | Section 11.4.2.35 |
| 384h     | DFSRC2    | Destination FIFO Source Address Register 2                    | Section 11.4.2.36 |
| 388h     | DFCNT2    | Destination FIFO Count Register 2                             | Section 11.4.2.37 |
| 38Ch     | DFDST2    | Destination FIFO Destination Address Register 2               | Section 11.4.2.38 |
| 390h     | DFBIDX2   | Destination FIFO BIDX Register 2                              | Section 11.4.2.39 |
| 394h     | DFMPPRXY2 | Destination FIFO Memory Protection Proxy Register 2           | Section 11.4.2.40 |
| 3C0h     | DFOPT3    | Destination FIFO Options Register 3                           | Section 11.4.2.41 |
| 3C4h     | DFSRC3    | Destination FIFO Source Address Register 3                    | Section 11.4.2.42 |
| 3C8h     | DFCNT3    | Destination FIFO Count Register 3                             | Section 11.4.2.43 |
| 3CCh     | DFDST3    | Destination FIFO Destination Address Register 3               | Section 11.4.2.44 |
| 3D0h     | DFBIDX3   | Destination FIFO BIDX Register 3                              | Section 11.4.2.45 |
| 3D4h     | DFMPPRXY3 | Destination FIFO Memory Protection Proxy Register 3           | Section 11.4.2.46 |

<!-- image -->

<!-- image -->

## 11.4.2.1 PID Register (offset = 0h) [reset = 0h]

PID is shown in Figure 11-165 and described in Table 11-153.

The peripheral identification register (PID) is a constant register that uniquely identifies the EDMA3TC and specific revision of the EDMA3TC.

## Figure 11-165. PID Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------|------------------------------------------------------------------------------|
| RESERVED   | PID                                                                          |
| R-0h       | R-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-153. PID Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                            |
| 15-0  | PID      | R      | 0h      | Peripheral identifier, value 0 to FFFF FFFFh. Reset for PID[31] to PID[16] is 4000h. Reset for PID[15] to PID[0] is 7C00h. |

## 11.4.2.2 TCCFG Register (offset = 4h) [reset = 224h]

TCCFG is shown in Figure 11-166 and described in Table 11-154.

## Figure 11-166. TCCFG Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25        | 24        |
|----------|----------|----------|----------|----------|----------|-----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17        | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9         | 8         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DREGDEPTH | DREGDEPTH |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-2h      | R-2h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1         | 0         |
| RESERVED | RESERVED | BUSWIDTH | BUSWIDTH | RESERVED | FIFOSIZE | FIFOSIZE  | FIFOSIZE  |
| R-0h     | R-0h     | R-2h     | R-2h     | R-0h     | R-4h     | R-4h      | R-4h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-154. TCCFG Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                           |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED  | R      | 0h      |                                                                                                                                       |
| 9-8   | DREGDEPTH | R      | 2h      | Destination register FIFO depth parameterization. 0h = Reserved. 1h = Reserved. 2h = 4 entry (for TC0, TC1, and TC2) 3h = Reserved.   |
| 7-6   | RESERVED  | R      | 0h      |                                                                                                                                       |
| 5-4   | BUSWIDTH  | R      | 2h      | Bus width parameterization. 0h = Reserved. 1h = Reserved. 2h = 128-bit. 3h = Reserved.                                                |
| 3     | RESERVED  | R      | 0h      |                                                                                                                                       |
| 2-0   | FIFOSIZE  | R      | 4h      | FIFO size 0h = Reserved. 1h = Reserved. 2h = Reserved. 3h = Reserved. 4h = 512 byte FIFO 5h = Reserved. 6h = Reserved. 7h = Reserved. |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.2.3 SYSCONFIG Register (offset = 10h) [reset = 28h]

SYSCONFIG is shown in Figure 15-4 and described in Table 15-7.

## Figure 11-167. SYSCONFIG Register

| 31       | 30       | 29          | 28          | 27       | 26       | 25       | 24       |
|----------|----------|-------------|-------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21          | 20          | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13          | 12          | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5           | 4           | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | STANDBYMODE | STANDBYMODE | IDLEMODE | IDLEMODE | RESERVED | RESERVED |
| R-0h     | R-0h     | R/W-2h      | R/W-2h      | R/W-2h   | R/W-2h   | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-155. SYSCONFIG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 5-4   | STANDBYMODE | R/W    | 2h      | Configuration of the local initiator state management mode. By definition, initiator may generate read/write transaction as long as it is out of STANDBY state. 0h = Force-standby mode: local initiator is unconditionally placed in standby state. Backup mode, for debug only. 1h = No-standby mode: local initiator is unconditionally placed out of standby state. Backup mode, for debug only. 2h = Smart-standby mode: local initiator standby status depends on local conditions, i.e., the module's functional requirement from the initiator. IP module should not generate (initiator-related) wakeup events. 3h = Reserved.                                                                        |
| 3-2   | IDLEMODE    | R/W    | 2h      | Configuration of the local target state management mode. By definition, target can handle read/write transaction as long as it is out of IDLE state. 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state. Backup mode, for debug only. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ or DMA-request-related) wakeup events. 3h = Reserved. |
| 1-0   | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |

## 11.4.2.4 TCSTAT Register (offset = 100h) [reset = 100h]

TCSTAT is shown in Figure 11-168 and described in Table 11-156.

## Figure 11-168. TCSTAT Register

| 31       | 30       | 29        | 28        | 27       | 26       | 25       | 24       |
|----------|----------|-----------|-----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED  | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21        | 20        | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED  | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13        | 12        | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | DFSTRTPTR | DFSTRTPTR | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-1h     |
| 7        | 6        | 5         | 4         | 3        | 2        | 1        | 0        |
| RESERVED | DSTACTV  | DSTACTV   | DSTACTV   | RESERVED | WSACTV   | SRCACTV  | PROGBUSY |
| R-0h     | R-0h     | R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-156. TCSTAT Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-14 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 13-12 | DFSTRTPTR | R      | 0h      | Destination FIFO start pointer. Represents the offset to the head entry of the destination register FIFO, in units of entries. Value 0 to 3h.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 11-9  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 8     | RESERVED  | R      | 1h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 7     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 6-4   | DSTACTV   | R      | 0h      | Destination active state. Specifies the number of transfer requests (TRs) that are resident in the destination register FIFO at a given instant. This bit field can be primarily used for advanced debugging. Legal values are constrained by the destination register FIFO depth parameterization (DSTREGDEPTH) parameter. 0h = Destination FIFO is empty. 1h = Destination FIFO contains 1 TR. 2h = Destination FIFO contains 2 TRs. 3h = Destination FIFO contains 3 TRs. 4h = Destination FIFO contains 4 TRs. (Full if DSTREGDEPTH==4). If the destination register FIFO is empty, then any TR written to Prog Set immediately transitions to the destination register FIFO. If the destination register FIFO is not empty and not full, then any TR written to Prog Set immediately transitions to the destination register FIFO set if the source active state (SRCACTV) bit is set to idle. If the destination register FIFO is full, then TRs cannot transition to the destination register FIFO. The destination register FIFO becomes not full when the TR at the head of the destination register FIFO is completed. 5h = Reserved. 6h = Reserved. 7h = Reserved. |
| 3     | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 2     | WSACTV    | R      | 0h      | Write status active 0h = Write status is not pending. Write status has been received for all previously issued write commands. 1h = Write status is pending. Write status has not been received for all previously issued write commands.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->

<!-- image -->

## Table 11-156. TCSTAT Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | SRCACTV  | R      | 0h      | Source active state 0h = Source controller is idle. Source active register set contains a previously processed transfer request. 1h = Source controller is busy servicing a transfer request. |
|     0 | PROGBUSY | R      | 0h      | Program register set busy 0h = Program set idle and is available for programming by the EDMA3CC. 1h = Program set busy                                                                        |

## 11.4.2.5 ERRSTAT Register (offset = 120h) [reset = 0h]

ERRSTAT is shown in Figure 11-169 and described in Table 11-157.

## Figure 11-169. ERRSTAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          |          | MMRAERR  | TRERR    | RESERVED | BUSERR   |
|          | R-0h     |          |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-157. ERRSTAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                   |
| 3     | MMRAERR  | R      | 0h      | MMR address error. 0h = Condition is not detected. 1h = User attempted to read or write to an invalid address in configuration memory map.                                                        |
| 2     | TRERR    | R      | 0h      | Transfer request (TR) error event. 0h = Condition is not detected. 1h = TR detected that violates constant addressing mode transfer (SAM or DAM is set) alignment rules or has ACNT or BCNT == 0. |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                                                   |
| 0     | BUSERR   | R      | 0h      | Bus error event. 0h = Condition is not detected. 1h = EDMA3TC has detected an error at source or destination address. Error information can be read from the error details register (ERRDET).     |

<!-- image -->

<!-- image -->

## 11.4.2.6 ERREN Register (offset = 124h) [reset = 0h]

ERREN is shown in Figure 11-170 and described in Table 11-158.

When any of the enable bits are set, a bit set in the corresponding ERRSTAT causes an assertion of the EDMA3TC interrupt.

Figure 11-170. ERREN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | MMRAERR  | TRERR    | RESERVED | BUSERR   |
|          |          |          |          | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-158. ERREN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                        |
| 3     | MMRAERR  | R/W    | 0h      | Interrupt enable for MMR address error (MMRAERR). 0h = MMRAERR is disabled. 1h = MMRAERR is enabled and contributes to the state of EDMA3TC error interrupt generation |
| 2     | TRERR    | R/W    | 0h      | Interrupt enable for transfer request error (TRERR). 0h = TRERR is disabled. 1h = TRERR is enabled and contributes to the state of EDMA3TC error interrupt generation. |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                        |
| 0     | BUSERR   | R/W    | 0h      | Interrupt enable for bus error (BUSERR). 0h = BUSERR is disabled. 1h = BUSERR is enabled and contributes to the state of EDMA3TC error interrupt generation.           |

## 11.4.2.7 ERRCLR Register (offset = 128h) [reset = 0h]

ERRCLR is shown in Figure 11-171 and described in Table 11-159.

## Figure 11-171. ERRCLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          |          | MMRAERR  | TRERR    | RESERVED | BUSERR   |
|          | R-0h     |          |          | W-0h     | W-0h     | R-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-159. ERRCLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                   |
| 3     | MMRAERR  | W      | 0h      | Interrupt enable clear for the MMRAERR bit in the error status register (ERRSTAT). 0h = No effect. 1h = Clears the MMRAERR bit in ERRSTAT but does not clear the error details register (ERRDET). |
| 2     | TRERR    | W      | 0h      | Interrupt enable clear for the TRERR bit in the error status register (ERRSTAT). 0h = No effect. 1h = Clears the TRERR bit in ERRSTAT but does not clear the error details register (ERRDET).     |
| 1     | RESERVED | R      | 0h      |                                                                                                                                                                                                   |
| 0     | BUSERR   | W      | 0h      | Interrupt clear for the BUSERR bit in the error status register (ERRSTAT). 0h = No effect. 1h = Clears the BUSERR bit in ERRSTAT and clears the error details register (ERRDET).                  |

<!-- image -->

<!-- image -->

## 11.4.2.8 ERRDET Register (offset = 12Ch) [reset = 0h]

ERRDET is shown in Figure 11-172 and described in Table 11-160.

## Figure 11-172. ERRDET Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | TCCHEN    | TCINTEN   |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RESERVED  | RESERVED  | TCC       | TCC       | TCC       | TCC       | TCC       | TCC       |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | STAT      | STAT      | STAT      | STAT      |
| R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-160. ERRDET Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                        |
| 17    | TCCHEN   | R      | 0h      | Transfer completion chaining enable. Contains the TCCHEN value in the channel options parameter (OPT) programmed by the channel controller for the read or write transaction that resulted in an error.                                                                                                                                                                                |
| 16    | TCINTEN  | R      | 0h      | Transfer completion interrupt enable. Contains the TCINTEN value in the channel options parameter (OPT) programmed by the channel controller for the read or write transaction that resulted in an error.                                                                                                                                                                              |
| 15-14 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                        |
| 13-8  | TCC      | R      | 0h      | Transfer complete code. Contains the TCC value in the channel options parameter (OPT) programmed by the channel controller for the read or write transaction that resulted in an error.                                                                                                                                                                                                |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                        |
| 3-0   | STAT     | R      | 0h      | Transaction status. Stores the nonzero status/error code that was detected on the read status or write status bus. If read status and write status are returned on the same cycle, then the EDMA3TC chooses nonzero version. If both are nonzero, then the write status is treated as higher priority. 0h = No error. 1h = From 1h to 7h, Read error. 8h = From 8h to Fh, Write error. |

## 11.4.2.9 ERRCMD Register (offset = 130h) [reset = 0h]

ERRCMD is shown in Figure 11-173 and described in Table 11-161.

## Figure 11-173. ERRCMD Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | EVAL     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-161. ERRCMD Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED | R      | 0h      |                                                                                                                             |
| 1     | RESERVED | R      | 0h      |                                                                                                                             |
| 0     | EVAL     | W      | 0h      | Error evaluate 0h = No effect 1h = EDMA3TC error line is pulsed if any of the error status register (ERRSTAT) bits are set. |

<!-- image -->

<!-- image -->

## 11.4.2.10 RDRATE Register (offset = 140h) [reset = 0h]

RDRATE is shown in Figure 11-174 and described in Table 11-162.

The EDMA3 transfer controller issues read commands at a rate controlled by the read rate register (RDRATE). The RDRATE defines the number of idle cycles that the read controller must wait before issuing subsequent commands. This applies both to commands within a transfer request packet (TRP) and for commands that are issued for different transfer requests (TRs). For instance, if RDRATE is set to 4 cycles between reads, there are 3 inactive cycles between reads. RDRATE allows flexibility in transfer controller access requests to an endpoint. For an application, RDRATE can be manipulated to slow down the access rate, so that the endpoint may service requests from other masters during the inactive EDMA3TC cycles. Note: The RDRATE value for a transfer controller is expected to be static, as it is decided based on the application requirement. It is not recommended to change the RDRATE value on the fly.

## Figure 11-174. RDRATE Register

| 31              | 30              | 29              | 28              | 27              | 26              | 25              | 24              | 23              | 22              | 21              | 20              | 19              | 18              | 17              | 16              |
|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|-----------------|
| RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED        |
| R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            | R-0h            |
| 15              | 14              | 13              | 12              | 11              | 10              | 9               | 8               | 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0               |
| RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE | RESERVED RDRATE |
| R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     | R-0h R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-162. RDRATE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-3  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                              |
| 2-0   | RDRATE   | R/W    | 0h      | Read rate. Controls the number of cycles between read commands. This is a global setting that applies to all TRs for this EDMA3TC. 0h = Reads issued as fast as possible. 1h = 4 cycles between reads. 2h = 8 cycles between reads. 3h = 16 cycles between reads. 4h = 32 cycles between reads. 5h = Reserved. 6h = Reserved. 7h = Reserved. |

## 11.4.2.11 SAOPT Register (offset = 240h) [reset = 0h]

SAOPT is shown in Figure 11-175 and described in Table 11-163.

The Source Active Options Register (SAOPT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

Figure 11-175. SAOPT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | TCCHEN   | RESERVED | TCINTEN  | RESERVED | RESERVED | TCC      | TCC      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| TCC      | TCC      | TCC      |          | RESERVED |          | FWID     |          |
| R-0h     | R-0h     | R-0h     |          | R-0h     |          | R-0h     |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | PRI      | PRI      |          | RESERVED | RESERVED | DAM      | SAM      |
| R-0h     | R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-163. SAOPT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 22    | TCCHEN   | R      | 0h      | Transfer complete chaining enable 0h = Transfer complete chaining is disabled. 1h = Transfer complete chaining is enabled.                                                                                                                                                    |
| 21    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 20    | TCINTEN  | R      | 0h      | Transfer complete interrupt enable. 0h = Transfer complete interrupt is disabled. 1h = Transfer complete interrupt is enabled.                                                                                                                                                |
| 19-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 17-12 | TCC      | R      | 0h      | Transfer complete code. This 6 bit code is used to set the relevant bit in CER or IPR of the EDMA3PCC module.                                                                                                                                                                 |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 10-8  | FWID     | R      | 0h      | FIFO width. Applies if either SAM or DAM is set to constant addressing mode. 0h = FIFO width is 8-bit. 1h = FIFO width is 16-bit. 2h = FIFO width is 32-bit. 3h = FIFO width is 64-bit. 4h = FIFO width is 128-bit. 5h = FIFO width is 256-bit. 6h = Reserved. 7h = Reserved. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

Table 11-163. SAOPT Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | PRI      | R      | 0h      | Transfer priority. Reflects the values programmed in the QUEPRI register in the EDMACC. 0h = Priority 0 - Highest priority 1h = From 1h to 6h, Priority 1 to priority 6 7h = Priority 7 - Lowest priority                                    |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                              |
| 1     | DAM      | R      | 0h      | Destination address mode within an array 0h = Increment (INCR) mode. Destination addressing within an array increments. 1h = Constant addressing (CONST) mode. Destination addressing within an array wraps around upon reaching FIFO width. |
| 0     | SAM      | R      | 0h      | Source address mode within an array 0h = Increment (INCR) mode. Source addressing within an array increments. 1h = Constant addressing (CONST) mode. Source addressing within an array wraps around upon reaching FIFO width.                |

## 11.4.2.12 SASRC Register (offset = 244h) [reset = 0h]

SASRC is shown in Figure 11-176 and described in Table 11-164.

The Source Active Source Address Register (SASRC) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

## Figure 11-176. SASRC Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 SADDR   |
|------|---------------------------------------------------------------------------------------|
|      | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-164. SASRC Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                         |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SADDR   | R      | 0h      | Source address for Source Active Register Set. EDMA3TC updates value according to source addressing mode (SAM bit in the source active options register, SAOPT). This register does not update during a transfer. Value 0 to FFFFh. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.2.13 SACNT Register (offset = 248h) [reset = 0h]

SACNT is shown in Figure 11-177 and described in Table 11-165.

The Source Active Count Register (SACNT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

## Figure 11-177. SACNT Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------|------------------------------------------------------------------------------|
| BCNT       | ACNT                                                                         |
| R-0h       | R-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-165. SACNT Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                          |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | BCNT    | R      | 0h      | B dimension count remaining for the Source Active Register Set. Number of arrays to be transferred, where each array is ACNT in length. TC decrements BCNT as necessary after each read command is issued. The final value should be 0 when TR is complete. Note that BCNT is always read as 0x0 in the Source Address Register Set. |
| 15-0  | ACNT    | R      | 0h      | A dimension count remaining for the Source Active Register Set. Number of bytes to be transferred in first dimension. Represents the amount of data remaining to be read. TC decrements ACNT as necessary after each read command is issued. The final value should be 0 when TR is complete.                                        |

## 11.4.2.14 SADST Register (offset = 24Ch) [reset = 0h]

SADST is shown in Figure 11-178 and described in Table 11-166.

The Source Active Destination Address Register (SADST) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

Note: Destination address is not applicable for Source Active Register Set. Read returns 0.

## Figure 11-178. SADST Register

| 31   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|------|---------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-166. SADST Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

<!-- image -->

<!-- image -->

## 11.4.2.15 SABIDX Register (offset = 250h) [reset = 0h]

SABIDX is shown in Figure 11-179 and described in Table 11-167.

The Source Active Source B-Dimension Index Register (SABIDX) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

## Figure 11-179. SABIDX Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------|------------------------------------------------------------------------------|
| DBIDX      | SBIDX                                                                        |
| R-0h       | R-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-167. SABIDX Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | DBIDX   | R      | 0h      | B-Index offset between destination arrays. Represents the offset in bytes between the starting address of each destination array (there are BCND arrays of ACNT elements). DBIDX is always used regardless of whether DAM is in Increment or FIFO mode.         |
| 15-0  | SBIDX   | R      | 0h      | B-Index offset between source arrays. Represents the offset in bytes between the starting address of each source array (there are BCNT arrays of ACNT elements). SBIDX is always used regardless of whether SAM is in Increment or FIFO mode. Value 0 to FFFFh. |

## 11.4.2.16 SAMPPRXY Register (offset = 254h) [reset = 0h]

SAMPPRXY is shown in Figure 11-180 and described in Table 11-168.

The Source Active Memory Protection Proxy Register (SAMPPRXY) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

Figure 11-180. SAMPPRXY Register

| 31       | 30       | 29       | 28          | 27       | 26       | 25       | 24       |
|----------|----------|----------|-------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED |
| 22       | 22       | 22       | 22          | 22       | 22       | 22       | 22       |
| 23 21 15 | 20       | 19 R-0h  | 18          | 17       | 16       | RESERVED | 14       |
| 13       | 13       | 13       | 13          | 13       | 13       | 13       | 13       |
| 12       | 12       | 12       | 12          | 12       | 12       | 12       | 12       |
| 11       | 10       | 9        | 8 PRIV R-0h | RESERVED | R-0h     | 7        | 6        |
| 5        | 5        | 5        | 5           | 5        | 5        | 5        | 4 3      |
|          |          |          |             |          |          |          | 2        |
| 1        | 0        | RESERVED | PRIVID      |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-168. SAMPPRXY Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 8     | PRIV     | R      | 0h      | Privilege level. The privilege level used by the host to set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. The privilege ID is used while issuing read and write command to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIV of the host that set up the DMA transaction. 0h = User-level privilege. 1h = Supervisor-level privilege. |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 3-0   | PRIVID   | R      | 0h      | Privilege ID. This contains the privilege ID of the host that set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. This PRIVID value is used while issuing read and write commands to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIVID of the host that set up the DMA transaction. Value 0 to Fh.                                     |

<!-- image -->

<!-- image -->

## 11.4.2.17 SACNTRLD Register (offset = 258h) [reset = 0h]

SACNTRLD is shown in Figure 11-181 and described in Table 11-169.

The Source Active Count Reload Register (SACNTRLD) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

## Figure 11-181. SACNTRLD Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | ACNTRLD                                                                               |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-169. SACNTRLD Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                               |
| 15-0  | ACNTRLD  | R      | 0h      | A-count reload value. Represents the originally programmed value of ACNT. The reload value is used to reinitialize ACNT after each array is serviced (that is, ACNT decrements to 0) by the source offset in bytes between the starting address or each source array (there are BCNT arrays of ACNT bytes). Value 0 to FFFFh. |

## 11.4.2.18 SASRCBREF Register (offset = 25Ch) [reset = 0h]

SASRCBREF is shown in Figure 11-182 and described in Table 11-170.

The Source Active Source Address B-Reference Register (SASRCBREF) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

## Figure 11-182. SASRCBREF Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 SADDRBREF   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-170. SASRCBREF Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                  |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | SADDRBREF | R      | 0h      | Source address B-reference. Represents the starting address for the array currently being read. The next array's starting address is calculated as the reference address plus the source b-idx value. Value 0 to FFFF FFFFh. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.2.19 SADSTBREF Register (offset = 260h) [reset = 0h]

SADSTBREF is shown in Figure 11-183 and described in Table 11-171.

The Source Active Destination Address B-Reference Register (SADSTBREF) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Source Active Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing the status of the transfer controller (TC) during a transfer.

Note: Destination address is not applicable for Source Active Register Set. Read returns 0.

## Figure 11-183. SADSTBREF Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|---------|------------------------------------------------------------------------------------------|
|         | R-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-171. SADSTBREF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

## 11.4.2.20 DFCNTRLD Register (offset = 280h) [reset = 0h]

DFCNTRLD is shown in Figure 11-184 and described in Table 11-172.

The Destination FIFO Count Reload Register (DFCNTRLD) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-184. DFCNTRLD Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| RESERVED                                                                              | ACNTRLD                                                                               |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-172. DFCNTRLD Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                     |
| 15-0  | ACNTRLD  | R      | 0h      | A-count reload value for the Destination FIFO Register Set. Represents the originally programmed value of ACNT. The reload value is used to reinitialize ACNT after each array is serviced (that is, ACNT decrements to 0) by the source offset in bytes between the starting address of each source array (there are BCNT arrays of ACNT bytes). Value 0 to FFFFh. |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.2.21 DFSRCBREF Register (offset = 284h) [reset = 0h]

DFSRCBREF is shown in Figure 11-185 and described in Table 11-173.

The Destination FIFO Source Address B-Reference Register (DFSRCBREF) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is readonly and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Note: Source address reference is not applicable for Destination FIFO Register Set. Read returns 0.

## Figure 11-185. DFSRCBREF Register

20

19

18

17

16

15

14

RESERVED

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-173. DFSRCBREF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

13

12

11

10

9

31

30

29

28

27

26

25

24

23

22

21

8

7

6

5

4

3

2

1

0

## 11.4.2.22 DFDSTBREF Register (offset = 288h) [reset = 0h]

DFDSTBREF is shown in Figure 11-186 and described in Table 11-174.

The Destination FIFO Destination Address B-Reference Register (DFDSTBREF) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is readonly and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-186. DFDSTBREF Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DADDRBREF   |
|------|----------------------------------------------------------------------------------------------|
|      | R-0h                                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-174. DFDSTBREF Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                     |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DADDRBREF | R      | 0h      | Destination address reference for the destination FIFO register set. Represents the starting address for the array currently being written. The next array's starting address is calculated as the reference address plus the destination B-Index value. Value 0 to FFFF FFFFh. |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.2.23 DFOPT0 Register (offset = 300h) [reset = 0h]

DFOPT0 is shown in Figure 11-187 and described in Table 11-175.

The Destination FIFO Options Register (DFOPT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-187. DFOPT0 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | TCCHEN   | RESERVED | TCINTEN  | RESERVED | RESERVED | TCC      | TCC      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| TCC      | TCC      | TCC      |          | RESERVED |          | FWID     |          |
| R-0h     | R-0h     | R-0h     |          | R-0h     |          | R-0h     |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | PRI      | PRI      |          | RESERVED | RESERVED | DAM      | SAM      |
| R-0h     | R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-175. DFOPT0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 22    | TCCHEN   | R      | 0h      | Transfer complete chaining enable 0h = Transfer complete chaining is disabled 1h = Transfer complete chaining is enabled                                                                                                                                                      |
| 21    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 20    | TCINTEN  | R      | 0h      | Transfer complete interrupt enable. 0h = Transfer complete interrupt is disabled. 1h = Transfer complete interrupt is enabled.                                                                                                                                                |
| 19-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 17-12 | TCC      | R      | 0h      | Transfer complete code. This 6 bit code is used to set the relevant bit in CER or IPR of the EDMA3PCC module.                                                                                                                                                                 |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 10-8  | FWID     | R      | 0h      | FIFO width. Applies if either SAM or DAM is set to constant addressing mode. 0h = FIFO width is 8-bit. 1h = FIFO width is 16-bit. 2h = FIFO width is 32-bit. 3h = FIFO width is 64-bit. 4h = FIFO width is 128-bit. 5h = FIFO width is 256-bit. 6h = Reserved. 7h = Reserved. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |

## Table 11-175. DFOPT0 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | PRI      | R      | 0h      | Transfer priority 0h = Priority 0 - Highest priority 1h = From 1h to 6h, Priority 1 to priority 6 7h = Priority 7 - Lowest priority                                                                                                          |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                              |
| 1     | DAM      | R      | 0h      | Destination address mode within an array 0h = Increment (INCR) mode. Destination addressing within an array increments. 1h = Constant addressing (CONST) mode. Destination addressing within an array wraps around upon reaching FIFO width. |
| 0     | SAM      | R      | 0h      | Source address mode within an array 0h = Increment (INCR) mode. Source addressing within an array increments. 1h = Constant addressing (CONST) mode. Source addressing within an array wraps around upon reaching FIFO width.                |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.2.24 DFSRC0 Register (offset = 304h) [reset = 0h]

DFSRC0 is shown in Figure 11-188 and described in Table 11-176.

The Destination FIFO Source Address Register (DFSRC) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Note: Source address reference is not applicable for Destination FIFO Register Set. Read returns 0.

## Figure 11-188. DFSRC0 Register

19

18

17

16

15

14

RESERVED

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-176. DFSRC0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

13

12

11

10

31

30

29

28

27

26

25

24

23

22

21

20

9

8

7

6

5

4

3

2

1

0

## 11.4.2.25 DFCNT0 Register (offset = 308h) [reset = 0h]

DFCNT0 is shown in Figure 11-189 and described in Table 11-177.

The Destination FIFO Count Register (DFCNT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-189. DFCNT0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| BCNT                                                                                  | ACNT                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-177. DFCNT0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | BCNT    | R      | 0h      | B-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation.                   |
| 15-0  | ACNT    | R      | 0h      | A-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation. Value 0 to FFFFh. |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.2.26 DFDST0 Register (offset = 30Ch) [reset = 0h]

DFDST0 is shown in Figure 11-190 and described in Table 11-178.

The Destination FIFO Destination Address Register (DFDST) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-190. DFDST0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DADDR   |
|------|---------------------------------------------------------------------------------------|
|      | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-178. DFDST0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DADDR   | R      | 0h      | Destination address for the destination FIFO register set. TC updates the value according to both the destination addressing mode (OPT.SAM) or destination index value (BIDX.DBIDX) after each write command is issued. When a TR is complete, the final value should be the address of the last write command issued. Note: If DAM == CONST, the 'active' address will increment internally as if the transfer were an 'Increment' transfer. The address issued on the write command interface will correctly issue the same address programmed by the user. |

## 11.4.2.27 DFBIDX0 Register (offset = 310h) [reset = 0h]

DFBIDX0 is shown in Figure 11-191 and described in Table 11-179.

The Destination FIFO B-Index Register (DFBIDX) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-191. DFBIDX0 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| DBIDX                                                                               | SBIDX                                                                               |
| R-0h                                                                                | R-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-179. DFBIDX0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | DBIDX   | R      | 0h      | B-Index offset between destination arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each destination array (there are BCNT arrays of ACNT elements). DBIDX is always used regardless of whether DAM is in Increment or FIFO mode. Value 0 to FFFFh. |
| 15-0  | SBIDX   | R      | 0h      | B-Index offset between source arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each source array (there are BCNT arrays of ACNT elements). SBIDX is always used regardless of whether SAM is in Increment or FIFO mode.                             |

<!-- image -->

<!-- image -->

## 11.4.2.28 DFMPPRXY0 Register (offset = 314h) [reset = 0h]

DFMPPRXY0 is shown in Figure 11-192 and described in Table 11-180.

The Destination FIFO Memory Protection Proxy Register (DFMPPRXY) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-192. DFMPPRXY0 Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIV      |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIVID    | PRIVID    | PRIVID    | PRIVID    |
| R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-180. DFMPPRXY0 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 8     | PRIV     | R      | 0h      | Privilege level. This contains the Privilege level used by the EDMA3 programmer to set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. The privilege ID is used while issuing read and write command to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIV of the host that set up the DMA transaction. 0h = User-level privilege 1h = Supervisor-level privilege |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 3-0   | PRIVID   | R      | 0h      | Privilege ID. This contains the Privilege ID of the EDMA3 programmer that set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. This PRIVID value is used while issuing read and write commands to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIVID of the host that set up the DMA transaction. Value 0 to Fh.                                                 |

## 11.4.2.29 DFOPT1 Register (offset = 340h) [reset = 0h]

DFOPT1 is shown in Figure 11-193 and described in Table 11-181.

The Destination FIFO Options Register (DFOPT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-193. DFOPT1 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | TCCHEN   | RESERVED | TCINTEN  | RESERVED | RESERVED | TCC      | TCC      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| TCC      | TCC      | TCC      |          | RESERVED |          | FWID     |          |
| R-0h     | R-0h     | R-0h     |          | R-0h     |          | R-0h     |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED |          | PRI      |          | RESERVED | RESERVED | DAM      | SAM      |
| R-0h     |          | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-181. DFOPT1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 22    | TCCHEN   | R      | 0h      | Transfer complete chaining enable 0h = Transfer complete chaining is disabled 1h = Transfer complete chaining is enabled                                                                                                                                                      |
| 21    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 20    | TCINTEN  | R      | 0h      | Transfer complete interrupt enable. 0h = Transfer complete interrupt is disabled. 1h = Transfer complete interrupt is enabled.                                                                                                                                                |
| 19-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 17-12 | TCC      | R      | 0h      | Transfer complete code. This 6 bit code is used to set the relevant bit in CER or IPR of the EDMA3PCC module.                                                                                                                                                                 |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 10-8  | FWID     | R      | 0h      | FIFO width. Applies if either SAM or DAM is set to constant addressing mode. 0h = FIFO width is 8-bit. 1h = FIFO width is 16-bit. 2h = FIFO width is 32-bit. 3h = FIFO width is 64-bit. 4h = FIFO width is 128-bit. 5h = FIFO width is 256-bit. 6h = Reserved. 7h = Reserved. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

## Table 11-181. DFOPT1 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | PRI      | R      | 0h      | Transfer priority 0h = Priority 0 - Highest priority 1h = From 1h to 6h, Priority 1 to priority 6 7h = Priority 7 - Lowest priority                                                                                                          |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                              |
| 1     | DAM      | R      | 0h      | Destination address mode within an array 0h = Increment (INCR) mode. Destination addressing within an array increments. 1h = Constant addressing (CONST) mode. Destination addressing within an array wraps around upon reaching FIFO width. |
| 0     | SAM      | R      | 0h      | Source address mode within an array 0h = Increment (INCR) mode. Source addressing within an array increments. 1h = Constant addressing (CONST) mode. Source addressing within an array wraps around upon reaching FIFO width.                |

## 11.4.2.30 DFSRC1 Register (offset = 344h) [reset = 0h]

DFSRC1 is shown in Figure 11-194 and described in Table 11-182.

The Destination FIFO Source Address Register (DFSRC) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers. Note: Source address is not applicable for the Destination FIFO Register Set. Read returns 0.

Note: Source address reference is not applicable for Destination FIFO Register Set. Read returns 0.

Figure 11-194. DFSRC1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-182. DFSRC1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

<!-- image -->

www.ti.com

<!-- image -->

## 11.4.2.31 DFCNT1 Register (offset = 348h) [reset = 0h]

DFCNT1 is shown in Figure 11-195 and described in Table 11-183.

The Destination FIFO Count Register (DFCNT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-195. DFCNT1 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| BCNT                                                                                  | ACNT                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-183. DFCNT1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | BCNT    | R      | 0h      | B-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation.                   |
| 15-0  | ACNT    | R      | 0h      | A-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation. Value 0 to FFFFh. |

## 11.4.2.32 DFDST1 Register (offset = 34Ch) [reset = 0h]

DFDST1 is shown in Figure 11-196 and described in Table 11-184.

The Destination FIFO Destination Address Register (DFDST) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-196. DFDST1 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DADDR   |
|------|------------------------------------------------------------------------------------------|
|      | R-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-184. DFDST1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DADDR   | R      | 0h      | ARRAY(0x245d830) Note: If DAM == CONST, the 'active' address will increment internally as if the transfer were an 'Increment' transfer. The address issued on the write command interface will correctly issue the same address programmed by the user. |

<!-- image -->

<!-- image -->

## 11.4.2.33 DFBIDX1 Register (offset = 350h) [reset = 0h]

DFBIDX1 is shown in Figure 11-197 and described in Table 11-185.

The Destination FIFO B-Index Register (DFBIDX) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-197. DFBIDX1 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| DBIDX                                                                               | SBIDX                                                                               |
| R-0h                                                                                | R-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-185. DFBIDX1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | DBIDX   | R      | 0h      | B-Index offset between destination arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each destination array (there are BCNT arrays of ACNT elements). DBIDX is always used regardless of whether DAM is in Increment or FIFO mode. Value 0 to FFFFh. |
| 15-0  | SBIDX   | R      | 0h      | B-Index offset between source arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each source array (there are BCNT arrays of ACNT elements). SBIDX is always used regardless of whether SAM is in Increment or FIFO mode.                             |

## 11.4.2.34 DFMPPRXY1 Register (offset = 354h) [reset = 0h]

DFMPPRXY1 is shown in Figure 11-198 and described in Table 11-186.

The Destination FIFO Memory Protection Proxy Register (DFMPPRXY) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-198. DFMPPRXY1 Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIV      |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIVID    | PRIVID    | PRIVID    | PRIVID    |
| R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-186. DFMPPRXY1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 8     | PRIV     | R      | 0h      | Privilege level. This contains the Privilege level used by the EDMA3 programmer to set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. The privilege ID is used while issuing read and write command to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIV of the host that set up the DMA transaction. 0h = User-level privilege 1h = Supervisor-level privilege |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 3-0   | PRIVID   | R      | 0h      | Privilege ID. This contains the Privilege ID of the EDMA3 programmer that set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. This PRIVID value is used while issuing read and write commands to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIVID of the host that set up the DMA transaction. Value 0 to Fh.                                                 |

<!-- image -->

<!-- image -->

## 11.4.2.35 DFOPT2 Register (offset = 380h) [reset = 0h]

DFOPT2 is shown in Figure 11-199 and described in Table 11-187.

The Destination FIFO Options Register (DFOPT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-199. DFOPT2 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | TCCHEN   | RESERVED | TCINTEN  | RESERVED | RESERVED | TCC      | TCC      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| TCC      | TCC      | TCC      |          | RESERVED |          | FWID     |          |
| R-0h     | R-0h     | R-0h     |          | R-0h     |          | R-0h     |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED |          | PRI      |          | RESERVED | RESERVED | DAM      | SAM      |
| R-0h     |          | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-187. DFOPT2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 22    | TCCHEN   | R      | 0h      | Transfer complete chaining enable 0h = Transfer complete chaining is disabled 1h = Transfer complete chaining is enabled                                                                                                                                                      |
| 21    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 20    | TCINTEN  | R      | 0h      | Transfer complete interrupt enable. 0h = Transfer complete interrupt is disabled. 1h = Transfer complete interrupt is enabled.                                                                                                                                                |
| 19-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 17-12 | TCC      | R      | 0h      | Transfer complete code. This 6 bit code is used to set the relevant bit in CER or IPR of the EDMA3PCC module.                                                                                                                                                                 |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 10-8  | FWID     | R      | 0h      | FIFO width. Applies if either SAM or DAM is set to constant addressing mode. 0h = FIFO width is 8-bit. 1h = FIFO width is 16-bit. 2h = FIFO width is 32-bit. 3h = FIFO width is 64-bit. 4h = FIFO width is 128-bit. 5h = FIFO width is 256-bit. 6h = Reserved. 7h = Reserved. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |

## Table 11-187. DFOPT2 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | PRI      | R      | 0h      | Transfer priority 0h = Priority 0 - Highest priority 1h = From 1h to 6h, Priority 1 to priority 6 7h = Priority 7 - Lowest priority                                                                                                          |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                              |
| 1     | DAM      | R      | 0h      | Destination address mode within an array 0h = Increment (INCR) mode. Destination addressing within an array increments. 1h = Constant addressing (CONST) mode. Destination addressing within an array wraps around upon reaching FIFO width. |
| 0     | SAM      | R      | 0h      | Source address mode within an array 0h = Increment (INCR) mode. Source addressing within an array increments. 1h = Constant addressing (CONST) mode. Source addressing within an array wraps around upon reaching FIFO width.                |

<!-- image -->

<!-- image -->

www.ti.com

## 11.4.2.36 DFSRC2 Register (offset = 384h) [reset = 0h]

DFSRC2 is shown in Figure 11-200 and described in Table 11-188.

The Destination FIFO Source Address Register (DFSRC) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers. Note: Source address is not applicable for Destination FIFO Register Set. Read returns 0.

Note: Source address reference is not applicable for Destination FIFO Register Set. Read returns 0.

## Figure 11-200. DFSRC2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-188. DFSRC2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

## 11.4.2.37 DFCNT2 Register (offset = 388h) [reset = 0h]

DFCNT2 is shown in Figure 11-201 and described in Table 11-189.

The Destination FIFO Count Register (DFCNT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-201. DFCNT2 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| BCNT                                                                                  | ACNT                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-189. DFCNT2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | BCNT    | R      | 0h      | B-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation.                   |
| 15-0  | ACNT    | R      | 0h      | A-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation. Value 0 to FFFFh. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.4.2.38 DFDST2 Register (offset = 38Ch) [reset = 0h]

DFDST2 is shown in Figure 11-202 and described in Table 11-190.

The Destination FIFO Destination Address Register (DFDST) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-202. DFDST2 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DADDR   |
|------|------------------------------------------------------------------------------------------|
|      | R-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-190. DFDST2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DADDR   | R      | 0h      | ARRAY(0x248ac60) Note: If DAM == CONST, the 'active' address will increment internally as if the transfer were an 'Increment' transfer. The address issued on the write command interface will correctly issue the same address programmed by the user. |

## 11.4.2.39 DFBIDX2 Register (offset = 390h) [reset = 0h]

DFBIDX2 is shown in Figure 11-203 and described in Table 11-191.

The Destination FIFO B-Index Register (DFBIDX) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-203. DFBIDX2 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| DBIDX                                                                               | SBIDX                                                                               |
| R-0h                                                                                | R-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-191. DFBIDX2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | DBIDX   | R      | 0h      | B-Index offset between destination arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each destination array (there are BCNT arrays of ACNT elements). DBIDX is always used regardless of whether DAM is in Increment or FIFO mode. Value 0 to FFFFh. |
| 15-0  | SBIDX   | R      | 0h      | B-Index offset between source arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each source array (there are BCNT arrays of ACNT elements). SBIDX is always used regardless of whether SAM is in Increment or FIFO mode.                             |

<!-- image -->

<!-- image -->

## 11.4.2.40 DFMPPRXY2 Register (offset = 394h) [reset = 0h]

DFMPPRXY2 is shown in Figure 11-204 and described in Table 11-192.

The Destination FIFO Memory Protection Proxy Register (DFMPPRXY) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-204. DFMPPRXY2 Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIV      |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIVID    | PRIVID    | PRIVID    | PRIVID    |
| R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-192. DFMPPRXY2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 8     | PRIV     | R      | 0h      | Privilege level. This contains the Privilege level used by the EDMA3 programmer to set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. The privilege ID is used while issuing read and write command to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIV of the host that set up the DMA transaction. 0h = User-level privilege 1h = Supervisor-level privilege |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 3-0   | PRIVID   | R      | 0h      | Privilege ID. This contains the Privilege ID of the EDMA3 programmer that set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. This PRIVID value is used while issuing read and write commands to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIVID of the host that set up the DMA transaction. Value 0 to Fh.                                                 |

## 11.4.2.41 DFOPT3 Register (offset = 3C0h) [reset = 0h]

DFOPT3 is shown in Figure 11-205 and described in Table 11-193.

The Destination FIFO Options Register (DFOPT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-205. DFOPT3 Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | TCCHEN   | RESERVED | TCINTEN  | RESERVED | RESERVED | TCC      | TCC      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| TCC      | TCC      | TCC      |          | RESERVED |          | FWID     |          |
| R-0h     | R-0h     | R-0h     |          | R-0h     |          | R-0h     |          |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED |          | PRI      |          | RESERVED | RESERVED | DAM      | SAM      |
| R-0h     |          | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-193. DFOPT3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 22    | TCCHEN   | R      | 0h      | Transfer complete chaining enable 0h = Transfer complete chaining is disabled 1h = Transfer complete chaining is enabled                                                                                                                                                      |
| 21    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 20    | TCINTEN  | R      | 0h      | Transfer complete interrupt enable. 0h = Transfer complete interrupt is disabled. 1h = Transfer complete interrupt is enabled.                                                                                                                                                |
| 19-18 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 17-12 | TCC      | R      | 0h      | Transfer complete code. This 6 bit code is used to set the relevant bit in CER or IPR of the EDMA3PCC module.                                                                                                                                                                 |
| 11    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |
| 10-8  | FWID     | R      | 0h      | FIFO width. Applies if either SAM or DAM is set to constant addressing mode. 0h = FIFO width is 8-bit. 1h = FIFO width is 16-bit. 2h = FIFO width is 32-bit. 3h = FIFO width is 64-bit. 4h = FIFO width is 128-bit. 5h = FIFO width is 256-bit. 6h = Reserved. 7h = Reserved. |
| 7     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                               |

<!-- image -->

www.ti.com

<!-- image -->

## Table 11-193. DFOPT3 Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 6-4   | PRI      | R      | 0h      | Transfer priority 0h = Priority 0 - Highest priority 1h = From 1h to 6h, Priority 1 to priority 6 7h = Priority 7 - Lowest priority                                                                                                          |
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                              |
| 1     | DAM      | R      | 0h      | Destination address mode within an array 0h = Increment (INCR) mode. Destination addressing within an array increments. 1h = Constant addressing (CONST) mode. Destination addressing within an array wraps around upon reaching FIFO width. |
| 0     | SAM      | R      | 0h      | Source address mode within an array 0h = Increment (INCR) mode. Source addressing within an array increments. 1h = Constant addressing (CONST) mode. Source addressing within an array wraps around upon reaching FIFO width.                |

## 11.4.2.42 DFSRC3 Register (offset = 3C4h) [reset = 0h]

DFSRC3 is shown in Figure 11-206 and described in Table 11-194.

The Destination FIFO Source Address Register (DFSRC) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers. Note: Source address is not applicable for Destination FIFO Register Set. Read returns 0.

Note: Source address reference is not applicable for Destination FIFO Register Set. Read returns 0.

Figure 11-206. DFSRC3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED   |
|------|---------------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-194. DFSRC3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description   |
|-------|----------|--------|---------|---------------|
| 31-0  | RESERVED | R      | 0h      |               |

<!-- image -->

<!-- image -->

## 11.4.2.43 DFCNT3 Register (offset = 3C8h) [reset = 0h]

DFCNT3 is shown in Figure 11-207 and described in Table 11-195.

The Destination FIFO Count Register (DFCNT) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-207. DFCNT3 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| BCNT                                                                                  | ACNT                                                                                  |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-195. DFCNT3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | BCNT    | R      | 0h      | B-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation.                   |
| 15-0  | ACNT    | R      | 0h      | A-dimension count remaining for Destination Register Set. Represents the amount of data remaining to be written. For the final TR in the Destination Register FIFO: TC decrements ACNT and BCNT as necessary after each write dataphase is issued. The final value should be 0 when TR is complete. For a non-final TR in the Destination Register FIFO: CNT will hold the originally programmed value or the optimized BCNT value after 2D optimization calculation. Value 0 to FFFFh. |

## 11.4.2.44 DFDST3 Register (offset = 3CCh) [reset = 0h]

DFDST3 is shown in Figure 11-208 and described in Table 11-196.

The Destination FIFO Destination Address Register (DFDST) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-208. DFDST3 Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 DADDR   |
|------|------------------------------------------------------------------------------------------|
|      | R-0h                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-196. DFDST3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DADDR   | R      | 0h      | ARRAY(0x24b1d10) Note: If DAM == CONST, the 'active' address will increment internally as if the transfer were an 'Increment' transfer. The address issued on the write command interface will correctly issue the same address programmed by the user. |

<!-- image -->

<!-- image -->

## 11.4.2.45 DFBIDX3 Register (offset = 3D0h) [reset = 0h]

DFBIDX3 is shown in Figure 11-209 and described in Table 11-197.

The Destination FIFO B-Index Register (DFBIDX) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

Figure 11-209. DFBIDX3 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2   |
|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| DBIDX                                                                               | SBIDX                                                                               |
| R-0h                                                                                | R-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 11-197. DFBIDX3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | DBIDX   | R      | 0h      | B-Index offset between destination arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each destination array (there are BCNT arrays of ACNT elements). DBIDX is always used regardless of whether DAM is in Increment or FIFO mode. Value 0 to FFFFh. |
| 15-0  | SBIDX   | R      | 0h      | B-Index offset between source arrays for the Destination FIFO Register Set. Represents the offset in bytes between the starting address of each source array (there are BCNT arrays of ACNT elements). SBIDX is always used regardless of whether SAM is in Increment or FIFO mode.                             |