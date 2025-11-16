<!-- image -->

www.ti.com

## 21.3.14.4 Draining Feature

The Draining Feature is implemented by the I2C core for handling the end of the transfers whose length is not a multiple of FIFO threshold value, and offers the possibility to transfer the remaining amount of bytes (since the threshold is not reached).

Note that this feature prevents the CPU or the DMA controller to attempt more FIFO accesses than necessary (for example, to generate at the end of a transfer a DMA RX request having in the FIFO less bytes than the configured DMA transfer length). Otherwise, an Access Error interrupt will be generated (see I2C\_IRQSTATUS\_RAW.AERR interrupt).

The Draining mechanism will generate an interrupt (I2C\_IRQSTATUS\_RAW.RDR or I2C\_IRQSTATUS\_RAW.XDR) at the end of the transfer informing the CPU that it needs to check the amount of data left to be transferred (I2C\_BUFSTAT.TXSTAT or RXSTAT) and to enable the Draining Feature of the DMA controller if DMA mode is enabled (by re-configuring the DMA transfer length according to this value), or perform only the required number of data accesses, if DMA mode is disabled.

In receiving mode (master or slave), if the RX FIFO threshold is not reached but the transfer was ended on the I2C bus and there is still data left in the FIFO (less than the threshold), the receive draining interrupt (I2C\_IRQSTATUS\_RAW.RDR) will be asserted to inform the local host that it can read the amount of data in the FIFO (I2C\_BUFSTAT.RXSTAT). The CPU will perform a number of data read accesses equal with RXSTAT value (if interrupt or polling mode) or re-configure the DMA controller with the required value in order to drain the FIFO.

In master transmit mode, if the TX FIFO threshold is not reached but the amount of data remaining to be written in the FIFO is less than TXTRSH, the transmit draining interrupt (I2C\_IRQSTATUS\_RAW.XDR) will be asserted to inform the local host that it can read the amount of data remained to be written in the TX FIFO (I2C\_BUFSTAT.TXSTAT). The CPU will need to write the required number of data bytes (specified by TXSTAT value) or re-configure the DMA controller with the required value in order to transfer the last bytes to the FIFO.

Note that in master mode, the CPU can alternatively skip the checking of TXSTAT and RXSTAT values since it can obtain internally this information (by computing DATACOUNT modulo TX/RXTHRSH).

The draining feature is disabled by default, and it can be enabled using I2C\_IRQENABLE\_SET.XDR\_IE or I2C\_IRQENABLE\_SET.RDR\_IE registers (default disabled) only for the transfers with length not equal with the threshold value.

## 21.3.15 How to Program I2C

## 21.3.15.1 Module Configuration Before Enabling the Module

1. Program the prescaler to obtain an approximately 12-MHz I2C module clock (I2C\_PSC = x; this value is to be calculated and is dependent on the System clock frequency).
2. Program the I2C clock to obtain 100 Kbps or 400 Kbps (SCLL = x and SCLH = x; these values are to be calculated and are dependent on the System clock frequency).
3. Configure its own address (I2C\_OA = x) - only in case of I2C operating mode (F/S mode).
4. Take the I2C module out of reset (I2C\_CON:I2C\_EN = 1).

## 21.3.15.2 Initialization Procedure

1. Configure the I2C mode register (I2C\_CON) bits.
2. Enable interrupt masks (I2C\_IRQENABLE\_SET), if using interrupt for transmit/receive data.
3. Enable the DMA (I2C\_BUF and I2C\_DMA/RX/TX/ENABLE\_SET) and program the DMA controller) only in case of I2C operating mode (F/S mode), if using DMA for transmit/receive data.

## 21.3.15.3 Configure Slave Address and DATA Counter Registers

In master mode, configure the slave address (I2C\_SA = x) and the number of byte associated with the transfer (I2C\_CNT = x).