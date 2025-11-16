## 24.3.2 Master Mode

McSPI is in master mode when the bit MS of the register MCSPI\_MODULCTRL is cleared.

In master mode McSPI supports multi-channel communication with up to 4 independent SPI communication channel contexts. McSPI initiates a data transfer on the data lines (SPIDAT [1:0]) and generates clock (SPICLK) and control signals (SPIEN) to a single SPI slave device at a time.

## 24.3.2.1 Dedicated Resources Per Channel

In the following sections, the letter 'i' indicates the channel number that can be 0, 1, 2 or 3. Each channel has the following dedicated resources:

- Its own channel enable, programmable with the bit EN of the register MCSPI\_CH(i)CTRL. Disabling the channel, outside data word transmission, remains under user responsibility.
- Its own transmitter register MCSPI\_TX on top of the common shift register. If the transmitter register is empty, the status bit TXS of the register MCSPI\_CH(i)STAT is set.
- Its own receiver register MCSPI\_RX on top of the common shift register. If the receiver register is full, the status bit RXS of the register MCSPI\_CH(i)STAT is set.
- A fixed SPI ENABLE line allocation (SPIEN[i] port for channel "i"), SPI enable management is optional.
- Its own communication configuration with the following parameters via the register MCSPI\_CH(i)CONF
- -Transmit/Receive modes, programmable with the bit TRM.
- -Interface mode (Two data pins or Single data pin) and data pins assignment, both programmable with the bits IS and DPE.
- -SPI word length, programmable with the bits WL.
- -SPIEN polarity, programmable with the bit EPOL.
- -SPIEN kept active between words, programmable with the bit FORCE.
- -Turbo mode, programmable with the bit TURBO.
- -SPICLK frequency, programmable with the bit CLKD, the granularity of clock division can be changed using CLKG bit, the clock ratio is then concatenated with MCSPI\_CH(i)CTRL[EXTCLK] value.
- -SPICLK polarity, programmable with the bit POL
- -SPICLK phase, programmable with the bit PHA.
- -Start bit polarity, programmable with the bit SBPOL
- -Use a FIFO Buffer or not (see the following note), programmable with FFER and FFEW, depending on transfer mode, (MCSPI\_CH(i)CONF[TRM]).
- Two DMA requests events, read and write, to synchronize read/write accesses of the DMA controller with the activity of McSPI. The DMA requests are enabled with the bits DMAR and DMAW.
- Three interrupts events

Note: When more than one channel has an FIFO enable bit field (FFER or FFEW) set, the FIFO will not be used on any channel. Software must ensure that only one enabled channel is configured to use the FIFO buffer.

The transfers will use the latest loaded parameters of the register MCSPI\_CH(i)CONF.

The configuration parameters SPIEN polarity, Turbo mode, SPICLK phase and SPICLK polarity can be loaded in the MCSPI\_CH(i)CONF register only when the channel is disabled. The user has the responsibility to change the other parameters of the MCSPI\_CH(i)CONF register when no transfer occurs on the SPI interface.

<!-- image -->

<!-- image -->

www.ti.com

## 24.3.2.2 Interrupt Events in Master Mode

In master mode, the interrupt events related to the transmitter register state are TX\_empty and TX\_underflow. The interrupt event related to the receiver register state is RX\_full.

## 24.3.2.2.1 TX\_empty

The event TX\_empty is activated when a channel is enabled and its transmitter register becomes empty (transient event). Enabling channel automatically raises this event, except for the Master receive only mode. (See Section 24.3.2.5). When the FIFO buffer is enabled (MCSPI\_CH(i)CONF[FFEW] set to 1), the TX\_empty is asserted as soon as there is enough space in the buffer to write a number of bytes defined by MCSPI\_XFERLEVEL[AEL].

Transmitter register must be loaded to remove the source of the interrupt and the TX\_empty interrupt status bit must be cleared for interrupt line de-assertion (if event enabled as interrupt source) . (See Section 24.3.4).

When FIFO is enabled, no new TX\_empty event will be asserted as soon as CPU has not performed the number of writes into the transmitter register defined by MCSPI\_XFERLEVEL[AEL]. It is the responsibility of CPU to perform the right number of writes.

## 24.3.2.2.2 TX\_underflow

The event TX\_underflow is activated when the channel is enabled and if the transmitter register or FIFO is empty (not updated with new data) at the time of shift register assignment.

The TX\_underflow is a harmless warning in master mode.

