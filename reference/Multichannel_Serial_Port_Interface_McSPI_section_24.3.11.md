<!-- image -->

A global ResetDone status bit is provided in the status register MCSPI\_SYSSTATUS. This bit is set to 1 when all the different clock domains resets (OCP domain and SPI domains) have been released (logical AND).

The global ResetDone status bit can be monitored by the software to check if the module is ready-to-use following a reset (either hardware or software).

The clock CLKSPIREF must be provided to the module, in order to allow the ResetDone status bit to be set.

When used in slave mode, the clock CLKSPIREF is needed only during the reset phase. The clock CLKSPIREF can be switched off after the ResetDone status is set.

## 24.3.10 Access to Data Registers

This section details the supported data accesses (read or write) from/to the data receiver registers MCSPI\_RX(i) and data transmitter registers MCSPI\_TX(i).

Supported access:

McSPI supports only one SPI word per register (receiver or transmitter) and does not support successive 8-bit or 16-bit accesses for a single SPI word.

The SPI word received is always right justified on LSbit of the 32bit register MCSPI\_RX(i), and the SPI word to transmit is always right justified on LSbit of the 32bit register MCSPI\_TX(i).

The upper bits, above SPI word length, are ignored and the content of the data registers is not reset between the SPI data transfers.

The coherence between the number of bits of the SPI Word, the number of bits of the access and the enabled byte remains under the user's responsibility. Only aligned accesses are supported.

In Master mode, data should not be written in the transmit register when the channel is disabled.

## 24.3.11 Programming Aid

## 24.3.11.1 Module Initialization

- Hard or soft reset.
- Read MCSPI\_SYSSTATUS.
- Check if reset is done.
- Module configuration: (a) Write into MCSPI\_MODULCTRL (b) Write into MCSPI\_SYSCONFIG.
- Before the ResetDone bit is set, the clocks CLK and CLKSPIREF must be provided to the module.
- To avoid hazardous behavior, it is advised to reset the module before changing from MASTER mode to SLAVE mode or from SLAVE mode to MASTER mode.

## 24.3.11.2 Common Transfer Sequence

McSPI module allows the transfer of one or several words, according to different modes:

- MASTER, MASTER Turbo, SLAVE
- TRANSMIT - RECEIVE, TRANSMIT ONLY, RECEIVE ONLY
- Write and Read requests: Interrupts, DMA
- SPIEN lines assertion/deassertion: automatic, manual

For all these flows, the host process contains the main process and the interrupt routines. The interrupt routines are called on the interrupt signals or by an internal call if the module is used in polling mode.

In multi-channel master mode, the flows of different channels can be run simultaneously.

## 24.3.11.3 Main Program

- Interrupt Initialization: (a) Reset status bits in MCSPI\_IRQSTATUS (b) Enable interrupts in MCSPI\_IRQENA.