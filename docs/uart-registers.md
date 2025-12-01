# UART Register Reference - AM3358

## Overview

This document provides complete register-level documentation for the AM3358 UART modules. All UART instances (UART0-5) share the same register layout and functionality, with differences only in base addresses and certain feature availability.

## Register Map Summary

### Base Addresses
- **UART0**: 0x44E09000 (WKUP domain)
- **UART1**: 0x48022000 (L4PER domain)  
- **UART2**: 0x48024000 (L4PER domain)
- **UART3**: 0x48030000 (L4PER domain)
- **UART4**: 0x481A6000 (L4PER domain)
- **UART5**: 0x481A8000 (L4PER domain)

### Register Layout

| Offset | Register | Name | Access | Reset | Description |
|--------|----------|------|--------|-------|-------------|
| 0x00 | RBR/THR/DLL | Receive/Transmit/Divisor Low | RW | 0x00 | Data/Baud rate (mode dependent) |
| 0x04 | IER/DLH | Interrupt Enable/Divisor High | RW | 0x00 | Interrupt/Baud rate (mode dependent) |
| 0x08 | IIR/FCR | Interrupt ID/FIFO Control | R/W | 0x01 | Interrupt status/FIFO control |
| 0x0C | LCR | Line Control Register | RW | 0x00 | Data format and special modes |
| 0x10 | MCR | Modem Control Register | RW | 0x00 | Modem control signals |
| 0x14 | LSR | Line Status Register | R | 0x60 | Line status and errors |
| 0x18 | MSR | Modem Status Register | R | Varies | Modem status signals |
| 0x1C | SPR | Scratch Pad Register | RW | 0x00 | General purpose register |
| 0x20 | MDR1 | Mode Definition Register 1 | RW | 0x07 | Operating mode selection |
| 0x24 | MDR2 | Mode Definition Register 2 | RW | 0x00 | Additional mode control |
| 0x28 | SFLSR | Status FIFO Line Status | R | 0x00 | FIFO status information |
| 0x2C | RESUME | Resume Register | RW | 0x00 | Resume operation control |
| 0x30 | SFREGL | Status FIFO Register Low | R | 0x00 | FIFO status data low |
| 0x34 | SFREGH | Status FIFO Register High | R | 0x00 | FIFO status data high |
| 0x38 | BLR | BOF Length Register | RW | 0x00 | Beginning of frame length |
| 0x3C | ACREG | Auxiliary Control Register | RW | 0x00 | Auxiliary control features |
| 0x40 | SCR | Supplementary Control | RW | 0x00 | Additional control features |
| 0x44 | SSR | Supplementary Status | R | 0x00 | Additional status information |
| 0x48 | EBLR | BOF Length Register 2 | RW | 0x00 | Extended BOF control |
| 0x4C | MVR | Module Version Register | R | Varies | Module version information |
| 0x50 | SYSC | System Configuration | RW | 0x00 | System-level configuration |
| 0x54 | SYSS | System Status Register | R | 0x00 | System status information |
| 0x58 | WER | Wakeup Enable Register | RW | 0x00 | Wakeup event configuration |
| 0x60 | CFPS | Carrier Frequency Prescaler | RW | 0x00 | IrDA carrier frequency |
| 0x64 | RXFIFO_LVL | Received FIFO Level Register | R | 0x00 | RX FIFO occupancy level |
| 0x68 | TXFIFO_LVL | Transmit FIFO Level Register | R | 0x00 | TX FIFO occupancy level |
| 0x6C | IER2 | Interrupt Enable Register 2 | RW | 0x00 | Extended interrupt enable |
| 0x70 | ISR2 | Interrupt Status Register 2 | R | 0x00 | Extended interrupt status |
| 0x74 | FREQ_SEL | Frequency Selection Register | RW | 0x00 | Frequency selection control |
| 0x80 | MDR3 | Mode Definition Register 3 | RW | 0x00 | Additional mode control |
| 0x84 | TX_DMA_THRESHOLD | TX DMA Threshold Register | RW | 0x00 | TX DMA threshold level |

## Core Data and Control Registers

### RBR/THR/DLL (0x00) - Receive Buffer/Transmit Holding/Divisor Low
**Access depends on LCR[7] (DLAB bit)**

#### When LCR[7] = 0 (Normal Operation)
**RBR (Read)**: Receive Buffer Register
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-0 | DATA | R | Received data character |

