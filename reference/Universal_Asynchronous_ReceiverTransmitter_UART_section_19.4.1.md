## 19.4 UART/IrDA/CIR Basic Programming Model

## 19.4.1 UART Programming Model

## 19.4.1.1 Quick Start

This section describes the procedure for operating the UART with FIFO and DMA or interrupts. This threepart procedure ensures the quick start of the UART. It does not cover every UART feature.

The first programming model covers software reset of the UART. The second programming model describes FIFO and DMA configuration. The last programming model describes protocol, baud rate, and interrupt configuration.

NOTE:

Each programming model can be used independently of the other two; for instance, reconfiguring the FIFOs and DMA settings only.

Each programming model can be executed starting from any UART register access mode (register modes, submodes, and other register dependencies). However, if the UART register access mode is known before executing the programming model, some steps that enable or restore register access are optional. For more information, see Section 19.3.7.1, Register Access Modes .

## 19.4.1.1.1 Software Reset

To clear the UART registers, perform the following steps:

1. Initiate a software reset:

Set the UARTi.UART\_SYSC[1] SOFTRESET bit to 1.

- 2.
- Wait for the end of the reset operation:

Poll the UARTi.UART\_SYSS[0] RESETDONE bit until it equals 1.

## 19.4.1.1.2 FIFOs and DMA Settings

To enable and configure the receive and transmit FIFOs and program the DMA mode, perform the following steps:

1. Switch to register configuration mode B to access the UARTi.UART\_EFR register:
- a. Save the current UARTi.UART\_LCR register value.
- b. Set the UARTi.UART\_LCR register value to 0x00BF.
2. Enable register submode TCR\_TLR to access the UARTi.UART\_TLR register (part 1 of 2):
- a. Save the UARTi.UART\_EFR[4] ENHANCED\_EN value.
- b. Set the UARTi.UART\_EFR[4] ENHANCED\_EN bit to 1.
7. Switch to register configuration mode A to access the UARTi.UART\_MCR register: Set the UARTi.UART\_LCR register value to 0x0080.
8. 3.
4. Enable register submode TCR\_TLR to access the UARTi.UART\_TLR register (part 2 of 2):
- a. Save the UARTi.UART\_MCR[6] TCR\_TLR value.
- b. Set the UARTi.UART\_MCR[6] TCR\_TLR bit to 1.
12. Enable the FIFO; load the new FIFO triggers (part 1 of 3) and the new DMA mode (part 1 of 2):
13. Set the following bits to the desired values:
- UARTi.UART\_FCR[7:6] RX\_FIFO\_TRIG
- UARTi.UART\_FCR[5:4] TX\_FIFO\_TRIG
- UARTi.UART\_FCR[3] DMA\_MODE
- UARTi.UART\_FCR[0] FIFO\_ENABLE (0: Disable the FIFO; 1: Enable the FIFO)
18. 5.

<!-- image -->

<!-- image -->

www.ti.com

NOTE:

The UARTi.UART\_FCR register is not readable.

6. Switch to register configuration mode B to access the UARTi.UART\_EFR register:
2. Set the UARTi.UART\_LCR register value to 0x00BF.
7. Load the new FIFO triggers (part 2 of 3):

Set the following bits to the desired values:

- UARTi.UART\_TLR[7:4] RX\_FIFO\_TRIG\_DMA
- UARTi.UART\_TLR[3:0] TX\_FIFO\_TRIG\_DMA
8. Load the new FIFO triggers (part 3 of 3) and the new DMA mode (part 2 of 2):
- Set the following bits to the desired values:
- UARTi.UART\_SCR[7] RX\_TRIG\_GRANU1
- UARTi.UART\_SCR[6] TX\_TRIG\_GRANU1
- UARTi.UART\_SCR[2:1] DMA\_MODE\_2
- UARTi.UART\_SCR[0] DMA\_MODE\_CTL
9. Restore the UARTi.UART\_EFR[4] ENHANCED\_EN value saved in Step 2a.
10. Switch to register configuration mode A to access the UARTi.UART\_MCR register: Set the UARTi.UART\_LCR register value to 0x0080.
11. Restore the UARTi.UART\_MCR[6] TCR\_TLR value saved in Step 4a.
12. Restore the UARTi.UART\_LCR value saved in Step 1a.

