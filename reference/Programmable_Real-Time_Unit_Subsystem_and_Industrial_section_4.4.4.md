<!-- image -->

## 4.4.4 Universal Asynchronous Receiver/Transmitter (UART)

## 4.4.4.1 Introduction

## 4.4.4.1.1 Purpose of the Peripheral

The PRU UART peripheral within the PRU-ICSS is based on the industry standard TL16C550 asynchronous communications element, which in turn is a functional upgrade of the TL16C450. Functionally similar to the TL16C450 on power up (single character or TL16C450 mode), the UART can be placed in an alternate FIFO (TL16C550) mode. This relieves the CPU of excessive software overhead by buffering received and transmitted characters. The receiver and transmitter FIFOs store up to 16 bytes including three additional bits of error status per byte for the receiver FIFO.

The UART performs serial-to-parallel conversions on data received from a peripheral device and parallelto-serial conversion on data received from the CPU. The CPU can read the UART status at any time. The UART includes control capability and a processor interrupt system that can be tailored to minimize software management of the communications link.

The UART includes a programmable baud rate generator capable of dividing the PRU\_ICSS\_UART\_CLK input clock by divisors from 1 to 65535 and producing a 16× reference clock or a 13× reference clock for the internal transmitter and receiver logic. For detailed timing and electrical specifications for the UART, see your device-specific data manual.

## 4.4.4.1.2 Functional Block Diagram

A functional block diagram of the UART is shown in Figure 4-24.

## 4.4.4.1.3 Industry Standard(s) Compliance Statement

The UART peripheral is based on the industry standard TL16C550 asynchronous communications element, which is a functional upgrade of the TL16C450. The information in this chapter assumes you are familiar with these standards.

Figure 4-24. UART Block Diagram

<!-- image -->

NOTE: The value n indicates the applicable UART where there are multiple instances. For the PRU-ICSS, there is only one instance and all UART signals should reflect this (e.g., UART0\_TXD instead of UARTn\_TXD).

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.4.2 Functional Description

## 4.4.4.2.1 Clock Generation and Control

The UART bit clock is derived from an input clock to the UART. See your device-specific data manual to check the maximum data rate supported by the UART.

Figure 4-25 is a conceptual clock generation diagram for the UART. The PRU\_ICSS\_UART\_CLK is input to the Clock Generator, which uses a programmable divider to produce the UART input clock. The UART contains a programmable baud generator that takes the UART input clock and divides it by a divisor in the range between 1 and (2 16 - 1) to produce a baud clock (BCLK). The frequency of BCLK is sixteen times (16×) the baud rate (each received or transmitted bit lasts 16 BCLK cycles) or thirteen times (13×) the baud rate (each received or transmitted bit lasts 13 BCLK cycles). When the UART is receiving, the bit is sampled in the 8th BCLK cycle for 16× over sampling mode and on the 6th BCLK cycle for 13× oversampling mode. The 16× or 13× reference clock is selected by configuring the OSM\_SEL bit in the mode definition register (MDR). The formula to calculate the divisor is:

<!-- image -->

Two 8-bit register fields (DLH and DLL), called divisor latches, hold this 16-bit divisor. DLH holds the most significant bits of the divisor, and DLL holds the least significant bits of the divisor. For information about these register fields, see the UART register descriptions. These divisor latches must be loaded during initialization of the UART in order to ensure desired operation of the baud generator. Writing to the divisor latches results in two wait states being inserted during the write access while the baud generator is loaded with the new value.

Figure 4-26 summarizes the relationship between the transferred data bit, BCLK, and the UART input clock. Note that the timing relationship depicted in Figure 4-26 shows that each bit lasts for 16 BCLK cycles . This is in case of 16x over-sampling mode. For 13× over-sampling mode each bit lasts for 13 BCLK cycles .

Example baud rates and divisor values relative to a 192-MHz UART input clock and 16× over-sampling mode are shown in Table 4-24.

Figure 4-25. UART Clock Generation Diagram

<!-- image -->

<!-- image -->

www.ti.com

Figure 4-26. Relationships Between Data Bit, BCLK, and UART Input Clock

<!-- image -->

Table 4-24. Baud Rate Examples for 192-MHZ UART Input Clock and 16× Over-sampling Mode

