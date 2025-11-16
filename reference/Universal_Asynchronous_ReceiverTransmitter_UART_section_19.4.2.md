## 19.4.2 IrDA Programming Model

## 19.4.2.1 SIR Mode

## 19.4.2.1.1 Receive

The following programming model explains how to program the module to receive an IrDA frame with parity forced to 1, baud rate = 112.5KB, FIFOs disabled, 2 stop-bits, and 8-bit word length:

1. Disable the UART before accessing the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. Grant access to the UART\_DLL and UART\_DLH registers (the UART\_LCR[7] DIV\_EN bit = 1): UARTi.UART\_LCR = 0x80 (Data format is unaffected by the use and settings of the UARTi.UART\_LCR register in IrDA mode.)
3. Load the new baud rate (115.2 kbps):
4. Set SIR mode:
5. UARTi.UART\_MDR1[2:0] MODE\_SELECT = 0x1
5. Disable access to the UART\_DLL and UART\_DLH registers and switch to register operational mode: UARTi.UART\_LCR = 0x00.
6. Optional: Enable the RHR interrupt: UARTi.UART\_IER[0] RHR\_IT = 0x1

- UARTi.UART\_DLL = 0x1A UARTi.UART\_DLH = 0x00

## 19.4.2.1.2 Transmit

The following programming model explains how to program the module to transmit an IrDA 6-byte frame with no parity, baud rate = 112.5 kbps, FIFOs disabled, 3/16 encoding, 2 stop-bits, and 7-bit word length:

1. Disable the UART before accessing the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. Grant access to the UART\_EFR register:
3. Enable the enhanced features (the UART\_EFR[4] ENAHNCED\_EN bit = 1):
4. Set the UARTi.UART\_EFR register value to 0x10.
5. Grant access to the UART\_DLL and UART\_DLH registers (the UART\_LCR[7] DIV\_EN bit = 1): UARTi.UART\_LCR = 0x80 (Data format is unaffected by the use and settings of the UARTi.UART\_LCR register in IrDA mode.)
6. 4.
5. Load the new baud rate (115.2 kbps):
8. Set SIR mode (the UART\_MDR1[2:0] MODE\_SELECT bit field = 0x1):
6. UARTi.UART\_MDR1 = 0x01
7. Disable access to the UART\_DLL and UART\_DLH registers and switch to register operational mode: UARTi.UART\_LCR = 0x00.
8. Force DTR output to active:
12. UARTi.UART\_MCR[0] DTR = 1
9. Optional: Enable the THR interrupt: UARTi.UART\_IER[1] THR\_IT = 1
10. Set transmit frame length to 6 bytes:
15. UARTi.UART\_TXFLL = 0x06
11. Set 7 starts of frame transmission: UARTi.UART\_EBLR = 0x08

- UARTi.UART\_LCR = 0xBF

- UARTi.UART\_DLL = 0x1A UARTi.UART\_DLH = 0x00

<!-- image -->

<!-- image -->

www.ti.com

12. Optional: Set SIR pulse width to be 1.6 us:

UARTi.UART\_ACREG[7] PULSE\_TYPE = 1

13. Load the UART\_THR register with the data to be transmitted.

## 19.4.2.2 MIR Mode

## 19.4.2.2.1 Receive

The following programming model explains how to program the module to receive an IrDA frame with no parity, baud rate = 1.152 Mpbs, and FIFOs disabled.

1. Disable the UART before accessing the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. Grant access to the UART\_DLL and UART\_DLH registers (UART\_LCR[7] DIV\_EN bit = 1):

UARTi.UART\_LCR = 0x80 (Data format is unaffected by the use and settings of the UARTi.UART\_LCR register in IrDA mode.)

3. Load the new baud rate (1.152 Mpbs):
2. UARTi.UART\_DLL = 0x01 UARTi.UART\_DLH = 0x00
4. Set MIR mode:

UARTi.UART\_MDR1[2:0] MODE\_SELECT = 0x4

- Disable access to the UART\_DLL and UART\_DLH registers and switch to register operational mode: UARTi.UART\_LCR = 0x00
- 5.
6. Force DTR output to active (UART\_MCR[0] DTR = 1):

Force RTS output to active (UART\_MCR[1] RTS = 1).

