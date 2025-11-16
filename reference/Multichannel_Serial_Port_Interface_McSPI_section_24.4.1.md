<!-- image -->

## www.ti.com

- Channel Configuration: Write MCSPI\_CH(i)CONF.
- Start the channel: Write 0000 0001h in MCSPI\_CH(i)CTRL.
- First write request: TX empty - Generate DMA write event/ polling TX empty flag by CPU to write First transmit word into MCSPI\_TX(i).
- End of transfer: Stop the channel by writing 0000 0000h in MCSPI\_CH(i)CTRL

The end of transfer depends on the transfer mode.

In multi-channel master mode, be careful not to overwrite the bits of other channels when initializing MCSPI\_IRQSTATUS and MCSPI\_IRQENABLE.

## 24.3.12 Interrupt and DMA Events

McSPI has two DMA requests (Rx and Tx) per channel. It also has one interrupt line for all the interrupt requests.

## 24.4 McSPI Registers

## 24.4.1 SPI Registers

Table 24-10 lists the memory-mapped registers for the SPI. All register offset addresses not listed in Table 24-10 should be considered as reserved locations and the register contents should not be modified.

Table 24-10. SPI Registers

| Offset   | Acronym         | Register Name                                 | Section           |
|----------|-----------------|-----------------------------------------------|-------------------|
| 0h       | MCSPI_REVISION  | McSPI revision register                       | Section 24.4.1.1  |
| 110h     | MCSPI_SYSCONFIG | McSPI system configuration register           | Section 24.4.1.2  |
| 114h     | MCSPI_SYSSTATUS | McSPI system status register                  | Section 24.4.1.3  |
| 118h     | MCSPI_IRQSTATUS | McSPI interrupt status register               | Section 24.4.1.4  |
| 11Ch     | MCSPI_IRQENABLE | McSPI interrupt enable register               | Section 24.4.1.5  |
| 124h     | MCSPI_SYST      | McSPI system register                         | Section 24.4.1.6  |
| 128h     | MCSPI_MODULCTRL | McSPI module control register                 | Section 24.4.1.7  |
| 12Ch     | MCSPI_CH0CONF   | McSPI channel 0 configuration register        | Section 24.4.1.8  |
| 130h     | MCSPI_CH0STAT   | McSPI channel 0 status register               | Section 24.4.1.9  |
| 134h     | MCSPI_CH0CTRL   | McSPI channel 0 control register              | Section 24.4.1.10 |
| 138h     | MCSPI_TX0       | McSPI channel 0 FIFO transmit buffer register | Section 24.4.1.11 |
| 13Ch     | MCSPI_RX0       | McSPI channel 0 FIFO receive buffer register  | Section 24.4.1.12 |
| 140h     | MCSPI_CH1CONF   | McSPI channel 1 configuration register        | Section 24.4.1.13 |
| 144h     | MCSPI_CH1STAT   | McSPI channel 1 status register               | Section 24.4.1.14 |
| 148h     | MCSPI_CH1CTRL   | McSPI channel 1 control register              | Section 24.4.1.15 |
| 14Ch     | MCSPI_TX1       | McSPI channel 1 FIFO transmit buffer register | Section 24.4.1.16 |
| 150h     | MCSPI_RX1       | McSPI channel 1 FIFO receive buffer register  | Section 24.4.1.17 |
| 154h     | MCSPI_CH2CONF   | McSPI channel 2 configuration register        | Section 24.4.1.18 |
| 158h     | MCSPI_CH2STAT   | McSPI channel 2 status register               | Section 24.4.1.19 |
| 15Ch     | MCSPI_CH2CTRL   | McSPI channel 2 control register              | Section 24.4.1.20 |
| 160h     | MCSPI_TX2       | McSPI channel 2 FIFO transmit buffer register | Section 24.4.1.21 |
| 164h     | MCSPI_RX2       | McSPI channel 2 FIFO receive buffer register  | Section 24.4.1.22 |
| 168h     | MCSPI_CH3CONF   | McSPI channel 3 configuration register        | Section 24.4.1.23 |
| 16Ch     | MCSPI_CH3STAT   | McSPI channel 3 status register               | Section 24.4.1.24 |
| 170h     | MCSPI_CH3CTRL   | McSPI channel 3 control register              | Section 24.4.1.25 |
| 174h     | MCSPI_TX3       | McSPI channel 3 FIFO transmit buffer register | Section 24.4.1.26 |
| 178h     | MCSPI_RX3       | McSPI channel 3 FIFO receive buffer register  | Section 24.4.1.27 |
| 17Ch     | MCSPI_XFERLEVEL | McSPI transfer levels register                | Section 24.4.1.28 |

## Table 24-10. SPI Registers (continued)

| Offset   | Acronym     | Register Name                                       | Section           |
|----------|-------------|-----------------------------------------------------|-------------------|
| 180h     | MCSPI_DAFTX | McSPI DMA address aligned FIFO transmitter register | Section 24.4.1.29 |
| 1A0h     | MCSPI_DAFRX | McSPI DMA address aligned FIFO receiver register    | Section 24.4.1.30 |

<!-- image -->

<!-- image -->

## 24.4.1.1 MCSPI\_REVISION Register (offset = 0h) [reset = 300000h]

MCSPI\_REVISION is shown in Figure 24-26 and described in Table 24-11.

The McSPI system configuration register (MCSPI\_REVISION) allows control of various parameters of the module interface. It is not sensitive to software reset.

Figure 24-26. MCSPI\_REVISION Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| SCHEME         | SCHEME         | RESERVED       | RESERVED       | FUNC           | FUNC           | FUNC           | FUNC           |
| R-0h           | R-0h           | R-0h           | R-0h           | R-30h          | R-30h          | R-30h          | R-30h          |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           |
| R-30h          | R-30h          | R-30h          | R-30h          | R-30h          | R-30h          | R-30h          | R-30h          |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| R_RTL          | R_RTL          | R_RTL          | R_RTL          | X_MAJOR        | X_MAJOR        | X_MAJOR        | X_MAJOR        |
| R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR |
| R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  | R/W-0h R/W-0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 24-11. MCSPI\_REVISION Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | SCHEME   | R      | 0h      | Used to distinguish between old scheme and current. 0h = Legacy scheme. 1h = Revision 0.8 scheme.                                                                 |
| 29-28 | RESERVED | R      | 0h      |                                                                                                                                                                   |
| 27-16 | FUNC     | R      | 30h     | Function indicates a software compatible module family. If there is no level of software compatibility a new Func number (and hence REVISION) should be assigned. |
| 15-11 | R_RTL    | R      | 0h      | R_RTL bit.                                                                                                                                                        |
| 10-8  | X_MAJOR  | R      | 0h      | X_MAJOR bit.                                                                                                                                                      |
| 7-6   | CUSTOM   | R/W    | 0h      | CUSTOM bit.                                                                                                                                                       |
| 5-0   | Y_MINOR  | R/W    | 0h      | Y_MINOR bit.                                                                                                                                                      |

## 24.4.1.2 MCSPI\_SYSCONFIG Register (offset = 110h) [reset = 0h]

MCSPI\_SYSCONFIG is shown in Figure 24-27 and described in Table 24-12.

The McSPI system configuration register (MCSPI\_SYSCONFIG) allows control of various parameters of the module interface. It is not sensitive to software reset.

Figure 24-27. MCSPI\_SYSCONFIG Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               |
| R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               | RESERVED               |
| R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   | R-0h                   |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY | RESERVED CLOCKACTIVITY |
| R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 | R/W-0h                 |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| RESERVED               | RESERVED               | RESERVED               | SIDLEMODE              | SIDLEMODE              | RESERVED               | SOFTRESET              | AUTOIDLE               |
| R-0h                   | R-0h                   | R-0h                   | R/W-0h                 | R/W-0h                 | R-0h                   | R/W-0h                 | R/W-0h                 |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 24-12. MCSPI\_SYSCONFIG Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 9-8   | CLOCKACTIVITY | R/W    | 0h      | Clocks activity during wake-up mode period. 0h = OCP and Functional clocks may be switched off. 1h = OCP clock is maintained. Functional clock may be switched-off. 2h = Functional clock is maintained. OCP clock may be switched-off. 3h = OCP and Functional clocks are maintained.                                                                                                                                                                            |
| 7-5   | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 4-3   | SIDLEMODE     | R/W    | 0h      | Power management. 0h = If an idle request is detected, the McSPI acknowledges it unconditionally and goes in Inactive mode. Interrupt, DMA requests are unconditionally de-asserted. 1h = If an idle request is detected, the request is ignored and keeps on behaving normally. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. 3h = Reserved. |
| 2     | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 1     | SOFTRESET     | R/W    | 0h      | Software reset. During reads it always returns 0. 0h = (write) Normal mode. 1h = (write) Set this bit to 1 to trigger a module reset. The bit is automatically reset by the hardware.                                                                                                                                                                                                                                                                             |
| 0     | AUTOIDLE      | R/W    | 0h      | Internal OCP Clock gating strategy. 0h = OCP clock is free-running. 1h = Automatic OCP clock gating strategy is applied, based on the OCP interface activity.                                                                                                                                                                                                                                                                                                     |

<!-- image -->

<!-- image -->

## 24.4.1.3 MCSPI\_SYSSTATUS Register (offset = 114h) [reset = 0h]

MCSPI\_SYSSTATUS is shown in Figure 24-28 and described in Table 24-13.

The McSPI system status register (MCSPI\_SYSSTATUS) provides status information about the module excluding the interrupt status information.

## Figure 24-28. MCSPI\_SYSSTATUS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24        |
|----------|----------|----------|----------|----------|----------|----------|-----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESETDONE |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-13. MCSPI\_SYSSTATUS Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                            |
|-------|-----------|--------|---------|----------------------------------------------------------------------------------------|
| 31-1  | RESERVED  | R      | 0h      |                                                                                        |
| 0     | RESETDONE | R      | 0h      | Internal Reset Monitoring. 0h = Internal module reset is on-going 1h = Reset completed |

## 24.4.1.4 MCSPI\_IRQSTATUS Register (offset = 118h) [reset = 0h]

MCSPI\_IRQSTATUS is shown in Figure 24-29 and described in Table 24-14.

The McSPI interrupt status register (MCSPI\_IRQSTATUS) regroups all the status of the module internal events that can generate an interrupt.

Figure 24-29. MCSPI\_IRQSTATUS Register

