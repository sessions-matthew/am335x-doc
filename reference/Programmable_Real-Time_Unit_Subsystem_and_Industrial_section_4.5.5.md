## 4.5.4.48 IEP\_DIGIO\_EXP Register (offset = 318h) [reset = 20h]

IEP\_DIGIO\_EXP is shown in Figure 4-239 and described in Table 4-227. DIGIO EXPANSION REGISTER

Figure 4-239. IEP\_DIGIO\_EXP Register

| 31           | 30           | 29           | 28       | 27       | 26           | 25               | 24                  |
|--------------|--------------|--------------|----------|----------|--------------|------------------|---------------------|
| RESERVED     | RESERVED     | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED         | RESERVED            |
| R-0h         | R-0h         | R-0h         | R-0h     | R-0h     | R-0h         | R-0h             | R-0h                |
| 23           | 22           | 21           | 20       | 19       | 18           | 17               | 16                  |
| RESERVED     | RESERVED     | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED         | RESERVED            |
| R-0h         | R-0h         | R-0h         | R-0h     | R-0h     | R-0h         | R-0h             | R-0h                |
| 15           | 14           | 13           | 12       | 11       | 10           | 9                | 8                   |
| RESERVED     | RESERVED     | EOF_SEL      | SOF_SEL  | SOF_DLY  | SOF_DLY      | SOF_DLY          | SOF_DLY             |
| R-0h         | R-0h         | R/W-0h       | R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h           | R/W-0h              |
| 7            | 6            | 5            | 4        | 3        | 2            | 1                | 0                   |
| OUTVALID_DLY | OUTVALID_DLY | OUTVALID_DLY |          | RESERVED | SW_OUTVALI D | OUTVALID_OV R_EN | SW_DATA_OU T_UPDATE |
| R/W-2h       | R/W-2h       | R/W-2h       |          | R-0h     | R/W-0h       | R/W-0h           | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 4-227. IEP\_DIGIO\_EXP Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                    |
|-------|---------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-14 | RESERVED            | R      | 0h      |                                                                                                                                                                                                                |
| 13    | EOF_SEL             | R/W    | 0h      | Defines the source of RX_EOF is used for pr1_edio_data_in capture. 0: PRU0_RX_EOF 1: PRU1_RX_EOF                                                                                                               |
| 12    | SOF_SEL             | R/W    | 0h      | Defines the source of RX_SOF is used for pr1_edio_data_in capture. 0: PRU0_RX_SOF 1: PRU1_RX_SOF                                                                                                               |
| 11-8  | SOF_DLY             | R/W    | 0h      | Defines the number of iep_clk cycles delay before pr1_edio_data_in captures.                                                                                                                                   |
| 7-4   | OUTVALID_DLY        | R/W    | 2h      | Define the number of iep_clk cycles delay on assertion of pr1_edio_outvalid. Minimum is 2 clock cycles Maximum is 16 clock cycles                                                                              |
| 3     | RESERVED            | R      | 0h      |                                                                                                                                                                                                                |
| 2     | SW_OUTVALID         | R/W    | 0h      | pr1_edio_outvalid = SW_OUTVALID, only if OUTVALID_OVR_EN is set.                                                                                                                                               |
| 1     | OUTVALID_OVR_EN     | R/W    | 0h      | Software override enable 0: Disable override 1: Enable override                                                                                                                                                |
| 0     | SW_DATA_OUT_UPDAT E | R/W    | 0h      | Defines the value of pr1_edio_data_out when OUTVALID_OVR_EN = 1. Read 1: Start bit event occurred Read 0: Start bit event has not occurred Write 1: pr1_edio_data_out by software data out. Write 0: No Effect |

## 4.5.5 PRU\_ICSS\_UART Registers

The system programmer has access to and control over any of the UART registers that are listed in Table 4-228. These registers, which control UART operations, receive data, and transmit data, are available at 32-bit addresses in the device memory map.

- RBR, THR, and DLL share one address. When the DLAB bit in LCR is 0, reading from the address gives the content of RBR, and writing to the address modifies THR. When DLAB = 1, all accesses at the address read or modify DLL. DLL can also be accessed with address offset 20h.
- IER and DLH share one address. When DLAB = 0, all accesses read or modify IER. When DLAB = 1,

<!-- image -->

<!-- image -->

## www.ti.com

all accesses read or modify DLH. DLH can also be accessed with address offset 24h.

- IIR and FCR share one address. Regardless of the value of the DLAB bit, reading from the address gives the content of IIR, and writing modifies FCR.

Table 4-228. PRU\_ICSS\_UART Registers

| Offset   | Acronym     | Register Description                          | Section          |
|----------|-------------|-----------------------------------------------|------------------|
| 0h       | RBR         | Receiver Buffer Register (read only)          | Section 4.5.5.1  |
| 0h       | THR         | Transmitter Holding Register (write only)     | Section 4.5.5.2  |
| 4h       | IER         | Interrupt Enable Register                     | Section 4.5.5.3  |
| 8h       | IIR         | Interrupt Identification Register (read only) | Section 4.5.5.4  |
| 8h       | FCR         | FIFO Control Register (write only)            | Section 4.5.5.5  |
| Ch       | LCR         | Line Control Register                         | Section 4.5.5.6  |
| 10h      | MCR         | Modem Control Register                        | Section 4.5.5.7  |
| 14h      | LSR         | Line Status Register                          | Section 4.5.5.8  |
| 18h      | MSR         | Modem Status Register                         | Section 4.5.5.9  |
| 1Ch      | SCR         | Scratch Pad Register                          | Section 4.5.5.10 |
| 20h      | DLL         | Divisor LSB Latch                             | Section 4.5.5.11 |
| 24h      | DLH         | Divisor MSB Latch                             | Section 4.5.5.11 |
| 28h      | REVID1      | Revision Identification Register 1            | Section 4.5.5.12 |
| 2Ch      | REVID2      | Revision Identification Register 2            | Section 4.5.5.12 |
| 30h      | PWREMU_MGMT | Power and Emulation Management Register       | Section 4.5.5.13 |
| 34h      | MDR         | Mode Definition Register                      | Section 4.5.5.14 |

## 4.5.5.1 Receiver Buffer Register (RBR)

The receiver buffer register (RBR) is shown in Figure 4-240 and described in Table 4-229.

The UART receiver section consists of a receiver shift register (RSR) and a receiver buffer register (RBR). When the UART is in the FIFO mode, RBR is a 16-byte FIFO. Timing is supplied by the 16x receiver clock or 13x receiver clock by programming OSM\_SEL bit field of MDR register. Receiver section control is a function of the line control register (LCR).