UARTi.UART\_MCR = 0x3

7. Optional: Enable the RHR interrupt:

UARTi.UART\_IER[0] RHR\_IT = 1

## 19.4.2.2.2 Transmit

The following programming model explains how to program the module to transmit an IrDA 60-byte frame with no parity, baud rate = 1.152 Mpbs, and FIFOs disabled:

1. Disable the UART before accessing the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. 2.
3. Grant access to the UART\_DLL and UART\_DLH registers (UART\_LCR[7] DIV\_EN bit = 1): UARTi.UART\_LCR = 0x80 (Data format is unaffected by the use and settings of the UARTi.UART\_LCR register in IrDA mode.)
3. Load the new baud rate (1.152 Mpbs):
4. Set MIR mode:

UARTi.UART\_DLL = 0x01

UARTi.UART\_DLH = 0x00

UARTi.UART\_MDR1[2:0] MODE\_SELECT = 0x4

- Disable access to the UART\_DLL and UART\_DLH registers and switch to register operational mode: UARTi.UART\_LCR = 0x00
- 5.
6. Force DTR output to active:
- UARTi.UART\_MCR[0] DTR = 1
7. Optional: Enable the THR interrupt: UARTi.UART\_IER[1] THR\_IT = 1
8. Set the frame length to 60 bytes:
- UARTi.UART\_TXFLL = 0x3C
9. Optional: Transmit eight additional starts of frame (MIR mode requires two starts):

- 7.

UARTi.UART\_EBLR = 0x08

10. SIP is sent at the end of transmission:

UARTi.UART\_ACREG[3] = 1

11. Load the UART\_THR register with the data to be transmitted.

## 19.4.2.3 FIR Mode

## 19.4.2.3.1 Receive

The following programming model explains how to program the module to receive the IrDA frame with no parity, baud rate = 4 Mbps, FIFOs enabled, 8-bit word length.

1. Disable the UART before accessing the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. Grant access to the UART\_DLL and UART\_DLH registers (UART\_LCR[7] DIV\_EN bit = 1):

UARTi.UART\_LCR = 0x80 (Data format is unaffected by the use and settings of the UARTi.UART\_LCR register in IrDA mode.)

3. FIFO clear and enable:

UARTi.UART\_FCR = 0x7 (TX/RX FIFO trigger: UART\_FCR[7:6] and UART\_FCR[5:4])

UARTi.UART\_LCR[7] = 0

4. Set FIR mode:

UARTi.UART\_MDR1[2:0] MODE\_SELECT = 0x5

5. Set frame length:

UARTi.UART\_RXFLL = 0xA (Data + CRC + STOP)

6. Disable access to the UARTi.UART\_DLL registers and UARTi.UART\_DLH and switch to register operational mode:

UARTi.UART\_LCR[7] DIV\_EN = 0x0

7. Optional: Enable the RHR interrupt:
2. UARTi.UART\_IER[0] RHR\_IT = 1

## 19.4.2.3.2 Transmit

The following programming model explains how to program the module to transmit an IrDA 4-byte frame with no parity, baud rate = 4 Mbps, FIFOs enabled, and 8-bit word length.

1. Disable the UART before accessing the UARTi.UART\_DLL and UARTi.UART\_DLH registers: Set the UARTi.UART\_MDR1[2:0] MODE\_SELECT bit field to 0x7.
2. Grant access to EFR\_REG:

UARTi.UART\_LCR = 0xBF

3. Enable the enhanced features (EFR\_REG[4] ENAHNCED\_EN = 0x1):

UARTi.UART\_EFR = 0x10

4. FIFO clear and enable:

UARTi.UART\_FCR = 0x7 (TX/RX FIFO trigger: UART\_FCR[7:6] and UART\_FCR[5:4]).

UARTi.UART\_LCR[7] = 0

5. Set FIR mode and enable auto-SIP mode:

UARTi.UART\_MDR1 = 0x45

6. Set frame length:

UARTi.UART\_TXFLL = 0x4

UARTi.UART\_TXFLH = 0x0

UARTi.UART\_RXFLL = 0xA (Data + CRC + STOP)

UARTi.UART\_RXFLH = 0x0

- Force DTR output to active: UARTi.UART\_MCR[0] DTR = 0x1

<!-- image -->

www.ti.com