| 31       | 30       | 29             | 28        | 27            | 26       | 25             | 24        |
|----------|----------|----------------|-----------|---------------|----------|----------------|-----------|
| RESERVED | RESERVED | RESERVED       | RESERVED  | RESERVED      | RESERVED | RESERVED       | RESERVED  |
| R-0h     | R-0h     | R-0h           | R-0h      | R-0h          | R-0h     | R-0h           | R-0h      |
| 23       | 22       | 21             | 20        | 19            | 18       | 17             | 16        |
| RESERVED | RESERVED | RESERVED       | RESERVED  | RESERVED      | RESERVED | EOW            | RESERVED  |
| R-0h     | R-0h     | R-0h           | R-0h      | R-0h          | R-0h     | R/W-0h         | R-0h      |
| 15       | 14       | 13             | 12        | 11            | 10       | 9              | 8         |
| RESERVED | RX3_FULL | TX3_UNDERFL OW | TX3_EMPTY | RESERVED      | RX2_FULL | TX2_UNDERFL OW | TX2_EMPTY |
| R-0h     | R/W-0h   | R/W-0h         | R/W-0h    | R-0h          | R/W-0h   | R/W-0h         | R/W-0h    |
| 7        | 6        | 5              | 4         | 3             | 2        | 1              | 0         |
| RESERVED | RX1_FULL | TX1_UNDERFL OW | TX1_EMPTY | RX0_OVERFL OW | RX0_FULL | TX0_UNDERFL OW | TX0_EMPTY |
| R-0h     | R/W-0h   | R/W-0h         | R/W-0h    | R/W-0h        | R/W-0h   | R/W-0h         | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 24-14. MCSPI\_IRQSTATUS Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 17    | EOW           | R/W    | 0h      | End of word (EOW) count event when a channel is enabled using the FIFO buffer and the channel has sent the number of McSPI words defined by the MCSPI_XFERLEVEL[WCNT]. 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                                                                                    |
| 16    | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 15    | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 14    | RX3_FULL      | R/W    | 0h      | Receiver register is full or almost full. Only when Channel 3 is enabled. This bit indicate FIFO almost full status when built-in FIFO is used for receive register (MCSPI_CH3CONF[FFE3R] is set). 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                                                        |
| 13    | TX3_UNDERFLOW | R/W    | 0h      | Transmitter register underflow. Only when Channel 3 is enabled. The transmitter register is empty (not updated by Host or DMA with new data) before its time slot assignment. Exception: No TX_underflow event when no data has been loaded into the transmitter register since channel has been enabled. 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending. |

<!-- image -->

<!-- image -->

www.ti.com

Table 24-14. MCSPI\_IRQSTATUS Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    12 | TX3_EMPTY     | R/W    | 0h      | Transmitter register is empty or almost empty. This bit indicate FIFO almost full status when built-in FIFO is used for transmit register (MCSPI_CH3CONF[FFE3W] is set). Note: Enabling the channel automatically raises this event. 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending. |
|    11 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                   |
|    10 | RX2_FULL      | R/W    | 0h      | Receiver register full or almost full. Channel 2 This bit indicate FIFO almost full status when built-in FIFO is used for receive register (MCSPI_CH3CONF[FFE2R] is set). 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                            |
|     9 | TX2_UNDERFLOW | R/W    | 0h      | Transmitter register underflow. Channel 2 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                                                                                                                                            |
|     8 | TX2_EMPTY     | R/W    | 0h      | Transmitter register empty or almost empty. Channel 2. This bit indicate FIFO almost full status when built-in FIFO is used for transmit register (MCSPI_CH3CONF[FFE2W] is set). 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                     |
|     7 | RESERVED      | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                   |
|     6 | RX1_FULL      | R/W    | 0h      | Receiver register full or almost full. Channel 1. This bit indicate FIFO almost full status when built-in FIFO is use for receive register (MCSPI_CH3CONF[FFE1R] is set). 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                            |
|     5 | TX1_UNDERFLOW | R/W    | 0h      | Transmitter register underflow. Channel 1. 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                                                                                                                                           |
|     4 | TX1_EMPTY     | R/W    | 0h      | Transmitter register empty or almost empty. Channel 1. This bit indicate FIFO almost full status when built-in FIFO is use for transmit register (MCSPI_CH3CONF[FFE1W] is set). 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset.                                                                                 |

<!-- image -->

Table 24-14. MCSPI\_IRQSTATUS Register Field Descriptions (continued)

|   Bit | Field         | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                  |
|-------|---------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | RX0_OVERFLOW  | R/W    | 0h      | Receiver register overflow (slave mode only). Channel 0. 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                                                                        |
|     2 | RX0_FULL      | R/W    | 0h      | Receiver register full or almost full. Channel 0. Receiver register full or almost full. Channel 0 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                              |
|     1 | TX0_UNDERFLOW | R/W    | 0h      | Transmitter register underflow. Channel 0. 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending.                                                                                                                                      |
|     0 | TX0_EMPTY     | R/W    | 0h      | Transmitter register empty or almost empty. Channel 0. This bit indicate FIFO almost full status when built-in FIFO is use for transmit register (MCSPI_CH3CONF[FFE0W] is set). 0h (W) = Event status bit is unchanged. 0h (R) = Event false. 1h (W) = Event status bit is reset. 1h (R) = Event is pending. |

<!-- image -->

## 24.4.1.5 MCSPI\_IRQENABLE Register (offset = 11Ch) [reset = 0h]

MCSPI\_IRQENABLE is shown in Figure 24-30 and described in Table 24-15.

This McSPI interrupt enable register (MCSPI\_IRQENABLE) enables/disables the module internal sources of interrupt, on an event-by-event basis.

Figure 24-30. MCSPI\_IRQENABLE Register

| 31                     | 30                 | 29                    | 28                | 27                     | 26                 | 25       | 24                |
|------------------------|--------------------|-----------------------|-------------------|------------------------|--------------------|----------|-------------------|
| RESERVED               | RESERVED           | RESERVED              | RESERVED          | RESERVED               | RESERVED           | RESERVED | RESERVED          |
| 22                     | 22                 | 22                    | 22                | 22                     | 22                 | 22       | 22                |
| 23 21                  | 20                 | 19                    | 18                | 17                     | 16 EOWKE           | RESERVED | RESERVED          |
| R-0h                   | R-0h               | R-0h                  | R-0h              | R-0h                   | R-0h               | R/W-0h   | R-0h              |
|                        |                    |                       |                   |                        |                    | 15       | 14                |
| 13                     | 12                 | 11                    | 10                | 9                      | 8                  | RESERVED | RX3_FULL__E NABLE |
| TX3_UNDERFL OW__ENABLE | TX3_EMPTY__ ENABLE | RESERVED              | RX2_FULL__E NABLE | TX2_UNDERFL OW__ENABLE | TX2_EMPTY__ ENABLE | R-0h     | R/W-0h            |
| R/W-0h                 | R/W-0h             | R-0h                  | R/W-0h            | R/W-0h                 | R/W-0h             | 7        | 6                 |
| 5                      | 4                  | 3                     | 2                 | 1                      | 0                  | RESERVED | RX1_FULL__E NABLE |
| TX1_UNDERFL OW__ENABLE | TX1_EMPTY__ ENABLE | RX0_OVERFL OW__ENABLE | RX0_FULL__E NABLE | TX0_UNDERFL OW__ENABLE | TX0_EMPTY__ ENABLE | R-0h     | R/W-0h            |
| R/W-0h                 | R/W-0h             | R/W-0h                | R/W-0h            | R/W-0h                 | R/W-0h             |          |                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 24-15. MCSPI\_IRQENABLE Register Field Descriptions

| Bit   | Field                  | Type   | Reset   | Description                                                                                                                               |
|-------|------------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-18 | RESERVED               | R      | 0h      |                                                                                                                                           |
| 17    | EOWKE                  | R/W    | 0h      | End of word count interrupt enable. 0h = Interrupt is disabled. 1h = Interrupt is enabled.                                                |
| 16    | RESERVED               | R      | 0h      |                                                                                                                                           |
| 15    | RESERVED               | R      | 0h      |                                                                                                                                           |
| 14    | RX3_FULL__ENABLE       | R/W    | 0h      | MCSPI_RX3 receiver register full or almost full interrupt enable (channel 3). 0h = Interrupt is disabled. 1h = Interrupt is enabled.      |
| 13    | TX3_UNDERFLOW__EN ABLE | R/W    | 0h      | MCSPI_TX3 transmitter register underflow interrupt enable (channel 3). 0h = Interrupt is disabled. 1h = Interrupt is enabled.             |
| 12    | TX3_EMPTY__ENABLE      | R/W    | 0h      | MCSPI_TX3 transmitter register empty or almost empty interrupt enable (channel 3). 0h = Interrupt is disabled. 1h = Interrupt is enabled. |
| 11    | RESERVED               | R      | 0h      |                                                                                                                                           |
| 10    | RX2_FULL__ENABLE       | R/W    | 0h      | MCSPI_RX2 receiver register full or almost full interrupt enable (channel 2). 0h = Interrupt is disabled. 1h = Interrupt is enabled.      |
| 9     | TX2_UNDERFLOW__EN ABLE | R/W    | 0h      | MCSPI_TX2 transmitter register underflow interrupt enable (channel 2). 0h = Interrupt is disabled. 1h = Interrupt is enabled.             |

<!-- image -->

Table 24-15. MCSPI\_IRQENABLE Register Field Descriptions (continued)

|   Bit | Field                  | Type   | Reset   | Description                                                                                                                               |
|-------|------------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
|     8 | TX2_EMPTY__ENABLE      | R/W    | 0h      | MCSPI_TX2 transmitter register empty or almost empty interrupt enable (channel 2). 0h = Interrupt is disabled. 1h = Interrupt is enabled. |
|     7 | RESERVED               | R      | 0h      |                                                                                                                                           |
|     6 | RX1_FULL__ENABLE       | R/W    | 0h      | MCSPI_RX1 receiver register full or almost full interrupt enable (channel 1) 0h = Interrupt is disabled. 1h = Interrupt is enabled.       |
|     5 | TX1_UNDERFLOW__EN ABLE | R/W    | 0h      | MCSPI_TX1 transmitter register underflow interrupt enable (channel 1). 0h = Interrupt is disabled. 1h = Interrupt is enabled.             |
|     4 | TX1_EMPTY__ENABLE      | R/W    | 0h      | MCSPI_TX1 transmitter register empty or almost empty interrupt enable (channel 1). 0h = Interrupt is disabled. 1h = Interrupt is enabled. |
|     3 | RX0_OVERFLOW__ENA BLE  | R/W    | 0h      | MCSPI_RX0 receivier register overflow interrupt enable (channel 0). 0h = Interrupt is disabled. 1h = Interrupt is enabled.                |
|     2 | RX0_FULL__ENABLE       | R/W    | 0h      | MCSPI_RX0 receiver register full or almost full interrupt enable (channel 0). 0h = Interrupt is disabled. 1h = Interrupt is enabled.      |
|     1 | TX0_UNDERFLOW__EN ABLE | R/W    | 0h      | MCSPI_TX0 transmitter register underflow interrupt enable (channel 0). 0h = Interrupt is disabled. 1h = Interrupt is enabled.             |
|     0 | TX0_EMPTY__ENABLE      | R/W    | 0h      | MCSPI_TX0 transmitter register empty or almost empty interrupt enable (channel 0). 0h = Interrupt is disabled. 1h = Interrupt is enabled. |

<!-- image -->

www.ti.com

## 24.4.1.6 MCSPI\_SYST Register (offset = 124h) [reset = 0h]

MCSPI\_SYST is shown in Figure 24-31 and described in Table 24-16.

This McSPI system register (MCSPI\_SYST) is used to configure the system interconnect either internally to the peripheral bus or externally to the device I/O pads, when the module is configured in the system test (SYSTEST) mode.

