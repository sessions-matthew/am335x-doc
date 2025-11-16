## 24.3.4.1 Interrupt-Driven Operation

Alternatively, an interrupt enable bit, in the MCSPI\_IRQENABLE register, can be set to enable each of the events to generate interrupt requests when the corresponding event occurs. Status bits are automatically set by hardware logic conditions.

When an event occurs (the single interrupt line is asserted), the CPU must:

- Read the MCSPI\_IRQSTATUS register to identify which event occurred,
- Read the receiver register that corresponds to the event in order to remove the source of an RX\_full event, or write into the transmitter register that corresponds to the event in order to remove the source of a TX\_empty event. No action is needed to remove the source of the events TX\_underflow and RX\_overflow.
- Write a 1 into the corresponding bit of MCSPI\_IRQSTATUS register to clear the interrupt status, and release the interrupt line.

The interrupt status bit should always be reset after the channel is enabled and before the event is enabled as an interrupt source.

## 24.3.4.2 Polling

When the interrupt capability of an event is disabled in the MCSPI\_IRQENABLE register, the interrupt line is not asserted and:

- The status bits in the MCSPI\_IRQSTATUS register can be polled by software to detect when the corresponding event occurs.
- Once the expected event occurs, CPU must read the receiver register that corresponds to the event in order to remove the source of an RX\_full event, or write into the transmitter register that corresponds to the event in order to remove the source of a TX\_empty event. No action is needed to remove the source of the events TX\_underflow and RX\_overflow.
- Writing a 1 into the corresponding bit of MCSPI\_IRQSTATUS register clears the interrupt status and does not affect the interrupt line state.

## 24.3.5 DMA Requests

McSPI can be interfaced with a DMA controller. At system level, the advantage is to free the local host of the data transfers.

According to its transmitter register state, its receiver register state or FIFO level (if use of buffer for the channel) each channel can issue DMA requests if they are enabled.

The DMA requests need to be disabled in order to get TX and RX interrupts, in order to define either the end of the transfer or the transfer of the last words for the modes listed below:

- Master transmit-only
- Master normal receive-only mode
- Master turbo receive-only mode
- Slave transmit-only

There are two DMA request lines per channel. The management of DMA requests differ according to use of FIFO buffer or not.

## 24.3.5.1 FIFO Buffer Disabled

The DMA Read request line is asserted when the channel is enabled and a new data is available in the receive register of the channel. DMA Read request can be individually masked with the bit DMAR of the register MCSPI\_CH(i)CONF. The DMA Read request line is de-asserted on read completion of the receive register of the channel.

The DMA Write request line is asserted when the channel is enabled and the transmitter register of the channel is empty. DMA Write request can be individually masked with the bit DMAW of the register MCSPI\_CH(i)CONF. The DMA Write request line is de-asserted on load completion of the transmitter register of the channel.

<!-- image -->