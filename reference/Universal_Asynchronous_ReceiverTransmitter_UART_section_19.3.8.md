<!-- image -->

www.ti.com

Table 19-24. CIR Mode Register Overview (1) (2) (continued)

| Address Offset   | Registers               | Registers              | Registers              | Registers              | Registers              | Registers               |
|------------------|-------------------------|------------------------|------------------------|------------------------|------------------------|-------------------------|
|                  | Configuration Mode A    | Configuration Mode A   | Configuration Mode B   | Configuration Mode B   | Operational Mode       | Operational Mode        |
|                  | Read                    | Write                  | Read                   | Write                  | Read                   | Write                   |
| 0x040            | UART_SCR                | UART_SCR               | UART_SCR               | UART_SCR               | UART_SCR               | UART_SCR                |
| 0x044            | UART_SSR                | -                      | UART_SSR               | -                      | UART_SSR               | -                       |
| 0x048            | -                       | -                      | -                      | -                      | UART_EBLR              | UART_EBLR               |
| 0x050            | UART_MVR                | -                      | UART_MVR               | -                      | UART_MVR               | -                       |
| 0x054            | UART_SYSC               | UART_SYSC              | UART_SYSC              | UART_SYSC              | UART_SYSC              | UART_SYSC               |
| 0x058            | UART_SYSS               | -                      | UART_SYSS              | -                      | UART_SYSS              | -                       |
| 0x05C            | UART_WER[6: 4]          | UART_WER[6:4 ]         | UART_WER[6:4]          | UART_WER[6:4]          | UART_WER[6:4]          | UART_WER[6: 4]          |
| 0x060            | UART_CFPS               | UART_CFPS              | UART_CFPS              | UART_CFPS              | UART_CFPS              | UART_CFPS               |
| 0x064            | UART_RXFIFO _LVL        | UART_RXFIFO_ LVL       | UART_RXFIFO_LVL        | UART_RXFIFO_L VL       | UART_RXFIFO_LV L       | UART_RXFIFO _LVL        |
| 0x068            | UART_TXFIFO _LVL        | UART_TXFIFO_ LVL       | UART_TXFIFO_LVL        | UART_TXFIFO_L VL       | UART_TXFIFO_LV L       | UART_TXFIFO _LVL        |
| 0x06C            | UART_IER2               | UART_IER2              | UART_IER2              | UART_IER2              | UART_IER2              | UART_IER2               |
| 0x070            | UART_ISR2               | UART_ISR2              | UART_ISR2              | UART_ISR2              | UART_ISR2              | UART_ISR2               |
| 0x074            | UART_FREQ_ SEL          | UART_FREQ_S EL         | UART_FREQ_SEL          | UART_FREQ_SE L         | UART_FREQ_SEL          | UART_FREQ_ SEL          |
| 0x080            | UART_MDR3               | UART_MDR3              | UART_MDR3              | UART_MDR3              | UART_MDR3              | UART_MDR3               |
| 0x084            | UART_TX_DM A_THRESHOL D | UART_TX_DMA _THRESHOLD | UART_TX_DMA_TH RESHOLD | UART_TX_DMA_ THRESHOLD | UART_TX_DMA_T HRESHOLD | UART_TX_DM A_THRESHOL D |

## 19.3.8 Protocol Formatting

The UART/IRDA module can operate in seven different modes:

1. UART 16x mode ( ≤ 230.4 Kbits/s), UART16x ≤ 460Kbits/s if MDR3[1] is set
2. UART 16x mode with autobauding ( ≥ 1200 bits/s and ≤ 115.2 Kbits/s) if MDR3[1] is not set
3. UART 13x mode ( ≥ 460.8 Kbits/s) if MDR3[1] is not set
4. IrDA SIR mode ( ≤ 115.2 Kbits/s) if MDR3[1] is not set
5. IrDA MIR mode (0.576 and 1.152 Mbits/s) if MDR3[1] is not set
6. IrDA FIR mode (4 Mbits/s) if MDR3[1] is not set
7. CIR mode (programmable modulation rates specific to remote control applications) if MDR3[1] is not set

The module performs a serial-to-parallel conversion on received data characters and a parallel-to-serial conversion on transmitted data characters by the processor. The complete status of each channel of the module and each received character/frame can be read at any time during functional operation via the line status register (LSR).

The module can be placed in an alternate mode (FIFO mode) to relieve the processor of excessive software overhead by buffering received/transmitted characters.

Both the receiver and transmitter FIFOs can store up to 64 bytes of data (plus three additional bits of error status per byte for the receiver FIFO) and have selectable trigger levels. Both interrupts and DMA are available to control the data flow between the LH and the module.

## 19.3.8.1 UART Mode

The UART uses a wired interface for serial communication with a remote device.

<!-- image -->

The UART module is functionally compatible with the TL16C750 UART and is also functionally compatible to earlier designs, such as the TL16C550. The UART module can use hardware or software flow control to manage transmission and reception. Hardware flow control significantly reduces software overhead and increases system efficiency by automatically controlling serial data flow using the RTS output and CTS input signals. Software flow control automatically controls data flow by using programmable XON/XOFF characters.

The UART modem module is enhanced with an autobauding functionality which in control mode allows to automatically set the speed, the number of bit per character, the parity selected.

<!-- image -->

## 19.3.8.1.1 UART Clock Generation: Baud Rate Generation

The UART function contains a programmable baud generator and a set of fixed dividers that divide the 48MHz clock input down to the expected baud rate.

Figure 19-15 shows the baud rate generator and associated controls.

<!-- image -->

## CAUTION

Before initializing or modifying clock parameter controls (UARTi.UART\_DLH, UARTi.UART\_DLL), MODE\_SELECT = DISABLE (UARTi.UART\_MDR1[2:0]) must be set to 0x7. Failure to observe this rule can result in unpredictable module behavior.

## 19.3.8.1.2 Choosing the Appropriate Divisor Value

Two divisor values are:

- UART 16x mode: Divisor value = Operating frequency/(16x baud rate)

- UART 13x mode: Divisor value = Operating frequency/(13x baud rate)

Table 19-25 describes the UART baud rate settings.

<!-- image -->

www.ti.com

## Table 19-25. UART Baud Rate Settings (48-MHz Clock)