To avoid having TX\_underflow event at the beginning of a transmission, the event TX\_underflow is not activated when no data has been loaded into the transmitter register since channel has been enabled.

To avoid having a TX\_underflow event, the Transmit Register (MCSPI\_TX(i)) should be loaded as infrequently as possible.

TX\_underflow interrupt status bit must be cleared for interrupt line de-assertion (if event enable as interrupt source).

Note: When more than one channel has an FIFO enable bit field (FFER or FFEW) set, the FIFO will not be used on any channel. Software must ensure that only one enabled channel is configured to use the FIFO buffer.

## 24.3.2.2.3 RX\_ full

The event RX\_full is activated when channel is enabled and receiver register becomes filled (transient event). When FIFO buffer is enabled (MCSPI\_CH(i)CONF[FFER] set to 1), the RX\_full is asserted when the number of bytes in the buffer equals the level defined by MCSPI\_XFERLEVEL[AFL].

Receiver register must be read to remove source of interrupt and RX\_full interrupt status bit must be cleared for interrupt line de-assertion (if event enabled as interrupt source).

When the FIFO is enabled, no new RX\_FULL event will be asserted once the CPU has read the number of bytes defined by MCSPI\_XFERLEVEL[AFL]. It is the responsibility of the CPU to perform the correct number of read operations.

## 24.3.2.2.4 End of Word Count

The event end of word (EOW) count is activated when channel is enabled and configured to use the builtin FIFO. This interrupt is raised when the controller had performed the number of transfers defined in the MCSPI\_XFERLEVEL[WCNT] register. If the value was programmed to 0000h, the counter is not enabled and this interrupt is not generated.

The EOW count interrupt also indicates that the SPI transfer has halted on the channel using the FIFO buffer.

The EOW interrupt status bit must be cleared for interrupt line de-assertion (if event enable as interrupt source).

## 24.3.2.3 Master Transmit and Receive Mode

This mode is programmable per channel (bit TRM of register MCSPI\_CH(i)CONF).

The channel access to the shift registers, for transmission/reception, is based on its transmitter and receiver register state and round robin arbitration.

The channel that meets the rules below is included in the round robin list of already active channels scheduled for transmission and/or reception. The arbiter skips the channel that does not meet the rules and search for the next following enabled channel, in rotation.

Rule 1: Only enabled channels (bit EN of the register MCSPI\_CH(i)CTRL), can be scheduled for transmission and/or reception.

Rule 2: An enabled channel can be scheduled if its transmitter register is not empty (bit TXS of the register MCSPI\_CH(i)STAT) or its FIFO is not empty when the buffer is used for the corresponding channel (bit FFE of the register MCSPI\_CH(i)STAT) at the time of shift register assignment. If the transmitter register or FIFO is empty, at the time of shift register assignment, the event TX\_underflow is activated and the next enabled channel with new data to transmit is scheduled. (See also transmit only mode).

Rule 3: An enabled channel can be scheduled if its receive register is not full (bit RXS of the register MCSPI\_CH(i)STAT)) or its FIFO is not full when the buffer is used for the corresponding channel (bit FFF of the register MCSPI\_CH(i)STAT) at the time of shift register assignment. (See also receive only mode). Therefore the receiver register of FIFO cannot be overwritten. The RX\_overflow bit, in the MCSPI\_IRQSTATUS register is never set in this mode.

On completion of SPI word transfer (bit EOT of the register MCSPI\_CH(i)STAT is set) the updated transmitter register for the next scheduled channel is loaded into the shift register. This bit is meaningless when using the Buffer for this channel. The serialization (transmit and receive) starts according to the channel communication configuration. On serialization completion the received data is transferred to the channel receive register.

The built-in FIFO is available in this mode and if configured in one data direction, transmit or receive, then the FIFO is seen as a unique 64-byte buffer. If configured in both data directions, transmit and receive, then the FIFO is split into two separate 32-byte buffers with their own address space management. In this last case, the definition of AEL and AFL levels is based on 32 bytes and is under CPU responsibility.

## 24.3.2.4 Master Transmit-Only Mode

This mode eliminates the need for the CPU to read the receiver register (minimizing data movement) when only transmission is meaningful.

The master transmit only mode is programmable per channel (bits TRM of the register MCSPI\_CH(i)CONF).

In master transmit only mode, transmission starts after data is loaded into the transmitter register.

Rule 1 and Rule 2 , defined above, are applicable in this mode.

