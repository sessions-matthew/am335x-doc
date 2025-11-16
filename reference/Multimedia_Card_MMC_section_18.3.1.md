<!-- image -->

www.ti.com

## 18.3 Functional Description

One MMC/SD/SDIO host controller can support one MMC memory card, one SD card, or one SDIO card.

Other combinations (for example, two SD cards, one MMC card, and one SD card) are not supported through a single controller.

## 18.3.1 MMC/SD/SDIO Functional Modes

## 18.3.1.1 MMC/SD/SDIO Connected to an MMC, an SD Card, or an SDIO Card

Figure 18-4 shows the MMC/SD/SDIO1 and MMC/SD/SDIO2 host controllers connected to an MMC, an SD, or an SDIO card and its related external connections.

Figure 18-4. MMC/SD1/2 Connectivity to an MMC/SD Card

<!-- image -->

Figure 18-5. MMC/SD0 Connectivity to an MMC/SD Card

<!-- image -->

<!-- image -->

Figure 18-5 shows the MMC/SD/SDIO0 host controller connected to an MMC, SD, or SDIO card and its related external connections. Note that MMC/SD/SDIO0 uses the same signals as MMC/SD/SDIO1 and 2 but adds MMC\_POW.

The following MMC/SD/SDIO controller pins are used

- MMC\_CMD This pin is used for two-way communication between the connected card and the MMC/SD/SDIO controller. The MMC/SD/SDIO controller transmits commands to the card and the memory card drives responses to the commands on this pin.
- MMC\_DAT7-0 Depending on which type of card you are using, you may need to connect 1, 4, or 8 data lines. The number of DAT pins (the data bus width) is set by the Data Transfer Width (DTW) bit in the MMC control register (SD\_HCTL). For more information, see , MULTIMEDIA\_CARD Registers .
- MMC\_CLK This pin provides the clock to the memory card from the MMC/SD controller.
- MMC\_POW Used for MMC/SD card's cards on/off power supply control. When high, denotes power-on condition.
- MMC\_SDCD This input pin serves as the MMC/SD/SDIO carrier detect. This signal is received from a mechanical switch on the slot.
- MMC\_SDWP This input pin is used for the SD/SDIO card's write protect. This signal is received from a mechanical protect switch on the slot (system dependant). Applicable only for SD and SDIO cards that have a mechanical sliding tablet on the side of the card.

Note: The MMC\_CLK pin functions as an output but must be configured as an I/O to internally loopback the clock to time the inputs.

Table 18-7 provides a summary of these pins.

Table 18-7. MMC/SD/SDIO Controller Pins and Descriptions

| Pin         | Type   | 1-Bit Mode   | 4-Bit Mode   | 8-Bit Mode   | Reset Value    |
|-------------|--------|--------------|--------------|--------------|----------------|
| MMC_CLK (1) | O      | Clock Line   | Clock Line   | Clock Line   | High impedance |
| MMC_CMD     | I/O    | Command Line | Command Line | Command Line | High impedance |
| MMC_DAT0    | I/O    | Data Line 0  | Data Line 0  | Data Line 0  | 0              |
| MMC_DAT1    | I/O    | (not used)   | Data Line 1  | Data Line 1  | 0              |
| MMC_DAT2    | I/O    | (not used)   | Data Line 2  | Data Line 2  | 0              |
| MMC_DAT3    | I/O    | (not used)   | Data Line 3  | Data Line 3  | 0              |
| MMC_DAT4    | I/O    | (not used)   | (not used)   | Data Line 4  | 0              |
| MMC_DAT5    | I/O    | (not used)   | (not used)   | Data Line 5  | 0              |
| MMC_DAT6    | I/O    | (not used)   | (not used)   | Data Line 6  | 0              |
| MMC_DAT7    | I/O    | (not used)   | (not used)   | Data Line 7  | 0              |

(1) The MMC\_CLK pin functions as an output but must be configured as an I/O to internally loopback the clock to time the inputs.

## 18.3.1.2 Protocol and Data Format

The bus protocol between the MMC/SD/SDIO host controller and the card is message-based. Each message is represented by one of the following parts:

Command: A command starts an operation. The command is transferred serially from the \MMC/SD/SDIO host controller to the card on the mmc\_cmd line.

Response: A response is an answer to a command. The response is sent from the card to the MMC/SD/SDIO host controller. It is transferred serially on the mmc\_cmd line.

Data: Data are transferred from the MMC/SD/SDIO host controller to the card or from a card to the MMC/SD/SDIO host controller using the DATA lines.

Busy: The mmc\_dat0 signal is maintained low by the card as far as it is programming the data received.

CRC status: CRC result is sent by the card through the mmc\_dat0 line when executing a write transfer. In the case of transmission error, occurring on any of the active data lines, the card sends a negative CRC status on mmc\_dat0. In the case of successful transmission, over all active data lines, the card sends a positive CRC status on mmc\_dat0 and starts the data programming procedure.