| Baud Rate   | Baud Multiple   |   DLH,DLL (Decimal) | DLH,DLL (Hex)   | Actual Baud Rate   |   Error (%) |
|-------------|-----------------|---------------------|-----------------|--------------------|-------------|
| 0.3 kbps    | 16x             |               10000 | 0x27, 0x10      | 0.3 kbps           |        0    |
| 0.6 kbps    | 16x             |                5000 | 0x13, 0x88      | 0.6 kbps           |        0    |
| 1.2 kbps    | 16x             |                2500 | 0x09, 0xC4      | 1.2 kbps           |        0    |
| 2.4 kbps    | 16x             |                1250 | 0x04, 0xE2      | 2.4 kbps           |        0    |
| 4.8 kbps    | 16x             |                 625 | 0x02, 0x71      | 4.8 kbps           |        0    |
| 9.6 kbps    | 16x             |                 312 | 0x01, 0x38      | 9.6153 kbps        |        0.16 |
| 14.4 kbps   | 16x             |                 208 | 0x00, 0xD0      | 14.423 kbps        |        0.16 |
| 19.2 kbps   | 16x             |                 156 | 0x00, 0x9C      | 19.231 kbps        |        0.16 |
| 28.8 kbps   | 16x             |                 104 | 0x00, 0x68      | 28.846 kbps        |        0.16 |
| 38.4 kbps   | 16x             |                  78 | 0x00, 0x4E      | 38.462 kbps        |        0.16 |
| 57.6 kbps   | 16x             |                  52 | 0x00, 0x34      | 57.692 kbps        |        0.16 |
| 115.2 kbps  | 16x             |                  26 | 0x00, 0x1A      | 115.38 kbps        |        0.16 |
| 230.4 kbps  | 16x             |                  13 | 0x00, 0x0D      | 230.77 kbps        |        0.16 |
| 460.8 kbps  | 13x             |                   8 | 0x00, 0x08      | 461.54 kbps        |        0.16 |
| 921.6 kbps  | 13x             |                   4 | 0x00, 0x04      | 923.08 kbps        |        0.16 |
| 1.843 Mbps  | 13x             |                   2 | 0x00, 0x02      | 1.846 Mbps         |        0.16 |
| 3.6884 Mbps | 13x             |                   1 | 0x00, 0x01      | 3.6923 Mbps        |        0.16 |

## 19.3.8.1.3 UART Data Formatting

The UART can use hardware flow control to manage transmission and reception. Hardware flow control significantly reduces software overhead and increases system efficiency by automatically controlling serial data flow using the RTS output and CTS input signals.

The UART is enhanced with the autobauding function. In control mode, autobauding lets the speed, the number of bits per character, and the parity selected be set automatically.

## 19.3.8.1.3.1 Frame Formatting

When autobauding is not used, frame format attributes must be defined in the UARTi.UART\_LCR register.

Character length is specified using the UARTi.UART\_LCR[1:0] CHAR\_LENGTH bit field.

The number of stop-bits is specified using the UARTi.UART\_LCR[2] NB\_STOP bit.

The parity bit is programmed using the UARTi.UART\_LCR[5:3] PARITY\_EN, PARITY\_TYPE\_1, and PARITY\_TYPE\_2 bit fields (see Table 19-26).

Table 19-26. UART Parity Bit Encoding

|   PARITY_EN | PARITY_TYPE_1   | PARITY_TYPE_2   | Parity      |
|-------------|-----------------|-----------------|-------------|
|           0 | N/A             | N/A             | No parity   |
|           1 | 0               | 0               | Odd parity  |
|           1 | 1               | 0               | Even parity |
|           1 | 0               | 1               | Forced 1    |
|           1 | 1               | 1               | Forced 0    |

## 19.3.8.1.3.2 Hardware Flow Control

Hardware flow control is composed of auto-CTS and auto-RTS. Auto-CTS and auto-RTS can be enabled and disabled independently by programming the UARTi.UART\_EFR[7:6] AUTO\_CTS\_EN and AUTO\_RTS\_EN bit fields, respectively.

With auto-CTS, uarti\_cts must be active before the module can transmit data.

<!-- image -->

Auto-RTS activates the uarti\_rts output only when there is enough room in the RX FIFO to receive data. It deactivates the uarti\_rts output when the RX FIFO is sufficiently full. The HALT and RESTORE trigger levels in the UARTi.UART\_TCR register determine the levels at which uarti\_rts is activated and deactivated.

If auto-CTS and auto-RTS are enabled, data transmission does not occur unless the RX FIFO has empty space. Thus, overrun errors are eliminated during hardware flow control. If auto-CTS and auto-RTS are not enabled, overrun errors occur if the transmit data rate exceeds the RX FIFO latency.

- Auto-RTS:

Auto-RTS data flow control originates in the receiver block. The RX FIFO trigger levels used in autoRTS are stored in the UARTi.UART\_TCR register. uarti\_rts is active if the RX FIFO level is below the HALT trigger level in the UARTi.UART\_TCR[3:0] RX\_FIFO\_TRIG\_HALT bit field. When the RX FIFO HALT trigger level is reached, uarti\_rts is deasserted. The sending device (for example, another UART) can send an additional byte after the trigger level is reached because it may not recognize the deassertion of RTS until it begins sending the additional byte.

uarti\_rts is automatically reasserted when the RX FIFO reaches the RESUME trigger level programmed by the UARTi.UART\_TCR[7:4] RX\_FIFO\_TRIG\_START bit field. This reassertion requests the sending device to resume transmission.

In this case, uarti\_rts is an active-low signal.

- Auto-CTS:

The transmitter circuitry checks uarti\_cts before sending the next data byte. When uarti\_cts is active, the transmitter sends the next byte. To stop the transmitter from sending the next byte, uarti\_cts must be deasserted before the middle of the last stop-bit currently sent.

The auto-CTS function reduces interrupts to the host system. When auto-CTS flow control is enabled, the uarti\_cts state changes do not have to trigger host interrupts because the device automatically controls its own transmitter. Without auto-CTS, the transmitter sends any data present in the transmit FIFO, and a receiver overrun error can result.

In this case, uarti\_cts is an active-low signal.

## 19.3.8.1.3.3 Software Flow Control

Software flow control is enabled through the enhanced feature register (UARTi.UART\_EFR) and the modem control register (UARTi.UART\_MCR). Different combinations of software flow control can be enabled by setting different combinations of the UARTi.UART\_EFR[3:0] bit field (see Table 19-27).

Two other enhanced features relate to software flow control:

- XON any function (UARTi.UART\_MCR[5]): Operation resumes after receiving any character after the XOFF character is recognized. If special character detect is enabled and special character is received after XOFF1, it does not resume transmission. The special character is stored in the RX FIFO.

NOTE: The XON-any character is written into the RX FIFO even if it is a software flow character.

- Special character (UARTi.UART\_EFR[5]): Incoming data is compared to XOFF2. When the special character is detected, the XOFF interrupt (UARTi.UART\_IIR[4]) is set, but it does not halt transmission. The XOFF interrupt is cleared by a read of UARTi.UART\_IIR. The special character is transferred to the RX FIFO. Special character does not work with XON2, XOFF2, or sequential XOFFs.

Table 19-27. UART\_EFR[3:0] Software Flow Control Options

