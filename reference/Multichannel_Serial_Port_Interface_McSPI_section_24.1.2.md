## 24.1 Introduction

This document is intended to provide programmers with a functional presentation of the Master/Slave Multichannel Serial Port Interface (McSPI) module. It also provides a register description and a module configuration example.

McSPI is a general-purpose receive/transmit master/slave controller that can interface with up to four slave external devices or one single external master. It allows a duplex, synchronous, serial communication between a CPU and SPI compliant external devices (Slaves and Masters).

## 24.1.1 McSPI Features

The general features of the SPI controller are:

- Buffered receive/transmit data register per channel (1 word deep)
- Multiple SPI word access with one channel using a FIFO
- Two DMA requests per channel, one interrupt line
- Single interrupt line, for multiple interrupt source events
- Serial link interface supports:
- -Full duplex / Half duplex
- -Multi-channel master or single channel slave operations
- -Programmable 1-32 bit transmit/receive shift operations.
- -Wide selection of SPI word lengths continuous from 4 to 32 bits
- Up to four SPI channels
- SPI word Transmit / Receive slot assignment based on round robin arbitration
- SPI configuration per channel (clock definition, enable polarity and word width)
- Clock generation supports:
- -Programmable master clock generation (operating from fixed 48-MHz functional clock input)
- -Selectable clock phase and clock polarity per chip select.

## 24.1.2 Unsupported McSPI Features

This device supports only two chip selects per module. Module wakeup during slave mode operation is not supported, as noted in McSPI Clock and Reset Management .

Table 24-1. Unsupported McSPI Features

| Feature                     | Reason                                        |
|-----------------------------|-----------------------------------------------|
| Chip selects 2 and 3        | Not pinned out                                |
| Slave mode wakeup           | SWAKEUP not connected                         |
| Retention during power down | Module not synthesized with retention enabled |

<!-- image -->