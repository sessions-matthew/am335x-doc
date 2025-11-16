<!-- image -->

## www.ti.com

8. Optional: Enable the THR interrupt: UARTi.UART\_IER[1] THR\_IT = 0x1
9. Optional: Transmit eight additional starts of frame (MIR mode requires two starts): UARTi.UART\_EBLR = 0x08
10. SIP is sent at the end of transmission: UARTi.UART\_ACREG[3] = 1
11. Load the UART\_THR register with the data to be transmitted.

## 19.5 UART Registers

## 19.5.1 UART Registers

Table 19-29 lists the memory-mapped registers for the UART. All register offset addresses not listed in Table 19-29 should be considered as reserved locations and the register contents should not be modified.

## Table 19-29. UART Registers

| Offset   | Acronym    | Register Name                            | Section           |
|----------|------------|------------------------------------------|-------------------|
| 0h       | THR        | Transmit Holding Register                | Section 19.5.1.1  |
| 0h       | RHR        | Receiver Holding Register                | Section 19.5.1.2  |
| 0h       | DLL        | Divisor Latches Low Register             | Section 19.5.1.3  |
| 4h       | IER_IRDA   | Interrupt Enable Register (IrDA)         | Section 19.5.1.4  |
| 4h       | IER_CIR    | Interrupt Enable Register (CIR)          | Section 19.5.1.5  |
| 4h       | IER_UART   | Interrupt Enable Register (UART)         | Section 19.5.1.6  |
| 4h       | DLH        | Divisor Latches High Register            | Section 19.5.1.7  |
| 8h       | EFR        | Enhanced Feature Register                | Section 19.5.1.8  |
| 8h       | IIR_UART   | Interrupt Identification Register (UART) | Section 19.5.1.9  |
| 8h       | IIR_CIR    | Interrupt Identification Register (CIR)  | Section 19.5.1.10 |
| 8h       | FCR        | FIFO Control Register                    | Section 19.5.1.11 |
| 8h       | IIR_IRDA   | Interrupt Identification Register (IrDA) | Section 19.5.1.12 |
| Ch       | LCR        | Line Control Register                    | Section 19.5.1.13 |
| 10h      | MCR        | Modem Control Register                   | Section 19.5.1.14 |
| 10h      | XON1_ADDR1 | XON1/ADDR1 Register                      | Section 19.5.1.15 |
| 14h      | XON2_ADDR2 | XON2/ADDR2 Register                      | Section 19.5.1.16 |
| 14h      | LSR_CIR    | Line Status Register (CIR)               | Section 19.5.1.17 |
| 14h      | LSR_IRDA   | Line Status Register (IrDA)              | Section 19.5.1.18 |
| 14h      | LSR_UART   | Line Status Register (UART)              | Section 19.5.1.19 |
| 18h      | TCR        | Transmission Control Register            | Section 19.5.1.20 |
| 18h      | MSR        | Modem Status Register                    | Section 19.5.1.21 |
| 18h      | XOFF1      | XOFF1 Register                           | Section 19.5.1.22 |
| 1Ch      | SPR        | Scratchpad Register                      | Section 19.5.1.23 |
| 1Ch      | TLR        | Trigger Level Register                   | Section 19.5.1.24 |
| 1Ch      | XOFF2      | XOFF2 Register                           | Section 19.5.1.25 |
| 20h      | MDR1       | Mode Definition Register 1               | Section 19.5.1.26 |
| 24h      | MDR2       | Mode Definition Register 2               | Section 19.5.1.27 |
| 28h      | TXFLL      | Transmit Frame Length Low Register       | Section 19.5.1.28 |
| 28h      | SFLSR      | Status FIFO Line Status Register         | Section 19.5.1.29 |
| 2Ch      | RESUME     | RESUME Register                          | Section 19.5.1.30 |
| 2Ch      | TXFLH      | Transmit Frame Length High Register      | Section 19.5.1.31 |
| 30h      | RXFLL      | Received Frame Length Low Register       | Section 19.5.1.32 |
| 30h      | SFREGL     | Status FIFO Register Low                 | Section 19.5.1.33 |

Table 19-29. UART Registers (continued)

| Offset   | Acronym          | Register Name                        | Section           |
|----------|------------------|--------------------------------------|-------------------|
| 34h      | SFREGH           | Status FIFO Register High            | Section 19.5.1.34 |
| 34h      | RXFLH            | Received Frame Length High Register  | Section 19.5.1.35 |
| 38h      | BLR              | BOF Control Register                 | Section 19.5.1.36 |
| 38h      | UASR             | UART Autobauding Status Register     | Section 19.5.1.37 |
| 3Ch      | ACREG            | Auxiliary Control Register           | Section 19.5.1.38 |
| 40h      | SCR              | Supplementary Control Register       | Section 19.5.1.39 |
| 44h      | SSR              | Supplementary Status Register        | Section 19.5.1.40 |
| 48h      | EBLR             | BOF Length Register                  | Section 19.5.1.41 |
| 50h      | MVR              | Module Version Register              | Section 19.5.1.42 |
| 54h      | SYSC             | System Configuration Register        | Section 19.5.1.43 |
| 58h      | SYSS             | System Status Register               | Section 19.5.1.44 |
| 5Ch      | WER              | Wake-Up Enable Register              | Section 19.5.1.45 |
| 60h      | CFPS             | Carrier Frequency Prescaler Register | Section 19.5.1.46 |
| 64h      | RXFIFO_LVL       | Received FIFO Level Register         | Section 19.5.1.47 |
| 68h      | TXFIFO_LVL       | Transmit FIFO Level Register         | Section 19.5.1.48 |
| 6Ch      | IER2             | IER2 Register                        | Section 19.5.1.49 |
| 70h      | ISR2             | ISR2 Register                        | Section 19.5.1.50 |
| 74h      | FREQ_SEL         | FREQ_SEL Register                    | Section 19.5.1.51 |
| 80h      | MDR3             | Mode Definition Register 3           | Section 19.5.1.52 |
| 84h      | TX_DMA_THRESHOLD | TX DMA Threshold Register            | Section 19.5.1.53 |

<!-- image -->

<!-- image -->

## 19.5.1.1 THR Register (offset = 0h) [reset = 0h]

THR is shown in Figure 19-34 and described in Table 19-30.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The transmitter section consists of the transmit holding register and the transmit shift register. The transmit holding register is a 64-byte FIFO. The MPU writes data to the THR. The data is placed in the transmit shift register where it is shifted out serially on the TX output. If the FIFO is disabled, location zero of the FIFO is used to store the data.

## Figure 19-34. THR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| THR      | THR      | THR      | THR      | THR      | THR      | THR      | THR      |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-30. THR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                |
|-------|----------|--------|---------|--------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                            |
| 7-0   | THR      | W      | 0h      | Transmit holding register. Value 0 to FFh. |

## 19.5.1.2 RHR Register (offset = 0h) [reset = 0h]

RHR is shown in Figure 19-35 and described in Table 19-31.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The receiver section consists of the receiver holding register and the receiver shift register. The RHR is actually a 64byte FIFO. The receiver shift register receives serial data from RX input. The data is converted to parallel data and moved to the RHR. If the FIFO is disabled, location zero of the FIFO is used to store the single data character. If an overflow occurs, the data in the RHR is not overwritten.

## Figure 19-35. RHR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RHR      | RHR      | RHR      | RHR      | RHR      | RHR      | RHR      | RHR      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-31. RHR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                               |
|-------|----------|--------|---------|-------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                           |
| 7-0   | RHR      | R      | 0h      | Receive holding register. Value 0 to FFh. |

<!-- image -->

<!-- image -->

## 19.5.1.3 DLL Register (offset = 0h) [reset = 0h]

DLL is shown in Figure 19-36 and described in Table 19-32.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The divisor latches low register (DLL) with the DLH register stores the 14-bit divisor for generation of the baud clock in the baud rate generator. DLH stores the most-significant part of the divisor, DLL stores the leastsignificant part of the divisor. DLL and DLH can be written to only before sleep mode is enabled (before IER[4] is set).

## Figure 19-36. DLL Register

| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| CLOCK_LSB | CLOCK_LSB | CLOCK_LSB | CLOCK_LSB | CLOCK_LSB | CLOCK_LSB | CLOCK_LSB | CLOCK_LSB |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-32. DLL Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                          |
|-------|-----------|--------|---------|----------------------------------------------------------------------|
| 15-8  | RESERVED  | R      | 0h      |                                                                      |
| 7-0   | CLOCK_LSB | R/W    | 0h      | Divisor latches low. Stores the 8 LSB divisor value. Value 0 to FFh. |

## 19.5.1.4 IER\_IRDA Register (offset = 4h) [reset = 0h]

IER\_IRDA is shown in Figure 19-37 and described in Table 19-33.

The following interrupt enable register (IER) description is for IrDA mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In IrDA mode, EFR[4] has no impact on the access to IER[7:4]. The IrDA interrupt enable register (IER) can be programmed to enable/disable any interrupt. There are 8 types of interrupt in these modes, received EOF, LSR interrupt, TX status, status FIFO interrupt, RX overrun, last byte in RX FIFO, THR interrupt, and RHR interrupt. Each interrupt can be enabled/disabled individually. The TXSTATUSIT interrupt reflects two possible conditions. The MDR2[0] bit should be read to determine the status in the event of this interrupt.

## Figure 19-37. IER\_IRDA Register

| 15       | 14        | 13         | 12             | 11           | 10            | 9        | 8        |
|----------|-----------|------------|----------------|--------------|---------------|----------|----------|
| RESERVED | RESERVED  | RESERVED   | RESERVED       | RESERVED     | RESERVED      | RESERVED | RESERVED |
| R-0h     | R-0h      | R-0h       | R-0h           | R-0h         | R-0h          | R-0h     | R-0h     |
| 7        | 6         | 5          | 4              | 3            | 2             | 1        | 0        |
| EOFIT    | LINESTSIT | TXSTATUSIT | STSFIFOTRIGI T | RXOVERRUNI T | LASTRXBYTEI T | THRIT    | RHRIT    |
| R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h         | R/W-0h       | R/W-0h        | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-33. IER\_IRDA Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                       |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED      | R      | 0h      |                                                                                                                                   |
| 7     | EOFIT         | R/W    | 0h      | EOFIT 0h = Disables the received EOF interrupt. 1h = Enables the received EOF interrupt.                                          |
| 6     | LINESTSIT     | R/W    | 0h      | LINESTSIT 0h = Disables the receiver line status interrupt. 1h = Enables the receiver line status interrupt.                      |
| 5     | TXSTATUSIT    | R/W    | 0h      | TXSTATUSIT 0h = Disables the TX status interrupt. 1h = Enables the TX status interrupt.                                           |
| 4     | STSFIFOTRIGIT | R/W    | 0h      | STSFIFOTRIGIT 0h = Disables status FIFO trigger level interrupt. 1h = Enables status FIFO trigger level interrupt.                |
| 3     | RXOVERRUNIT   | R/W    | 0h      | RXOVERRUNIT 0h = Disables the RX overrun interrupt. 1h = Enables the RX overrun interrupt.                                        |
| 2     | LASTRXBYTEIT  | R/W    | 0h      | LASTRXBYTEIT 0h = Disables the last byte of frame in RX FIFO interrupt. 1h = Enables the last byte of frame in RX FIFO interrupt. |
| 1     | THRIT         | R/W    | 0h      | THRIT 0h = Disables the THR interrupt. 1h = Enables the THR interrupt.                                                            |
| 0     | RHRIT         | R/W    | 0h      | RHRIT 0h = Disables the RHR interrupt. 1h = Enables the RHR interrupt.                                                            |

<!-- image -->

www.ti.com

<!-- image -->

## 19.5.1.5 IER\_CIR Register (offset = 4h) [reset = 0h]

IER\_CIR is shown in Figure 19-38 and described in Table 19-34.

The following interrupt enable register (IER) description is for CIR mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In IrDA mode, EFR[4] has no impact on the access to IER[7:4]. The CIR interrupt enable register (IER) can be programmed to enable/disable any interrupt. There are 5 types of interrupt in these modes, TX status, RX overrun, RX stop interrupt, THR interrupt, and RHR interrupt. Each interrupt can be enabled/disabled individually. In CIR mode, the TXSTATUSIT bit has only one meaning corresponding to the case MDR2[0] = 0. The RXSTOPIT interrupt is generated based on the value set in the BOF Length register (EBLR).

## Figure 19-38. IER\_CIR Register