## Figure 24-31. MCSPI\_SYST Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25         | 24         |
|----------|----------|----------|----------|----------|----------|------------|------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 23       | 22       | 21       | 20       | 19       | 18       | 17         | 16         |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   | RESERVED   |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       | R-0h       |
| 15       | 14       | 13       | 12       | 11       | 10       | 9          | 8          |
| RESERVED | RESERVED | RESERVED | RESERVED | SSB      | SPIENDIR | SPIDATDIR1 | SPIDATDIR0 |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1          | 0          |
| RESERVED | SPICLK   | SPIDAT_1 | SPIDAT_0 | SPIEN_3  | SPIEN_2  | SPIEN_1    | SPIEN_0    |
| R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h     | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-16. MCSPI\_SYST Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-12 | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 11    | SSB        | R/W    | 0h      | Set status bit. This bit must be cleared prior attempting to clear a status bit of the MCSPI_ IRQSTATUS register. 0h = No action. Writing 0 does not clear already set status bits. This bit must be cleared prior attempting to clear a status bit of the MCSPI_IRQSTATUS register. 1h = Writing 1 sets to 1 all status bits contained in the MCSPI_IRQSTATUS register. Writing 1 into this bit sets to 1 all status bits contained in the MCSPI_IRQSTATUS register. |
| 10    | SPIENDIR   | R/W    | 0h      | Sets the direction of the SPIEN [3:0] lines and SPICLK line. 0h = Output (as in master mode). 1h = Input (as in slave mode).                                                                                                                                                                                                                                                                                                                                          |
| 9     | SPIDATDIR1 | R/W    | 0h      | Sets the direction of the SPIDAT[1]. 0h = Output 1h = Input                                                                                                                                                                                                                                                                                                                                                                                                           |
| 8     | SPIDATDIR0 | R/W    | 0h      | Sets the direction of the SPIDAT[0]. 0h = Output 1h = Input                                                                                                                                                                                                                                                                                                                                                                                                           |
| 7     | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 6     | SPICLK     | R/W    | 0h      | SPICLK line (signal data value) 0h = If MCSPI_SYST[SPIENDIR] = 1 (input mode direction), this bit returns the value on the CLKSPI line (high or low), and a write into this bit has no effect. 1h = If MCSPI_SYST[SPIENDIR] = 0 (output mode direction), the CLKSPI line is driven high or low according to the value written into this register.                                                                                                                     |

## Table 24-16. MCSPI\_SYST Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                    |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     5 | SPIDAT_1 | R/W    | 0h      | SPIDAT[1] line (signal data value) 0h = If MCSPI_SYST[SPIDATDIR1] = 0 (output mode direction), the SPIDAT[1] line is driven high or low according to the value written into this register. 1h = If MCSPI_SYST[SPIDATDIR1] = 1 (input mode direction), this bit returns the value on the SPIDAT[1] line (high or low), and a write into this bit has no effect. |
|     4 | SPIDAT_0 | R/W    | 0h      | SPIDAT[0] line (signal data value) 0h = If MCSPI_SYST[SPIDATDIR0] = 0 (output mode direction), the SPIDAT[0] line is driven high or low according to the value written into this register. 1h = If MCSPI_SYST[SPIDATDIR0] = 1 (input mode direction), this bit returns the value on the SPIDAT[0] line (high or low), and a write into this bit has no effect. |
|     3 | SPIEN_3  | R/W    | 0h      | SPIEN[3] line (signal data value) 0h = If MCSPI_SYST[SPIENDIR] = 0 (output mode direction), the SPIENT[3] line is driven high or low according to the value written into this register. 1h = If MCSPI_SYST[SPIENDIR] = 1 (input mode direction), this bit returns the value on the SPIEN[3] line (high or low), and a write into this bit has no effect.       |
|     2 | SPIEN_2  | R/W    | 0h      | SPIEN[2] line (signal data value) 0h = If MCSPI_SYST[SPIENDIR] = 0 (output mode direction), the SPIENT[2] line is driven high or low according to the value written into this register. 1h = If MCSPI_SYST[SPIENDIR] = 1 (input mode direction), this bit returns the value on the SPIEN[2] line (high or low), and a write into this bit has no effect.       |
|     1 | SPIEN_1  | R/W    | 0h      | SPIEN[1] line (signal data value) 0h = If MCSPI_SYST[SPIENDIR] = 0 (output mode direction), the SPIENT[1] line is driven high or low according to the value written into this register. 1h = If MCSPI_SYST[SPIENDIR] = 1 (input mode direction), this bit returns the value on the SPIEN[1] line (high or low), and a write into this bit has no effect.       |
|     0 | SPIEN_0  | R/W    | 0h      | SPIEN[0] line (signal data value) 0h = If MCSPI_SYST[SPIENDIR] = 0 (output mode direction), the SPIENT[0] line is driven high or low according to the value written into this register. 1h = If MCSPI_SYST[SPIENDIR] = 1 (input mode direction), this bit returns the value on the SPIEN[0] line (high or low), and a write into this bit has no effect.       |

<!-- image -->

<!-- image -->

www.ti.com

## 24.4.1.7 MCSPI\_MODULCTRL Register (offset = 128h) [reset = 0x0000\_0004h]

MCSPI\_MODULCTRL is shown in Figure 24-32 and described in Table 24-17.

This McSPI module control register (MCSPI\_MODULCTRL) is used to configure the serial port interface.

## Figure 24-32. MCSPI\_MODULCTRL Register

| 31       | 30       | 29       | 28       | 27           | 26       | 25       | 24       |
|----------|----------|----------|----------|--------------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19           | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11           | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED     | RESERVED | RESERVED | FDAA     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h         | R-0h     | R-0h     | R/W-0h   |
| 7        | 6        | 5        | 4        | 3            | 2        | 1        | 0        |
| MOA      |          | INITDLY  |          | SYSTEM_TES T | MS       | PIN34    | SINGLE   |
| R/W-0h   |          | R/W-0h   |          | R/W-0h       | R/W-1h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 24-17. MCSPI\_MODULCTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 8     | FDAA     | R/W    | 0h      | FIFO DMA Address 256 bit aligned. This register is used when a FIFO is managed by the module and DMA connected to the controller provides only 256 bit aligned address. If this bit is set the enabled channel which uses the FIFO has its datas managed through MCSPI_DAFTX and MCSPI_DAFRX registers instead of MCSPI_TX(i) and MCSPI_RX(i) registers. 0h = FIFO data managed by MCSPI_TX(i) and MCSPI_RX(i) registers. 1h = FIFO data managed by MCSPI_DAFTX and MCSPI_DAFRX registers.                                                                                                                                             |
| 7     | MOA      | R/W    | 0h      | Multiple word ocp access. This register can only be used when a channel is enabled using a FIFO. It allows the system to perform multiple SPI word access for a single 32 bit OCP word access. This is possible for WL less than 16. 0h = Multiple word access disabled 1h = Multiple word access enabled with FIFO                                                                                                                                                                                                                                                                                                                    |
| 6-4   | INITDLY  | R/W    | 0h      | Initial SPI delay for first transfer. This register is an option only available in SINGLE master mode, The controller waits for a delay to transmit the first SPI word after channel enabled and corresponding TX register filled. This delay is based on SPI output frequency clock, No clock output provided to the boundary and chip select is not active in 4 pin mode within this period. 0h = No delay for first SPI transfer 1h = The controller wait 4 SPI bus clock 2h = The controller wait 8 SPI bus clock 3h = The controller wait 16 SPI bus clock 4h = The controller wait 32 SPI bus clock 5h = Reserved from 5h to Fh. |

<!-- image -->

Table 24-17. MCSPI\_MODULCTRL Register Field Descriptions (continued)

|   Bit | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                          |
|-------|-------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | SYSTEM_TEST | R/W    | 0h      | Enables the system test mode 0h = Functional mode 1h = System test mode (SYSTEST)                                                                                                                                                                                                                                    |
|     2 | MS          | R/W    | 1h      | Master/ Slave 0h = Master - The module generates the SPICLK and SPIEN[3:0] 1h = Slave - The module receives the SPICLK and SPIEN[3:0]                                                                                                                                                                                |
|     1 | PIN34       | R/W    | 0h      | Pin mode selection. This register is used to configure the SPI pin mode, in master or slave mode. If asserted the controller only use SIMO,SOMI and SPICLK clock pin for SPI transfers. 0h = SPIEN is used as a chip select. 1h = SPIEN is not used. In this mode all related option to chip select have no meaning. |
|     0 | SINGLE      | R/W    | 0h      | Single channel / Multi Channel (master mode only). 0h = More than one channel will be used in master mode. 1h = Only one channel will be used in master mode. This bit must be set in Force SPIEN mode. For slave mode, set this bit to 0                                                                            |

<!-- image -->

## 24.4.1.8 MCSPI\_CH0CONF Register (offset = 12Ch) [reset = 0x0006\_0000h]

MCSPI\_CH0CONF is shown in Figure 24-33 and described in Table 24-18.

The McSPI channel 0 configuration register (MCSPI\_CH0CONF) is used to configure channel 0.

## Figure 24-33. MCSPI\_CH0CONF Register

| 31       | 30       | 29            | 28            | 27            | 26            | 25            | 24            |
|----------|----------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED | RESERVED | CLKG          | FFER          | FFEW          | TCS           | TCS           | SBPOL         |
| R-0h     | R-0h     | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 23       | 22       | 21            | 20            | 19            | 18            | 17            | 16            |
| SBE      | SPIENSLV | SPIENSLV      | FORCE         | TURBO         | IS            | DPE1          | DPE0          |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-1h        | R/W-1h        | R/W-0h        |
| 15       | 14       | 13            | 12            | 11            | 10            | 9             | 8             |
| DMAR     | DMAW     | DMAW          | WL            | WL            | WL            | WL            | WL            |
| R/W-0h   | R/W-0h   | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h |
| 7        | 6        | 5             | 4             | 3             | 2             | 1             | 0             |
| WL       | EPOL     | CLKD          | CLKD          | CLKD          | CLKD          | POL           | PHA           |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-18. MCSPI\_CH0CONF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 29    | CLKG     | R/W    | 0h      | Clock divider granularity. This register defines the granularity of channel clock divider: power of two or one clock cycle granularity. When this bit is set the register MCSPI_CHCTRL[EXTCLK] must be configured to reach a maximum of 4096 clock divider ratio. Then The clock divider ratio is a concatenation of MCSPI_CHCONF[CLKD] and MCSPI_CHCTRL[EXTCLK] values. 0h = Clock granularity of power of 2 1h = 1 clock cycle granularity |
| 28    | FFER     | R/W    | 0h      | FIFO enabled for receive. Only one channel can have this bit set. 0h = The buffer is not used to receive data. 1h = The buffer is used to receive data.                                                                                                                                                                                                                                                                                      |
| 27    | FFEW     | R/W    | 0h      | FIFO enabled for transmit. Only one channel can have this bit set. 0h = The buffer is not used to transmit data. 1h = The buffer is used to transmit data.                                                                                                                                                                                                                                                                                   |
| 26-25 | TCS      | R/W    | 0h      | Chip select time control. These two bits define the number of interface clock cycles between CS toggling and first or last edge of SPI clock. 0h = 0.5 clock cycles 1h = 1.5 clock cycles 2h = 2.5 clock cycles 3h = 3.5 clock cycles                                                                                                                                                                                                        |
| 24    | SBPOL    | R/W    | 0h      | Start bit polarity. 0h = Start bit polarity is held to 0 during SPI transfer. 1h = Start bit polarity is held to 1 during SPI transfer.                                                                                                                                                                                                                                                                                                      |
| 23    | SBE      | R/W    | 0h      | Start bit enable for SPI transfer. 0h = Default SPI transfer length as specified by WL bit field. 1h = Start bit D/CX added before SPI transfer. Polarity is defined by MCSPI_CH0CONF[SBPOL].                                                                                                                                                                                                                                                |

<!-- image -->

