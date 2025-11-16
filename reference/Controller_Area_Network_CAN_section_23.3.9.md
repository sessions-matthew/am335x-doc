Figure 23-8. CAN Core in Loop Back Combined With Silent Mode

<!-- image -->

## 23.3.8.3.5 Software Control of CAN\_TX pin

Four output functions are available for the CAN transmit pin CAN\_TX. In addition to its default function (serial data output), the CAN\_TX pin can drive constant dominant or recessive values, or it can drive the CAN sample point signal to monitor the CAN core's bit timing.

Combined with the readable value of the CAN\_RX pin, this function can be used to check the physical layer of the CAN bus.

The output mode of pin CAN\_TX is selected by programming the TEST register bits Tx[1:0].

NOTE:

The software control for the CAN\_TX pin interferes with CAN protocol functions. For CAN message transfer or any of the test modes (loopback mode, external loopback mode or silent mode), the CAN\_TX pin should operate in its default functionality.

## 23.3.9 Dual Clock Source

Two clock domains are provided to the DCAN module: the peripheral synchronous clock domain (L3\_SLOW\_GCLK) as the general module clock source, and the peripheral asynchronous clock source domain (CLK\_M\_OSC) provided to the CAN core (as clock source CAN\_CLK) for generating the CAN bit timing.

Both clock domains can be derived from the same clock source (so that L3\_SLOW\_GCLK = CLK\_M\_OSC).

For more information on how to configure the relevant clock source registers in the system module, see Chapter 8, Power and Clock Management.

Between the two clock domains, a synchronization mechanism is implemented in the DCAN module in order to ensure correct data transfer.

NOTE:

NOTE:

If the dual clock functionality is used, then L3\_SLOW\_GCLK must always be higher or equal to CAN\_CLK (CLK\_M\_OSC) (derived from the asynchronous clock source), in order to achieve a stable functionality of the DCAN. Here also the frequency shift of the modulated L3\_SLOW\_GCLK has to be considered:

f 0 , L3\_SLOW\_GCLK(OCP) ± Δ f FM , L3\_SLOW\_GCLK(OCP) ≥ f CANCLK

The CAN core has to be programmed to at least 8 clock cycles per bit time. To achieve a transfer rate of 1 MBaud when using the asynchronous clock domain as the clock source for CAN\_CLK (CLK\_M\_OSC), an oscillator frequency of 8 MHz or higher has to be used.

<!-- image -->