| 15       | 14       | 13         | 12       | 11           | 10       | 9        | 8        |
|----------|----------|------------|----------|--------------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED   | RESERVED | RESERVED     | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h       | R-0h     | R-0h         | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5          | 4        | 3            | 2        | 1        | 0        |
| RESERVED | RESERVED | TXSTATUSIT | RESERVED | RXOVERRUNI T | RXSTOPIT | THRIT    | RHRIT    |
| R-0h     | R-0h     | R/W-0h     | R-0h     | R/W-0h       | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-34. IER\_CIR Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                 |
|-------|-------------|--------|---------|---------------------------------------------------------------------------------------------|
| 15-6  | RESERVED    | R      | 0h      |                                                                                             |
| 5     | TXSTATUSIT  | R/W    | 0h      | TXSTATUSIT. 0h = Disables the TX status interrupt. 1h = Enables the TX status interrupt.    |
| 4     | RESERVED    | R      | 0h      |                                                                                             |
| 3     | RXOVERRUNIT | R/W    | 0h      | RXOVERRUNIT. 0h = Disables the RX overrun interrupt. 1h = Enables the RX overrun interrupt. |
| 2     | RXSTOPIT    | R/W    | 0h      | RXSTOPIT. 0h = Disables the RX stop interrupt. 1h = Enables the RX stop interrupt.          |
| 1     | THRIT       | R/W    | 0h      | THRIT. 0h = Disables the THR interrupt. 1h = Enables the THR interrupt.                     |
| 0     | RHRIT       | R/W    | 0h      | RHRIT. 0h = Disables the RHR interrupt. 1h = Enables the RHR interrupt.                     |

## 19.5.1.6 IER\_UART Register (offset = 4h) [reset = 0h]

IER\_UART is shown in Figure 19-39 and described in Table 19-35.

The following interrupt enable register (IER) description is for UART mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In UART mode, IER[7:4] can only be written when EFR[4] = 1 The interrupt enable register (IER) can be programmed to enable/disable any interrupt. There are seven types of interrupt in this mode: receiver error, RHR interrupt, THR interrupt, XOFF received and CTS (active-low)/RTS (active-low) change of state from low to high. Each interrupt can be enabled/disabled individually. There is also a sleep mode enable bit. The UART interrupt enable register (IER) is shown in and described in .

## Figure 19-39. IER\_UART Register

| 15       | 14       | 13       | 12        | 11         | 10        | 9        | 8        |
|----------|----------|----------|-----------|------------|-----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED   | RESERVED  | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h      | R-0h       | R-0h      | R-0h     | R-0h     |
| 7        | 6        | 5        | 4         | 3          | 2         | 1        | 0        |
| CTSIT    | RTSIT    | XOFFIT   | SLEEPMODE | MODEMSTSIT | LINESTSIT | THRIT    | RHRIT    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h     | R/W-0h    | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-35. IER\_UART Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                |
|-------|------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED   | R      | 0h      |                                                                                                                                            |
| 7     | CTSIT      | R/W    | 0h      | Can be written only when EFR[4] = 1. 0h = Disables the CTS (active-low) interrupt. 1h = Enables the CTS (active-low) interrupt.            |
| 6     | RTSIT      | R/W    | 0h      | Can be written only when EFR[4] = 1. 0h = Disables the RTS (active-low) interrupt. 1h = Enables the RTS (active-low) interrupt.            |
| 5     | XOFFIT     | R/W    | 0h      | Can be written only when EFR[4] = 1. 0h = Disables the XOFF interrupt. 1h = Enables the XOFF interrupt.                                    |
| 4     | SLEEPMODE  | R/W    | 0h      | Can be only written when EFR[4] = 1. 0h = Disables sleep mode. 1h = Enables sleep mode (stop baud rate clock when the module is inactive). |
| 3     | MODEMSTSIT | R/W    | 0h      | MODEMSTSIT. 0h = Disables the modem status register interrupt. 1h = Enables the modem status register interrupt                            |
| 2     | LINESTSIT  | R/W    | 0h      | LINESTSIT. 0h = Disables the receiver line status interrupt. 1h = Enables the receiver line status interrupt.                              |
| 1     | THRIT      | R/W    | 0h      | THRIT. 0h = Disables the THR interrupt. 1h = Enables the THR interrupt.                                                                    |
| 0     | RHRIT      | R/W    | 0h      | RHRIT. 0h = Disables the RHR interrupt and time out interrupt. 1h = Enables the RHR interrupt and time out interrupt.                      |

<!-- image -->

<!-- image -->

## 19.5.1.7 DLH Register (offset = 4h) [reset = 0h]

DLH is shown in Figure 19-40 and described in Table 19-36.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The divisor latches high register (DLH) with the DLL register stores the 14-bit divisor for generation of the baud clock in the baud rate generator. DLH stores the most-significant part of the divisor, DLL stores the leastsignificant part of the divisor. DLL and DLH can be written to only before sleep mode is enabled (before IER[4] is set).

## Figure 19-40. DLH Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED |          |          |          |          |          |          |
| R-0h     | R-0h     |          |          |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-36. DLH Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                           |
|-------|-----------|--------|---------|-----------------------------------------------------------------------|
| 15-6  | RESERVED  | R      | 0h      |                                                                       |
| 5-0   | CLOCK_MSB | R/W    | 0h      | Divisor latches high. Stores the 6 MSB divisor value. Value 0 to 3Fh. |

## 19.5.1.8 EFR Register (offset = 8h) [reset = 0h]

EFR is shown in Figure 19-41 and described in Table 19-37.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The enhanced feature register (EFR) enables or disables enhanced features. Most enhanced functions apply only to UART modes, but EFR[4] enables write accesses to FCR[5:4], the TX trigger level, which is also used in IrDA modes.

## Figure 19-41. EFR Register

| 15        | 14        | 13                 | 12         | 11       | 10            | 9             | 8        |
|-----------|-----------|--------------------|------------|----------|---------------|---------------|----------|
| RESERVED  | RESERVED  | RESERVED           | RESERVED   | RESERVED | RESERVED      | RESERVED      | RESERVED |
| R-0h      | R-0h      | R-0h               | R-0h       | R-0h     | R-0h          | R-0h          | R-0h     |
| 7         | 6         | 5                  | 4          | 3        | 2             | 1             | 0        |
| AUTOCTSEN | AUTORTSEN | SPECIALCHAR DETECT | ENHANCEDEN |          | SWFLOWCONTROL | SWFLOWCONTROL |          |
| R/W-0h    | R/W-0h    | R/W-0h             | R/W-0h     |          | R/W-0h        |               |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-37. EFR Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                               |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED          | R      | 0h      |                                                                                                                                                                                                                                                                                                           |
| 7     | AUTOCTSEN         | R/W    | 0h      | Auto-CTS enable bit (UART mode only). 0h = Normal operation. 1h = Auto-CTS flow control is enabled; transmission is halted when the CTS (active-low) pin is high (inactive).                                                                                                                              |
| 6     | AUTORTSEN         | R/W    | 0h      | Auto-RTS enable bit (UART mode only). 0h = Normal operation. 1h = Auto-RTS flow control is enabled; RTS (active-low) pin goes high (inactive) when the receiver FIFO HALT trigger level, TCR[3:0], is reached and goes low (active) when the receiver FIFO RESTORE transmission trigger level is reached. |
| 5     | SPECIALCHARDETECT | R/W    | 0h      | Special character detect (UART mode only). 0h = Normal operation. 1h = Special character detect enable. Received data is compared with XOFF2 data. If a match occurs, the received data is transferred to RX FIFO and the IIR[4] bit is set to 1 to indicate that a special character was detected.       |
| 4     | ENHANCEDEN        | R/W    | 0h      | Enhanced functions write enable bit. 0h = Disables writing to IER[7:4], FCR[5:4], and MCR[7:5]. 1h = Enables writing to IER[7:4], FCR[5:4], and MCR[7:5].                                                                                                                                                 |

<!-- image -->

www.ti.com

<!-- image -->

## Table 19-37. EFR Register Field Descriptions (continued)

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 3-0   | SWFLOWCONTROL | R/W    | 0h      | Combinations of software flow control can be selected by programming this bit. XON1 and XON2 should be set to different values if the software flow control is enabled. The TX and RX software flow control options are as follows. EFR[3] = 0, EFR[2] = 0, EFR[1] = X, and EFR[0] = X, then: No transmit flow control. EFR[3] = 1, EFR[2] = 0, EFR[1] = X, and EFR[0] = X, then: Transmit XON1, XOFF1. EFR[3] = 0, EFR[2] = 1, EFR[1] = X, and EFR[0] = X, then: Transmit XON2, XOFF2. EFR[3] = 1, EFR[2] = 1, EFR[1] = X, and EFR[0] = X, then: Transmit XON1, XON2 or XOFF1, XOFF2. The XON1 and XON2 characters or the XOFF1 and XOFF2 characters must be transmitted/received sequentially with XON1/XOFF1 followed by XON2/XOFF2. EFR[3] = X, EFR[2] = X, EFR[1] = 0, and EFR[0] = 0, then: No receive flow control. EFR[3] = X, EFR[2] = X, EFR[1] = 1, and EFR[0] = 0, then: Receiver compares XON1, XOFF1. EFR[3] = X, EFR[2] = X, EFR[1] = 0, and EFR[0] = 1, then: Receiver compares XON2, XOFF2. EFR[3] = X, EFR[2] = X, EFR[1] = 1, and EFR[0] = 1, then: Receiver compares XON1, XON2 or XOFF1, XOFF2. The XON1 and XON2 characters or the XOFF1 and XOFF2 characters must be transmitted/received sequentially with XON1/XOFF1 followed by XON2/XOFF2. In IrDA mode, EFR[1] and EFR[0] select the IR address to check (see IR Address Checking). |

## 19.5.1.9 IIR\_UART Register (offset = 8h) [reset = 1h]

IIR\_UART is shown in Figure 19-42 and described in Table 19-38.

The following interrupt identification register (IIR) description is for UART mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The UART interrupt identification register (IIR) is a read-only register that provides the source of the interrupt. An interrupt source can be flagged only if enabled in the IER register.

Figure 19-42. IIR\_UART Register

| 15         | 14         | 13       | 12       | 11       | 10       | 9        | 8          |
|------------|------------|----------|----------|----------|----------|----------|------------|
| RESERVED   | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h       | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 7          | 6          | 5        | 4        | 3        | 2        | 1        | 0          |
| FCR_MIRROR | FCR_MIRROR |          |          | IT_TYPE  |          |          | IT_PENDING |
| R-0h       | R-0h       |          |          | R-0h     |          |          | R-1h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-38. IIR\_UART Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 7-6   | FCR_MIRROR | R      | 0h      | Mirror the contents of FCR[0] on both bits.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 5-1   | IT_TYPE    | R      | 0h      | Seven possible interrupts in UART mode. Other combinations never occur: 0h = Modem interrupt. Priority = 4. 1h = THR interrupt. Priority = 3. 2h = RHR interrupt. Priority = 2. 3h = Receiver line status error. Priority = 1. 4h = Reserved 5h = Reserved 6h = Rx timeout. Priority = 2. 7h = Reserved 8h = Xoff/special character. Priority = 5. 9h = Reserved, from 9h to Fh. 10h = CTS (active-low), RTS (active-low), DSR (active-low) change state from active (low) to inactive (high). Priority = 6. 11h = Reserved, from 11 to 1Fh. |
| 0     | IT_PENDING | R      | 1h      | Interrupt pending. 0h = An interrupt is pending. 1h = No interrupt is pending.                                                                                                                                                                                                                                                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

## 19.5.1.10 IIR\_CIR Register (offset = 8h) [reset = 0h]

IIR\_CIR is shown in Figure 19-43 and described in Table 19-39.

The following interrupt identification register (IIR) description is for CIR mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The CIR interrupt identification register (IIR) is a read-only register that provides the source of the interrupt. An interrupt source can be flagged only if enabled in the IER register.

## Figure 19-43. IIR\_CIR Register

| 15       | 14       | 13         | 12       | 11       | 10       | 9        | 8        |
|----------|----------|------------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5          | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | TXSTATUSIT | RESERVED | RXOEIT   | RXSTOPIT | THRIT    | RHRIT_   |
| R-0h     | R-0h     | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-39. IIR\_CIR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                            |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------|
| 15-6  | RESERVED   | R      | 0h      |                                                                                        |
| 5     | TXSTATUSIT | R      | 0h      | TXSTATUSIT 0h = TX status interrupt inactive 1h = TX status interrupt active           |
| 4     | RESERVED   | R      | 0h      |                                                                                        |
| 3     | RXOEIT     | R      | 0h      | RXOEIT 0h = RX overrun interrupt inactive 1h = RX overrun interrupt active             |
| 2     | RXSTOPIT   | R      | 0h      | RXSTOPIT 0h = Receive stop interrupt is inactive 1h = Receive stop interrupt is active |
| 1     | THRIT      | R      | 0h      | THRIT 0h = THR interrupt inactive 1h = THR interrupt active                            |
| 0     | RHRIT_     | R      | 0h      | RHRIT 0h = RHR interrupt inactive 1h = RHR interrupt active                            |

