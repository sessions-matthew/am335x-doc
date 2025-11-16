<!-- image -->

www.ti.com

## 19.3.6 FIFO Management

The FIFO is accessed by reading and writing the UARTi.UART\_RHR and UARTi.UART\_THR registers. Parameters are controlled using the FIFO control register (UARTi.UART\_FCR) and supplementary control register (UARTi.UART\_SCR). Reading the UARTi.UART\_SSR[0] TX\_FIFO\_FULL bit at 1 means the FIFO is full.

The UARTi.UART\_TLR register controls the FIFO trigger level, which enables DMA and interrupt generation. After reset, transmit (TX) and receive (RX) FIFOs are disabled; thus, the trigger level is the default value of 1 byte. Figure 19-4 shows the FIFO management registers.

NOTE:

Data in the UARTi.UART\_RHR register is not overwritten when an overflow occurs.

NOTE:

The UARTi.UART\_SFLSR, UARTi.UART\_SFREGL, and UARTi.UART\_SFREGH status registers are used in IrDA mode only. For use, see Section 19.3.8.2.6, IrDA Data Formatting .

## Figure 19-4. FIFO Management Registers

<!-- image -->

## 19.3.6.1 FIFO Trigger

## 19.3.6.1.1 Transmit FIFO Trigger

Table 19-14 lists the TX FIFO trigger level settings.

Table 19-14. TX FIFO Trigger Level Setting Summary

|   UART_SCR[6] | UART_TLR[3:0]   | TX FIFO Trigger Level                                                                                                                                                                                                                                                                                       |
|---------------|-----------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|             0 | = 0x0           | Defined by the UARTi.UART_FCR[5:4] TX_FIFO_TRIG bit field (8,16, 32, or 56 spaces)                                                                                                                                                                                                                          |
|             0 | != 0x0          | Defined by the UARTi.UART_TLR[3:0] TX_FIFO_TRIG_DMA bit field (from 4 to 60 spaces with a granularity of 4 spaces)                                                                                                                                                                                          |
|             1 | Value           | Defined by the concatenated value of TX_FIFO_TRIG_DMA and TX_FIFO_TRIG (from 1 to 63 spaces with a granularity of 1 space) Note: The combination of TX_FIFO_TRIG_DMA = 0x0 and TX_FIFO_TRIG = 0x0 (all zeros) is not supported (minimum of one space required). All zeros result in unpredictable behavior. |

## 19.3.6.1.2 Receive FIFO Trigger

Table 19-15 lists the RX FIFO trigger level settings.

## Table 19-15. RX FIFO Trigger Level Setting Summary

|   UART_SCR[7] | UART_TLR[7:4]   | RX FIFO Trigger Level                                                                                                                                                                                                                                                                                                   |
|---------------|-----------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|             0 | = 0x0           | Defined by the UARTi.UART_FCR[7:6] RX_FIFO_TRIG bit field (8,16, 56, or 60 characters)                                                                                                                                                                                                                                  |
|             0 | != 0x0          | Defined by the UARTi.UART_TLR[7:4] RX_FIFO_TRIG_DMA bit field (from 4 to 60 characters with a granularity of 4 characters)                                                                                                                                                                                              |
|             1 | Value           | Defined by the concatenated value of RX_FIFO_TRIG_DMA and RX_FIFO_TRIG (from 1 to 63 characters with a granularity of 1 character) Note: The combination of RX_FIFO_TRIG_DMA = 0x0 and RX_FIFO_TRIG = 0x0 (all zeros) is not supported (minimum of one character required). All zeros result in unpredictable behavior. |

The receive threshold is programmed using the UARTi.UART\_TCR[7:4] RX\_FIFO\_TRIG\_START and UARTi.UART\_TCR[3:0] RX\_FIFO\_TRIG\_HALT bit fields:

- Trigger levels from 0 to 60 bytes are available with a granularity of 4 (trigger level = 4 x [4-bit register value]).
- To ensure correct device operation, ensure that RX\_FIFO\_TRIG\_HALT RX\_FIFO\_TRIG when autoRTS is enabled.

Delay = [4 + 16 x (1 + CHAR\_LENGTH + Parity + Stop 0.5)] x Baud\_rate + 4 x FCLK

NOTE:

The RTS signal is deasserted after the UART module receives the data over RX\_FIFO\_TRIG\_HALT. Delay means how long the UART module takes to deassert the RTS signal after reaching RX\_FIFO\_TRIG\_HALT.

- In FIFO interrupt mode with flow control, ensure that the trigger level to HALT transmission is greater than or equal to the RX FIFO trigger level (the UARTi.UART\_TCR[7:4] RX\_FIFO\_TRIG\_START bit field or the UARTi.UART\_FCR[7:6] RX\_FIFO\_TRIG bit field); otherwise, FIFO operation stalls. In FIFO DMA mode with flow control, this concept does not exist, because a DMA request is sent when a byte is received.