|   Baud Rate |   Divisor Value |   Actual Baud Rate |   Error (%) |
|-------------|-----------------|--------------------|-------------|
|        2400 |            5000 |             2400   |        0    |
|        4800 |            2500 |             4800   |        0    |
|        9600 |            1250 |             9600   |        0    |
|       19200 |             625 |            19200   |        0    |
|       38400 |             313 |            38338.7 |       -0.16 |
|       56000 |             214 |            56074.8 |        0.13 |
|      128000 |              94 |           127660   |       -0.27 |
|      300000 |              40 |           300000   |        0    |

Table 4-25. Baud Rate Examples for 192-MHZ UART Input Clock and 13× Over-sampling Mode

|   Baud Rate |   Divisor Value |   Actual Baud Rate |   Error (%) |
|-------------|-----------------|--------------------|-------------|
|        2400 |            6154 |            2399.94 |     -0.0025 |
|        4800 |            3077 |            4799.88 |     -0.0025 |
|        9600 |            1538 |            9602.88 |      0.03   |
|       19200 |             769 |           19205.8  |      0.03   |
|       38400 |             385 |           38361.6  |     -0.1    |
|       56000 |             264 |           55944.1  |     -0.1    |
|      128000 |             115 |          128428    |      0.33   |
|      300000 |              49 |          301413    |      0.47   |

<!-- image -->

www.ti.com

## 4.4.4.2.2 Signal Descriptions

The UARTs utilize a minimal number of signal connections to interface with external devices. The UART signal descriptions are included in Table 4-26. Note that the number of UARTs and their supported features vary on each device. See your device-specific data manual for more details.

Table 4-26. UART Signal Descriptions

| Signal Name (1)   | Signal Type   | Function                           |
|-------------------|---------------|------------------------------------|
| UARTn_TXD         | Output        | Serial data transmit               |
| UARTn_RXD         | Input         | Serial data receive                |
| UARTn_CTS (2)     | Input         | Clear-to-Send handshaking signal   |
| UARTn_RTS (2)     | Output        | Request-to-Send handshaking signal |

(1) The value n indicates the applicable UART; that is, UART0, UART1, etc.

(2) This signal is not supported in all UARTs. See your device-specific data manual to check if it is supported.

## 4.4.4.2.3 Pin Multiplexing

Extensive pin multiplexing is used to accommodate the largest number of peripheral functions in the smallest possible package. Pin multiplexing is controlled using a combination of hardware configuration at device reset and software programmable register settings. See your device-specific data manual to determine how pin multiplexing affects the UART.

## 4.4.4.2.4 Protocol Description

## 4.4.4.2.4.1 Transmission

The UART transmitter section includes a transmitter hold register (THR) and a transmitter shift register (TSR). When the UART is in the FIFO mode, THR is a 16-byte FIFO. Transmitter section control is a function of the UART line control register (LCR). Based on the settings chosen in LCR, the UART transmitter sends the following to the receiving device:

- 1 START bit
- 5, 6, 7, or 8 data bits
- 1 PARITY bit (optional)
- 1, 1.5, or 2 STOP bits

## 4.4.4.2.4.2 Reception

The UART receiver section includes a receiver shift register (RSR) and a receiver buffer register (RBR). When the UART is in the FIFO mode, RBR is a 16-byte FIFO. Receiver section control is a function of the UART line control register (LCR). Based on the settings chosen in LCR, the UART receiver accepts the following from the transmitting device:

- 1 START bit
- 5, 6, 7, or 8 data bits
- 1 PARITY bit (optional)
- 1 STOP bit (any other STOP bits transferred with the above data are not detected)

## 4.4.4.2.4.3 Data Format

The UART transmits in the following format:

1 START bit + data bits (5, 6, 7, 8) + 1 PARITY bit (optional) + STOP bit (1, 1.5, 2)

It transmits 1 START bit; 5, 6, 7, or 8 data bits, depending on the data width selection; 1 PARITY bit, if parity is selected; and 1, 1.5, or 2 STOP bits, depending on the STOP bit selection.

The UART receives in the following format:

1 START bit + data bits (5, 6, 7, 8) + 1 PARITY bit (optional) + 1 STOP bit

It receives 1 START bit; 5, 6, 7, or 8 data bits, depending on the data width selection; 1 PARITY bit, if parity is selected; and 1 STOP bit.

The protocol formats are shown in Figure 4-27.

Figure 4-27. UART Protocol Formats

Transmit/Receive for 5-bit data, parity Enable, 1 STOP bit

D0

D1

D2

D3

D4

PARITY

STOP1

Transmit/Receive for 6-bit data, parity Enable, 1 STOP bit

D0

D1

D2

D3

D4

D5

PARITY

STOP1

