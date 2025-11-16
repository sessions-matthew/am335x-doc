interrupt is used to let the CPU know that the I2C registers are ready for access.

- Receive interrupt/status (RRDY) is generated when there is received data ready to be read by the CPU from the I2C\_DATA register (see the FIFO Management subsection for a complete description of required conditions for interrupt generation). The CPU can alternatively poll this bit to read the received data from the I2C\_DATA register.
- Transmit interrupt/status (XRDY) is generated when the CPU needs to put more data in the I2C\_DATA register after the transmitted data has been shifted out on the SDA pin (see the FIFO Management subsection for a complete description of required conditions for interrupt generation). The CPU can alternatively poll this bit to write the next transmitted data into the I2C\_DATA register.
- Receive draining interrupt (RDR) is generated when the transfer length is not a multiple of threshold value, to inform the CPU that it can read the amount of data left to be transferred and to enable the draining mechanism (see Section 21.3.14.4, Draining Feature , for additional details).
- Transmit draining interrupt (XDR) is generated when the transfer length is not a multiple of threshold value, to inform the CPU that it can read the amount of data left to be written and to enable the draining mechanism (see Section 21.3.14.4, Draining Feature , for additional details).

When the interrupt signal is activated, the Local Host must read the I2C\_IRQSTATUS\_RAW register to define the type of the interrupt, process the request, and then write into these registers the correct value to clear the interrupt flag.

## 21.3.12 DMA Events

The I2C module can generate two DMA requests events, read (I2C\_DMA\_RX) and write (I2C\_DMA\_TX) that can be used by the DMA controller to synchronously read received data from the I2C\_DATA or write transmitted data to the I2C\_DATA register. The DMA read and write requests are generated in a similar manner as RRDY and XRDY, respectively.

The I2C DMA request signals (I2C\_DMA\_TX and I2C\_DMA\_RX) are activated according to the FIFO Management subsection.

## 21.3.13 Interrupt and DMA Events

I2C has two DMA channels (Tx and Rx).

I2C has one interrupt line for all the interrupt requests.

For the event and interrupt numbers, see the device-specific datasheet.

## 21.3.14 FIFO Management

The I2C module implements two internal 32-bytes FIFOs with dual clock for RX and TX modes. The depth of the FIFOs can be configured at integration via a generic parameter which will also be reflected in I2C\_IRQSTATUS\_RAW.FIFODEPTH register.

## 21.3.14.1 FIFO Interrupt Mode Operation

In FIFO interrupt mode (relevant interrupts enabled via I2C\_IRQENABLE\_SET register), the processor is informed of the status of the receiver and transmitter by an interrupt signal. These interrupts are raised when receive/transmit FIFO threshold (defined by I2C\_BUF.TXTRSH or I2C\_BUF.RXTRSH) are reached; the interrupt signals instruct the Local Host to transfer data to the destination (from the I2C module in receive mode and/or from any source to the I2C FIFO in transmit mode).

Figure 21-11 and Figure 21-12, respectively, illustrate receive and transmit operations from FIFO management point of view.

<!-- image -->

<!-- image -->

www.ti.com

Figure 21-11. Receive FIFO Interrupt Request Generation

<!-- image -->

Note that in Figure 21-11, the RRDY Condition illustrates that the condition for generating a RRDY interrupt is achieved. The interrupt request is generated when this signal is active, and it can be cleared only by the CPU by writing a 1 in the corresponding interrupt flag. If the condition is still present after clearing the previous interrupt, another interrupt request will be generated.

In receive mode, RRDY interrupt is not generated until the FIFO reaches its receive threshold. Once low, the interrupt can only be de-asserted when the Local Host has handled enough bytes to make the FIFO level below threshold. For each interrupt, the Local Host can be configured to read an amount of bytes equal with the value of the RX FIFO threshold + 1.

Figure 21-12. Transmit FIFO Interrupt Request Generation

<!-- image -->

Note that in Figure 21-12, the XRDY Condition illustrates that the condition for generating a XRDY interrupt is achieved. The interrupt request is generated when this condition is achieved (when TX FIFO is empty, or the TX FIFO threshold is not reached and there are still data bytes to be transferred in the TX FIFO), and it can be cleared only by the CPU by writing a 1 in the corresponding interrupt flag after transmitting the configured number of bytes. If the condition is still present after clearing the previous interrupt, another interrupt request will be generated.

Note that in interrupt mode, the module offers two options for the CPU application to handle the interrupts:

- When detecting an interrupt request (XRDY or RRDY type), the CPU can write/read one data byte to/from the FIFO and then clear the interrupt. The module will not reassert the interrupt until the

interrupt condition is not met.