Rule 3 , defined above, is not applicable: In master transmit only mode, the receiver register or FIFO state 'full' does not prevent transmission, and the receiver register is always overwritten with the new SPI word. This event in the receiver register is not significant when only transmission is meaningful. So, the RX\_overflow bit, in the MCSPI\_IRQSTATUS register is never set in this mode.

The McSPI module automatically disables the RX\_full interrupt status. The corresponding interrupt request and DMA Read request are not generated in master transmit only mode.

The status of the serialization completion is given by the bit EOT of the register MCSPI\_CH(i)STAT. This bit is meaningless when using the Buffer for this channel.

The built-in FIFO is available in this mode and can be configured with FFEW bit field in the MCSPI\_CH(i)CONF register, then the FIFO is seen as a unique 64-byte buffer.

<!-- image -->

<!-- image -->

www.ti.com

## 24.3.2.5 Master Receive-Only Mode

This mode eliminates the need for the CPU to refill the transmitter register (minimizing data movement) when only reception is meaningful.

The master receive mode is programmable per channel (bits TRM of the register MCSPI\_CH(i)CONF).

The master receive only mode enables channel scheduling only on empty state of the receiver register.

Rule 1 and Rule 3 , defined above, are applicable in this mode.

Rule 2 , defined above, is not applicable: In master receive only mode, after the first loading of the transmitter register of the enabled channel, the transmitter register state is maintained as full. The content of the transmitter register is always loaded into the shift register, at the time of shift register assignment. So, after the first loading of the transmitter register, the bits TX\_empty and TX\_underflow, in the MCSPI\_IRQSTATUS register are never set in this mode.

The status of the serialization completion is given by the bit EOT of the register MCSPI\_CH(i)STAT. The bit RX\_full in the MCSPI\_IRQSTATUS register is set when a received data is loaded from the shift register to the receiver register. This bit is meaningless when using the Buffer for this channel.

The built-in FIFO is available in this mode and can be configured with FFER bit field in the MCSPI\_CH(i)CONF register, then the FIFO is seen as a unique 64-byte buffer.

## 24.3.2.6 Single-Channel Master Mode

When the SPI is configured as a master device with a single enabled channel, the assertion of the SPIM\_CSX signal can be controlled in two different ways:

- In 3 pin mode : MCSPI\_MODULCTRL[1] PIN34 and MCSPI\_MODULCTRL[0] SINGLE bit are set to 1, the controller transmit SPI word as soon as transmit register or FIFO is not empty.
- In 4 pin mode : MCSPI\_MODULCTRL[1] PIN34 bit is cleared to 0 and MCSPI\_MODULCTRL[0] SINGLE bit is set to 1, SPIEN assertion/deassertion controlled by Software. (See Section 24.3.2.6.1) using the MCSPI\_CH(i)CONF[20] FORCE bit.

## 24.3.2.6.1 Programming Tips When Switching to Another Channel

When a single channel is enabled and data transfer is ongoing:

- Wait for completion of the SPI word transfer (bit EOT of the register MCSPI\_CH(i)STAT is set) before disabling the current channel and enabling a different channel.
- Disable the current channel first, and then enable the other channel.

## 24.3.2.6.2 Keep SPIEN Active Mode (Force SPIEN)

Continuous transfers are manually allowed by keeping the SPIEN signal active for successive SPI words transfer. Several sequences (configuration/enable/disable of the channel) can be run without deactivating the SPIEN line. This mode is supported by all channels and any master sequence can be used (transmitreceive, transmit-only, receive-only).

Keeping the SPIEN active mode is supported when:

- A single channel is used (bit MCSPI\_MODULCTRL[Single] is set to 1).
- Transfer parameters of the transfer are loaded in the configuration register (MCSPI\_CH(i)CONF) in the appropriate channel.

The state of the SPIEN signal is programmable.

- -Writing 1 into the bit FORCE of the register MCSPI\_CH(i)CONF drives high the SPIEN line when MCSPI\_CH(i)CONF[EPOL] is set to zero, and drives it low when MCSPI\_CH(i)CONF[EPOL] is set.
- -Writing 0 into the bit FORCE of the register MCSPI\_CH(i)CONF drives low the SPIEN line when MCSPI\_CH(i)CONF[EPOL] is set to zero, and drives it high when MCSPI\_CH(i)CONF[EPOL] is set.
- A single channel is enabled (MCSPI\_CH(i)CTRL[En] set to 1) . The first enabled channel activates the SPIEN line.

Once the channel is enabled, the SPIEN signal is activated with the programmed polarity.