Transmit/Receive for 7-bit data, parity Enable, 1 STOP bit

D0

D1

D2

D3

D4

D5

D6

PARITY

STOP1

Transmit/Receive for 8-bit data, parity Enable, 1 STOP bit

D0

D1

D2

D3

D4

D5

D6

D7

PARITY

STOP1

| D0   | D1   | D2   | D3   | D4   | D5   | D6   | D7   | PARITY   | STOP1   |
|------|------|------|------|------|------|------|------|----------|---------|

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.4.2.5 Operation

## 4.4.4.2.5.1 Transmission

The UART transmitter section includes a transmitter hold register (THR) and a transmitter shift register (TSR). When the UART is in the FIFO mode, THR is a 16-byte FIFO. Transmitter section control is a function of the UART line control register (LCR). Based on the settings chosen in LCR, the UART transmitter sends the following to the receiving device:

- 1 START bit
- 5, 6, 7, or 8 data bits
- 1 PARITY bit (optional)
- 1, 1.5, or 2 STOP bits

THR receives data from the internal data bus, and when TSR is ready, the UART moves the data from THR to TSR. The UART serializes the data in TSR and transmits the data on the UARTn\_TXD pin.

In the non-FIFO mode, if THR is empty and the THR empty (THRE) interrupt is enabled in the interrupt enable register (IER), an interrupt is generated. This interrupt is cleared when a character is loaded into THR or the interrupt identification register (IIR) is read. In the FIFO mode, the interrupt is generated when the transmitter FIFO is empty, and it is cleared when at least one byte is loaded into the FIFO or IIR is read.

## 4.4.4.2.5.2 Reception

The UART receiver section includes a receiver shift register (RSR) and a receiver buffer register (RBR). When the UART is in the FIFO mode, RBR is a 16-byte FIFO. Timing is supplied by the 16× receiver clock. Receiver section control is a function of the UART line control register (LCR). Based on the settings chosen in LCR, the UART receiver accepts the following from the transmitting device:

- 1 START bit
- 5, 6, 7, or 8 data bits
- 1 PARITY bit (optional)
- 1 STOP bit (any other STOP bits transferred with the above data are not detected)

RSR receives the data bits from the UARTn\_RXD pin. Then RSR concatenates the data bits and moves the resulting value into RBR (or the receiver FIFO). The UART also stores three bits of error status information next to each received character, to record a parity error, framing error, or break.

In the non-FIFO mode, when a character is placed in RBR and the receiver data-ready interrupt is enabled in the interrupt enable register (IER), an interrupt is generated. This interrupt is cleared when the character is read from RBR. In the FIFO mode, the interrupt is generated when the FIFO is filled to the trigger level selected in the FIFO control register (FCR), and it is cleared when the FIFO contents drop below the trigger level.

## 4.4.4.2.5.3 FIFO Modes

The following two modes can be used for servicing the receiver and transmitter FIFOs:

- FIFO interrupt mode. The FIFO is enabled and the associated interrupts are enabled. Interrupts are sent to the CPU to indicate when specific events occur.
- FIFO poll mode. The FIFO is enabled but the associated interrupts are disabled. The CPU polls status bits to detect specific events.

Because the receiver FIFO and the transmitter FIFO are controlled separately, either one or both can be placed into the interrupt mode or the poll mode.

## 4.4.4.2.5.3.1 FIFO Interrupt Mode

When the receiver FIFO is enabled in the FIFO control register (FCR) and the receiver interrupts are enabled in the interrupt enable register (IER), the interrupt mode is selected for the receiver FIFO. The following are important points about the receiver interrupts:

- The receiver data-ready interrupt is issued to the CPU when the FIFO has reached the trigger level that is programmed in FCR. It is cleared when the CPU or the DMA controller reads enough characters from the FIFO such that the FIFO drops below its programmed trigger level.
- The receiver line status interrupt is generated in response to an overrun error, a parity error, a framing error, or a break. This interrupt has higher priority than the receiver data-ready interrupt. For details, see Section 4.4.4.2.8.
- The data-ready (DR) bit in the line status register (LSR) indicates the presence or absence of characters in the receiver FIFO. The DR bit is set when a character is transferred from the receiver shift register (RSR) to the empty receiver FIFO. The DR bit remains set until the FIFO is empty again.
- A receiver time-out interrupt occurs if all of the following conditions exist:
- -At least one character is in the FIFO,
- -The most recent character was received more than four continuous character times ago. A character time is the time allotted for 1 START bit, n data bits, 1 PARITY bit, and 1 STOP bit, where n depends on the word length selected with the WLS bits in the line control register (LCR). See Table 4-27.
- -The most recent read of the FIFO has occurred more than four continuous character times before.
- Character times are calculated by using the baud rate.
- When a receiver time-out interrupt has occurred, it is cleared and the time-out timer is cleared when the CPU or the EDMA controller reads one character from the receiver FIFO. The interrupt is also cleared if a new character is received in the FIFO or if the URRST bit is cleared in the power and emulation management register (PWREMU\_MGMT).
- If a receiver time-out interrupt has not occurred, the time-out timer is cleared after a new character is received or after the CPU or EDMA reads the receiver FIFO.

