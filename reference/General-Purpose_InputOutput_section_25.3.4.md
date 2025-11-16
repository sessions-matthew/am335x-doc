<!-- image -->

www.ti.com

## 25.3.3.4 Interrupt (or Wake-up) Line Release

When the host processor receives an interrupt request issued by the GPIO module, it can read the corresponding GPIO\_IRQSTATUS\_n register to find out which input GPIO has triggered the interrupt (or the wake-up request). After servicing the interrupt (or acknowledging the wake-up request), the processor resets the status bit and releases the interrupt line by writing a 1 in the corresponding bit of the GPIO\_IRQSTATUS\_n register. If there is still a pending interrupt request to serve (all bits in the GPIO\_IRQSTATUS\_RAW\_n register not masked by the GPIO\_IRQSTATUS\_SET\_n, which are not cleared by setting the GPIO\_IRQSTATUS\_CLR\_n), the interrupt line will be re-asserted.

## 25.3.4 General-Purpose Interface Basic Programming Model

## 25.3.4.1 Power Saving by Grouping the Edge/Level Detection

Each GPIO module implements four gated clocks used by the edge/level detection logic to save power. Each group of eight input GPIO pins generates a separate enable signal depending on the edge/level detection register setting (because the input is 32 bits, four groups of eight inputs are defined for each GPIO module). If a group requires no edge/level detection, then the corresponding clock is gated (cut off). Grouping the edge/level enable can save the power consumption of the module as described in the following example.

If any of the registers:

- GPIO\_LEVELDETECT0
- GPIO\_LEVELDETECT1
- GPIO\_RISINGDETECT
- GPIO\_FALLINGDETECT

are set to 0101 0101h, then all clocks are active (power consumption is high);

are set to 0000 00FFh, then a single clock is active.

NOTE:

When the clocks are enabled by writing to the GPIO\_LEVELDETECT0, GPIO\_LEVELDETECT1, GPIO\_RISINGDETECT, and GPIO\_FALLINGDETECT registers, the detection starts after 5 clock cycles. This period is required to clean the synchronization edge/level detection pipeline.

The mechanism is independent of each clock group. If the clock has been started before a new setting is performed, the following is recommended: first, set the new detection required; second, disable the previous setting (if necessary). In this way, the corresponding clock is not gated and the detection starts immediately.

## 25.3.4.2 Set and Clear Instructions

The GPIO module implements the set-and-clear protocol register update for the data output and interrupt enable, and wake-up enable registers. This protocol is an alternative to the atomic test and set operations and consists of writing operations at dedicated addresses (one address for setting bit[s] and one address for clearing bit[s]). The data to write is 1 at bit position(s) to clear (or to set) and 0 at unaffected bit(s).

Registers can be accessed in two ways:

- Standard: Full register read and write operations at the primary register address
- Set and clear (recommended): Separate addresses are provided to set (and clear) bits in registers. Writing 1 at these addresses sets (or clears) the corresponding bit into the equivalent register; writing a 0 has no effect.

Therefore, for these registers, three addresses are defined for one unique physical register. Reading these addresses has the same effect and returns the register value.

## 25.3.4.2.1 Clear Instruction

## 25.3.4.2.1.1 Clear Interrupt Enable Registers (GPIO\_IRQSTATUS\_CLR\_0 and GPIO\_IRQSTATUS\_CLR\_1):

- A write operation in the clear interrupt enable1 (or enable2) register clears the corresponding bit in the interrupt enable1 (or enable2) register when the written bit is 1; a written bit at 0 has no effect.
- A read of the clear interrupt enable1 (or enable2) register returns the value of the interrupt enable1 (or enable2) register.

<!-- image -->

<!-- image -->

www.ti.com

## 25.3.4.2.1.2 Clear Wake-up Enable Register (GPIO\_CLEARWKUENA):

- A write operation in the clear wake-up enable register clears the corresponding bit in the wake-up enable register when the written bit is 1; a written bit at 0 has no effect.
- A read of the clear wake-up enable register returns the value of the wake-up enable register.

## 25.3.4.2.1.3 Clear Data Output Register (GPIO\_CLEARDATAOUT):

- A write operation in the clear data output register clears the corresponding bit in the data output register when the written bit is 1; a written bit at 0 has no effect.
- A read of the clear data output register returns the value of the data output register.

## 25.3.4.2.1.4 Clear Instruction Example

Assume the data output register (or one of the interrupt/wake-up enable registers) contains the binary value, 0000 0001 0000 0001h, and you want to clear bit 0.

With the clear instruction feature, write 0000 0000 0000 0001h at the address of the clear data output register (or at the address of the clear interrupt/wake-up enable register). After this write operation, a reading of the data output register (or the interrupt/wake-up enable register) returns 0000 0001 0000 0000h; bit 0 is cleared.

<!-- image -->

## 25.3.4.2.2 Set Instruction

## 25.3.4.2.2.1 Set Interrupt Enable Registers (GPIO\_IRQSTATUS\_SET\_0 and GPIO\_IRQSTATUS\_SET\_1):