<!-- image -->

As in multi-channel master mode, the start of the transfer depends on the status of the transmitter register, the status of the receiver register and the mode defined by the bits TRM in the configuration register (transmit only, receive only or transmit and receive) of the enabled channel.

The status of the serialization completion of each SPI word is given by the bit EOT of the register MCSPI\_CH(i)STAT. The bit RX\_full in the MCSPI\_IRQSTATUS register is set when a received data is loaded from the shift register to the receiver register.

A change in the configuration parameters is propagated directly on the SPI interface. If the SPIEN signal is activated the user must insure that the configuration is changed only between SPI words, in order to avoid corrupting the current transfer.

NOTE:

The SPIEN polarity, the SPICLK phase and SPICLK polarity must not be modified when the SPIEN signal is activated. The Transmit/Receive mode, programmable with the bit TRM can be modified only when the channel is disabled. The channel can be disabled and enabled while the SPIEN signal is activated.

The delay between SPI words that requires the connected SPI slave device to switch from one configuration (transmit only for instance) to another (receive only for instance) must be handled under software responsibility.

At the end of the last SPI word, the channel must be deactivated (MCSPI\_CH(i)CTRL[En] is cleared to 0) and the SPIEN can be forced to its inactive state (MCSPI\_CH(i)CONF[Force]).

Figure 24-9 and Figure 24-10 show successive transfers with SPIEN kept active low with a different configuration for each SPI word in respectively single data pin interface mode and two data pins interface mode. The arrows indicate when the channel is disabled before a change in the configuration parameters and enabled again.

<!-- image -->

<!-- image -->

SPIEN

SPICLK

SPIDAT[1]

SPIDAT[0]

Word

Word

Word

SPIEN

SPICLK

SPIDAT[0]

Word

Word

Word

Figure 24-9. Continuous Transfers With SPIEN Maintained Active (Single-Data-Pin Interface Mode)

Figure 24-10. Continuous Transfers With SPIEN Maintained Active (Dual-Data-Pin Interface Mode)

<!-- image -->

www.ti.com

## NOTE:

The turbo mode is also supported for the Keep SPIEN active mode when the following conditions are met:

- A single channel will be explicitly used (bit MCSPI\_MODULCTRL[Single] is set to 1).
- The turbo mode is enabled in the configuration of the channel (bit Turbo of the register MCSPI\_CH(i)CONF).

## 24.3.2.6.3 Turbo Mode

The purpose of the Turbo mode is to improve the throughput of the SPI interface when a single channel is enabled, by allowing transfers until the shift register and the receiver register are full.

This mode is programmable per channel (bit Turbo of the register MCSPI\_CH(i)CONF). When several channels are enabled, the bit Turbo of the registers MCSPI\_CH(i)CONF has no effect, and the channel access to the shift registers remains as described in Section 24.3.2.3.

In Turbo mode, Rule 1 and Rule 2 defined in Section 24.3.2.3 are applicable but Rule 3 is not applicable. An enabled channel can be scheduled if its receive register is full (bit RXS of the register MCSPI\_CH(i)STAT) at the time of shift register assignment until the shift register is full.

In Turbo mode, Rule 1 and Rule 2 defined in Section 24.3.2.3 are applicable but Rule 3 is not applicable. An enabled channel can be scheduled if its receive register is full (bit RXS of the register MCSPI\_CH(i)STAT) at the time of shift register assignment until the shift register is full.

The receiver register cannot be overwritten in Turbo mode. In consequence the RX\_overflow bit, in MCSPI\_IRQSTATUS register is never set in this mode.

## 24.3.2.7 Start Bit Mode

The purpose of the start bit mode is to add an extended bit before the SPI word transmission specified by word length WL. This feature is only available in master mode.

This mode is programmable per channel using the start bit enable (SBE) bit of the register MCSPI\_CH(i)CONF).

The polarity of the extended bit is programmable per channel and it indicates whether the next SPI word must be handled as a command when SBPOL is cleared to 0 or as a data or a parameter when SBPOL is set to 1. Moreover start bit polarity SBPOL can be changed dynamically during start bit mode transfer without disabling the channel for reconfiguration, in this case you have the responsibility to configure the SBPOL bit before writing the SPI word to be transmitted in TX register.

The start bit mode could be used at the same time as turbo mode and/or manual chip select mode. In this case only one channel could be used, no round-robin arbitration is possible.

<!-- image -->

