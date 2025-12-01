# UART Overview - AM3358 Universal Asynchronous Receiver/Transmitter

## Introduction

The AM335x family includes six UART (Universal Asynchronous Receiver/Transmitter) modules that provide flexible serial communication capabilities. **All AM335x family members, including the AM3358, implement all six UART instances (UART0-5)** per the official datasheet. These UARTs support standard UART protocol, IrDA (Infrared Data Association), and CIR (Consumer Infrared) modes, making them suitable for a wide range of communication applications.

## UART Instances and Addressing

### Available UART Modules (AM335x Family)

| UART | Base Address | IRQ Number | Clock Domain | Power Domain | Features | AM3358 Support |
|------|-------------|-------------|--------------|--------------|----------|----------------|
| UART0 | 0x44E09000 | 72 | WKUP | Always-on | Basic UART, RTS/CTS | ✅ **Available** |
| UART1 | 0x48022000 | 73 | L4PER | Core | Full modem control | ✅ **Available** |
| UART2 | 0x48024000 | 74 | L4PER | Core | Basic UART, RTS/CTS | ✅ **Available** |
| UART3 | 0x481A6000 | 44 | L4PER | Core | Basic UART, RTS/CTS | ✅ **Available** |
| UART4 | 0x481A8000 | 45 | L4PER | Core | Basic UART, RTS/CTS | ✅ **Available** |
| UART5 | 0x481AA000 | 46 | L4PER | Core | Basic UART, RTS/CTS | ✅ **Available** |

**AM3358 Confirmation**: Per the official AM3358 datasheet (Table 3-1), **all six UART instances (UART0-5) are available** on the AM3358, same as other AM335x family members.

### Special Characteristics

#### UART0 (System Console)
- **Always-On Domain**: Remains active during low-power modes
- **Boot Console**: Typically used for system boot messages
- **Debug Interface**: Primary debug and console interface
- **Pin Location**: Dedicated pins for console access

#### UART1 (Full Modem Control)
- **Complete Modem Signals**: DTR, DSR, DCD, RI in addition to RTS/CTS
- **Hardware Flow Control**: Full duplex flow control support
- **Modem Applications**: Suitable for cellular modem interfaces
- **Extended Functionality**: Most feature-complete UART instance

#### UART2-5 (General Purpose - AM3358 Available)
- **Application UARTs**: Available for general application use
- **Basic Flow Control**: RTS/CTS support (UART2-5)
- **Flexible Pin Muxing**: Multiple pin muxing options
- **Standard Features**: Full UART, IrDA, and CIR mode support
- **AM3358 Status**: **All available** per official datasheet

## Key Features

### Communication Modes
1. **UART Mode**: Standard asynchronous serial communication
2. **IrDA Mode**: Infrared Data Association protocol support
3. **CIR Mode**: Consumer Infrared remote control protocol

### Data Format Support
- **Data Bits**: 5, 6, 7, or 8 bits per character
- **Stop Bits**: 1, 1.5, or 2 stop bits
- **Parity**: None, even, odd, mark, or space parity
- **Flow Control**: Software (XON/XOFF) and hardware (RTS/CTS)

### Advanced Features
- **FIFO Support**: 64-byte transmit and receive FIFOs
- **DMA Integration**: EDMA3 support for high-throughput applications
- **Interrupt System**: Multiple interrupt sources with priorities
- **Error Detection**: Parity, framing, overrun, and break detection
- **Auto-Baud Detection**: Automatic baud rate detection capability

## Clock Management

### Clock Sources
- **Functional Clock**: 48 MHz from DPLL_PER
- **Interface Clock**: L4 interconnect clock
- **Baud Clock**: Generated from functional clock with programmable divisor

### Baud Rate Generation
The UART generates baud rates using a programmable divisor:

```
Baud Rate = Functional Clock / (16 × Divisor)
```

**Standard Baud Rate Support**:
- 300, 600, 1200, 2400, 4800, 9600 bps
- 14400, 19200, 38400, 57600, 115200 bps
- Up to 3 Mbps (with appropriate clock configuration)

