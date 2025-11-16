## 23.4 Registers

## 23.4.1 DCAN Registers

Table 23-13 lists the memory-mapped registers for the DCAN. All register offset addresses not listed in Table 23-13 should be considered as reserved locations and the register contents should not be modified.

Table 23-13. DCAN Registers

| Offset   | Acronym   | Register Name                     | Section           |
|----------|-----------|-----------------------------------|-------------------|
| 0h       | CTL       | CAN Control Register              | Section 23.4.1.1  |
| 4h       | ES        | Error and Status Register         | Section 23.4.1.2  |
| 8h       | ERRC      | Error Counter Register            | Section 23.4.1.3  |
| Ch       | BTR       | Bit Timing Register               | Section 23.4.1.4  |
| 10h      | INT       | Interrupt Register                | Section 23.4.1.5  |
| 14h      | TEST      | Test Register                     | Section 23.4.1.6  |
| 1Ch      | PERR      | Parity Error Code Register        | Section 23.4.1.7  |
| 80h      | ABOTR     | Auto-Bus-On Time Register         | Section 23.4.1.8  |
| 84h      | TXRQ_X    | Transmission Request X Register   | Section 23.4.1.9  |
| 88h      | TXRQ12    | Transmission Request Register 12  | Section 23.4.1.10 |
| 8Ch      | TXRQ34    | Transmission Request Register 34  | Section 23.4.1.11 |
| 90h      | TXRQ56    | Transmission Request Register 56  | Section 23.4.1.12 |
| 94h      | TXRQ78    | Transmission Request Register 78  | Section 23.4.1.13 |
| 98h      | NWDAT_X   | New Data X Register               | Section 23.4.1.14 |
| 9Ch      | NWDAT12   | New Data Register 12              | Section 23.4.1.15 |
| A0h      | NWDAT34   | New Data Register 34              | Section 23.4.1.16 |
| A4h      | NWDAT56   | New Data Register 56              | Section 23.4.1.17 |
| A8h      | NWDAT78   | New Data Register 78              | Section 23.4.1.18 |
| ACh      | INTPND_X  | Interrupt Pending X Register      | Section 23.4.1.19 |
| B0h      | INTPND12  | Interrupt Pending Register 12     | Section 23.4.1.20 |
| B4h      | INTPND34  | Interrupt Pending Register 34     | Section 23.4.1.21 |
| B8h      | INTPND56  | Interrupt Pending Register 56     | Section 23.4.1.22 |
| BCh      | INTPND78  | Interrupt Pending Register 78     | Section 23.4.1.23 |
| C0h      | MSGVAL_X  | Message Valid X Register          | Section 23.4.1.24 |
| C4h      | MSGVAL12  | Message Valid Register 12         | Section 23.4.1.25 |
| C8h      | MSGVAL34  | Message Valid Register 34         | Section 23.4.1.26 |
| CCh      | MSGVAL56  | Message Valid Register 56         | Section 23.4.1.27 |
| D0h      | MSGVAL78  | Message Valid Register 78         | Section 23.4.1.28 |
| D8h      | INTMUX12  | Interrupt Multiplexer Register 12 | Section 23.4.1.29 |
| DCh      | INTMUX34  | Interrupt Multiplexer Register 34 | Section 23.4.1.30 |
| E0h      | INTMUX56  | Interrupt Multiplexer Register 56 | Section 23.4.1.31 |
| E4h      | INTMUX78  | Interrupt Multiplexer Register 78 | Section 23.4.1.32 |
| 100h     | IF1CMD    | IF1 Command Registers             | Section 23.4.1.33 |
| 104h     | IF1MSK    | IF1 Mask Register                 | Section 23.4.1.34 |
| 108h     | IF1ARB    | IF1 Arbitration Register          | Section 23.4.1.35 |
| 10Ch     | IF1MCTL   | IF1 Message Control Register      | Section 23.4.1.36 |
| 110h     | IF1DATA   | IF1 Data A Register               | Section 23.4.1.37 |
| 114h     | IF1DATB   | IF1 Data B Register               | Section 23.4.1.38 |
| 120h     | IF2CMD    | IF2 Command Registers             | Section 23.4.1.39 |
| 124h     | IF2MSK    | IF2 Mask Register                 | Section 23.4.1.40 |
| 128h     | IF2ARB    | IF2 Arbitration Register          | Section 23.4.1.41 |
| 12Ch     | IF2MCTL   | IF2 Message Control Register      | Section 23.4.1.42 |

<!-- image -->

<!-- image -->

www.ti.com

## Table 23-13. DCAN Registers (continued)

| Offset   | Acronym   | Register Name                 | Section           |
|----------|-----------|-------------------------------|-------------------|
| 130h     | IF2DATA   | IF2 Data A Register           | Section 23.4.1.43 |
| 134h     | IF2DATB   | IF2 Data B Register           | Section 23.4.1.44 |
| 140h     | IF3OBS    | IF3 Observation Register      | Section 23.4.1.45 |
| 144h     | IF3MSK    | IF3 Mask Register             | Section 23.4.1.46 |
| 148h     | IF3ARB    | IF3 Arbitration Register      | Section 23.4.1.47 |
| 14Ch     | IF3MCTL   | IF3 Message Control Register  | Section 23.4.1.48 |
| 150h     | IF3DATA   | IF3 Data A Register           | Section 23.4.1.49 |
| 154h     | IF3DATB   | IF3 Data B Register           | Section 23.4.1.50 |
| 160h     | IF3UPD12  | IF3 Update Enable Register 12 | Section 23.4.1.51 |
| 164h     | IF3UPD34  | IF3 Update Enable Register 34 | Section 23.4.1.52 |
| 168h     | IF3UPD56  | IF3 Update Enable Register 56 | Section 23.4.1.53 |
| 16Ch     | IF3UPD78  | IF3 Update Enable Register 78 | Section 23.4.1.54 |
| 1E0h     | TIOC      | CAN TX IO Control Register    | Section 23.4.1.55 |
| 1E4h     | RIOC      | CAN RX IO Control Register    | Section 23.4.1.56 |

## 23.4.1.1 CTL Register (offset = 0h) [reset = 1401h]

CTL is shown in Figure 23-19 and described in Table 23-14.

The Bus-Off recovery sequence (refer to CAN specification) cannot be shortened by setting or resetting Init bit. If the module goes Bus-Off, it will automatically set the Init bit and stop all bus activities. When the Init bit is cleared by the application again, the module will then wait for 129 occurrences of Bus Idle (129 * 11 consecutive recessive bits) before resuming normal operation. At the end of the bus-off recovery sequence, the error counters will be reset. After the Init bit is reset, each time when a sequence of 11 recessive bits is monitored, a Bit0 error code is written to the error and status register, enabling the CPU to check whether the CAN bus is stuck at dominant or continuously disturbed, and to monitor the proceeding of the bus-off recovery sequence.

Figure 23-19. CTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25     | 24      |
|----------|----------|----------|----------|----------|----------|--------|---------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | WUBA   | PDR     |
|          |          |          |          |          |          | R/W-0h | R/W-0h  |
| 23       | 22       | 21       | 20       | 19       | 18       | 17     | 16      |
|          | RESERVED |          | DE3      | DE2      | DE1      | IE1    | InitDbg |
|          | R-0h     |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h | R-0h    |
| 15       | 14       | 13       | 12       | 11       | 10       | 9      | 8       |
| SWR      | RESERVED |          |          |          |          | ABO    | IDS     |
| R/WP-0h  | R-0h     | PMD      | PMD      | PMD      |          |        | R/W-0h  |
| 7        | 6        | R/W-5h   | R/W-5h   | R/W-5h   |          | R/W-0h |         |
|          |          | 5        | 4        | 3        | 2        | 1      | 0       |
| Test     | CCE      | DAR      | RESERVED | EIE      | SIE      | IE0    | Init    |
| R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h | R/W-1h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-14. CTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 25    | WUBA     | R/W    | 0h      | Automatic wake up on bus activity when in local power-down mode. Note: The CAN message, which initiates the bus activity, cannot be received. This means that the first message received in power down and automatic wake-up mode, will be lost. 0h (R/W) = No detection of a dominant CAN bus level while in local power-down mode. 1h (R/W) = Detection of a dominant CAN bus level while in local power-down mode is enabled. On occurrence of a dominant CAN bus level, the wake up sequence is started. |
| 24    | PDR      | R/W    | 0h      | Request for local low power-down mode 0h (R/W) = No application request for local low power-down mode. If the application has cleared this bit while DCAN in local power-down mode, also the Init bit has to be cleared. 1h (R/W) = Local power-down mode has been requested by application. The DCAN will acknowledge the local power-down mode by setting bit PDA in the error and status register. The local clocks will be turned off by DCAN internal logic.                                            |
| 23-21 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 20    | DE3      | R/W    | 0h      | Enable DMA request line for IF3. Note: A pending DMA request for IF3 remains active until first access to one of the IF3 registers. 0h (R/W) = Disabled 1h (R/W) = Enabled                                                                                                                                                                                                                                                                                                                                   |

<!-- image -->

<!-- image -->

www.ti.com

## Table 23-14. CTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19    | DE2      | R/W    | 0h      | Enable DMA request line for IF2. Note: A pending DMA request for IF2 remains active until first access to one of the IF2 registers. 0h (R/W) = Disabled 1h (R/W) = Enabled                                                                                                                                                                                   |
| 18    | DE1      | R/W    | 0h      | Enable DMA request line for IF1. Note: A pending DMA request for IF1 remains active until first access to one of the IF1 registers. 0h (R/W) = Disabled 1h (R/W) = Enabled                                                                                                                                                                                   |
| 17    | IE1      | R/W    | 0h      | Interrupt line 1 enable 0h (R/W) = Disabled - Module interrupt DCAN1INT is always low. 1h (R/W) = Enabled - interrupts will assert line DCAN1INT to one; line remains active until pending interrupts are processed.                                                                                                                                         |
| 16    | InitDbg  | R      | 0h      | Internal init state while debug access 0h (R/W) = Not in debug mode, or debug mode requested but not entered. 1h (R/W) = Debug mode requested and internally entered; the DCAN is ready for debug accesses.                                                                                                                                                  |
| 15    | SWR      | R/WP   | 0h      | SW reset enable. Note: To execute software reset, the following procedure is necessary: (a) Set Init bit to shut down CAN communication and (b) Set SWR bit additionally to Init bit. 0h (R/W) = Normal Operation 1h (R/W) = Module is forced to reset state. This bit will automatically get cleared after execution of SW reset after one OCP clock cycle. |
| 14    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                              |
| 13-10 | PMD      | R/W    | 5h      | Parity on/off. 5 = Parity function disabled. Others = Parity function enabled.                                                                                                                                                                                                                                                                               |
| 9     | ABO      | R/W    | 0h      | Auto-Bus-On enable 0h (R/W) = The Auto-Bus-On feature is disabled 1h (R/W) = The Auto-Bus-On feature is enabled                                                                                                                                                                                                                                              |
| 8     | IDS      | R/W    | 0h      | Interruption debug support enable 0h (R/W) = When Debug/Suspend mode is requested, DCAN will wait for a started transmission or reception to be completed before entering Debug/Suspend mode 1h (R/W) = When Debug/Suspend mode is requested, DCAN will interrupt any transmission or reception, and enter Debug/Suspend mode immediately.                   |
| 7     | Test     | R/W    | 0h      | Test mode enable 0h (R/W) = Normal Operation 1h (R/W) = Test Mode                                                                                                                                                                                                                                                                                            |
| 6     | CCE      | R/W    | 0h      | Configuration change enable 0h (R/W) = The CPU has no write access to the configuration registers. 1h (R/W) = The CPU has write access to the configuration registers (when Init bit is set).                                                                                                                                                                |
| 5     | DAR      | R/W    | 0h      | Disable automatic retransmission 0h (R/W) = Automatic retransmission of not successful messages enabled. 1h (R/W) = Automatic retransmission disabled.                                                                                                                                                                                                       |
| 4     | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                              |

## Table 23-14. CTL Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                             |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | EIE     | R/W    | 0h      | Error interrupt enable 0h (R/W) = Disabled - PER, BOff and EWarn bits can not generate an interrupt. 1h (R/W) = Enabled - PER, BOff and EWarn bits can generate an interrupt at DCAN0INT line and affect the interrupt register.                        |
|     2 | SIE     | R/W    | 0h      | Status change interrupt enable 0h (R/W) = Disabled - WakeUpPnd, RxOk, TxOk and LEC bits can not generate an interrupt. 1h (R/W) = Enabled - WakeUpPnd, RxOk, TxOk and LEC can generate an interrupt at DCAN0INT line and affect the interrupt register. |
|     1 | IE0     | R/W    | 0h      | Interrupt line 0 enable 0h (R/W) = Disabled - Module interrupt DCAN0INT is always low. 1h (R/W) = Enabled - interrupts will assert line DCAN0INT to one; line remains active until pending interrupts are processed.                                    |
|     0 | Init    | R/W    | 1h      | Initialization 0h (R/W) = Normal operation 1h (R/W) = Initialization mode is entered                                                                                                                                                                    |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.2 ES Register (offset = 4h) [reset = 6Fh]

ES is shown in Figure 23-20 and described in Table 23-15.

