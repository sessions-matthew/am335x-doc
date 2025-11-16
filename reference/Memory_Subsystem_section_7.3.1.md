## 7.3 EMIF

## 7.3.1 Introduction

## 7.3.1.1 Features

The general features of the EMIF module are as follows:

- 16-bit data path to external SDRAM memory
- One 128-bit OCPIP 2.2 interface
- Support for the following memory types:
- -mDDR (LPDDR1)
- -DDR2
- -DDR3

## External memory configurations supported:

- Memory device capacity
- -Up to 1G Byte addressability
- Flexible bank/row/column/chip-select address multiplexing schemes
- Device driver strength feature for mobile DDR supported
- Supports following CAS latencies:
- -DDR2 =&gt; 2, 3, 4, 5, 6, and 7
- -DDR3 =&gt; 5, 6, 7, 8, 9, 10, and 11
- -mDDR =&gt; 2, 3, and 4
- Supports following number of internal banks:
- -DDR2 =&gt; 1, 2, 4, and 8
- -DDR3 =&gt; 1, 2, 4, and 8
- -mDDR =&gt; 1, 2, and 4
- Supports 256, 512, 1024, and 2048-word page sizes
- Supports burst length of 8 (sequential burst)
- Write/read leveling/calibration and data eye training in conjunction with DID
- Self Refresh and Power-Down modes for low power:
- -Flexible OCP to DDR address mapping to support Partial Array Self Refresh in LPDDR1, DDR2 and DDR3.
- -Temperature Controlled Self Refresh for LPDDR1 and DDR3 having on-chip temperature sensor.
- Periodic ZQ calibration for DDR3
- ODT on DDR2 and DDR3
- Prioritized refresh scheduling
- Programmable SDRAM refresh rate and backlog counter
- Programmable SDRAM timing parameters
- Big and little endian modes

<!-- image -->

<!-- image -->

## 7.3.1.2 Unsupported EMIF Features

The following EMIF4DC module features are not supported in this device.

## Table 7-204. Unsupported EMIF Features

| Feature            | Reason                                                                                                                                         |
|--------------------|------------------------------------------------------------------------------------------------------------------------------------------------|
| 32-bit data        | Only 16 bits pinned out                                                                                                                        |
| Multiple DDR banks | Only 1 CS/ODT pinned out                                                                                                                       |
| DDR2 CAS Latency 2 | Not supported by DID                                                                                                                           |
| Hardware leveling  | Silicon bug. Must use software leveling procedure. See AM335x ARM Cortex-A8 Microprocessors (MPUs) Silicon Errata (literature number SPRZ360). |