<!-- image -->

www.ti.com

## 18.3.1.2.1 Protocol

There are two types of data transfer:

- Sequential operation
- Block-oriented operation

There are specific commands for each type of operation (sequential or block-oriented). See the Multimedia Card System Specification , the SD Memory Card Specifications , and the SDIO Card Specification, Part E1 for details about commands and programming sequences supported by the MMC, SD, and SDIO cards.

## CAUTION

Stream commands are supported only by MMC cards.

Figure 18-6 and Figure 18-7 show how sequential operations are defined. Sequential operation is only for 1-bit transfer and initiates a continuous data stream. The transfer terminates when a stop command follows on the mmc\_cmd line.

Figure 18-6. Sequential Read Operation (MMC Cards Only)

<!-- image -->

Figure 18-7. Sequential Write Operation (MMC Cards Only)

<!-- image -->

<!-- image -->

Figure 18-8 and Figure 18-9 show how multiple block-oriented operations are defined. A multiple blockoriented operation sends a data block plus CRC bits. The transfer terminates when a stop command follows on the mmc\_cmd line. These operations are available for all kinds of cards.

Figure 18-8. Multiple Block Read Operation (MMC Cards Only)

<!-- image -->

Figure 18-9. Multiple Block Write Operation (MMC Cards Only)

<!-- image -->

## NOTE:

1. The card busy signal is not always generated by the card; the previous examples show a particular case.
2. It is the software's responsibility to do a software reset after a data timeout to ensure that mmc\_clk is stopped. The software reset is done by setting bit 26 in the SD\_SYSCTL register to 1.
3. For multiblock transfer, and especially for MMC cards, you can abort a transfer without using a stop command. Use a CMD23 before a data transfer to define the number of blocks that will be transferred, then the transfer stops automatically after the last block (provided the MMC card supports this feature).

<!-- image -->

www.ti.com

## 18.3.1.2.2 Data Format

## Coding Scheme for Command Token

Command packets always start with 0 and end with 1. The second bit is a transmitter bit1 for a host command. The content is the command index (coded by 6 bits) and an argument (for example, an address), coded by 32 bits. The content is protected by 7-bit CRC checksum (see Figure 18-10).

Figure 18-10. Command Token Format

<!-- image -->

| 0              | 1              | Content        | CRC            | 1              |
|----------------|----------------|----------------|----------------|----------------|
| 48 bits length | 48 bits length | 48 bits length | 48 bits length | 48 bits length |

## Coding Scheme for Response Token

Response packets always start with 0 and end with a 1. The second bit is a transmitter bit0 for a card response. The content is different for each type of response (R1, R2, R3, R4, R5, and R6) and the content is protected by 7-bit CRC checksum. Depending on the type of commands sent to the card, the SD\_CMD register must be configured differently to avoid false CRC or index errors to be flagged on command response (see Table 18-8). For more details about response types, see the Multimedia Card System Specification , the SD Memory Card Specification , or the SDIO Card Specification .

Table 18-8. Response Type Summary (1)

|   Response Type SD_CMD[17:16] RSP_TYPE |   Index Check Enable SD_CMD[20] CICE |   CRC Check Enable SD_CMD[19] CCCE | Name of Response Type        |
|----------------------------------------|--------------------------------------|------------------------------------|------------------------------|
|                                     00 |                                    0 |                                  0 | No Response                  |
|                                     01 |                                    0 |                                  1 | R2                           |
|                                     10 |                                    0 |                                  0 | R3 (R4 for SD cards)         |
|                                     10 |                                    1 |                                  1 | R1, R6, R5 (R7 for SD cards) |
|                                     11 |                                    1 |                                  1 | R1b, R5b                     |

(1) The MMC/SD/SDIO host controller assumes that both clocks may be switched off, whatever the value set in the SD\_SYSCONFIG[9:8] CLOCKACTIVITY bit.

Figure 18-11 and Figure 18-12 depict the 48-bit and 136-bit response packets.

Figure 18-11. 48-Bit Response Packet (R1, R3, R4, R5, R6)

<!-- image -->

Figure 18-12. 136-Bit Response Packet (R2)

<!-- image -->

| 0               | 0               | Content         | CRC             | 1               |
|-----------------|-----------------|-----------------|-----------------|-----------------|
| 136 bits length | 136 bits length | 136 bits length | 136 bits length | 136 bits length |

## Coding Scheme for Data Token

Data tokens always start with 0 and end with 1 (see Figure 18-13, Figure 18-14, Figure 18-15, and Figure 18-16).

<!-- image -->

Figure 18-13. Data Packet for Sequential Transfer (1-Bit)

<!-- image -->

Figure 18-15. Data Packet for Block Transfer (4-Bit)

<!-- image -->

<!-- image -->