- A write operation in the set interrupt enable1 (or enable2) register sets the corresponding bit in the interrupt enable1 (or enable2) register when the written bit is 1; a written bit at 0 has no effect.
- A read of the set interrupt enable1 (or enable2) register returns the value of the interrupt enable1 (or enable2) register.

## 25.3.4.2.2.2 Set Wake-up Enable Register (GPIO\_SETWKUENA):

- A write operation in the set wake-up enable register sets the corresponding bit in the wake-up enable register when the written bit is 1; a written bit at 0 has no effect.
- A read of the set wake-up enable register returns the value of the wake-up enable register.

## 25.3.4.2.2.3 Set Data Output Register (GPIO\_SETDATAOUT):

- A write operation in the set data output register sets the corresponding bit in the data output register when the written bit is 1; a written bit at 0 has no effect.
- A read of the set data output register returns the value of the data output register.

## 25.3.4.2.2.4 Set Instruction Example

Assume the interrupt enable1 (or enable2) register (or the data output register) contains the binary value, 0000 0001 0000 0000h, and you want to set bits 15, 3, 2, and 1.

With the set instruction feature, write 1000 0000 0000 1110h at the address of the set interrupt enable1 (or enable2) register (or at the address of the set data output register). After this write operation, a reading of the interrupt enable1 (or enable2) register (or the data output register) returns 1000 0001 0000 1110h; bits 15, 3, 2, and 1 are set.

NOTE: Although the general-purpose interface registers are 32-bits wide, only the 16 leastsignificant bits are represented in this example.

<!-- image -->

## 25.3.4.3 Data Input (Capture)/Output (Drive)

The output enable register (GPIO\_OE) controls the output/input capability for each pin. At reset, all the GPIO-related pins are configured as input and output capabilities are disabled. This register is not used within the module; its only function is to carry the pads configuration.

When configured as an output (the desired bit reset in GPIO\_OE), the value of the corresponding bit in the GPIO\_DATAOUT register is driven on the corresponding GPIO pin. Data is written to the data output register synchronously with the interface clock. This register can be accessed with read/write operations or by using the alternate set and clear protocol register update feature. This feature lets you set or clear specific bits of this register with a single write access to the set data output register (GPIO\_SETDATAOUT) or to the clear data output register (GPIO\_CLEARDATAOUT) address. If the application uses a pin as an output and does not want interrupt/wake-up generation from this pin, the application must properly configure the wake-up enable and the interrupt enable registers.

When configured as an input (the desired bit set to 1 in GPIO\_OE), the state of the input can be read from the corresponding bit in the GPIO\_DATAIN register. The input data is sampled synchronously with the interface clock and then captured in the data input register synchronously with the interface clock. When the GPIO pin levels change, they are captured into this register after two interface clock cycles (the required cycles to synchronize and to write data). If the application uses a pin as an input, the application must properly configure the wake-up enable and the interrupt enable registers to the interrupt and wakeup feature as needed.

## 25.3.4.4 Debouncing Time

To enable the debounce feature for a pin, the GPIO configuration registers must be programmed as follows:

- The GPIO pin must be configured as input in the output enable register (write 1 to the corresponding bit of the GPIO\_OE register).
- The debouncing time must be set in the debouncing value register (GPIO\_DEBOUNCINGTIME). The GPIO\_DEBOUNCINGTIME register is used to set the debouncing time for all input lines in the GPIO module. The value is global for all the ports of one GPIO module, so up to six different debouncing values are possible. The debounce cell is running with the debounce clock (32 kHz). This register represents the number of the clock cycle(s) (one cycle is 31 microseconds long) to be used.

The following formula describes the required input stable time to be propagated to the debounced output:

<!-- image -->

<!-- image -->

www.ti.com

Debouncing time = (DEBOUNCETIME + 1) × 31 µs

Where the DEBOUNCETIME field value in the GPIO\_DEBOUNCINGTIME register is from 0 to 255.

- The debouncing feature must be enabled in the debouncing enable register (write 1 to the corresponding DEBOUNCEENABLE bit in the GPIO\_DEBOUNCENABLE register).

## 25.3.4.5 GPIO as a Keyboard Interface

The general-purpose interface can be used as a keyboard interface (Figure 25-7). You can dedicate channels based on the keyboard matrix = * c). Figure 25-7 shows row channels configured as inputs with the input debounce feature enabled. The row channels are driven high with an external pull-up. Column channels are configured as outputs and drive a low level.

When a keyboard matrix key is pressed, the corresponding row and column lines are shorted together and a low level is driven on the corresponding row channel. This generates an interrupt based on the proper configuration (see Section 25.3.3).

When the keyboard interrupt is received, the processor can disable the keyboard interrupt and scan the column channels for the key coordinates.

- The scanning sequence has as many states as column channels: For each step in the sequence, the processor drives one column channel low and the others high.
- The processor reads the values of the row channels and thus detects which keys in the column are pressed.

At the end of the scanning sequence, the processor establishes which keys are pressed. The keyboard interface can then be reconfigured in the interrupt waiting state.

Figure 25-7. General-Purpose Interface Used as a Keyboard Interface

<!-- image -->