**THR (Write)**: Transmit Holding Register  
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-0 | DATA | W | Data character to transmit |

#### When LCR[7] = 1 (Divisor Access)
**DLL**: Divisor Latch Low
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-0 | DLL | RW | Low byte of baud rate divisor |

### IER/DLH (0x04) - Interrupt Enable/Divisor High  
**Access depends on LCR[7] (DLAB bit)**

#### When LCR[7] = 0 (Normal Operation)
**IER**: Interrupt Enable Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-4 | Reserved | R | 0x0 | Reserved |
| 3 | EDSSI | RW | 0 | Enable modem status interrupt |
| 2 | ELSI | RW | 0 | Enable line status interrupt |
| 1 | ETBEI | RW | 0 | Enable transmit buffer empty interrupt |
| 0 | ERBI | RW | 0 | Enable receive buffer interrupt |

#### When LCR[7] = 1 (Divisor Access)
**DLH**: Divisor Latch High
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-0 | DLH | RW | High byte of baud rate divisor |

### IIR/FCR (0x08) - Interrupt Identification/FIFO Control

#### IIR (Read): Interrupt Identification Register
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-6 | FIFOEN | R | FIFO enable status (00=disabled, 11=enabled) |
| 5-4 | Reserved | R | Reserved |
| 3-1 | IID | R | Interrupt identification |
| 0 | IPEND | R | Interrupt pending (0=interrupt pending) |

**IID Values**:
- 000: Modem status interrupt
- 001: Transmit holding register empty
- 010: Received data available  
- 011: Line status error
- 110: Character timeout

#### FCR (Write): FIFO Control Register
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-6 | RX_TRIG | W | RX FIFO trigger level |
| 5-4 | Reserved | W | Reserved |
| 3 | DMA_MODE | W | DMA mode select |
| 2 | TX_CLEAR | W | Clear transmit FIFO |
| 1 | RX_CLEAR | W | Clear receive FIFO |
| 0 | FIFO_EN | W | Enable FIFOs |

**RX_TRIG Values**:
- 00: 1 byte
- 01: 4 bytes  
- 10: 8 bytes
- 11: 14 bytes

### LCR (0x0C) - Line Control Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7 | DLAB | RW | 0 | Divisor latch access bit |
| 6 | BC | RW | 0 | Break control |
| 5 | SP | RW | 0 | Stick parity |
| 4 | EPS | RW | 0 | Even parity select |
| 3 | PEN | RW | 0 | Parity enable |
| 2 | STB | RW | 0 | Stop bit select |
| 1-0 | WLS | RW | 00 | Word length select |

**WLS Values**:
- 00: 5 bits
- 01: 6 bits
- 10: 7 bits  
- 11: 8 bits

**Parity Configuration**:
- PEN=0: No parity
- PEN=1, EPS=0, SP=0: Odd parity
- PEN=1, EPS=1, SP=0: Even parity
- PEN=1, EPS=0, SP=1: Mark parity (always 1)
- PEN=1, EPS=1, SP=1: Space parity (always 0)

### MCR (0x10) - Modem Control Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-6 | Reserved | R | 00 | Reserved |
| 5 | AFE | RW | 0 | Auto flow control enable |
| 4 | LOOP | RW | 0 | Loopback mode |
| 3 | OUT2 | RW | 0 | Auxiliary output 2 |
| 2 | OUT1 | RW | 0 | Auxiliary output 1 |
| 1 | RTS | RW | 0 | Request to send |
| 0 | DTR | RW | 0 | Data terminal ready |

### LSR (0x14) - Line Status Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7 | RXFIFOE | R | 0 | RX FIFO error |
| 6 | TEMT | R | 1 | Transmitter empty |
| 5 | THRE | R | 1 | Transmit holding register empty |
| 4 | BI | R | 0 | Break interrupt |
| 3 | FE | R | 0 | Framing error |
| 2 | PE | R | 0 | Parity error |
| 1 | OE | R | 0 | Overrun error |
| 0 | DR | R | 0 | Data ready |

### MSR (0x18) - Modem Status Register
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7 | DCD | R | Data carrier detect |
| 6 | RI | R | Ring indicator |
| 5 | DSR | R | Data set ready |
| 4 | CTS | R | Clear to send |
| 3 | DDCD | R | Delta data carrier detect |
| 2 | TERI | R | Trailing edge ring indicator |
| 1 | DDSR | R | Delta data set ready |
| 0 | DCTS | R | Delta clear to send |