|   Bit 3 |   Bit 2 | Bit 1   | Bit 0   | TX, RX Software Flow Controls   |
|---------|---------|---------|---------|---------------------------------|
|       0 |       0 | X       | X       | No transmit flow control        |
|       1 |       0 | X       | X       | Transmit XON1, XOFF1            |
|       0 |       1 | X       | X       | Transmit XON2, XOFF2            |

<!-- image -->

www.ti.com

Table 19-27. UART\_EFR[3:0] Software Flow Control Options (continued)

| Bit 3   | Bit 2   | Bit 1   | Bit 0   | TX, RX Software Flow Controls                  |
|---------|---------|---------|---------|------------------------------------------------|
| 1       | 1       | X       | X       | Transmit XON1, XON2: XOFF1, XOFF2 (1)          |
| X       | X       | 0       | 0       | No receive flow control                        |
| X       | X       | 1       | 0       | Receiver compares XON1, XOFF1                  |
| X       | X       | 0       | 1       | Receiver compares XON2, XOFF2                  |
| X       | X       | 1       | 1       | Receiver compares XON1, XON2: XOFF1, XOFF2 (1) |

(1) In these cases, the XON1 and XON2 characters or the XOFF1 and XOFF2 characters must be transmitted/received sequentially

XON1 is defined in the UARTi.UART\_XON1\_ADDR1[7:0] XON\_WORD1 bit field. XON2 is defined in the

with XON1/XOFF1 followed by XON2/XOFF2. UARTi.UART\_XON2\_ADDR2[7:0] XON\_WORD2 bit field.

XOFF1 is defined in the UARTi.UART\_XOFF1[7:0] XOFF\_WORD1 bit field. XOFF2 is defined in the UARTi.UART\_XOFF2[7:0] XOFF\_WORD2 bit field.

## 19.3.8.1.3.3.1 Receive (RX)

When software flow control operation is enabled, the UART compares incoming data with XOFF1/2 programmed characters (in certain cases, XOFF1 and XOFF2 must be received sequentially). When the correct XOFF characters are received, transmission stops after transmission of the current character completes. Detection of XOFF also sets the UARTi.UART\_IIR[4] bit (if enabled by UARTi.UART\_IER[5]) and causes the interrupt line to go low.

To resume transmission, an XON1/2 character must be received (in certain cases, XON1 and XON2 must be received sequentially). When the correct XON characters are received, the UARTi.UART\_IIR[4] bit is cleared and the XOFF interrupt disappears.

NOTE:

When a parity, framing, or break error occurs while receiving a software flow control character, this character is treated as normal data and is written to the RX FIFO.

When XON-any and special character detect are disabled and software flow control is enabled, no valid XON or XOFF characters are written to the RX FIFO. For example, when UARTi.UART\_EFR[1:0] = 0x2, if XON1 and XOFF1 characters are received, they are not written to the RX FIFO.

When pairs of software flow characters are programmed to be received sequentially (UARTi.UART\_EFR[1:0] = 0x3), the software flow characters are not written to the RX FIFO if they are received sequentially. However, received XON1/XOFF1 characters must be written to the RX FIFO if the subsequent character is not XON2/XOFF2.

## 19.3.8.1.3.3.2 Transmit (TX)

Two XOFF1 characters are transmitted when the RX FIFO passes the trigger level programmed by UARTi.UART\_TCR[3:0]. As soon as the RX FIFO reaches the trigger level programmed by UARTi.UART\_TCR[7:4], two XON1 characters are sent, so the data transfer recovers.

NOTE:

If software flow control is disabled after an XOFF character is sent, the module transmits XON characters automatically to enable normal transmission.

The transmission of XOFF(s)/XON(s) follows the same protocol as transmission of an ordinary byte from the TX FIFO. This means that even if the word length is 5, 6, or 7 characters, the 5, 6, or 7 LSBs of XOFF1/2 and XON1/2 are transmitted. The 5, 6, or 7 bits of a character are seldom transmitted, but this function is included to maintain compatibility with earlier designs.

It is assumed that software flow control and hardware flow control are never enabled simultaneously.

## 19.3.8.1.3.4 Autobauding Modes

In autobauding mode, the UART can extract transfer characteristics (speed, length, and parity) from an "at" (AT) command (ASCII code). These characteristics are used to receive data after an AT and to send data.

The following AT commands are valid:

| AT   | DATA   | <CR>   |
|------|--------|--------|
| at   | DATA   | <CR>   |
| A/   |        |        |
| a/   |        |        |

A line break during the acquisition of the sequence AT is not recognized, and an echo function is not implemented in hardware.

A/ and a/ are not used to extract characteristics, but they must be recognized because of their special meaning. A/ or a/ is used to instruct the software to repeat the last received AT command; therefore, an a/ always follows an AT, and transfer characteristics are not expected to change between an AT and an a/.

When a valid AT is received, AT and all subsequent data, including the final &lt;CR&gt; (0x0D), are saved to the RX FIFO. The autobaud state-machine waits for the next valid AT command. If an a/ (A/) is received, the a/ (A/) is saved in the RX FIFO and the state-machine waits for the next valid AT command.

On the first successful detection of the baud rate, the UART activates an interrupt to signify that the AT (upper or lower case) sequence is detected. The UARTi.UART\_UASR register reflects the correct settings for the baud rate detected. Interrupt activity can continue in this fashion when a subsequent character is received. Therefore, it is recommended that the software enable the RHR interrupt when using the autobaud mode.

The following settings are detected in autobaud mode with a module clock of 48 MHz:

- Speed:

- 115.2K baud

- 57.6K baud

- 38.4K baud

- 28.8K baud

- 19.2K baud

- 14.4K baud

- 9.6K baud

- 4.8K baud

- 2.4K baud

- 1.2K baud

- •

- Length: 7 or 8 bits

- Parity: Odd, even, or space

NOTE:

The combination of 7-bit character plus space parity is not supported.

Autobauding mode is selected when the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field is set to 0x2. In UART autobauding mode, UARTi.UART\_DLL, UARTi.UART\_DLH, and UARTi.UART\_LCR[5:0] bit field settings are not used; instead, UART\_UASR is updated with the configuration detected by the autobauding logic.

## UART\_UASR Autobauding Status Register Use

This register is used to set up transmission according to the characteristics of the previous reception instead of the UARTi.UART\_LCR, UARTi.UART\_DLL, and UARTi.UART\_DLH registers when the UART is in autobauding mode.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

To reset the autobauding hardware (to start a new AT detection) or to set the UART in standard mode (no autobaud), the UARTi.UART\_MDR1[2:0] MODE\_ SELECT bit field must be set to reset state (0x7) and then to the UART in autobauding mode (0x2) or to the UART in standard mode (0x0).

## Use limitation:

- Only 7- and 8-bit characters (5- and 6-bit not supported)
- 7-bit character with space parity not supported
- Baud rate between 1200 and 115,200 bps (10 possibilities)

