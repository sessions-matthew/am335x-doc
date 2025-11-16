<!-- image -->

www.ti.com

## 13.3.7 Interrupt Conditions

## 13.3.7.1 Highlander 0.8 Interrupts

## 13.3.7.1.1 Highlander Interrupt Basics

The interrupt mechanism is Highlander 0.8-compliant and relies on the ipgvmodirq IP Generic. The ipgvmodirq module supports hardware-initiated interrupts, each of which can also be individually triggered by software. An interrupt mask function allows each interrupt to be masked or enabled. The software can read all of the raw interrupts or only those that are unmasked.

All pending interrupts in the LCD module must be serviced by the Host's Interrupt Service Routine before it exits.

The Interrupt Module registers are described in the following table.

Table 13-12. Highlander 0.8 Interrupt Module Control Registers

| Address Offset   | Name   | Description                      |
|------------------|--------|----------------------------------|
| 0x58             | Reg22  | Interrupt Raw Status Register    |
| 0x5C             | Reg23  | Interrupt Masked Status Register |
| 0x60             | Reg24  | Interrupt Enable Set (Unmask)    |
| 0x64             | Reg25  | Interrupt Enable Clear (Mask)    |
| 0x68             | Reg26  | End of Interrupt Indicator       |

## 13.3.7.1.2 Raw Status Register

Interrupts are associated with a bit position. For instance, Hardware Interrupt 0 is physically connected to bit 0 of the interrupt controller and all Sets, Clears, and Masks to this interrupt will reference the Bit 0 location of the interrupt vector. Likewise, Hardware Interrupt 1 is referenced by bit 1 of the interrupt vector, and so on.

The Host CPU can see all the interrupts that have been set, regardless of the interrupt mask, by reading Reg22, the Raw Status Register.

If the Host CPU writes a '1' to a bit position in Reg 22, it will do a software set for the interrupt associated with that bit position.

## 13.3.7.1.3 Masked Status Register

The Masked Status Register contains all the pending interrupts that are unmasked (enabled). The Interrupt Service Routine should read this register to determine which interrupts must be serviced.

## 13.3.7.1.4 Interrupt Enable Set Register

To unmask an interrupt, the Host CPU writes a '1' to the appropriate bit position of the Enable Set (Unmask) register.

## 13.3.7.1.5 Interrupt Enable Clear Register

To mask an interrupt, the Host CPU writes a '1' to the appropriate bit position of the Enable Clear (Mask) register.

## 13.3.7.1.6 End of Interrupt Register

The ipgvmodirq module supports level or pulse interrupts to the CPU. For pulse interrupts, the Host must write to an end-of-interrupt (EOI), memory-mapped address to indicate that the Interrupt Service Routine has completed and is exiting. Any pending interrupts that have not been serviced will trigger another interrupt pulse to the Host CPU.

## 13.3.7.2 Interrupt Sources

## 13.3.7.2.1 Overview of Interrupt Sources

The interrupt sources include:

- DMA End of Frame 0
- DMA End of Frame 1
- Palette Loaded
- FIFO Underflow
- AC Bias Count
- Sync Lost
- Recurrent Frame Done
- LIDD or Raster Frame Done

## 13.3.7.2.1.1 DMA End of Frame 0 and End of Frame 1 Interrupt

The DMA End of Frame 0 and End of Frame 1 interrupts are triggered when the DMA module has completed transferring the contents of a frame buffer bounded by cfg\_fb0\_base/cfg\_bf0\_ceil or cfg\_fb1\_base/cfg\_fb1\_ceil.

## 13.3.7.2.1.2 Palette Loaded Interrupt

When cfg\_palmode is set to Palette-only or Palette+data, the Palette Loaded interrupt is triggered when the palette portion of the DMA transfer has been stored in the Palette RAM.

## 13.3.7.2.1.3 FIFO Underflow Interrupt

The FIFO Underflow interrupt is triggered when the real-time output needs to send a value for pixel data but one cannot be found in the FIFO.

## 13.3.7.2.1.4 AC Bias Count Interrupt

For Passive Matrix displays, a count can be kept of the number of times the AC Bias line toggles. Once the specified number of transitions has been seen, the AC Bias Count interrupt is triggered. The module will not post any further interrupts or keep counting AC Bias transitions until the interrupt has been cleared.

## 13.3.7.2.1.5 Sync Lost Interrupt

When the DMA module reads a frame buffer and stores it in the FIFO, it sets a start frame and an end frame indicator embedded with the data. On retrieving the data from the FIFO in the lcd\_clk domain, the Sync Lost interrupt is triggered if the start indicator is not found at the first pixel of a new frame.

## 13.3.7.2.1.6 Recurrent Frame Done Interrupt

In raster mode, the Recurrent Frame Done interrupt is triggered each time a complete frame has been sent to the interface pins.

## 13.3.7.2.1.7 LIDD or Raster Frame Done Interrupt

In LIDD DMA mode, a frame buffer of data is sent. When the frame buffer has completed, the LIDD Frame Done interrupt is triggered. In order to do another LIDD DMA, the DMA engine must be disabled and then re-enabled.

In Raster mode, the interrupt is triggered after cfg\_lcden is set to '0' and after the last frame is sent to the pins. After the Raster mode DMA is running, the interrupt occurs only once after the module is disabled.

<!-- image -->

www.ti.com