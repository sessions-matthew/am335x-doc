## 7.1.4 Use Cases

## 7.1.4.1 How to Set GPMC Timing Parameters for Typical Accesses

## 7.1.4.1.1 External Memory Attached to the GPMC Module

As discussed in the introduction to this chapter, the GPMC module supports the following external memory types:

- Asynchronous or synchronous, 8-bit or 16-bit-width memory or device
- 16-bit address/data-multiplexed or not multiplexed NOR flash device
- 8- or 16-bit NAND flash device

The following examples show how to calculate GPMC timing parameters by showing a typical parameter setup for the access to be performed.

The example is based on a 512-Mb multiplexed NOR flash memory with the following characteristics:

- Type: NOR flash (address/data-multiplexed mode)
- •
- Size: 512M bits
- Data Bus: 16 bits wide
- Speed: 104 MHz clock frequency
- Read access time: 80 ns

## 7.1.4.1.2 Typical GPMC Setup

Table 7-39 lists some of the I/Os of the GPMC module.

Table 7-39. GPMC Signals

| Signal Name    | I/O      | Description                                                                          |
|----------------|----------|--------------------------------------------------------------------------------------|
| GPMC_FCLK      | Internal | Functional and interface clock. Acts as the time reference.                          |
| GPMC_CLK       | O        | External clock provided to the external device for synchronous operations            |
| GPMC_A[27:17]  | O        | Address                                                                              |
| GPMC_AD[15: 0] | I/O      | Data-multiplexed with addresses A[16:1] on memory side                               |
| GPMC_CSxn      | O        | Chip-select (where x = 0, or 1)                                                      |
| GPMC_ADVn_ALE  | O        | Address valid enable                                                                 |
| GPMC_OE_REn    | O        | Output enable (read access only)                                                     |
| GPMC_WEn       | O        | Write enable (write access only)                                                     |
| GPMC_WAIT[1:0] | I        | Ready signal from memory device. Indicates when valid burst data is ready to be read |

<!-- image -->

<!-- image -->

Figure 7-43 shows the typical connection between the GPMC module and an attached NOR Flash memory.

Figure 7-43. GPMC Connection to an External NOR Flash Memory

<!-- image -->

The following sections demonstrate how to calculate GPMC parameters for three access types:

- Synchronous burst read
- Asynchronous read
- Asynchronous single write

## 7.1.4.1.3 GPMC Configuration for Synchronous Burst Read Access

The clock runs at 104 MHz ( f = 104 MHz; T = 9, 615 ns).

Table 7-40 shows the timing parameters (on the memory side) that determine the parameters on the GPMC side.

Table 7-41 shows how to calculate timings for the GPMC using the memory parameters.

Figure 7-44 shows the synchronous burst read access.

Table 7-40. Useful Timing Parameters on the Memory Side

| AC Read Characteristics on the Memory Side   | Description                                   | Duration (ns)   |
|----------------------------------------------|-----------------------------------------------|-----------------|
| tCES                                         | CSn setup time to clock                       | 0               |
| tACS                                         | Address setup time to clock                   | 3               |
| tIACC                                        | Synchronous access time                       | 80              |
| tBACC                                        | Burst access time valid clock to output delay | 5,2             |
| tCEZ                                         | Chip-select to High-Impedance                 | 7               |
| tOEZ                                         | Output enable to High-Impedance               | 7               |
| tAVC                                         | ADVn setup time                               | 6               |
| tAVD                                         | AVDn pulse                                    | 6               |
| tACH                                         | Address hold time from clock                  | 3               |

The following terms, which describe the timing interface between the controller and its attached device, are used to calculate the timing parameters on the GPMC side:

- Read Access time (GPMC side): Time required to activate the clock + read access time requested on the memory side + data setup time required for optimal capture of a burst of data
- Data setup time (GPMC side): Ensures a good capture of a burst of data (as opposed to taking a burst of data out). One word of data is processed in one clock cycle (T = 9,615 ns). The read access time between 2 bursts of data is tBACC = 5,2 ns. Therefore, data setup time is a clock period - tBACC = 4,415 ns of data setup.
- Access completion (GPMC side): (Different from page burst access time) Time required between the last burst access and access completion: CSn/OEn hold time (CSn and OEn must be released at the end of an access. These signals are held to allow the access to complete).
- Read cycle time (GPMC side): Read Access time + access completion
- Write cycle time for burst access: Not supported for NOR flash memory