**Note**: Delta bits are cleared when MSR is read.

## Mode and Configuration Registers

### MDR1 (0x20) - Mode Definition Register 1
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7 | FRAME_END_MODE | RW | 0 | Frame end mode |
| 6 | SIP_MODE | RW | 0 | SIP mode enable |
| 5 | SCT | RW | 0 | Set carrier timer |
| 4 | SCC | RW | 0 | Set carrier counter |
| 3 | Reserved | R | 0 | Reserved |
| 2-0 | MODE_SELECT | RW | 111 | Mode select |

**MODE_SELECT Values**:
- 000: UART 16x mode
- 001: SIR mode
- 002: UART 16x auto-baud
- 003: UART 13x mode
- 004: MIR mode
- 005: FIR mode
- 006: CIR mode
- 007: Disable (default)

### MDR2 (0x24) - Mode Definition Register 2
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7 | IRTX_UNDERRUN | RW | 0 | IR TX underrun |
| 6 | STS_FIFO_TRIG | RW | 0 | Status FIFO trigger |
| 5-3 | UART_PULSE | RW | 000 | UART pulse configuration |
| 2-1 | CIR_PULSE | RW | 00 | CIR pulse mode |
| 0 | IRRXINVERT | RW | 0 | IR RX invert |

### SCR (0x40) - Supplementary Control Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7 | RX_CTS_WU_EN | RW | 0 | RX CTS wakeup enable |
| 6 | RX_TRIG_GRANU1 | RW | 0 | RX trigger granularity |
| 5 | TX_TRIG_GRANU1 | RW | 0 | TX trigger granularity |
| 4 | DSR_IT | RW | 0 | DSR interrupt type |
| 3 | TX_EMPTY_CTL_IT | RW | 0 | TX empty control interrupt |
| 2 | RX_CTS_DSR_WAKE_UP_ENABLE | RW | 0 | Wake up enable |
| 1 | DMA_MODE_2 | RW | 0 | DMA mode 2 |
| 0 | DMA_MODE_CTL | RW | 0 | DMA mode control |

### SSR (0x44) - Supplementary Status Register
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-2 | Reserved | R | Reserved |
| 1 | RX_CTS_DSR_WAKE_UP_STS | R | Wake up status |
| 0 | TX_FIFO_FULL | R | TX FIFO full status |

## System Configuration Registers

### SYSC (0x50) - System Configuration Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-5 | Reserved | R | 000 | Reserved |
| 4-3 | IDLEMODE | RW | 00 | Idle mode configuration |
| 2 | ENAWAKEUP | RW | 0 | Enable wakeup |
| 1 | SOFTRESET | RW | 0 | Software reset |
| 0 | AUTOIDLE | RW | 0 | Automatic idle |

**IDLEMODE Values**:
- 00: Force idle
- 01: No idle  
- 10: Smart idle
- 11: Reserved

### SYSS (0x54) - System Status Register
| Bits | Field | Type | Description |
|------|-------|------|-------------|
| 7-1 | Reserved | R | Reserved |
| 0 | RESETDONE | R | Reset done status |

### WER (0x58) - Wakeup Enable Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7 | EVENT_7_RX_ACTIVITY | RW | 0 | RX activity wakeup |
| 6 | EVENT_6_RHR_INTERRUPT | RW | 0 | RHR interrupt wakeup |
| 5 | EVENT_5_RX_LINE_STATUS_INTERRUPT | RW | 0 | Line status wakeup |
| 4 | EVENT_4_TX_WAKEUP_EN | RW | 0 | TX wakeup enable |
| 3 | EVENT_3_RI_ACTIVITY | RW | 0 | RI activity wakeup |
| 2 | EVENT_2_DCD_CD_ACTIVITY | RW | 0 | DCD activity wakeup |
| 1 | EVENT_1_DSR_ACTIVITY | RW | 0 | DSR activity wakeup |
| 0 | EVENT_0_CTS_ACTIVITY | RW | 0 | CTS activity wakeup |

### CFPS (0x60) - Carrier Frequency Prescaler Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-0 | CFPS | RW | 0x00 | Carrier frequency prescaler for IrDA/CIR modes |