Triggers are used to generate interrupt and DMA requests. See Section 19.3.6.1.1, Transmit FIFO Trigger, to choose the following values:

- UARTi.UART\_FCR[5:4] TX\_FIFO\_TRIG
- UARTi.UART\_TLR[3:0] TX\_FIFO\_TRIG\_DMA
- UARTi.UART\_SCR[6] TX\_TRIG\_GRANU1

Triggers are used to generate interrupt and DMA requests. See Section 19.3.6.1.2, Receive FIFO Trigger , to choose the following values:

- UARTi.UART\_FCR[7:6] RX\_FIFO\_TRIG
- UARTi.UART\_TLR[7:4] RX\_FIFO\_TRIG\_DMA
- UARTi.UART\_SCR[7] RX\_TRIG\_GRANU1

DMA mode enables DMA requests. See Section 19.3.6.4, FIFO DMA Mode Operation , to choose the following values:

- UARTi.UART\_FCR[3] DMA\_MODE
- UARTi.UART\_SCR[2:1] DMA\_MODE\_2
- UARTi.UART\_SCR[0] DMA\_MODE\_CTL

## 19.4.1.1.3 Protocol, Baud Rate, and Interrupt Settings

To program the protocol, baud rate, and interrupt settings, perform the following steps:

1. Disable UART to access the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. Switch to register configuration mode B to access the UARTi.UART\_EFR register:

Set the UARTi.UART\_LCR register value to 0x00BF.

3. Enable access to the UARTi.UART\_IER[7:4] bit field:
- a. Save the UARTi.UART\_EFR[4] ENHANCED\_EN value.
- b. Set the UARTi.UART\_EFR[4] ENHANCED\_EN bit to 1.
4. Switch to register operational mode to access the UARTi.UART\_IER register:
4. Set the UARTi.UART\_LCR register value to 0x0000.

<!-- image -->

5. Clear the UARTi.UART\_IER register (set the UARTi.UART\_IER[4] SLEEP\_MODE bit to 0 to change the UARTi.UART\_DLL and UARTi.UART\_DLH registers). Set the UARTi.UART\_IER register value to 0x0000.
6. Switch to register configuration mode B to access the UARTi.UART\_DLL and UARTi.UART\_DLH registers:
3. Set the UARTi.UART\_LCR register value to 0x00BF.
7. Load the new divisor value: Set the UARTi.UART\_DLL[7:0] CLOCK\_LSB and UARTi.UART\_DLH[5:0] CLOCK\_MSB bit fields to the desired values.
8. Switch to register operational mode to access the UARTi.UART\_IER register:
6. Set the UARTi.UART\_LCR register value to 0x0000.
9. Load the new interrupt configuration (0: Disable the interrupt; 1: Enable the interrupt): Set the following bits to the desired values:
- UARTi.UART\_IER[7] CTS\_IT
- UARTi.UART\_IER[6] RTS\_IT
- UARTi.UART\_IER[5] XOFF\_IT
- UARTi.UART\_IER[4] SLEEP\_MODE
- UARTi.UART\_IER[3] MODEM\_STS\_IT
- UARTi.UART\_IER[2] LINE\_STS\_IT
- UARTi.UART\_IER[1] THR\_IT
- UARTi.UART\_IER[0] RHR\_IT
10. Switch to register configuration mode B to access the UARTi.UART\_EFR register:
17. Set the UARTi.UART\_LCR register value to 0x00BF.
11. Restore the UARTi.UART\_EFR[4] ENHANCED\_EN value saved in Step 3a.
12. Load the new protocol formatting (parity, stop-bit, character length) and switch to register operational mode:

Set the UARTi.UART\_LCR[7] DIV\_EN bit to 0.

Set the UARTi.UART\_LCR[6] BREAK\_EN bit to 0.