RSR receives serial data from the UARTn\_RXD pin. Then RSR concatenates the data and moves it into RBR (or the receiver FIFO). In the non-FIFO mode, when a character is placed in RBR and the receiver data-ready interrupt is enabled (DR = 1 in IER), an interrupt is generated. This interrupt is cleared when the character is read from RBR. In the FIFO mode, the interrupt is generated when the FIFO is filled to the trigger level selected in the FIFO control register (FCR), and it is cleared when the FIFO contents drop below the trigger level.

## Access considerations:

RBR, THR, and DLL share one address. To read RBR, write 0 to the DLAB bit in LCR, and read from the shared address. When DLAB = 0, writing to the shared address modifies THR. When DLAB = 1, all accesses at the shared address read or modify DLL.

DLL also has a dedicated address. If you use the dedicated address, you can keep DLAB = 0, so that RBR and THR are always selected at the shared address.

Figure 4-240. Receiver Buffer Register (RBR)

| 31            |               | 16            |
|---------------|---------------|---------------|
| Reserved      | Reserved      | Reserved      |
| R-0           | R-0           | R-0           |
| 15            | 8             | 0             |
| Reserved DATA | Reserved DATA | Reserved DATA |

R-0

LEGEND: R = Read only; - n = value after reset

Table 4-229. Receiver Buffer Register (RBR) Field Descriptions

| Bit   | Field    | Value   | Description   |
|-------|----------|---------|---------------|
| 31-8  | Reserved | 0       | Reserved      |
| 7-0   | DATA     | 0-FFh   | Received data |

R-0

<!-- image -->

www.ti.com

<!-- image -->

## 4.5.5.2 Transmitter Holding Register (THR)

The transmitter holding register (THR) is shown in Figure 4-241 and described in Table 4-230.

The UART transmitter section consists of a transmitter hold register (THR) and a transmitter shift register (TSR). When the UART is in the FIFO mode, THR is a 16-byte FIFO. Transmitter section control is a function of the line control register (LCR).

THR receives data from the internal data bus and when TSR is idle, the UART moves the data from THR to TSR. The UART serializes the data in TSR and transmits the data on the TX pin. In the non-FIFO mode, if THR is empty and the THR empty (THRE) interrupt is enabled (ETBEI = 1 in IER), an interrupt is generated. This interrupt is cleared when a character is loaded into THR or the interrupt identification register (IIR) is read. In the FIFO mode, the interrupt is generated when the transmitter FIFO is empty, and it is cleared when at least one byte is loaded into the FIFO or IIR is read.

## Access considerations:

RBR, THR, and DLL share one address. To load THR, write 0 to the DLAB bit of LCR, and write to the shared address. When DLAB = 0, reading from the shared address gives the content of RBR. When DLAB = 1, all accesses at the address read or modify DLL.

DLL also has a dedicated address. If you use the dedicated address, you can keep DLAB = 0, so that RBR and THR are always selected at the shared address.

Figure 4-241. Transmitter Holding Register (THR)

| 31       |          | 16       |
|----------|----------|----------|
| Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      |
| 15       | 8 7      | 0        |
| Reserved | DATA     |          |
| R-0      | W-0      |          |

LEGEND: R = Read only; W = Write only; n = value after reset

Table 4-230. Transmitter Holding Register (THR) Field Descriptions

| Bit   | Field    | Value   | Description      |
|-------|----------|---------|------------------|
| 31-8  | Reserved | 0       | Reserved         |
| 7-0   | DATA     | 0-FFh   | Data to transmit |

## 4.5.5.3 Interrupt Enable Register (IER)

The interrupt enable register (IER) is used to individually enable or disable each type of interrupt request that can be generated by the UART. Each interrupt request that is enabled in IER is forwarded to the CPU. IER is shown in Figure 4-242 and described in Table 4-231.

## Access considerations:

IER and DLH share one address. To read or modify IER, write 0 to the DLAB bit in LCR. When DLAB = 1, all accesses at the shared address read or modify DLH.

DLH also has a dedicated address. If you use the dedicated address, you can keep DLAB = 0, so that IER is always selected at the shared address.

Figure 4-242. Interrupt Enable Register (IER)

<!-- image -->

| 31       |          |          |          |          | 16       |          |
|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| 15       | 4        | 3        | 2        | 1        | 0        |          |
|          |          | Rsvd     | ELSI     | ETBEI    | ERBI     |          |
|          |          | R/W-0    | R/W-0    | R/W-0    | R/W-0    |          |

LEGEND: R/W = Read/Write; R = Read only; n = value after reset

Table 4-231. Interrupt Enable Register (IER) Field Descriptions

| Bit   | Field    | Value   | Description                                                                               |
|-------|----------|---------|-------------------------------------------------------------------------------------------|
| 31-4  | Reserved | 0       | Reserved                                                                                  |
| 3     | EDSSI    | 0       | Enable Modem Status Interrupt                                                             |
| 2     | ELSI     |         | Receiver line status interrupt enable.                                                    |
|       |          | 0       | Receiver line status interrupt is disabled.                                               |
|       |          | 1       | Receiver line status interrupt is enabled.                                                |
| 1     | ETBEI    |         | Transmitter holding register empty interrupt enable.                                      |
|       |          | 0       | Transmitter holding register empty interrupt is disabled.                                 |
|       |          | 1       | Transmitter holding register empty interrupt is enabled.                                  |
| 0     | ERBI     |         | Receiver data available interrupt and character timeout indication interrupt enable.      |
|       |          | 0       | Receiver data available interrupt and character timeout indication interrupt is disabled. |
|       |          | 1       | Receiver data available interrupt and character timeout indication interrupt is enabled.  |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.5.4 Interrupt Identification Register (IIR)

The interrupt identification register (IIR) is a read-only register at the same address as the FIFO control register (FCR), which is a write-only register. When an interrupt is generated and enabled in the interrupt enable register (IER), IIR indicates that an interrupt is pending in the IPEND bit and encodes the type of interrupt in the INTID bits. Reading IIR clears any THR empty (THRE) interrupts that are pending.

IIR is shown in Figure 4-243 and described in Figure 4-243.

The UART has an on-chip interrupt generation and prioritization capability that permits flexible communication with the CPU. The UART provides three priority levels of interrupts:

- Priority 1 - Receiver line status (highest priority)
- Priority 2 - Receiver data ready or receiver timeout
- Priority 3 - Transmitter holding register empty

The FIFOEN bit in IIR can be checked to determine whether the UART is in the FIFO mode or the nonFIFO mode.

## Access consideration:

IIR and FCR share one address. Regardless of the value of the DLAB bit in LCR, reading from the address gives the content of IIR, and writing to the address modifies FCR.

Figure 4-243. Interrupt Identification Register (IIR)

<!-- image -->

| 31       |          |          |          | 16       |          |
|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      | R-0      | R-0      | R-0      |
| 15       | 7 6      | 5 4      |          | 0        |          |
| Reserved | FIFOEN   | Reserved | INTID    | IPEND    |          |
| R-0      | R-0      | R-0      | R-0      | R-1      |          |