**Usage**: Sets the carrier frequency for IrDA and CIR modes.
- **Formula**: Carrier Frequency = UART_CLK / (16 × CFPS)
- **Typical Values**: For 38kHz carrier with 48MHz clock: CFPS = 78 (0x4E)

### RXFIFO_LVL (0x64) - Received FIFO Level Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-0 | RX_FIFO_LVL | R | 0x00 | Current RX FIFO occupancy level (0-64) |

### TXFIFO_LVL (0x68) - Transmit FIFO Level Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-0 | TX_FIFO_LVL | R | 0x00 | Current TX FIFO occupancy level (0-64) |

### IER2 (0x6C) - Interrupt Enable Register 2
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-2 | Reserved | R | 0x00 | Reserved |
| 1 | EN_RXFIFO_EMPTY | RW | 0 | Enable RX FIFO empty interrupt |
| 0 | EN_TXFIFO_EMPTY | RW | 0 | Enable TX FIFO empty interrupt |

### ISR2 (0x70) - Interrupt Status Register 2
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-2 | Reserved | R | 0x00 | Reserved |
| 1 | RXFIFO_EMPTY_STS | R | 0 | RX FIFO empty status |
| 0 | TXFIFO_EMPTY_STS | R | 0 | TX FIFO empty status |

### FREQ_SEL (0x74) - Frequency Selection Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-4 | Reserved | R | 0x0 | Reserved |
| 3-0 | FREQ_SEL | RW | 0x0 | Frequency selection for sampling clock |

### MDR3 (0x80) - Mode Definition Register 3
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-4 | Reserved | R | 0x0 | Reserved |
| 3 | DISABLE_CIR_RX_DEMOD | RW | 0 | Disable CIR RX demodulation |
| 2 | SET_DMA_TX_THRESHOLD | RW | 0 | Enable programmable TX DMA threshold |
| 1 | NONSTANDARD_BAUD_RATE | RW | 0 | Enable non-standard baud rates |
| 0 | Reserved | R | 0 | Reserved |

### TX_DMA_THRESHOLD (0x84) - TX DMA Threshold Register
| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 7-6 | Reserved | R | 0x0 | Reserved |
| 5-0 | TX_DMA_THRESHOLD | RW | 0x00 | TX FIFO threshold for DMA requests (0-63) |

## Baud Rate Configuration

### Divisor Calculation
The baud rate is determined by the 16-bit divisor (DLH:DLL):

```
Baud Rate = UART_CLK / (16 × Divisor)
```

Where UART_CLK is typically 48 MHz.

### Common Baud Rate Values (48 MHz Clock)

| Baud Rate | Divisor (Decimal) | DLH | DLL | Error (%) |
|-----------|------------------|-----|-----|-----------|
| 300 | 10000 | 0x27 | 0x10 | 0.00 |
| 1200 | 2500 | 0x09 | 0xC4 | 0.00 |
| 2400 | 1250 | 0x04 | 0xE2 | 0.00 |
| 4800 | 625 | 0x02 | 0x71 | 0.00 |
| 9600 | 312.5 | 0x01 | 0x38 | 0.16 |
| 19200 | 156.25 | 0x00 | 0x9C | 0.16 |
| 38400 | 78.125 | 0x00 | 0x4E | 0.16 |
| 57600 | 52.08 | 0x00 | 0x34 | 0.64 |
| 115200 | 26.04 | 0x00 | 0x1A | 0.64 |

## Register Mode Dependencies

### Mode-Dependent Register Availability
Some registers are only available in specific UART operating modes:

**IrDA/CIR Operational Mode Only**:
- BLR (0x38) - BOF Length Register
- ACREG (0x3C) - Auxiliary Control Register  
- EBLR (0x48) - Extended BOF Length Register

**Configuration Mode Access**:
- DLL/DLH (0x00/0x04) - Divisor Latches (when LCR[7] = 1)
- EFR (0x08) - Enhanced Feature Register (when LCR = 0xBF)
- XON1/XON2 (0x10/0x14) - Flow control characters (Config Mode B)
- XOFF1/XOFF2 (0x18/0x1C) - Flow control characters (Config Mode B)

**Always Available**:
- All system configuration registers (SYSC, SYSS, WER, etc.)
- Mode definition registers (MDR1, MDR2, MDR3)
- FIFO level registers (RXFIFO_LVL, TXFIFO_LVL)
- Extended interrupt registers (IER2, ISR2)