Figure 24-11. Extended SPI Transfer With Start Bit PHA = 1

<!-- image -->

Lead

<!-- image -->

www.ti.com

## 24.3.2.8 Chip-Select Timing Control

The chip select timing control is only available in master mode with automatic chip select generation (FORCE bit field is cleared to 0), to add a programmable delay between chip select assertion and first clock edge or chip select removal and last clock edge. The option is available only in 4 pin mode MCSPI\_MODULCTRL[1] PIN34 is cleared to 0.

This mode is programmable per channel (bit TCS of the register MCSPI\_CH(i)CONF). Figure 24-12 shows the chip-select SPIEN timing control.

Figure 24-12. Chip-Select SPIEN Timing Controls

<!-- image -->

NOTE: Because of the design implementation for transfers using a clock divider ratio set to 1 (clock bypassed), a half cycle must be added to the value between chip-select assertion and the first clock edge with PHA = 1 or between chip-select removal and the last clock edge with PHA = 0.

With an odd clock divider ratio which occurs when granularity is one clock cycle, that means that MCSPI\_CH(i)CONF[CLKG] is set to 1 and MCSPI\_CH(i)CONF[CLKD] has an even value, the clock duty cycle is not 50%, then one of the high level or low level duration is selected to be added to TCS delay.

Table 24-6 summarizes all delays between chip select and first (setup) or last (hold) clock edge.

In 3-pin mode this option is useless, the chip select SPIEN is forced to low state.

Table 24-6. Chip Select ↔ Clock Edge Delay Depending on Configuration