## 19.3.8.1.3.5 Error Detection

When the UARTi.UART\_LSR register is read, the UARTi.UART\_LSR[4:2] bit field reflects the error bits (BI: break condition, FE: framing error, PE: parity error) of the character at the top of the RX FIFO (the next character to be read). Therefore, reading the UARTi.UART\_LSR register and then reading the UARTi.UART\_RHR register identifies errors in a character.

Reading the UARTi.UART\_RHR register updates the BI, FE, and PE bits (see Table 19-11 for the UART mode interrupts).

The UARTi.UART\_LSR[7] RX\_FIFO\_STS bit is set when there is an error in the RX FIFO and is cleared only when no errors remain in the RX FIFO.

NOTE:

Reading the UARTi.UART\_LSR register does not cause an increment of the RX FIFO read pointer. The RX FIFO read pointer is incremented by reading the UARTi.UART\_RHR register.

Reading the UARTi.UART\_LSR register clears the OE bit if it is set (see Table 19-11 for the UART mode interrupts).

## 19.3.8.1.3.6 Overrun During Receive

Overrun during receive occurs if the RX state-machine tries to write data into the RX FIFO when it is already full. When overrun occurs, the device interrupts the MPU with the UARTi.UART\_IIR[5:1] IT\_TYPE bit field set to 0x3 (receiver line status error) and discards the remaining portion of the frame.

Overrun also causes an internal flag to be set, which disables further reception. Before the next frame can be received, the MPU must:

- Reset the RX FIFO.
- Read the UARTi.UART\_RESUME register, which clears the internal flag.

## 19.3.8.1.3.7 Time-Out and Break Conditions

## 19.3.8.1.3.7.1 Time-Out Counter

An RX idle condition is detected when the receiver line (uarti\_rx) is high for a time that equals 4x the programmed word length + 12 bits. uarti\_rx is sampled midway through each bit.

For sleep mode, the counter is reset when there is activity on uarti\_rx.

For the time-out interrupt, the counter counts only when there is data in the RX FIFO, and the count is reset when there is activity on uarti\_rx or when the UARTi.UART\_RHR register is read.

## 19.3.8.1.3.7.2 Break Condition

When a break condition occurs, uarti\_tx is pulled low. A break condition is activated by setting the UARTi.UART\_LCR[6] BREAK\_EN bit. The break condition is not aligned on word stream (a break condition can occur in the middle of a character). The only way to send a break condition on a full character is:

1. Reset the TX FIFO (if enabled).
2. Wait for the transmit shift register to empty (the UARTi.UART\_LSR[6] TX\_SR\_E bit is set to 1).

3. Take a guard time according to stop-bit definition.
4. Set the BREAK\_EN bit to 1.

The break condition is asserted while the BREAK\_EN bit is set to 1.

The time-out counter and break condition apply only to UART modem operation and not to IrDA/CIR mode operation.

## 19.3.8.2 IrDA Mode

## 19.3.8.2.1 Slow Infrared (SIR) Mode

In SIR mode, data transfers take place between the LH and peripheral devices at speeds of up to 115200 bauds. A SIR transmit frame starts with start flags (either a single 0xC0, multiple 0xC0, or a single 0xC0 preceded by a number of 0xFF flags), followed by frame data, CRC-16, and ends with a stop flag (0xC1). The bit format for a single word uses a single start bit, eight data bits, and one stop bit. The format is unaffected by the use and settings of the LCR register.

Note that BLR[6] is used to select whether to use 0xC0 or 0xFF start patterns when multiple start flags are required.

The SIR transmit state machine attaches start flags, CRC-16, and stop flags. It checks the outgoing data to establish if data transparency is required.

SIR transparency is carried out if the outgoing data, between the start and stop flags, contains 0xC0, 0xC1, or 0x7D. If one of these is about to be transmitted, then the SIR state machine sends an escape character (0x7D) first, then inverts the fifth bit of the real data to be sent and sends this data immediately after the 0x7D character.

The SIR receive state machine recovers the receive clock, removes the start flags, removes any transparency from the incoming data, and determines frame boundary with reception of the stop flag. It also checks for errors, such as frame abort (0x7D character followed immediately by a 0xC1 stop flag, without transparency), CRC error, and frame-length error. At the end of a frame reception, the LH reads the line status register (LSR) to find out possible errors of the received frame.

Data can be transferred both ways by the module, but when the device is transmitting the IR RX circuitry is automatically disabled by hardware. See bit 5 in the auxiliary control register (ACREG) for a description of the logical operation. Note: This applies to all three modes SIR, MIR, and FIR.

The infrared output in SIR mode can either be 1.6 μ s or 3/16 encoding, selected by the PULSETYPE bit of the Auxiliary Control Register (ACREG[7]). In 1.6 μ s encoding, the infrared pulse width is 1.6 μ s and in 3/16 encoding the infrared pulse width is 3/16 of a bit duration (1/baud-rate). The receiver supports both 3/16 and 1.6 μ s pulse duration by default. The transmitting device must send at least two start flags at the start of each frame for back-to-back frames. Note: Reception supports variable-length stop bits.

## 19.3.8.2.1.1 Frame Format

Figure 19-16. IrDA SIR Frame Format

<!-- image -->

The CRC is applied on the address (A), control (C) and information (I) bytes.

Note: The two words of CRC are written in the FIFO in reception.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 19.3.8.2.1.2 Asynchronous Transparency

Before transmitting a byte, the UART IrDA controller examines each byte of the payload and the CRC field (between BOF and EOF). For each byte equal to 0xC0 (BOF), 0xC1 (EOF), or 0x7D (control escape) it does the following.

## In transmission