LEGEND: R = Read only; - n = value after reset

Table 4-232. Interrupt Identification Register (IIR) Field Descriptions

| Bit   | Field    | Value                       | Description                                                                                                                                                                                                                                               |
|-------|----------|-----------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | 0                           | Reserved                                                                                                                                                                                                                                                  |
| 7-6   | FIFOEN   | 0-3h 0                      | FIFOs enabled. Non-FIFO mode                                                                                                                                                                                                                              |
| 5-4   | Reserved | 0                           | Reserved                                                                                                                                                                                                                                                  |
| 3-1   | INTID    | 0-7h 0 1h 2h 3h 4h-5h 6h 7h | Interrupt type. See Table 4-233. Reserved Transmitter holding register empty (priority 3) Receiver data available (priority 2) Receiver line status (priority 1, highest) Reserved Character timeout indication (priority 2) Reserved                     |
| 0     | IPEND    |                             | Interrupt pending. When any UART interrupt is generated and is enabled in IER, IPEND is forced to 0. IPEND remains 0 until all pending interrupts are cleared or until a hardware reset occurs. If no interrupts are enabled, IPEND is never forced to 0. |

<!-- image -->

## Table 4-233. Interrupt Identification and Interrupt Clearing Information

| Priority Level   |   IIR Bits |   IIR Bits |   IIR Bits | IIR Bits   | Interrupt Type                       |                                                                                                                                                                                                                      | Event That Clears Interrupt                                                                                                                                                                                                   |
|------------------|------------|------------|------------|------------|--------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Priority Level   |          3 |          2 |          1 | 0          | Interrupt Type                       | Interrupt Source                                                                                                                                                                                                     | Event That Clears Interrupt                                                                                                                                                                                                   |
| None             |          0 |          0 |          0 | 1          | None                                 | None                                                                                                                                                                                                                 | None                                                                                                                                                                                                                          |
| 1                |          0 |          1 |          1 | 0          | Receiver line status                 | Overrun error, parity error, framing error, or break is detected.                                                                                                                                                    | For an overrun error, reading the line status register (LSR) clears the interrupt. For a parity error, framing error, or break, the interrupt is cleared only after all the erroneous data have been read.                    |
| 2                |          0 |          1 |          0 | 0          | Receiver data-ready                  | Non-FIFO mode: Receiver data is ready.                                                                                                                                                                               | Non-FIFO mode: The receiver buffer register (RBR) is read.                                                                                                                                                                    |
| 2                |          0 |          1 |          0 | 0          | Receiver data-ready                  | FIFO mode: Trigger level reached. If four character times (see Table 4-27) pass with no access of the FIFO, the interrupt is asserted again.                                                                         | FIFO mode: The FIFO drops below the trigger level. (1)                                                                                                                                                                        |
| 2                |          1 |          1 |          0 | 0          | Receiver time-out                    | FIFO mode only: No characters have been removed from or input to the receiver FIFO during the last four character times (see Table 4-27), and there is at least one character in the receiver FIFO during this time. | One of the following events: • A character is read from the receiver FIFO. (1) • A new character arrives in the receiver FIFO. • The URRST bit in the power and emulation management register (PWREMU_MGMT) is loaded with 0. |
| 3                |          0 |          0 |          1 |            | 0 Transmitter holding register empty | Non-FIFO mode: Transmitter holding register (THR) is empty. FIFO mode: Transmitter FIFO is empty.                                                                                                                    | A character is written to the transmitter holding register (THR) or the interrupt identification register (IIR) is read.                                                                                                      |

(1) In the FIFO mode, the receiver data-ready interrupt or receiver time-out interrupt is cleared by the CPU or by the DMA controller, whichever reads from the receiver FIFO first.

## 4.5.5.5 FIFO Control Register (FCR)

The FIFO control register (FCR) is a write-only register at the same address as the interrupt identification register (IIR), which is a read-only register. Use FCR to enable and clear the FIFOs and to select the receiver FIFO trigger level FCR is shown in Figure 4-244 and described in Table 4-234. The FIFOEN bit must be set to 1 before other FCR bits are written to or the FCR bits are not programmed.

## Access consideration:

IIR and FCR share one address. Regardless of the value of the DLAB bit, reading from the address gives the content of IIR, and writing to the address modifies FCR.

## CAUTION

For proper communication between the UART and the EDMA controller, the DMAMODE1 bit must be set to 1. Always write a 1 to the DMAMODE1 bit, and after a hardware reset, change the DMAMODE1 bit from 0 to 1.

<!-- image -->

www.ti.com

## Figure 4-244. FIFO Control Register (FCR)

31

16

Reserved

R-0

15

8

Reserved

R-0

7

6

5

4

3

2

1

0

RXFIFTL

Reserved

DMAMODE1 (1)

TXCLR

RXCLR

FIFOEN

W-0

R-0

W-0

W1C-0

W1C-0

W-0

LEGEND: R = Read only; W = Write only; W1C = Write 1 to clear (writing 0 has no effect); n = value after reset

(1) Always write 1 to the DMAMODE1 bit. After a hardware reset, change the DMAMODE1 bit from 0 to 1. DMAMODE = 1 is required for proper communication between the UART and the DMA controller.

Table 4-234. FIFO Control Register (FCR) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                                                                                                                                                                                      |
|-------|----------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | 0       | Reserved                                                                                                                                                                                                                                                                         |
| 7-6   | RXFIFTL  | 0-3h    | Receiver FIFO trigger level. RXFIFTL sets the trigger level for the receiver FIFO. When the trigger level is reached, a receiver data-ready interrupt is generated (if the interrupt request is enabled). Once the FIFO drops below the trigger level, the interrupt is cleared. |
|       |          | 0       | 1 byte                                                                                                                                                                                                                                                                           |
|       |          | 1h      | 4 bytes                                                                                                                                                                                                                                                                          |
|       |          | 2h      | 8 bytes                                                                                                                                                                                                                                                                          |
|       |          | 3h      | 14 bytes                                                                                                                                                                                                                                                                         |
| 5-4   | Reserved | 0       | Reserved                                                                                                                                                                                                                                                                         |
| 3     | DMAMODE1 |         | DMA MODE1 enable if FIFOs are enabled. Always write 1 to DMAMODE1. After a hardware reset, change DMAMODE1 from 0 to 1. DMAMOD1 = 1 is a requirement for proper communication between the UART and the EDMA controller.                                                          |
|       |          | 0       | DMA MODE1 is disabled.                                                                                                                                                                                                                                                           |
|       |          | 1       | DMA MODE1 is enabled.                                                                                                                                                                                                                                                            |
| 2     | TXCLR    |         | Transmitter FIFO clear. Write a 1 to TXCLR to clear the bit.                                                                                                                                                                                                                     |
|       |          | 0       | No effect.                                                                                                                                                                                                                                                                       |
|       |          | 1       | Clears transmitter FIFO and resets the transmitter FIFO counter. The shift register is not cleared.                                                                                                                                                                              |
| 1     | RXCLR    |         | Receiver FIFO clear. Write a 1 to RXCLR to clear the bit.                                                                                                                                                                                                                        |
|       |          | 0       | No effect.                                                                                                                                                                                                                                                                       |
|       |          | 1       | Clears receiver FIFO and resets the receiver FIFO counter. The shift register is not cleared.                                                                                                                                                                                    |
| 0     | FIFOEN   |         | Transmitter and receiver FIFOs mode enable. FIFOEN must be set before other FCR bits are written to or the FCR bits are not programmed. Clearing this bit clears the FIFO counters.                                                                                              |
|       |          | 0       | Non-FIFO mode. The transmitter and receiver FIFOs are disabled, and the FIFO pointers are cleared.                                                                                                                                                                               |
|       |          | 1       | FIFO mode. The transmitter and receiver FIFOs are enabled.                                                                                                                                                                                                                       |