## 19.5.1.11 FCR Register (offset = 8h) [reset = 0h]

FCR is shown in Figure 19-44 and described in Table 19-40.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. FCR[5:4] can only be written when EFR[4] = 1.

## Figure 19-44. FCR Register

| 15           | 14           | 13           | 12           | 11       | 10             | 9              | 8        |
|--------------|--------------|--------------|--------------|----------|----------------|----------------|----------|
| RESERVED     | RESERVED     | RESERVED     | RESERVED     | RESERVED | RESERVED       | RESERVED       | RESERVED |
| R-0h         | R-0h         | R-0h         | R-0h         | R-0h     | R-0h           | R-0h           | R-0h     |
| 7            | 6            | 5            | 4            | 3        | 2              | 1              | 0        |
| RX_FIFO_TRIG | RX_FIFO_TRIG | TX_FIFO_TRIG | TX_FIFO_TRIG | DMA_MODE | TX_FIFO_CLE AR | RX_FIFO_CLE AR | FIFO_EN  |
| W-0h         | W-0h         | W-0h         | W-0h         | W-0h     | W-0h           | W-0h           | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-40. FCR Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                         |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                     |
| 7-6   | RX_FIFO_TRIG  | W      | 0h      | Sets the trigger level for the RX FIFO: If SCR[7] = 0 and TLR[7] to TLR[4] not equal to 0000, RX_FIFO_TRIG is not considered. If SCR[7] = 1, RX_FIFO_TRIG is 2 LSB of the trigger level (1 to 63 on 6 bits) with the granularity 1. If SCR[7] = 0 and TLR[7] to TLR[4] = 0000, then: 0h = 8 characters 1h = 16 characters 2h = 56 characters 3h = 60 characters                                     |
| 5-4   | TX_FIFO_TRIG  | W      | 0h      | Can be written only if EFR[4] = 1. Sets the trigger level for the TX FIFO: If SCR[6] = 0 and TLR[3] to TLR[0] not equal to 0000, TX_FIFO_TRIG is not considered. If SCR[6] = 1, TX_FIFO_TRIG is 2 LSB of the trigger level (1 to 63 on 6 bits) with a granularity of 1. If SCR[6] = 0 and TLR[3] to TLR[0] = 0000, then: 0h = 8 characters 1h = 16 characters 2h = 32 characters 3h = 56 characters |
| 3     | DMA_MODE      | W      | 0h      | Can be changed only when the baud clock is not running (DLL and DLH cleared to 0). If SCR[0] = 0, this register is considered. 0h = DMA_MODE 0 (No DMA). 1h = DMA_MODE 1 (UART_NDMA_REQ[0] in TX, UART_NDMA_REQ[1] in RX).                                                                                                                                                                          |
| 2     | TX_FIFO_CLEAR | W      | 0h      | TX_FIFO_CLEAR. 0h = No change. 1h = Clears the transmit FIFO and resets its counter logic to 0. Returns to 0 after clearing FIFO.                                                                                                                                                                                                                                                                   |
| 1     | RX_FIFO_CLEAR | W      | 0h      | RX_FIFO_CLEAR. 0h = No change. 1h = Clears the receive FIFO and resets its counter logic to 0. Returns to 0 after clearing FIFO.                                                                                                                                                                                                                                                                    |
| 0     | FIFO_EN       | W      | 0h      | Can be changed only when the baud clock is not running (DLL and DLH cleared to 0). 0h = Disables the transmit and receive FIFOs. The transmit and receive holding registers are 1-byte FIFOs. 1h = Enables the transmit and receive FIFOs. The transmit and receive holding registers are 64-byte FIFOs.                                                                                            |

<!-- image -->

<!-- image -->

## 19.5.1.12 IIR\_IRDA Register (offset = 8h) [reset = 0h]

IIR\_IRDA is shown in Figure 19-45 and described in Table 19-41.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-45. IIR\_IRDA Register

| 15       | 14          | 13            | 12          | 11       | 10                    | 9        | 8        |
|----------|-------------|---------------|-------------|----------|-----------------------|----------|----------|
| RESERVED | RESERVED    | RESERVED      | RESERVED    | RESERVED | RESERVED              | RESERVED | RESERVED |
| R-0h     | R-0h        | R-0h          | R-0h        | R-0h     | R-0h                  | R-0h     | R-0h     |
| 7        | 6           | 5             | 4           | 3        | 2                     | 1        | 0        |
| EOF_IT   | LINE_STS_IT | TX_STATUS_I T | STS_FIFO_IT | RX_OE_IT | RX_FIFO_LAS T_BYTE_IT | THR_IT   | RHR_IT   |
| R-0h     | R-0h        | R-0h          | R-0h        | R-0h     | R-0h                  | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-41. IIR\_IRDA Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                      |
|-------|-----------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED              | R      | 0h      |                                                                                                                                  |
| 7     | EOF_IT                | R      | 0h      | EOF_IT 0h = Received EOF interrupt inactive. 1h = Received EOF interrupt active.                                                 |
| 6     | LINE_STS_IT           | R      | 0h      | LINE_STS_IT 0h = Receiver line status interrupt inactive. 1h = Receiver line status interrupt active.                            |
| 5     | TX_STATUS_IT          | R      | 0h      | TX_STATUS_IT 0h = TX status interrupt inactive. 1h = TX status interrupt active.                                                 |
| 4     | STS_FIFO_IT           | R      | 0h      | STS_FIFO_IT 0h = Status FIFO trigger level interrupt inactive. 1h = Status FIFO trigger level interrupt active.                  |
| 3     | RX_OE_IT              | R      | 0h      | RX_OE_IT 0h = RX overrun interrupt inactive. 1h = RX overrun interrupt active.                                                   |
| 2     | RX_FIFO_LAST_BYTE_I T | R      | 0h      | RX_FIFO_LAST_BYTE_IT 0h = Last byte of frame in RX FIFO interrupt inactive. 1h = Last byte of frame in RX FIFO interrupt active. |
| 1     | THR_IT                | R      | 0h      | THR_IT 0h = THR interrupt inactive. 1h = THR interrupt active.                                                                   |
| 0     | RHR_IT                | R      | 0h      | RHR_IT 0h = RHR interrupt inactive. 1h = RHR interrupt active.                                                                   |

## 19.5.1.13 LCR Register (offset = Ch) [reset = 0h]

LCR is shown in Figure 19-46 and described in Table 19-42.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. As soon as LCR[6] is set to 1, the TX line is forced to 0 and remains in this state as long as LCR[6] = 1.

## Figure 19-46. LCR Register

| 15       | 14       | 13            | 12            | 11        | 10       | 9           | 8        |
|----------|----------|---------------|---------------|-----------|----------|-------------|----------|
| RESERVED | RESERVED | RESERVED      | RESERVED      | RESERVED  | RESERVED | RESERVED    | RESERVED |
| R-0h     | R-0h     | R-0h          | R-0h          | R-0h      | R-0h     | R-0h        | R-0h     |
| 7        | 6        | 5             | 4             | 3         | 2        | 1           | 0        |
| DIV_EN   | BREAK_EN | PARITY_TYPE 2 | PARITY_TYPE 1 | PARITY_EN | NB_STOP  | CHAR_LENGTH |          |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h    | R/W-0h   | R/W-0h      |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-42. LCR Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                                            |
| 7     | DIV_EN       | R/W    | 0h      | Divisor latch enable. 0h = Normal operating condition. 1h = Divisor latch enable. Allows access to DLL and DLH.                                                                                                                                                                            |
| 6     | BREAK_EN     | R/W    | 0h      | Break control bit. Note: When LCR[6] is set to 1, the TX line is forced to 0 and remains in this state as long as LCR[6] = 1. 0h = Normal operating condition. 1h = Forces the transmitter output to go low to alert the communication terminal.                                           |
| 5     | PARITY_TYPE2 | R/W    | 0h      | If LCR[3] = 1, then: 0h = If LCR[5] = 0, LCR[4] selects the forced parity format. 1h = If LCR[5] = 1 and LCR[4] = 0, the parity bit is forced to 1 in the transmitted and received data. If LCR[5] = 1 and LCR[4] = 1, the parity bit is forced to 0 in the transmitted and received data. |
| 4     | PARITY_TYPE1 | R/W    | 0h      | If LCR[3] = 1, then: 0h = Odd parity is generated. 1h = Even parity is generated.                                                                                                                                                                                                          |
| 3     | PARITY_EN    | R/W    | 0h      | Parity bit. 0h = No parity. 1h = A parity bit is generated during transmission, and the receiver checks for received parity.                                                                                                                                                               |
| 2     | NB_STOP      | R/W    | 0h      | Specifies the number of stop bits. 0h = 1 stop bit (word length = 5, 6, 7, 8). 1h = 1.5 stop bits (word length = 5) or 2 stop bits (word length = 6, 7, 8).                                                                                                                                |
| 1-0   | CHAR_LENGTH  | R/W    | 0h      | Specifies the word length to be transmitted or received. 0h = 5 bits 1h = 6 bits 2h = 7 bits 3h = 8 bit                                                                                                                                                                                    |

<!-- image -->

<!-- image -->

## 19.5.1.14 MCR Register (offset = 10h) [reset = 0h]

MCR is shown in Figure 19-47 and described in Table 19-43.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. MCR[7:5] can only be written when EFR[4] = 1. Bits 3-0 control the interface with the modem, data set, or peripheral device that is emulating the modem.

## Figure 19-47. MCR Register

| 15       | 14       | 13       | 12         | 11       | 10       | 9        | 8        |
|----------|----------|----------|------------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4          | 3        | 2        | 1        | 0        |
| RESERVED | TCRTLR   | XONEN    | LOOPBACKEN | CDSTSCH  | RISTSCH  | RTS      | DTR      |
| R-0h     | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-43. MCR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                               |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-7  | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                           |
| 6     | TCRTLR     | R/W    | 0h      | Can be written only when EFR[4] = 1. 0h = No action. 1h = Enables access to the TCR and TLR registers.                                                                                                                                    |
| 5     | XONEN      | R/W    | 0h      | Can be written only when EFR[4] = 1. 0h = Disable XON any function. 1h = Enable XON any function.                                                                                                                                         |
| 4     | LOOPBACKEN | R/W    | 0h      | Loopback mode enable. 0h = Normal operating mode. 1h = Enable local loopback mode (internal). In this mode, the MCR[3:0] signals are looped back into MSR[7:4]. The transmit output is looped back to the receive input internally.       |
| 3     | CDSTSCH    | R/W    | 0h      | CDSTSCH. 0h = In loopback mode, forces DCD (active-low) input high and IRQ outputs to INACTIVE state. 1h = In loopback mode, forces DCD (active-low) input low and IRQ outputs to INACTIVE state.                                         |
| 2     | RISTSCH    | R/W    | 0h      | RISTSCH. 0h = In loopback mode, forces RI (active-low) input inactive (high). 1h = In loopback mode, forces RI (active-low) input active (low).                                                                                           |
| 1     | RTS        | R/W    | 0h      | In loopback mode, controls MSR[4]. If auto-RTS is enabled, the RTS (active-low) output is controlled by hardware flow control. 0h = Force RTS (active-low) output to inactive (high). 1h = Force RTS (active-low) output to active (low). |
| 0     | DTR        | R/W    | 0h      | DTR. 0h = Force DTR (active-low) output (used in loopback mode) to inactive (high). 1h = Force DTR (active-low) output (used in loopback mode) to active (low).                                                                           |

## 19.5.1.15 XON1\_ADDR1 Register (offset = 10h) [reset = 0h]

XON1\_ADDR1 is shown in Figure 19-48 and described in Table 19-44.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In UART mode, XON1 character; in IrDA mode, ADDR1 address 1.

## Figure 19-48. XON1\_ADDR1 Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| XONWORD1 | XONWORD1 | XONWORD1 | XONWORD1 | XONWORD1 | XONWORD1 | XONWORD1 | XONWORD1 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-44. XON1\_ADDR1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                  |
| 7-0   | XONWORD1 | R/W    | 0h      | Stores the 8 bit XON1 character in UART modes and ADDR1 address 1 in IrDA modes. |