<!-- image -->

<!-- image -->

Table 7-41. Calculating GPMC Timing Parameters

| Parameter Name on GPMC Side   | Formula                                                             | Duration (ns)               | Number of Clock Cycles (F = 104 MHz)   | GPMC Register Configurations   |
|-------------------------------|---------------------------------------------------------------------|-----------------------------|----------------------------------------|--------------------------------|
| GPMC FCLK Divider             | -                                                                   | -                           | -                                      | GPMCFCLKDIVIDER = 0            |
| ClkActivationTime             | min ( tCES, tACS)                                                   | 3                           | 1                                      | CLKACTIVATIONTIME = 1          |
| RdAccessTime                  | roundmax (ClkActivationTime + tIACC + DataSetupTime)                | 94,03: (9,615 + 80 + 4,415) | 10 : roundmax (94,03 / 9,615)          | ACCESSTIME = Ah                |
| PageBurstAccessTime           | roundmax (tBACC)                                                    | roundmax (5,2)              | 1                                      | PAGEBURSTACCESSTIME = 1        |
| RdCycleTime                   | AccessTime + max ( tCEZ, tOEZ)                                      | 101, 03: (94, 03 + 7)       | 11                                     | RDCYCLETIME = Bh               |
| CsOnTime                      | tCES                                                                | 0                           | 0                                      | CSONTIME = 0                   |
| CsReadOffTime                 | RdCycleTime                                                         | -                           | 11                                     | CSRDOFFTIME = Bh               |
| AdvOnTime                     | tAVC                                                                | 0                           | 0                                      | ADVONTIME = 0                  |
| AdvRdOffTime                  | tAVD + tAVC                                                         | 12                          | 2                                      | ADVRDOFFTIME = 2h              |
| OeOnTime                      | (ClkActivationTime + tACH) < OeOnTime < (ClkActivationTime + tIACC) | -                           | 3, for instance                        | OEONTIME = 3h                  |
| OeOffTime                     | RdCycleTime                                                         | -                           | 11                                     | OEOFFTIME = Bh                 |

Figure 7-44. Synchronous Burst Read Access (Timing Parameters in Clock Cycles)

<!-- image -->

## 7.1.4.1.4 GPMC Configuration for Asynchronous Read Access

The clock runs at 104 MHz ( f = 104 MHz; T = 9, 615 ns).

Table 7-42 shows the timing parameters (on the memory side) that determine the parameters on the GPMC side.

Table 7-43 shows how to calculate timings for the GPMC using the memory parameters.

Figure 7-45 shows the asynchronous read access.

Table 7-42. AC Characteristics for Asynchronous Read Access

| AC Read Characteristics on the Memory Side   | Description                               |   Duration (ns) |
|----------------------------------------------|-------------------------------------------|-----------------|
| tCE                                          | Read Access time from CSn low             |              80 |
| tAAVDS                                       | Address setup time to rising edge of ADVn |               3 |
| tAVDP                                        | ADVn low time                             |               6 |
| tCAS                                         | CSn setup time to ADVn                    |               0 |
| tOE                                          | Output enable to output valid             |               6 |
| tOEZ                                         | Output enable to High-Impedance           |               7 |

Use the following formula to calculate the RdCycleTime parameter for this typical access:

RdCycleTime = RdAccessTime + AccessCompletion = RdAccessTime + 1 clock cycle + tOEZ

- First, on the memory side, the external memory makes the data available to the output bus. This is the memory-side read access time defined in Table 7-43: the number of clock cycles between the address capture (ADVn rising edge) and the data valid on the output bus.

The GPMC requires some hold time to allow the data to be captured correctly and the access to be finished.

- To read the data correctly, the GPMC must be configure to meet the data setup time requirement of the memory; the GPMC module captures the data on the next rising edge. This is access time on the GPMC side.
- There must also be a data hold time for correctly reading the data (checking that there is no OEn/CSn deassertion while reading the data). This data hold time is 1 clock cycle (that is, AccessTime + 1).
- To complete the access, OEn/CSn signals are driven to high-impedance. AccessTime + 1 + tOEZ is the read cycle time.
- Addresses can now be relatched and a new read cycle begun.