## Register Mode Dependencies

### Mode-Dependent Register Availability
Some registers are only available in specific UART operating modes:

**IrDA/CIR Operational Mode Only**:
- BLR (0x38) - BOF Length Register
- ACREG (0x3C) - Auxiliary Control Register  
- EBLR (0x48) - Extended BOF Length Register

**Configuration Mode Access**:
- DLL/DLH (0x00/0x04) - Divisor Latches (when LCR[7] = 1)
- EFR (0x08) - Enhanced Feature Register (when LCR = 0xBF)
- XON1/XON2 (0x10/0x14) - Flow control characters (Config Mode B)
- XOFF1/XOFF2 (0x18/0x1C) - Flow control characters (Config Mode B)

**Always Available**:
- All system configuration registers (SYSC, SYSS, WER, etc.)
- Mode definition registers (MDR1, MDR2, MDR3)
- FIFO level registers (RXFIFO_LVL, TXFIFO_LVL)
- Extended interrupt registers (IER2, ISR2)
- Status and control registers (SCR, SSR, MVR)

### Register Access Modes
The UART supports different register access modes based on LCR settings:

**Operational Mode** (LCR ≠ 0xBF, LCR[7] = 0):
- Standard data and control registers
- RBR/THR at offset 0x00
- IER at offset 0x04

**Configuration Mode A** (LCR[7] = 1):
- Divisor latch access
- DLL at offset 0x00
- DLH at offset 0x04

**Configuration Mode B** (LCR = 0xBF):
- Enhanced feature access
- EFR at offset 0x08
- Flow control registers

## Register Mode Dependencies

### Mode-Dependent Register Availability
Some registers are only available in specific UART operating modes:

**IrDA/CIR Operational Mode Only**:
- BLR (0x38) - BOF Length Register
- ACREG (0x3C) - Auxiliary Control Register  
- EBLR (0x48) - Extended BOF Length Register

**Configuration Mode Access**:
- DLL/DLH (0x00/0x04) - Divisor Latches (when LCR[7] = 1)
- EFR (0x08) - Enhanced Feature Register (when LCR = 0xBF)
- XON1/XON2 (0x10/0x14) - Flow control characters (Config Mode B)
- XOFF1/XOFF2 (0x18/0x1C) - Flow control characters (Config Mode B)

**Always Available**:
- All system configuration registers (SYSC, SYSS, WER, etc.)
- Mode definition registers (MDR1, MDR2, MDR3)
- FIFO level registers (RXFIFO_LVL, TXFIFO_LVL)
- Extended interrupt registers (IER2, ISR2)
- Status and control registers (SCR, SSR, MVR)

### Register Access Notes
- **CFPS**: Used for IrDA/CIR carrier frequency generation
- **FIFO Level Registers**: Provide real-time FIFO occupancy for flow control
- **Extended Interrupt Registers**: Support additional interrupt sources
- **DMA Threshold**: Configurable when MDR3[2] is set

## Performance Considerations

### Register Access Optimization
- **Read-Modify-Write**: Use for bit manipulation to avoid affecting other bits
- **Sequential Access**: Group related register accesses together
- **Volatile Qualification**: Always use volatile for hardware registers

### FIFO Optimization
- **Appropriate Thresholds**: Set RX FIFO threshold based on application needs
- **Batch Operations**: Process multiple characters per interrupt
- **DMA Usage**: Use DMA for high-throughput applications

### Interrupt Efficiency
- **Priority Handling**: Handle highest priority interrupts first
- **Minimal ISR**: Keep interrupt service routines short
- **Deferred Processing**: Use deferred processing for complex operations

## Related Documentation

- [UART Overview](uart-overview.md) - System architecture and features
- [UART Implementation Guide](../../implementation/uart-usage.md) - Programming examples
- [Interrupt System](../../interrupts/interrupt-system.md) - UART interrupt handling
- [DMA Integration](../../implementation/dma-usage.md) - UART DMA configuration

## References

- AM335x Technical Reference Manual, Chapter 19 (UART)
- AM335x Technical Reference Manual, Section 19.5 (UART Registers)
- 16C750 UART Specification (TI enhanced)
- IrDA Physical Layer Specification v1.4
- IEEE 802.11 CIR Specification