Set the following bits to the desired values:

- UARTi.UART\_LCR[5] PARITY\_TYPE\_2
- UARTi.UART\_LCR[4] PARITY\_TYPE\_1
- UARTi.UART\_LCR[3] PARITY\_EN
- UARTi.UART\_LCR[2] NB\_STOP
- UARTi.UART\_LCR[1:0] CHAR\_LENGTH
13. Load the new UART mode:

Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to the desired value.

See Section 19.3.8.1.2, Choosing the Appropriate Divisor Value , to choose the following values:

- UARTi.UART\_DLL[7:0] CLOCK\_LSB
- UARTi.UART\_DLH[5:0] CLOCK\_MSB
- UARTi.UART\_MDR1[2:0] MODE\_SELECT

See Section 19.3.8.1.3.1, Frame Formatting , to choose the following values:

- UARTi.UART\_LCR[5] PARITY\_TYPE\_2
- UARTi.UART\_LCR[4] PARITY\_TYPE\_1
- UARTi.UART\_LCR[3] PARITY\_EN
- UARTi.UART\_LCR[2] NB\_STOP
- UARTi.UART\_LCR[1:0] CHAR\_LENGTH

<!-- image -->

www.ti.com

## 19.4.1.2 Hardware and Software Flow Control Configuration

This section describes the programming steps to enable and configure hardware and software flow control. Hardware and software flow control cannot be used at the same time.

NOTE:

Each programming model can be executed starting from any UART register access mode (register modes, submodes, and other register dependencies). However, if the UART register access mode is known before executing the programming model, some steps that enable or restore register access are optional. For more information, see Section 19.3.7.1, Register Access Modes .

## 19.4.1.2.1 Hardware Flow Control Configuration

To enable and configure hardware flow control, perform the following steps:

1. Switch to register configuration mode A to access the UARTi.UART\_MCR register:
- a. Save the current UARTi.UART\_LCR register value.
- b. Set the UARTi.UART\_LCR register value to 0x0080.
2. Enable register submode TCR\_TLR to access the UARTi.UART\_TCR register (part 1 of 2):
- a. Save the UARTi.UART\_MCR[6] TCR\_TLR value.
- b. Set the UARTi.UART\_MCR[6] TCR\_TLR bit to 1.
3. Switch to register configuration mode B to access the UARTi.UART\_EFR register: Set the UARTi.UART\_LCR register value to 0x00BF.
4. Enable register submode TCR\_TLR to access the UARTi.UART\_TCR register (part 2 of 2):
- a. Save the UARTi.UART\_EFR[4] ENHANCED\_EN value.
- b. Set the UARTi.UART\_EFR[4] ENHANCED\_EN bit to 1.
5. Load the new start and halt trigger values for hardware flow control:

Set the following bits to the desired values:

- UARTi.UART\_TCR[7:4] AUTO\_RTS\_START
- UARTi.UART\_TCR[3:0] AUTO\_RTS\_HALT
6. Enable or disable receive and transmit hardware flow control mode and restore the UARTi.UART\_EFR[4] ENHANCED\_EN value saved in Step 4a.

Set the following bits to the desired values:

- UARTi.UART\_EFR[7] AUTO\_CTS\_EN (0: Disable; 1: Enable)
- UARTi.UART\_EFR[6] AUTO\_RTS\_EN (0: Disable; 1: Enable)

Restore the UARTi.UART\_EFR[4] ENHANCED\_EN bit to the saved value.

7. Switch to register configuration mode A to access the UARTi.UART\_MCR register:

Set the UARTi.UART\_LCR register value to 0x0080.

8. Restore the UARTi.UART\_MCR[6] TCR\_TLR value saved in Step 2a.
9. Restore the UARTi.UART\_LCR value saved in Step 1a.

See Section 19.3.8.1.3.2, Hardware Flow Control , to choose the following values:

- UARTi.UART\_EFR[7] AUTO\_CTS\_EN
- UARTi.UART\_EFR[6] AUTO\_RTS\_EN
- UARTi.UART\_TCR[7:4] AUTO\_RTS\_START
- UARTi.UART\_TCR[3:0] AUTO\_RTS\_HALT