When the transmitter FIFO is enabled in FCR and the transmitter holding register empty (THRE) interrupt is enabled in IER, the interrupt mode is selected for the transmitter FIFO. The THRE interrupt occurs when the transmitter FIFO is empty. It is cleared when the transmitter hold register (THR) is loaded (1 to 16 characters may be written to the transmitter FIFO while servicing this interrupt) or the interrupt identification register (IIR) is read.

Table 4-27. Character Time for Word Lengths

|   Word Length ( n ) | Character Time   | Four Character Times   |
|---------------------|------------------|------------------------|
|                   5 | Time for 8 bits  | Time for 32 bits       |
|                   6 | Time for 9 bits  | Time for 36 bits       |
|                   7 | Time for 10 bits | Time for 40 bits       |
|                   8 | Time for 11 bits | Time for 44 bits       |

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.4.2.5.3.2 FIFO Poll Mode

When the receiver FIFO is enabled in the FIFO control register (FCR) and the receiver interrupts are disabled in the interrupt enable register (IER), the poll mode is selected for the receiver FIFO. Similarly, when the transmitter FIFO is enabled and the transmitter interrupts are disabled, the transmitted FIFO is in the poll mode. In the poll mode, the CPU detects events by checking bits in the line status register (LSR):

- The RXFIFOE bit indicates whether there are any errors in the receiver FIFO.
- The TEMT bit indicates that both the transmitter holding register (THR) and the transmitter shift register (TSR) are empty.
- The THRE bit indicates when THR is empty.
- The BI (break), FE (framing error), PE (parity error), and OE (overrun error) bits specify which error or errors have occurred.
- The DR (data-ready) bit is set as long as there is at least one byte in the receiver FIFO.

## Also, in the FIFO poll mode:

- The interrupt identification register (IIR) is not affected by any events because the interrupts are disabled.
- The UART does not indicate when the receiver FIFO trigger level is reached or when a receiver timeout occurs.

## 4.4.4.2.5.4 Autoflow Control

The UART can employ autoflow control by connecting the UARTn\_CTS and UARTn\_RTS signals. Note that all UARTs do not support autoflow control; see your device-specific data manual for supported features. The UARTn\_CTS input must be active before the transmitter FIFO can transmit data. The UARTn\_RTS output becomes active when the receiver needs more data and notifies the sending device. When UARTn\_RTS is connected to UARTn\_CTS, data transmission does not occur unless the receiver FIFO has space for the data. Therefore, when two UARTs are connected as shown in Figure 4-28 with autoflow enabled, overrun errors are eliminated.

Figure 4-28. UART Interface Using Autoflow Diagram

<!-- image -->

## 4.4.4.2.5.4.1 UARTn\_RTS Behavior

UARTn\_RTS data flow control originates in the receiver block (see Figure 4-24). When the receiver FIFO level reaches a trigger level of 1, 4, 8, or 14 (see Figure 4-29), UARTn\_RTS is deasserted. The sending UART may send an additional byte after the trigger level is reached (assuming the sending UART has another byte to send), because it may not recognize the deassertion of UARTn\_RTS until after it has begun sending the additional byte. For trigger level 1, 4, and 8, UARTn\_RTS is automatically reasserted once the receiver FIFO is emptied. For trigger level 14, UARTn\_RTS is automatically reasserted once the receiver FIFO drops below the trigger level.

Figure 4-29. Autoflow Functional Timing Waveforms for UARTn\_RTS

<!-- image -->

- (1) N = Receiver FIFO trigger level.
- (2) The block in dashed lines covers the case where an additional byte is sent.

## 4.4.4.2.5.4.2 UARTn\_CTS Behavior

