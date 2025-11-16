<!-- image -->

www.ti.com

## 24.3.3.5 Slave Transmit-Only Mode

The slave transmit-only mode is programmable (MCSPI\_CH(i)CONF[TRM] set to 10). This mode eliminates the need for the CPU to read the receiver register (minimizing data movement) when only transmission is meaningful.

To use McSPI as a slave transmit-only device with MCSPI\_CH(i)CONF[TRM]=10, the user should disable the RX\_full and RX\_overflow interrupts and DMA read requests due to the receiver register state.

On completion of SPI word transfer the bit EOT of the register MCSPI\_CH(i)STAT is set. This bit is meaningless when using the Buffer for this channel.

The built-in FIFO is available in this mode and can be configured with FFER bit field in the MCSPI\_CH(i)CONF register, then the FIFO is seen as a unique 64-byte buffer.

Figure 24-25 shows a half-duplex system with a master device on the left and a transmit-only slave device on the right. Each time a bit transfers out from the slave device, one bit transfers in the master. If WordB is 8-bits, then after eight cycles of the serial clock spim\_clk, WordB transfers from the slave to the master.

Figure 24-25. SPI Half-Duplex Transmission (Transmit-Only Slave)

<!-- image -->

## 24.3.4 Interrupts

According to its transmitter register state and its receiver register state each channel can issue interrupt events if they are enabled.

The interrupt events are listed in the Section 24.3.2.2 and in Section 24.3.3.2.

Each interrupt event has a status bit, in the MCSPI\_IRQSTATUS register, which indicates service is required, and an interrupt enable bit, in the MCSPI\_IRQENABLE register, which enables the status to generate hardware interrupt requests.

When an interrupt occurs and it is later masked (IRQENABLE), the interrupt line is not asserted again even if the interrupt source has not been serviced.

McSPI supports interrupt driven operation and polling.