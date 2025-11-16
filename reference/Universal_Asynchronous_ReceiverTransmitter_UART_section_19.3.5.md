Table 19-10. Local Power-Management Features

| Feature                | Registers               | Description                                                                                                                                                      |
|------------------------|-------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Clock autogating       | UART_SYSC[0] AUTOIDLE   | This bit allows local power optimization in the module by gating the UARTi_ICLK clock on interface activity or gating the UARTi_FCLK clock on internal activity. |
| Slave idle modes       | UART_SYSC[4:3] IDLEMODE | Force-idle, no-idle, smart-idle, and smart-idle wakeup-capable modes are available                                                                               |
| Clock activity         | N/A                     | Feature not available                                                                                                                                            |
| Master standby modes   | N/A                     | Feature not available                                                                                                                                            |
| Global wake-up enable  | UART_SYSC[2] ENAWAKEUP  | This bit enables the wake-up feature at module level.                                                                                                            |
| Wake-Up sources enable | N/A                     | Feature not available                                                                                                                                            |

## 19.3.5 Interrupt Requests

The UART IrDA CIR module generates interrupts. All interrupts can be enabled/disabled by writing to the appropriate bit in the interrupt enable register (IER). The interrupt status of the device can be checked at any time by reading the interrupt identification register (IIR). The UART, IrDA, and CIR modes have different interrupts in the UART IrDA CIR module and therefore have different IER and IIR mappings according to the selected mode.

## 19.3.5.1 UART Mode Interrupt Management

## 19.3.5.1.1 UART Interrupts

UART mode includes seven possible interrupts prioritized to six levels.

When an interrupt is generated, the interrupt identification register (UARTi.UART\_IIR) sets the UARTi.UART\_IIR[0] IT\_PENDING bit to 0 to indicate that an interrupt is pending, and indicates the type of interrupt through the UARTi.UART\_IIR[5:1] bit field. Table 19-11 summarizes the interrupt control functions.

Table 19-11. UART Mode Interrupts

|   UART_IIR[5:0] | Priority Level   | Interrupt Type                             | Interrupt Source                                                              | Interrupt Reset Method                                                                                     |
|-----------------|------------------|--------------------------------------------|-------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------|
|          000001 | None             | None                                       | None                                                                          | None                                                                                                       |
|          000110 | 1                | Receiver line status                       | OE, FE, PE, or BI errors occur in characters in the RX FIFO.                  | FE, PE, BI: Read the UART_RHR register. OE: Read the UART_LSR register.                                    |
|          001100 | 2                | RX time-out                                | Stale data in RX FIFO                                                         | Read the UART_RHR register.                                                                                |
|          000100 | 2                | RHR interrupt                              | DRDY (data ready) (FIFO disable) RX FIFO above trigger level (FIFO enable)    | Read the UART_RHR register until the interrupt condition disappears.                                       |
|          000010 | 3                | THR interrupt                              | TFE (UART_THR empty) (FIFO disable) TX FIFO below trigger level (FIFO enable) | Write to the UART_THR until the interrupt condition disappears.                                            |
|          000000 | 4                | Modem status                               | See the UART_MSR register.                                                    | Read the UART_MSR register.                                                                                |
|          010000 | 5                | XOFF interrupt/special character interrupt | Receive XOFF characters/special character                                     | Receive XON character(s), if XOFF interrupt/read of the UART_IIR register, if special character interrupt. |
|          100000 | 6                | CTS, RTS, DSR                              | RTS pin or CTS pin or DSR change state from active (low) to inactive (high).  | Read the UART_IIR register.                                                                                |

<!-- image -->

<!-- image -->

For the receiver-line status interrupt, the RX\_FIFO\_STS bit (UARTi.UART\_LSR[7]) generates the interrupt.

For the XOFF interrupt, if an XOFF flow character detection caused the interrupt, the interrupt is cleared by an XON flow character detection. If special character detection caused the interrupt, the interrupt is cleared by a read of the UARTi.UART\_IIR register.

## 19.3.5.2 Wake-Up Interrupt

Wake-up interrupt is a special interrupt that works differently from other interrupts. This interrupt is enabled when the UARTi.UART\_SCR[4] RXCTSDSRWAKEUPENABLE bit is set to 1. The UARTi.UART\_IIR register is not modified when this occurs; the UARTi.UART\_SSR[1] RXCTSDSRWAKEUPSTS bit must be checked to detect a wake-up event.

When a wake-up interrupt occurs, it can be cleared only by resetting the UARTi.UART\_SCR[4] RXCTSDSRWAKEUPENABLE bit. This bit must be re-enabled (set to 1) after the current wake-up interrupt event is processed to detect the next incoming wake-up event.

A wake-up interrupt can also occur if the WER[7] TXWAKEUPEN bit is set to 1 and one of the following occurs:

- THR interrupt occurred if it is enabled (omitted if TX DMA request is enabled).
- TX DMA request occurred if it is enabled.
- TX\_STATUS\_IT occurred if it is enabled (only IrDA and CIR modes). Cannot be used with THR interrupt.

## CAUTION