The transmitter checks UARTn\_CTS before sending the next data byte. If UARTn\_CTS is active, the transmitter sends the next byte. To stop the transmitter from sending the following byte, UARTn\_CTS must be released before the middle of the last STOP bit that is currently being sent (see Figure 4-30). When flow control is enabled, UARTn\_CTS level changes do not trigger interrupts because the device automatically controls its own transmitter. Without autoflow control, the transmitter sends any data present in the transmitter FIFO and a receiver overrun error may result.

<!-- image -->

- (1) When UARTn\_CTS is active (low), the transmitter keeps sending serial data out.
- (2) When UARTn\_CTS goes high before the middle of the last STOP bit of the current byte, the transmitter finishes sending the current byte but it does not send the next byte.
- (3) When UARTn\_CTS goes from high to low, the transmitter begins sending data again.

## 4.4.4.2.5.5 Loopback Control

The UART can be placed in the diagnostic mode using the LOOP bit in the modem control register (MCR), which internally connects the UART output back to the UART input. In this mode, the transmit and receive data paths, the transmitter and receiver interrupts, and the modem control interrupts can be verified without connecting to another UART.

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.4.2.6 Reset Considerations

## 4.4.4.2.6.1 Software Reset Considerations

Two bits in the power and emulation management register (PWREMU\_MGMT) control resetting the parts of the UART:

- The UTRST bit controls resetting the transmitter only. If UTRST = 1, the transmitter is active; if UTRST = 0, the transmitter is in reset.
- The URRST bit controls resetting the receiver only. If URRST = 1, the receiver is active; if URRST = 0, the receiver is in reset.

In each case, putting the receiver and/or transmitter in reset will reset the state machine of the affected portion but does not affect the UART registers.

## 4.4.4.2.6.2 Hardware Reset Considerations

When the processor RESET pin is asserted, the entire processor is reset and is held in the reset state until the RESET pin is released. As part of a device reset, the UART state machine is reset and the UART registers are forced to their default states. The default states of the registers are shown in Section 4.5.5.

## 4.4.4.2.7 Initialization

The following steps are required to initialize the UART:

1. Perform the necessary device pin multiplexing setup (see your device-specific data manual).
2. Set the desired baud rate by writing the appropriate clock divisor values to the divisor latch registers (DLL and DLH).
3. If the FIFOs will be used, select the desired trigger level and enable the FIFOs by writing the appropriate values to the FIFO control register (FCR). The FIFOEN bit in FCR must be set first, before the other bits in FCR are configured.
4. Choose the desired protocol settings by writing the appropriate values to the line control register (LCR).
5. If autoflow control is desired, write appropriate values to the modem control register (MCR). Note that all UARTs do not support autoflow control; see your device-specific data manual for supported features.
6. Choose the desired response to emulation suspend events by configuring the FREE bit, and enable the UART by setting the UTRST and URRST bits in the power and emulation management register (PWREMU\_MGMT).

## 4.4.4.2.8 Interrupt Support

## 4.4.4.2.8.1 Interrupt Events and Requests

The UART generates the interrupt requests described in Table 4-28. All requests are multiplexed through an arbiter to a single UART interrupt request to the CPU, as shown in Figure 4-31. Each of the interrupt requests has an enable bit in the interrupt enable register (IER) and is recorded in the interrupt identification register (IIR).

If an interrupt occurs and the corresponding enable bit is set to 1, the interrupt request is recorded in IIR and is forwarded to the CPU. If an interrupt occurs and the corresponding enable bit is cleared to 0, the interrupt request is blocked. The interrupt request is neither recorded in IIR nor forwarded to the CPU.

## 4.4.4.2.8.2 Interrupt Multiplexing

The UARTs have dedicated interrupt signals to the CPU and the interrupts are not multiplexed with any other interrupt source.

## Table 4-28. UART Interrupt Requests Descriptions

