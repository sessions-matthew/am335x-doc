<!-- image -->

www.ti.com

## 18.3.4.1 Interrupt-Driven Operation

An interrupt enable bit must be set in the SD\_IE register to enable the module internal source of interrupt.

When an interrupt event occurs, the single interrupt line is asserted and the LH must:

- Read the SD\_STAT register to identify which event occurred.
- Write 1 into the corresponding bit of the SD\_STAT register to clear the interrupt status and release the interrupt line (if a read is done after this write, this would return 0).

NOTE:

## 18.3.4.2 Polling

When the interrupt capability of an event is disabled in the SD\_ISE register, the interrupt line is not asserted:

- Software can poll the status bit in the SD\_STAT register to detect when the corresponding event occurs.
- Writing 1 into the corresponding bit of the SD\_STAT register clears the interrupt status and does not affect the interrupt line state.

NOTE:

Please see the note in Section 18.3.4.1 concerning CIRQ and ERRI bits clearing.

## 18.3.5 DMA Modes

The device supports DMA slave mode only. In this case, the controller is slave on DMA transaction managed by two separated requests (SDMAWREQN and SDMARREQN)

## 18.3.5.1 DMA Slave Mode Operations

The MMC/SD/SDIO controller can be interfaced with a DMA controller. At system level, the advantage is to discharge the local host (LH) of the data transfers. The module does not support wide DMA access (above 1024 bytes) for SD cards as specified in the SD Card Specification and SD Host Controller Standard Specification .

The DMA request is issued if the following conditions are met:

- The SD\_CMD[0] DE bit is set to 1 to trigger the initial DMA request (the write must be done when running the data transfer command).
- A command was emitted on the SD\_cmd line.
- There is enough space in the buffer of the MMC/SD/SDIO controller to write an entire block (BLEN writes).

In the SD\_STAT register, Card Interrupt (CIRQ) and Error Interrupt (ERRI) bits cannot be cleared.

The SD\_STAT[8] CIRQ status bit must be masked by disabling the SD\_IE[8] CIRQ\_ENABLE bit (cleared to 0), then the interrupt routine must clear SDIO interrupt source in SDIO card common control register (CCCR).

The SD\_STAT[15] ERRI bit is automatically cleared when all status bits in SD\_STAT[31:16] are cleared.

## 18.3.5.1.1 DMA Receive Mode

In a DMA block read operation (single or multiple), the request signal SDMARREQN is asserted to its active level when a complete block is written in the buffer. The block size transfer is specified in the SD\_BLK[10:0] BLEN field.

The SDMARREQN signal is deasserted to its inactive level when the sDMA has read one single word from the buffer. Only one request is sent per block; the DMA controller can make a 1-shot read access or several DMA bursts, in which case the DMA controller must manage the number of burst accesses, according to block size BLEN field.

New DMA requests are internally masked if the sDMA has not read exactly BLEN bytes and a new complete block is not ready. As DMA accesses are in 32-bit, then the number of sDMA read is Integer(BLEN/4)+1.

The receive buffer never overflows. In multiple block transfers for block size above 512 bytes, when the buffer gets full, the MMC\_CLK clock signal (provided to the card) is momentarily stopped until the sDMA or the MPU performs a read access, which reads a complete block in the buffer.

## Figure 18-17 provides a summary:

- DMA transfer size = BLEN buffer size in one shot or by burst
- One DMA request per block

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 18.3.5.1.2 DMA Transmit Mode

In a DMA block write operation (single or multiple), the request signal SDMAWREQN is asserted to its active level when a complete block is to be written to the buffer. The block size transfer is specified in the SD\_BLK[10:0] BLEN field.

The SDMAWREQN signal is deasserted to its inactive level when the sDMA has written one single word to the buffer.

Only one request is sent per block; the DMA controller can make a 1-shot write access or multiple write DMA bursts, in which case the DMA controller must manage the number of burst accesses, according to block size BLEN field.

New DMA requests are internally masked if the sDMA has not written exactly BLEN bytes (as DMA accesses are in 32-bit, then the number of sDMA read is Integer(BLEN/4)+1) and if there is not enough memory space to write a complete block in the buffer.

## Figure 18-18 provides a summary:

- DMA transfer size = BLEN buffer size in one shot or by burst
- One DMA request per block

## Figure 18-18. DMA Transmit Mode

<!-- image -->