<!-- image -->

<!-- image -->

## 19.5.1.16 XON2\_ADDR2 Register (offset = 14h) [reset = 0h]

XON2\_ADDR2 is shown in Figure 19-49 and described in Table 19-45.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In UART mode, XON2 character; in IrDA mode, ADDR2 address 2.

## Figure 19-49. XON2\_ADDR2 Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| XONWORD2 | XONWORD2 | XONWORD2 | XONWORD2 | XONWORD2 | XONWORD2 | XONWORD2 | XONWORD2 |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-45. XON2\_ADDR2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                  |
| 7-0   | XONWORD2 | R/W    | 0h      | Stores the 8 bit XON2 character in UART modes and ADDR2 address 2 in IrDA modes. |

## 19.5.1.17 LSR\_CIR Register (offset = 14h) [reset = 81h]

LSR\_CIR is shown in Figure 19-50 and described in Table 19-46.

The following line status register (LSR) description is for CIR mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-50. LSR\_CIR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| THREMPTY | RESERVED | RXSTOP   |          | RESERVED |          |          | RXFIFOE  |
| R-1h     | R-0h     | R-0h     |          | R-0h     |          |          | R-1h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-46. LSR\_CIR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                               |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                           |
| 7     | THREMPTY | R      | 1h      | THREMPTY. 0h = Transmit holding register (TX FIFO) is not empty. 1h = Transmit hold register (TX FIFO) is empty. The transmission is not necessarily completed.                                                           |
| 6     | RESERVED | R      | 0h      |                                                                                                                                                                                                                           |
| 5     | RXSTOP   | R      | 0h      | The RXSTOP is generated based on the value set in the BOF Length register (EBLR). 0h = Reception is on going or waiting for a new frame. 1h = Reception is completed. It is cleared on a single read of the LSR register. |
| 4-1   | RESERVED | R      | 0h      |                                                                                                                                                                                                                           |
| 0     | RXFIFOE  | R      | 1h      | RXFIFOE. 0h = At least one data character in the RX FIFO. 1h = No data in the receive FIFO.                                                                                                                               |

<!-- image -->

<!-- image -->

## 19.5.1.18 LSR\_IRDA Register (offset = 14h) [reset = A3h]

LSR\_IRDA is shown in Figure 19-51 and described in Table 19-47.

The following line status register (LSR) description is for IrDA mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. When the IrDA line status register (LSR) is read, LSR[4:2] reflect the error bits (FL, CRC, ABORT) of the frame at the top of the status FIFO (next frame status to be read).

Figure 19-51. LSR\_IRDA Register

| 15        | 14             | 13            | 12              | 11       | 10       | 9          | 8         |
|-----------|----------------|---------------|-----------------|----------|----------|------------|-----------|
| RESERVED  | RESERVED       | RESERVED      | RESERVED        | RESERVED | RESERVED | RESERVED   | RESERVED  |
| R-0h      | R-0h           | R-0h          | R-0h            | R-0h     | R-0h     | R-0h       | R-0h      |
| 7         | 6              | 5             | 4               | 3        | 2        | 1          | 0         |
| THR_EMPTY | STS_FIFO_FU LL | RX_LAST_BYT E | FRAME_TOO_ LONG | ABORT    | CRC      | STS_FIFO_E | RX_FIFO_E |
| R-1h      | R-0h           | R-1h          | R-0h            | R-0h     | R-0h     | R-1h       | R-1h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-47. LSR\_IRDA Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED       | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                         |
| 7     | THR_EMPTY      | R      | 1h      | THR_EMPTY. 0h = Transmit holding register (TX FIFO) is not empty. 1h = Transmit hold register (TX FIFO) is empty. The transmission is not necessarily completed.                                                                                                                                                                                                                                        |
| 6     | STS_FIFO_FULL  | R      | 0h      | STS_FIFO_FULL. 0h = Status FIFO is not full. 1h = Status FIFO is full.                                                                                                                                                                                                                                                                                                                                  |
| 5     | RX_LAST_BYTE   | R      | 1h      | RX_LAST_BYTE. 0h = The RX FIFO (RHR) does not contain the last byte of the frame to be read. 1h = The RX FIFO (RHR) contains the last byte of the frame to be read. This bit is set to 1 only when the last byte of a frame is available to be read. It is used to determine the frame boundary. It is cleared on a single read of the LSR register.                                                    |
| 4     | FRAME_TOO_LONG | R      | 0h      | FRAME_TOO_LONG. 0h = No frame-too-long error in frame. 1h = Frame-too-long error in the frame at the top of the status FIFO (next character to be read). This bit is set to 1 when a frame exceeding the maximum length (set by RXFLH and RXFLL registers) is received. When this error is detected, current frame reception is terminated. Reception is stopped until the next START flag is detected. |
| 3     | ABORT          | R      | 0h      | ABORT. 0h = No abort pattern error in frame. 1h(Read) = Abort pattern received. SIR and MIabort pattern. FIR: Illegal symbol.                                                                                                                                                                                                                                                                           |
| 2     | CRC            | R      | 0h      | CRC. 0h = No CRC error in frame. 1h = CRC error in the frame at the top of the status FIFO (next character to be read).                                                                                                                                                                                                                                                                                 |
| 1     | STS_FIFO_E     | R      | 1h      | STS_FIFO_E. 0h = Status FIFO is not empty. 1h = Status FIFO is empty.                                                                                                                                                                                                                                                                                                                                   |

## Table 19-47. LSR\_IRDA Register Field Descriptions (continued)

|   Bit | Field     | Type   | Reset   | Description                                                                                   |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------|
|     0 | RX_FIFO_E | R      | 1h      | RX_FIFO_E. 0h = At least one data character in the RX FIFO. 1h = No data in the receive FIFO. |

<!-- image -->

<!-- image -->

## 19.5.1.19 LSR\_UART Register (offset = 14h) [reset = 60h]

LSR\_UART is shown in Figure 19-52 and described in Table 19-48.

The following line status register (LSR) description is for UART mode. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. When the UART line status register (LSR) is read, LSR[4:2] reflect the error bits (BI, FE, PE) of the character at the top of the RX FIFO (next character to be read). Therefore, reading the LSR and then reading the RHR identifies errors in a character. Reading RHR updates BI, FE, and PE. LSR [7] is set when there is an error anywhere in the RX FIFO and is cleared only when there are no more errors remaining in the RX FIFO. Reading the LSR does not cause an increment of the RX FIFO read pointer. The RX FIFO read pointer is incremented by reading the RHR. Reading LSR clears OE if set.

Figure 19-52. LSR\_UART Register

| 15        | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|-----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RXFIFOSTS | TXSRE    | TXFIFOE  | RXBI     | RXFE     | RXPE     | RXOE     | RXFIFOE  |
| R-0h      | R-1h     | R-1h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-48. LSR\_UART Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                             |
|-------|-----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED  | R      | 0h      |                                                                                                                                                                                                         |
| 7     | RXFIFOSTS | R      | 0h      | RXFIFOSTS. 0h = Normal operation. 1h = At least one parity error, framing error, or break indication in the RX FIFO. Bit 7 is cleared when no errors are present in the RX FIFO.                        |
| 6     | TXSRE     | R      | 1h      | TXSRE. 0h = Transmitter hold (TX FIFO) and shift registers are not empty. 1h = Transmitter hold (TX FIFO) and shift registers are empty.                                                                |
| 5     | TXFIFOE   | R      | 1h      | TXFIFOE. 0h = Transmit hold register (TX FIFO) is not empty. 1h = Transmit hold register (TX FIFO) is empty. The transmission is not necessarily completed.                                             |
| 4     | RXBI      | R      | 0h      | RXBI. 0h = No break condition. 1h = A break was detected while the data being read from the RX FIFO was being received (RX input was low for one character + 1 bit time frame).                         |
| 3     | RXFE      | R      | 0h      | RXFE. 0h = No framing error in data being read from RX FIFO. 1h = Framing error occurred in data being read from RX FIFO (received data did not have a valid stop bit).                                 |
| 2     | RXPE      | R      | 0h      | RXPE. 0h = No parity error in data being read from RX FIFO. 1h = Parity error in data being read from RX FIFO.                                                                                          |
| 1     | RXOE      | R      | 0h      | RXOE. 0h = No overrun error. 1h = Overrun error occurred. Set when the character held in the receive shift register is not transferred to the RX FIFO. This case occurs only when receive FIFO is full. |

## Table 19-48. LSR\_UART Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                 |
|-------|---------|--------|---------|---------------------------------------------------------------------------------------------|
|     0 | RXFIFOE | R      | 0h      | RXFIFOE. 0h = No data in the receive FIFO. 1h = At least one data character in the RX FIFO. |

<!-- image -->

<!-- image -->

## 19.5.1.20 TCR Register (offset = 18h) [reset = 0h]

TCR is shown in Figure 19-53 and described in Table 19-49.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The TCR is accessible only when EFR[4] = 1 and MCR[6] = 1. The transmission control register (TCR) stores the receive FIFO threshold levels to start/stop transmission during hardware flow control. Trigger levels from 0-60 bytes are available with a granularity of 4. Trigger level = 4 x [4-bit register value]. You must ensure that TCR[3:0] &gt; TCR[7:4], whenever auto-RTS or software flow control is enabled to avoid a misoperation of the device. In FIFO interrupt mode with flow control, you have to also ensure that the trigger level to HALT transmission is greater or equal to receive FIFO trigger level (either TLR[7:4] or FCR[7:6]); otherwise, FIFO operation stalls. In FIFO DMA mode with flow control, this concept does not exist because the DMA request is sent each time a byte is received.

## Figure 19-53. TCR Register

| 15              | 14              | 13              | 12              | 11             | 10             | 9              | 8              |
|-----------------|-----------------|-----------------|-----------------|----------------|----------------|----------------|----------------|
| RESERVED        | RESERVED        | RESERVED        | RESERVED        | RESERVED       | RESERVED       | RESERVED       | RESERVED       |
| R-0h            | R-0h            | R-0h            | R-0h            | R-0h           | R-0h           | R-0h           | R-0h           |
| 7               | 6               | 5               | 4               | 3              | 2              | 1              | 0              |
| RXFIFOTRIGSTART | RXFIFOTRIGSTART | RXFIFOTRIGSTART | RXFIFOTRIGSTART | RXFIFOTRIGHALT | RXFIFOTRIGHALT | RXFIFOTRIGHALT | RXFIFOTRIGHALT |
| R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h          | R/W-0h         | R/W-0h         | R/W-0h         | R/W-0h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-49. TCR Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                              |
|-------|-----------------|--------|---------|----------------------------------------------------------|
| 15-8  | RESERVED        | R      | 0h      |                                                          |
| 7-4   | RXFIFOTRIGSTART | R/W    | 0h      | RX FIFO trigger level to RESTORE transmission (0 to 60). |
| 3-0   | RXFIFOTRIGHALT  | R/W    | 0h      | RX FIFO trigger level to HALT transmission (0 to 60).    |

## 19.5.1.21 MSR Register (offset = 18h) [reset = 0h]

MSR is shown in Figure 19-54 and described in Table 19-50.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The modem status register (MSR) provides information about the current state of the control lines from the modem, data set, or peripheral device to the Local Host. It also indicates when a control input from the modem changes state.

## Figure 19-54. MSR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| NCD_STS  | NRI_STS  | NDSR_STS | NCTS_STS | DCD_STS  | RI_STS   | DSR_STS  | CTS_STS  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-50. MSR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                   |
| 7     | NCD_STS  | R      | 0h      | This bit is the complement of the DCD (active-low) input. In loopback mode, it is equivalent to MCR[3].                                           |
| 6     | NRI_STS  | R      | 0h      | This bit is the complement of the RI (active-low) input. In loopback mode, it is equivalent to MCR[2].                                            |
| 5     | NDSR_STS | R      | 0h      | This bit is the complement of the DSR (active-low) input. In loopback mode, it is equivalent to MCR[0].                                           |
| 4     | NCTS_STS | R      | 0h      | This bit is the complement of the CTS (active-low) input. In loopback mode, it is equivalent to MCR[1].                                           |
| 3     | DCD_STS  | R      | 0h      | DCD_STS. 0h = No change. 1h = Indicates that DCD (active-low) input (or MCR[3] in loopback mode) has changed. Cleared on a read.                  |
| 2     | RI_STS   | R      | 0h      | RI_STS. 0h = No change. 1h = Indicates that RI (active-low) input (or MCR[2] in loopback mode) changed state from low to high. Cleared on a read. |
| 1     | DSR_STS  | R      | 0h      | DSR_STS. 0h = No change. 1h = Indicates that DSR (active-low) input (or MCR[0] in loopback mode) changed state. Cleared on a read.                |
| 0     | CTS_STS  | R      | 0h      | CTS_STS. 0h = No change. 1h = Indicates that CTS (active-low) input (or MCR[1] in loopback mode) changed state. Cleared on a read.                |