<!-- image -->

<!-- image -->

## Table 7-43. GPMC Timing Parameters for Asynchronous Read Access

| Parameter Name on GPMC side   | Formula                                    | Duration (ns)   | Number of Clock Cycles (F = 104 MHz)   | GPMC Register Configurations   |
|-------------------------------|--------------------------------------------|-----------------|----------------------------------------|--------------------------------|
| ClkActivationTime             | n/a (asynchronous mode)                    |                 |                                        |                                |
| AccessTime                    | round max (tCE)                            | 80              | 9                                      | ACCESSTIME = 9h                |
| PageBurstAccessTime           | n/a (single access)                        |                 |                                        |                                |
| RdCycleTime                   | AccessTime + 1cycle + tOEZ                 | 96, 615         | 11                                     | RDCYCLETIME = Bh               |
| CsOnTime                      | tCAS                                       | 0               | 0                                      | CSONTIME = 0                   |
| CsReadOffTime                 | AccessTime + 1 cycle                       | 89, 615         | 10                                     | CSRDOFFTIME = Ah               |
| AdvOnTime                     | tAAVDS                                     | 3               | 1                                      | ADVONTIME = 1                  |
| AdvRdOffTime                  | tAAVDS + tAVDP                             | 9               | 1                                      | ADVRDOFFTIME = 1               |
| OeOnTime                      | OeOnTime ≥ AdvRdOffTime (multiplexed mode) | -               | 3, for instance                        | OEONTIME = 3h                  |
| OeOffTime                     | AccessTime + 1cycle                        | 89, 615         | 10                                     | OEOFFTIME = Ah                 |

Figure 7-45. Asynchronous Single Read Access (Timing Parameters in Clock Cycles)

<!-- image -->

## 7.1.4.1.5 GPMC Configuration for Asynchronous Single Write Access

The clock runs at 104 MHz: (f = 104 MHz; T = 9, 615 ns).

Table 7-44 shows how to calculate timings for the GPMC using the memory parameters.

Table 7-45 shows the timing parameters (on the memory side) that determine the parameters on the GPMC side.

Figure 7-46 shows the synchronous burst write access.

Table 7-44. AC Characteristics for Asynchronous Single Write (Memory Side)

| AC Characteristics on the Memory Side   | Description            |   Duration (ns) |
|-----------------------------------------|------------------------|-----------------|
| tWC                                     | Write cycle time       |              60 |
| tAVDP                                   | ADVn low time          |               6 |
| tWP                                     | Write pulse width      |              25 |
| tWPH                                    | Write pulse width high |              20 |
| tCS                                     | CSn setup time to WEn  |               3 |
| tCAS                                    | CSn setup time to ADVn |               0 |
| tAVSC                                   | ADVn setup time        |               3 |

For asynchronous single write access, write cycle time is WrCycleTime = WeOffTime + AccessCompletion = WeOffTime + 1. For the AccesCompletion, the GPMC requires 1 cycle of data hold time (CSn deassertion).

<!-- image -->

<!-- image -->

Table 7-45. GPMC Timing Parameters for Asynchronous Single Write

| Parameter Name on GPMC side   | Formula                                                                      | Duration (ns)   | Number of Clock Cycles (F = 104 MHz)   | GPMC Register Configurations   |
|-------------------------------|------------------------------------------------------------------------------|-----------------|----------------------------------------|--------------------------------|
| ClkActivationTime             | n/a (asynchronous mode)                                                      |                 |                                        |                                |
| AccessTime                    | Applicable only to WAITMONITORING (the value is the same as for read access) |                 |                                        |                                |
| PageBurstAccessTime           | n/a (single access)                                                          |                 |                                        |                                |
| WrCycleTime                   | WeOffTime + AccessCompletion                                                 | 57, 615         | 6                                      | WRCYCLETIME = 6h               |
| CsOnTime                      | tCAS                                                                         | 0               | 0                                      | CSONTIME = 0                   |
| CsWrOffTime                   | WeOffTime + 1                                                                | 57, 615         | 6                                      | CSWROFFTIME = 6h               |
| AdvOnTime                     | tAVSC                                                                        | 3               | 1                                      | ADVONTIME = 1                  |
| AdvWrOffTime                  | tAVSC + tAVDP                                                                | 9               | 1                                      | ADVWROFFTIME = 1               |
| WeOnTime                      | tCS                                                                          | 3               | 1                                      | WEONTIME = 1                   |
| WeOffTime                     | tCS + tWP + tWPH                                                             | 48              | 5                                      | WEOFFTIME = 5h                 |

