## 13.4 Programming Model

## 13.4.1 LCD Character Displays

## 13.4.1.1 Configuration Registers, Setup, and Settings

## 13.4.1.1.1 Configuration Registers

Set the following to appropriate values for the target LCD character panel:

- cfg\_cs1\_e1\_pol
- cfg\_cs0\_e0\_pol
- ws\_dir\_pol
- cfg\_rs\_en\_pol
- cfg\_alepol

cfg\_lidd\_mode\_sel[2:0] defines the type of CPU bus that will be used in interfacing with the LCD character panel. Note that the clocked bus styles only support a single panel using CS0 since the clock pin takes a device pin that is otherwise used for CS1.

Set the following to appropriate bus timing parameters for the target LCD character panel:

- cfg\_w\_su
- cfg\_w\_strobe
- cfg\_w\_hold, cfg\_r\_su
- cfg\_r\_strobe
- cfg\_r\_hold
- cfg\_ta

A set of bus timing parameters are individually available for CS0 and CS1 such that the bus transactions can be customized for each of the two supported LCD character displays.

## 13.4.1.1.2 Defining Panel Commands and Panel Data

In the Hitachi interface mode used for the example panel, whether the Character Panel understands a data transfer as Command or Data depends on the state of the REGSEL input pin. Writing to the cfg\_adr\_indx register will output a Command transfer. Writing to the cfg\_data register will result in a Data transfer.

Functionally, the ALE (lcd\_fp pin) from the LCD controller is tied to the REGSEL input of the character panel.

For example, to send byte 0xAB as a command to the previously described character panel, the CPU would write 0x00AB to the adr\_indx register. To send byte 0xAB as data, the CPU would write 0x00AB to the data register.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 13.4.1.2 CPU Initiated Data Bus Transactions

## 13.4.1.2.1 Initiating Data Bus Transactions

Writing to cfg\_cs0\_data will initiate a write transfer to the CS0 panel. Reading from cfg\_cs0\_data will initiate a read transfer from the CS0 panel.

Writing to cfg\_cs1\_data will initiate a write transfer to the CS1 panel. Reading from cfg\_cs1\_data will initiate a read transfer from the CS0 panel.

NOTE:

Writes to CS1 translate to valid bus transactions only if cfg\_lidd\_mode\_sel[2:0] is configured for an asynchronous mode.

## 13.4.1.3 DMA Initiated Data Bus Transactions for LIDD

## 13.4.1.3.1 DMA Overview for MPU Bus Output

Writing a long sequence of data to the Character Display Panel will ensure that the CPU will be occupied for a long time. However, the DMA module supports a mode in which this sequence of data elements can first be written in DRAM by the CPU.

The DMA can read this sequence of commands or data from the DRAM and send it to the LCD Interface Display Driver (LIDD) module such that each data element becomes a write bus transaction to the external Character Panel/MPU Bus. The data bus write transaction can target either CS0 or CS1 and use the appropriate bus timing parameters.

Functionally, in this DMA LIDD mode, the DMA module sends the sequence of data to the LIDD module by acting as another CPU.

The DMA can only perform write bus transactions. It cannot read from the external character panel a series of data elements and store them in the DRAM.

When the LIDD module is controlled by the DMA module by setting cfg\_lidd\_dma\_en = '1', CPU reads or writes to cfg\_adr\_index and cfg\_data are not allowed.

The fb0\_base and fb0\_ceil registers define the address boundary of data elements to be sent out the character display by the DMA engine. Setting cfg\_lidd\_dma\_en from '0' to '1' will initiate the DMA as if a virtual CPU is reading data from the DDR and writing the values to Reg6 or Reg9. cfg\_dma\_cs0\_cs1 determines whether the virtual CPU writes to Reg6 (CS0) or Reg7 (CS1).

NOTE:

Writes to CS1 translate to valid bus transactions only if cfg\_lidd\_mode\_sel[2:0] is configured for an asynchronous mode.

The DMA module requires the start and end DDR addresses to be on word-aligned byte addresses. The MPU/LIDD bus is a halfword (16 bit) output, so both the upper and lower halfwords of the DDR memory will be sent out. Thus, the number of data elements sent to the LIDD by the DMA must always result in an even number of bus MPU bus transactions. In other words, a transfer of three 32-bit words from DDR will result in six 16-bit bus transactions.

## 13.4.1.3.2 MCU/LIDD DMA Setup: Example Pseudo Code

Suppose we want to send by DMA a section of DDR memory from byte address 0x4 to byte address 0x3C to the MCU bus using chip select 0. The pseudo code for such an operation is listed below.

```
// Enable Clocks wr 006C 0000_0007 // LCD Control Register wr 0004 0000_8000 // set clock divisor // LIDD Control Register wr 000C 0000_000C // set output bus polarities and lidd_mode_sel // LIDD CS0 Register wr 0010 0822_1044 // set bus timing parameters for CS0 // DMA Control Register wr 0040 0000_0030 // set DMA parameters like burst size, memory layout // DMA FB0 Base Register wr 0044 0000_0004 // DMA start byte address // DMA FB0 Ceiling Register wr 0048 0000_003C // DMA end byte address // LIDD Control Register - enable DMA wr 000C 0000_010C // Flip LIDD DMA enable bit
```

Once the DMA completes sending data to the Async FIFO, the Eof0 interrupt will occur. The Done interrupt will occur when the last word is written out the MPU bus.

The CPU must bring cfg\_lidd\_dma\_en low before the CPU can directly initiate MPU bus transactions or for the DMA module to start again.

## 13.4.1.4 Passive Matrix

## 13.4.1.4.1 Monochrome Bitrate Awareness

In a mostly testbench related note, care must be taken when configuring the module for Passive Matrix (cfg\_lcdtft = '0') monochrome (cfg\_lcdbw = '1') modes. In passive matrix mode, the Blue component of the Grayscaler output is used as the quantized value for each scan order pixel.

When cfg\_mono8b='1', eight pixel values must be sent through the grayscaler before one 8-bit output is ready. This output data represents the passive matrix output states for eight pixels.

Likewise, when cfg\_mono8b='0', four pixel values must be sent through the grayscaler before one 4-bit output is ready. This output data represents the passive matrix output states for four pixels.

The problem arises when the output clock is fast (cfg\_clkdiv=0x2). The data path must output a value every two system clocks. However, it takes four or eight system clocks to generate a data element to be output. In this case, the LCD module returns an underflow interrupt.

In practice, such a situation does not occur because passive matrix panels are slow by design.

<!-- image -->

www.ti.com