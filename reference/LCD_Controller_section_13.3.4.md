## 13.3.4 DMA Engine

The DMA engine provides the capability to output graphics data to constantly refresh LCDs, without burdening the CPU, via interrupts or a firmware timer. It operates on one or two frame buffers, which are set up during initialization. Using two frame buffers (ping-pong buffers) enables the simultaneous operation of outputting the current video frame to the external display and updating the next video frame. The ping-pong buffering approach is preferred in most applications.

When the Raster Controller is used, the DMA engine reads data from a frame buffer and writes it to the input FIFO (as shown in Figure 13-1). The Raster Controller requests data from the FIFO for frame refresh; as a result, the DMA's job is to ensure that the FIFO is always kept full.

When the LIDD Controller is used, the DMA engine accesses the LIDD Controller's address and/or data registers.

To program the DMA engine, configure the following registers, as shown in Table 13-5.

Table 13-5. Register Configuration for DMA Engine Programming

| Register                           | Configuration                                                                                       |
|------------------------------------|-----------------------------------------------------------------------------------------------------|
| LCDDMA_CTRL                        | Configure DMA data format                                                                           |
| LCDDMA_FB0_BASE LCDDMA_FB0_CEILING | Configure frame buffer 0                                                                            |
| LCDDMA_FB1_BASE LCDDMA_FB1_CEILING | Configure frame buffer 1. (If only one frame buffer is used, these two registers will not be used.) |

In addition, the LIDD\_CTRL register (for LIDD Controller) or the RASTER\_CTRL register (for Raster Controller) should also be configured appropriately, along with all the timing registers.

To enable DMA transfers, the LIDD\_DMA\_EN bit (in the LIDD\_CTRL register) or the LCDEN bit (in the RASTER\_CTRL register) should be written with 1.

## CAUTION

Writes to RAM will fail when they are in the vicinity of where the DMA Engine is reading. Thus, for screen updates to occur smoothly, rendering must be done to a buffer that is not currently in use by the DMA engine. The between-frames period (immediately after the end-of-frame interrupts) works well to BLIT a "back buffer" (double-buffering) to the "front buffer" where DMA reads next. This works well, and enables application firmware to let the DMA engine continue reading from the same frame buffer. Alternatively, the location of where the DMA engine is reading from can be changed to an alternate (preprepared) frame buffer. When doing so at the end-of-frame interrupt, by the time the ISR knows it is an EOF0 interrupt (for example), the DMA engine has already read its BASE and CEILING addresses for the next frame (FrameBuffer1). So the DMA BASE and CEILING addresses that can be changed safely at this point would be for FrameBuffer0 (the same buffer as the frame that just completed). Then the DMA engine starts using these addresses on the next ! frame. If FrameBuffer1 BASE and CEILING are also updated, those take effect the next time the DMA engine reads them (after 2 frames).

## 13.3.4.1 Interrupts

Interrupts in this LCD module are related to DMA engine operation. Four registers are used to control and monitor the interrupts:

- The IRQENABLE\_SET register allows the user to enable any of the interrupt sources.
- The IRQENABLE\_CLEAR register allows the user to disable interrupts sources.
- The IRQSTATUS\_RAW register collects all the interrupt status information.

<!-- image -->