## 4.5.5.6 Line Control Register (LCR)

The line control register (LCR) is shown in Figure 4-245 and described in Table 4-235.

The system programmer controls the format of the asynchronous data communication exchange by using LCR. In addition, the programmer can retrieve, inspect, and modify the content of LCR; this eliminates the need for separate storage of the line characteristics in system memory.

Figure 4-245. Line Control Register (LCR)

| 31       |          |          |          |          |          |          |          | 16       |          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
|          | R-0      |          |          |          |          |          |          |          |          |
| 15       | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 0        |          |
|          | Reserved | DLAB     | BC       | SP       | EPS      | PEN      | STB      | WLS      |          |
|          | R-0      | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0    |          |

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

Table 4-235. Line Control Register (LCR) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                                                                                                                                                                                                                          |
|-------|----------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | 0       | Reserved                                                                                                                                                                                                                                                                                                             |
| 7     | DLAB     |         | Divisor latch access bit. The divisor latch registers (DLL and DLH) can be accessed at dedicated addresses or at addresses shared by RBR, THR, and IER. Using the shared addresses requires toggling DLAB to change which registers are selected. If you use the dedicated addresses, you can keep DLAB = 0.         |
|       |          | 0       | Allows access to the receiver buffer register (RBR), the transmitter holding register (THR), and the interrupt enable register (IER) selected. At the address shared by RBR, THR, and DLL, the CPU can read from RBR and write to THR. At the address shared by IER and DLH, the CPU can read from and write to IER. |
|       |          | 1       | Allows access to the divisor latches of the baud generator during a read or write operation (DLL and DLH). At the address shared by RBR, THR, and DLL, the CPU can read from and write to DLL. At the address shared by IER and DLH, the CPU can read from and write to DLH.                                         |
| 6     | BC       |         | Break control.                                                                                                                                                                                                                                                                                                       |
|       |          | 0       | Break condition is disabled.                                                                                                                                                                                                                                                                                         |
|       |          | 1       | Break condition is transmitted to the receiving UART. A break condition is a condition where the UARTn_TXD signal is forced to the spacing (cleared) state.                                                                                                                                                          |
| 5     | SP       |         | Stick parity. The SP bit works in conjunction with the EPS and PEN bits. The relationship between the SP, EPS, and PEN bits is summarized in Table 4-236.                                                                                                                                                            |
|       |          | 0       | Stick parity is disabled.                                                                                                                                                                                                                                                                                            |
|       |          | 1       | Stick parity is enabled.                                                                                                                                                                                                                                                                                             |
|       |          |         | • When odd parity is selected (EPS = 0), the PARITY bit is transmitted and checked as set. • When even parity is selected (EPS = 1), the PARITY bit is transmitted and checked as cleared.                                                                                                                           |
| 4     | EPS      |         | Even parity select. Selects the parity when parity is enabled (PEN = 1). The EPS bit works in conjunction with the SP and PEN bits. The relationship between the SP, EPS, and PEN bits is summarized in Table 4-236.                                                                                                 |
|       |          | 0       | Odd parity is selected (an odd number of logic 1s is transmitted or checked in the data and PARITY bits).                                                                                                                                                                                                            |
|       |          | 1       | Even parity is selected (an even number of logic 1s is transmitted or checked in the data and PARITY bits).                                                                                                                                                                                                          |
| 3     | PEN      |         | Parity enable. The PEN bit works in conjunction with the SP and EPS bits. The relationship between the SP, EPS, and PEN bits is summarized in Table 4-236.                                                                                                                                                           |
|       |          | 0       | No PARITY bit is transmitted or checked.                                                                                                                                                                                                                                                                             |
|       |          | 1       | Parity bit is generated in transmitted data and is checked in received data between the last data word bit and the first STOP bit.                                                                                                                                                                                   |

<!-- image -->

<!-- image -->

Table 4-235. Line Control Register (LCR) Field Descriptions (continued)

| Bit   | Field   | Value   | Description                                                                                                                                                                                                                                                                                                                   |
|-------|---------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 2     | STB     |         | Number of STOP bits generated. STB specifies 1, 1.5, or 2 STOP bits in each transmitted character. When STB = 1, the WLS bit determines the number of STOP bits. The receiver clocks only the first STOP bit, regardless of the number of STOP bits selected. The number of STOP bits generated is summarized in Table 4-237. |
|       |         | 0       | 1 STOP bit is generated.                                                                                                                                                                                                                                                                                                      |
|       |         | 1       | WLS bit determines the number of STOP bits: • When WLS = 0, 1.5 STOP bits are generated. • When WLS = 1h, 2h, or 3h, 2 STOP bits are generated.                                                                                                                                                                               |
| 1-0   | WLS     | 0-3h    | Word length select. Number of bits in each transmitted or received serial character. When STB = 1, the WLS bit determines the number of STOP bits.                                                                                                                                                                            |
|       |         | 0       | 5 bits                                                                                                                                                                                                                                                                                                                        |
|       |         | 1h      | 6 bits                                                                                                                                                                                                                                                                                                                        |
|       |         | 2h      | 7 bits                                                                                                                                                                                                                                                                                                                        |
|       |         | 3h      | 8 bits                                                                                                                                                                                                                                                                                                                        |

Table 4-236. Relationship Between ST, EPS, and PEN Bits in LCR

| ST Bit   | EPS Bit   |   PEN Bit | Parity Option                                                            |
|----------|-----------|-----------|--------------------------------------------------------------------------|
| x        | x         |         0 | Parity disabled: No PARITY bit is transmitted or checked                 |
| 0        | 0         |         1 | Odd parity selected: Odd number of logic 1s                              |
| 0        | 1         |         1 | Even parity selected: Even number of logic 1s                            |
| 1        | 0         |         1 | Stick parity selected with PARITY bit transmitted and checked as set     |
| 1        | 1         |         1 | Stick parity selected with PARITY bit transmitted and checked as cleared |