1. Inserts a control escape (CE) byte preceding the byte.
2. Complements bit 5 of the byte (i.e., exclusive OR's the byte with 0x20).

The byte sent for the CRC computation is the initial byte written in the TX FIFO (before the XOR with 0x20).

## In reception

For the A, C, I, CRC field:

1. Compare the byte with CE byte, and if not equal send it to the CRC detector and store it in the RX FIFO.
2. If equal to CE, discard the CE byte.
3. Complements the bit 5 of the byte following the CE.
4. 4. Send the complemented byte to the CRC detector and store it in the RX FIFO.

## 19.3.8.2.1.3 Abort Sequence

The transmitter may decide to prematurely close a frame. The transmitter aborts by sending the following sequence: 0x7DC1. The abort pattern closes the frame without a CRC field or an ending flag.

It is possible to abort a transmission frame by programming the ABORTEN bit of the Auxiliary Control Register (ACREG[1]). When this bit is set to 1, 0x7D and 0xC1 are transmitted and the frame is not terminated with CRC or stop flags. The receiver treats a frame as an aborted frame when a 0x7D character, followed immediately by a 0xC1 character, has been received without transparency.

## 19.3.8.2.1.4 Pulse Shaping

In SIR mode, both the 3/16th and the 1.6 μ s pulse duration methods are supported in receive and transmit. ACREG[7] selects the pulse width method in transmit mode.

## 19.3.8.2.1.5 Encoder

Serial data from the transmit state machine is encoded to transmit data to the optoelectronics. While the serial data input to the (TXD) is high, the output (IRTX) is always low, and the counter used to form a pulse on IRTX is continuously cleared. After TXD resets to 0, IRTX rises on the falling edge of the 7th 16XCLK. On the falling edge of the 10th 16XCLK pulse, IRTX falls, creating a 3-clock-wide pulse. While TXD stays low, a pulse is transmitted during the 7th to the 10th clock of each 16-clock bit cycle.

<!-- image -->

## 19.3.8.2.1.6 Decoder

After reset, RXD is high and the 4-bit counter is cleared. When a rising edge is detected on RX, RXD falls on the next rising edge of 16XCLK with sufficient setup time. RXD stays low for 16 cycles (16XCLK) and then returns to high as required by the IrDA specification. As long as no pulses (rising edges) are detected on the RX, RXD remains high.

<!-- image -->

The operation of the RX input can be disabled with DISIRRX bit of the Auxiliary Control Register (ACREG[5]). Furthermore, the MDR2[6] can be used to invert the signal from the transceiver (RX ouput) pin to the IRRX logic inside the UART.

## 19.3.8.2.1.7 IR Address Checking

In all IR modes, if address checking has been enabled, only frames intended for the device are written to the RX FIFO. This is to avoid receiving frames not meant for this device in a multi-point infrared environment. It is possible to program two frame addresses that the UART IrDA receives with XON1/ADDR1 and XON2/ADDR2 registers. Selecting address1 checking is done by setting EFR[0] to 1; address2 checking is done by setting EFR[1] to 1.

Setting EFR[1:0] to 0 disables all address checking operations. If both bits are set, then the incoming frame is checked for both private and public addresses. If address checking is disabled, then all received frames are written into the reception FIFO.

## 19.3.8.2.1.8 SIR Free Format Mode

To allow complete software flexibility in the transmission and reception of Infrared data packets, the SIR free format mode is a sub-function of the existing SIR mode such that all frames going to and from the FIFO buffers are untouched with respect to appending and removing control characters and CRC values. In the transmission phase, the mode uses the IRTX pin, as in SIR mode.

This mode corresponds to a UART mode with a pulse modulation of 3/16 of baud-rate pulse width.

For example, a normal SIR packet has BOF control and CRC error checking data appended (transmitting) or removed (receiving) from the data going to and from the FIFOs. In SIR free format mode, only the data termed the FIFO DATA area, illustrated in Figure 19-19, would be transmitted and received.

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

In this mode, the entire FIFO data packet is to be constructed (encoded and decoded) by the LH software.

The SIR free format mode is selected by setting the module in UART mode (MDR1[2:0] = 000) and the MDR2[3] register bit to one to allow the pulse shaping. As the bit format is to remain the same, some UART mode configuration registers need to be set at specific value:

- LCR[1:0] = '11' (8 data bits)
- LCR[2] = 0 (1 stop bit)
- LCR[3] = 0 (no parity)
- ACREG[7] = 0 (3/16 of baud-rate pulse width)

The features defined through MDR2[6] and ACREG[5] are also supported.

Note: - All other configuration registers need to be at the reset value. The UART mode interrupts are used for the SIR free format mode, but many of them are not relevant (e.g., XOFF, RTS, CTS, Modem status register).

## 19.3.8.2.2 Medium Infrared (MIR) Mode

In MIR mode, data transfers take place between LH and peripheral devices at 0.576 or 1.152 Mbits/s speed. A MIR transmit frame starts with start flags (at least two), followed by a frame data, CRC-16, and ends with a stop flag.

## Figure 19-20. MIR Transmit Frame Format

<!-- image -->

On transmit, the MIR state machine attaches start flags, CRC-16, and stop flags. It also looks for five consecutive values of 1 in the frame data and automatically inserts a zero after five consecutive values of one (this is called bit stuffing).

On receive, the MIR receive state machine recovers the receive clock, removes the start flags, de-stuffs the incoming data, and determines frame boundary with reception of the stop flag. It also checks for errors, such as frame abort, CRC error, or frame-length error. At the end of a frame reception, the LH reads the line status register (LSR) to find possible errors of received frame.

Data can be transferred both ways by the module but when the device is transmitting, the IR RX circuitry is automatically disabled by hardware. See bit 5 in the auxiliary control register (ACREG) for a description of the logical operation. Note: This applies to all three modes SIR, MIR and FIR.

## 19.3.8.2.2.1 MIR Encoder/Decoder

In order to meet MIR baud-rate tolerance of +/-0.1% with a 48-MHz clock input, a 42-41-42 encoding/decoding adjustment is performed. The reference start point is the first start flag and the 42-4142 cyclic pattern is repeated until the stop flag is sent or detected. The jitter created this way is within MIR tolerances. The pulse width is not exactly 1/4 but within tolerances defined by the IrDA specifications.

<!-- image -->

Figure 19-21. MIR BAUD Rate Adjustment Mechanism

<!-- image -->

## 19.3.8.2.2.2 SIP Generation

In MIR and FIR operation modes, the transmitter needs to send a serial infrared interaction pulse (SIP) at least once every 500 ms. The purpose of the SIP is to let slow devices (operating in SIR mode) know that the medium is currently occupied. The SIP pulse is shown in Figure 19-22

<!-- image -->

When the SIPMODE bit of Mode Definition Register 1 (MDR1[6]) equals 1, the TX state machine will always send one SIP at the end of a transmission frame. But when MDR1[6] = 0, the transmission of the SIP depends on the SENDSIP bit of the Auxiliary Control Register (ACREG[3]). The system (LH) can set ACREG[3] at least once every 500ms. The advantage of this approach over the default approach is that the TX state machine does not need to send the SIP at the end of each frame which may reduce the overhead required

## 19.3.8.2.3 Fast Infrared (FIR) Mode

In FIR mode, data transfers take place between LH and peripheral devices at 4 Mbits/s speed. A FIR transmit frame starts with a preamble, followed by a start flag, frame data, CRC-32, and ends with a stop flag.

## Figure 19-23. FIR Transmit Frame Format

<!-- image -->

On transmit, the FIR transmit state machine attaches the preamble, start flag, CRC-32, and stop flag. It also encodes the transmit data into 4PPM format. It also generates the serial infrared interaction pulse (SIP).

<!-- image -->

## www.ti.com

On receive, the FIR receive state machine recovers the receive clock, removes the start flag, decodes the 4PPM incoming data, and determines frame boundary with a reception of the stop flag. It also checks for errors such as an illegal symbol, a CRC error, and a frame-length error. At the end of a frame reception, the LH reads the line status register (LSR) to find out possible errors of the received frame.

Data can be transferred both ways by the module but when the device is transmitting, the IR RX circuitry is automatically disabled by hardware. See bit 5 in the auxiliary control register (ACREG) for a description of the logical operation. Note: This applies to all three modes of SIR, MIR, and FIR.

## 19.3.8.2.4 IrDA Clock Generation: Baud Generator

The IrDA function contains a programmable baud generator and a set of fixed dividers that divide the 48MHz clock input down to the expected baud rate.

Figure 19-24 shows the baud rate generator and associated controls.

Figure 19-24. Baud Rate Generator

<!-- image -->

## CAUTION

Before initializing or modifying clock parameter controls (UARTi.UART\_DLH, UARTi.UART\_DLL), MODE\_SELECT=DISABLE (UARTi.UART\_MDR1[2:0]) must be set to 0x7). Failure to observe this rule can result in unpredictable module behavior.