Table 24-18. MCSPI\_CH0CONF Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 22-21 | SPIENSLV | R/W    | 0h      | Channel 0 only and slave mode only: SPI slave select signal detection. Reserved bits (read returns 0) for other cases. 0h = Detection enabled only on SPIEN[0] 1h = Detection enabled only on SPIEN[1] 2h = Detection enabled only on SPIEN[2] 3h = Detection enabled only on SPIEN[3]                                                                              |
| 20    | FORCE    | R/W    | 0h      | Manual SPIEN assertion to keep SPIEN active between SPI words (single channel master mode only). 0h = Writing 0 into this bit drives low the SPIEN line when MCSPI_CHCONF0[EPOL]=0, and drives it high when MCSPI_CHCONF0[EPOL]=1. 1h = Writing 1 into this bit drives high the SPIEN line when MCSPI_CHCONF0[EPOL]=0, and drives it low when MCSPI_CHCONF0[EPOL]=1 |
| 19    | TURBO    | R/W    | 0h      | Turbo mode. 0h = Turbo is deactivated (recommended for single SPI word transfer). 1h = Turbo is activated to maximize the throughput for multi-SPI word transfers.                                                                                                                                                                                                  |
| 18    | IS       | R/W    | 1h      | Input select 0h = Data line 0 (SPIDAT[0]) selected for reception. 1h = Data line 1 (SPIDAT[1]) selected for reception.                                                                                                                                                                                                                                              |
| 17    | DPE1     | R/W    | 1h      | Transmission enable for data line 1 (SPIDATAGZEN[1]) 0h = Data line 1 (SPIDAT[1]) selected for transmission 1h = No transmission on data line 1 (SPIDAT[1])                                                                                                                                                                                                         |
| 16    | DPE0     | R/W    | 0h      | Transmission enable for data line 0 (SPIDATAGZEN[0]) 0h = Data line 0 (SPIDAT[0]) selected for transmission 1h = No transmission on data line 0 (SPIDAT[0])                                                                                                                                                                                                         |
| 15    | DMAR     | R/W    | 0h      | DMA read request. The DMA read request line is asserted when the channel is enabled and new data is available in the receive register of the channel. The DMA read request line is deasserted on read completion of the receive register of the channel. 0h = DMA read request is disabled. 1h = DMA read request is enabled.                                       |
| 14    | DMAW     | R/W    | 0h      | DMA write request. The DMA write request line is asserted when the channel is enabled and the MCSPI_TX0 register of the channel is empty. The DMA write request line is deasserted on load completion of the MCSPI_TX0 register of the channel. 0h = DMA write request is disabled. 1h = DMA write request is enabled.                                              |
| 13-12 | TRM      | R/W    | 0h      | Transmit/receive modes. 0h = Transmit and receive mode 1h = Receive-only mode 2h = Transmit-only mode 3h = Reserved                                                                                                                                                                                                                                                 |

<!-- image -->

Table 24-18. MCSPI\_CH0CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-7  | WL      | R/W    | 0h      | SPI word length. 0h = Reserved 1h = Reserved 2h = Reserved 3h = The SPI word is 4-bits long. 4h = The SPI word is 5-bits long 5h = The SPI word is 6-bits long 6h = The SPI word is 7-bits long 7h = The SPI word is 8-bits long 8h = The SPI word is 9-bits long 9h = The SPI word is 10-bits long Ah = The SPI word is 11-bits long Bh = The SPI word is 12-bits long Ch = The SPI word is 13-bits long Dh = The SPI word is 14-bits long Eh = The SPI word is 15-bits long Fh = The SPI word is 16-bits long 10h = The SPI word is 17-bits long 11h = The SPI word is 18-bits long 12h = The SPI word is 19-bits long 13h = The SPI word is 20-bits long 14h = The SPI word is 21-bits long 15h = The SPI word is 22-bits long 16h = The SPI word is 23-bits long 17h = The SPI word is 24-bits long 18h = The SPI word is 25-bits long 19h = The SPI word is 26-bits long 1Ah = The SPI word is 27-bits long 1Bh = The SPI word is 28-bits long 1Ch = The SPI word is 29-bits long 1Dh = The SPI word is 30-bits long 1Eh = The SPI word is 31-bits long 1Fh = The SPI word is 32-bits long |
| 6     | EPOL    | R/W    | 0h      | SPIEN polarity 0h = SPIEN is held high during the active state. 1h = SPIEN is held low during the active state.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

Table 24-18. MCSPI\_CH0CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5-2   | CLKD    | R/W    | 0h      | Frequency divider for SPICLK (only when the module is a Master SPI device). A programmable clock divider divides the SPI reference clock (CLKSPIREF) with a 4 bit value, and results in a new clock SPICLK available to shift-in and shift-out data. By default the clock divider ratio has a power of two granularity when MCSPI_CHCONF[CLKG] is cleared, Otherwise this register is the 4 LSB bit of a 12 bit register concatenated with clock divider extension MCSPI_CHCTRL[EXTCLK] register. The value description below defines the clock ratio when MCSPI_CHCONF[CLKG] is cleared to 0. 0h = Divide by 1. 1h = Divide by 2. 2h = Divide by 4. 3h = Divide by 8. 4h = Divide by 16. 5h = Divide by 32. 6h = Divide by 64. 7h = Divide by 128. 8h = Divide by 256. 9h = Divide by 512. Ah = Divide by 1024. Bh = Divide by 2048. Ch = Divide by 4096. Dh = Divide by 8192. Eh = Divide by 16384. |
| 1     | POL     | R/W    | 0h      | SPICLK polarity 0h = SPICLK is held high during the active state 1h = SPICLK is held low during the active state                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 0     | PHA     | R/W    | 0h      | SPICLK phase 0h = Data are latched on odd numbered edges of SPICLK 1h = Data are latched on even numbered edges of SPICLK                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |

<!-- image -->

www.ti.com

## 24.4.1.9 MCSPI\_CH0STAT Register (offset = 130h) [reset = 0h]

MCSPI\_CH0STAT is shown in Figure 24-34 and described in Table 24-19.

The McSPI channel 0 status register (MCSPI\_CH0STAT) provides status information about the McSPI channel 0 FIFO transmit buffer register (MCSPI\_TX0) and the McSPI channel 0 FIFO receive buffer register (MCSPI\_RX0) of channel 0.

## Figure 24-34. MCSPI\_CH0STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RXFFF    | RXFFE    | TXFFF    | TXFFE    | EOT      | TXS      | RXS      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-19. MCSPI\_CH0STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                        |
| 6     | RXFFF    | R      | 0h      | Channel 0 FIFO receive buffer full status. 0h = FIFO receive buffer is not full. 1h = FIFO receive buffer is full.                                                                                                                                                                                                                                                                                     |
| 5     | RXFFE    | R      | 0h      | Channel 0 FIFO receive buffer empty status. 0h = FIFO receive buffer is not empty. 1h = FIFO receive buffer is empty.                                                                                                                                                                                                                                                                                  |
| 4     | TXFFF    | R      | 0h      | Channel 0 FIFO transmit buffer full status. 0h = FIFO transmit buffer is not full. 1h = FIFO transmit buffer is full.                                                                                                                                                                                                                                                                                  |
| 3     | TXFFE    | R      | 0h      | Channel 0 FIFO transmit buffer empty status. 0h = FIFO transmit buffer is not empty. 1h = FIFO transmit buffer is empty.                                                                                                                                                                                                                                                                               |
| 2     | EOT      | R      | 0h      | Channel 0 end-of-transfer status. The definitions of beginning and end of transfer vary with master versus slave and the transfer format (transmit/receive mode, turbo mode). 0h = This flag is automatically cleared when the shift register is loaded with the data from the transmitter register (beginning of transfer). 1h = This flag is automatically set to one at the end of an SPI transfer. |
| 1     | TXS      | R      | 0h      | Channel 0 transmitter register status. The bit is cleared when the host writes the most significant byte of the SPI word in the MCSPI_TX0 register. The bit is set when enabling the channel 0 , and also when the SPI word is transferred from the MCSPI_TX0 register to the shift register. 0h = Register is full. 1h = Register is empty.                                                           |

<!-- image -->

## Table 24-19. MCSPI\_CH0STAT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | RXS     | R      | 0h      | Channel 0 receiver register status. The bit is cleared when enabling the channel i, and also when the host reads the most significant byte of the received SPI word from the MCSPI_RX0 register. The bit is set when the received SPI word is transferred from the shift register to the MCSPI_RX0 register. 0h = Register is empty. 1h = Register is full. |

<!-- image -->

www.ti.com

## 24.4.1.10 MCSPI\_CH0CTRL Register (offset = 134h) [reset = 0h]

MCSPI\_CH0CTRL is shown in Figure 24-35 and described in Table 24-20.

## Figure 24-35. MCSPI\_CH0CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          |          | EXTCLK   |          |          |          |          |          |          | RESERVED |          |          |          |          | EN       |
|          |          |          | R/W-0h   |          |          |          |          |          |          | R-0h     |          |          |          |          | R/W- 0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-20. MCSPI\_CH0CTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 15-8  | EXTCLK   | R/W    | 0h      | Clock ratio extension. Used to concatenate with the CLKD bit field in MCSPI_CH0CONF for clock ratio only when granularity is 1 clock cycle (CLKG bit in MCSPI_CH0CONF set to 1). Then the maximum value reached is a 4096 clock divider ratio. 0h = Clock ratio is CLKD + 1 1h = Clock ratio is CLKD + 1 + 16 FFh = Clock ratio is CLKD + 1 + 4080 |
| 7-1   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 0     | EN       | R/W    | 0h      | Channel 0 enable. 0h = Channel 0 is not active. 1h = Channel 0 is active.                                                                                                                                                                                                                                                                          |

## 24.4.1.11 MCSPI\_TX0 Register (offset = 138h) [reset = 0h]

MCSPI\_TX0 is shown in Figure 24-36 and described in Table 24-21.

The McSPI channel FIFO transmit buffer register (MCSPI\_TXx) contains a single McSPI word to transmit through the serial link. Little endian host access SPI 8-bit word on 0; big endian host accesses on 3h. SPI words are transferred with MSB first. Refer to Section 24.3.10 for more information.

## Figure 24-36. MCSPI\_TX0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | TDATA                                                                           |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-21. MCSPI\_TX0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                 |
|-------|---------|--------|---------|-----------------------------|
| 31-0  | TDATA   | R/W    | 0h      | Channel 0 data to transmit. |

<!-- image -->

<!-- image -->

www.ti.com

## 24.4.1.12 MCSPI\_RX0 Register (offset = 13Ch) [reset = 0h]

MCSPI\_RX0 is shown in Figure 24-37 and described in Table 24-22.

The McSPI channel 0 FIFO receive buffer register (MCSPI\_RX0) contains a single McSPI word received through the serial link. Little endian host access SPI 8 bit word on 0; big endian host accesses on 3h. Refer to Section 24.3.10 for more information.

## Figure 24-37. MCSPI\_RX0 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | RDATA                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-22. MCSPI\_RX0 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-0  | RDATA   | R      | 0h      | Channel 0 received data. |

## 24.4.1.13 MCSPI\_CH1CONF Register (offset = 140h) [reset = 0x0006\_0000h]

MCSPI\_CH1CONF is shown in Figure 24-38 and described in Table 24-23.

The McSPI channel 1 configuration register (MCSPI\_CH1CONF) is used to configure channel 1.

## Figure 24-38. MCSPI\_CH1CONF Register

