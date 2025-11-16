## 21.1 Introduction

The multi-master I2C peripheral provides an interface between a CPU and any I2C-bus-compatible device that connects via the I2C serial bus. External components attached to the I2C bus can serially transmit/receive up to 8-bit data to/from the CPU device through the two-wire I2C interface.

The I2C bus is a multi-master bus. The I2C controller does support the multi-master mode that allows more than one device capable of controlling the bus to be connected to it. Each I2C device is recognized by a unique address and can operate as either transmitter or receiver, according to the function of the device. In addition to being a transmitter or receiver, a device connected to the I2C bus can also be considered as master or slave when performing data transfers. Note that a master device is the device which initiates a data transfer on the bus and generates the clock signals to permit that transfer. During this transfer, any device addressed by this master is considered a slave.

## 21.1.1 I2C Features

The general features of the I2C controller are:

- Compliant with Philips I2C specification version 2.1
- Supports standard mode (up to 100K bits/s) and fast mode (up to 400K bits/s).
- Multimaster transmitter/slave receiver mode
- Multimaster receiver/slave transmitter mode
- Combined master transmit/receive and receive/transmit modes
- 7-bit and 10-bit device addressing modes
- Built-in 32-byte FIFO for buffered read or writes in each module
- Programmable clock generation
- Two DMA channels, one interrupt line

## 21.1.2 Unsupported I2C Features

The I2C module features not supported in this device are shown in Table 21-1.

Table 21-1. Unsupported I2C Features

| Feature                         | Reason                     |
|---------------------------------|----------------------------|
| SCCB Protocol                   | SCCB signal not pinned out |
| High Speed (3.4 MBPS) operation | Not supported              |

<!-- image -->