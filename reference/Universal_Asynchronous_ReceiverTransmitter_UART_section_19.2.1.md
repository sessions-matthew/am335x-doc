<!-- image -->

www.ti.com

## 19.2 Integration

This device contains 6 instantiations of the UART/IrDA (UARTIRDAOCP) peripheral. There are six UART modules called UART0 - UART5. UART0 provides wakeup capability. Only UART 1 provides full modem control signals. All UARTs support IrDA and CIR modes and RTS/CTS flow control (subject to pin muxing configuration). Figure 19-1 shows an example of system connectivity using UART communication with hardware handshake.

Figure 19-1. UART/IrDA Module - UART Application

<!-- image -->

Figure 19-2 shows an example of system connectivity using infrared communication with remote control (consumer infrared).

Figure 19-2. UART/IrDA Module - IrDA/CIR Application

<!-- image -->

## 19.2.1 UART Connectivity Attributes

The general connectivity attributes for each of the UART modules are shown in Table 19-2 and Table 193.

Table 19-2. UART0 Connectivity Attributes

| Attributes   | Type                                                  |
|--------------|-------------------------------------------------------|
| Power Domain | Wake-Up Domain                                        |
| Clock Domain | PD_WKUP_L4_WKUP_GCLK (OCP) PD_WKUP_UART0_GFCLK (Func) |