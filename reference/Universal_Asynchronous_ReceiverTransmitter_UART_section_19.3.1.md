<!-- image -->

www.ti.com

## 19.3 Functional Description

## 19.3.1 Block Diagram

The UART/IrDA/CIR module can be divided into three main blocks:

- FIFO management
- Mode selection
- Protocol formatting

FIFO management is common to all functions and enables the transmission and reception of data from the host processor point of view.

## There are two modes:

- Function mode: Routes the data to the chosen function (UART, IrDA, or CIR) and enables the mechanism corresponding to the chosen function
- Register mode: Enables conditional access to registers

For more information about mode configuration, see Section 19.3.7, Mode Selection .

Protocol formatting has three subcategories:

- Clock generation: The 48-MHz input clock generates all necessary clocks.
- Data formatting: Each function uses its own state-machine that is responsible for the transition between FIFO data and frame data associated with it.
- Interrupt management: Different interrupt types are generated depending on the chosen function:
- -UART mode interrupts: Seven interrupts prioritized in six different levels
- -IrDA mode interrupts: Eight interrupts. The interrupt line is activated when any interrupt is generated (there is no priority).
- -CIR mode interrupts: A subset of existing IrDA mode interrupts is used.

In each mode, when an interrupt is generated, the UART\_IIR register indicates the interrupt type.

In parallel with these functional blocks, a power-saving strategy exists for each function.

Figure 19-3 is the UART/IrDA/CIR block diagram.