| Clock Ratio F ratio                                | Clock Phase   | Chip Select ↔ Clock Edge Delay            | Chip Select ↔ Clock Edge Delay            |
|----------------------------------------------------|---------------|-------------------------------------------|-------------------------------------------|
|                                                    | PHA           | Setup                                     | Hold                                      |
| 1                                                  | 0             | T_ref × (TCS + ½)                         | T_ref × (TCS + 1)                         |
|                                                    | 1             | T_ref × (TCS + 1)                         | T_ref × (TCS + ½)                         |
| Even ≥ 2                                           | x             | T_ref × F ratio × (TCS + ½)               | T_ref × F ratio × (TCS + ½)               |
| Odd ≥ 3 (only with MCSPI_CH(i)CONF[CLK G] set to 1 | 0             | T_ref × [{F ratio × TCS) + (F ratio + ½)] | T_ref × [{F ratio × TCS) + (F ratio + ½)] |
|                                                    | 1             | T_ref × [{F ratio × TCS) + (F ratio - ½)] | T_ref × [{F ratio × TCS) + (F ratio - ½)] |

T\_ref = CLKSPIREF period in ns. F ratio = SPI clock division ratio

The clock divider ratio depends on divider granularity MCSPI\_CH(i)CONF[CLKG]:

- MCSPI\_CH(i)CONF[CLKG] = 0 : granularity is power of two. Fratio = 2 MCSPI\_CH(i)CONF[CLKD]

= MCSPI\_CH(i)CTRL[EXTCLK] × MCSPI\_CH(i)CONF[CLKD] + 1

- MCSPI\_CH(i)CONF[CLKG] = 1 : granularity is one cycle. Fratio

## 24.3.2.9 Clock Ratio Granularity

By default the clock division ratio is defined by the register MCSPI\_CH(i)CONF[CLKD] with power of two granularity leading to a clock division in range 1 to 32768, in this case the duty cycle is always 50%. With bit MCSPI\_CH(i)CONF[CLKG] the clock division granularity can be changed to one clock cycle, in that case the register MCSPI\_CH(i)CTRL[EXTCLK] is concatenated with MCSPI\_CH(i)CONF[CLKD] to give a 12-bit width division ratio in range 1 to 4096.

When granularity is one clock cycle (MCSPI\_CH(i)CONF[CLKG] set to 1), for odd value of clock ratio the clock duty cycle is kept to 50-50 using falling edge of clock reference CLKSPIREF.

Table 24-7. CLKSPIO High/Low Time Computation

| Clock Ratio F ratio   | CLKSPIO High Time    | CLKSPIO Low Time     |
|-----------------------|----------------------|----------------------|
| 1                     | T high _ref          | T low _ref           |
| Even ≥ 2              | t_ref × (F ratio /2) | t_ref × (F ratio /2) |
| Odd ≥ 3               | t_ref × (F ratio /2) | t_ref × (F ratio /2) |

T\_ref = CLKSPIREF period in ns. T high \_ref = CLKSPIREF high Time period in ns. Tlow\_ref = CLKSPIREF low Time period in ns. F ratio = SPI clock division ratio

Fratio = MCSPI\_CH(i)CTRL[EXTCLK] × MCSPI\_CH(i)CONF[CLKD] + 1

For odd ratio value the duty cycle is calculated as below:

Duty\_cycle = ½

Granularity examples: With a clock source frequency of 48 MHz:

Table 24-8. Clock Granularity Examples

| MCSPI_CH (i)CTRL EXTCLK   |   MCSPI_CH (i)CONF CLKD |   MCSPI_CH (i)CONF CLKG |   F ratio | MCSPI_CH (i)CONF PHA   | MCSPI_CH (i)CONF POL   | Thigh (ns)   | Tlow (ns)   |   Tperiod (ns) | Duty Cycle   |   Fout (MHz) |
|---------------------------|-------------------------|-------------------------|-----------|------------------------|------------------------|--------------|-------------|----------------|--------------|--------------|
| X                         |                       0 |                       0 |         1 | X                      | X                      | 10.4         | 10.4        |           20.8 | 50-50        |       48     |
| X                         |                       1 |                       0 |         2 | X                      | X                      | 20.8         | 20.8        |           41.6 | 50-50        |       24     |
| X                         |                       2 |                       0 |         4 | X                      | X                      | 41.6         | 41.6        |           83.2 | 50-50        |       12     |
| X                         |                       3 |                       0 |         8 | X                      | X                      | 83.2         | 83.2        |          166.4 | 50-50        |        6     |
| 0                         |                       0 |                       1 |         1 | X                      | X                      | 10.4         | 10.4        |           20.8 | 50-50        |       48     |
| 0                         |                       1 |                       1 |         2 | X                      | X                      | 20.8         | 20.8        |           41.6 | 50-50        |       24     |
| 0                         |                       2 |                       1 |         3 | 1                      | 0                      | 31,2         | 31,2        |           62.4 | 50-50        |       16     |
| 0                         |                       2 |                       1 |         3 | 1                      | 1                      | 31,2         | 31,2        |           62.4 | 50-50        |       16     |
| 0                         |                       3 |                       1 |         4 | X                      | X                      | 41.6         | 41.6        |           83.2 | 50-50        |       12     |
| 5                         |                       0 |                       1 |        81 | 1                      | 0                      | 842,4        | 842,4       |         1684.8 | 50-50        |        0.592 |
| 5                         |                       7 |                       1 |        88 | X                      | X                      | 915.2        | 915.2       |         1830.4 | 50-50        |        0.545 |

<!-- image -->

<!-- image -->

www.ti.com

## 24.3.2.10 FIFO Buffer Management

The McSPI controller has a built-in 64-byte buffer in order to unload DMA or interrupt handler and improve data throughput.

This buffer can be used by only one channel and is selected by setting MCSPI\_CH(i)CONF[FFER] and/or MCSPI\_CH(i)CONF[FFEW] to 1.

If several channels are selected and several FIFO enable bit fields set to 1, the controller forces the buffer to be disabled for all channels. It is the responsibility of the driver to enable the buffer for only one channel.

The buffer can be used in the modes defined below:

- Master or Slave mode.
- Transmit only, Receive only or Transmit/Receive mode.
- Single channel or turbo mode, or in normal round robin mode. In round robin mode the buffer is used by only one channel.
- All word length MCSPI\_CH(i)CONF[WL] are supported.

Two levels AEL and AFL located in MCSPI\_XFERLEVEL register rule the buffer management. The granularity of these levels is one byte, then it is not aligned with SPI word length. It is the responsibility of the driver to set these values as a multiple of SPI word length defined in MCSPI\_CH(i)CONF[WL]. The number of byte written in the FIFO depends on word length (see Table 24-9).

## Table 24-9. FIFO Writes, Word Length Relationship

|                                    | SPI Word Length WL   | SPI Word Length WL   | SPI Word Length WL   |
|------------------------------------|----------------------|----------------------|----------------------|
|                                    | 3 ≤ WL ≤ 7           | 8 ≤ WL ≤ 15          | 16 ≤ WL ≤ 31         |
| Number of byte written in the FIFO | 1 byte               | 2 bytes              | 4 bytes              |

## 24.3.2.10.1 Split FIFO

The FIFO can be split into two part when module is configured in transmit/receive mode MCSPI\_CH(i)CONF[TRM] is cleared to 0 and MCSPI\_CH(i)CONF[FFER] and MCSPI\_CH(i)CONF[FFEW] asserted. Then system can access a 32-byte depth FIFO per direction.

The FIFO buffer pointers are reset when the corresponding channel is enabled or FIFO configuration changes.

Figure 24-13. Transmit/Receive Mode With No FIFO Used

<!-- image -->

## Configuration:

MCSPI\_CH(i)CONF[TRM]=0x0 Transmit/receive mode

MCSPI\_CH(i)CONF[FFRE]=0x0 FIFO disabled on receive path

MCSPI\_CH(i)CONF[FFWE]=0x0 FIFO disabled on transmit path

Figure 24-14. Transmit/Receive Mode With Only Receive FIFO Enabled

<!-- image -->

Configuration: MCSPI\_CH(i)CONF[TRM]=0x0 Transmit/receive mode MCSPI\_CH(i)CONF[FFRE]=0x1 FIFO enabled on receive path

MCSPI\_CH(i)CONF[FFWE]=0x0 FIFO disabled on transmit path

<!-- image -->

<!-- image -->

www.ti.com

Figure 24-15. Transmit/Receive Mode With Only Transmit FIFO Used

<!-- image -->

## Configuration:

MCSPI\_CH(i)CONF[TRM]=0x0 Transmit/receive mode

MCSPI\_CH(i)CONF[FFRE]=0x0 FIFO disabled on receive path

MCSPI\_CH(i)CONF[FFWE]=0x1 FIFO enabled on transmit path

Figure 24-16. Transmit/Receive Mode With Both FIFO Direction Used

<!-- image -->

## Configuration:

MCSPI\_CH(i)CONF[TRM]=0x0 Transmit/receive mode

MCSPI\_CH(i)CONF[FFRE]=0x1 FIFO enabled on receive path

MCSPI\_CH(i)CONF[FFWE]=0x0 FIFO disabled on transmit path

Figure 24-17. Transmit-Only Mode With FIFO Used

<!-- image -->

Configuration: MCSPI\_CH(i)CONF[TRM]=0x2 Transmit only mode MCSPI\_CH(i)CONF[FFRE]=0x1 FIFO enabled on transmit path

MCSPI\_CH(i)CONF[FFWE] not applicable

Figure 24-18. Receive-Only Mode With FIFO Used

<!-- image -->

Configuration: MCSPI\_CH(i)CONF[TRM]=012 Receive only mode MCSPI\_CH(i)CONF[FFRE]=0x1 FIFO enabled on receive path MCSPI\_CH(i)CONF[FFWE] not applicable

<!-- image -->

<!-- image -->

www.ti.com

## 24.3.2.10.2 Buffer Almost Full

The bit field MCSPI\_XFERLEVEL[AFL] is needed when the buffer is used to receive SPI word from a slave (MCSPI\_CH(i)CONF[FFER] must be set to 1). It defines the almost full buffer status.

When FIFO pointer reaches this level an interrupt or a DMA request is sent to the CPU to enable system to read AFL+1 bytes from receive register. Be careful AFL+1 must correspond to a multiple value of MCSPI\_CH(i)CONF[WL].

When DMA is used, the request is de-asserted after the first receive register read.

No new request will be asserted until the system has performed the correct number of read operations from the buffer.

## Figure 24-19. Buffer Almost Full Level (AFL)

<!-- image -->

Full

Empty

LH or DMA Read

Core Write

.

&lt;MCSPI\_IRQSTATUS[RX(i)\_FULL]&gt;*

* non-DMA mode only. In DMA mode, the DMA RX request is asserted to its active level under identical conditions.

&lt;MCSPI\_XFERLEVEL[AFL]&gt; (in bytes)

NOTE:

SPI\_IRQSTATUS register bits are not available in DMA mode. In DMA mode, the SPIm\_DMA\_RX n request is asserted on the same conditions as the SPI\_IRQSTATUS RX n \_FULL flag.

## 24.3.2.10.3 Buffer Almost Empty

The bitfield MCSPI\_XFERLEVEL[AEL] is needed when the buffer is used to transmit SPI word to a slave (MCSPI\_CH(i)CONF[FFEW]must be set to 1). It defines the almost empty buffer status.

When FIFO pointer has not reached this level an interrupt or a DMA request is sent to the CPU to enable system to write AEL+1 bytes to transmit register. Be careful AEL+1 must correspond to a multiple value of MCSPI\_CH(i)CONF[WL].

When DMA is used, the request is de-asserted after the first transmit register write.

No new request will be asserted until the system has performed the correct number of write operations.

<!-- image -->

.

## 24.3.2.10.4 End of Transfer Management

When the FIFO buffer is enabled for a channel, the user should configure the MCSPI\_XFERLEVEL register, the AEL and AFL levels, and, especially, the WCNT bit field to define the number of SPI word to be transferred using the FIFO. This should be done before enabling the channel.

This counter allows the controller to stop the transfer correctly after a defined number of SPI words have been transferred. If WNCT is cleared to 0, the counter is not used and the user must stop the transfer manually by disabling the channel, in this case the user doesn't know how many SPI transfers have been done. For receive transfer, software shall poll the corresponding FFE bit field and read the Receive register to empty the FIFO buffer.

When End Of Word count interrupt is generated, the user can disable the channel and poll on MCSPI\_CH(i)STAT[FFE] register to know if SPI word is still there in FIFO buffer and read last words.

<!-- image -->

<!-- image -->

www.ti.com

## 24.3.2.10.5 Multiple SPI Word Access

The CPU has the ability to perform multiple SPI word access to the receive or transmit registers within a single 32-bit OCP access by setting the bit field MCSPI\_MODULCTRL[MOA] to '1' under specific conditions:

- The channel selected has the FIFO enable.
- Only FIFO sense enabled support the kind of access.
- The bit field MCSPI\_MODULCTRL[MOA] is set to 1
- Only 32-bit OCP access and data width can be performed to receive or transmit registers, for other kind of access the CPU must de-assert MCSPI\_MODULCTRL[MOA] bit fields.
- The Level MCSPI\_XFERLEVEL[AEL] and MCSPI\_XFERLEVEL[AFL] must be 32-bit aligned , it means that AEL[0] = AEL[1] = 1 or AFL[0] = AFL[1] = 1.
- If MCSPI\_XFERLEVEL[WCNT] is used it must be configured according to SPI word length.
- The word length of SPI words allows to perform multiple SPI access, that means that MCSPI\_CH(i)CONF[WL] &lt; 16.

Number of SPI word access depending on SPI word length:

- 3 ≤ WL ≤ 7, SPI word length smaller or equal to byte length, four SPI words accessed per 32-bit OCP read/write. If word count is used (MCSPI\_XFERLEVEL[WCNT]), set the bit field to WCNT[0]=WCNT[1]=0.
- 8 ≤ WL ≤ 15, SPI word length greater than byte or equal to 16-bit length, two SPI words accessed per 32-bit OCP read/write. If word count is used (MCSPI\_XFERLEVEL[WCNT]), set the bit field to WCNT[0]= 0.
- 16 ≤ WL multiple SPI word access not applicable.

## 24.3.2.11 First SPI Word Delayed

The McSPI controller has the ability to delay the first SPI word transfer to give time for system to complete some parallel processes or fill the FIFO in order to improve transfer bandwidth. This delay is applied only on first SPI word after SPI channel enabled and first write in Transmit register. It is based on output clock frequency.

This option is meaningful in master mode and single channel mode, MCSPI\_MODULCTRL[SINGLE] = 1.

<!-- image -->

Few delay values are available: No delay, 4/8/16/32 SPI cycles.

Its accuracy is half cycle in clock bypass mode and depends on clock polarity and phase.

## 24.3.2.12 3- or 4-Pin Mode

External SPI bus interface can be configured to use a restricted set of pins using the bit field MCSPI\_MODULCTRL[PIN34] and depending on targeted application:

- If MCSPI\_MODULCTRL[PIN34] is cleared to 0 (default value) the controller is in 4-pin mode using the SPI pins SPICLK, SOMI, SIMO and chip enable CS.
- If MCSPI\_MODULCTRL[PIN34] is set to 1 the controller is in 3-pin mode using the SPI pins SPICLK, SOMI and SIMO.

In 3-pin mode it is mandatory to put the controller in single channel master mode (MCSPI\_MODULCTRL[SINGLE] asserted) and to connect only one SPI device on the bus.

Figure 24-22. 3-Pin Mode System Overview

<!-- image -->

In 3-pin mode all options related to chip select management are useless:

- MCSPI\_CHxCONF[EPOL]
- MCSPI\_CHxCONF[TCS0]
- MCSPI\_CHxCONF[FORCE]

The chip select pin SPIEN is forced to '0' in this mode.

<!-- image -->