<!-- image -->

<!-- image -->

www.ti.com

## 19.3.6.2 FIFO Interrupt Mode

In FIFO interrupt mode (the FIFO control register UARTi.UART\_FCR[0] FIFO\_EN bit is set to 1 and relevant interrupts are enabled by the UARTi.UART\_IER register), an interrupt signal informs the processor of the status of the receiver and transmitter. These interrupts are raised when the RX/TX FIFO threshold (the UARTi.UART\_TLR[7:4] RX\_FIFO\_TRIG\_DMA and UARTi.UART\_TLR[3:0] TX\_FIFO\_TRIG\_DMA bit fields or the UARTi.UART\_FCR[7:6] RX\_FIFO\_TRIG and UARTi.UART\_FCR[5:4] TX\_FIFO\_TRIG bit fields, respectively) is reached.

The interrupt signals instruct the MPU to transfer data to the destination (from the UART in receive mode and/or from any source to the UART FIFO in transmit mode).

When UART flow control is enabled with interrupt capabilities, the UART flow control FIFO threshold (the UARTi.UART\_TCR[3:0] RX\_FIFO\_TRIG\_HALT bit field) must be greater than or equal to the RX FIFO threshold.

Figure 19-5 shows the generation of the RX FIFO interrupt request.

Figure 19-5. RX FIFO Interrupt Request Generation

<!-- image -->

In receive mode, no interrupt is generated until the RX FIFO reaches its threshold. Once low, the interrupt can be deasserted only when the MPU has handled enough bytes to put the FIFO level below threshold. The flow control threshold is set at a higher value than the FIFO threshold.

Figure 19-6 shows the generation of the TX FIFO interrupt request.

<!-- image -->

Figure 19-6. TX FIFO Interrupt Request Generation

<!-- image -->

In transmit mode, an interrupt request is automatically asserted when the TX FIFO is empty. This request is deasserted when the TX FIFO crosses the threshold level. The interrupt line is deasserted until a sufficient number of elements is transmitted to go below the TX FIFO threshold.

## 19.3.6.3 FIFO Polled Mode Operation

In FIFO polled mode (the UARTi.UART\_FCR[0] FIFO\_EN bit is set to 0 and the relevant interrupts are disabled by the UARTi.UART\_IER register), the status of the receiver and transmitter can be checked by polling the line status register (UARTi.UART\_LSR).

This mode is an alternative to the FIFO interrupt mode of operation in which the status of the receiver and transmitter is automatically determined by sending interrupts to the MPU.

## 19.3.6.4 FIFO DMA Mode Operation

Only DMA modes 0 and 1 are supported on this device.

- When the UARTi.UART\_SCR[0] DMA\_MODE\_CTL bit is set to 0, setting the UARTi.UART\_FCR[3]DMA\_MODE bit to 0 enables DMA mode 0. Setting the DMA\_MODE bit to 1 enables DMA mode 1.
- When the DMA\_MODE\_CTL bit is set to 1, the UARTi.UART\_SCR[2:1]DMA\_MODE\_2 bit field determines DMA mode 0 to mode 3 based on the supplementary control register (UART\_SCR) description.

## For example:

- If no DMA operation is desired, set the DMA\_MODE\_CTL bit to 1 and the DMA\_MODE\_2 bit field to 0x0. (The DMA\_MODE bit is discarded.)
- If DMA mode 1 is desired, set the DMA\_MODE\_CTL bit to 0 and the DMA\_MODE bit to 1, or set the DMA\_MODE\_CTL bit to 1 and the DMA\_MODE\_2 bit field to 01. (The DMA\_MODE bit is discarded.)

If the FIFOs are disabled (the UARTi.UART\_FCR[0] FIFO\_EN bit is set to 0), the DMA occurs in singlecharacter transfers.

When DMA mode 0 is programmed, the signals associated with DMA operation are not active.

Depending on UART\_MDR3[2] SET\_DMA\_TX\_THRESHOLD, the threshold can be programmed different ways:

- SET\_TX\_DMA\_THRESHOLD = 1: The threshold value will be the value of the UART\_TX\_DMA\_THRESHOLD register. If SET\_TX\_DMA\_THRESHOLD + TX trigger spaces 64, then the default method of threshold is used: threshold value = TX FIFO size.

<!-- image -->

## www.ti.com

- SET\_TX\_DMA\_THRESHOLD = 0:

The threshold value = TX FIFO size - TX trigger space. The TX DMA line is asserted if the TX FIFO level is lower then the threshold. It remains asserted until TX trigger spaces number of bytes are written into the FIFO. The DMA line is then deasserted and the FIFO level is compared with the threshold value.