Interrupts are generated by bits PER, BOff and EWarn (if EIE bit in CAN control register is set) and by bits WakeUpPnd, RxOk, TxOk, and LEC (if SIE bit in CAN control register is set). A change of bit EPass will not generate an interrupt. Reading the error and status register clears the WakeUpPnd, PER, RxOk and TxOk bits and set the LEC to value '7.' Additionally, the status interrupt value (0x8000) in the interrupt register will be replaced by the next lower priority interrupt value. The EOI for all other interrupts (DCANINT0 and DCANINT1) are automatically handled by hardware. For debug support, the auto clear functionality of error and status register (clear of status flags by read) is disabled when in debug/suspend mode.

## Figure 23-20. ES Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24       |
|----------|----------|----------|----------|----------|----------|------------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8        |
|          |          | RESERVED |          |          | PDA      | WakeUp_Pnd | PER_     |
|          |          | R-0h     |          |          | R-0h     | 0h         | 0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0        |
| BOff     | EWarn    | EPass    | RxOk     | TxOk     |          | LEC        |          |
| R-0h     | R-1h     | R-1h     | 0h       | 1h       |          | 7h         |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-15. ES Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                            |
| 10    | PDA        | R      | 0h      | Local power-down mode acknowledge 0h (R/W) = DCAN is not in local power-down mode. 1h (R/W) = Application request for setting DCAN to local power- down mode was successful. DCAN is in local power-down mode.                                                                                                             |
| 9     | WakeUp_Pnd |        | 0h      | Wake up pending. This bit can be used by the CPU to identify the DCAN as the source to wake up the system. This bit will be reset if error and status register is read. 0h (R/W) = No Wake Up is requested by DCAN. 1h (R/W) = DCAN has initiated a wake up of the system due to dominant CAN bus while module power down. |
| 8     | PER_       |        | 0h      | Parity error detected. This bit will be reset if error and status register is read. 0h (R/W) = No parity error has been detected since last read access. 1h (R/W) = The parity check mechanism has detected a parity error in the Message RAM.                                                                             |
| 7     | BOff       | R      | 0h      | Bus-Off state 0h (R/W) = The CAN module is not bus-off state. 1h (R/W) = The CAN module is in bus-off state.                                                                                                                                                                                                               |
| 6     | EWarn      | R      | 1h      | Warning state 0h (R/W) = Both error counters are below the error warning limit of 96. 1h (R/W) = At least one of the error counters has reached the error warning limit of 96.                                                                                                                                             |

## Table 23-15. ES Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5     | EPass   | R      | 1h      | Error passive state 0h (R/W) = On CAN Bus error, the DCAN could send active error frames. 1h (R/W) = The CAN core is in the error passive state as defined in the CAN Specification.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 4     | RxOk    |        | 0h      | Received a message successfully. This bit will be reset if error and status register is read. 0h (R/W) = No message has been successfully received since the last time when this bit was read by the CPU. This bit is never reset by DCAN internal events. 1h (R/W) = A message has been successfully received since the last time when this bit was reset by a read access of the CPU (independent of the result of acceptance filtering).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 3     | TxOk    |        | 1h      | Transmitted a message successfully. This bit will be reset if error and status register is read. 0h (R/W) = No message has been successfully transmitted since the last time when this bit was read by the CPU. This bit is never reset by DCAN internal events. 1h (R/W) = A message has been successfully transmitted (error free and acknowledged by at least one other node) since the last time when this bit was reset by a read access of the CPU.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 2-0   | LEC     |        | 7h      | Last error code. The LEC field indicates the type of the last error on the CAN bus. This field will be cleared to '0' when a message has been transferred (reception or transmission) without error. 0h (R/W) = No error 1h (R/W) = Stuff error. More than five equal bits in a row have been detected in a part of a received message where this is not allowed. 2h (R/W) = Form error. A fixed format part of a received frame has the wrong format. 3h (R/W) = Ack error. The message this CAN core transmitted was not acknowledged by another node. 4h (R/W) = Bit1 error. During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value '1'), but the monitored bus value was dominant. 5h (R/W) = Bit0 error. During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (logical value '0'), but the monitored bus level was recessive. During Bus-Off recovery, this status is set each time a sequence of 11 recessive bits has been monitored. This enables the CPU to monitor the proceeding of the Bus-Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). 6h (R/W) = CRC error. In a received message, the CRC check sum was incorrect. (CRC received for an incoming message does not match the calculated CRC for the received data). 7h (R/W) = No CAN bus event was detected since the last time the CPU read the error and status register. Any read access to the error and status register re-initializes the LEC to value '7.' |

<!-- image -->

<!-- image -->

## 23.4.1.3 ERRC Register (offset = 8h) [reset = 0h]

ERRC is shown in Figure 23-21 and described in Table 23-16.

## Figure 23-21. ERRC Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |          |
| RP       |          |          |          | REC_6:0_ |          |          |          |          |          |          | TEC_7:0_ |          |          |          |          |          |
| R-0h     |          |          |          | R-0h     |          |          |          |          |          |          | R-0h     |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-16. ERRC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                            |
| 15    | RP       | R      | 0h      | Receive error passive 0h (R/W) = The receive error counter is below the error passive level. 1h (R/W) = The receive error counter has reached the error passive level as defined in the CAN specification. |
| 14-8  | REC_6:0_ | R      | 0h      | Receive error counter. Actual state of the receive error counter (values from 0 to 255).                                                                                                                   |
| 7-0   | TEC_7:0_ | R      | 0h      | Transmit error counter. Actual state of the transmit error counter (values from 0 to 255).                                                                                                                 |

## 23.4.1.4 BTR Register (offset = Ch) [reset = 2301h]

BTR is shown in Figure 23-22 and described in Table 23-17.

This register is only writable if CCE and Init bits in the CAN control register are set. The CAN bit time may be programmed in the range of 8 to 25 time quanta. The CAN time quantum may be programmed in the range of 1 to1024 CAN\_CLK periods. With a CAN\_CLK of 8 MHz and BRPE = 0x00, the reset value of 0x00002301 configures the DCAN for a bit rate of 500kBit/s.

## Figure 23-22. BTR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED |          | BRPE     | BRPE     | BRPE     | BRPE     |
| R-0h     | R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | TSeg2    | TSeg2    |          | TSeg1    | TSeg1    | TSeg1    | TSeg1    |
| R-0h     | 2h       | 2h       |          | 3h       | 3h       | 3h       | 3h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| SJW      |          |          |          | BRP      |          |          |          |
| 0h       |          |          |          | 1h       |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-17. BTR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-20 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                  |
| 19-16 | BRPE     | R      | 0h      | Baud rate prescaler extension. Valid programmed values are 0 to 15. By programming BRPE the baud rate prescaler can be extended to values up to 1024.                                                                                                                                            |
| 15    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                  |
| 14-12 | TSeg2    |        | 2h      | Time segment after the sample point. Valid programmed values are 0 to 7. The actual TSeg2 value which is interpreted for the bit timing will be the programmed TSeg2 value + 1.                                                                                                                  |
| 11-8  | TSeg1    |        | 3h      | Time segment before the sample point. Valid programmed values are 1 to 15. The actual TSeg1 value interpreted for the bit timing will be the programmed TSeg1 value + 1.                                                                                                                         |
| 7-6   | SJW      |        | 0h      | Synchronization Jump Width. Valid programmed values are 0 to 3. The actual SJW value interpreted for the synchronization will be the programmed SJW value + 1.                                                                                                                                   |
| 5-0   | BRP      |        | 1h      | Baud rate prescaler. Value by which the CAN_CLK frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid programmed values are 0 to 63. The actual BRP value interpreted for the bit timing will be the programmed BRP value + 1. |

<!-- image -->

www.ti.com

<!-- image -->

## 23.4.1.5 INT Register (offset = 10h) [reset = 0h]

INT is shown in Figure 23-23 and described in Table 23-18.

## Figure 23-23. INT Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          | 23          | 22          | 21          | 20            | 19          | 18          | 17          | 16          |             |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|---------------|-------------|-------------|-------------|-------------|-------------|
|             |             |             | RESERVED    |             |             |             |             |             |             |             | Int1ID_23:16_ |             |             |             |             |             |
|             |             |             | R-0h        |             |             |             |             |             |             |             | R-0h          |             |             |             |             |             |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           | 7           | 6           | 5           | 4             | 3           | 2           | 1           | 0           |             |
| Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0   | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 | Int0ID_15_0 |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h          | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-18. INT Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 23-16 | Int1ID_23:16_ | R      | 0h      | Interrupt 1 Identifier (indicates the message object with the highest pending interrupt). If several interrupts are pending, the CAN interrupt register will point to the pending interrupt with the highest priority. The DCAN1INT interrupt line remains active until Int1ID reaches value 0 (the cause of the interrupt is reset) or until IE1 is cleared. A message interrupt is cleared by clearing the message object's IntPnd bit. Among the message interrupts, the message object's interrupt priority decreases with increasing message number. 0x 00: No interrupt is pending. 0x 01-0x 80: Number of message object which caused the interrupt. 0xFF: Unused.                                                                    |
| 15-0  | Int0ID_15_0   | R      | 0h      | Interrupt Identifier (the number here indicates the source of the interrupt). If several interrupts are pending, the CAN interrupt register will point to the pending interrupt with the highest priority. The DCAN0INT interrupt line remains active until Int0ID reaches value 0 (the cause of the interrupt is reset) or until IE0 is cleared. The Status interrupt has the highest priority. Among the message interrupts, the message object's interrupt priority decreases with increasing message number. 0x 0000: No interrupt is pending. 0x 0001-0x 0080: Number of message object which caused the interrupt. 0x 0081-0x7FFF: Unused (values 0081 to 7FFF). 0x 8000: Error and status register value is not 0x07. 0xFFFF: Unused. |

## 23.4.1.6 TEST Register (offset = 14h) [reset = 0h]

TEST is shown in Figure 23-24 and described in Table 23-19.

For all test modes, the test bit in CAN control register needs to be set to one. If test bit is set, the RDA, EXL, Tx1, Tx0, LBack and Silent bits are writable. Bit Rx monitors the state of pin CAN\_RX and therefore is only readable. All test register functions are disabled when test bit is cleared. The test register is only writable if test bit in CAN control register is set. Setting Tx[1:0] other than '00' will disturb message transfer. When the internal loop-back mode is active (bit LBack is set), bit EXL will be ignored.

## Figure 23-24. TEST Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RDA      | EXL      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | 0h       | 0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Rx       | Tx_1:0_  | Tx_1:0_  | LBack    | Silent   |          | RESERVED |          |
| R-0h     | 0h       | 0h       | 0h       | 0h       |          | R-0h     |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-19. TEST Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                    |
| 9     | RDA      |        | 0h      | RAM direct access enable 0h (R/W) = Normal operation 1h (R/W) = Direct access to the RAM is enabled while in test mode                                                                                                                             |
| 8     | EXL      |        | 0h      | External loopback mode 0h (R/W) = Disabled 1h (R/W) = Enabled                                                                                                                                                                                      |
| 7     | Rx       | R      | 0h      | Receive pin. Monitors the actual value of the CAN_RX pin 0h (R/W) = The CAN bus is dominant 1h (R/W) = The CAN bus is recessive                                                                                                                    |
| 6-5   | Tx_1:0_  |        | 0h      | Control of CAN_TX pin. 0h (R/W) = Normal operation, CAN_TX is controlled by the CAN core. 1h (R/W) = Sample point can be monitored at CAN_TX pin. 10h (R/W) = CAN_TX pin drives a dominant value. 11h (R/W) = CAN_TX pin drives a recessive value. |
| 4     | LBack    |        | 0h      | Loopback mode 0h (R/W) = Disabled 1h (R/W) = Enabled                                                                                                                                                                                               |
| 3     | Silent   |        | 0h      | Silent mode 0h (R/W) = Disabled 1h (R/W) = Enabled                                                                                                                                                                                                 |
| 2-0   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                    |

<!-- image -->

<!-- image -->

## 23.4.1.7 PERR Register (offset = 1Ch) [reset = 0h]

PERR is shown in Figure 23-25 and described in Table 23-20.

If a parity error is detected, the PER flag will be set in the error and status register. This bit is not reset by the parity check mechanism; it must be reset by reading the error and status register. In addition to the PER flag, the parity error code register will indicate the memory area where the parity error has been detected (message number and word number). If more than one word with a parity error was detected, the highest word number with a parity error will be displayed. After a parity error has been detected, the register will hold the last error code until power is removed.

## Figure 23-25. PERR Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | Word_Number    | Word_Number    | Word_Number    |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-20. PERR Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                              |
|-------|----------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-11 | RESERVED       | R      | 0h      |                                                                                                                                                                          |
| 10-8  | Word_Number    | R      | 0h      | Word number where parity error has been detected. 0x 01-0x 05: RDA word number (1 to 5) of the message object (according to the message RAM representation in RDA mode). |
| 7-0   | Message_Number | R      | 0h      | Message number. 0x 01-0x 80: Message object number where parity error has been detected.                                                                                 |

## 23.4.1.8 ABOTR Register (offset = 80h) [reset = 0h]

ABOTR is shown in Figure 23-26 and described in Table 23-21.

On write access to the CAN control register while Auto-Bus-On timer is running, the Auto-Bus-On procedure will be aborted. During Debug/Suspend mode, running Auto-Bus-On timer will be paused.