Table 4-237. Number of STOP Bits Generated

|   STB Bit | WLS Bits   | Word Length Selected with WLS Bits   |   Number of STOP Bits Generated |   Baud Clock (BCLK) Cycles |
|-----------|------------|--------------------------------------|---------------------------------|----------------------------|
|         0 | x          | Any word length                      |                             1   |                         16 |
|         1 | 0h         | 5 bits                               |                             1.5 |                         24 |
|         1 | 1h         | 6 bits                               |                             2   |                         32 |
|         1 | 2h         | 7 bits                               |                             2   |                         32 |
|         1 | 3h         | 8 bits                               |                             2   |                         32 |

## 4.5.5.7 Modem Control Register (MCR)

The modem control register (MCR) is shown in Figure 4-246 and described in Table 4-238. The modem control register provides the ability to enable/disable the autoflow functions, and enable/disable the loopback function for diagnostic purposes.

Figure 4-246. Modem Control Register (MCR)

<!-- image -->

| 31       |          |          |          |          |          |          | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0      |          |          |          |          |          |          |          |
| 15       |          | 5        | 4        | 3        | 2        | 1        | 0        |
|          | Reserved | AFE (1)  | LOOP     | OUT2     | OUT1     | RTS (1)  | Rsvd     |
|          | R-0      | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R/W-0    | R-0      |

(1) All UARTs do not support this feature, see your device-specific data manual for supported features. If this feature is not available, this bit is reserved and should be cleared to 0.

Table 4-238. Modem Control Register (MCR) Field Descriptions

| Bit           | Field Value   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                       | Description                                                                                                                                                                                                                                                                                                                                                                                                                                       |               |
|---------------|---------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------|
| 31-6          | Reserved 0    | Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                          | Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                          |               |
| 5             | AFE           | Autoflow control enable. Autoflow control allows the UARTn_RTS and UARTn_CTS signals to provide handshaking between UARTs during data transfer. When AFE = 1, the RTS bit determines the autoflow control enabled. Note that all UARTs do not support this feature, see your device-specific data manual for supported features. If this feature is not available, this bit is reserved and should be cleared to 0. Autoflow control is disabled. | Autoflow control enable. Autoflow control allows the UARTn_RTS and UARTn_CTS signals to provide handshaking between UARTs during data transfer. When AFE = 1, the RTS bit determines the autoflow control enabled. Note that all UARTs do not support this feature, see your device-specific data manual for supported features. If this feature is not available, this bit is reserved and should be cleared to 0. Autoflow control is disabled. |               |
| 4             | LOOP          | Loop back mode enable. LOOP is used for the diagnostic testing using the loop back feature.                                                                                                                                                                                                                                                                                                                                                       | Loop back mode enable. LOOP is used for the diagnostic testing using the loop back feature.                                                                                                                                                                                                                                                                                                                                                       |               |
|               | 0             | Loop back mode is disabled.                                                                                                                                                                                                                                                                                                                                                                                                                       | Loop back mode is disabled.                                                                                                                                                                                                                                                                                                                                                                                                                       |               |
|               | 1             | Autoflow control is enabled:                                                                                                                                                                                                                                                                                                                                                                                                                      | Autoflow control is enabled:                                                                                                                                                                                                                                                                                                                                                                                                                      |               |
|               | •             | When RTS = 0, UARTn_CTS is only enabled.                                                                                                                                                                                                                                                                                                                                                                                                          | When RTS = 0, UARTn_CTS is only enabled.                                                                                                                                                                                                                                                                                                                                                                                                          |               |
|               | •             |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
|               |               | When RTS = 1, UARTn_RTS and UARTn_CTS are enabled.                                                                                                                                                                                                                                                                                                                                                                                                | When RTS = 1, UARTn_RTS and UARTn_CTS are enabled.                                                                                                                                                                                                                                                                                                                                                                                                |               |
|               | • The •       | The output of the transmitter shift register (TSR) is lopped back in to the receiver shift register (RSR)                                                                                                                                                                                                                                                                                                                                         | The output of the transmitter shift register (TSR) is lopped back in to the receiver shift register (RSR)                                                                                                                                                                                                                                                                                                                                         |               |
|               |               | input.                                                                                                                                                                                                                                                                                                                                                                                                                                            | input.                                                                                                                                                                                                                                                                                                                                                                                                                                            |               |
|               |               | UARTn_RXD pin is disconnected                                                                                                                                                                                                                                                                                                                                                                                                                     | UARTn_RXD pin is disconnected                                                                                                                                                                                                                                                                                                                                                                                                                     |               |
|               |               | is disabled, UARTn_CTS is only enabled.                                                                                                                                                                                                                                                                                                                                                                                                           | is disabled, UARTn_CTS is only enabled.                                                                                                                                                                                                                                                                                                                                                                                                           |               |
|               |               | UARTn_RTS                                                                                                                                                                                                                                                                                                                                                                                                                                         | UARTn_RTS                                                                                                                                                                                                                                                                                                                                                                                                                                         |               |
| 3             | 0             |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
| 2             | is            |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
| 1             |               |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
|               | 0             |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
|               |               | UARTn_RTS and UARTn_CTS are enabled.                                                                                                                                                                                                                                                                                                                                                                                                              | UARTn_RTS and UARTn_CTS are enabled.                                                                                                                                                                                                                                                                                                                                                                                                              |               |
|               | 1             |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
|               | 0             |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
| 0             |               |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
|               | Reserved      |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |                                                                                                                                                                                                                                                                                                                                                                                                                                                   |               |
|               | Reserved      | Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                          | Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                          | Reserved      |
| OUT2 OUT1 RTS | OUT2 OUT1 RTS | OUT2 OUT1 RTS                                                                                                                                                                                                                                                                                                                                                                                                                                     | OUT2 OUT1 RTS                                                                                                                                                                                                                                                                                                                                                                                                                                     | OUT2 OUT1 RTS |
|               |               | do not support this feature, see your device-specific data manual for supported features. If not available, this bit is reserved and should be cleared to 0.                                                                                                                                                                                                                                                                                      | do not support this feature, see your device-specific data manual for supported features. If not available, this bit is reserved and should be cleared to 0.                                                                                                                                                                                                                                                                                      |               |
|               |               | OUT2 Control Bit OUT1 Control Bit RTS control. When AFE = 1, the RTS bit determines the autoflow control enabled. Note that all UARTs this feature                                                                                                                                                                                                                                                                                                | OUT2 Control Bit OUT1 Control Bit RTS control. When AFE = 1, the RTS bit determines the autoflow control enabled. Note that all UARTs this feature                                                                                                                                                                                                                                                                                                |               |
|               | 0             | 0                                                                                                                                                                                                                                                                                                                                                                                                                                                 | 0                                                                                                                                                                                                                                                                                                                                                                                                                                                 | 0             |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.5.8 Line Status Register (LSR)