### Clock Control Registers (AM335x Family)
- **CM_WKUP_UART0_CLKCTRL**: UART0 clock control (0x44E000B4) - ✅ AM3358 Available
- **CM_PER_UART1_CLKCTRL**: UART1 clock control (0x4800006C) - ✅ AM3358 Available
- **CM_PER_UART2_CLKCTRL**: UART2 clock control (0x48000070) - ✅ AM3358 Available
- **CM_PER_UART3_CLKCTRL**: UART3 clock control (0x48000074) - ✅ AM3358 Available
- **CM_PER_UART4_CLKCTRL**: UART4 clock control (0x48000078) - ✅ AM3358 Available
- **CM_PER_UART5_CLKCTRL**: UART5 clock control (0x4800007C) - ✅ AM3358 Available

## Pin Multiplexing

### Signal Descriptions

#### Basic UART Signals
- **UARTn_TXD**: Transmit data output
- **UARTn_RXD**: Receive data input
- **UARTn_RTS**: Request to send (output)
- **UARTn_CTS**: Clear to send (input)

#### Extended Modem Signals (UART1 only)
- **UART1_DTR**: Data terminal ready (output)
- **UART1_DSR**: Data set ready (input)
- **UART1_DCD**: Data carrier detect (input)
- **UART1_RI**: Ring indicator (input)

### Pin Muxing Options
Each UART can be mapped to multiple pin combinations:

#### UART0 (Console)
- **Primary**: UART0_RXD/UART0_TXD (dedicated pins)
- **Location**: Typically routed to debug/console connector
- **Pin Configuration**: Control module offsets 0x970 (RXD), 0x974 (TXD)

#### UART1-5 (Application - AM3358 Available)
- **Multiple Options**: 2-4 pin muxing options per UART
- **Flexible Placement**: Various locations across the pin map
- **Shared Pins**: Some pins shared with other peripherals
- **AM3358 Status**: **All UARTs available** with full pin muxing support

## Functional Modes

### UART Mode (Standard Operation)
```
Start Bit → Data Bits → Parity Bit → Stop Bits
    ↓          ↓           ↓           ↓
   1 bit    5-8 bits   0/1 bits    1-2 bits
```

**Characteristics**:
- **Asynchronous**: No shared clock between devices
- **Full Duplex**: Simultaneous transmit and receive
- **Error Detection**: Parity and framing error detection
- **Flow Control**: Software and/or hardware flow control

### IrDA Mode (Infrared)
**Features**:
- **Infrared Communication**: Compatible with IrDA 1.0 specification
- **Baud Rates**: Up to 115.2 kbps
- **Protocol**: Standard UART framing with infrared encoding
- **Applications**: Wireless data transfer, remote control

### CIR Mode (Consumer Infrared)
**Features**:
- **Remote Control**: Consumer infrared remote control protocols
- **Carrier Frequency**: Programmable carrier frequency generation
- **Pulse Width**: Configurable pulse width modulation
- **Applications**: IR remote control reception and transmission

## Interrupt System

### Interrupt Sources
The UART generates multiple interrupt types:

#### Data Interrupts
- **RHR (Receive Holding Register)**: Data received and available
- **THR (Transmit Holding Register)**: Transmit buffer ready for data
- **RX Timeout**: Receive timeout (data in FIFO but below threshold)

#### Status Interrupts  
- **Line Status**: Parity, framing, overrun, or break errors  
- **Modem Status**: CTS, DSR, DCD, or RI signal changes (UART1 only)

**IRQ Numbers**: UART0=72, UART1=73, UART2=74

#### Flow Control
- **XOFF**: Software flow control character received
- **XON**: Software flow control resume condition

### Interrupt Priorities
1. **Line Status** (Highest priority): Error conditions
2. **RHR**: Received data available
3. **RX Timeout**: Partial data received
4. **THR**: Transmit buffer empty
5. **Modem Status** (Lowest priority): Modem signal changes

### FIFO Operation
- **64-byte FIFOs**: Both transmit and receive
- **Programmable Thresholds**: Interrupt generation at configurable levels
- **FIFO Control**: Enable/disable, clear, and threshold configuration

## DMA Integration

### EDMA3 Support
- **TX DMA**: Automatic transmission from memory buffers
- **RX DMA**: Automatic reception to memory buffers
- **Burst Transfers**: Efficient data movement
- **Interrupt Reduction**: Fewer CPU interrupts for bulk data