Wake-Up interface implementation in IrDA mode is based on the UARTi\_SIDLEACK low-to-high transition instead of the UARTi\_SIDLEACK state.

This does not ensure wake-up event generation as expected when configured in smart-idle mode, and the system wakes up for a short period.

## 19.3.5.3 IrDA Mode Interrupt Management

## 19.3.5.3.1 IrDA Interrupts

The IrDA function generates interrupts. All interrupts can be enabled and disabled by writing to the appropriate bit in the interrupt enable register (UARTi.UART\_IER). The interrupt status of the device can be checked by reading the interrupt identification register (UARTi.UART\_IIR).

UART, IrDA, and CIR modes have different interrupts in the UART/IrDA/CIR module and, therefore, different UARTi.UART\_IER and UARTi.UART\_IIR mappings, depending on the selected mode.

IrDA modes have eight possible interrupts (see Table 19-12). The interrupt line is activated when any interrupt is generated (there is no priority).

## Table 19-12. IrDA Mode Interrupts

|   UART_IIR Bit | Interrupt Type   | Interrupt Source                                                              | Interrupt Reset Method                                               |
|----------------|------------------|-------------------------------------------------------------------------------|----------------------------------------------------------------------|
|              0 | RHR interrupt    | DRDY (data ready) (FIFO disable) RX FIFO above trigger level (FIFO enable)    | Read the UART_RHR register until the interrupt condition disappears. |
|              1 | THR interrupt    | TFE (UART_THR empty) (FIFO disable) TX FIFO below trigger level (FIFO enable) | Write to the UART_THR until the interrupt condition disappears.      |

Table 19-12. IrDA Mode Interrupts (continued)

|   UART_IIR Bit | Interrupt Type                 | Interrupt Source                                                                                                                                                                                 | Interrupt Reset Method                                                     |
|----------------|--------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------|
|              2 | Last byte in RX FIFO           | Last byte of frame in RX FIFO is available to be read at the RHR port.                                                                                                                           | Read the UART_RHR register.                                                |
|              3 | RX overrun                     | Write to the UART_RHR register when the RX FIFO is full.                                                                                                                                         | Read UART_RESUME register.                                                 |
|              4 | Status FIFO interrupt          | Status FIFO triggers level reached.                                                                                                                                                              | Read STATUS FIFO.                                                          |
|              5 | TX status                      | 1. UART_THR empty before EOF sent. Last bit of transmission of the IrDA frame occurred, but with an underrun error. OR 2. Transmission of the last bit of the IrDA frame completed successfully. | 1. Read the UART_RESUME register. OR 2. Read the UART_IIR register.        |
|              6 | Receiver line status interrupt | CRC, ABORT, or frame-length error is written into the STATUS FIFO.                                                                                                                               | Read the STATUS FIFO (read until empty - maximum of eight reads required). |
|              7 | Received EOF                   | Received end-of-frame                                                                                                                                                                            | Read the UART_IIR register.                                                |

## 19.3.5.4 CIR Mode Interrupt Management

## 19.3.5.4.1 CIR Interrupts

The CIR function generates interrupts that can be enabled and disabled by writing to the appropriate bit in the interrupt enable register (UARTi.UART\_IER). The interrupt status of the device can be checked by reading the interrupt identification register (UARTi.UART\_IIR).

UART, IrDA, and CIR modes have different interrupts in the UART/IrDA/CIR module and, therefore, different UARTi.UART\_IER and UARTi.UART\_IIR mappings, depending on the selected mode.

Table 19-13 lists the interrupt modes to be maintained. In CIR mode, the sole purpose of the UARTi.UART\_IIR[5] bit is to indicate that the last bit of infrared data was passed to the uart\_cts\_rctx pin.

Table 19-13. CIR Mode Interrupts

|   UART_IIR Bit Number | Interrupt Type   | Interrupt Source                                                                       | Interrupt Reset Method                                                   |
|-----------------------|------------------|----------------------------------------------------------------------------------------|--------------------------------------------------------------------------|
|                     0 | RHR interrupt    | DRDY (data ready) (FIFO disable) RX FIFO above trigger level (FIFO enable)             | Read UART_RHR until interrupt condition disappears.                      |
|                     1 | THR interrupt    | TFE (UART_THR empty) (FIFO disable) TX FIFO below trigger level (FIFO enable)          | Write to the UART_THR register until the interrupt condition disappears. |
|                     2 | RX_STOP_IT       | Receive stop interrupt (depending on value set in the BOF Length Register (UART_EBLR). | Read IIR                                                                 |
|                     3 | RX overrun       | Write to RHR when RX FIFO is full.                                                     | Read RESUME register.                                                    |
|                     4 | N/A for CIR mode | N/A for CIR mode                                                                       | N/A for CIR mode                                                         |
|                     5 | TX status        | Transmission of the last bit of the frame is complete successfully.                    | Read the UART_IIR register.                                              |
|                     6 | N/A for CIR mode | N/A for CIR mode                                                                       | N/A for CIR mode                                                         |
|                     7 | N/A for CIR mode | N/A for CIR mode                                                                       | N/A for CIR mode                                                         |

<!-- image -->