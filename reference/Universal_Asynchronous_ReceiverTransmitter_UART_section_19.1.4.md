<!-- image -->

www.ti.com

## 19.1 Introduction

## 19.1.1 UART Mode Features

The general features of the UART/IrDA module when operating in UART mode are:

- 16C750 compatibility
- Baud rate from 300 bps up to 3.6864 Mbps
- Auto-baud between 1200 bps and 115.2 Kbps
- Software/Hardware flow control
- -Programmable Xon/Xoff characters
- -Programmable Auto-RTS and Auto CTS
- Programmable serial interface characteristics
- -5, 6, 7, or 8-bit characters
- -Even, odd, mark (always 1), space (always 0), or no parity (non-parity bit frame) bit generation and detection
- -1, 1.5, or 2 stop bit generation
- False start bit detection
- Line break generation and detection
- Modem control functions (CTS, RTS, DSR, DTR, RI, and DCD)
- Fully prioritized interrupt system controls
- Internal test and loopback capabilities

## 19.1.2 IrDA Mode Features

The general features of the UART/IrDA when operating in IrDA mode are:

- Support of IrDA 1.4 slow infrared (SIR), medium infrared (MIR) and fast infrared (FIR) communications (very fast infrared (VFIR) is not supported)
- Frame formatting: addition of variable xBOF characters and EOF characters
- Uplink/downlink CRC generation/detection
- Asynchronous transparency (automatic insertion of break character)
- 8-entry status FIFO (with selectable trigger levels) available to monitor frame length and frame errors
- Framing error, cyclic redundancy check (CRC) error, illegal symbol (FIR), abort pattern (SIR, MIR) detection

## 19.1.3 CIR Mode Features

The general features of the UART/IrDA when operating in CIR mode are:

- Support of consumer infrared (CIR) for remote control applications
- Transmit and receive
- Free data format (supports any remote control private standards)
- Selectable bit rate
- Configurable carrier frequency
- 1/2, 5/12, 1/3 or 1/4 carrier duty cycle

## 19.1.4 Unsupported UART Features

The following UART/IrDA module features are not supported in this device.

## Table 19-1. Unsupported UART Features

| Feature                       | Reason                                       |
|-------------------------------|----------------------------------------------|
| Full modem control on UART0   | DCD, DSR, DTR, RI not pinned-out             |
| Full modem control on UART2-5 | DCD, DSR, DTR, RI not pinned-out             |
| Device wake-up on UART1-5     | Wake-up not supported - no SWake connection  |
| DMA mode 2 and 3              | Only DMA mode 0 and 1 is supported with EDMA |

<!-- image -->