### DMA Event Numbers (AM335x Family)
- **UART0**: DMA events 26 (TX), 27 (RX) - ✅ AM3358 Available
- **UART1**: DMA events 28 (TX), 29 (RX) - ✅ AM3358 Available
- **UART2**: DMA events 30 (TX), 31 (RX) - ✅ AM3358 Available
- **UART3**: DMA events 32 (TX), 33 (RX) - ✅ AM3358 Available
- **UART4**: DMA events 34 (TX), 35 (RX) - ✅ AM3358 Available
- **UART5**: DMA events 36 (TX), 37 (RX) - ✅ AM3358 Available

## Power Management

### Power Domains (AM335x Family)
- **UART0**: WKUP domain (always-on) - ✅ AM3358 Available
- **UART1-5**: L4PER domain (power-managed) - ✅ AM3358 Available

### Low-Power Features
- **Clock Gating**: Automatic clock gating when idle
- **Wakeup Capability**: UART0 can wake system from low-power modes
- **Context Retention**: Register state preserved during transitions

### Smart Idle Mode
- **Automatic Idle**: UART automatically enters idle when not active
- **Wakeup on Activity**: Resumes on incoming data or CPU access
- **Power Optimization**: Minimizes power consumption

## Error Handling

### Error Types
1. **Parity Error**: Received character has incorrect parity
2. **Framing Error**: Stop bit not detected at expected time
3. **Overrun Error**: New data received before previous data read
4. **Break Error**: Extended low period detected on receive line

### Error Detection
- **Line Status Register**: Contains all error flags  
- **Interrupt Generation**: Errors can generate interrupts
- **Error Logging**: Software can log and handle errors appropriately

### Recovery Mechanisms
- **FIFO Reset**: Clear receive FIFO on error conditions
- **Break Detection**: Detect and handle break conditions
- **Timeout Handling**: Recover from communication timeouts

## Performance Characteristics

### Throughput
- **Maximum Baud Rate**: Up to 3 Mbps
- **FIFO Efficiency**: 64-byte FIFOs reduce interrupt overhead
- **DMA Performance**: Near line-rate performance with DMA

### Latency
- **Interrupt Latency**: ~10µs typical interrupt response
- **Character Time**: Depends on baud rate and character format
- **FIFO Buffering**: Reduces real-time requirements

### CPU Loading
- **Interrupt Mode**: CPU load proportional to data rate
- **DMA Mode**: Minimal CPU involvement for bulk transfers
- **FIFO Usage**: Reduces interrupt frequency

## Applications

### System Console
- **Boot Messages**: Early boot and kernel messages
- **Debug Interface**: Interactive debugging and system control
- **Log Output**: System logging and diagnostics

### Communication Interfaces
- **Sensor Networks**: Industrial sensor communication
- **Modem Control**: Cellular and wireless modem interfaces
- **GPS Receivers**: NMEA protocol communication
- **Bluetooth/WiFi**: AT command interfaces

### Industrial Applications
- **MODBUS RTU**: Industrial protocol support
- **RS-485**: Multi-drop industrial networks
- **Instrumentation**: Test equipment interfaces
- **PLC Communication**: Programmable logic controller interfaces

## Development Considerations

### Hardware Design
- **Signal Integrity**: Proper termination and routing
- **EMI/EMC**: Appropriate filtering and shielding
- **Level Translation**: 3.3V to RS-232 level conversion
- **Protection**: ESD and overvoltage protection

### Software Design
- **Buffer Management**: Efficient buffer allocation and management
- **Error Handling**: Robust error detection and recovery
- **Flow Control**: Proper implementation of flow control protocols
- **Performance**: Optimal use of FIFOs and DMA

### Testing and Validation
- **Loopback Testing**: Internal and external loopback tests
- **Stress Testing**: High data rate and error condition testing
- **Interoperability**: Testing with various UART devices
- **Power Testing**: Validation of low-power modes

## Related Documentation

- [UART Register Reference](../../registers/uart-registers.md) - Complete register descriptions
- [UART Implementation Guide](../../implementation/uart-usage.md) - Programming examples
- [Interrupt System](../../interrupts/interrupt-system.md) - UART interrupt handling
- [Pin Multiplexing](../gpio/pinmux.md) - UART pin configuration
- [Clock Management](../../clocking/clock-domains.md) - UART clock configuration

## References

- AM335x Technical Reference Manual, Chapter 19 (UART)
- AM335x Datasheet (SPRS717L)
- IrDA Specification v1.0
- RS-232 and RS-485 Standards
- MODBUS RTU Specification