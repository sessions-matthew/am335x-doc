<!-- image -->

www.ti.com

## 24.3.3 Slave Mode

McSPI is in slave mode when the bit MS of the register MCSPI\_MODULCTRL is set.

In slave mode, McSPI can be connected to up to 4 external SPI master devices. McSPI handles transactions with a single SPI master device at a time.

In slave mode, McSPI initiates data transfer on the data lines (SPIDAT[1;0]) when it receives an SPI clock (SPICLK) from the external SPI master device.

The controller is able to work with or without a chip select SPIEN depending on MCSPI\_MODULCTRL[PIN34] bit setting. It also supports transfers without a dead cycle between two successive words.

## 24.3.3.1 Dedicated Resources

In slave mode, enabling a channel that is not channel 0 has no effect. Only channel 0 can be enabled. The channel 0, in slave mode has the following resources:

- Its own channel enable, programmable with the bit EN of the register MCSPI\_CH0CTRL. This channel should be enabled before transmission and reception. Disabling the channel, outside data word transmission, remains under user responsibility.
- Any of the 4 ports SPIEN[3:0] can be used as a slave SPI device enable. This is programmable with the bits SPIENSLV of the register MCSPI\_CH0CONF.
- Its own transmitter register MCSPI\_TX on top of the common shift register. If the transmitter register is empty, the status bit TXS of the register MCSPI\_CH0STAT is set. When McSPI is selected by an external master (active signal on the SPIEN port assigned to channel 0), the transmitter register content of channel0 is always loaded in shift register whether it has been updated or not. The transmitter register should be loaded before McSPI is selected by a master.
- Its own receiver register MCSPI\_RX on top of the common shift register. If the receiver register is full, the status bit RXS of the register MCSPI\_CH0STAT is set.

NOTE:

The transmitter register and receiver registers of the other channels are not used. Read from or Write in the registers of a channel other than 0 has no effect.

- Its own communication configuration with the following parameters via the register MCSPI\_CH0CONF:
- -Transmit/Receive modes, programmable with the bit TRM.
- -Interface mode (Two data pins or Single data pin) and data pins assignment, both programmable with the bits IS and DPE.
- -SPI word length, programmable with the bits WL.
- -SPIEN polarity, programmable with the bit EPOL.
- -SPICLK polarity, programmable with the bit POL.
- -SPICLK phase, programmable with the bit PHA.
- -Use a FIFO buffer or not, programmable with FFER and FFEW, depending on transfer mode TRM.

The SPICLK frequency of a transfer is controlled by the external SPI master connected to McSPI. The bits CLKD0 of the MCSPI\_CH0CONF register are not used in slave mode.

NOTE:

The configuration of the channel can be loaded in the MCSPI\_CH0CONF register only when the channel is disabled.

- Two DMA requests events, read and write, to synchronize read/write accesses of the DMA controller with the activity of McSPI. The DMA requests are enabled with the bits DMAR and DMAW of the MCSPI\_CH0CONF register.
- Four interrupts events.

Figure 24-23 shows an example of four slaves wired on a single master device.

<!-- image -->

Figure 24-23. Example of SPI Slave with One Master and Multiple Slave Devices on Channel 0

<!-- image -->

## 24.3.3.2 Interrupt Events in Slave Mode

The interrupt events related to the transmitter register state are TX\_empty and TX\_underflow. The interrupt events related to the receiver register state are RX\_full and RX\_overflow.

## 24.3.3.2.1 TX\_EMPTY

The event TX\_empty is activated when the channel is enabled and its transmitter register becomes empty. Enabling channel automatically raises this event. When FIFO buffer is enabled (MCSPI\_CH(i)CONF[FFEW] set to 1), the TX\_empty is asserted as soon as there is enough space in buffer to write a number of byte defined by MCSPI\_XFERLEVEL[AEL].

Transmitter register must be load to remove source of interrupt and TX\_empty interrupt status bit must be cleared for interrupt line de-assertion (if event enable as interrupt source).

When FIFO is enabled, no new TX\_empty event will be asserted unless the host performs the number of writes to the transmitter register defined by MCSPI\_XFERLEVEL[AEL]. It is the responsibility of the Local Host to perform the right number of writes.

<!-- image -->

www.ti.com

## 24.3.3.2.2 TX\_UNDERFLOW

The event TX\_underflow is activated when channel is enabled and if the transmitter register or FIFO (if use of buffer is enabled) is empty (not updated with new data) when an external master device starts a data transfer with McSPI (transmit and receive).

When the FIFO is enabled, the data read while the underflow flag is set will not be the last word written to the FIFO.

The TX\_underflow indicates an error (data loss) in slave mode.