## Figure 23-26. ABOTR Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | ABO_Time                                                                           |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-21. ABOTR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | ABO_Time | R/W    | 0h      | Number of OCP clock cycles before a Bus-Off recovery sequence is started by clearing the Init bit. This function has to be enabled by setting bit ABO in CAN control register. The Auto-Bus-On timer is realized by a 32 bit counter that starts to count down to zero when the module goes Bus-Off. The counter will be reloaded with the preload value of the ABO time register after this phase. |

<!-- image -->

<!-- image -->

## 23.4.1.9 TXRQ\_X Register (offset = 84h) [reset = 0h]

TXRQ\_X is shown in Figure 23-27 and described in Table 23-22.

Example 1. Bit 0 of the transmission request X register represents byte 0 of the transmission request 1 register. If one or more bits in this byte are set, bit 0 of the transmission request X register will be set.

## Figure 23-27. TXRQ\_X Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| TxRqstReg8 | TxRqstReg8 | TxRqstReg7 | TxRqstReg7 | TxRqstReg6 | TxRqstReg6 | TxRqstReg5 | TxRqstReg5 |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| TxRqstReg4 | TxRqstReg4 | TxRqstReg3 | TxRqstReg3 | TxRqstReg2 | TxRqstReg2 | TxRqstReg1 | TxRqstReg1 |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-22. TXRQ\_X Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description   |
|-------|------------|--------|---------|---------------|
| 31-16 | RESERVED   | R      | 0h      |               |
| 15-14 | TxRqstReg8 | R      | 0h      | TxRqstReg8    |
| 13-12 | TxRqstReg7 | R      | 0h      | TxRqstReg7    |
| 11-10 | TxRqstReg6 | R      | 0h      | TxRqstReg6    |
| 9-8   | TxRqstReg5 | R      | 0h      | TxRqstReg5    |
| 7-6   | TxRqstReg4 | R      | 0h      | TxRqstReg4    |
| 5-4   | TxRqstReg3 | R      | 0h      | TxRqstReg3    |
| 3-2   | TxRqstReg2 | R      | 0h      | TxRqstReg2    |
| 1-0   | TxRqstReg1 | R      | 0h      | TxRqstReg1    |

## 23.4.1.10 TXRQ12 Register (offset = 88h) [reset = 0h]

TXRQ12 is shown in Figure 23-28 and described in Table 23-23.

The TXRQ12 to TXRQ78 registers hold the TxRqst bits of the implemented message objects. By reading out these bits, the CPU can check for pending transmission requests. The TxRqst bit in a specific message object can be set/reset by the CPU via the IF1/IF2 message interface registers, or by the message handler after reception of a remote frame or after a successful transmission.

## Figure 23-28. TXRQ12 Register

| 31 30 29     | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|--------------|------------------------------------------------------------------------------|
| TxRqs_32:17_ | TxRqs_16:1_                                                                  |
| R-0h         | R-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-23. TXRQ12 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                     |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | TxRqs_32:17_ | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |
| 15-0  | TxRqs_16:1_  | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |

<!-- image -->

<!-- image -->

## 23.4.1.11 TXRQ34 Register (offset = 8Ch) [reset = 0h]

TXRQ34 is shown in Figure 23-29 and described in Table 23-24.

The TXRQ12 to TXRQ78 registers hold the TxRqst bits of the implemented message objects. By reading out these bits, the CPU can check for pending transmission requests. The TxRqst bit in a specific message object can be set/reset by the CPU via the IF1/IF2 message interface registers, or by the message handler after reception of a remote frame or after a successful transmission.

## Figure 23-29. TXRQ34 Register

| 31 30 29 28 27   | 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------------------|------------------------------------------------------------------------|
| TxRqs_64:49_     | TxRqs_48:33_                                                           |
| R-0h             | R-0h                                                                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-24. TXRQ34 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                     |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | TxRqs_64:49_ | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |
| 15-0  | TxRqs_48:33_ | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |

## 23.4.1.12 TXRQ56 Register (offset = 90h) [reset = 0h]

TXRQ56 is shown in Figure 23-30 and described in Table 23-25.

The TXRQ12 to TXRQ78 registers hold the TxRqst bits of the implemented message objects. By reading out these bits, the CPU can check for pending transmission requests. The TxRqst bit in a specific message object can be set/reset by the CPU via the IF1/IF2 message interface registers, or by the message handler after reception of a remote frame or after a successful transmission.

## Figure 23-30. TXRQ56 Register

| 31 30 29 28   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|---------------------------------------------------------------------------|
| TxRqs_96:81_  | TxRqs_80:65_                                                              |
| R-0h          | R-0h                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-25. TXRQ56 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                     |
|-------|--------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | TxRqs_96:81_ | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |
| 15-0  | TxRqs_80:65_ | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |

<!-- image -->

<!-- image -->

## 23.4.1.13 TXRQ78 Register (offset = 94h) [reset = 0h]

TXRQ78 is shown in Figure 23-31 and described in Table 23-26.

The TXRQ12 to TXRQ78 registers hold the TxRqst bits of the implemented message objects. By reading out these bits, the CPU can check for pending transmission requests. The TxRqst bit in a specific message object can be set/reset by the CPU via the IF1/IF2 message interface registers, or by the message handler after reception of a remote frame or after a successful transmission.

## Figure 23-31. TXRQ78 Register

| 31 30 29       | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------------|------------------------------------------------------------------------------|
| TxRqs_128:113_ | TxRqs_112:97_                                                                |
| R-0h           | R-0h                                                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-26. TXRQ78 Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                     |
|-------|----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | TxRqs_128:113_ | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |
| 15-0  | TxRqs_112:97_  | R      | 0h      | Transmission request bits (for all message objects) 0h (R/W) = No transmission has been requested for this message object. 1h (R/W) = The transmission of this message object is requested and is not yet done. |

## 23.4.1.14 NWDAT\_X Register (offset = 98h) [reset = 0h]

NWDAT\_X is shown in Figure 23-32 and described in Table 23-27.

With the new data X register, the CPU can detect if one or more bits in the different new data registers are set. Each register bit represents a group of eight message objects. If at least on of the NewDat bits of these message objects are set, the corresponding bit in the new data X register will be set. Example 1. Bit 0 of the new data X register represents byte 0 of the new data 1 register. If one or more bits in this byte are set, bit 0 of the new data X register will be set.

Figure 23-32. NWDAT\_X Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| NewDatReg8 | NewDatReg8 | NewDatReg7 | NewDatReg7 | NewDatReg6 | NewDatReg6 | NewDatReg5 | NewDatReg5 |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| NewDatReg4 | NewDatReg4 | NewDatReg3 | NewDatReg3 | NewDatReg2 | NewDatReg2 | NewDatReg1 | NewDatReg1 |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-27. NWDAT\_X Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description   |
|-------|------------|--------|---------|---------------|
| 31-16 | RESERVED   | R      | 0h      |               |
| 15-14 | NewDatReg8 | R      | 0h      | NewDatReg8    |
| 13-12 | NewDatReg7 | R      | 0h      | NewDatReg7    |
| 11-10 | NewDatReg6 | R      | 0h      | NewDatReg6    |
| 9-8   | NewDatReg5 | R      | 0h      | NewDatReg5    |
| 7-6   | NewDatReg4 | R      | 0h      | NewDatReg4    |
| 5-4   | NewDatReg3 | R      | 0h      | NewDatReg3    |
| 3-2   | NewDatReg2 | R      | 0h      | NewDatReg2    |
| 1-0   | NewDatReg1 | R      | 0h      | NewDatReg1    |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 23.4.1.15 NWDAT12 Register (offset = 9Ch) [reset = 0h]

NWDAT12 is shown in Figure 23-33 and described in Table 23-28.

These registers hold the NewDat bits of the implemented message objects. By reading out these bits, the CPU can check for new data in the message objects. The NewDat bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after reception of a data frame or after a successful transmission.

Figure 23-33. NWDAT12 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 NewDat_32:17_ NewDat_16:1_   |
|------------|---------------------------------------------------------------------------------------------------------|
| R-0h       | R-0h                                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-28. NWDAT12 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                 |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | NewDat_32:17_ | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |
| 15-0  | NewDat_16:1_  | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |

## 23.4.1.16 NWDAT34 Register (offset = A0h) [reset = 0h]

NWDAT34 is shown in Figure 23-34 and described in Table 23-29.

These registers hold the NewDat bits of the implemented message objects. By reading out these bits, the CPU can check for new data in the message objects. The NewDat bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after reception of a data frame or after a successful transmission.

Figure 23-34. NWDAT34 Register

| 31 30   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 NewDat_64:49_ NewDat_48:33_   |
|---------|-------------------------------------------------------------------------------------------------------------|
| R-0h    | R-0h                                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-29. NWDAT34 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                 |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | NewDat_64:49_ | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |
| 15-0  | NewDat_48:33_ | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.17 NWDAT56 Register (offset = A4h) [reset = 0h]

NWDAT56 is shown in Figure 23-35 and described in Table 23-30.

These registers hold the NewDat bits of the implemented message objects. By reading out these bits, the CPU can check for new data in the message objects. The NewDat bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after reception of a data frame or after a successful transmission.

## Figure 23-35. NWDAT56 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 NewDat_96:81_ NewDat_80:65_   |
|------------|----------------------------------------------------------------------------------------------------------|
| R-0h       | R-0h                                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-30. NWDAT56 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                 |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | NewDat_96:81_ | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |
| 15-0  | NewDat_80:65_ | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |

## 23.4.1.18 NWDAT78 Register (offset = A8h) [reset = 0h]

NWDAT78 is shown in Figure 23-36 and described in Table 23-31.

These registers hold the NewDat bits of the implemented message objects. By reading out these bits, the CPU can check for new data in the message objects. The NewDat bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after reception of a data frame or after a successful transmission.

Figure 23-36. NWDAT78 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| NewDat_128:113_                                                                       | NewDat_112:97_                                                                        |
| R-0h                                                                                  | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-31. NWDAT78 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                 |
|-------|-----------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | NewDat_128:113_ | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |
| 15-0  | NewDat_112:97_  | R      | 0h      | New Data Bits (for all message objects) 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.19 INTPND\_X Register (offset = ACh) [reset = 0h]

INTPND\_X is shown in Figure 23-37 and described in Table 23-32.

With the interrupt pending X register, the CPU can detect if one or more bits in the different interrupt pending registers are set. Each bit of this register represents a group of eight message objects. If at least one of the IntPnd bits of these message objects are set, the corresponding bit in the interrupt pending X register will be set. Example 2. Bit 0 of the interrupt pending X register represents byte 0 of the interrupt pending 1 register. If one or more bits in this byte are set, bit 0 of the interrupt pending X register will be set.

## Figure 23-37. INTPND\_X Register

| 31         | 30         | 29         | 28         | 27         | 26         | 25         | 24         |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 23         | 22         | 21         | 20         | 19         | 18         | 17         | 16         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
| IntPndReg8 | IntPndReg8 | IntPndReg7 | IntPndReg7 | IntPndReg6 | IntPndReg6 | IntPndReg5 | IntPndReg5 |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| IntPndReg4 | IntPndReg4 | IntPndReg3 | IntPndReg3 | IntPndReg2 | IntPndReg2 | IntPndReg1 | IntPndReg1 |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-32. INTPND\_X Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description   |
|-------|------------|--------|---------|---------------|
| 31-16 | RESERVED   | R      | 0h      |               |
| 15-14 | IntPndReg8 | R      | 0h      | IntPndReg8    |
| 13-12 | IntPndReg7 | R      | 0h      | IntPndReg7    |
| 11-10 | IntPndReg6 | R      | 0h      | IntPndReg6    |
| 9-8   | IntPndReg5 | R      | 0h      | IntPndReg5    |
| 7-6   | IntPndReg4 | R      | 0h      | IntPndReg4    |
| 5-4   | IntPndReg3 | R      | 0h      | IntPndReg3    |
| 3-2   | IntPndReg2 | R      | 0h      | IntPndReg2    |
| 1-0   | IntPndReg1 | R      | 0h      | IntPndReg1    |

## 23.4.1.20 INTPND12 Register (offset = B0h) [reset = 0h]

INTPND12 is shown in Figure 23-38 and described in Table 23-33.

These registers hold the IntPnd bits of the implemented message objects. By reading out these bits, the CPU can check for pending interrupts in the message objects. The IntPnd bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

## Figure 23-38. INTPND12 Register

| 31 30 29 28   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|---------------------------------------------------------------------------|
| IntPnd_32:17_ | IntPnd_16:1_                                                              |
| R-0h          | R-0h                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-33. INTPND12 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                      |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IntPnd_32:17_ | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |
| 15-0  | IntPnd_16:1_  | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |

<!-- image -->

<!-- image -->

## 23.4.1.21 INTPND34 Register (offset = B4h) [reset = 0h]

INTPND34 is shown in Figure 23-39 and described in Table 23-34.

These registers hold the IntPnd bits of the implemented message objects. By reading out these bits, the CPU can check for pending interrupts in the message objects. The IntPnd bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

## Figure 23-39. INTPND34 Register

