## 19.2.3 UART Pin List

The UART interface pins are listed in Table 19-8. Pin functionality depends on the selected operating mode of the module.

Table 19-8. UART Pin List

| Pin                     | Type   | Description                      |
|-------------------------|--------|----------------------------------|
| UARTx_RXD / IRRX / RCRX | I      | UART / IrDA / CIR Receive Data   |
| UARTx_TXD / IRTX / RCTX | OZ     | UART / IrDA / CIR Transmit Data  |
| UARTx_RTSn / SD         | OZ     | UART Request to Send / IrDA Mode |
| UARTx_CTSn              | I      | UART Clear to Send               |
| UARTx_DTRn (1)          | OZ     | UART Data Terminal Ready         |
| UARTx_DSRn (1)          | I      | UART Data Set Ready              |
| UARTx_DCDn (1)          | I      | UART Data Carrier Detect         |
| UARTx_RIn (1)           | I      | UART Ring Indicator              |

(1) UART1 only

The UART module can operate in three different modes based on the MODE\_SELECT bits. The signal muxing based on these mode bits is shown in Table 19-9.

Table 19-9. UART Muxing Control

| UARTx_TXD / IRTX / RCTX Function   | UARTx_RXD / IRRX / RCRX Function   | UARTx_RTSn / SD Function   | UARTx_CTSn Function   | Mode                 |
|------------------------------------|------------------------------------|----------------------------|-----------------------|----------------------|
| TXD                                | RXD                                | RTSn                       | CTSn                  | UART                 |
| IRTX                               | IRRX                               | SD                         | not used              | IrDA (SIR, MIR, FIR) |
| RCTX                               | RCRX                               | SD                         | not used              | CIR                  |

<!-- image -->