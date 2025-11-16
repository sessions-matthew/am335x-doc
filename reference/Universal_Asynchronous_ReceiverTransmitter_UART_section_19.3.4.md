<!-- image -->

Figure 19-3. UART/IrDA/CIR Functional Specification Block Diagram

<!-- image -->

## 19.3.2 Clock Configuration

Each UART uses a 48-MHz functional clock for its logic and to generate external interface signals. Each UART uses an interface clock for register accesses. The PRCM module generates and controls all these clocks (for more information, see Clock Domain Module Attributes , in Chapter 8, Power, Reset, and Clock Management ).

The idle and wake-up processes use a handshake protocol between the PRCM and the UART (for a description of the protocol, see Module-Level Clock Management in Chapter 8, Power, Reset, and Clock Management ). The UARTi.UART\_SYSC[4:3] IDLEMODE bit field controls UART idle mode.

## 19.3.3 Software Reset

The UARTi.UART\_SYSC[1] SOFTRESET bit controls the software reset; setting this bit to 1 triggers a software reset functionally equivalent to hardware reset.

## 19.3.4 Power Management

## 19.3.4.1 UART Mode Power Management

## 19.3.4.1.1 Module Power Saving

In UART modes, sleep mode is enabled by setting the UARTi.UART\_IER[4] SLEEP\_MODE bit to 1 (when the UARTi.UART\_EFR[4] ENHANCED\_EN bit is set to 1).

Sleep mode is entered when all the following conditions exist:

- The serial data input line, uarti\_rx, is idle.
- The TX FIFO and TX shift register are empty.
- The RX FIFO is empty.
- The only pending interrupts are THR interrupts.

<!-- image -->

www.ti.com

Sleep mode is a good way to lower UART power consumption, but this state can be achieved only when the UART is set to modem mode. Therefore, even if the UART has no key role functionally, it must be initialized in a functional mode to take advantage of sleep mode.

In sleep mode, the module clock and baud rate clock are stopped internally. Because most registers are clocked by these clocks, this greatly reduces power consumption. The module wakes up when a change is detected on the uarti\_rx line, when data is written to the TX FIFO, and when there is a change in the state of the modem input pins.

An interrupt can be generated on a wake-up event by setting the UARTi.UART\_SCR[4] RX\_CTS\_WU\_EN bit to 1. To understand how to manage the interrupt, see Section 19.3.5.2, Wake-Up Interrupt .

NOTE:

There must be no writing to the divisor latches, UARTi.UART\_DLL and UARTi.UART\_DLH, to set the baud clock (BCLK) while in sleep mode. It is advisable to disable sleep mode using the UARTi.UART\_IER[4] SLEEP\_MODE bit before writing to the UARTi.UART\_DLL register or the UARTi.UART\_DLH register.

## 19.3.4.1.2 System Power Saving

Sleep and auto-idle modes are embedded power-saving features. Power-reduction techniques can be applied at the system level by shutting down certain internal clock and power domains of the device.

The UART supports an idle req/idle ack handshaking protocol used at the system level to shut down the UART clocks in a clean and controlled manner and to switch the UART from interrupt-generation mode to wake-up generation mode for unmasked events (see the UARTi.UART\_SYSC[2] ENAWAKEUP bit and the UARTi.UART\_WER register).

For more information, see Module Level Clock Management in Chapter 8, Power, Reset, and Clock Management .

## 19.3.4.2 IrDA/CIR Mode Power Management

## 19.3.4.2.1 Module Power Saving

In IrDA/CIR modes, sleep mode is enabled by setting the UARTi.MDR[3] IR\_SLEEP bit to 1.

Sleep mode is entered when all the following conditions exist:

- The serial data input line, uarti.rx\_irrx, is idle.
- The TX FIFO and TX shift register are empty.
- The RX FIFO is empty.
- No interrupts are pending except THR interrupts.

The module wakes up when a change is detected on the uarti\_rx\_irrx line or when data is written to the TX FIFO.

## 19.3.4.2.2 System Power Saving

System power saving for the IrDA/CIR mode has the same function as for the UART mode (see Section 19.3.4.1.2, System Power Saving ).

## 19.3.4.3 Local Power Management

Table 19-10 describes power-management features available for the UART.

NOTE:

For information about source clock gating and sleep/wake-up transitions description, see Module-Level Clock Management in Chapter 8, Power, Reset, and Clock Management .