| 31 30 29 28   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|---------------------------------------------------------------------------|
| IntPnd_64:49_ | IntPnd_48:33_                                                             |
| R-0h          | R-0h                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-34. INTPND34 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                      |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IntPnd_64:49_ | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |
| 15-0  | IntPnd_48:33_ | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |

## 23.4.1.22 INTPND56 Register (offset = B8h) [reset = 0h]

INTPND56 is shown in Figure 23-40 and described in Table 23-35.

These registers hold the IntPnd bits of the implemented message objects. By reading out these bits, the CPU can check for pending interrupts in the message objects. The IntPnd bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

Figure 23-40. INTPND56 Register

| 31 30 29 28   | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------|---------------------------------------------------------------------------|
| IntPnd_96:81_ | IntPnd_80:65_                                                             |
| R-0h          | R-0h                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-35. INTPND56 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                      |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IntPnd_96:81_ | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |
| 15-0  | IntPnd_80:65_ | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |

<!-- image -->

<!-- image -->

## 23.4.1.23 INTPND78 Register (offset = BCh) [reset = 0h]

INTPND78 is shown in Figure 23-41 and described in Table 23-36.

These registers hold the IntPnd bits of the implemented message objects. By reading out these bits, the CPU can check for pending interrupts in the message objects. The IntPnd bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

## Figure 23-41. INTPND78 Register

| 31 30 29 28     | 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|-----------------|---------------------------------------------------------------------------|
| IntPnd_128:113_ | IntPnd_112:97_                                                            |
| R-0h            | R-0h                                                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-36. INTPND78 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                      |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IntPnd_128:113_ | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |
| 15-0  | IntPnd_112:97_  | R      | 0h      | Interrupt Pending Bits (for all message objects) 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. |

## 23.4.1.24 MSGVAL\_X Register (offset = C0h) [reset = 0h]

MSGVAL\_X is shown in Figure 23-42 and described in Table 23-37.

With the message valid X register, the CPU can detect if one or more bits in the different message valid registers are set. Each bit of this register represents a group of eight message objects. If at least one of the MsgVal bits of these message objects are set, the corresponding bit in the message valid X register will be set. Example 3. Bit 0 of the message valid X register represents byte 0 of the message valid 1 register. If one or more bits in this byte are set, bit 0 of the message valid X register will be set.

Figure 23-42. MSGVAL\_X Register

|   30 |   29 | 28                                | 27              | 31 26         | 25       |   24 | RESERVED          |
|------|------|-----------------------------------|-----------------|---------------|----------|------|-------------------|
|   22 |   22 | 22                                | 22              | 22            | 22       |   22 | 22                |
|   21 |   21 | 21                                | 21              | 21            | 21       |   21 | 21                |
|   20 |   19 | 18                                | 17              | 23 16 R-0h 15 | RESERVED |   14 | 13                |
|   12 |   12 | 12                                | 12              | 12            | 12       |   12 | 12                |
|   11 |   11 | 11                                | 11              | 11            | 11       |   11 | 11                |
|   10 |    9 | 8 MsgValReg6 MsgValReg5 R-0h R-0h | MsgValReg8 R-0h | 7             | 6        |    5 | MsgValReg7 R-0h 4 |
|    3 |    3 | 2                                 | 2               | 1             | 1        |    0 | 0                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-37. MSGVAL\_X Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description   |
|-------|------------|--------|---------|---------------|
| 31-16 | RESERVED   | R      | 0h      |               |
| 15-14 | MsgValReg8 | R      | 0h      | MsgValReg8    |
| 13-12 | MsgValReg7 | R      | 0h      | MsgValReg7    |
| 11-10 | MsgValReg6 | R      | 0h      | MsgValReg6    |
| 9-8   | MsgValReg5 | R      | 0h      | MsgValReg5    |
| 7-6   | MsgValReg4 | R      | 0h      | MsgValReg4    |
| 5-4   | MsgValReg3 | R      | 0h      | MsgValReg3    |
| 3-2   | MsgValReg2 | R      | 0h      | MsgValReg2    |
| 1-0   | MsgValReg1 | R      | 0h      | MsgValReg1    |

<!-- image -->

<!-- image -->

## 23.4.1.25 MSGVAL12 Register (offset = C4h) [reset = 0h]

MSGVAL12 is shown in Figure 23-43 and described in Table 23-38.

These registers hold the MsgVal bits of the implemented message objects. By reading out these bits, the CPU can check which message objects are valid. The MsgVal bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

## Figure 23-43. MSGVAL12 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MsgVal_32:17_ MsgVal_16:1_   |
|------------|---------------------------------------------------------------------------------------------------------|
| R-0h       | R-0h                                                                                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-38. MSGVAL12 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | MsgVal_32:17_ | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |
| 15-0  | MsgVal_16:1_  | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |

## 23.4.1.26 MSGVAL34 Register (offset = C8h) [reset = 0h]

MSGVAL34 is shown in Figure 23-44 and described in Table 23-39.

These registers hold the MsgVal bits of the implemented message objects. By reading out these bits, the CPU can check which message objects are valid. The MsgVal bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

Figure 23-44. MSGVAL34 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MsgVal_64:49_ MsgVal_48:33_   |
|------------|----------------------------------------------------------------------------------------------------------|
| R-0h       | R-0h                                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-39. MSGVAL34 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | MsgVal_64:49_ | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |
| 15-0  | MsgVal_48:33_ | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.27 MSGVAL56 Register (offset = CCh) [reset = 0h]

MSGVAL56 is shown in Figure 23-45 and described in Table 23-40.

These registers hold the MsgVal bits of the implemented message objects. By reading out these bits, the CPU can check which message objects are valid. The MsgVal bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

## Figure 23-45. MSGVAL56 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MsgVal_96:81_ MsgVal_80:65_   |
|------------|----------------------------------------------------------------------------------------------------------|
| R-0h       | R-0h                                                                                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-40. MSGVAL56 Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | MsgVal_96:81_ | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |
| 15-0  | MsgVal_80:65_ | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |

## 23.4.1.28 MSGVAL78 Register (offset = D0h) [reset = 0h]

MSGVAL78 is shown in Figure 23-46 and described in Table 23-41.

These registers hold the MsgVal bits of the implemented message objects. By reading out these bits, the CPU can check which message objects are valid. The MsgVal bit of a specific message object can be set/reset by the CPU via the IF1/IF2 interface register sets, or by the message handler after a reception or a successful transmission.

Figure 23-46. MSGVAL78 Register

| 31 30 29   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 MsgVal_128:113_ MsgVal_112:97_   |
|------------|-------------------------------------------------------------------------------------------------------------|
| R-0h       | R-0h                                                                                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-41. MSGVAL78 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | MsgVal_128:113_ | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |
| 15-0  | MsgVal_112:97_  | R      | 0h      | Message valid bits (for all message objects) 0h (R/W) = This message object is ignored by the message handler. 1h (R/W) = This message object is configured and will be considered by the message handler. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.29 INTMUX12 Register (offset = D8h) [reset = 0h]

INTMUX12 is shown in Figure 23-47 and described in Table 23-42.

The IntMux flag determine for each message object, which of the two interrupt lines (DCAN0INT or DCAN1INT) will be asserted when the IntPnd of this message object is set. Both interrupt lines can be globally enabled or disabled by setting or clearing IE0 and IE1 bits in CAN control register. The IntPnd bit of a specific message object can be set or reset by the CPU via the IF1/IF2 interface register sets, or by message handler after reception or successful transmission of a frame. This will also affect the Int0ID resp Int1ID flags in the interrupt register.

## Figure 23-47. INTMUX12 Register

| 31 30   | 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0 IntMux   |
|---------|---------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-42. INTMUX12 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | IntMux  | R      | 0h      | IntMux[31:0] multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. The mapping from the bits to the message objects is as follows. Bit 0 -> Last implemented message object. Bit 1 -> Message object number 1. Bit 2 -> Message object number 2. 0h (R/W) = DCAN0INT line is active if corresponding IntPnd flag is one. 1h (R/W) = DCAN1INT line is active if corresponding IntPnd flag is one. |

## 23.4.1.30 INTMUX34 Register (offset = DCh) [reset = 0h]

INTMUX34 is shown in Figure 23-48 and described in Table 23-43.

The IntMux flag determine for each message object, which of the two interrupt lines (DCAN0INT or DCAN1INT) will be asserted when the IntPnd of this message object is set. Both interrupt lines can be globally enabled or disabled by setting or clearing IE0 and IE1 bits in CAN control register. The IntPnd bit of a specific message object can be set or reset by the CPU via the IF1/IF2 interface register sets, or by message handler after reception or successful transmission of a frame. This will also affect the Int0ID resp Int1ID flags in the interrupt register.

Figure 23-48. INTMUX34 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IntMux   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-43. INTMUX34 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | IntMux  | R      | 0h      | IntMux[63:32] multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. The mapping from the bits to the message objects is as follows. Bit 0 -> Last implemented message object. Bit 1 -> Message object number 1 Bit 2 -> Message object number 2. 0h (R/W) = DCAN0INT line is active if corresponding IntPnd flag is one. 1h (R/W) = DCAN1INT line is active if corresponding IntPnd flag is one. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.31 INTMUX56 Register (offset = E0h) [reset = 0h]

INTMUX56 is shown in Figure 23-49 and described in Table 23-44.

The IntMux flag determine for each message object, which of the two interrupt lines (DCAN0INT or DCAN1INT) will be asserted when the IntPnd of this message object is set. Both interrupt lines can be globally enabled or disabled by setting or clearing IE0 and IE1 bits in CAN control register. The IntPnd bit of a specific message object can be set or reset by the CPU via the IF1/IF2 interface register sets, or by message handler after reception or successful transmission of a frame. This will also affect the Int0ID resp Int1ID flags in the interrupt register.

## Figure 23-49. INTMUX56 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IntMux   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-44. INTMUX56 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | IntMux  | R      | 0h      | IntMux[95:64] multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. The mapping from the bits to the message objects is as follows. Bit 0 -> Last implemented message object. Bit 1 -> Message object number 1. Bit 2 -> Message object number 2. 0h (R/W) = DCAN0INT line is active if corresponding IntPnd flag is one. 1h (R/W) = DCAN1INT line is active if corresponding IntPnd flag is one. |

## 23.4.1.32 INTMUX78 Register (offset = E4h) [reset = 0h]

INTMUX78 is shown in Figure 23-50 and described in Table 23-45.

The IntMux flag determine for each message object, which of the two interrupt lines (DCAN0INT or DCAN1INT) will be asserted when the IntPnd of this message object is set. Both interrupt lines can be globally enabled or disabled by setting or clearing IE0 and IE1 bits in CAN control register. The IntPnd bit of a specific message object can be set or reset by the CPU via the IF1/IF2 interface register sets, or by message handler after reception or successful transmission of a frame. This will also affect the Int0ID resp Int1ID flags in the interrupt register.

Figure 23-50. INTMUX78 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 IntMux   |
|------|----------------------------------------------------------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-45. INTMUX78 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | IntMux  | R      | 0h      | IntMux[127:96] multiplexes IntPnd value to either DCAN0INT or DCAN1INT interrupt lines. The mapping from the bits to the message objects is as follows. Bit 0 -> Last implemented message object. Bit 1 -> Message object number 1. Bit 2 -> Message object number 2. 0h (R/W) = DCAN0INT line is active if corresponding IntPnd flag is one. 1h (R/W) = DCAN1INT line is active if corresponding IntPnd flag is one. |

<!-- image -->

<!-- image -->

## 23.4.1.33 IF1CMD Register (offset = 100h) [reset = 0h]

IF1CMD is shown in Figure 23-51 and described in Table 23-46.

The IF1 Command Register (IF1CMD) configures and initiates the transfer between the IF1 register sets and the message RAM. It is configurable which portions of the message object should be transferred. A transfer is started when the CPU writes the message number to bits [7:0] of the IF1 command register. With this write operation, the Busy bit is automatically set to '1' to indicate that a transfer is in progress. After 4 to 14 OCP clock cycles, the transfer between the interface register and the message RAM will be completed and the Busy bit is cleared. The maximum number of cycles is needed when the message transfer concurs with a CAN message transmission, acceptance filtering, or message storage. If the CPU writes to both IF1 command registers consecutively (request of a second transfer while first transfer is still in progress), the second transfer will start after the first one has been completed. While Busy bit is one, IF1 register sets are write protected. For debug support, the auto clear functionality of the IF1 command registers (clear of DMAactive flag by r/w) is disabled during Debug/Suspend mode. If an invalid Message Number is written to bits [7:0] of the IF1 command register, the message handler may access an implemented (valid) message object instead.

## Figure 23-51. IF1CMD Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| WR_RD          | Mask           | Arb            | Control        | ClrIntPnd      | TxRqst_NewDa t | Data_A         | Data_B         |
| 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| Busy           | DMAactive      | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| 0h             | 0h             | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number |
| 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-46. IF1CMD Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 23    | WR_RD    |        | 0h      | Write/Read 0h (R/W) = Direction = Read: Transfer direction is from the message object addressed by Message Number (Bits [7:0]) to the IF1 register set. 1h (R/W) = Direction = Write: Transfer direction is from the IF1 register set to the message object addressed by Message Number (Bits [7:0]).                                                                                                                             |
| 22    | Mask     |        | 0h      | Access mask bits 0h (R/W) = Mask bits will not be changed 1h (R/W) = Direction = Read: The mask bits (identifier mask + MDir + MXtd) will be transferred from the message object addressed by Message Number (Bits [7:0]) to the IF1 register set. Direction = Write: The mask bits (identifier mask + MDir + MXtd) will be transferred from the IF1 register set to the message object addressed by Message Number (Bits [7:0]). |