## 19.3.8.2.5 Choosing the Appropriate Divisor Value

Three divisor values are:

- SIR mode: Divisor value = Operating frequency/(16x baud rate)

- MIR mode: Divisor value = Operating frequency/(41x/42x baud rate)

- FIR mode: Divisor value = None

Table 19-28 lists the IrDA baud rate settings.

Table 19-28. IrDA Baud Rate Settings

| Baud Rate   | IR Mode   | Baud Multiple   | Encoding   | DLH, DLL (Decimal)   | Actual Baud Rate   |   Error (%) | Source Jitter (%)   | Pulse Duration   |
|-------------|-----------|-----------------|------------|----------------------|--------------------|-------------|---------------------|------------------|
| 2.4 kbps    | SIR       | 16x             | 3/16       | 1250                 | 2.4 kbps           |        0    | 0                   | 78.1 µs          |
| 9.6 kbps    | SIR       | 16x             | 3/16       | 312                  | 9.6153 kbps        |        0.16 | 0                   | 19.5 µs          |
| 19.2 kbps   | SIR       | 16x             | 3/16       | 156                  | 19.231 kbps        |        0.16 | 0                   | 9.75 µs          |
| 38.4 kbps   | SIR       | 16x             | 3/16       | 78                   | 38.462 kbps        |        0.16 | 0                   | 4.87 µs          |
| 57.6 kbps   | SIR       | 16x             | 3/16       | 52                   | 57.692 kbps        |        0.16 | 0                   | 3.25 µs          |
| 115.2 kbps  | SIR       | 16x             | 3/16       | 26                   | 115.38 kbps        |        0.16 | 0                   | 1.62 µs          |
| 0.576 Mbps  | MIR       | 41x/42x         | 1/4        | 2                    | 0.5756 Mbps (1)    |        0    | +1.63/-0.80         | 416 ns           |
| 1.152 Mbps  | MIR       | 41x/42x         | 1/4        | 1                    | 1.1511 Mbps (1)    |        0    | +1.63/-0.80         | 208 ns           |
| 4 Mbps      | FIR       | 6x              | 4 PPM      | -                    | 4 Mbps             |        0    | 0                   | 125 ns           |

(1)

Average value

NOTE:

Baud rate error and source jitter table values do not include 48-MHz reference clock error and jitter.

## 19.3.8.2.6 IrDA Data Formatting

The methods described in this section apply to all IrDA modes (SIR, MIR, and FIR).

## 19.3.8.2.6.1 IR RX Polarity Control

The UARTi.UART\_MDR2[6] IRRXINVERT bit provides the flexibility to invert the uarti\_rx\_irrx pin in the UART to ensure that the protocol at the output of the transceiver has the same polarity at module level. By default, the uarti\_rx\_irrx pin is inverted because most transceivers invert the IR receive pin.

## 19.3.8.2.6.2 IrDA Reception Control

The module can transmit and receive data, but when the device is transmitting, the IR RX circuitry is automatically disabled by hardware.

Operation of the uarti\_rx\_irrx input can be disabled by the UARTi.UART\_ACREG[5] DIS\_IR\_RX bit.

## 19.3.8.2.6.3 IR Address Checking

In all IR modes, when address checking is enabled, only frames intended for the device are written to the RX FIFO. This restriction avoids receiving frames not meant for this device in a multipoint infrared environment. It is possible to program two frame addresses that the UART IrDA receives, with the UARTi.UART\_XON1\_ADDR1[7:0] XON\_WORD1 and UARTi.UART\_XON2\_ADDR2[7:0] XON\_WORD2 bit fields.

Setting the UART\_EFR[0] bit to 1 selects address1 checking. Setting the UART\_EFR[1] bit to 1 selects address2 checking. Setting the UART\_EFR[1:0] bit field to 0 disables all address checking operations. If both bits are set, the incoming frame is checked for private and public addresses.

If address checking is disabled, all received frames write to the RX FIFO.

## 19.3.8.2.6.4 Frame Closing

A transmission frame can be terminated in two ways:

<!-- image -->

<!-- image -->

## www.ti.com

- Frame-length method: Set the UARTi.UART\_MDR1[7] FRAME\_END\_MODE bit to 0. The MPU writes the value of the frame length to the UARTi.UART\_TXFLH and UARTi.UART\_TXFLL registers. The device automatically attaches end flags to the frame when the number of bytes transmitted equals the value of the frame length.
- Set-EOT bit method: Set the FRAME\_END\_MODE bit to 1. The MPU writes 1 to the UARTi.UART\_ACREG[0] EOT bit just before it writes the last byte to the TX FIFO. When the MPU writes the last byte to the TX FIFO, the device internally sets the tag bit for that character in the TX FIFO. As the TX state-machine reads data from the TX FIFO, it uses this tag-bit information to attach end flags and correctly terminate the frame.

## 19.3.8.2.6.5 Store and Controlled Transmission

In store and controlled transmission (SCT) mode, the MPU starts writing data to the TX FIFO. Then, after writing a part of a frame (for a bigger frame) or an entire frame (a small frame; that is, a supervisory frame), the MPU writes 1 to the UARTi.UART\_ACREG[2] SCTX\_EN bit (deferred TX start) to start transmission.

SCT mode is enabled by setting the UARTi.UART\_MDR1[5] SCT bit to 1. This transmission method differs from normal mode, in which data transmission starts immediately after data is written to the TX FIFO. SCT mode is useful for sending short frames without TX underrun.

## 19.3.8.2.6.6 Error Detection

When the UARTi.UART\_LSR register is read, the UARTi.UART\_LSR[4:2] bit field reflects the error bits [FL, CRC, ABORT] of the frame at the top of the STATUS FIFO (the next frame status to be read).

The error is triggered by an interrupt (for IrDA mode interrupts, see Table 19-12). The STATUS FIFO must be read until empty (a maximum of eight reads is required).