<!-- image -->

<!-- image -->

## 19.5.1.22 XOFF1 Register (offset = 18h) [reset = 0h]

XOFF1 is shown in Figure 19-55 and described in Table 19-51.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In UART mode, XOFF1 character.

## Figure 19-55. XOFF1 Register

| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| XOFFWORD1 | XOFFWORD1 | XOFFWORD1 | XOFFWORD1 | XOFFWORD1 | XOFFWORD1 | XOFFWORD1 | XOFFWORD1 |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-51. XOFF1 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                     |
|-------|-----------|--------|---------|-------------------------------------------------|
| 15-8  | RESERVED  | R      | 0h      |                                                 |
| 7-0   | XOFFWORD1 | R/W    | 0h      | Stores the 8 bit XOFF1 character in UART modes. |

## 19.5.1.23 SPR Register (offset = 1Ch) [reset = 0h]

SPR is shown in Figure 19-56 and described in Table 19-52.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The scratchpad register (SPR) is a read/write register that does not control the module. It is a scratchpad register used to hold temporary data.

## Figure 19-56. SPR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| SPR_WORD | SPR_WORD | SPR_WORD | SPR_WORD | SPR_WORD | SPR_WORD | SPR_WORD | SPR_WORD |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-52. SPR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description          |
|-------|----------|--------|---------|----------------------|
| 15-8  | RESERVED | R      | 0h      |                      |
| 7-0   | SPR_WORD | R/W    | 0h      | Scratchpad register. |

<!-- image -->

<!-- image -->

## 19.5.1.24 TLR Register (offset = 1Ch) [reset = 0h]

TLR is shown in Figure 19-57 and described in Table 19-53.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The TLR is accessible only when EFR[4] = 1 and MCR[6] = 1. This register stores the programmable transmit and receive FIFO trigger levels used for DMA and IRQ generation.

## Figure 19-57. TLR Register

| 15               | 14               | 13               | 12       | 11               | 10               | 9                | 8        |
|------------------|------------------|------------------|----------|------------------|------------------|------------------|----------|
| RESERVED         | RESERVED         | RESERVED         | RESERVED | RESERVED         | RESERVED         | RESERVED         | RESERVED |
| R-0h             | R-0h             | R-0h             | R-0h     | R-0h             | R-0h             | R-0h             | R-0h     |
| 7                | 6                | 5                | 4        | 3                | 2                | 1                | 0        |
| RX_FIFO_TRIG_DMA | RX_FIFO_TRIG_DMA | RX_FIFO_TRIG_DMA |          | TX_FIFO_TRIG_DMA | TX_FIFO_TRIG_DMA | TX_FIFO_TRIG_DMA |          |
| R/W-0h           | R/W-0h           | R/W-0h           |          | R/W-0h           | R/W-0h           | R/W-0h           |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-53. TLR Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED         | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-4   | RX_FIFO_TRIG_DMA | R/W    | 0h      | Receive FIFO trigger level. Following is a summary of settings for the RX FIFO trigger level. SCR[7] = 0, and TLR[7] to TLR[4]=0, then: Defined by FCR[7] and FCR[6] (either 8, 16, 56, 60 characters). SCR[7] = 0, and TLR[7] to TLR[4] not equal to 0000, then: Defined by TLR[7] to TLR[4] (from 4 to 60 characters with a granularity of 4 characters). SCR[7] = 1, and TLR[7] to TLR[4] = any value, then: Defined by the concatenated value of TLR[7] to TLR[4] and FCR[7] and FCR[6] (from 1 to 63 characters with a granularity of 1 character). Note: the combination of TLR[7] to TLR[4] = 0000 and FCR[7] and FCR[6] = 00 (all zeros) is not supported (minimum of 1 character is required). All zeros results in unpredictable behavior.     |
| 3-0   | TX_FIFO_TRIG_DMA | R/W    | 0h      | Transmit FIFO trigger level. Following is a summary of settings for the TX FIFO trigger level. SCR[6] = 0, and TLR[3] to TLR[0] = 0, then: Defined by FCR[5] and FCR[4] (either 8, 16, 32, 56 characters). SCR[6] = 0, and TLR[3] to TLR[0] not equal to 0000, then: Defined by TLR[3] to TLR[0] (from 4 to 60 characters with a granularity of 4 characters). SCR[6] = 1, and TLR[3] to TLR[0] = any value, then: Defined by the concatenated value of TLR[3] and TLR[0] and FCR[5] and FCR[4] (from 1 to 63 characters with a granularity of 1 character). Note: the combination of TLR[3] to TLR[0] = 0000 and FCR[5] and FCR[4] = 00 (all zeros) is not supported (minimum of 1 character is required). All zeros results in unpredictable behavior. |

## 19.5.1.25 XOFF2 Register (offset = 1Ch) [reset = 0h]

XOFF2 is shown in Figure 19-58 and described in Table 19-54.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In UART mode, XOFF2 character.

## Figure 19-58. XOFF2 Register

| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| XOFFWORD2 | XOFFWORD2 | XOFFWORD2 | XOFFWORD2 | XOFFWORD2 | XOFFWORD2 | XOFFWORD2 | XOFFWORD2 |
| R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-54. XOFF2 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                     |
|-------|-----------|--------|---------|-------------------------------------------------|
| 15-8  | RESERVED  | R      | 0h      |                                                 |
| 7-0   | XOFFWORD2 | R/W    | 0h      | Stores the 8 bit XOFF2 character in UART modes. |

<!-- image -->

<!-- image -->

## 19.5.1.26 MDR1 Register (offset = 20h) [reset = 7h]

MDR1 is shown in Figure 19-59 and described in Table 19-55.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The mode of operation is programmed by writing to MDR1[2:0]; therefore, the mode definition register 1 (MDR1) must be programmed on startup after configuration of the configuration registers (DLL, DLH, and LCR). The value of MDR1[2:0] must not be changed again during normal operation. If the module is disabled by setting the MODESELECT field to 7h, interrupt requests can still be generated unless disabled through the interrupt enable register (IER). In this case, UART mode interrupts are visible. Reading the interrupt identification register (IIR) shows the UART mode interrupt flags.

## Figure 19-59. MDR1 Register

| 15            | 14       | 13       | 12       | 11       | 10         | 9          | 8          |
|---------------|----------|----------|----------|----------|------------|------------|------------|
| RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   | RESERVED   |
| R-0h          | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       | R-0h       |
| 7             | 6        | 5        | 4        | 3        | 2          | 1          | 0          |
| FRAMEENDM ODE | SIPMODE  | SCT      | SETTXIR  | IRSLEEP  | MODESELECT | MODESELECT | MODESELECT |
| R/W-0h        | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-7h     | R/W-7h     | R/W-7h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-55. MDR1 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                            |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                        |
| 7     | FRAMEENDMODE | R/W    | 0h      | IrDA mode only. 0h = Frame-length method. 1h = Set EOT bit method.                                                                                                                                                                                                     |
| 6     | SIPMODE      | R/W    | 0h      | MIR/FIR modes only. 0h = Manual SIP mode: SIP is generated with the control of ACREG[3]. 1h = Automatic SIP mode: SIP is generated after each transmission.                                                                                                            |
| 5     | SCT          | R/W    | 0h      | Store and control the transmission. 0h = Starts the infrared transmission when a value is written to the THR register. 1h = Starts the infrared transmission with the control of ACREG[2]. Note: Before starting any transmission, there must be no reception ongoing. |
| 4     | SETTXIR      | R/W    | 0h      | Used to configure the infrared transceiver. 0h = If MDR2[7] = 0, no action; if MDR2[7] = 1, TXIR pin output is forced low. 1h = TXIR pin output is forced high (not dependant of MDR2[7] value).                                                                       |
| 3     | IRSLEEP      | R/W    | 0h      | IrDA/CIR sleep mode. 0h = IrDA/CIR sleep mode disabled. 1h = IrDA/CIR sleep mode enabled.                                                                                                                                                                              |
| 2-0   | MODESELECT   | R/W    | 7h      | UART/IrDA/CIR mode selection. 0h = UART 16x mode. 1h = SIR mode. 2h = UART 16x auto-baud. 3h = UART 13x mode. 4h = MIR mode. 5h = FIR mode. 6h = CIR mode. 7h = Disable (default state).                                                                               |

## 19.5.1.27 MDR2 Register (offset = 24h) [reset = 0h]

MDR2 is shown in Figure 19-60 and described in Table 19-56.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The MDR2[0] bit describes the status of the TX status interrupt in IIR[5]. The IRTXUNDERRUN bit must be read after a TX status interrupt occurs. The MDR2[2:1] bits set the trigger level for the frame status FIFO (8 entries) and must be programmed before the mode is programmed in MDR1[2:0]. The MDR2[6] bit gives the flexibility to invert the RX pin inside the UART module to ensure that the protocol at the input of the transceiver module has the same polarity at module level. By default, the RX pin is inverted because most of transceiver invert the IR receive pin.

## Figure 19-60. MDR2 Register

| 15         | 14         | 13           | 12           | 11        | 10          | 9           | 8             |
|------------|------------|--------------|--------------|-----------|-------------|-------------|---------------|
| RESERVED   | RESERVED   | RESERVED     | RESERVED     | RESERVED  | RESERVED    | RESERVED    | RESERVED      |
| R-0h       | R-0h       | R-0h         | R-0h         | R-0h      | R-0h        | R-0h        | R-0h          |
| 7          | 6          | 5            | 4            | 3         | 2           | 1           | 0             |
| SETTXIRALT | IRRXINVERT | CIRPULSEMODE | CIRPULSEMODE | UARTPULSE | STSFIFOTRIG | STSFIFOTRIG | IRTXUNDERR UN |
| R/W-0h     | R/W-0h     | R/W-0h       | R/W-0h       | R/W-0h    | R/W-0h      | R/W-0h      | R-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-56. MDR2 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                            |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED     | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                        |
| 7     | SETTXIRALT   | R/W    | 0h      | Provides alternate functionality for MDR1[4]. 0h = Normal mode 1h = Alternate mode for SETTXIR                                                                                                                                                                                                                                                         |
| 6     | IRRXINVERT   | R/W    | 0h      | Only for IR mode (IrDA and CIR). Invert RX pin in the module before the voting or sampling system logic of the infrared block. This does not affect the RX path in UART modem modes. 0h = Inversion is performed. 1h = No inversion is performed.                                                                                                      |
| 5-4   | CIRPULSEMODE | R/W    | 0h      | CIR pulse modulation definition. Defines high level of the pulse width associated with a digit: 0h = Pulse width of 3 from 12 cycles. 1h = Pulse width of 4 from 12 cycles. 2h = Pulse width of 5 from 12 cycles. 3h = Pulse width of 6 from 12 cycles.                                                                                                |
| 3     | UARTPULSE    | R/W    | 0h      | UART mode only. Used to allow pulse shaping in UART mode. 0h = Normal UART mode. 1h = UART mode with pulse shaping.                                                                                                                                                                                                                                    |
| 2-1   | STSFIFOTRIG  | R/W    | 0h      | Only for IrDA mode. Frame status FIFO threshold select: 0h = 1 entry 1h = 4 entries 2h = 7 entries 3h = 8 entries                                                                                                                                                                                                                                      |
| 0     | IRTXUNDERRUN | R      | 0h      | IrDA transmission status interrupt. When the TX status interrupt (IIR[5]) occurs, the meaning of the interrupt is: 0h = The last bit of the frame was transmitted successfully without error. 1h = An underrun occurred. The last bit of the frame was transmitted but with an underrun error. The bit is reset to 0 when the RESUME register is read. |

<!-- image -->

<!-- image -->

## 19.5.1.28 TXFLL Register (offset = 28h) [reset = 0h]

TXFLL is shown in Figure 19-61 and described in Table 19-57.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The transmit frame length low register (TXFLL) and the TXFLH register hold the 13-bit transmit frame length (expressed in bytes). TXFLL holds the LSBs and TXFLH holds the MSBs. The frame length value is used if the frame length method of frame closing is used.

## Figure 19-61. TXFLL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| TXFLL    | TXFLL    | TXFLL    | TXFLL    | TXFLL    | TXFLL    | TXFLL    | TXFLL    |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-57. TXFLL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                    |
|-------|----------|--------|---------|------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                |
| 7-0   | TXFLL    | W      | 0h      | LSB register used to specify the frame length. |

