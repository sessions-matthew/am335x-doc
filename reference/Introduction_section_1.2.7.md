<!-- image -->

www.ti.com

PG1.0: BOOTP Identifier string is "DM814x ROM v1.0".

PG2.x: BOOTP Identifier string is "AM335x ROM".

## 1.2.3 Changed Product String in USB Descriptor

See Section 26.1.9.6.1.2, Enumeration Descriptors .

PG1.0: Product string in USB descriptor is "Subarctic".

PG2.x: Product string in USB descriptor is "AM335x USB".

## 1.2.4 Added DPLL Power Switch Control and Status Registers

See Section 9.3.1.14, dpll\_pwr\_sw\_status Register , and Section 9.3.1.75, dpll\_pwr\_sw\_ctrl Register .

PG1.0: DPLL Power Switch Control and Status registers do not exist.

PG2.x: Added DPLL Power Switch Control and DPLL Power Switch Status registers in the Control Module to facilitate power optimization.

## 1.2.5 Added Control for CORE SRAM LDO Retention Mode

See newly added SMA2 register, Section 9.3.1.77.

PG1.0: SMA2 register does not exist.

PG2.x: Added SMA2.VSLDO\_CORE\_AUTO\_RAMP\_EN.

## 1.2.6 Added Pin Mux Options for GPMC\_A9 to Facilitate RMII Pin Muxing

See newly added SMA2 register, Section 9.3.1.77.

PG1.0: SMA2 register does not exist.

PG2.x: Added SMA2.RMII2\_CRS\_DV\_MODE\_SEL.

## 1.2.7 Changed Polarity of Input Signal nNMI (Pin EXTINTn)

See Section 6.3, ARM Cortex-A8 Interrupts and Errata Advisory 1.0.6.

PG1.0: nNMI input signal is active high.

PG2.x: nNMI input signal is active low.