| 31       | 30       | 29            | 28            | 27            | 26            | 25            | 24            |
|----------|----------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED | RESERVED | CLKG          | FFER          | FFEW          | TCS           | TCS           | SBPOL         |
| R-0h     | R-0h     | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 23       | 22       | 21            | 20            | 19            | 18            | 17            | 16            |
| SBE      | SPIENSLV | SPIENSLV      | FORCE         | TURBO         | IS            | DPE1          | DPE0          |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 15       | 14       | 13            | 12            | 11            | 10            | 9             | 8             |
| DMAR     | DMAW     | DMAW          | WL            | WL            | WL            | WL            | WL            |
| R/W-0h   | R/W-0h   | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h |
| 7        | 6        | 5             | 4             | 3             | 2             | 1             | 0             |
| WL       | EPOL     | CLKD          | CLKD          | CLKD          | CLKD          | POL           | PHA           |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-23. MCSPI\_CH1CONF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 29    | CLKG     | R/W    | 0h      | Clock divider granularity. This register defines the granularity of channel clock divider: power of two or one clock cycle granularity. When this bit is set the register MCSPI_CHCTRL[EXTCLK] must be configured to reach a maximum of 4096 clock divider ratio. Then The clock divider ratio is a concatenation of MCSPI_CHCONF[CLKD] and MCSPI_CHCTRL[EXTCLK] values. 0h = Clock granularity of power of 2 1h = 1 clock cycle granularity |
| 28    | FFER     | R/W    | 0h      | FIFO enabled for receive. Only one channel can have this bit set. 0h = The buffer is not used to receive data. 1h = The buffer is used to receive data.                                                                                                                                                                                                                                                                                      |
| 27    | FFEW     | R/W    | 0h      | FIFO enabled for transmit. Only one channel can have this bit set. 0h = The buffer is not used to transmit data. 1h = The buffer is used to transmit data.                                                                                                                                                                                                                                                                                   |
| 26-25 | TCS      | R/W    | 0h      | Chip select time control. These two bits define the number of interface clock cycles between CS toggling and first or last edge of SPI clock. 0h = 0.5 clock cycles 1h = 1.5 clock cycles 2h = 2.5 clock cycles 3h = 3.5 clock cycles                                                                                                                                                                                                        |
| 24    | SBPOL    | R/W    | 0h      | Start bit polarity. 0h = Start bit polarity is held to 0 during SPI transfer. 1h = Start bit polarity is held to 1 during SPI transfer.                                                                                                                                                                                                                                                                                                      |
| 23    | SBE      | R/W    | 0h      | Start bit enable for SPI transfer. 0h = Default SPI transfer length as specified by WL bit field. 1h = Start bit D/CX added before SPI transfer. Polarity is defined by MCSPI_CH1CONF[SBPOL].                                                                                                                                                                                                                                                |

<!-- image -->

<!-- image -->

www.ti.com

## Table 24-23. MCSPI\_CH1CONF Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 22-21 | SPIENSLV | R/W    | 0h      | Channel 0 only and slave mode only: SPI slave select signal detection. Reserved bits (read returns 0) for other cases. 0h = Detection enabled only on SPIEN[0] 1h = Detection enabled only on SPIEN[1] 2h = Detection enabled only on SPIEN[2] 3h = Detection enabled only on SPIEN[3]                                                                              |
| 20    | FORCE    | R/W    | 0h      | Manual SPIEN assertion to keep SPIEN active between SPI words (single channel master mode only). 0h = Writing 0 into this bit drives low the SPIEN line when MCSPI_CHCONF1[EPOL]=0, and drives it high when MCSPI_CHCONF1[EPOL]=1. 1h = Writing 1 into this bit drives high the SPIEN line when MCSPI_CHCONF1[EPOL]=0, and drives it low when MCSPI_CHCONF1[EPOL]=1 |
| 19    | TURBO    | R/W    | 0h      | Turbo mode. 0h = Turbo is deactivated (recommended for single SPI word transfer). 1h = Turbo is activated to maximize the throughput for multi-SPI word transfers.                                                                                                                                                                                                  |
| 18    | IS       | R/W    | 0h      | Input select 0h = Data line 0 (SPIDAT[0]) selected for reception. 1h = Data line 1 (SPIDAT[1]) selected for reception.                                                                                                                                                                                                                                              |
| 17    | DPE1     | R/W    | 0h      | Transmission enable for data line 1 (SPIDATAGZEN[1]) 0h = Data line 1 (SPIDAT[1]) selected for transmission 1h = No transmission on data line 1 (SPIDAT[1])                                                                                                                                                                                                         |
| 16    | DPE0     | R/W    | 0h      | Transmission enable for data line 0 (SPIDATAGZEN[0]) 0h = Data line 0 (SPIDAT[0]) selected for transmission 1h = No transmission on data line 0 (SPIDAT[0])                                                                                                                                                                                                         |
| 15    | DMAR     | R/W    | 0h      | DMA read request. The DMA read request line is asserted when the channel is enabled and new data is available in the receive register of the channel. The DMA read request line is deasserted on read completion of the receive register of the channel. 0h = DMA read request is disabled. 1h = DMA read request is enabled.                                       |
| 14    | DMAW     | R/W    | 0h      | DMA write request. The DMA write request line is asserted when the channel is enabled and the MCSPI_TX1 register of the channel is empty. The DMA write request line is deasserted on load completion of the MCSPI_TX1 register of the channel. 0h = DMA write request is disabled. 1h = DMA write request is enabled.                                              |
| 13-12 | TRM      | R/W    | 0h      | Transmit/receive modes. 0h = Transmit and receive mode 1h = Receive-only mode 2h = Transmit-only mode 3h = Reserved                                                                                                                                                                                                                                                 |

<!-- image -->

Table 24-23. MCSPI\_CH1CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-7  | WL      | R/W    | 0h      | SPI word length. 0h = Reserved 1h = Reserved 2h = Reserved 3h = The SPI word is 4-bits long. 4h = The SPI word is 5-bits long 5h = The SPI word is 6-bits long 6h = The SPI word is 7-bits long 7h = The SPI word is 8-bits long 8h = The SPI word is 9-bits long 9h = The SPI word is 10-bits long Ah = The SPI word is 11-bits long Bh = The SPI word is 12-bits long Ch = The SPI word is 13-bits long Dh = The SPI word is 14-bits long Eh = The SPI word is 15-bits long Fh = The SPI word is 16-bits long 10h = The SPI word is 17-bits long 11h = The SPI word is 18-bits long 12h = The SPI word is 19-bits long 13h = The SPI word is 20-bits long 14h = The SPI word is 21-bits long 15h = The SPI word is 22-bits long 16h = The SPI word is 23-bits long 17h = The SPI word is 24-bits long 18h = The SPI word is 25-bits long 19h = The SPI word is 26-bits long 1Ah = The SPI word is 27-bits long 1Bh = The SPI word is 28-bits long 1Ch = The SPI word is 29-bits long 1Dh = The SPI word is 30-bits long 1Eh = The SPI word is 31-bits long 1Fh = The SPI word is 32-bits long |
| 6     | EPOL    | R/W    | 0h      | SPIEN polarity 0h = SPIEN is held high during the active state. 1h = SPIEN is held low during the active state.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

www.ti.com

## Table 24-23. MCSPI\_CH1CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5-2   | CLKD    | R/W    | 0h      | Frequency divider for SPICLK (only when the module is a Master SPI device). A programmable clock divider divides the SPI reference clock (CLKSPIREF) with a 4 bit value, and results in a new clock SPICLK available to shift-in and shift-out data. By default the clock divider ratio has a power of two granularity when MCSPI_CHCONF[CLKG] is cleared, Otherwise this register is the 4 LSB bit of a 12 bit register concatenated with clock divider extension MCSPI_CHCTRL[EXTCLK] register. The value description below defines the clock ratio when MCSPI_CHCONF[CLKG] is cleared to 0. 0h = Divide by 1. 1h = Divide by 2. 2h = Divide by 4. 3h = Divide by 8. 4h = Divide by 16. 5h = Divide by 32. 6h = Divide by 64. 7h = Divide by 128. 8h = Divide by 256. 9h = Divide by 512. Ah = Divide by 1024. Bh = Divide by 2048. Ch = Divide by 4096. Dh = Divide by 8192. Eh = Divide by 16384. |
| 1     | POL     | R/W    | 0h      | SPICLK polarity 0h = SPICLK is held high during the active state 1h = SPICLK is held low during the active state                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 0     | PHA     | R/W    | 0h      | SPICLK phase 0h = Data are latched on odd numbered edges of SPICLK 1h = Data are latched on even numbered edges of SPICLK                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |

## 24.4.1.14 MCSPI\_CH1STAT Register (offset = 144h) [reset = 0h]

MCSPI\_CH1STAT is shown in Figure 24-39 and described in Table 24-24.

The McSPI channel 1 status register (MCSPI\_CH1STAT) provides status information about the McSPI channel 1 FIFO transmit buffer register (MCSPI\_TX1) and the McSPI channel 1 FIFO receive buffer register (MCSPI\_RX1) of channel 1.

## Figure 24-39. MCSPI\_CH1STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RXFFF    | RXFFE    | TXFFF    | TXFFE    | EOT      | TXS      | RXS      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-24. MCSPI\_CH1STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                        |
| 6     | RXFFF    | R      | 0h      | Channel 1 FIFO receive buffer full status. 0h = FIFO receive buffer is not full. 1h = FIFO receive buffer is full.                                                                                                                                                                                                                                                                                     |
| 5     | RXFFE    | R      | 0h      | Channel 1 FIFO receive buffer empty status. 0h = FIFO receive buffer is not empty. 1h = FIFO receive buffer is empty.                                                                                                                                                                                                                                                                                  |
| 4     | TXFFF    | R      | 0h      | Channel 1 FIFO transmit buffer full status. 0h = FIFO transmit buffer is not full. 1h = FIFO transmit buffer is full.                                                                                                                                                                                                                                                                                  |
| 3     | TXFFE    | R      | 0h      | Channel 1 FIFO transmit buffer empty status. 0h = FIFO transmit buffer is not empty. 1h = FIFO transmit buffer is empty.                                                                                                                                                                                                                                                                               |
| 2     | EOT      | R      | 0h      | Channel 1 end-of-transfer status. The definitions of beginning and end of transfer vary with master versus slave and the transfer format (transmit/receive mode, turbo mode). 0h = This flag is automatically cleared when the shift register is loaded with the data from the transmitter register (beginning of transfer). 1h = This flag is automatically set to one at the end of an SPI transfer. |
| 1     | TXS      | R      | 0h      | Channel 1 transmitter register status. The bit is cleared when the host writes the most significant byte of the SPI word in the MCSPI_TX1 register. The bit is set when enabling the channel 1 , and also when the SPI word is transferred from the MCSPI_TX1 register to the shift register. 0h = Register is full. 1h = Register is empty.                                                           |

<!-- image -->

www.ti.com

<!-- image -->

## Table 24-24. MCSPI\_CH1STAT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | RXS     | R      | 0h      | Channel 1 receiver register status. The bit is cleared when enabling the channel i, and also when the host reads the most significant byte of the received SPI word from the MCSPI_RX1 register. The bit is set when the received SPI word is transferred from the shift register to the MCSPI_RX1 register. 0h = Register is empty. 1h = Register is full. |

## 24.4.1.15 MCSPI\_CH1CTRL Register (offset = 148h) [reset = 0h]

MCSPI\_CH1CTRL is shown in Figure 24-40 and described in Table 24-25.

## Figure 24-40. MCSPI\_CH1CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          |          | EXTCLK   |          |          |          |          |          |          | RESERVED |          |          |          |          | EN       |
|          |          |          | R/W-0h   |          |          |          |          |          |          | R-0h     |          |          |          |          | R/W- 0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-25. MCSPI\_CH1CTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 15-8  | EXTCLK   | R/W    | 0h      | Clock ratio extension. Used to concatenate with the CLKD bit field in MCSPI_CH1CONF for clock ratio only when granularity is 1 clock cycle (CLKG bit in MCSPI_CH1CONF set to 1). Then the maximum value reached is a 4096 clock divider ratio. 0h = Clock ratio is CLKD + 1 1h = Clock ratio is CLKD + 1 + 16 FFh = Clock ratio is CLKD + 1 + 4080 |
| 7-1   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 0     | EN       | R/W    | 0h      | Channel 1 enable. 0h = Channel 1 is not active. 1h = Channel 1 is active.                                                                                                                                                                                                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## 24.4.1.16 MCSPI\_TX1 Register (offset = 14Ch) [reset = 0h]