Figure 7-46. Asynchronous Single Write Access (Timing Parameters in Clock Cycles)

<!-- image -->

## 7.1.4.2 How to Choose a Suitable Memory to Use With the GPMC

This section is intended to help the user select a suitable memory device to interface with the GPMC controller.

## 7.1.4.2.1 Supported Memories or Devices

NAND flash and NOR flash architectures are the two flash technologies. The GPMC supports various types of external memory or device, basically any one that supports NAND or NOR protocols:

- 8- and 16-bit width asynchronous or synchronous memory or device (8-bit: non burst device only)
- 16-bit address and data multiplexed NOR flash devices (pSRAM)
- 8- and 16-bit NAND flash device

## 7.1.4.2.2 NAND Interface Protocol

NAND flash architecture, introduced in 1989, is a flash technology. NAND is a page-oriented memory device, that is, read and write accesses are done by pages. NAND achieves great density by sharing common areas of the storage transistor, which creates strings of serially connected transistors (in NOR devices, each transistor stands alone). Thanks to its high density NAND is best suited to devices requiring high capacity data storage, such as pictures, music, or data files. NAND non-volatility, makes of it a good storage solution for many applications where mobility, low power, and speed are key factors. Low pin count and simple interface are other advantages of NAND.

Table 7-46 summarizes the NAND interface signals level applied to external device or memories.

Table 7-46. NAND Interface Bus Operations Summary

| Bus Operation         | CLE   | ALE   | CEn   | WEn   | REn   | WPn   |
|-----------------------|-------|-------|-------|-------|-------|-------|
| Read (cmd input)      | H     | L     | L     | RE    | H     | x     |
| Read (add input)      | L     | H     | L     | RE    | H     | x     |
| Write (cmd input)     | H     | L     | L     | RE    | H     | H     |
| Write (add input)     | L     | H     | L     | RE    | H     | H     |
| Data input            | L     | L     | L     | RE    | H     | H     |
| Data output           | L     | L     | L     | H     | FE    | x     |
| Busy (during read)    | x     | x     | H     | H     | H     | x     |
| Busy (during program) | x     | x     | x     | x     | x     | H     |
| Busy (during erase)   | x     | x     | x     | x     | x     | H     |
| Write protect         | x     | x     | x     | x     | x     | L     |
| Stand-by              | x     | x     | H     | x     | x     | H/L   |

## 7.1.4.2.3 NOR Interface Protocol

NOR flash architecture, introduced in 1988, is a flash technology. Unlike NAND, which is a sequential access device, NOR is directly addressable; i.e., it is designed to be a random access device. NOR is best suited to devices used to store and run code or firmware, usually in small capacities. While NOR has fast read capabilities it has slow write and erase functions compared to NAND architecture.

Table 7-47 summarizes the NOR interface signals level applied to external device or memories.

Table 7-47. NOR Interface Bus Operations Summary

| Bus Operation        | CLK     | ADVn   | CSn   | OEn   | WEn   | WAIT     | DQ[15:0]   |
|----------------------|---------|--------|-------|-------|-------|----------|------------|
| Read (asynchronous)  | x       | L      | L     | L     | H     | Asserted | Output     |
| Read (synchronous)   | Running | L      | L     | L     | H     | Driven   | Output     |
| Read (burst suspend) | Halted  | x      | L     | H     | H     | Active   | Output     |
| Write                | x       | L      | L     | H     | L     | Asserted | Input      |

<!-- image -->

<!-- image -->

## Table 7-47. NOR Interface Bus Operations Summary (continued)

| Bus Operation   | CLK   | ADVn   | CSn   | OEn   | WEn   | WAIT     | DQ[15:0]   |
|-----------------|-------|--------|-------|-------|-------|----------|------------|
| Output disable  | x     | x      | L     | H     | H     | Asserted | High-Z     |
| Standby         | x     | x      | H     | x     | x     | High-Z   | High-Z     |