| UART Interrupt Request   | Interrupt Source                                                                                                                                                                                                                                          | Comment                                                                                                                                                                                                                                                                                                                                                                                   |
|--------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| THREINT                  | THR-empty condition: The transmitter holding register (THR) or the transmitter FIFO is empty. All of the data has been copied from THR to the transmitter shift register (TSR).                                                                           | If THREINT is enabled in IER, by setting the ETBEI bit, it is recorded in IIR. As an alternative to using THREINT, the CPU can poll the THRE bit in the line status register (LSR).                                                                                                                                                                                                       |
| RDAINT                   | Receive data available in non-FIFO mode or trigger level reached in the FIFO mode.                                                                                                                                                                        | If RDAINT is enabled in IER, by setting the ERBI bit, it is recorded in IIR. As an alternative to using RDAINT, the CPU can poll the DR bit in the line status register (LSR). In the FIFO mode, this is not a functionally equivalent alternative because the DR bit does not respond to the FIFO trigger level. The DR bit only indicates the presence or absence of unread characters. |
| RTOINT                   | Receiver time-out condition (in the FIFO mode only): No characters have been removed from or input to the receiver FIFO during the last four character times (see Table 4-27), and there is at least one character in the receiver FIFO during this time. | The receiver time-out interrupt prevents the UART from waiting indefinitely, in the case when the receiver FIFO level is below the trigger level and thus does not generate a receiver data-ready interrupt. If RTOINT is enabled in IER, by setting the ERBI bit, it is recorded in IIR. There is no status bit to reflect the occurrence of a time-out condition.                       |
| RLSINT                   | Receiver line status condition: An overrun error, parity error, framing error, or break has occurred.                                                                                                                                                     | If RLSINT is enabled in IER, by setting the ELSI bit, it is recorded in IIR. As an alternative to using RLSINT, the CPU can poll the following bits in the line status register (LSR): overrun error indicator (OE), parity error indicator (PE), framing error indicator (FE), and break indicator (BI).                                                                                 |

Figure 4-31. UART Interrupt Request Enable Paths

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.4.2.9 DMA Event Support

In the FIFO mode, the UART generates the following two DMA events:

- Receive event (URXEVT): The trigger level for the receiver FIFO (1, 4, 8, or 14 characters) is set with the RXFIFTL bit in the FIFO control register (FCR). Every time the trigger level is reached or a receiver time-out occurs, the UART sends a receive event to the EDMA controller. In response, the EDMA controller reads the data from the receiver FIFO by way of the receiver buffer register (RBR). Note that the receive event is not asserted if the data at the top of the receiver FIFO is erroneous even if the trigger level has been reached.
- Transmit event (UTXEVT): When the transmitter FIFO is empty (when the last byte in the transmitter FIFO has been copied to the transmitter shift register), the UART sends a UTXEVT signal to the EDMA controller. In response, the EDMA controller refills the transmitter FIFO by way of the transmitter holding register (THR). The UTXEVT signal is also sent to the DMA controller when the UART is taken out of reset using the UTRST bit in the power and emulation management register (PWREMU\_MGMT).

Activity in DMA channels can be synchronized to these events. In the non-FIFO mode, the UART generates no DMA events. Any DMA channel synchronized to either of these events must be enabled at the time the UART event is generated. Otherwise, the DMA channel will miss the event and, unless the UART generates a new event, no data transfer will occur.

## 4.4.4.2.10 Power Management

The UART peripheral can be placed in reduced-power modes to conserve power during periods of low activity. The power management of the UART peripheral is controlled by the processor Power and Clock Management (PRCM). The PRCM acts as a master controller for power management for all of the peripherals on the device. For detailed information on power management procedures using the PSC, see the chapter Power, Reset, and Clock Management (PRCM) in the device reference manual.

## 4.4.4.2.11 Emulation Considerations

The FREE bit in the power and emulation management register (PWREMU\_MGMT) determines how the UART responds to an emulation suspend event such as an emulator halt or breakpoint. If FREE = 0 and a transmission is in progress, the UART halts after completing the one-word transmission; if FREE = 0 and a transmission is not in progress, the UART halts immediately. If FREE = 1, the UART does not halt and continues operating normally.

Note also that most emulator accesses are transparent to UART operation. Emulator read operations do not affect any register contents, status bits, or operating states, with the exception of the interrupt identification register (IIR). Emulator writes, however, may affect register contents and may affect UART operation, depending on which register is accessed and what value is written.

The UART registers can be read from or written to during emulation suspend events, even if the UART activity has stopped.

## 4.4.4.2.12 Exception Processing

## 4.4.4.2.12.1 Divisor Latch Not Programmed

Since the processor reset signal has no effect on the divisor latch, the divisor latch will have an unknown value after power up. If the divisor latch is not programmed after power up, the baud clock (BCLK) will not operate and will instead be set to a constant logic 1 state.

The divisor latch values should always be reinitialized following a processor reset.

## 4.4.4.2.12.2 Changing Operating Mode During Busy Serial Communication

Since the serial link characteristics are based on how the control registers are programmed, the UART will expect the control registers to be static while it is busy engaging in a serial communication. Therefore, changing the control registers while the module is still busy communicating with another serial device will most likely cause an error condition and should be avoided.