MCSPI\_TX1 is shown in Figure 24-41 and described in Table 24-26.

The McSPI channel FIFO transmit buffer register (MCSPI\_TXx) contains a single McSPI word to transmit through the serial link. Little endian host access SPI 8-bit word on 0; big endian host accesses on 3h. SPI words are transferred with MSB first. Refer to Section 24.3.10 for more information.

## Figure 24-41. MCSPI\_TX1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | TDATA                                                                           |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-26. MCSPI\_TX1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                 |
|-------|---------|--------|---------|-----------------------------|
| 31-0  | TDATA   | R/W    | 0h      | Channel 1 data to transmit. |

## 24.4.1.17 MCSPI\_RX1 Register (offset = 150h) [reset = 0h]

MCSPI\_RX1 is shown in Figure 24-42 and described in Table 24-27.

The McSPI channel 1 FIFO receive buffer register (MCSPI\_RX1) contains a single McSPI word received through the serial link. Little endian host access SPI 8 bit word on 0; big endian host accesses on 3h. Refer to Section 24.3.10 for more information.

## Figure 24-42. MCSPI\_RX1 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 RDATA   |
|------|---------------------------------------------------------------------------------------|
|      | R-0h                                                                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-27. MCSPI\_RX1 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-0  | RDATA   | R      | 0h      | Channel 1 received data. |

<!-- image -->

<!-- image -->

## 24.4.1.18 MCSPI\_CH2CONF Register (offset = 154h) [reset = 0x0006\_0000h]

MCSPI\_CH2CONF is shown in Figure 24-43 and described in Table 24-28.

The McSPI channel 2 configuration register (MCSPI\_CH2CONF) is used to configure channel 2.

## Figure 24-43. MCSPI\_CH2CONF Register

| 31       | 30       | 29            | 28            | 27            | 26            | 25            | 24            |
|----------|----------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED | RESERVED | CLKG          | FFER          | FFEW          | TCS           | TCS           | SBPOL         |
| R-0h     | R-0h     | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 23       | 22       | 21            | 20            | 19            | 18            | 17            | 16            |
| SBE      | SPIENSLV | SPIENSLV      | FORCE         | TURBO         | IS            | DPE1          | DPE0          |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 15       | 14       | 13            | 12            | 11            | 10            | 9             | 8             |
| DMAR     | DMAW     | DMAW          | WL            | WL            | WL            | WL            | WL            |
| R/W-0h   | R/W-0h   | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h |
| 7        | 6        | 5             | 4             | 3             | 2             | 1             | 0             |
| WL       | EPOL     | CLKD          | CLKD          | CLKD          | CLKD          | POL           | PHA           |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-28. MCSPI\_CH2CONF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 29    | CLKG     | R/W    | 0h      | Clock divider granularity. This register defines the granularity of channel clock divider: power of two or one clock cycle granularity. When this bit is set the register MCSPI_CHCTRL[EXTCLK] must be configured to reach a maximum of 4096 clock divider ratio. Then The clock divider ratio is a concatenation of MCSPI_CHCONF[CLKD] and MCSPI_CHCTRL[EXTCLK] values. 0h = Clock granularity of power of 2 1h = 1 clock cycle granularity |
| 28    | FFER     | R/W    | 0h      | FIFO enabled for receive. Only one channel can have this bit set. 0h = The buffer is not used to receive data. 1h = The buffer is used to receive data.                                                                                                                                                                                                                                                                                      |
| 27    | FFEW     | R/W    | 0h      | FIFO enabled for transmit. Only one channel can have this bit set. 0h = The buffer is not used to transmit data. 1h = The buffer is used to transmit data.                                                                                                                                                                                                                                                                                   |
| 26-25 | TCS      | R/W    | 0h      | Chip select time control. These two bits define the number of interface clock cycles between CS toggling and first or last edge of SPI clock. 0h = 0.5 clock cycles 1h = 1.5 clock cycles 2h = 2.5 clock cycles 3h = 3.5 clock cycles                                                                                                                                                                                                        |
| 24    | SBPOL    | R/W    | 0h      | Start bit polarity. 0h = Start bit polarity is held to 0 during SPI transfer. 1h = Start bit polarity is held to 1 during SPI transfer.                                                                                                                                                                                                                                                                                                      |
| 23    | SBE      | R/W    | 0h      | Start bit enable for SPI transfer. 0h = Default SPI transfer length as specified by WL bit field. 1h = Start bit D/CX added before SPI transfer. Polarity is defined by MCSPI_CH2CONF[SBPOL].                                                                                                                                                                                                                                                |

<!-- image -->

## Table 24-28. MCSPI\_CH2CONF Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 22-21 | SPIENSLV | R/W    | 0h      | Channel 0 only and slave mode only: SPI slave select signal detection. Reserved bits (read returns 0) for other cases. 0h = Detection enabled only on SPIEN[0] 1h = Detection enabled only on SPIEN[1] 2h = Detection enabled only on SPIEN[2] 3h = Detection enabled only on SPIEN[3]                                                                              |
| 20    | FORCE    | R/W    | 0h      | Manual SPIEN assertion to keep SPIEN active between SPI words (single channel master mode only). 0h = Writing 0 into this bit drives the SPIEN line when MCSPI_CHCONF2[EPOL]=0, and drives it high when MCSPI_CHCONF2[EPOL]=1. 1h = Writing 1 into this bit drives low high the SPIEN line when MCSPI_CHCONF2[EPOL]=0, and drives it low when MCSPI_CHCONF2[EPOL]=1 |
| 19    | TURBO    | R/W    | 0h      | Turbo mode. 0h = Turbo is deactivated (recommended for single SPI word transfer). 1h = Turbo is activated to maximize the throughput for multi-SPI word transfers.                                                                                                                                                                                                  |
| 18    | IS       | R/W    | 0h      | Input select 0h = Data line 0 (SPIDAT[0]) selected for reception. 1h = Data line 1 (SPIDAT[1]) selected for reception.                                                                                                                                                                                                                                              |
| 17    | DPE1     | R/W    | 0h      | Transmission enable for data line 1 (SPIDATAGZEN[1]) 0h = Data line 1 (SPIDAT[1]) selected for transmission 1h = No transmission on data line 1 (SPIDAT[1])                                                                                                                                                                                                         |
| 16    | DPE0     | R/W    | 0h      | Transmission enable for data line 0 (SPIDATAGZEN[0]) 0h = Data line 0 (SPIDAT[0]) selected for transmission 1h = No transmission on data line 0 (SPIDAT[0])                                                                                                                                                                                                         |
| 15    | DMAR     | R/W    | 0h      | DMA read request. The DMA read request line is asserted when the channel is enabled and new data is available in the receive register of the channel. The DMA read request line is deasserted on read completion of the receive register of the channel. 0h = DMA read request is disabled. 1h = DMA read request is enabled.                                       |
| 14    | DMAW     | R/W    | 0h      | DMA write request. The DMA write request line is asserted when the channel is enabled and the MCSPI_TX2 register of the channel is empty. The DMA write request line is deasserted on load completion of the MCSPI_TX2 register of the channel. 0h = DMA write request is disabled. 1h = DMA write request is enabled.                                              |
| 13-12 | TRM      | R/W    | 0h      | Transmit/receive modes. 0h = Transmit and receive mode 1h = Receive-only mode 2h = Transmit-only mode 3h = Reserved                                                                                                                                                                                                                                                 |

<!-- image -->

## Table 24-28. MCSPI\_CH2CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-7  | WL      | R/W    | 0h      | SPI word length. 0h = Reserved 1h = Reserved 2h = Reserved 3h = The SPI word is 4-bits long. 4h = The SPI word is 5-bits long 5h = The SPI word is 6-bits long 6h = The SPI word is 7-bits long 7h = The SPI word is 8-bits long 8h = The SPI word is 9-bits long 9h = The SPI word is 10-bits long Ah = The SPI word is 11-bits long Bh = The SPI word is 12-bits long Ch = The SPI word is 13-bits long Dh = The SPI word is 14-bits long Eh = The SPI word is 15-bits long Fh = The SPI word is 16-bits long 10h = The SPI word is 17-bits long 11h = The SPI word is 18-bits long 12h = The SPI word is 19-bits long 13h = The SPI word is 20-bits long 14h = The SPI word is 21-bits long 15h = The SPI word is 22-bits long 16h = The SPI word is 23-bits long 17h = The SPI word is 24-bits long 18h = The SPI word is 25-bits long 19h = The SPI word is 26-bits long 1Ah = The SPI word is 27-bits long 1Bh = The SPI word is 28-bits long 1Ch = The SPI word is 29-bits long 1Dh = The SPI word is 30-bits long 1Eh = The SPI word is 31-bits long 1Fh = The SPI word is 32-bits long |
| 6     | EPOL    | R/W    | 0h      | SPIEN polarity 0h = SPIEN is held high during the active state. 1h = SPIEN is held low during the active state.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

## Table 24-28. MCSPI\_CH2CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5-2   | CLKD    | R/W    | 0h      | Frequency divider for SPICLK (only when the module is a Master SPI device). A programmable clock divider divides the SPI reference clock (CLKSPIREF) with a 4 bit value, and results in a new clock SPICLK available to shift-in and shift-out data. By default the clock divider ratio has a power of two granularity when MCSPI_CHCONF[CLKG] is cleared, Otherwise this register is the 4 LSB bit of a 12 bit register concatenated with clock divider extension MCSPI_CHCTRL[EXTCLK] register. The value description below defines the clock ratio when MCSPI_CHCONF[CLKG] is cleared to 0. 0h = Divide by 1. 1h = Divide by 2. 2h = Divide by 4. 3h = Divide by 8. 4h = Divide by 16. 5h = Divide by 32. 6h = Divide by 64. 7h = Divide by 128. 8h = Divide by 256. 9h = Divide by 512. Ah = Divide by 1024. Bh = Divide by 2048. Ch = Divide by 4096. Dh = Divide by 8192. Eh = Divide by 16384. |
| 1     | POL     | R/W    | 0h      | SPICLK polarity 0h = SPICLK is held high during the active state 1h = SPICLK is held low during the active state                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 0     | PHA     | R/W    | 0h      | SPICLK phase 0h = Data are latched on odd numbered edges of SPICLK 1h = Data are latched on even numbered edges of SPICLK                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |

<!-- image -->

www.ti.com

## 24.4.1.19 MCSPI\_CH2STAT Register (offset = 158h) [reset = 0h]

MCSPI\_CH2STAT is shown in Figure 24-44 and described in Table 24-29.

The McSPI channel 2 status register (MCSPI\_CH2STAT) provides status information about the McSPI channel 2 FIFO transmit buffer register (MCSPI\_TX2) and the McSPI channel 2 FIFO receive buffer register (MCSPI\_RX2) of channel 2.

