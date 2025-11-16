<!-- image -->

www.ti.com

## 13.3.8 DMA

DDR access is handled internally by the DMA module. For Character Displays, the DMA module can transfer a sequence of data transactions from the DDR to LCD panel. By using the DMA instead of the Host CPU, the Host will not be stalled waiting for the slow external peripheral to complete.

For Passive and Active Matrix displays, the DMA is used to read frame buffers with associated palette information from DDR. The DMA parses the frame buffer according to the frame buffer type and supplies the raster processing chain with Palette information and pixel data as needed.

## 13.3.9 Power Management

Power management within the DSS can be accomplished in several ways:

1. L4 OCP MConnect/SConnect can disable the internal L4 clock network.
2. L3 OCP MConnect/Sconnect can disable the internal L3 clock network.
3. Within the Clock Control register, there are clock enable registers to disable the clock networks to all major internal functional paths.
4. Power Compiler clock gates are automatically instantiated within datapaths to minimize active power.

Items 1 and 2 are accomplished using the standard IDLE (for L4) and STANDBY (for L3) IPGeneric modules. When these modules are instructed to disable clocks for the internal L3 or L4 (MMR) clock domains, the internal clock networks will be shut down. This shutdown applies to the external clock pins l3\_clk and l4\_clk.

All other internal clock domains (Item 3) can only be shut down by writing the appropriate register bit within the Clock Enable register. This software clock control applies to all other clock inputs.

Power Compiler clock gating is done automatically as a function of the design. There is no special control required for this operation.

Because the LCD normally drives displays, and because all video is sourced from the L3 clock domain, shutting down the L3 domain using the IPGenerics can cause undesirable display effects. In most circumstances, it will be necessary to hardware/software reset the LCD module after such an event has occurred.