- When detecting an interrupt request (XRDY or RRDY type), the CPU can be programmed to write/read the amount of data bytes specified by the corresponding FIFO threshold (I2C\_BUF.TXTRSH + 1 or I2C\_BUF.RXTRSH + 1). In this case, the interrupt condition will be cleared and the next interrupt will be asserted again when the XRDY or RRDY condition will be again met.

If the second interrupt serving approach is used, an additional mechanism (draining feature) is implemented for the case when the transfer length is not a multiple of FIFO threshold (see Section 21.3.14.4, Draining Feature ).

In slave TX mode, the draining feature cannot be used, since the transfer length is not known at the configuration time, and the external master can end the transfer at any point by not acknowledging one data byte.

## 21.3.14.2 FIFO Polling Mode Operation

In FIFO polled mode (I2C\_IRQENABLE\_SET.XRDY\_IE and I2C\_IRQENABLE\_SET.RRDY\_IE disabled and DMA disabled), the status of the module (receiver or transmitter) can be checked by polling the XRDY and RRDY status registers (I2C\_IRQSTATUS\_RAW) (RDR and XDR can also be polled if draining feature must be used). The XRDY and RRDY flags are accurately reflecting the interrupt conditions mentioned in Interrupt Mode. This mode is an alternative to the FIFO interrupt mode of operation, where the status of the receiver and transmitter is automatically known by means of interrupts sent to the CPU.

## 21.3.14.3 FIFO DMA Mode Operation

In receive mode, a DMA request is generated as soon as the receive FIFO exceeds its threshold level defined in the threshold level register (I2C\_BUF.RXTRSH +1). This request should be de-asserted when the number of bytes defined by the threshold level has been read by the DMA, by setting the I2C\_DMARXENABLE\_CLR.DMARX\_ENABLE\_CLEAR field.

Figure 21-13. Receive FIFO DMA Request Generation

<!-- image -->

In transmit mode, a DMA request is automatically asserted when the transmit FIFO is empty. This request should be de-asserted when the number of bytes defined by the number in the threshold register

(I2C\_BUF.TXTHRS+1) has been written in the FIFO by the DMA, by setting the I2C\_DMATXENABLE\_CLR. DMATX\_ENABLE\_CLEAR field. If an insufficient number of characters are written, then the DMA request will remain active. Figure 21-14 and Figure 21-15 illustrate DMA TX

transfers with different values for TXTRSH.

<!-- image -->

<!-- image -->

www.ti.com

Figure 21-14. Transmit FIFO DMA Request Generation (High Threshold)

<!-- image -->

Figure 21-15. Transmit FIFO DMA Request Generation (Low Threshold)

<!-- image -->

Note that also in DMA mode it is possible to have a transfer whose length is not multiple of the configured FIFO threshold. In this case, the DMA draining feature is also used for transferring the additional bytes of the transfer (see Section 21.3.14.4, Draining Feature , for additional details).

According to the desired operation mode, the programmer must set the FIFO thresholds according to the following table (note that only the interface/OCP side thresholds can be programmed; the I2C side thresholds are default equals to 1). Note that the thresholds must be set consistent with the DMA channel length.

In I2C Slave RX Mode, the Local Host can program the RX threshold with the desired value, and use the FIFO draining feature at the end of the I2C transfer to extract from the FIFO the remaining bytes if the threshold is not reached (see Section 21.3.14.4, Draining Feature , for additional details).

<!-- image -->

Note that in I2C Slave TX Mode, the TX FIFO threshold should be set to 1 (I2C\_BUF.TXTRSH=0, default value), since the length of the transfer may not be known at configuration time. In this way, the interrupt (or accordingly, DMA) requests will be generated for each byte requested by the remote I2C master to be transferred over the I2C bus. This configuration will prevent the I2C core to request additional data from the CPU or from the DMA controller (using IRQ or DMA), data that will eventually not be extracted from the FIFO by the external master (which can use not acknowledge at any time to end the transfer). If the TX threshold is not set to 1, the module will generate an interrupt or assert a DMA only when the external master requests a byte and the FIFO is empty. However, in this case the TX FIFO will require to be cleared at the end of the transfer.

The I2C module offers the possibility to the user to clear the RX or TX FIFO. This is achieved through I2C\_BUF.RXFIFO\_CLR and I2C\_BUF.TXFIFO\_CLR registers, which act like software reset for the FIFOs. In DMA mode, these bits will also reset the DMA state machines.

The FIFO clearing feature can be used when the module is configured as a transmitter, the external receiver responds with a NACK in the middle of the transfer, and there is still data in TX FIFO waiting to be transferred.

On the Functional (I2C) domain, the thresholds can always be considered equal to 1. This means that the I2C Core can start transferring data on the I2C bus whenever it has data in the FIFOs (FIFO is not empty).