## Figure 24-44. MCSPI\_CH2STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RXFFF    | RXFFE    | TXFFF    | TXFFE    | EOT      | TXS      | RXS      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-29. MCSPI\_CH2STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                        |
| 6     | RXFFF    | R      | 0h      | Channel 2 FIFO receive buffer full status. 0h = FIFO receive buffer is not full. 1h = FIFO receive buffer is full.                                                                                                                                                                                                                                                                                     |
| 5     | RXFFE    | R      | 0h      | Channel 2 FIFO receive buffer empty status. 0h = FIFO receive buffer is not empty. 1h = FIFO receive buffer is empty.                                                                                                                                                                                                                                                                                  |
| 4     | TXFFF    | R      | 0h      | Channel 2 FIFO transmit buffer full status. 0h = FIFO transmit buffer is not full. 1h = FIFO transmit buffer is full.                                                                                                                                                                                                                                                                                  |
| 3     | TXFFE    | R      | 0h      | Channel 2 FIFO transmit buffer empty status. 0h = FIFO transmit buffer is not empty. 1h = FIFO transmit buffer is empty.                                                                                                                                                                                                                                                                               |
| 2     | EOT      | R      | 0h      | Channel 2 end-of-transfer status. The definitions of beginning and end of transfer vary with master versus slave and the transfer format (transmit/receive mode, turbo mode). 0h = This flag is automatically cleared when the shift register is loaded with the data from the transmitter register (beginning of transfer). 1h = This flag is automatically set to one at the end of an SPI transfer. |
| 1     | TXS      | R      | 0h      | Channel 2 transmitter register status. The bit is cleared when the host writes the most significant byte of the SPI word in the MCSPI_TX2 register. The bit is set when enabling the channel 2 , and also when the SPI word is transferred from the MCSPI_TX2 register to the shift register. 0h = Register is full. 1h = Register is empty.                                                           |

<!-- image -->

## Table 24-29. MCSPI\_CH2STAT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | RXS     | R      | 0h      | Channel 2 receiver register status. The bit is cleared when enabling the channel i, and also when the host reads the most significant byte of the received SPI word from the MCSPI_RX2 register. The bit is set when the received SPI word is transferred from the shift register to the MCSPI_RX2 register. 0h = Register is empty. 1h = Register is full. |

<!-- image -->

www.ti.com

## 24.4.1.20 MCSPI\_CH2CTRL Register (offset = 15Ch) [reset = 0h]

MCSPI\_CH2CTRL is shown in Figure 24-45 and described in Table 24-30.

## Figure 24-45. MCSPI\_CH2CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          |          | EXTCLK   |          |          |          |          |          |          | RESERVED |          |          |          |          | EN       |
|          |          |          | R/W-0h   |          |          |          |          |          |          | R-0h     |          |          |          |          | R/W- 0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-30. MCSPI\_CH2CTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 15-8  | EXTCLK   | R/W    | 0h      | Clock ratio extension. Used to concatenate with the CLKD bit field in MCSPI_CH2CONF for clock ratio only when granularity is 1 clock cycle (CLKG bit in MCSPI_CH2CONF set to 1). Then the maximum value reached is a 4096 clock divider ratio. 0h = Clock ratio is CLKD + 1 1h = Clock ratio is CLKD + 1 + 16 FFh = Clock ratio is CLKD + 1 + 4080 |
| 7-1   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 0     | EN       | R/W    | 0h      | Channel 2 enable. 0h = Channel 2 is not active. 1h = Channel 2 is active.                                                                                                                                                                                                                                                                          |

## 24.4.1.21 MCSPI\_TX2 Register (offset = 160h) [reset = 0h]

MCSPI\_TX2 is shown in Figure 24-46 and described in Table 24-31.

The McSPI channel FIFO transmit buffer register (MCSPI\_TXx) contains a single McSPI word to transmit through the serial link. Little endian host access SPI 8-bit word on 0; big endian host accesses on 3h. SPI words are transferred with MSB first. Refer to Section 24.3.10 for more information.

## Figure 24-46. MCSPI\_TX2 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | TDATA                                                                           |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-31. MCSPI\_TX2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                 |
|-------|---------|--------|---------|-----------------------------|
| 31-0  | TDATA   | R/W    | 0h      | Channel 2 data to transmit. |

<!-- image -->

<!-- image -->

www.ti.com

## 24.4.1.22 MCSPI\_RX2 Register (offset = 164h) [reset = 0h]

MCSPI\_RX2 is shown in Figure 24-47 and described in Table 24-32.

The McSPI channel 2 FIFO receive buffer register (MCSPI\_RX2) contains a single McSPI word received through the serial link. Little endian host access SPI 8 bit word on 0; big endian host accesses on 3h. Refer to Section 24.3.10 for more information.

## Figure 24-47. MCSPI\_RX2 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | RDATA                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-32. MCSPI\_RX2 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-0  | RDATA   | R      | 0h      | Channel 2 received data. |

## 24.4.1.23 MCSPI\_CH3CONF Register (offset = 168h) [reset = 0x0006\_0000h]

MCSPI\_CH3CONF is shown in Figure 24-48 and described in Table 24-33.

The McSPI channel 3 configuration register (MCSPI\_CH3CONF) is used to configure channel 3.

## Figure 24-48. MCSPI\_CH3CONF Register

| 31       | 30       | 29            | 28            | 27            | 26            | 25            | 24            |
|----------|----------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED | RESERVED | CLKG          | FFER          | FFEW          | TCS           | TCS           | SBPOL         |
| R-0h     | R-0h     | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 23       | 22       | 21            | 20            | 19            | 18            | 17            | 16            |
| SBE      | SPIENSLV | SPIENSLV      | FORCE         | TURBO         | IS            | DPE1          | DPE0          |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |
| 15       | 14       | 13            | 12            | 11            | 10            | 9             | 8             |
| DMAR     | DMAW     | DMAW          | WL            | WL            | WL            | WL            | WL            |
| R/W-0h   | R/W-0h   | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h | R/W-0h R/W-0h |
| 7        | 6        | 5             | 4             | 3             | 2             | 1             | 0             |
| WL       | EPOL     | CLKD          | CLKD          | CLKD          | CLKD          | POL           | PHA           |
| R/W-0h   | R/W-0h   | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        | R/W-0h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-33. MCSPI\_CH3CONF Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 29    | CLKG     | R/W    | 0h      | Clock divider granularity. This register defines the granularity of channel clock divider: power of two or one clock cycle granularity. When this bit is set the register MCSPI_CHCTRL[EXTCLK] must be configured to reach a maximum of 4096 clock divider ratio. Then The clock divider ratio is a concatenation of MCSPI_CHCONF[CLKD] and MCSPI_CHCTRL[EXTCLK] values. 0h = Clock granularity of power of 2 1h = 1 clock cycle granularity |
| 28    | FFER     | R/W    | 0h      | FIFO enabled for receive. Only one channel can have this bit set. 0h = The buffer is not used to receive data. 1h = The buffer is used to receive data.                                                                                                                                                                                                                                                                                      |
| 27    | FFEW     | R/W    | 0h      | FIFO enabled for transmit. Only one channel can have this bit set. 0h = The buffer is not used to transmit data. 1h = The buffer is used to transmit data.                                                                                                                                                                                                                                                                                   |
| 26-25 | TCS      | R/W    | 0h      | Chip select time control. These two bits define the number of interface clock cycles between CS toggling and first or last edge of SPI clock. 0h = 0.5 clock cycles 1h = 1.5 clock cycles 2h = 2.5 clock cycles 3h = 3.5 clock cycles                                                                                                                                                                                                        |
| 24    | SBPOL    | R/W    | 0h      | Start bit polarity. 0h = Start bit polarity is held to 0 during SPI transfer. 1h = Start bit polarity is held to 1 during SPI transfer.                                                                                                                                                                                                                                                                                                      |
| 23    | SBE      | R/W    | 0h      | Start bit enable for SPI transfer. 0h = Default SPI transfer length as specified by WL bit field. 1h = Start bit D/CX added before SPI transfer. Polarity is defined by MCSPI_CH3CONF[SBPOL].                                                                                                                                                                                                                                                |

<!-- image -->

<!-- image -->

www.ti.com

## Table 24-33. MCSPI\_CH3CONF Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                         |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 22-21 | SPIENSLV | R/W    | 0h      | Channel 0 only and slave mode only: SPI slave select signal detection. Reserved bits (read returns 0) for other cases. 0h = Detection enabled only on SPIEN[0] 1h = Detection enabled only on SPIEN[1] 2h = Detection enabled only on SPIEN[2] 3h = Detection enabled only on SPIEN[3]                                                                              |
| 20    | FORCE    | R/W    | 0h      | Manual SPIEN assertion to keep SPIEN active between SPI words (single channel master mode only). 0h = Writing 0 into this bit drives low the SPIEN line when MCSPI_CHCONF3[EPOL]=0, and drives it high when MCSPI_CHCONF3[EPOL]=1. 1h = Writing 1 into this bit drives high the SPIEN line when MCSPI_CHCONF3[EPOL]=0, and drives it low when MCSPI_CHCONF3[EPOL]=1 |
| 19    | TURBO    | R/W    | 0h      | Turbo mode. 0h = Turbo is deactivated (recommended for single SPI word transfer). 1h = Turbo is activated to maximize the throughput for multi-SPI word transfers.                                                                                                                                                                                                  |
| 18    | IS       | R/W    | 0h      | Input select 0h = Data line 0 (SPIDAT[0]) selected for reception. 1h = Data line 1 (SPIDAT[1]) selected for reception.                                                                                                                                                                                                                                              |
| 17    | DPE1     | R/W    | 0h      | Transmission enable for data line 1 (SPIDATAGZEN[1]) 0h = Data line 1 (SPIDAT[1]) selected for transmission 1h = No transmission on data line 1 (SPIDAT[1])                                                                                                                                                                                                         |
| 16    | DPE0     | R/W    | 0h      | Transmission enable for data line 0 (SPIDATAGZEN[0]) 0h = Data line 0 (SPIDAT[0]) selected for transmission 1h = No transmission on data line 0 (SPIDAT[0])                                                                                                                                                                                                         |
| 15    | DMAR     | R/W    | 0h      | DMA read request. The DMA read request line is asserted when the channel is enabled and new data is available in the receive register of the channel. The DMA read request line is deasserted on read completion of the receive register of the channel. 0h = DMA read request is disabled. 1h = DMA read request is enabled.                                       |
| 14    | DMAW     | R/W    | 0h      | DMA write request. The DMA write request line is asserted when the channel is enabled and the MCSPI_TX3 register of the channel is empty. The DMA write request line is deasserted on load completion of the MCSPI_TX3 register of the channel. 0h = DMA write request is disabled. 1h = DMA write request is enabled.                                              |
| 13-12 | TRM      | R/W    | 0h      | Transmit/receive modes. 0h = Transmit and receive mode 1h = Receive-only mode 2h = Transmit-only mode 3h = Reserved                                                                                                                                                                                                                                                 |

<!-- image -->

Table 24-33. MCSPI\_CH3CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 11-7  | WL      | R/W    | 0h      | SPI word length. 0h = Reserved 1h = Reserved 2h = Reserved 3h = The SPI word is 4-bits long. 4h = The SPI word is 5-bits long 5h = The SPI word is 6-bits long 6h = The SPI word is 7-bits long 7h = The SPI word is 8-bits long 8h = The SPI word is 9-bits long 9h = The SPI word is 10-bits long Ah = The SPI word is 11-bits long Bh = The SPI word is 12-bits long Ch = The SPI word is 13-bits long Dh = The SPI word is 14-bits long Eh = The SPI word is 15-bits long Fh = The SPI word is 16-bits long 10h = The SPI word is 17-bits long 11h = The SPI word is 18-bits long 12h = The SPI word is 19-bits long 13h = The SPI word is 20-bits long 14h = The SPI word is 21-bits long 15h = The SPI word is 22-bits long 16h = The SPI word is 23-bits long 17h = The SPI word is 24-bits long 18h = The SPI word is 25-bits long 19h = The SPI word is 26-bits long 1Ah = The SPI word is 27-bits long 1Bh = The SPI word is 28-bits long 1Ch = The SPI word is 29-bits long 1Dh = The SPI word is 30-bits long 1Eh = The SPI word is 31-bits long 1Fh = The SPI word is 32-bits long |
| 6     | EPOL    | R/W    | 0h      | SPIEN polarity 0h = SPIEN is held high during the active state. 1h = SPIEN is held low during the active state.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