## 19.5.1.29 SFLSR Register (offset = 28h) [reset = 0h]

SFLSR is shown in Figure 19-62 and described in Table 19-58.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. Reading the status FIFO line status register (SFLSR) effectively reads frame status information from the status FIFO. This register does not physically exist. Reading this register increments the status FIFO read pointer (SFREGL and SFREGH must be read first). Top of RX FIFO = Next frame to be read from RX FIFO.

## Figure 19-62. SFLSR Register

| 15       | 14       | 13       | 12       | 11                    | 10            | 9         | 8        |
|----------|----------|----------|----------|-----------------------|---------------|-----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED              | RESERVED      | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h                  | R-0h          | R-0h      | R-0h     |
| 7        | 6        | 5        | 4        | 3                     | 2             | 1         | 0        |
|          | RESERVED |          | OE_ERROR | FRAME_TOO_ LONG_ERROR | ABORT_DETE CT | CRC_ERROR | RESERVED |
|          | R-0h     |          | R-0h     | R-0h                  | R-0h          | R-0h      | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-58. SFLSR Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                      |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------|
| 15-5  | RESERVED              | R      | 0h      |                                                                                                  |
| 4     | OE_ERROR              | R      | 0h      | OE_ERROR. 0h = No error 1h = Overrun error in RX FIFO when frame at top of RX FIFO was received. |
| 3     | FRAME_TOO_LONG_ER ROR | R      | 0h      | FRAME_TOO_LONG_ERROR. 0h = No error 1h = Frame-length too long error in frame at top of RX FIFO. |
| 2     | ABORT_DETECT          | R      | 0h      | ABORT_DETECT. 0h = No error 1h = Abort pattern detected in frame at top of RX FIFO.              |
| 1     | CRC_ERROR             | R      | 0h      | CRC_ERROR. 0h = No error 1h = CRC error in frame at top of RX FIFO.                              |
| 0     | RESERVED              | R      | 0h      |                                                                                                  |

<!-- image -->

<!-- image -->

## 19.5.1.30 RESUME Register (offset = 2Ch) [reset = 0h]

RESUME is shown in Figure 19-63 and described in Table 19-59.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The RESUME register is used to clear internal flags, which halt transmission/reception when an underrun/overrun error occurs. Reading this register resumes the halted operation. This register does not physically exist and always reads as 00.

## Figure 19-63. RESUME Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESUME   | RESUME   | RESUME   | RESUME   | RESUME   | RESUME   | RESUME   | RESUME   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-59. RESUME Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                         |
|-------|----------|--------|---------|-----------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                     |
| 7-0   | RESUME   | R      | 0h      | Dummy read to restart the TX or RX, value 0 to FFh. |

## 19.5.1.31 TXFLH Register (offset = 2Ch) [reset = 0h]

TXFLH is shown in Figure 19-64 and described in Table 19-60.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The transmit frame length high register (TXFLH) and the TXFLL register hold the 13-bit transmit frame length (expressed in bytes). TXFLL holds the LSBs and TXFLH holds the MSBs. The frame length value is used if the frame length method of frame closing is used.

## Figure 19-64. TXFLH Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | TXFLH    | TXFLH    | TXFLH    | TXFLH    | TXFLH    |
| R-0h     | R-0h     | R-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-60. TXFLH Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------|
| 15-5  | RESERVED | R      | 0h      |                                                                |
| 4-0   | TXFLH    | W      | 0h      | MSB register used to specify the frame length, value 0 to 1Fh. |

<!-- image -->

www.ti.com

<!-- image -->

## 19.5.1.32 RXFLL Register (offset = 30h) [reset = 0h]

RXFLL is shown in Figure 19-65 and described in Table 19-61.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The received frame length low register (RXFLL) and the RXFLH register hold the 12-bit receive maximum frame length. RXFLL holds the LSBs and RXFLH holds the MSBs. If the intended maximum receive frame length is n bytes, program RXFLL and RXFLH to be n + 3 in SIR or MIR modes and n + 6 in FIR mode (+3 and +6 are the result of frame format with CRC and stop flag; two bytes are associated with the FIR stop flag).

## Figure 19-65. RXFLL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RXFLL    | RXFLL    | RXFLL    | RXFLL    | RXFLL    | RXFLL    | RXFLL    | RXFLL    |
| W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-61. RXFLL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                             |
| 7-0   | RXFLL    | W      | 0h      | LSB register used to specify the frame length in reception, value 0 to FFh. |

## 19.5.1.33 SFREGL Register (offset = 30h) [reset = 0h]

SFREGL is shown in Figure 19-66 and described in Table 19-62.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The frame lengths of received frames are written into the status FIFO. This information can be read by reading the status FIFO register low (SFREGL) and the status FIFO register high (SFREGH). These registers do not physically exist. The LSBs are read from SFREGL and the MSBs are read from SFREGH. Reading these registers does not alter the status FIFO read pointer. These registers must be read before the pointer is incremented by reading the SFLSR.

## Figure 19-66. SFREGL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| SFREGL   | SFREGL   | SFREGL   | SFREGL   | SFREGL   | SFREGL   | SFREGL   | SFREGL   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-62. SFREGL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                   |
|-------|----------|--------|---------|-----------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                               |
| 7-0   | SFREGL   | R      | 0h      | LSB part of the frame length, value 0 to FFh. |

<!-- image -->

www.ti.com

<!-- image -->

## 19.5.1.34 SFREGH Register (offset = 34h) [reset = 0h]

SFREGH is shown in Figure 19-67 and described in Table 19-63.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The frame lengths of received frames are written into the status FIFO. This information can be read by reading the status FIFO register low (SFREGL) and the status FIFO register high (SFREGH). These registers do not physically exist. The LSBs are read from SFREGL and the MSBs are read from SFREGH. Reading these registers does not alter the status FIFO read pointer. These registers must be read before the pointer is incremented by reading the SFLSR.

## Figure 19-67. SFREGH Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | SFREGH   | SFREGH   | SFREGH   | SFREGH   |
| R-0h     | R-0h     | R-0h     |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-63. SFREGH Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                  |
|-------|----------|--------|---------|----------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                              |
| 3-0   | SFREGH   | R      | 0h      | MSB part of the frame length, value 0 to Fh. |

## 19.5.1.35 RXFLH Register (offset = 34h) [reset = 0h]

RXFLH is shown in Figure 19-68 and described in Table 19-64.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The received frame length high register (RXFLH) and the RXFLL register hold the 12-bit receive maximum frame length. RXFLL holds the LSBs and RXFLH holds the MSBs. If the intended maximum receive frame length is n bytes, program RXFLL and RXFLH to be n + 3 in SIR or MIR modes and n + 6 in FIR mode (+3 and +6 are the result of frame format with CRC and stop flag; two bytes are associated with the FIR stop flag).

## Figure 19-68. RXFLH Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | RXFLH    | RXFLH    | RXFLH    | RXFLH    |
| R-0h     | R-0h     | R-0h     |          | W-0h     | W-0h     | W-0h     | W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-64. RXFLH Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                |
|-------|----------|--------|---------|----------------------------------------------------------------------------|
| 15-4  | RESERVED | R      | 0h      |                                                                            |
| 3-0   | RXFLH    | W      | 0h      | MSB register used to specify the frame length in reception, value 0 to Fh. |

<!-- image -->

<!-- image -->

## 19.5.1.36 BLR Register (offset = 38h) [reset = 40h]

BLR is shown in Figure 19-69 and described in Table 19-65.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The BLR[6] bit is used to select whether C0h or FFh start patterns are to be used, when multiple start flags are required in SIR mode. If only one start flag is required, this is always C0h. If n start flags are required, either (n - 1) C0h or (n -1) FFh flags are sent, followed by a single C0h flag (immediately preceding the first data byte).

## Figure 19-69. BLR Register

| 15            | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|---------------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED      | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h          | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7             | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| STSFIFORESE T | XBOFTYPE |          |          |          | RESERVED |          |          |
| R/W-0h        | R/W-1h   |          |          |          | R-0h     |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-65. BLR Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                      |
|-------|--------------|--------|---------|----------------------------------------------------------------------------------|
| 15-8  | RESERVED     | R      | 0h      |                                                                                  |
| 7     | STSFIFORESET | R/W    | 0h      | Status FIFO reset. This bit is self-clearing.                                    |
| 6     | XBOFTYPE     | R/W    | 1h      | SIR xBOF select. 0h = FFh start pattern is used. 1h = C0h start pattern is used. |
| 5-0   | RESERVED     | R      | 0h      |                                                                                  |

## 19.5.1.37 UASR Register (offset = 38h) [reset = 0h]

UASR is shown in Figure 19-70 and described in Table 19-66.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The UART autobauding status register (UASR) returns the speed, the number of bits by characters, and the type of parity in UART autobauding mode. In autobauding mode, the input frequency of the UART modem must be fixed to 48 MHz. Any other module clock frequency results in incorrect baud rate recognition. This register is used to set up transmission according to characteristics of previous reception, instead of LCR, DLL, and DLH registers when UART is in autobauding mode. To reset the autobauding hardware (to start a new AT detection) or to set the UART in standard mode (no autobaud), MDR1[2:0] must be set to 7h (reset state), then set to 2h (UART in autobaud mode) or cleared to 0 (UART in standard mode). Usage limitation: Only 7 and 8 bits character (5 and 6 bits not supported). 7 bits character with space parity not supported. Baud rate between 1200 and 115 200 bp/s (10 possibilities).

## Figure 19-70. UASR Register

| 15         | 14         | 13        | 12       | 11       | 10       | 9        | 8        |
|------------|------------|-----------|----------|----------|----------|----------|----------|
| RESERVED   | RESERVED   | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h       | R-0h       | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7          | 6          | 5         | 4        | 3        | 2        | 1        | 0        |
| PARITYTYPE | PARITYTYPE | BITBYCHAR |          |          | SPEED    |          |          |
| R-0h       | R-0h       | R-0h      |          |          | R-0h     |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-66. UASR Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                       |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                   |
| 7-6   | PARITYTYPE | R      | 0h      | Type of the parity in UART autobauding mode. 0h = No parity identified 1h = Parity space 2h = Even parity 3h = Odd parity                                                                                                         |
| 5     | BITBYCHAR  | R      | 0h      | Number of bits by characters. 0h = 7-bit character identified. 1h = 8-bit character identified.                                                                                                                                   |
| 4-0   | SPEED      | R      | 0h      | Speed. 0h = No speed identified. 1h = 115 200 baud 2h = 57 600 baud 3h = 38 400 baud 4h = 28 800 baud 5h = 19 200 baud 6h = 14 400 baud 7h = 9600 baud 8h = 4800 baud 9h = 2400 baud Ah = 1200 baud Bh = Reserved from Bh to 1Fh. |

<!-- image -->

www.ti.com

<!-- image -->

## 19.5.1.38 ACREG Register (offset = 3Ch) [reset = 0h]

ACREG is shown in Figure 19-71 and described in Table 19-67.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. If transmit FIFO is not empty and MDR1[5] = 1, IrDA starts a new transfer with data of previous frame as soon as abort frame has been sent. Therefore, TX FIFO must be reset before sending an abort frame. It is recommended to disable TX FIFO underrun capability by masking corresponding underrun interrupt. When disabling underrun by setting ACREG[4] = 1, unknown data is sent over TX line.

## Figure 19-71. ACREG Register