## Table 23-46. IF1CMD Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    21 | Arb           |        | 0h      | Access arbitration bits 0h (R/W) = Arbitration bits will not be changed 1h (R/W) = Direction = Read: The Arbitration bits (Identifier + Dir + Xtd + MsgVal) will be transferred from the message object addressed by Message Number (Bits [7:0]) to the corresponding IF1 register set. Direction = Write: The Arbitration bits (Identifier + Dir + Xtd + MsgVal) will be transferred from the IF1 register set to the message object addressed by Message Number (Bits [7:0]).                                                                                                                                                                                                                                                                                        |
|    20 | Control       |        | 0h      | Access control bits. If the TxRqst/NewDat bit in this register(Bit [18]) is set, the TxRqst/ NewDat bit in the IF1 message control register will be ignored. 0h (R/W) = Control bits will not be changed 1h (R/W) = Direction = Read: The message control bits will be transferred from the message object addressed by message number (Bits [7:0]) to the IF1 register set. Direction = Write: The message control bits will be transferred from the IF1 register set to the message object addressed by message number (Bits [7:0]).                                                                                                                                                                                                                                 |
|    19 | ClrIntPnd     |        | 0h      | Clear interrupt pending bit 0h (R/W) = IntPnd bit will not be changed 1h (R/W) = Direction = Read: Clears IntPnd bit in the message object. Direction = Write: This bit is ignored. Copying of IntPnd flag from IF1 Registers to message RAM can only be controlled by the control flag (Bit [20]).                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|    18 | TxRqst_NewDat |        | 0h      | Access transmission request bit. Note: If a CAN transmission is requested by setting TxRqst/NewDat in this register, the TxRqst/NewDat bits in the message object will be set to one independent of the values in IF1 message control Register. Note: A read access to a message object can be combined with the reset of the control bits IntPnd and NewDat. The values of these bits transferred to the IF1 message control register always reflect the status before resetting them. 0h (R/W) = Direction = Read: NewDat bit will not be changed. Direction = Write: TxRqst/NewDat bit will be handled according to the control bit. 1h (R/W) = Direction = Read: Clears NewDat bit in the message object. Direction = Write: Sets TxRqst/NewDat in message object. |
|    17 | Data_A        |        | 0h      | Access Data Bytes 0 to 3. 0h (R/W) = Data Bytes 0-3 will not be changed. 1h (R/W) = Direction = Read: The data bytes 0-3 will be transferred from the message object addressed by the Message Number (Bits [7:0]) to the corresponding IF1 register set. Direction = Write: The data bytes 0-3 will be transferred from the IF1 register set to the message object addressed by the Message Number (Bits [7:0]). Note: The duration of the message transfer is independent of the number of bytes to be transferred.                                                                                                                                                                                                                                                   |
|    16 | Data_B        |        | 0h      | Access Data Bytes 4 to 7. 0h (R/W) = Data Bytes 4-7 will not be changed. 1h (R/W) = Direction = Read: The data bytes 4-7 will be transferred from the message object addressed by Message Number (Bits [7:0]) to the corresponding IF1 register set. Direction = Write: The data bytes 4-7 will be transferred from the IF1 register set to the message object addressed by message number (Bits [7:0]). Note: The duration of the message transfer is independent of the number of bytes to be transferred.                                                                                                                                                                                                                                                           |

<!-- image -->

<!-- image -->

## Table 23-46. IF1CMD Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15    | Busy           |        | 0h      | Busy flag. This bit is set to one after the message number has been written to bits 7 to 0. IF1 register set will be write protected. The bit is cleared after read/write action has been finished. 0h (R/W) = No transfer between IF1 register set and message RAM is in progress. 1h (R/W) = Transfer between IF1 register set and message RAM is in progress.                                                                                                                                                              |
| 14    | DMAactive      |        | 0h      | Activation of DMA feature for subsequent internal IF1 update. Note: Due to the auto reset feature of the DMAactive bit, this bit has to be set for each subsequent DMA cycle separately. 0h (R/W) = DMA request line is independent of IF1 activities. 1h (R/W) = DMA is requested after completed transfer between IF1 register set and message RAM. The DMA request remains active until the first read or write to one of the IF1 registers; an exception is a write to Message Number (Bits [7:0]) when DMAactive is one. |
| 13-8  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 7-0   | Message_Number |        | 0h      | Number of message object in message RAM which is used for data transfer. 0h (R/W) = Invalid message number. 1h (R/W) = Valid message numbers (value 01 to 80). 80h (R/W) = Valid message number. 81h (R/W) = Invalid message numbers (value 81 to FF). FFh (R/W) = Invalid message numbers.                                                                                                                                                                                                                                   |

## 23.4.1.34 IF1MSK Register (offset = 104h) [reset = E0000000h]

IF1MSK is shown in Figure 23-52 and described in Table 23-47.

The bits of the IF1 mask registers mirror the mask bits of a message object. While Busy bit of IF1 command register is one, IF1 register set is write protected.