The line status register (LSR) is shown in Figure 4-247 and described in Table 4-239. LSR provides information to the CPU concerning the status of data transfers. LSR is intended for read operations only; do not write to this register. Bits 1 through 4 record the error conditions that produce a receiver line status interrupt.

Figure 4-247. Line Status Register (LSR)

| 31       |          |          |          |          |          |          |          |          | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      |
| 15       | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| Reserved |          | RXFIFOE  | TEMT     | THRE BI  |          | FE       | PE       | OE       | DR       |
|          | R-0      | R-0      | R-1      | R-1      | R-0      | R-0      | R-0      | R-0      | R-0      |

LEGEND: R = Read only; - n = value after reset

Table 4-239. Line Status Register (LSR) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                                                                                          |
|-------|----------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | 0       | Reserved                                                                                                                                                                             |
| 7     | RXFIFOE  |         | Receiver FIFO error. In non-FIFO mode:                                                                                                                                               |
|       |          | 0       | There has been no error, or RXFIFOE was cleared because the CPU read the erroneous character from the receiver buffer register (RBR).                                                |
|       |          | 1       | There is a parity error, framing error, or break indicator in the receiver buffer register (RBR).                                                                                    |
|       |          |         | In FIFO mode:                                                                                                                                                                        |
|       |          | 0       | There has been no error, or RXFIFOE was cleared because the CPU read the erroneous character from the receiver FIFO and there are no more errors in the receiver FIFO.               |
|       |          | 1       | At least one parity error, framing error, or break indicator in the receiver FIFO.                                                                                                   |
| 6     | TEMT     |         | Transmitter empty (TEMT) indicator.                                                                                                                                                  |
|       |          |         | In non-FIFO mode:                                                                                                                                                                    |
|       |          | 0       | Either the transmitter holding register (THR) or the transmitter shift register (TSR) contains a data character.                                                                     |
|       |          | 1       | Both the transmitter holding register (THR) and the transmitter shift register (TSR) are empty.                                                                                      |
|       |          |         | In FIFO mode:                                                                                                                                                                        |
|       |          | 0       | Either the transmitter FIFO or the transmitter shift register (TSR) contains a data character.                                                                                       |
|       |          | 1       | Both the transmitter FIFO and the transmitter shift register (TSR) are empty.                                                                                                        |
| 5     | THRE     |         | Transmitter holding register empty (THRE) indicator. If the THRE bit is set and the corresponding interrupt enable bit is set (ETBEI = 1 in IER), an interrupt request is generated. |
|       |          |         | In non-FIFO mode:                                                                                                                                                                    |
|       |          | 0       | Transmitter holding register (THR) is not empty. THR has been loaded by the CPU.                                                                                                     |
|       |          | 1       | Transmitter holding register (THR) is empty (ready to accept a new character). The content of THR has been transferred to the transmitter shift register (TSR).                      |
|       |          |         | In FIFO mode:                                                                                                                                                                        |
|       |          | 0       | Transmitter FIFO is not empty. At least one character has been written to the transmitter FIFO. You can write to the transmitter FIFO if it is not full.                             |
|       |          | 1       | Transmitter FIFO is empty. The last character in the FIFO has been transferred to the transmitter shift register (TSR).                                                              |

<!-- image -->

## Table 4-239. Line Status Register (LSR) Field Descriptions (continued)

| Bit   | Field   | Value   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|---------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 4     | BI      |         | Break indicator. The BI bit is set whenever the receive data input (UARTn_RXD) was held low for longer than a full-word transmission time. A full-word transmission time is defined as the total time to transmit the START, data, PARITY, and STOP bits. If the BI bit is set and the corresponding interrupt enable bit is set (ELSI = 1 in IER), an interrupt request is generated.                                                                         |
|       |         |         | In non-FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|       |         | 0       | No break has been detected, or the BI bit was cleared because the CPU read the erroneous character from the receiver buffer register (RBR).                                                                                                                                                                                                                                                                                                                    |
|       |         | 1       | A break has been detected with the character in the receiver buffer register (RBR).                                                                                                                                                                                                                                                                                                                                                                            |
|       |         |         | In FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|       |         | 0       | No break has been detected, or the BI bit was cleared because the CPU read the erroneous character from the receiver FIFO and the next character to be read from the FIFO has no break indicator.                                                                                                                                                                                                                                                              |
|       |         | 1       | A break has been detected with the character at the top of the receiver FIFO.                                                                                                                                                                                                                                                                                                                                                                                  |
| 3     | FE      |         | Framing error (FE) indicator. A framing error occurs when the received character does not have a valid STOP bit. In response to a framing error, the UART sets the FE bit and waits until the signal on the RX pin goes high. Once the RX signal goes high, the receiver is ready to detect a new START bit and receive new data. If the FE bit is set and the corresponding interrupt enable bit is set (ELSI = 1 in IER), an interrupt request is generated. |
|       |         |         | In non-FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|       |         | 0       | No framing error has been detected, or the FE bit was cleared because the CPU read the erroneous data from the receiver buffer register (RBR).                                                                                                                                                                                                                                                                                                                 |
|       |         | 1       | A framing error has been detected with the character in the receiver buffer register (RBR).                                                                                                                                                                                                                                                                                                                                                                    |
|       |         |         | In FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|       |         | 0       | No framing error has been detected, or the FE bit was cleared because the CPU read the erroneous data from the receiver FIFO and the next character to be read from the FIFO has no framing error.                                                                                                                                                                                                                                                             |
|       |         | 1       | A framing error has been detected with the character at the top of the receiver FIFO.                                                                                                                                                                                                                                                                                                                                                                          |
| 2     | PE      |         | Parity error (PE) indicator. A parity error occurs when the parity of the received character does not match the parity selected with the EPS bit in the line control register (LCR). If the PE bit is set and the corresponding interrupt enable bit is set (ELSI = 1 in IER), an interrupt request is generated.                                                                                                                                              |
|       |         |         | In non-FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|       |         | 0       | No parity error has been detected, or the PE bit was cleared because the CPU read the erroneous data from the receiver buffer register (RBR).                                                                                                                                                                                                                                                                                                                  |
|       |         | 1       | A parity error has been detected with the character in the receiver buffer register (RBR).                                                                                                                                                                                                                                                                                                                                                                     |
|       |         |         | In FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|       |         | 0       | No parity error has been detected, or the PE bit was cleared because the CPU read the erroneous data from the receiver FIFO and the next character to be read from the FIFO has no parity error.                                                                                                                                                                                                                                                               |
|       |         | 1       | A parity error has been detected with the character at the top of the receiver FIFO.                                                                                                                                                                                                                                                                                                                                                                           |
| 1     | OE      |         | Overrun error (OE) indicator. An overrun error in the non-FIFO mode is different from an overrun error in the FIFO mode. If the OE bit is set and the corresponding interrupt enable bit is set (ELSI = 1 in IER), an interrupt request is generated.                                                                                                                                                                                                          |
|       |         |         | In non-FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|       |         | 0       | No overrun error has been detected, or the OE bit was cleared because the CPU read the content of the line status register (LSR).                                                                                                                                                                                                                                                                                                                              |
|       |         | 1       | Overrun error has been detected. Before the character in the receiver buffer register (RBR) could be read, it was overwritten by the next character arriving in RBR.                                                                                                                                                                                                                                                                                           |
|       |         |         | In FIFO mode:                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|       |         | 0       | No overrun error has been detected, or the OE bit was cleared because the CPU read the content of the line status register (LSR).                                                                                                                                                                                                                                                                                                                              |
|       |         | 1       | Overrun error has been detected. If data continues to fill the FIFO beyond the trigger level, an overrun error occurs only after the FIFO is full and the next character has been completely received in the shift register. An overrun error is indicated to the CPU as soon as it happens. The new character overwrites the character in the shift register, but it is not transferred to the FIFO.                                                          |