| 15        | 14       | 13       | 12             | 11       | 10       | 9        | 8        |
|-----------|----------|----------|----------------|----------|----------|----------|----------|
| RESERVED  | RESERVED | RESERVED | RESERVED       | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h      | R-0h     | R-0h     | R-0h           | R-0h     | R-0h     | R-0h     | R-0h     |
| 7         | 6        | 5        | 4              | 3        | 2        | 1        | 0        |
| PULSETYPE | SDMOD    | DISIRRX  | DISTXUNDER RUN | SENDSIP  | SCTXEN   | ABORTEN  | EOTEN    |
| R/W-0h    | R/W-0h   | R/W-0h   | R/W-0h         | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-67. ACREG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                   |
| 7     | PULSETYPE     | R/W    | 0h      | SIR pulse-width select: 0h = 3/16 of baud-rate pulse width 1h = 1.6 microseconds                                                                                                                                                                                  |
| 6     | SDMOD         | R/W    | 0h      | Primary output used to configure transceivers. Connected to the SD/MODE input pin of IrDA transceivers. 0h = SD pin is set to high. 1h = SD pin is set to low.                                                                                                    |
| 5     | DISIRRX       | R/W    | 0h      | Disable RX input. 0h = Normal operation (RX input automatically disabled during transmit, but enabled outside of transmit operation). 1h = Disables RX input (permanent state; independent of transmit).                                                          |
| 4     | DISTXUNDERRUN | R/W    | 0h      | Disable TX underrun. 0h = Long stop bits cannot be transmitted. TX underrun is enabled. 1h = Long stop bits can be transmitted.                                                                                                                                   |
| 3     | SENDSIP       | R/W    | 0h      | MIR/FIR modes only. Send serial infrared interaction pulse (SIP). If this bit is set during an MIR/FIR transmission, the SIP is sent at the end of it. This bit is automatically cleared at the end of the SIP transmission. 0h = No action. 1h = Send SIP pulse. |
| 2     | SCTXEN        | R/W    | 0h      | Store and control TX start. When MDR1[5] = 1 and the LH writes 1 to this bit, the TX state- machine starts frame transmission. This bit is self-clearing.                                                                                                         |
| 1     | ABORTEN       | R/W    | 0h      | Frame abort. The LH can intentionally abort transmission of a frame by writing 1 to this bit. Neither the end flag nor the CRC bits are appended to the frame.                                                                                                    |
| 0     | EOTEN         | R/W    | 0h      | EOT (end-of-transmission) bit. The LH writes 1 to this bit just before it writes the last byte to the TX FIFO in the set-EOT bit frame-closing method. This bit is automatically cleared when the LH writes to the THR (TX FIFO).                                 |

## 19.5.1.39 SCR Register (offset = 40h) [reset = 0h]

SCR is shown in Figure 19-72 and described in Table 19-68.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. Bit 4 enables the wake-up interrupt, but this interrupt is not mapped into the IIR register. Therefore, when an interrupt occurs and there is no interrupt pending in the IIR register, the SSR[1] bit must be checked. To clear the wake-up interrupt, bit SCR[4] must be reset to 0.

## Figure 19-72. SCR Register

| 15            | 14            | 13       | 12                    | 11            | 10       | 9        | 8          |
|---------------|---------------|----------|-----------------------|---------------|----------|----------|------------|
| RESERVED      | RESERVED      | RESERVED | RESERVED              | RESERVED      | RESERVED | RESERVED | RESERVED   |
| R-0h          | R-0h          | R-0h     | R-0h                  | R-0h          | R-0h     | R-0h     | R-0h       |
| 7             | 6             | 5        | 4                     | 3             | 2        | 1        | 0          |
| RXTRIGGRAN U1 | TXTRIGGRAN U1 | DSRIT    | RXCTSDSRWA KEUPENABLE | TXEMPTYCTLI T | DMAMODE2 |          | DMAMODECTL |
| R/W-0h        | R/W-0h        | R/W-0h   | R/W-0h                | R/W-0h        | R/W-0h   |          | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-68. SCR Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                            |
|-------|-----------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED              | R      | 0h      |                                                                                                                                                                                                                        |
| 7     | RXTRIGGRANU1          | R/W    | 0h      | RXTRIGGRANU1 0h = Disables the granularity of 1 for trigger RX level. 1h = Enables the granularity of 1 for trigger RX level.                                                                                          |
| 6     | TXTRIGGRANU1          | R/W    | 0h      | TXTRIGGRANU1 0h = Disables the granularity of 1 for trigger TX level. 1h = Enables the granularity of 1 for trigger TX level.                                                                                          |
| 5     | DSRIT                 | R/W    | 0h      | DSRIT 0h = Disables DSR (active-low) interrupt. 1h = Enables DSR (active-low) interrupt.                                                                                                                               |
| 4     | RXCTSDSRWAKEUPEN ABLE | R/W    | 0h      | RX CTS wake-up enable. 0h = Disables the WAKE UP interrupt and clears SSR[1]. 1h = Waits for a falling edge of RX, CTS (active-low), or DSR (active-low) pins to generate an interrupt.                                |
| 3     | TXEMPTYCTLIT          | R/W    | 0h      | TXEMPTYCTLIT 0h = Normal mode for THR interrupt. 1h = THR interrupt is generated when TX FIFO and TX shift register are empty.                                                                                         |
| 2-1   | DMAMODE2              | R/W    | 0h      | Specifies the DMA mode valid if SCR[0] = 1, then: 0h = DMA mode 0 (no DMA). 1h = DMA mode 1 (UARTnDMAREQ[0] in TX, UARTnDMAREQ[1] in RX) 2h = DMA mode 2 (UARTnDMAREQ[0] in RX) 3h = DMA mode 3 (UARTnDMAREQ[0] in TX) |
| 0     | DMAMODECTL            | R/W    | 0h      | DMAMODECT 0h = The DMAMODE is set with FCR[3]. 1h = The DMAMODE is set with SCR[2:1].                                                                                                                                  |

<!-- image -->

<!-- image -->

## 19.5.1.40 SSR Register (offset = 44h) [reset = 4h]

SSR is shown in Figure 19-73 and described in Table 19-69.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. Bit 1 is reset only when SCR[4] is reset to 0.

## Figure 19-73. SSR Register

| 15   | 14       | 13       | 12       | 11       | 10             | 9                  | 8          |
|------|----------|----------|----------|----------|----------------|--------------------|------------|
|      | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED       | RESERVED           | RESERVED   |
| R-0h | R-0h     | R-0h     | R-0h     | R-0h     | R-0h           | R-0h               | R-0h       |
| 7    | 6        | 5        | 4        | 3        | 2              | 1                  | 0          |
|      |          | RESERVED |          |          | DMACOUNTE RRST | RXCTSDSRWA KEUPSTS | TXFIFOFULL |
|      |          | R-0h     |          |          | R/W-1h         | R-0h               | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-69. SSR Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED          | R      | 0h      |                                                                                                                                                                                                                        |
| 2     | DMACOUNTERRST     | R/W    | 1h      | DMACOUNTERRST. 0h = The DMA counter will not be reset, if the corresponding FIFO is reset (via FCR[1] or FCR[2]). 1h = The DMA counter will be reset, if the corresponding FIFO is reset (via FCR[1] or FCR[2]).       |
| 1     | RXCTSDSRWAKEUPSTS | R      | 0h      | Pin falling edge detection: Reset only when SCR[4] is reset to 0. 0h = No falling-edge event on RX, CTS (active-low), and DSR (active-low). 1h = A falling edge occurred on RX, CTS (active-low), or DSR (active-low). |
| 0     | TXFIFOFULL        | R      | 0h      | TXFIFOFULL. 0h = TX FIFO is not full. 1h = TX FIFO is full.                                                                                                                                                            |

## 19.5.1.41 EBLR Register (offset = 48h) [reset = 0h]

EBLR is shown in Figure 19-74 and described in Table 19-70.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. In IrDA SIR operation, the BOF length register (EBLR) specifies the number of BOF + xBOFs to transmit. The value set into this register must consider the BOF character; therefore, to send only one BOF with no XBOF, this register must be set to 1. To send one BOF with n XBOFs, this register must be set to n + 1. Furthermore, the value 0 sends 1 BOF plus 255 XBOFs. In IrDA MIR mode, the BOF length register (EBLR) specifies the number of additional start flags (MIR protocol mandates a minimum of 2 start flags). In CIR mode, the BOF length register (EBLR) specifies the number of consecutive zeros to be received before generating the RXSTOP interrupt (IIR[2]). All the received zeros are stored in the RX FIFO. When the register is cleared to 0, this feature is deactivated and always in reception state, which is disabled by setting the ACREG[5] bit to 1. If the RX\_STOP interrupt occurs before a byte boundary, the remaining bits of the last byte are filled with zeros and then passed into the RX FIFO.

## Figure 19-74. EBLR Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| EBLR     | EBLR     | EBLR     | EBLR     | EBLR     | EBLR     | EBLR     | EBLR     |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-70. EBLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                               |
| 7-0   | EBLR     | R/W    | 0h      | IrDA mode: This register allows definition of up to 176 xBOFs, the maximum required by IrDA specification. CIR mode: This register specifies the number of consecutive zeros to be received before generating the RXSTOP interrupt (IIR[2]). 0h = Feature disabled. 1h = Generate RXSTOP interrupt after receiving 1 zero bit. FFh = Generate RXSTOP interrupt after receiving 255 zero bits. |

<!-- image -->

www.ti.com

<!-- image -->

## 19.5.1.42 MVR Register (offset = 50h) [reset = 0h]

MVR is shown in Figure 19-75 and described in Table 19-71.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The reset value is fixed by hardware and corresponds to the RTL revision of this module. A reset has no effect on the value returned.

## Figure 19-75. MVR Register

| 15       | 14       | 13        | 12        | 11        | 10        | 9         | 8         |
|----------|----------|-----------|-----------|-----------|-----------|-----------|-----------|
|          | RESERVED |           |           |           |           | MAJORREV  |           |
|          |          | R-0h      |           |           |           |           |           |
|          |          |           |           |           |           | R-0h      |           |
| 7        | 6        | 5         | 4         | 3         | 2         | 1         | 0         |
| RESERVED | RESERVED | MINORREV_ | MINORREV_ | MINORREV_ | MINORREV_ | MINORREV_ | MINORREV_ |
| R-0h     |          |           |           |           | R-0h      |           |           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-71. MVR Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                          |
|-------|-----------|--------|---------|--------------------------------------|
| 15-11 | RESERVED  | R      | 0h      |                                      |
| 10-8  | MAJORREV  | R      | 0h      | Major revision number of the module. |
| 7-6   | RESERVED  | R      | 0h      |                                      |
| 5-0   | MINORREV_ | R      | 0h      | Minor revision number of the module. |

## 19.5.1.43 SYSC Register (offset = 54h) [reset = 0h]

SYSC is shown in Figure 19-76 and described in Table 19-72.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The AUTOIDLE bit controls a power-saving technique to reduce the logic power consumption of the module interface; that is, when the feature is enabled, the interface clock is gated off until the module interface is accessed. When the SOFTRESET bit is set high, it causes a full device reset.

## Figure 19-76. SYSC Register

| 15       | 14       | 13       | 12       | 11       | 10        | 9         | 8        |
|----------|----------|----------|----------|----------|-----------|-----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED  | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h      | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2         | 1         | 0        |
| RESERVED | RESERVED | RESERVED | IDLEMODE | IDLEMODE | ENAWAKEUP | SOFTRESET | AUTOIDLE |
| R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h    | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-72. SYSC Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|-----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-5  | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| 4-3   | IDLEMODE  | R/W    | 0h      | Power management req/ack control. 0h = Force idle: Idle request is acknowledged unconditionally. 1h = No-idle: Idle request is never acknowledged. 2h = Smart idle: Acknowledgement to an idle request is given based in the internal activity of the module. 3h = Smart idle Wakeup: Acknowledgement to an idle request is given based in the internal activity of the module. The module is allowed to generate wakeup request. Only available on UART0. |
| 2     | ENAWAKEUP | R/W    | 0h      | Wakeup control. 0h = Wakeup is disabled. 1h = Wakeup capability is enabled.                                                                                                                                                                                                                                                                                                                                                                                |
| 1     | SOFTRESET | R/W    | 0h      | Software reset. Set this bit to 1 to trigger a module reset. This bit is automatically reset by the hardware. Read returns 0. 0h = Normal mode. 1h = Module is reset.                                                                                                                                                                                                                                                                                      |
| 0     | AUTOIDLE  | R/W    | 0h      | Internal interface clock-gating strategy. 0h = Clock is running. 1h = Reserved.                                                                                                                                                                                                                                                                                                                                                                            |

<!-- image -->

<!-- image -->

## 19.5.1.44 SYSS Register (offset = 58h) [reset = 0h]

SYSS is shown in Figure 19-77 and described in Table 19-73.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-77. SYSS Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8         |
|----------|----------|----------|----------|----------|----------|----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESETDONE |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-73. SYSS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                            |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------|
| 15-1  | RESERVED  | R      | 0h      |                                                                                        |
| 0     | RESETDONE | R      | 0h      | Internal reset monitoring. 0h = Internal module reset is ongoing. 1h = Reset complete. |

## 19.5.1.45 WER Register (offset = 5Ch) [reset = FFh]

WER is shown in Figure 19-78 and described in Table 19-74.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The wake-up enable register (WER) is used to mask and unmask a UART event that subsequently notifies the system. An event is any activity in the logic that can cause an interrupt and/or an activity that requires the system to wake up. Even if wakeup is disabled for certain events, if these events are also an interrupt to the UART, the UART still registers the interrupt as such.

## Figure 19-78. WER Register