To avoid having TX\_underflow event at the beginning of a transmission, the event TX\_underflow is not activated when no data has been loaded into the transmitter register since channel has been enabled.

TX\_underflow interrupt status bit must be cleared for interrupt line de-assertion (if event enable as interrupt source).

## 24.3.3.2.3 RX\_FULL

The event RX\_FULL is activated when channel is enabled and receiver becomes filled (transient event). When FIFO buffer is enabled (MCSPI\_CH(i)CONF[FFER] set to 1), the RX\_FULL is asserted as soon as there is a number of bytes holds in buffer to read defined by MCSPI\_XFERLEVEL[AFL].

Receiver register must be read to remove source of interrupt and RX\_full interrupt status bit must be cleared for interrupt line de-assertion (if event enable as interrupt source).

When FIFO is enabled, no new RX\_FULL event will be asserted unless the host has performed the number of reads from the receive register defined by MCSPI\_XFERLEVEL[AFL]. It is the responsibility of Local Host to perform the right number of reads.

## 24.3.3.2.4 RX\_OVERFLOW

The RX0\_OVERFLOW event is activated in slave mode in either transmit-and-receive or receive-only mode, when a channel is enabled and the SPI\_RX n register or FIFO is full when a new SPI word is received. The SPI\_RX n register is always overwritten with the new SPI word. If the FIFO is enabled, data within the FIFO is overwritten, it must be considered as corrupted. The RX0\_OVERFLOW event should not appear in slave mode using the FIFO.

The RX0\_OVERFLOW indicates an error (data loss) in slave mode.

The SPI\_IRQSTATUS[3] RX0\_OVERFLOW interrupt status bit must be cleared for interrupt line deassertion (if the event is enabled as the interrupt source).

## 24.3.3.2.5 End of Word Count

The event end of word (EOW) count is activated when channel is enabled and configured to use the builtin FIFO. This interrupt is raised when the controller had performed the number of transfer defined in MCSPI\_XFERLEVEL[WCNT] register. If the value was programmed to 0000h, the counter is not enabled and this interrupt is not generated.

The EOW count interrupt also indicates that the SPI transfer has halted on the channel using the FIFO buffer.

The EOW interrupt status bit must be cleared for interrupt line de-assertion (if event enable as interrupt source).

## 24.3.3.3 Slave Transmit-and-Receive Mode

The slave transmit and receive mode is programmable (TRM bit cleared to 0 in the register MCSPI\_CH(i)CONF).

After the channel is enabled, transmission and reception proceeds with interrupt and DMA request events.

In slave transmit and receive mode, transmitter register should be loaded before McSPI is selected by an external SPI master device.

<!-- image -->

Transmitter register or FIFO (if enabled) content is always loaded into the shift register whether it has been updated or not. The event TX\_underflow is activated accordingly, and does not prevent transmission.

On completion of SPI word transfer (bit EOT of the register MCSPI\_CH(i)STAT is set) the received data is transferred to the channel receive register. This bit is meaningless when using the Buffer for this channel.

The built-in FIFO is available in this mode and can be configured in one data direction, transmit or receive, then the FIFO is seen as a unique 64-byte buffer. It can also be configured in both data directions, transmit and receive, then the FIFO is split into two separate 32-byte buffers with their own address space management.

## 24.3.3.4 Slave Receive-Only Mode

The slave receive-only mode is programmable (MCSPI\_CH(i)CONF[TRM] set to 01).

In receive-only mode, the transmitter register should be loaded before McSPI is selected by an external SPI master device. Transmitter register or FIFO (if enabled) content is always loaded into the shift register whether it has been updated or not. The event TX\_underflow is activated accordingly, and does not prevent transmission.

When an SPI word transfer completes (the MCSPI\_CH(i)STAT[EOT] bit (with I = 0) is set to 1), the received data is transferred to the channel receive register.

To use McSPI as a slave receive-only device with MCSPI\_CH(i)CONF[TRM]=00, the user has the responsibility to disable the TX\_empty and TX\_underflow interrupts and DMA write requests due to the transmitter register state.

On completion of SPI word transfer (bit EOT of the register MCSPI\_CH(i)STAT is set) the received data is transferred to the channel receive register. This bit is meaningless when using the Buffer for this channel. The built-in FIFO is available in this mode and can be configured with FFER bit field in the MCSPI\_CH(i)CONF register, then the FIFO is seen as a unique 64-byte buffer.

Figure 24-24 shows an example of a half-duplex system with a master device on the left and a receiveonly slave device on the right. Each time one bit transfers out from the master, one bit transfers in to the slave. If WordA is 8 bits, then after eight cycles of the serial clock spim\_clk, WordA transfers from the master to the slave.

Figure 24-24. SPI Half-Duplex Transmission (Receive-Only Slave)

<!-- image -->

108-032