## 19.3.6.4.1 DMA Transfers (DMA Mode 1, 2, or 3)

Figure 19-7 through Figure 19-10 show the supported DMA operations.

<!-- image -->

In receive mode, a DMA request is generated when the RX FIFO reaches its threshold level defined in the trigger level register (UARTi.UART\_TLR). This request is deasserted when the number of bytes defined by the threshold level is read by the EDMA.

In transmit mode, a DMA request is automatically asserted when the TX FIFO is empty. This request is deasserted when the number of bytes defined by the number of spaces in the UARTi.UART\_TLR register is written by the EDMA. If an insufficient number of characters is written, the DMA request stays active.

Figure 19-8. Transmit FIFO DMA Request Generation (56 Spaces)

<!-- image -->

<!-- image -->

The DMA request is again asserted if the FIFO can receive the number of bytes defined by the UARTi.UART\_TLR register.

The threshold can be programmed in a number of ways. Figure 19-8 shows a DMA transfer operating with a space setting of 56 that can arise from using the auto settings in the UARTi.UART\_FCR[5:4] TX\_FIFO\_TRIG bit field or the UARTi.UART\_TLR[3:0] TX\_FIFO\_TRIG\_DMA bit field concatenated with the TX\_FIFO\_TRIG bit field.

The setting of 56 spaces in the UART/IrDA/CIR module must correlate with the settings of the EDMA so that the buffer does not overflow (program the DMA request size of the EDMA controller to equal the number of spaces in the UART/IrDA/CIR module).

Figure 19-9 shows an example with eight spaces to show the buffer level crossing the space threshold. The EDMA controller settings must correspond to those of the UART/IrDA/CIR module.

<!-- image -->

uart-028

The next example shows the setting of one space that uses the DMA for each transfer of one character to the transmit buffer (see Figure 19-10). The buffer is filled faster than the baud rate at which data is transmitted to the TX pin. Eventually, the buffer is completely full and the DMA operations stop transferring data to the transmit buffer.

On two occasions, the buffer holds the maximum amount of data words; shortly after this, the DMA is disabled to show the slower transmission of the data words to the TX pin. Eventually, the buffer is emptied at the rate specified by the baud rate settings of the UARTi.UART\_DLL and UARTi.UART\_DLH registers.

The DMA settings must correspond to the system EDMA controller settings to ensure correct operation of this logic.

<!-- image -->

www.ti.com

<!-- image -->

uart-029

The final example shows the setting of eight spaces, but setting the TX DMA threshold directly by setting the UART\_MDR3[1]SET\_DMA\_RX\_THRESHOLD bit and the UART\_TX\_DMA\_THRESHOLD register (see Figure 19-11). In the example, UART\_TX\_DMA\_THRESHOLD[2:0]TX\_DMA\_THRESHOLD = 3 and the trigger level is 8. The buffer is filled at a faster rate than the baud rate transmits data to the TX pin. The buffer is filled with 8 bytes and the DMA operations stop transferring data to the transmit buffer. When the buffer is emptied to the threshold level by transmission, the DMA operation activates again to fill the buffer with 8 bytes.

Eventually, the buffer is emptied at the rate specified by the baud rate settings of the UART\_DLL and UART\_DLH registers.

If the selected threshold level plus the trigger level exceed the maximum buffer size, the original TX DMA threshold method is used to prevent TX overrun, regardless of the value of the UART\_MDR3[1]SET\_DMA\_RX\_THRESHOLD bit.

The DMA settings must correspond to the settings of the system local host DMA controller to ensure the correct operation of this logic.

## 19.3.6.4.2 DMA Transmission

Figure 19-12 shows DMA transmission.

## Figure 19-12. DMA Transmission

<!-- image -->

uart-030

1. Data to be transmitted are put in the device memory reserved for UART/IrDA/CIR transmission by the DMA:
- a. Until the TX FIFO trigger level is not reached, a DMA request is generated
- b. An element (1 byte) is transferred from the SDRAM to the TX FIFO at each DMA request (DMA element synchronization).
2. Data in the TX FIFO are automatically transmitted.
3. The end of the transmission is signaled by the UARTi.UART\_THR empty (TX FIFO empty).

NOTE:

In IrDA mode, the transmission does not end immediately after the TX FIFO empties, at which point the last data byte, the CRC field, and the stop flag still must be transmitted; thus, the end of transmission occurs a few milliseconds after the UARTi.UART\_THR register empties.

<!-- image -->

Figure 19-11. Transmit FIFO DMA Request Generation Using Direct TX DMA Threshold Programming. (Threshold = 3; Spaces = 8)

<!-- image -->

uart-035