## 19.4.1.2.2 Software Flow Control Configuration

To enable and configure software flow control, perform the following steps:

1. Switch to register configuration mode B to access the UARTi.UART\_EFR register.

- a. Save the current UARTi.UART\_LCR register value.
- b. Set the UARTi.UART\_LCR register value to 0x00BF.
2. Enable register submode XOFF to access the UARTi.UART\_XOFF1 and UARTi.UART\_XOFF2 registers:
- a. Save the UARTi.UART\_EFR[4] ENHANCED\_EN value.
- b. Set the UARTi.UART\_EFR[4] ENHANCED\_EN bit to 0.
3. Load the new software flow control characters:

Set the following bits to the desired values:

- UARTi.UART\_XON1\_ADDR1[7:0] XON\_WORD1
- UARTi.UART\_XON2\_ADDR2[7:0] XON\_WORD2
- UARTi.UART\_XOFF1[7:0] XOFF\_WORD1
- UARTi.UART\_XOFF2[7:0] XOFF\_WORD2
4. Enable access to the UARTi.UART\_MCR[7:5] bit field and enable register submode TCR\_TLR to access the UARTi.UART\_TCR register (part 1 of 2):
- Set the UARTi.UART\_EFR[4] ENHANCED\_EN bit to 1.
5. Switch to register configuration mode A to access the UARTi.UART\_MCR register:
- Set the UARTi.UART\_LCR register value to 0x0080.
6. Enable register submode TCR\_TLR to access the UARTi.UART\_TCR register (part 2 of 2) and enable or disable XON any function:
- a. Save the UARTi.UART\_MCR[6] TCR\_TLR value.
- b. Set the UARTi.UART\_MCR[6] TCR\_TLR bit to 1.
- c. Set the UARTi.UART\_MCR[5] XON\_EN bit to the desired value (0: Disable; 1: Enable).
7. Switch to register configuration mode B to access the UARTi.UART\_EFR register:

Set the UARTi.UART\_LCR register value to 0x00BF.

8. Load the new start and halt trigger values for software flow control:

Set the following bits to the desired values:

- UARTi.UART\_TCR[7:4] AUTO\_RTS\_START
- UARTi.UART\_TCR[3:0] AUTO\_RTS\_HALT
9. Enable or disable special character function and load the new software flow control mode and restore the UARTi.UART\_EFR[4] ENHANCED\_EN value saved in Step 2a:

Set the following bits to the desired values:

- UARTi.UART\_EFR[5] SPEC\_CHAR (0: Disable; 1: Enable)
- UARTi.UART\_EFR[3:0] SW\_FLOW\_CONTROL

Restore the UARTi.UART\_EFR[4] ENHANCED\_EN bit to the saved value.

10. Switch to register configuration mode A to access the UARTi.UART\_MCR register:

Set the UARTi.UART\_LCR register value to 0x0080.

11. Restore the UARTi.UART\_MCR[6] TCR\_TLR bit value saved in Step 6a.
12. Restore the UARTi.UART\_LCR value saved in Step 1a.

See Section 19.3.8.1.3.3, Software Flow Control , to choose the following values:

- UARTi.UART\_EFR[5] SPEC\_CHAR
- UARTi.UART\_EFR[3:0] SW\_FLOW\_CONTROL
- UARTi.UART\_TCR[7:4] AUTO\_RTS\_START
- UARTi.UART\_TCR[3:0] AUTO\_RTS\_HALT
- UARTi.UART\_XON1\_ADDR1[7:0] XON\_WORD1
- UARTi.UART\_XON2\_ADDR2[7:0] XON\_WORD2
- UARTi.UART\_XOFF1[7:0] XOFF\_WORD1

<!-- image -->

www.ti.com

SPRUH73Q-October 2011-Revised December 2019

<!-- image -->

## www.ti.com

- UARTi.UART\_XOFF2[7:0] XOFF\_WORD2