| 15         | 14              | 13              | 12           | 11            | 10           | 9             | 8              |
|------------|-----------------|-----------------|--------------|---------------|--------------|---------------|----------------|
| RESERVED   | RESERVED        | RESERVED        | RESERVED     | RESERVED      | RESERVED     | RESERVED      | RESERVED       |
| R-0h       | R-0h            | R-0h            | R-0h         | R-0h          | R-0h         | R-0h          | R-0h           |
| 7          | 6               | 5               | 4            | 3             | 2            | 1             | 0              |
| TXWAKEUPEN | RLS__INTERR UPT | RHR__INTERR UPT | RX__ACTIVITY | DCD_ACTIVIT Y | RI__ACTIVITY | DSR_ACTIVIT Y | CTS__ACTIVIT Y |
| R/W-1h     | R/W-1h          | R/W-1h          | R/W-1h       | R/W-1h        | R/W-1h       | R/W-1h        | R/W-1h         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 19-74. WER Register Field Descriptions

| Bit   | Field          | Type   | Reset   | Description                                                                                                                                                   |
|-------|----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED       | R      | 0h      |                                                                                                                                                               |
| 7     | TXWAKEUPEN     | R/W    | 1h      | Wake-up interrupt. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system: Event can be: THRIT or TXDMA request and/or TXSATUSIT. |
| 6     | RLS__INTERRUPT | R/W    | 1h      | Receiver line status interrupt. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                           |
| 5     | RHR__INTERRUPT | R/W    | 1h      | RHR interrupt. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                                            |
| 4     | RX__ACTIVITY   | R/W    | 1h      | RX_ACTIVITY. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                                              |
| 3     | DCD_ACTIVITY   | R/W    | 1h      | DCD_ACTIVITY. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                                             |
| 2     | RI__ACTIVITY   | R/W    | 1h      | RI_ACTIVITY. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                                              |
| 1     | DSR_ACTIVITY   | R/W    | 1h      | DSR_ACTIVITY. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                                             |
| 0     | CTS__ACTIVITY  | R/W    | 1h      | CTS_ACTIVITY. 0h = Event is not allowed to wake up the system. 1h = Event can wake up the system.                                                             |

<!-- image -->

<!-- image -->

## 19.5.1.46 CFPS Register (offset = 60h) [reset = 69h]

CFPS is shown in Figure 19-79 and described in Table 19-75.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. Since the consumer IR (CIR) works at modulation rates of 30-56.8 kHz, the 48 MHz clock must be prescaled before the clock can drive the IR logic. The carrier frequency prescaler register (CFPS) sets the divisor rate to give a range to accommodate the remote control requirements in BAUD multiples of 12x. The value of the CFPS at reset is 105 decimal (69h), which equates to a 38.1 kHz output from starting conditions. The 48 MHz carrier is prescaled by the CFPS that is then divided by the 12x BAUD multiple.

## Figure 19-79. CFPS Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| CFPS     | CFPS     | CFPS     | CFPS     | CFPS     | CFPS     | CFPS     | CFPS     |
| R/W-69h  | R/W-69h  | R/W-69h  | R/W-69h  | R/W-69h  | R/W-69h  | R/W-69h  | R/W-69h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-75. CFPS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 7-0   | CFPS     | R/W    | 69h     | System clock frequency prescaler at (12x multiple). CFPS = 0 is not supported. Examples for CFPS values follow. Target Frequency (kHz) = 30, CFPS (decimal) = 133, Actual Frequency (kHz) = 30.08. Target Frequency (kHz) = 32.75, CFPS (decimal) = 122, Actual Frequency (kHz) = 32.79. Target Frequency (kHz) = 36, CFPS (decimal) = 111, Actual Frequency (kHz) = 36.04. Target Frequency (kHz) = 36.7, CFPS (decimal) = 109, Actual Frequency (kHz) = 36.69. Target Frequency (kHz) = 38, CFPS (decimal) = 105, Actual Frequency (kHz) = 38.1. Target Frequency (kHz) = 40, CFPS (decimal) = 100, Actual Frequency (kHz) = 40. Target Frequency (kHz) = 56.8, CFPS (decimal) = 70, Actual Frequency (kHz) = 57.14. |

## 19.5.1.47 RXFIFO\_LVL Register (offset = 64h) [reset = 0h]

RXFIFO\_LVL is shown in Figure 19-80 and described in Table 19-76.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-80. RXFIFO\_LVL Register

| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| RXFIFO_LVL | RXFIFO_LVL | RXFIFO_LVL | RXFIFO_LVL | RXFIFO_LVL | RXFIFO_LVL | RXFIFO_LVL | RXFIFO_LVL |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-76. RXFIFO\_LVL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description          |
|-------|------------|--------|---------|----------------------|
| 15-8  | RESERVED   | R      | 0h      |                      |
| 7-0   | RXFIFO_LVL | R      | 0h      | Level of the RX FIFO |

<!-- image -->

<!-- image -->

## 19.5.1.48 TXFIFO\_LVL Register (offset = 68h) [reset = 0h]

TXFIFO\_LVL is shown in Figure 19-81 and described in Table 19-77.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-81. TXFIFO\_LVL Register

| 15         | 14         | 13         | 12         | 11         | 10         | 9          | 8          |
|------------|------------|------------|------------|------------|------------|------------|------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
| TXFIFO_LVL | TXFIFO_LVL | TXFIFO_LVL | TXFIFO_LVL | TXFIFO_LVL | TXFIFO_LVL | TXFIFO_LVL | TXFIFO_LVL |
| R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-77. TXFIFO\_LVL Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description          |
|-------|------------|--------|---------|----------------------|
| 15-8  | RESERVED   | R      | 0h      |                      |
| 7-0   | TXFIFO_LVL | R      | 0h      | Level of the TX FIFO |

## 19.5.1.49 IER2 Register (offset = 6Ch) [reset = 0h]

IER2 is shown in Figure 19-82 and described in Table 19-78.

The IER2 enables RX/TX FIFOs empty corresponding interrupts. Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-82. IER2 Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9                | 8                |
|----------|----------|----------|----------|----------|----------|------------------|------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         | RESERVED         |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h             | R-0h             |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                | 0                |
|          |          | RESERVED |          |          |          | EN_TXFIFO_E MPTY | EN_RXFIFO_E MPTY |
|          |          | R-0h     |          |          |          | R/W-0h           | R/W-0h           |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-78. IER2 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                    |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------|
| 15-2  | RESERVED        | R      | 0h      |                                                                                                                |
| 1     | EN_TXFIFO_EMPTY | R/W    | 0h      | EN_TXFIFO_EMPTY. 0h = Disables EN_TXFIFO_EMPTY interrupt. 1h = Enables EN_TXFIFO_EMPTY interrupt.              |
| 0     | EN_RXFIFO_EMPTY | R/W    | 0h      | Number of bits by characters. 0h = Disables EN_RXFIFO_EMPTY interrupt. 1h = Enables EN_RXFIFO_EMPTY interrupt. |

<!-- image -->

<!-- image -->

## 19.5.1.50 ISR2 Register (offset = 70h) [reset = 0h]

ISR2 is shown in Figure 19-83 and described in Table 19-79.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The ISR2 displays the status of RX/TX FIFOs empty corresponding interrupts.

## Figure 19-83. ISR2 Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9                 | 8                 |
|----------|----------|----------|----------|----------|----------|-------------------|-------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED          | RESERVED          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h              | R-0h              |
| 7        | 6        | 5        | 4        | 3        | 2        | 1                 | 0                 |
|          |          | RESERVED |          |          |          | TXFIFO_EMPT Y_STS | RXFIFO_EMPT Y_STS |
|          |          | R-0h     |          |          |          | R/W-0h            | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-79. ISR2 Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                     |
|-------|------------------|--------|---------|-------------------------------------------------------------------------------------------------|
| 15-2  | RESERVED         | R      | 0h      |                                                                                                 |
| 1     | TXFIFO_EMPTY_STS | R/W    | 0h      | TXFIFO_EMPTY_STS. 0h = TXFIFO_EMPTY interrupt not pending. 1h = TXFIFO_EMPTY interrupt pending. |
| 0     | RXFIFO_EMPTY_STS | R/W    | 0h      | RXFIFO_EMPTY_STS. 0h = RXFIFO_EMPTY interrupt not pending. 1h = RXFIFO_EMPTY interrupt pending. |

## 19.5.1.51 FREQ\_SEL Register (offset = 74h) [reset = 0h]

FREQ\_SEL is shown in Figure 19-84 and described in Table 19-80.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-84. FREQ\_SEL Register

| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| FREQ_SEL | FREQ_SEL | FREQ_SEL | FREQ_SEL | FREQ_SEL | FREQ_SEL | FREQ_SEL | FREQ_SEL |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-80. FREQ\_SEL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                 |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------|
| 15-8  | RESERVED | R      | 0h      |                                                                                                                                             |
| 7-0   | FREQ_SEL | R/W    | 0h      | Sets the sample per bit if non default frequency is used. MDR3[1] must be set to 1 after this value is set. Must be equal or higher then 6. |

<!-- image -->

<!-- image -->

## 19.5.1.52 MDR3 Register (offset = 80h) [reset = 0h]

MDR3 is shown in Figure 19-85 and described in Table 19-81.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed. The DISABLE\_CIR\_RX\_DEMOD register bit will force the CIR receiver to bypass demodulation of received data if set. See the CIR Mode Block Components. The NONDEFAULT\_FREQ register bit allows the user to set sample per bit by writing it into FREQ\_SEL register. Set it if non-default (48 MHz) fclk frequency is used to achieve a less than 2% error rate. Changing this bit (to any value) will automatically disable the device by setting MDR[2:0] to 111 .

## Figure 19-85. MDR3 Register

| 15   | 14       | 13       | 12       | 11       | 10                    | 9                | 8                     |
|------|----------|----------|----------|----------|-----------------------|------------------|-----------------------|
|      | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED              | RESERVED         | RESERVED              |
| R-0h | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                  | R-0h             | R-0h                  |
| 7    | 6        | 5        | 4        | 3        | 2                     | 1                | 0                     |
|      |          | RESERVED |          |          | SET_DMA_TX_ THRESHOLD | NONDEFAULT _FREQ | DISABLE_CIR_ RX_DEMOD |
|      |          | R-0h     |          |          | R/W-0h                | R/W-0h           | R/W-0h                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-81. MDR3 Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                              |
|-------|-----------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-3  | RESERVED              | R      | 0h      |                                                                                                                                                                                          |
| 2     | SET_DMA_TX_THRESH OLD | R/W    | 0h      | SET_DMA_TX_THRESHOLD. 0h = Disable use of TX DMA Threshold register. Use 64-TX trigger as DMA threshold. 1h = Enable to set different TX DMA threshold in the TX DMA Threshold register. |
| 1     | NONDEFAULT_FREQ       | R/W    | 0h      | NONDEFAULT_FREQ. 0h = Disables using NONDEFAULT fclk frequencies. 1h = Enables using NONDEFAULT fclk frequencies (set FREQ_SEL and DLH/DLL).                                             |
| 0     | DISABLE_CIR_RX_DEM OD | R/W    | 0h      | DISABLE_CIR_RX_DEMOD. 0h = Enables CIR RX demodulation. 1h = Disables CIR RX demodulation.                                                                                               |

## 19.5.1.53 TX\_DMA\_THRESHOLD Register (offset = 84h) [reset = 0h]

TX\_DMA\_THRESHOLD is shown in Figure 19-86 and described in Table 19-82.

Refer to Section 19.3.7.1 to determine the mode(s) in which this register can be accessed.

## Figure 19-86. TX\_DMA\_THRESHOLD Register

| 15       | 14       | 13       | 12       | 11               | 10               | 9        | 8        |
|----------|----------|----------|----------|------------------|------------------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED         | RESERVED         | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h             | R-0h             | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3                | 2                | 1        | 0        |
| RESERVED | RESERVED |          |          | TX_DMA_THRESHOLD | TX_DMA_THRESHOLD |          |          |
| R-0h     | R-0h     |          |          | R/W-0h           | R/W-0h           |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 19-82. TX\_DMA\_THRESHOLD Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                                                                                                                                                                                                   |
|-------|------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-6  | RESERVED         | R      | 0h      |                                                                                                                                                                                                                                               |
| 5-0   | TX_DMA_THRESHOLD | R/W    | 0h      | Used to manually set the TX DMA threshold level. UART_MDR3[2] SET_TX_DMA_THRESHOLD must be 1 and must be value + tx_trigger_level = 64 (TX FIFO size). If not, 64_tx_trigger_level will be used without modifying the value of this register. |

<!-- image -->