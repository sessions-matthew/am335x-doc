<!-- image -->

www.ti.com

Only one SPI word can be transmitted/received per OCP bus access to write/read the transmit or receive register.

## 24.3.5.2 FIFO Buffer Enabled

The DMA Read request line is asserted when the channel is enabled and a number of bytes defined in MCSPI\_XFERLEVEL[AFL] bit field is hold in FIFO buffer for the receive register of the channel. DMA Read request can be individually masked with the bit DMAR of the register MCSPI\_CH(i)CONF. The DMA Read request line is de-asserted on the first SPI word read completion of the receive register of the channel. No new DMA request will be asserted again as soon as user has not performed the right number of read accesses defined by MCSPI\_XFERLEVEL[AFL] it is under user responsibility.

The DMA Write request line is asserted when the channel is enabled and the number of bytes hold in FIFO buffer is below the level defined by the MCSPI\_XFERLEVEL[AEL] bit field. DMA Write request can be individually masked with the bit DMAW of the register MCSPI\_CH(i)CONF. The DMA Write request line is de-asserted on load completion of the first SPI word in the transmitter register of the channel. No new DMA request will be asserted again as soon as user has not performed the right number of write accesses defined by MCSPI\_XFERLEVEL[AEL] it is under user responsibility.

Only one SPI word can be transmitted/received per OCP bus access to write/read the transmit or receive FIFO.

## 24.3.5.3 DMA 256-Bit Aligned Addresses

The controller has two registers, MCSPI\_DAFTX and MCSPI\_DAFRX, used only with an enabled channel which manages the FIFO to be compliant the a DMA handler providing only 256-bit aligned addresses.

This features is activated when the bit field MCSPI\_MODULCTRL[FDDA] is set to '1' and only one enabled channel have its bit field MCSPI\_CH(i)CONF[FFEW] or MCSPI\_CH(i)CONF[FFER] enabled.

In this case the registers MCSPI\_TX(i) and MCSPI\_RX(i) are not used and data is managed through registers MCSPI\_DAFTX and MCSPI\_DAFRX.

## 24.3.6 Emulation Mode

The MReqDebug input differentiates a regular access of a processor (application access), from an emulator access.

Application access: MReqDebug = 0

In functional mode, the consequences of a read of a receiver register MCSPI\_RX(i) are the following:

- The source of an RX(i)\_Full event in the MCSPI\_IRQSTATUS register is removed, if it was enabled in the MCSPI\_IRQENABLE register.
- The RX(i)S status bit in the MCSPI\_IRQSTATUS register is cleared.
- In master mode, depending on the round robin arbitration, and the transmitter register state, the channel may access to the shift register for transmission/reception.

Emulator access: MReqDebug = 1

In emulation mode, McSPI behavior is the same as in functional mode but a read of a receiver register MCSPI\_RX(i) is not intrusive:

- MCSPI\_RX(i) is still considered as not read. When the FIFO buffer is enabled, pointers are not updated.
- The source of an RX(i)\_Full event in the MCSPI\_IRQSTATUS register is not removed. The RX(i)S status bit in the MCSPI\_CH(i)STAT register is held steady.

In emulation mode, as in functional mode, based on the ongoing data transfers, the status bits of the MCSPI\_CH(i)STAT register may be optionally updated, the interrupt and DMA request lines may be optionally asserted.