## 19.3.8.2.6.7 Underrun During Transmission

Underrun during transmission occurs when the TX FIFO is empty before the end of the frame is transmitted. When underrun occurs, the device closes the frame with end flags but attaches an incorrect CRC value. The receiving device detects a CRC error and discards the frame; it can then ask for a retransmission.

Underrun also causes an internal flag to be set, which disables additional transmissions. Before the next frame can be transmitted, the MPU must:

- Reset the TX FIFO.
- Read the UARTi.UART\_RESUME register, which clears the internal flag.

This function can be disabled by the UARTi.UART\_ACREG[4] DIS\_TX\_UNDERRUN bit, compensated by the extension of the stop-bit in transmission if the TX FIFO is empty.

## 19.3.8.2.6.8 Overrun During Receive

Overrun during receive for the IrDA mode has the same function as that for the UART mode (see Section 19.3.8.1.3.6, Overrun During Receive ).

## 19.3.8.2.6.9 Status FIFO

In IrDA modes, a status FIFO records the received frame status. When a complete frame is received, the length of the frame and the error bits associated with the frame are written to the status FIFO.

Reading the UARTi.UART\_SFREGH[3:0] MSB and UARTi.UART\_SFREGL[3:0] (LSB) bit fields obtains the frame length. The frame error status is read in the UARTi.UART\_SFLSR register. Reading the UARTi.UART\_SFLSR register increments the status FIFO read pointer. Because the status FIFO is eight entries deep, it can hold the status of eight frames.

The MPU uses the frame-length information to locate the frame boundary in the received frame data. The MPU can screen bad frames using the error status information and can later request the sender to resend only the bad frames.

<!-- image -->

This status FIFO can be used effectively in DMA mode because the MPU must be interrupted only when the programmed status FIFO trigger level is reached, not each time a frame is received.

## 19.3.8.2.7 SIR Mode Data Formatting

This section provides specific instructions for SIR mode programming.

## 19.3.8.2.7.1 Abort Sequence

The transmitter can prematurely close a frame (abort) by sending the sequence 0x7DC1. The abort pattern closes the frame without a CRC field or an ending flag.

A transmission frame can be aborted by setting the UARTi.UART\_ACREG[1] ABORT\_EN bit to 1. When this bit is set to 1, 0x7D and 0xC1 are transmitted and the frame is not terminated with CRC or stop flags.

When a 0x7D character followed immediately by a 0xC1 character is received without transparency, the receiver treats a frame as an aborted frame.

## CAUTION

When the TX FIFO is not empty and the UARTi.UART\_MDR1[5] SCT bit is set to 1, the UART IrDA starts a new transfer with data of a previous frame when the aborted frame is sent. Therefore, the TX FIFO must be reset before sending an aborted frame.

## 19.3.8.2.7.2 Pulse Shaping

SIR mode supports the 3/16 or the 1.6-µs pulse duration methods in receive and transmit. The UARTi.UART\_ACREG[7] PULSE\_TYPE bit selects the pulse width method in the transmit mode.

## 19.3.8.2.7.3 SIR Free Format Programming

The SIR FF mode is selected by setting the module in the UART mode (UARTi.UART\_MDR1[2:0] MODE\_SELECT = 0x0) and the UARTi.UART\_MDR2[3] UART\_PULSE bit to 1 to allow pulse shaping.

Because the bit format stays the same, some UART mode configuration registers must be set at specific values:

- UARTi.UART\_LCR[1:0] CHAR\_LENGTH bit field = 0x3 (8 data bits)
- UARTi.UART\_LCR[2] NB\_STOP bit = 0x0 (1 stop-bit)
- UARTi.UART\_LCR[3] PARITY\_EN bit = 0x0 (no parity)

The UART mode interrupts are used for the SIR FF mode, but many are not relevant (XOFF, RTS, CTS, modem status register, etc.).

## 19.3.8.2.8 MIR and FIR Mode Data Formatting

This section describes common instructions for FIR and MIR mode programming.

At the end of a frame reception, the MPU reads the line status register (UARTi.UART\_LSR) to detect errors in the received frame.

When the UARTi.UART\_MDR1[6] SIP\_MODE bit is set to 1, the TX state-machine always sends one SIP at the end of a transmission frame. However, when the SIP\_MODE bit is set to 0, SIP transmission depends on the UARTi.UART\_ACREG[3] SEND\_SIP bit.

The MPU can set the SEND\_SIP bit at least once every 500 ms. The advantage of this approach over the default approach is that the TX state-machine does not have to send the SIP at the end of each frame, thus reducing the overhead required.

<!-- image -->

www.ti.com

## 19.3.8.3 CIR Mode

In consumer infrared mode, the infrared operation is designed to function as a programmable (universal) remote control. By setting the MDR1 register, the UART can be set to CIR mode in the same way as the other IrDA modes are set using the MDR1 register.

The CIR mode uses a variable pulse width modulation technique (based on multiples of a programmable T period) to encompass the various formats of infrared encoding for remote control applications. The CIR logic is to transmit and receive data packets according to the user definable frame structure and packet content.

## 19.3.8.3.1 Consumer IR Encoding

There are two distinct methods of encoding for remote control applications. The first uses time extended bit forms i.e. a variable pulse distance (or duration) whereby the difference between a logic one and logic zero is the length of the pulse width; and the second is the use of a bi-phase where the encoding of the logic zero and one is in the change of signal level from 1 → 0 or 0 → 1 respectively. Japanese manufacturers tend to favor the use of pulse duration encoding whereas European manufacturers favor the use of bi-phase encoding.

The CIR mode is designed to use a completely flexible free format encoding where a digit '1' from the TX/RX FIFO is to be transmitted/received as a modulated pulse with duration T. Equally, a '0' is to be transmitted/received as a blank duration T. The protocol of the data is to be constructed and deciphered by the host CPU. For example, the RC-5 protocol using Manchester encoding can be emulated as using a '01' pair for one and '10' pair for a zero.

Figure 19-25. RC-5 Bit Encoding

<!-- image -->

Since the CIR mode logic does not impose a fixed format for infrared packets of data, the CPU software is at liberty to define the format through the use of simple data structures that will then be modulated into an industry standard, such as RC5 or SIRC. To send a sequence of '0101' in RC5, the host software must write an eight bit binary character of '10011001' to the data TX FIFO of the UART.

For SIRC, the modulation length (i.e. multiples of T) is the method to distinguish between a '1' or a '0'. The following SIRC digits show the difference in encoding between this and RC5 for example. Note: the pulse width is extended for '1' digits.

Figure 19-26. SIRC Bit Encoding

<!-- image -->

<!-- image -->