<!-- image -->

## Table 4-239. Line Status Register (LSR) Field Descriptions (continued)

| Bit   | Field   | Value   | Description                                                                                                                                                                                                                                                         |
|-------|---------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0     | DR      |         | Data-ready (DR) indicator for the receiver. If the DR bit is set and the corresponding interrupt enable bit is set (ERBI = 1 in IER), an interrupt request is generated.                                                                                            |
|       |         |         | In non-FIFO mode:                                                                                                                                                                                                                                                   |
|       |         | 0       | Data is not ready, or the DR bit was cleared because the character was read from the receiver buffer register (RBR).                                                                                                                                                |
|       |         | 1       | Data is ready. A complete incoming character has been received and transferred into the receiver buffer register (RBR).                                                                                                                                             |
|       |         |         | In FIFO mode:                                                                                                                                                                                                                                                       |
|       |         | 0       | Data is not ready, or the DR bit was cleared because all of the characters in the receiver FIFO have been read.                                                                                                                                                     |
|       |         | 1       | Data is ready. There is at least one unread character in the receiver FIFO. If the FIFO is empty, the DR bit is set as soon as a complete incoming character has been received and transferred into the FIFO. The DR bit remains set until the FIFO is empty again. |

## 4.5.5.9 Modem Status Register (MSR)

The Modem status register (MSR) is shown in Figure 4-248 and described in Table 4-240. MSR provides information to the CPU concerning the status of modem control signals. MSR is intended for read operations only; do not write to this register.

Figure 4-248. Modem Status Register (MSR)

<!-- image -->

| 31       |          |          |          |          |          |          |          | 16       |          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      |
| 15       | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |          |
| Reserved | CD       | RI DSR   | CTS      |          | DCD      | TERI     | DDSR     | DCTS     |          |
| R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      | R-0      |          |

LEGEND: R = Read only; - n = value after reset

Table 4-240. Modem Status Register (MSR) Field Descriptions

| Bit   | Field    |   Value | Description                                                                                                                                                                                                                                                                                                                    |
|-------|----------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved |       0 | Reserved                                                                                                                                                                                                                                                                                                                       |
| 7     | CD       |       0 | Complement of the Carrier Detect input. When the UART is in the diagnostic test mode (loopback mode MCR[4] = 1), this bit is equal to the MCR bit 3 (OUT2).                                                                                                                                                                    |
| 6     | RI       |       0 | Complement of the Ring Indicator input. When the UART is in the diagnostic test mode (loopback mode MCR[4] = 1), this bit is equal to the MCR bit 2 (OUT1).                                                                                                                                                                    |
| 5     | DSR      |       0 | Complement of the Data Set Ready input. When the UART is in the diagnostic test mode (loopback mode MCR[4] = 1), this bit is equal to the MCR bit 0 (DTR).                                                                                                                                                                     |
| 4     | CTS      |       0 | Complement of the Clear To Send input. When the UART is in the diagnostic test mode (loopback mode MCR[4] = 1), this bit is equal to the MCR bit 1 (RTS).                                                                                                                                                                      |
| 3     | DCD      |       0 | Change in DCD indicator bit. DCD indicates that the DCD input has changed state since the last time it was read by the CPU. When DCD is set and the modem status interrupt is enabled, a modem status interrupt is generated.                                                                                                  |
| 2     | TERI     |       0 | Trailing edge of RI (TERI) indicator bit. TERI indicates that the RI input has changed from a low to a high. When TERI is set and the modem status interrupt is enabled, a modem status interrupt is generated.                                                                                                                |
| 1     | DDSR     |       0 | Change in DSR indicator bit. DDSR indicates that the DSR input has changed state since the last time it was read by the CPU. When DDSR is set and the modem status interrupt is enabled, a modem status interrupt is generated.                                                                                                |
| 0     | DCTS     |       0 | Change in CTS indicator bit. DCTS indicates that the CTS input has changed state since the last time it was read by the CPU. When DCTS is set (autoflow control is not enabled and the modem status interrupt is enabled), a modem status interrupt is generated. When autoflow control is enabled, no interrupt is generated. |

<!-- image -->

<!-- image -->

www.ti.com

## 4.5.5.10 Scratch Pad Register (SCR)

The Scratch Pad register (SCR) is shown in Figure 4-249 and described in Table 4-241. SCR is intended for programmer's use as a scratch pad. It temporarily holds the programmer's data without affecting UART operation.

Figure 4-249. Scratch Pad Register (SCR)

| 31       |          | 16       |
|----------|----------|----------|
| Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      |
| 15       | 8 7      | 0        |
| Reserved | SCR      |          |
| R-0      | R-0      |          |

LEGEND: R = Read only; - n = value after reset

Table 4-241. Scratch Pad Register (MSR) Field Descriptions

| Bit   | Field    |   Value | Description                                                                                                                                                                |
|-------|----------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved |       0 | Reserved                                                                                                                                                                   |
| 7-0   | SCR      |       0 | These bits are intended for the programmer's use as a scratch pad in the sense that it temporarily holds the programmer's data without affecting any other UART operation. |

## 4.5.5.11 Divisor Latches (DLL and DLH)

Two 8-bit register fields (DLL and DLH), called divisor latches, store the 16-bit divisor for generation of the baud clock in the baud generator. The latches are in DLH and DLL. DLH holds the most-significant bits of the divisor, and DLL holds the least-significant bits of the divisor. These divisor latches must be loaded during initialization of the UART in order to ensure desired operation of the baud generator. Writing to the divisor latches results in two wait states being inserted during the write access while the baud generator is loaded with the new value.

## Access considerations:

- RBR, THR, and DLL share one address. When DLAB = 1 in LCR, all accesses at the shared address are accesses to DLL. When DLAB = 0, reading from the shared address gives the content of RBR, and writing to the shared address modifies THR.
- IER and DLH share one address. When DLAB = 1 in LCR, accesses to the shared address read or modify to DLH. When DLAB = 0, all accesses at the shared address read or modify IER.

DLL and DLH also have dedicated addresses. If you use the dedicated addresses, you can keep the DLAB bit cleared, so that RBR, THR, and IER are always selected at the shared addresses.

The divisor LSB latch (DLL) is shown in Figure 4-250 and described in Table 4-242. The divisor MSB latch (DLH) is shown in Figure 4-251 and described in Table 4-243.

<!-- image -->

www.ti.com

| Figure 4-250. Divisor LSB Latch (DLL)   | Figure 4-250. Divisor LSB Latch (DLL)   | Figure 4-250. Divisor LSB Latch (DLL)   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      |                                         | 16                                      |
| Reserved                                | Reserved                                | Reserved                                |
| R-0                                     | R-0                                     | R-0                                     |
| 15                                      | 8                                       | 0                                       |
| Reserved DLL                            | Reserved DLL                            | Reserved DLL                            |
| R-0                                     |                                         |                                         |

LEGEND: R/W = Read/Write; R = Read only; - n = value after reset

Table 4-242. Divisor LSB Latch (DLL) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                            |
|-------|----------|---------|------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | 0       | Reserved                                                                                                               |
| 7-0   | DLL      | 0-Fh    | The 8 least-significant bits (LSBs) of the 16-bit divisor for generation of the baud clock in the baud rate generator. |

Figure 4-251. Divisor MSB Latch (DLH)

| 31                                                               | 16       |          |
|------------------------------------------------------------------|----------|----------|
| Reserved                                                         | Reserved | Reserved |
| R-0                                                              | R-0      | R-0      |
| 15 8                                                             |          | 0        |
| Reserved                                                         | DLH      |          |
| R-0                                                              | R/W-0    |          |
| LEGEND: R/W = Read/Write; R = Read only; - n = value after reset |          |          |

Table 4-243. Divisor MSB Latch (DLH) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                           |
|-------|----------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved | 0       | Reserved                                                                                                              |
| 7-0   | DLH      | 0-Fh    | The 8 most-significant bits (MSBs) of the 16-bit divisor for generation of the baud clock in the baud rate generator. |

<!-- image -->

## 4.5.5.12 Revision Identification Registers (REVID1 and REVID2)

The revision identification registers (REVID1 and REVID2) contain peripheral identification data for the peripheral. REVID1 is shown in Figure 4-252 and described in Table 4-244. REVID2 is shown in Figure 4253 and described in Table 4-245.

Figure 4-252. Revision Identification Register 1 (REVID1)

REVID1

R-1102 0002h

31

LEGEND: R = Read only; n = value after reset

## Table 4-244. Revision Identification Register 1 (REVID1) Field Descriptions

| Bit   | Field   | Value      | Description                      |
|-------|---------|------------|----------------------------------|
| 31-0  | REVID1  | 1102 0002h | Peripheral Identification Number |

Figure 4-253. Revision Identification Register 2 (REVID2)

|          | 31       |          | 16       |
|----------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved |
| R-0      | R-0      | R-0      | R-0      |
| 15       |          |          | 0        |
| Reserved | Reserved | REVID2   |          |
| R-0      |          | R-0      |          |

LEGEND: R = Read only; - n = value after reset

Table 4-245. Revision Identification Register 2 (REVID2) Field Descriptions

| Bit   | Field    |   Value | Description                      |
|-------|----------|---------|----------------------------------|
| 31-8  | Reserved |       0 | Reserved                         |
| 7-0   | REVID2   |       0 | Peripheral Identification Number |

0

## 4.5.5.13 Power and Emulation Management Register (PWREMU\_MGMT)

The power and emulation management register (PWREMU\_MGMT) is shown in Figure 4-254 and described in Table 4-246.

## Figure 4-254. Power and Emulation Management Register (PWREMU\_MGMT)

| 31                                                               |                                                                  |                                                                  |                                                                  |                                                                  | 16                                                               |
|------------------------------------------------------------------|------------------------------------------------------------------|------------------------------------------------------------------|------------------------------------------------------------------|------------------------------------------------------------------|------------------------------------------------------------------|
| Reserved                                                         | Reserved                                                         | Reserved                                                         | Reserved                                                         | Reserved                                                         | Reserved                                                         |
| R-0                                                              | R-0                                                              | R-0                                                              | R-0                                                              | R-0                                                              | R-0                                                              |
| 15                                                               | 14                                                               | 13                                                               | 12                                                               |                                                                  | 0                                                                |
| Rsvd                                                             | UTRST                                                            | URRST                                                            |                                                                  | Reserved                                                         | FREE                                                             |
| R/W-0                                                            | R/W-0                                                            | R/W-0                                                            |                                                                  | R-1                                                              | R/W-0                                                            |
| LEGEND: R/W = Read/Write; R = Read only; - n = value after reset | LEGEND: R/W = Read/Write; R = Read only; - n = value after reset | LEGEND: R/W = Read/Write; R = Read only; - n = value after reset | LEGEND: R/W = Read/Write; R = Read only; - n = value after reset | LEGEND: R/W = Read/Write; R = Read only; - n = value after reset | LEGEND: R/W = Read/Write; R = Read only; - n = value after reset |

Table 4-246. Power and Emulation Management Register (PWREMU\_MGMT) Field Descriptions

| Bit   | Field    | Value   | Description                                                                                                                                                                                                                            |
|-------|----------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved | 0       | Reserved                                                                                                                                                                                                                               |
| 15    | Reserved | 0       | Reserved. This bit must always be written with a 0.                                                                                                                                                                                    |
| 14    | UTRST    |         | UART transmitter reset. Resets and enables the transmitter.                                                                                                                                                                            |
|       |          | 0       | Transmitter is disabled and in reset state.                                                                                                                                                                                            |
|       |          | 1       | Transmitter is enabled.                                                                                                                                                                                                                |
| 13    | URRST    |         | UART receiver reset. Resets and enables the receiver.                                                                                                                                                                                  |
|       |          | 0       | Receiver is disabled and in reset state.                                                                                                                                                                                               |
|       |          | 1       | Receiver is enabled.                                                                                                                                                                                                                   |
| 12-1  | Reserved | 1       | Reserved                                                                                                                                                                                                                               |
| 0     | FREE     |         | Free-running enable mode bit. This bit determines the emulation mode functionality of the UART. When halted, the UART can handle register read/write requests, but does not generate any transmission/reception, interrupts or events. |
|       |          | 0       | If a transmission is not in progress, the UART halts immediately. If a transmission is in progress, the UART halts after completion of the one-word transmission.                                                                      |
|       |          | 1       | Free-running mode is enabled; UART continues to run normally.                                                                                                                                                                          |

<!-- image -->