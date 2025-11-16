## 21.3.15.4 Initiate a Transfer

Poll the bus busy (BB) bit in the I2C status register (I2C\_IRQSTATUS\_RAW). If it is cleared to 0 (bus not busy), configure START/STOP (I2C\_CON: STT / I2C\_CON: STP condition to initiate a transfer) - only in case of I2C operating mode (F/S mode).

## 21.3.15.5 Receive Data

Poll the receive data ready interrupt flag bit (RRDY) in the I2C status register (I2C\_IRQSTATUS\_RAW), use the RRDY interrupt (I2C\_IRQENABLE\_SET.RRDY\_IE set) or use the DMA RX (I2C\_BUF.RDMA\_EN set together with I2C\_DMARXENABLE\_SET) to read the received data in the data receive register (I2C\_DATA). Use draining feature (I2C\_IRQSTATUS\_RAW.RDR enabled by I2C\_IRQENABLE\_SET.RDR\_IE)) if the transfer length is not equal with FIFO threshold.

## 21.3.15.6 Transmit Data

Poll the transmit data ready interrupt flag bit (XRDY) in the I2C status register (I2C\_IRQSTATUS\_RAW), use the XRDY interrupt (I2C\_IRQENABLE\_SET.XRDY\_IE set) or use the DMA TX (I2C\_BUF.XDMA\_EN set together with I2C\_DMATXENABLE\_SET) to write data into the data transmit register (I2C\_DATA). Use draining feature (I2C\_IRQSTATUS\_RAW.XDR enabled by I2C\_IRQENABLE\_SET.XDR\_IE)) if the transfer length is not equal with FIFO threshold.

## 21.3.16 I2C Behavior During Emulation

To configure the I2C to stop during emulation suspend events (for example, debugger breakpoints), set up the I2C and the Debug Subsystem:

1. Set I2C\_SYSTEST.FREE=0. This will allow the Suspend\_Control signal from the Debug Subsystem (Chapter 27) to stop and start the I2C. Note that if FREE=1, the Suspend\_Control signal is ignored and the I2C is free running regardless of any debug suspend event. This FREE bit gives local control from a module perspective to gate the suspend signal coming from the Debug Subsystem.
2. Set the appropriate xxx\_Suspend\_Control register = 0x9, as described in Section 27.1.1.1, Debug Suspend Support for Peripherals . Choose the register appropriate to the peripheral you want to suspend during a suspend event.

<!-- image -->