www.ti.com

## Table 24-33. MCSPI\_CH3CONF Register Field Descriptions (continued)

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 5-2   | CLKD    | R/W    | 0h      | Frequency divider for SPICLK (only when the module is a Master SPI device). A programmable clock divider divides the SPI reference clock (CLKSPIREF) with a 4 bit value, and results in a new clock SPICLK available to shift-in and shift-out data. By default the clock divider ratio has a power of two granularity when MCSPI_CHCONF[CLKG] is cleared, Otherwise this register is the 4 LSB bit of a 12 bit register concatenated with clock divider extension MCSPI_CHCTRL[EXTCLK] register. The value description below defines the clock ratio when MCSPI_CHCONF[CLKG] is cleared to 0. 0h = Divide by 1. 1h = Divide by 2. 2h = Divide by 4. 3h = Divide by 8. 4h = Divide by 16. 5h = Divide by 32. 6h = Divide by 64. 7h = Divide by 128. 8h = Divide by 256. 9h = Divide by 512. Ah = Divide by 1024. Bh = Divide by 2048. Ch = Divide by 4096. Dh = Divide by 8192. Eh = Divide by 16384. |
| 1     | POL     | R/W    | 0h      | SPICLK polarity 0h = SPICLK is held high during the active state 1h = SPICLK is held low during the active state                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 0     | PHA     | R/W    | 0h      | SPICLK phase 0h = Data are latched on odd numbered edges of SPICLK 1h = Data are latched on even numbered edges of SPICLK                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |

## 24.4.1.24 MCSPI\_CH3STAT Register (offset = 16Ch) [reset = 0h]

MCSPI\_CH3STAT is shown in Figure 24-49 and described in Table 24-34.

The McSPI channel 3 status register (MCSPI\_CH3STAT) provides status information about the McSPI channel 3 FIFO transmit buffer register (MCSPI\_TX3) and the McSPI channel 3 FIFO receive buffer register (MCSPI\_RX3) of channel 3.

## Figure 24-49. MCSPI\_CH3STAT Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RXFFF    | RXFFE    | TXFFF    | TXFFE    | EOT      | TXS      | RXS      |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-34. MCSPI\_CH3STAT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-7  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                        |
| 6     | RXFFF    | R      | 0h      | Channel 3 FIFO receive buffer full status. 0h = FIFO receive buffer is not full. 1h = FIFO receive buffer is full.                                                                                                                                                                                                                                                                                     |
| 5     | RXFFE    | R      | 0h      | Channel 3 FIFO receive buffer empty status. 0h = FIFO receive buffer is not empty. 1h = FIFO receive buffer is empty.                                                                                                                                                                                                                                                                                  |
| 4     | TXFFF    | R      | 0h      | Channel 3 FIFO transmit buffer full status. 0h = FIFO transmit buffer is not full. 1h = FIFO transmit buffer is full.                                                                                                                                                                                                                                                                                  |
| 3     | TXFFE    | R      | 0h      | Channel 3 FIFO transmit buffer empty status. 0h = FIFO transmit buffer is not empty. 1h = FIFO transmit buffer is empty.                                                                                                                                                                                                                                                                               |
| 2     | EOT      | R      | 0h      | Channel 3 end-of-transfer status. The definitions of beginning and end of transfer vary with master versus slave and the transfer format (transmit/receive mode, turbo mode). 0h = This flag is automatically cleared when the shift register is loaded with the data from the transmitter register (beginning of transfer). 1h = This flag is automatically set to one at the end of an SPI transfer. |
| 1     | TXS      | R      | 0h      | Channel 3 transmitter register status. The bit is cleared when the host writes the most significant byte of the SPI word in the MCSPI_TX3 register. The bit is set when enabling the channel 3 , and also when the SPI word is transferred from the MCSPI_TX3 register to the shift register. 0h = Register is full. 1h = Register is empty.                                                           |

<!-- image -->

<!-- image -->

## Table 24-34. MCSPI\_CH3STAT Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | RXS     | R      | 0h      | Channel 3 receiver register status. The bit is cleared when enabling the channel i, and also when the host reads the most significant byte of the received SPI word from the MCSPI_RX3 register. The bit is set when the received SPI word is transferred from the shift register to the MCSPI_RX3 register. 0h = Register is empty. 1h = Register is full. |

## 24.4.1.25 MCSPI\_CH3CTRL Register (offset = 170h) [reset = 0h]

MCSPI\_CH3CTRL is shown in Figure 24-50 and described in Table 24-35.

## Figure 24-50. MCSPI\_CH3CTRL Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          |          |          | EXTCLK   |          |          |          |          |          |          | RESERVED |          |          |          |          | EN       |
|          |          |          | R/W-0h   |          |          |          |          |          |          | R-0h     |          |          |          |          | R/W- 0h  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-35. MCSPI\_CH3CTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 15-8  | EXTCLK   | R/W    | 0h      | Clock ratio extension. Used to concatenate with the CLKD bit field in MCSPI_CH3CONF for clock ratio only when granularity is 1 clock cycle (CLKG bit in MCSPI_CH3CONF set to 1). Then the maximum value reached is a 4096 clock divider ratio. 0h = Clock ratio is CLKD + 1 1h = Clock ratio is CLKD + 1 + 16 FFh = Clock ratio is CLKD + 1 + 4080 |
| 7-1   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                    |
| 0     | EN       | R/W    | 0h      | Channel 3 enable. 0h = Channel 3 is not active. 1h = Channel 3 is active.                                                                                                                                                                                                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## 24.4.1.26 MCSPI\_TX3 Register (offset = 174h) [reset = 0h]

MCSPI\_TX3 is shown in Figure 24-51 and described in Table 24-36.

The McSPI channel FIFO transmit buffer register (MCSPI\_TXx) contains a single McSPI word to transmit through the serial link. Little endian host access SPI 8-bit word on 0; big endian host accesses on 3h. SPI words are transferred with MSB first. Refer to Section 24.3.10 for more information.

## Figure 24-51. MCSPI\_TX3 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | TDATA                                                                           |
|      | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-36. MCSPI\_TX3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                 |
|-------|---------|--------|---------|-----------------------------|
| 31-0  | TDATA   | R/W    | 0h      | Channel 3 data to transmit. |

## 24.4.1.27 MCSPI\_RX3 Register (offset = 178h) [reset = 0h]

MCSPI\_RX3 is shown in Figure 24-52 and described in Table 24-37.

The McSPI channel 3 FIFO receive buffer register (MCSPI\_RX3) contains a single McSPI word received through the serial link. Little endian host access SPI 8 bit word on 0; big endian host accesses on 3h. Refer to Section 24.3.10 for more information.

## Figure 24-52. MCSPI\_RX3 Register

| 31   | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|---------------------------------------------------------------------------------|
|      | RDATA                                                                           |
|      | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-37. MCSPI\_RX3 Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description              |
|-------|---------|--------|---------|--------------------------|
| 31-0  | RDATA   | R      | 0h      | Channel 3 received data. |

<!-- image -->

<!-- image -->

www.ti.com

## 24.4.1.28 MCSPI\_XFERLEVEL Register (offset = 17Ch) [reset = 0h]

MCSPI\_XFERLEVEL is shown in Figure 24-53 and described in Table 24-38.

The McSPI transfer levels register (MCSPI\_XFERLEVEL) provides the transfer levels needed while using the FIFO buffer during transfer.

Figure 24-53. MCSPI\_XFERLEVEL Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   | 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|
| WCNT                                                                                  | AFL                                                                                   | AEL                                                                                   |
| R/W-0h                                                                                | R/W-0h                                                                                | R/W-0h                                                                                |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-38. MCSPI\_XFERLEVEL Register Field Descriptions

| Bit   | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                         |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | WCNT    | R/W    | 0h      | SPI word counter. Holds the programmable value of the number of SPI words to be transferred on the channel that is using the FIFO buffer. When the transfer has started, a read back of this register returns the current SPI word transfer index. 0h = Counter not used 1h = 1 SPI word FFFEh = 65534 SPI word                                                                     |
| 15-8  | AFL     | R/W    | 0h      | FFFFh = 65535 SPI word Buffer almost full. Holds the programmable almost full level value used to determine almost full buffer condition. If you want an interrupt or a DMA read request to be issued during a receive operation when the data buffer holds at least n bytes, then the buffer MCSPI_MODULCTRL[AFL] must be set with n - 1. 0h = 1 byte 1h = 2 bytes FFh = 256 bytes |
| 7-0   | AEL     | R/W    | 0h      | Buffer almost empty. Holds the programmable almost empty level value used to determine almost empty buffer condition. If you want an interrupt or a DMA write request to be issued during a transmit operation when the data buffer is able to receive n bytes, then the buffer MCSPI_MODULCTRL[AEL] must be set with n - 1. 0h = 1 byte 1h = 2 bytes FFh = 256 bytes               |

## 24.4.1.29 MCSPI\_DAFTX Register (offset = 180h) [reset = 0h]

MCSPI\_DAFTX is shown in Figure 24-54 and described in Table 24-39.

The McSPI DMA address aligned FIFO transmitter register (MCSPI\_DAFTX) contains the SPI words to transmit on the serial link when FIFO is used and the DMA address is aligned on 256 bit. This register is an image of one of the MCSPI\_TX(i) registers corresponding to the channel which have its FIFO enabled. The SPI words are transferred with MSB first. See Chapter Access to data registers for the list of supported accesses.

## Figure 24-54. MCSPI\_DAFTX Register

| 31   | 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|------|------------------------------------------------------------------------------------|
|      | DAFTDATA                                                                           |
|      | R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-39. MCSPI\_DAFTX Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DAFTDATA | R/W    | 0h      | FIFO Data to transmit with DMA 256 bit aligned address. This register is used only when MCSPI_MODULCTRL[FDAA] is set to 1, and only one of the MCSPI_CH(i)CONF[FFEW] of enabled channels is set. Without these conditions, any access to this register will return a null value. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 24.4.1.30 MCSPI\_DAFRX Register (offset = 1A0h) [reset = 0h]

MCSPI\_DAFRX is shown in Figure 24-55 and described in Table 24-40.

The McSPI DMA address aligned FIFO receiver register (MCSPI\_DAFRX) contains the SPI words to received on the serial link when FIFO used and DMA address is aligned on 256 bit. This register is an image of one of MCSPI\_RX(i) register corresponding to the channel which have its FIFO enabled.

## Figure 24-55. MCSPI\_DAFRX Register

| 31       | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------|---------------------------------------------------------------------------------|
| DAFRDATA | DAFRDATA                                                                        |
| R-0h     | R-0h                                                                            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 24-40. MCSPI\_DAFRX Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-0  | DAFRDATA | R      | 0h      | FIFO Received Data with DMA 256 bit aligned address. This register is used only when MCSPI_MODULCTRL[FDAA] is set to 1, and only one of the MCSPI_CH(i)CONF[FFER] of enabled channels is set. Without these conditions, any access to this register will return a null value. |