## Figure 23-52. IF1MSK Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| MXtd      | MDir      | RESERVED  |           |           | Msk_28:0_ |           |           |
| 1h        | 1h        | R-1h      |           |           | 0h        |           |           |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-47. IF1MSK Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | MXtd      |        | 1h      | Mask Extended Identifier. When 11 bit (standard) identifiers are used for a message object, the identifiers of received data frames are written into bits ID28 to ID18. For acceptance filtering, only these bits together with mask bits Msk28 to Msk18 are considered. 0h (R/W) = The extended identifier bit (IDE) has no effect on the acceptance filtering. 1h (R/W) = The extended identifier bit (IDE) is used for acceptance filtering. |
| 30    | MDir      |        | 1h      | Mask Message Direction 0h (R/W) = The message direction bit (Dir) has no effect on the acceptance filtering. 1h (R/W) = The message direction bit (Dir) is used for acceptance filtering.                                                                                                                                                                                                                                                       |
| 29    | RESERVED  | R      | 1h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 28-0  | Msk_28:0_ |        | 0h      | Identifier Mask 0h (R/W) = The corresponding bit in the identifier of the message object is not used for acceptance filtering (don't care). 1h (R/W) = The corresponding bit in the identifier of the message object is used for acceptance filtering.                                                                                                                                                                                          |

<!-- image -->

<!-- image -->

## 23.4.1.35 IF1ARB Register (offset = 108h) [reset = 0h]

IF1ARB is shown in Figure 23-53 and described in Table 23-48.

The bits of the IF1 arbitration registers mirror the arbitration bits of a message object. While Busy bit of IF1 command register is one, IF1 register set is write protected.

## Figure 23-53. IF1ARB Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| MsgVal      | Xtd         | Dir         |             |             | ID28_to_ID0 |             |             |
| 0h          | 0h          | 0h          |             |             | 0h          |             |             |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-48. IF1ARB Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | MsgVal      |        | 0h      | Message valid. The CPU should reset the MsgVal bit of all unused Messages Objects during the initialization before it resets bit Init in the CAN control register. This bit must also be reset before the identifier ID28 to ID0, the control bits Xtd, Dir or DLC3 to DLC0 are modified, or if the messages object is no longer required. 0h (R/W) = The message object is ignored by the message handler. 1h (R/W) = The message object is to be used by the message handler. |
| 30    | Xtd         |        | 0h      | Extended identifier 0h (R/W) = The 11-bit (standard) Identifier is used for this message object. 1h (R/W) = The 29-bit (extended) Identifier is used for this message object.                                                                                                                                                                                                                                                                                                   |
| 29    | Dir         |        | 0h      | Message direction 0h (R/W) = Direction = receive: On TxRqst, a remote frame with the identifier of this message object is transmitted. On reception of a data frame with matching identifier, this message is stored in this message object. 1h (R/W) = Direction = transmit: On TxRqst, the respective message object is transmitted as a data frame. On reception of a remote frame with matching identifier, the TxRqst bit of this message object is set (if RmtEn = 1).    |
| 28-0  | ID28_to_ID0 |        | 0h      | Message identifier. ID28 to ID0 is equal to 29 bit identifier (extended frame) ID28 to ID18 is equal to 11 bit identifier (standard frame)                                                                                                                                                                                                                                                                                                                                      |

## 23.4.1.36 IF1MCTL Register (offset = 10Ch) [reset = 0h]

IF1MCTL is shown in Figure 23-54 and described in Table 23-49.

The bits of the IF1 message control registers mirror the message control bits of a message object. While Busy bit of IF1 command register is one, IF1 register set is write protected.

## Figure 23-54. IF1MCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| NewDat   | MsgLst   | IntPnd   | UMask    | TxIE     | RxIE     | RmtEn    | TxRqst   |
| 0h       | 0h       | 0h       | 0h       | 0h       | 0h       | 0h       | 0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| EoB      | RESERVED | RESERVED | RESERVED | DLC      | DLC      | DLC      | DLC      |
| 0h       | R-0h     | R-0h     | R-0h     | 0h       | 0h       | 0h       | 0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-49. IF1MCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                         |
| 15    | NewDat   |        | 0h      | New data 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object.            |
| 14    | MsgLst   |        | 0h      | Message lost (only valid for message objects with direction = receive) 0h (R/W) = No message lost since the last time when this bit was reset by the CPU. 1h (R/W) = The message handler stored a new message into this object when NewDat was still set, so the previous message has been overwritten. |
| 13    | IntPnd   |        | 0h      | Interrupt pending 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. The Interrupt Identifier in the interrupt register will point to this message object if there is no other interrupt source with higher priority.      |
| 12    | UMask    |        | 0h      | Use acceptance mask. If the UMask bit is set to one, the message object's mask bits have to be programmed during initialization of the message object before MsgVal is set to one. 0h (R/W) = Mask ignored 1h (R/W) = Use mask (Msk[28:0], MXtd, and MDir) for acceptance filtering                     |
| 11    | TxIE     |        | 0h      | Transmit interrupt enable 0h (R/W) = IntPnd will not be triggered after the successful transmission of a frame. 1h (R/W) = IntPnd will be triggered after the successful transmission of a frame.                                                                                                       |

<!-- image -->

<!-- image -->

## Table 23-49. IF1MCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 10    | RxIE     |        | 0h      | Receive interrupt enable 0h (R/W) = IntPnd will not be triggered after the successful reception of a frame. 1h (R/W) = IntPnd will be triggered after the successful reception of a frame.                                                                                                                                                                                                                                                                                                                                                       |
| 9     | RmtEn    |        | 0h      | Remote enable 0h (R/W) = At the reception of a remote frame, TxRqst is not changed. 1h (R/W) = At the reception of a remote frame, TxRqst is set.                                                                                                                                                                                                                                                                                                                                                                                                |
| 8     | TxRqst   |        | 0h      | Transmit request 0h (R/W) = This message object is not waiting for a transmission. 1h (R/W) = The transmission of this message object is requested and is not yet done.                                                                                                                                                                                                                                                                                                                                                                          |
| 7     | EoB      |        | 0h      | Data frame has 0 to 8 data bits. Note: This bit is used to concatenate multiple message objects to build a FIFO Buffer. For single message objects (not belonging to a FIFO Buffer), this bit must always be set to one. 0h (R/W) = Data frame has 8 data bytes. 1h (R/W) = Note: The data length code of a message object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message. |
| 6-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 3-0   | DLC      |        | 0h      | Data length code. Note: The data length code of a message object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message. 0x 0-0x 8: Data frame has 0-8 data bytes. 0x 9-0x 15: Data frame has 8 data bytes.                                                                                                                                                                        |

## 23.4.1.37 IF1DATA Register (offset = 110h) [reset = 0h]

IF1DATA is shown in Figure 23-55 and described in Table 23-50.

The data bytes of CAN messages are stored in the IF1 registers in the following order: (1) In a CAN data frame, Data 0 is the first, and Data 7 is the last byte to be transmitted or received. (2) In CAN's serial bit stream, the MSB of each byte will be transmitted first.

## Figure 23-55. IF1DATA Register

| 31     | 30 29 28 27 26 25 24 23 22 21 20 19   | 17 16 15 14 13 12 11 10   | 5 4 3 2   |
|--------|---------------------------------------|---------------------------|-----------|
| Data_3 | Data_2                                | Data_1                    | Data_0    |
| 0h     | 0h                                    | 0h                        | 0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-50. IF1DATA Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-24 | Data_3  |        | 0h      | Data 3.       |
| 23-16 | Data_2  |        | 0h      | Data 2.       |
| 15-8  | Data_1  |        | 0h      | Data 1.       |
| 7-0   | Data_0  |        | 0h      | Data 0.       |

<!-- image -->

<!-- image -->

## 23.4.1.38 IF1DATB Register (offset = 114h) [reset = 0h]

IF1DATB is shown in Figure 23-56 and described in Table 23-51.

The data bytes of CAN messages are stored in the IF1 registers in the following order: (1) In a CAN data frame, Data 0 is the first, and Data 7 is the last byte to be transmitted or received. (2) In CAN's serial bit stream, the MSB of each byte will be transmitted first.

## Figure 23-56. IF1DATB Register

| 31     | 30 29 28 27 26 25 24 23 22 21 20 19   | 15 14 13 12 11 10   | 5 4 3 2 1   |
|--------|---------------------------------------|---------------------|-------------|
| Data_7 | Data_6                                | Data_5              | Data_4      |
| 0h     | 0h                                    | 0h                  | 0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-51. IF1DATB Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-24 | Data_7  |        | 0h      | Data 7.       |
| 23-16 | Data_6  |        | 0h      | Data 6.       |
| 15-8  | Data_5  |        | 0h      | Data 5.       |
| 7-0   | Data_4  |        | 0h      | Data 4.       |

## 23.4.1.39 IF2CMD Register (offset = 120h) [reset = 0h]

IF2CMD is shown in Figure 23-57 and described in Table 23-52.

The IF2 Command Register (IF1CMD) configures and initiates the transfer between the IF2 register sets and the message RAM. It is configurable which portions of the message object should be transferred. A transfer is started when the CPU writes the message number to bits [7:0] of the IF2 command register. With this write operation, the Busy bit is automatically set to '1' to indicate that a transfer is in progress. After 4 to 14 OCP clock cycles, the transfer between the interface register and the message RAM will be completed and the Busy bit is cleared. The maximum number of cycles is needed when the message transfer concurs with a CAN message transmission, acceptance filtering, or message storage. If the CPU writes to both IF2 command registers consecutively (request of a second transfer while first transfer is still in progress), the second transfer will start after the first one has been completed. While Busy bit is one, IF2 register sets are write protected. For debug support, the auto clear functionality of the IF2 command registers (clear of DMAactive flag by r/w) is disabled during Debug/Suspend mode. If an invalid Message Number is written to bits [7:0] of the IF2 command register, the message handler may access an implemented (valid) message object instead.

Figure 23-57. IF2CMD Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| WR_RD          | Mask           | Arb            | Control        | ClrIntPnd      | TxRqst_NewDa t | Data_A         | Data_B         |
| 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| Busy           | DMAactive      | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| 0h             | 0h             | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number | Message_Number |
| 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             | 0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-52. IF2CMD Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 23    | WR_RD    |        | 0h      | Write/Read 0h (R/W) = Direction = Read: Transfer direction is from the message object addressed by Message Number (Bits [7:0]) to the IF2 register set. 1h (R/W) = Direction = Write: Transfer direction is from the IF2 register set to the message object addressed by Message Number (Bits [7:0]).                                                                                                                             |
| 22    | Mask     |        | 0h      | Access mask bits 0h (R/W) = Mask bits will not be changed 1h (R/W) = Direction = Read: The mask bits (identifier mask + MDir + MXtd) will be transferred from the message object addressed by Message Number (Bits [7:0]) to the IF2 register set. Direction = Write: The mask bits (identifier mask + MDir + MXtd) will be transferred from the IF2 register set to the message object addressed by Message Number (Bits [7:0]). |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 23-52. IF2CMD Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    21 | Arb           |        | 0h      | Access arbitration bits 0h (R/W) = Arbitration bits will not be changed 1h (R/W) = Direction = Read: The Arbitration bits (Identifier + Dir + Xtd + MsgVal) will be transferred from the message object addressed by Message Number (Bits [7:0]) to the corresponding IF2 register set. Direction = Write: The Arbitration bits (Identifier + Dir + Xtd + MsgVal) will be transferred from the IF2 register set to the message object addressed by Message Number (Bits [7:0]).                                                                                                                                                                                                                                                                                        |
|    20 | Control       |        | 0h      | Access control bits. If the TxRqst/NewDat bit in this register(Bit [18]) is set, the TxRqst/ NewDat bit in the IF2 message control register will be ignored. 0h (R/W) = Control bits will not be changed 1h (R/W) = Direction = Read: The message control bits will be transferred from the message object addressed by message number (Bits [7:0]) to the IF2 register set. Direction = Write: The message control bits will be transferred from the IF2 register set to the message object addressed by message number (Bits [7:0]).                                                                                                                                                                                                                                 |
|    19 | ClrIntPnd     |        | 0h      | Clear interrupt pending bit 0h (R/W) = IntPnd bit will not be changed 1h (R/W) = Direction = Read: Clears IntPnd bit in the message object. Direction = Write: This bit is ignored. Copying of IntPnd flag from IF2 Registers to message RAM can only be controlled by the control flag (Bit [20]).                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|    18 | TxRqst_NewDat |        | 0h      | Access transmission request bit. Note: If a CAN transmission is requested by setting TxRqst/NewDat in this register, the TxRqst/NewDat bits in the message object will be set to one independent of the values in IF2 message control Register. Note: A read access to a message object can be combined with the reset of the control bits IntPnd and NewDat. The values of these bits transferred to the IF2 message control register always reflect the status before resetting them. 0h (R/W) = Direction = Read: NewDat bit will not be changed. Direction = Write: TxRqst/NewDat bit will be handled according to the control bit. 1h (R/W) = Direction = Read: Clears NewDat bit in the message object. Direction = Write: Sets TxRqst/NewDat in message object. |
|    17 | Data_A        |        | 0h      | Access Data Bytes 0 to 3. 0h (R/W) = Data Bytes 0-3 will not be changed. 1h (R/W) = Direction = Read: The data bytes 0-3 will be transferred from the message object addressed by the Message Number (Bits [7:0]) to the corresponding IF2 register set. Direction = Write: The data bytes 0-3 will be transferred from the IF2 register set to the message object addressed by the Message Number (Bits [7:0]). Note: The duration of the message transfer is independent of the number of bytes to be transferred.                                                                                                                                                                                                                                                   |
|    16 | Data_B        |        | 0h      | Access Data Bytes 4 to 7. 0h (R/W) = Data Bytes 4-7 will not be changed. 1h (R/W) = Direction = Read: The data bytes 4-7 will be transferred from the message object addressed by Message Number (Bits [7:0]) to the corresponding IF2 register set. Direction = Write: The data bytes 4-7 will be transferred from the IF2 register set to the message object addressed by message number (Bits [7:0]). Note: The duration of the message transfer is independent of the number of bytes to be transferred.                                                                                                                                                                                                                                                           |

## Table 23-52. IF2CMD Register Field Descriptions (continued)

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15    | Busy           |        | 0h      | Busy flag. This bit is set to one after the message number has been written to bits 7 to 0. IF2 register set will be write protected. The bit is cleared after read/write action has been finished. 0h (R/W) = No transfer between IF2 register set and message RAM is in progress. 1h (R/W) = Transfer between IF2 register set and message RAM is in progress.                                                                                                                                                              |
| 14    | DMAactive      |        | 0h      | Activation of DMA feature for subsequent internal IF2 update. Note: Due to the auto reset feature of the DMAactive bit, this bit has to be set for each subsequent DMA cycle separately. 0h (R/W) = DMA request line is independent of IF2 activities. 1h (R/W) = DMA is requested after completed transfer between IF2 register set and message RAM. The DMA request remains active until the first read or write to one of the IF2 registers; an exception is a write to Message Number (Bits [7:0]) when DMAactive is one. |
| 13-8  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 7-0   | Message_Number |        | 0h      | Number of message object in message RAM which is used for data transfer. 0h (R/W) = Invalid message number. 1h (R/W) = Valid message numbers (values 01 to 80). 80h (R/W) = Valid message number. 81h (R/W) = Invalid message numbers (values 81 to FF). FFh (R/W) = Invalid message number.                                                                                                                                                                                                                                  |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.40 IF2MSK Register (offset = 124h) [reset = E0000000h]

IF2MSK is shown in Figure 23-58 and described in Table 23-53.

The bits of the IF2 mask registers mirror the mask bits of a message object. While Busy bit of IF2 command register is one, IF2 register set is write protected.

## Figure 23-58. IF2MSK Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| MXtd      | MDir      | RESERVED  |           |           | Msk_28:0_ |           |           |
| 1h        | 1h        | R-1h      |           |           | 0h        |           |           |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-53. IF2MSK Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | MXtd      |        | 1h      | Mask Extended Identifier. When 11 bit (standard) identifiers are used for a message object, the identifiers of received data frames are written into bits ID28 to ID18. For acceptance filtering, only these bits together with mask bits Msk28 to Msk18 are considered. 0h (R/W) = The extended identifier bit (IDE) has no effect on the acceptance filtering. 1h (R/W) = The extended identifier bit (IDE) is used for acceptance filtering. |
| 30    | MDir      |        | 1h      | Mask Message Direction 0h (R/W) = The message direction bit (Dir) has no effect on the acceptance filtering. 1h (R/W) = The message direction bit (Dir) is used for acceptance filtering.                                                                                                                                                                                                                                                       |
| 29    | RESERVED  | R      | 1h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 28-0  | Msk_28:0_ |        | 0h      | Identifier Mask 0h (R/W) = The corresponding bit in the identifier of the message object is not used for acceptance filtering (don't care). 1h (R/W) = The corresponding bit in the identifier of the message object is used for acceptance filtering.                                                                                                                                                                                          |

## 23.4.1.41 IF2ARB Register (offset = 128h) [reset = 0h]

IF2ARB is shown in Figure 23-59 and described in Table 23-54.

The bits of the IF2 arbitration registers mirror the arbitration bits of a message object. While Busy bit of IF2 command register is one, IF2 register set is write protected.

## Figure 23-59. IF2ARB Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| MsgVal      | Xtd         | Dir         |             |             | ID28_to_ID0 |             |             |
| 0h          | 0h          | 0h          |             |             | 0h          |             |             |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          | 0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-54. IF2ARB Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | MsgVal      |        | 0h      | Message valid. The CPU should reset the MsgVal bit of all unused Messages Objects during the initialization before it resets bit Init in the CAN control register. This bit must also be reset before the identifier ID28 to ID0, the control bits Xtd, Dir or DLC3 to DLC0 are modified, or if the messages object is no longer required. 0h (R/W) = The message object is ignored by the message handler. 1h (R/W) = The message object is to be used by the message handler. |
| 30    | Xtd         |        | 0h      | Extended identifier 0h (R/W) = The 11-bit (standard) Identifier is used for this message object. 1h (R/W) = The 29-bit (extended) Identifier is used for this message object.                                                                                                                                                                                                                                                                                                   |
| 29    | Dir         |        | 0h      | Message direction 0h (R/W) = Direction = receive: On TxRqst, a remote frame with the identifier of this message object is transmitted. On reception of a data frame with matching identifier, this message is stored in this message object. 1h (R/W) = Direction = transmit: On TxRqst, the respective message object is transmitted as a data frame. On reception of a remote frame with matching identifier, the TxRqst bit of this message object is set (if RmtEn = 1).    |
| 28-0  | ID28_to_ID0 |        | 0h      | Message identifier. ID28 to ID0 is equal to 29-bit identifier (extended frame) ID28 to ID18 is equal to 11-bit identifier (standard frame)                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## 23.4.1.42 IF2MCTL Register (offset = 12Ch) [reset = 0h]

IF2MCTL is shown in Figure 23-60 and described in Table 23-55.

The bits of the IF2 message control registers mirror the message control bits of a message object. While Busy bit of IF2 command register is one, IF2 register set is write protected.

## Figure 23-60. IF2MCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| NewDat   | MsgLst   | IntPnd   | UMask    | TxIE     | RxIE     | RmtEn    | TxRqst   |
| 0h       | 0h       | 0h       | 0h       | 0h       | 0h       | 0h       | 0h       |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| EoB      | RESERVED | RESERVED | RESERVED | DLC      | DLC      | DLC      | DLC      |
| 0h       | R-0h     | R-0h     | R-0h     | 0h       | 0h       | 0h       | 0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-55. IF2MCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                         |
| 15    | NewDat   |        | 0h      | New data 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object.            |
| 14    | MsgLst   |        | 0h      | Message lost (only valid for message objects with direction = receive) 0h (R/W) = No message lost since the last time when this bit was reset by the CPU. 1h (R/W) = The message handler stored a new message into this object when NewDat was still set, so the previous message has been overwritten. |
| 13    | IntPnd   |        | 0h      | Interrupt pending 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. The Interrupt Identifier in the interrupt register will point to this message object if there is no other interrupt source with higher priority.      |
| 12    | UMask    |        | 0h      | Use acceptance mask. If the UMask bit is set to one, the message object's mask bits have to be programmed during initialization of the message object before MsgVal is set to one. 0h (R/W) = Mask ignored 1h (R/W) = Use mask (Msk[28:0], MXtd, and MDir) for acceptance filtering                     |
| 11    | TxIE     |        | 0h      | Transmit interrupt enable 0h (R/W) = IntPnd will not be triggered after the successful transmission of a frame. 1h (R/W) = IntPnd will be triggered after the successful transmission of a frame.                                                                                                       |

## Table 23-55. IF2MCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 10    | RxIE     |        | 0h      | Receive interrupt enable 0h (R/W) = IntPnd will not be triggered after the successful reception of a frame. 1h (R/W) = IntPnd will be triggered after the successful reception of a frame.                                                                                                                                                                                                                                                                                                                                                       |
| 9     | RmtEn    |        | 0h      | Remote enable 0h (R/W) = At the reception of a remote frame, TxRqst is not changed. 1h (R/W) = At the reception of a remote frame, TxRqst is set.                                                                                                                                                                                                                                                                                                                                                                                                |
| 8     | TxRqst   |        | 0h      | Transmit request 0h (R/W) = This message object is not waiting for a transmission. 1h (R/W) = The transmission of this message object is requested and is not yet done.                                                                                                                                                                                                                                                                                                                                                                          |
| 7     | EoB      |        | 0h      | Data frame has 0 to 8 data bits. Note: This bit is used to concatenate multiple message objects to build a FIFO Buffer. For single message objects (not belonging to a FIFO Buffer), this bit must always be set to one. 0h (R/W) = Data frame has 8 data bytes. 1h (R/W) = Note: The data length code of a message object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message. |
| 6-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 3-0   | DLC      |        | 0h      | Data length code. Note: The data length code of a message object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message. 0x 0-0x 8: Data frame has 0-8 data bytes. 0x 9-0x 15: Data frame has 8 data bytes.                                                                                                                                                                        |

<!-- image -->

<!-- image -->

## 23.4.1.43 IF2DATA Register (offset = 130h) [reset = 0h]

IF2DATA is shown in Figure 23-61 and described in Table 23-56.

The data bytes of CAN messages are stored in the IF2 registers in the following order: (1) In a CAN data frame, Data 0 is the first, and Data 7 is the last byte to be transmitted or received. (2) In CAN's serial bit stream, the MSB of each byte will be transmitted first.

## Figure 23-61. IF2DATA Register

| 31     | 30 29 28 27 26 25 24 23 22 21 20 19   | 17 16 15 14 13 12 11 10   | 5 4 3 2   |
|--------|---------------------------------------|---------------------------|-----------|
| Data_3 | Data_2                                | Data_1                    | Data_0    |
| 0h     | 0h                                    | 0h                        | 0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-56. IF2DATA Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-24 | Data_3  |        | 0h      | Data 3.       |
| 23-16 | Data_2  |        | 0h      | Data 2.       |
| 15-8  | Data_1  |        | 0h      | Data 1.       |
| 7-0   | Data_0  |        | 0h      | Data 0.       |

## 23.4.1.44 IF2DATB Register (offset = 134h) [reset = 0h]

IF2DATB is shown in Figure 23-62 and described in Table 23-57.

The data bytes of CAN messages are stored in the IF2 registers in the following order: (1) In a CAN data frame, Data 0 is the first, and Data 7 is the last byte to be transmitted or received. (2) In CAN's serial bit stream, the MSB of each byte will be transmitted first.

## Figure 23-62. IF2DATB Register

| 31     | 30 29 28 27 26 25 24 23 22 21 20 19   | 15 14 13 12 11 10   | 5 4 3 2 1   |
|--------|---------------------------------------|---------------------|-------------|
| Data_7 | Data_6                                | Data_5              | Data_4      |
| 0h     | 0h                                    | 0h                  | 0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-57. IF2DATB Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-24 | Data_7  |        | 0h      | Data 7.       |
| 23-16 | Data_6  |        | 0h      | Data 6.       |
| 15-8  | Data_5  |        | 0h      | Data 5.       |
| 7-0   | Data_4  |        | 0h      | Data 4.       |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.45 IF3OBS Register (offset = 140h) [reset = 0h]

IF3OBS is shown in Figure 23-63 and described in Table 23-58.

The IF3 register set can automatically be updated with received message objects without the need to initiate the transfer from message RAM by CPU. The observation flags (Bits [4:0]) in the IF3 observation register are used to determine, which data sections of the IF3 interface register set have to be read in order to complete a DMA read cycle. After all marked data sections are read, the DCAN is enabled to update the IF3 interface register set with new data. Any access order of single bytes or half-words is supported. When using byte or half-word accesses, a data section is marked as completed, if all bytes are read. Note: If IF3 Update Enable is used and no Observation flag is set, the corresponding message objects will be copied to IF3 without activating the DMA request line and without waiting for DMA read accesses. A write access to this register aborts a pending DMA cycle by resetting the DMA line and enables updating of IF3 interface register set with new data. To avoid data inconsistency, the DMA controller should be disabled before reconfiguring IF3 observation register. The status of the current readcycle can be observed via status flags (Bits [12:8]). If an interrupt line is available for IF3, an interrupt will be generated by IF3Upd flag. See the device-specific data sheet for the availability of this interrupt source. With this interrupt, the observation status bits and the IF3Upd bit could be used by the application to realize the notification about new IF3 content in polling or interrupt mode.

## Figure 23-63. IF3OBS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| IF3_Upd  | RESERVED | RESERVED | IF3_SDB  | IF3_SDA  | IF3_SC   | IF3_SA   | IF3_SM   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | DataB    | DataA    | Ctrl     | Arb      | Mask     |
| R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-58. IF3OBS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                               |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                           |
| 15    | IF3_Upd  | R      | 0h      | IF3 Update Data 0h (R/W) = No new data has been loaded since last IF3 read. 1h (R/W) = New data has been loaded since last IF3 read.                                                      |
| 14-13 | RESERVED | R      | 0h      |                                                                                                                                                                                           |
| 12    | IF3_SDB  | R      | 0h      | IF3 Status of Data B read access 0h (R/W) = All Data B bytes are already read out, or are not marked to be read. 1h (R/W) = Data B section has still data to be read out.                 |
| 11    | IF3_SDA  | R      | 0h      | IF3 Status of Data A read access 0h (R/W) = All Data A bytes are already read out, or are not marked to be read. 1h (R/W) = Data A section has still data to be read out.                 |
| 10    | IF3_SC   | R      | 0h      | IF3 Status of control bits read access 0h (R/W) = All control section bytes are already read out, or are not marked to be read. 1h (R/W) = Control section has still data to be read out. |

## Table 23-58. IF3OBS Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | IF3_SA   | R      | 0h      | IF3 Status of Arbitration data read access 0h (R/W) = All Arbitration data bytes are already read out, or are not marked to be read. 1h (R/W) = Arbitration section has still data to be read out. |
| 8     | IF3_SM   | R      | 0h      | IF3 Status of Mask data read access 0h (R/W) = All mask data bytes are already read out, or are not marked to be read. 1h (R/W) = Mask section has still data to be read out.                      |
| 7-5   | RESERVED | R      | 0h      |                                                                                                                                                                                                    |
| 4     | DataB    | R/W    | 0h      | Data B read observation 0h (R/W) = Data B section has not to be read. 1h (R/W) = Data B section has to be read to enable next IF3 update.                                                          |
| 3     | DataA    | R/W    | 0h      | Data A read observation 0h (R/W) = Data A section has not to be read. 1h (R/W) = Data A section has to be read to enable next IF3 update.                                                          |
| 2     | Ctrl     | R/W    | 0h      | Ctrl read observation 0h (R/W) = Ctrl section has not to be read. 1h (R/W) = Ctrl section has to be read to enable next IF3 update.                                                                |
| 1     | Arb      | R/W    | 0h      | Arbitration data read observation 0h (R/W) = Arbitration data has not to be read. 1h (R/W) = Arbitration data has to be read to enable next IF3 update.                                            |
| 0     | Mask     | R/W    | 0h      | Mask data read observation 0h (R/W) = Mask data has not to be read. 1h (R/W) = Mask data has to be read to enable next IF3 update.                                                                 |

<!-- image -->

<!-- image -->

## 23.4.1.46 IF3MSK Register (offset = 144h) [reset = E0000000h]

IF3MSK is shown in Figure 23-64 and described in Table 23-59.

## Figure 23-64. IF3MSK Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| MXtd      | MDir      | RESERVED  |           |           | Msk_28:0_ |           |           |
| R-1h      | R-1h      | R-1h      |           |           | 0h        |           |           |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ | Msk_28:0_ |
| 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        | 0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-59. IF3MSK Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | MXtd      | R      | 1h      | Mask Extended Identifier. When 11 bit (standard) identifiers are used for a message object, the identifiers of received data frames are written into bits ID28 to ID18. For acceptance filtering, only these bits together with mask bits Msk28 to Msk18 are considered. 0h (R/W) = The extended identifier bit (IDE) has no effect on the acceptance filtering. 1h (R/W) = The extended identifier bit (IDE) is used for acceptance filtering. |
| 30    | MDir      | R      | 1h      | Mask Message Direction 0h (R/W) = The message direction bit (Dir) has no effect on the acceptance filtering. 1h (R/W) = The message direction bit (Dir) is used for acceptance filtering.                                                                                                                                                                                                                                                       |
| 29    | RESERVED  | R      | 1h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 28-0  | Msk_28:0_ |        | 0h      | Identifier Mask 0h (R/W) = The corresponding bit in the identifier of the message object is not used for acceptance filtering (don't care). 1h (R/W) = The corresponding bit in the identifier of the message object is used for acceptance filtering.                                                                                                                                                                                          |

## 23.4.1.47 IF3ARB Register (offset = 148h) [reset = 0h]

IF3ARB is shown in Figure 23-65 and described in Table 23-60.

## Figure 23-65. IF3ARB Register

| 31          | 30          | 29          | 28          | 27          | 26          | 25          | 24          |
|-------------|-------------|-------------|-------------|-------------|-------------|-------------|-------------|
| MsgVal      | Xtd         | Dir         |             |             | ID28_to_ID0 |             |             |
| R-0h        | R-0h        | R-0h        |             |             | R-0h        |             |             |
| 23          | 22          | 21          | 20          | 19          | 18          | 17          | 16          |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 15          | 14          | 13          | 12          | 11          | 10          | 9           | 8           |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
| ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 | ID28_to_ID0 |
| R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        | R-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-60. IF3ARB Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | MsgVal      | R      | 0h      | Message Valid. The CPU should reset the MsgVal bit of all unused Messages Objects during the initialization before it resets bit Init in the CAN control register. This bit must also be reset before the identifier ID28 to ID0, the control bits Xtd, Dir or DLC3 to DLC0 are modified, or if the messages object is no longer required. 0h (R/W) = The message object is ignored by the message handler. 1h (R/W) = The message object is to be used by the message handler. |
| 30    | Xtd         | R      | 0h      | Extended Identifier 0h (R/W) = The 11-bit (standard) Identifier is used for this message object. 1h (R/W) = The 29-bit (extended) Identifier is used for this message object.                                                                                                                                                                                                                                                                                                   |
| 29    | Dir         | R      | 0h      | Message Direction 0h (R/W) = Direction = receive: On TxRqst, a remote frame with the identifier of this message object is transmitted. On reception of a data frame with matching identifier, this message is stored in this message object. 1h (R/W) = Direction = transmit: On TxRqst, the respective message object is transmitted as a data frame. On reception of a remote frame with matching identifier, the TxRqst bit of this message object is set (if RmtEn = 1).    |
| 28-0  | ID28_to_ID0 | R      | 0h      | Message Identifier. ID28 to ID0 is equal to 29 bit Identifier (extended frame). ID28 to ID18 is equal to 11 bit Identifier (standard frame).                                                                                                                                                                                                                                                                                                                                    |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.48 IF3MCTL Register (offset = 14Ch) [reset = 0h]

IF3MCTL is shown in Figure 23-66 and described in Table 23-61.

## Figure 23-66. IF3MCTL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| NewDat   | MsgLst   | IntPnd   | UMask    | TxIE     | RxIE     | RmtEn    | TxRqst   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| EoB      | RESERVED | RESERVED | RESERVED | DLC      | DLC      | DLC      | DLC      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-61. IF3MCTL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                         |
| 15    | NewDat   | R      | 0h      | New Data 0h (R/W) = No new data has been written into the data portion of this message object by the message handler since the last time when this flag was cleared by the CPU. 1h (R/W) = The message handler or the CPU has written new data into the data portion of this message object.            |
| 14    | MsgLst   | R      | 0h      | Message Lost (only valid for message objects with direction = receive) 0h (R/W) = No message lost since the last time when this bit was reset by the CPU. 1h (R/W) = The message handler stored a new message into this object when NewDat was still set, so the previous message has been overwritten. |
| 13    | IntPnd   | R      | 0h      | Interrupt Pending 0h (R/W) = This message object is not the source of an interrupt. 1h (R/W) = This message object is the source of an interrupt. The Interrupt Identifier in the interrupt register will point to this message object if there is no other interrupt source with higher priority.      |
| 12    | UMask    | R      | 0h      | Use Acceptance Mask 0h (R/W) = Mask ignored 1h (R/W) = Use mask (Msk[28:0], MXtd, and MDir) for acceptance filtering. If the UMask bit is set to one, the message object's mask bits have to be programmed during initialization of the message object before MsgVal is set to one.                     |
| 11    | TxIE     | R      | 0h      | Transmit Interrupt enable 0h (R/W) = IntPnd will not be triggered after the successful transmission of a frame. 1h (R/W) = IntPnd will be triggered after the successful transmission of a frame.                                                                                                       |
| 10    | RxIE     | R      | 0h      | Receive Interrupt enable 0h (R/W) = IntPnd will not be triggered after the successful reception of a frame. 1h (R/W) = IntPnd will be triggered after the successful reception of a frame.                                                                                                              |

## Table 23-61. IF3MCTL Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 9     | RmtEn    | R      | 0h      | Remote enable 0h (R/W) = At the reception of a remote frame, TxRqst is not changed. 1h (R/W) = At the reception of a remote frame, TxRqst is set.                                                                                                                                                                                                                                                                                                                                                                                                |
| 8     | TxRqst   | R      | 0h      | Transmit Request 0h (R/W) = This message object is not waiting for a transmission. 1h (R/W) = The transmission of this message object is requested and is not yet done.                                                                                                                                                                                                                                                                                                                                                                          |
| 7     | EoB      | R      | 0h      | Data frame has 0 to 8 data bits. Note: This bit is used to concatenate multiple message objects to build a FIFO Buffer. For single message objects (not belonging to a FIFO Buffer), this bit must always be set to one. 0h (R/W) = Data frame has 8 data bytes. 1h (R/W) = Note: The data length code of a message object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message. |
| 6-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 3-0   | DLC      | R      | 0h      | Data Length Code. Note: The data length code of a message object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the message handler stores a data frame, it will write the DLC to the value given by the received message. 0x 0-0x 8: Data frame has 0-8 data bytes. 0x 9-0x 15: Data frame has 8 data bytes.                                                                                                                                                                        |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.49 IF3DATA Register (offset = 150h) [reset = 0h]

IF3DATA is shown in Figure 23-67 and described in Table 23-62.

The data bytes of CAN messages are stored in the IF3 registers in the following order. In a CAN data frame, Data 0 is the first, and Data 7 is the last byte to be transmitted or received. In CAN's serial bit stream, the MSB of each byte will be transmitted first.

## Figure 23-67. IF3DATA Register

| 31     | 30 29 28 27 26 25 24 23 22 21 20 19   | 15 14 13 12 11 10 Data_1   | 5 4 3 2 1   |
|--------|---------------------------------------|----------------------------|-------------|
| Data_3 | Data_2                                |                            | Data_0      |
| R-0h   | R-0h                                  | R-0h                       | R-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-62. IF3DATA Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-24 | Data_3  | R      | 0h      | Data 3.       |
| 23-16 | Data_2  | R      | 0h      | Data 2.       |
| 15-8  | Data_1  | R      | 0h      | Data 1.       |
| 7-0   | Data_0  | R      | 0h      | Data 0.       |

## 23.4.1.50 IF3DATB Register (offset = 154h) [reset = 0h]

IF3DATB is shown in Figure 23-68 and described in Table 23-63.

The data bytes of CAN messages are stored in the IF3 registers in the following order. In a CAN data frame, Data 0 is the first, and Data 7 is the last byte to be transmitted or received. In CAN's serial bit stream, the MSB of each byte will be transmitted first.

## Figure 23-68. IF3DATB Register

| 31     | 30 29 28 27 26 25 24 23 22 21 20 19 Data_6   | 15 14 13 12 11 10 Data_5   | 5 4 3 2 1 Data_4   |
|--------|----------------------------------------------|----------------------------|--------------------|
| Data_7 |                                              |                            | R-0h               |
| R-0h   | R-0h                                         | R-0h                       |                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-63. IF3DATB Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description   |
|-------|---------|--------|---------|---------------|
| 31-24 | Data_7  | R      | 0h      | Data 7.       |
| 23-16 | Data_6  | R      | 0h      | Data 6.       |
| 15-8  | Data_5  | R      | 0h      | Data 5.       |
| 7-0   | Data_4  | R      | 0h      | Data 4.       |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.51 IF3UPD12 Register (offset = 160h) [reset = 0h]

IF3UPD12 is shown in Figure 23-69 and described in Table 23-64.

The automatic update functionality of the IF3 register set can be configured for each message object. A message object is enabled for automatic IF3 update, if the dedicated IF3UpdEn flag is set. This means that an active NewDat flag of this message object (e.g due to reception of a CAN frame) will trigger an automatic copy of the whole message object to IF3 register set. IF3 Update enable should not be set for transmit objects.

## Figure 23-69. IF3UPD12 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| IF3UpdEn_32:17_                                                                       | IF3UpdEn_16:1_                                                                        |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-64. IF3UPD12 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IF3UpdEn_32:17_ | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |
| 15-0  | IF3UpdEn_16:1_  | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |

## 23.4.1.52 IF3UPD34 Register (offset = 164h) [reset = 0h]

IF3UPD34 is shown in Figure 23-70 and described in Table 23-65.

The automatic update functionality of the IF3 register set can be configured for each message object. A message object is enabled for automatic IF3 update, if the dedicated IF3UpdEn flag is set. This means that an active NewDat flag of this message object (e.g due to reception of a CAN frame) will trigger an automatic copy of the whole message object to IF3 register set. IF3 Update enable should not be set for transmit objects.

## Figure 23-70. IF3UPD34 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| IF3UpdEn_64:49_                                                                       | IF3UpdEn_48:33_                                                                       |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-65. IF3UPD34 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IF3UpdEn_64:49_ | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |
| 15-0  | IF3UpdEn_48:33_ | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |

<!-- image -->

<!-- image -->

www.ti.com

## 23.4.1.53 IF3UPD56 Register (offset = 168h) [reset = 0h]

IF3UPD56 is shown in Figure 23-71 and described in Table 23-66.

The automatic update functionality of the IF3 register set can be configured for each message object. A message object is enabled for automatic IF3 update, if the dedicated IF3UpdEn flag is set. This means that an active NewDat flag of this message object (e.g due to reception of a CAN frame) will trigger an automatic copy of the whole message object to IF3 register set. IF3 Update enable should not be set for transmit objects.

## Figure 23-71. IF3UPD56 Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| IF3UpdEn_96:81_                                                                       | IF3UpdEn_80:65_                                                                       |
| R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-66. IF3UPD56 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IF3UpdEn_96:81_ | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |
| 15-0  | IF3UpdEn_80:65_ | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |

## 23.4.1.54 IF3UPD78 Register (offset = 16Ch) [reset = 0h]

IF3UPD78 is shown in Figure 23-72 and described in Table 23-67.

The automatic update functionality of the IF3 register set can be configured for each message object. A message object is enabled for automatic IF3 update, if the dedicated IF3UpdEn flag is set. This means that an active NewDat flag of this message object (e.g due to reception of a CAN frame) will trigger an automatic copy of the whole message object to IF3 register set. IF3 Update enable should not be set for transmit objects.

## Figure 23-72. IF3UPD78 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                | 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ | IF3UpdEn_128:113_ |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 | 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  | IF3UpdEn_112:97_  |
| R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 23-67. IF3UPD78 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                           |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | IF3UpdEn_128:113_ | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |
| 15-0  | IF3UpdEn_112:97_  | R/W    | 0h      | IF3 Update Enabled (for all message objects) 0h (R/W) = Automatic IF3 update is disabled for this message object. 1h (R/W) = Automatic IF3 update is enabled for this message object. A message object is scheduled to be copied to IF3 register set, if NewDat flag of the message object is active. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 23.4.1.55 TIOC Register (offset = 1E0h) [reset = 0h]

TIOC is shown in Figure 23-73 and described in Table 23-68.

The CAN\_TX pin of the DCAN module can be used as general purpose IO pin if CAN function is not needed. The values of the IO control registers are only writable if Init bit of the CAN control register is set. The OD, Func, Dir and Out bits of the CAN TX IO control register are forced to certain values when Init bit of CAN control register is reset (see bit descriptions).

Figure 23-73. TIOC Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|          |          | RESERVED |          |          | PU       | PD       | OD       |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h   | 0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          |          | Func     | Dir      | Out      | In       |
|          | R-0h     |          |          | 0h       | 0h       | 0h       | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-68. TIOC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 18    | PU       | R/W    | 0h      | CAN_TX pull up/pull down select. This bit is only active when CAN_TX is configured to be an input. 0h (R/W) = CAN_TX pull down is selected, when pull logic is active (PD = 0). 1h (R/W) = CAN_TX pull up is selected, when pull logic is active (PD = 0).                                      |
| 17    | PD       | R/W    | 0h      | CAN_TX pull disable. This bit is only active when CAN_TX is configured to be an input. 0h (R/W) = CAN_TX pull is active 1h (R/W) = CAN_TX pull is disabled                                                                                                                                      |
| 16    | OD       |        | 0h      | CAN_TX open drain enable. This bit is only active when CAN_TX is configured to be in GIO mode (TIOC.Func=0). Forced to '0' if Init bit of CAN control register is reset. 0h (R/W) = The CAN_TX pin is configured in push/pull mode. 1h (R/W) = The CAN_TX pin is configured in open drain mode. |
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 3     | Func     |        | 0h      | CAN_TX function. This bit changes the function of the CAN_TX pin. Forced to '1' if Init bit of CAN control register is reset. 0h (R/W) = CAN_TX pin is in GIO mode. 1h (R/W) = CAN_TX pin is in functional mode (as an output to transmit CAN data).                                            |
| 2     | Dir      |        | 0h      | CAN_TX data direction. This bit controls the direction of the CAN_TX pin when it is configured to be in GIO mode only (TIOC.Func=0). Forced to '1' if Init bit of CAN control register is reset. 0h (R/W) = The CAN_TX pin is an input. 1h (R/W) = The CAN_TX pin is an output                  |

## Table 23-68. TIOC Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | Out     |        | 0h      | CAN_TX data out write. This bit is only active when CAN_TX pin is configured to be in GIO mode (TIOC.Func = 0) and configured to be an output pin (TIOC.Dir = 1). The value of this bit indicates the value to be output to the CAN_TX pin. Forced to Tx output of the CAN core, if Init bit of CAN control register is reset. 0h (R/W) = The CAN_TX pin is driven to logic low 1h (R/W) = The CAN_TX pin is driven to logic high |
|     0 | In      | R      | 0h      | CAN_TX data in. Note: When CAN_TX pin is connected to a CAN transceiver, an external pullup resistor has to be used to ensure that the CAN bus will not be disturbed (e.g. while reset of the DCAN module). 0h (R/W) = The CAN_TX pin is at logic low 1h (R/W) = The CAN_TX pin is at logic high                                                                                                                                  |

<!-- image -->

<!-- image -->

## 23.4.1.56 RIOC Register (offset = 1E4h) [reset = 0h]

RIOC is shown in Figure 23-74 and described in Table 23-69.

The CAN\_RX pin of the DCAN module can be used as general purpose IO pin if CAN function is not needed. The values of the IO control registers are writable only if Init bit of CAN control register is set. The OD, Func and Dir bits of the CAN RX IO control register are forced to certain values when the Init bit of CAN control register is reset (see bit descriptions).

## Figure 23-74. RIOC Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|          |          | RESERVED |          |          | PU       | PD       | OD       |
|          |          | R-0h     |          |          | R/W-0h   | R/W-0h   | 0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          |          | Func     | Dir      | Out      | In       |
|          | R-0h     |          |          | 0h       | 0h       | 0h       | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 23-69. RIOC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 18    | PU       | R/W    | 0h      | CAN_RX pull up/pull down select. This bit is only active when CAN_RX is configured to be an input. 0h (R/W) = CAN_RX pull down is selected, when pull logic is active (PD = 0). 1h (R/W) = CAN_T=RX pull up is selected, when pull logic is active(PD = 0).                                     |
| 17    | PD       | R/W    | 0h      | CAN_RX pull disable. This bit is only active when CAN_TX is configured to be an input. 0h (R/W) = CAN_RX pull is active 1h (R/W) = CAN_RX pull is disabled                                                                                                                                      |
| 16    | OD       |        | 0h      | CAN_RX open drain enable. This bit is only active when CAN_RX is configured to be in GIO mode (TIOC.Func=0). Forced to '0' if Init bit of CAN control register is reset. 0h (R/W) = The CAN_RX pin is configured in push/pull mode. 1h (R/W) = The CAN_RX pin is configured in open drain mode. |
| 15-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                 |
| 3     | Func     |        | 0h      | CAN_RX function. This bit changes the function of the CAN_RX pin. Forced to '1' if Init bit of CAN control register is reset. 0h (R/W) = CAN_RX pin is in GIO mode. 1h (R/W) = CAN_RX pin is in functional mode (as an output to transmit CAN data).                                            |
| 2     | Dir      |        | 0h      | CAN_RX data direction. This bit controls the direction of the CAN_RX pin when it is configured to be in GIO mode only (TIOC.Func=0). Forced to '1' if Init bit of CAN control register is reset. 0h (R/W) = The CAN_RX pin is an input. 1h (R/W) = The CAN_RX pin is an output                  |

## Table 23-69. RIOC Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | Out     |        | 0h      | CAN_RX data out write. This bit is only active when CAN_RX pin is configured to be in GIO mode (TIOC.Func = 0) and configured to be an output pin (TIOC.Dir = 1). The value of this bit indicates the value to be output to the CAN_RX pin. Forced to Tx output of the CAN core, if Init bit of CAN control register is reset. 0h (R/W) = The CAN_RX pin is driven to logic low 1h (R/W) = The CAN_RX pin is driven to logic high |
|     0 | In      | R      | 0h      | CAN_RX data in. Note: When CAN_RX pin is connected to a CAN transceiver, an external pullup resistor has to be used to ensure that the CAN bus will not be disturbed (for example, while reset of the DCAN module). 0h (R/W) = The CAN_RX pin is at logic low 1h (R/W) = The CAN_RX pin is at logic high                                                                                                                          |

<!-- image -->