To construct comprehensive packets that constitute remote control commands, the host software must combine a number of eight bit data characters in a sequence that follows one of the universally accepted formats. For illustrative purposes, a standard RC5 frame is described below (the SIRC format follows this). Each of the above fields in RC-5 can be considered as two T pulses (digital bits) from the TX and RX FIFOs.

The standard RC5 format as seen by the UART\_IrDA in CIR mode.

## Figure 19-27. RC-5 Standard Packet Format

<!-- image -->

## Where:

S1, S2: Start bits (always 1)

T: Toggle bit

A4-A0: Address (or system) bits

C5-C0: Command bits

The toggle bit T changes each time a new command is transmitted to allow detection of pressing the same key twice (or effectively receiving the same data from the host consecutively). Since a code is being sent as long as the CPU transmits characters to the UART for transmission, a brief delay in the transmission of the same command would be detected by the use of the toggle bit. The address bits define the machine or device that the Infrared transmission is intended for and the command defines the operation.

To accommodate an extended RC5 format, the S2 bit is replaced by a further command bit (C6) that allows the command range to increase to 7-bits. This format is known as the extended RC-5 format.

The SIRC encoding uses the duration of modulation for mark and space; hence the duration of data bits inside the standard frame length will vary depending upon the logic 1 content. The packet format and bit encoding is illustrated below. There is one start bit of two milliseconds and control codes followed by data that constitute the whole frame.

## Figure 19-28. SIRC Packet Format

<!-- image -->

It should be noted that the encoding must take a standard duration but the contents of the data may vary. This implies that the control software for emitting and receiving data packets must exercise a scheme of inter-packet delay, where the emission of successive packets can only be done after a real time delay has expired.

## Figure 19-29. SIRC Bit Transmission Example

<!-- image -->

It is beyond the scope of this document to describe all encoding methods and techniques, the previous information was provided to illustrate the consideration required to employ different encoding methods for different industry standard protocols. The user should refer to industry standard documentation for specific methods of encoding and protocol usage.

<!-- image -->

www.ti.com

## 19.3.8.3.2 CIR Mode Operation

Depending on the encoding method (variable pulse distance / bi-phase), the LH should develop a data structure that combines the 1 and 0 with a T period in order to encode the complete frame to transmit. This can then be transmitted to the infrared output with a method of modulation shown in the following diagram.

Figure 19-30. CIR Mode Block Components

<!-- image -->

<!-- image -->

In transmission, the LH software must exercise an element of real time control for transmitting data packets; they must each be emitted at a constant delay from the start bits of each of the individual packets which means when sending a series of packets, the packet to packet delay must respect a specific delay.

To control this delay 2 methods can be used:

- By filling the TX FIFO with a number of zero bit which is transmitted with a T period.
- By using an external system timer which controls the delay either between each start of frame or between the end of a frame and the start of the next one. This can be performed:
- -By controlling the start of the frame through the configuration register MDR1[5] and ACREG[2] depending on the timer status (in case of control the delay between each start of frame).
- -By using the TX\_STATUS interrupt IIR[5] to pre-load the next frame in the TX FIFO and to control the start of the timer (in case of control the delay between end of frame and start of next frame).

## In reception, there are two ways to stop it :

- The LH can disable the reception by setting the ACREG[5] to 1 when it considers that the reception is finished because a large number of 0 has been received. To receive a new frame, the ACREG[5] must be set to 0.
- A specific mechanism, depending on the value set in the BOF length register (EBLR), allows for automatically stopping the reception. If the value set in the EBLR register is different than 0, this features is enabled and count a number of bit received at 0. When the counter achieves the value defined in the EBLR register, the reception is automatically stopped and RX\_STOP\_IT (IIR[2]) is set. When a 1 is detected on the RCRX pin, the reception is automatically enabled.

Note: There's a limitation when receiving data in UART CIR mode. The IrDA transceivers on the market have a common characteristic that shrinks the hold time of the received modulation pulse. The UART filtering schema on receiving is based on the same encoding mechanism used in transmission.

## For the following scenario:

- Shift register period: 0.9 us
- Modulation frequency: 36 Khz
- Duty cycle: 1/4 of a modulation frequency period

The data sent in these conditions would look like 7us pulses within 28us period. The UART expects to receive similar incoming data on receive, but available transceiver timing characteristics typically send 2us modulated pulses. Those will be filtered out and RX FIFO won't receive any data.

This does not affect UART CIR mode in transmission.

Note: The CIR RX demodulation can be bypassed by setting the MDR3[0] register bit.

## 19.3.8.3.3 Carrier Modulation

Looking closer at the actual modulation pulses of the infrared data stream, it should be noted that each modulated pulse that constitutes a digit is in fact a train of on/off pulses.

<!-- image -->

www.ti.com

Figure 19-31. CIR Pulse Modulation

<!-- image -->

A minimum of 4 modulation pulses per bit is required by the module.

Based on the requested modulation frequency, the CFPS register must be set with the correct dividing value to provide the more accurate pulse frequency:

Dividing value = (FCLK/12)/MODfreq

Where FCLK = System clock frequency (48 MHz)

12 = real value of BAUD multiple

MODfreq = Effective frequency of the modulation (MHz)

Example: For a targeted modulation frequency of 36 kHz, the CFPS value must be set to 111 in decimal which provide an modulation frequency of 36.04 kHz.

Note: The CFPS register is to start with a reset value of 105 (decimal) which translates to a frequency of 38.1 kHz.

The duty cycle of these pulses is user defined by the pulse duty register bits in the MDR2 configuration register.

|   MDR2[5:4] | Duty Cycle (High Level)   |
|-------------|---------------------------|
|          00 | 1/4                       |
|          01 | 1/3                       |
|          10 | 5/12                      |
|          11 | 1/2                       |

Figure 19-32. CIR Modulation Duty Cycle

<!-- image -->

<!-- image -->

The transmission logic ensures that all pulses are transmitted completely; i.e., there is no cut off of any pulses during its transmission. Furthermore, while transmitting continuous bytes back-to-back, no delay is inserted between two transmitted bytes. Note: The CIR RX demodulation can be bypassed by setting the MDR3[0] register bit. This bit will not affect the transmission modulation.

<!-- image -->

www.ti.com

## 19.3.8.3.4 Frequency Divider Values

The data transferred is a succession of pulse with a T period. Depending on the standards used, the T period is defined through the DLL and DLH registers which defined the value to divide the functional clock (48 MHz):

Dividing value = (FCLK/16)/Tfreq Where FCLK = System clock frequency (48 MHz) 16 = real value of BAUD multiple

Tfreq = Effective frequency of the T pulse (MHz)

In an example case using a variable pulse duration definitions:

Figure 19-33. Variable Pulse Duration Definitions

<!-- image -->

For a logical '1', the pulse duration is equal to 2T and for a logical '0', it's equal to 4T.

If T =0.56 ms, the value coded into the DLH and DLL register must be 1680 in decimal.