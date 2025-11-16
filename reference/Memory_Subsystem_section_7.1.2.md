## 7.1.2 Integration

An instantiation of GPMC provides this device with access to NAND Flash, NOR Flash, and other asynchronous and synchronous interface peripherals. Figure 7-2 shows the integration of the GPMC module in this device.

Figure 7-2. GPMC Integration

<!-- image -->

## 7.1.2.1 GPMC Connectivity Attributes

The general connectivity attributes for the GPMC module are shown in Table 7-2.

Table 7-2. GPMC Connectivity Attributes

| Attributes          | Type                                                                                    |
|---------------------|-----------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                       |
| Clock Domain        | PD_PER_L3S_GCLK                                                                         |
| Reset Signals       | PER_DOM_RST_N                                                                           |
| Idle/Wakeup Signals | Smart Idle                                                                              |
| Interrupt Requests  | 1 interrupt to MPU Subsystem (GPMCINT)                                                  |
| DMA Requests        | 1 DMA request to EDMA (GPMCEVT)                                                         |
| Physical Address    | L3 Slow Slave Port Memory and control register regions qualified with MAddressSpace bit |

## 7.1.2.2 GPMC Clock and Reset Management

The GPMC is a synchronous design and operates from the same clock as the Slow L3. All timings use this clock as a reference.

Table 7-3. GPMC Clock Signals

| Clock Signal                               | Max Freq   | Reference / Source   | Comments                  |
|--------------------------------------------|------------|----------------------|---------------------------|
| prcm_gpmc_clk Interface / Functional clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l3s_gclk From PRCM |

## 7.1.2.3 GPMC Signal List

The GPMC external interface signals are shown in Table 7-4.

<!-- image -->

<!-- image -->

## Table 7-4. GPMC Signal List

| Signal         | Type   | Description                                                                                                                                                                   |
|----------------|--------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| GPMC_A[27:0]   | O      | Address outputs                                                                                                                                                               |
| GPMC_AD[15:0]  | I/O    | Data[15:0] in non-muxed mode. A[16:1], D[15:0] in AD-muxed mode. A[27:17], A[16:1], D[15:0] in AAD-muxed mode.                                                                |
| GPMC_CSn[6:0]  | O      | Chip selects (active low)                                                                                                                                                     |
| GPMC_CLK       | O (1)  | Synchronous mode clock                                                                                                                                                        |
| GPMC_ADVn_ALE  | O      | Address Valid or Address Latch Enable depending if NOR or NAND protocol memories are selected.                                                                                |
| GPMC_OEn_REn   | O      | Output Enable (active low). Also used as Read Enable (active low) for NAND protocol memories                                                                                  |
| GPMC_WEn       | O      | Write Enable (active low)                                                                                                                                                     |
| GPMC_BE0n_CLE  | O      | Lower Byte Enable (active low). Also used as Command Latch Enable for NAND protocol memories                                                                                  |
| GPMC_BE1n      | O      | Upper Byte Enable (active low)                                                                                                                                                |
| GPMC_WPn       | O      | Write Protect (active low)                                                                                                                                                    |
| GPMC_WAIT[1:0] | I      | External wait signal for NOR and NAND protocol memories.                                                                                                                      |
| GPMC_DIR       | O      | GPMC.D[15:0] signal direction control Low during transmit (for write access: data OUT from GPMC to memory) High during receive (for read access: data IN from memory to GPMC) |

(1) These signals are also used as inputs to re-time or sync data. The associated CONF\_&lt;module&gt;\_&lt;pin&gt;\_RXACTIVE bit for these signals must be set to 1 to enable the inputs back to the module. It is also recommended to place a 33-ohm resistor in series (close to the processor) on each of these signals to avoid signal reflections.

## Functional Description

## 7.1.2.1 GPMC Signals

Table 7-5 shows the use of address and data GPMC controller pins based on the type of external device.

Table 7-5. GPMC Pin Multiplexing Options

| GPMC Signal   | Non Multiplexed Address Data 16- Bit Device (1)   | Non Multiplexed Address Data 8-Bit Device   | Multiplexed Address Data 16- Bit Device (1)   | 16-Bit NAND Device   | 8-Bit NAND Device   |
|---------------|---------------------------------------------------|---------------------------------------------|-----------------------------------------------|----------------------|---------------------|
| GPMC_A[27]    | A26                                               | A27                                         | A26                                           | Not Used             | Not Used            |
| GPMC_A[26]    | A25                                               | A26                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[25]    | A24                                               | A25                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[24]    | A23                                               | A24                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[23]    | A22                                               | A23                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[22]    | A21                                               | A22                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[21]    | A20                                               | A21                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[20]    | A19                                               | A20                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[19]    | A18                                               | A19                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[18]    | A17                                               | A18                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[17]    | A16                                               | A17                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[16]    | A15                                               | A16                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[15]    | A14                                               | A15                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[14]    | A13                                               | A14                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[13]    | A12                                               | A13                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[12]    | A11                                               | A12                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[11]    | A10                                               | A11                                         | Not Used                                      | Not Used             | Not Used            |
| GPMC_A[10]    | A9                                                | A10                                         | A25                                           | Not Used             | Not Used            |
| GPMC_A[9]     | A8                                                | A9                                          | A24                                           | Not Used             | Not Used            |
| GPMC_A[8]     | A7                                                | A8                                          | A23                                           | Not Used             | Not Used            |
| GPMC_A[7]     | A6                                                | A7                                          | A22                                           | Not Used             | Not Used            |
| GPMC_A[6]     | A5                                                | A6                                          | A21                                           | Not Used             | Not Used            |
| GPMC_A[5]     | A4                                                | A5                                          | A20                                           | Not Used             | Not Used            |
| GPMC_A[4]     | A3                                                | A4                                          | A19                                           | Not Used             | Not Used            |
| GPMC_A[3]     | A2                                                | A3                                          | A18                                           | Not Used             | Not Used            |
| GPMC_A[2]     | A1                                                | A2                                          | A17                                           | Not Used             | Not Used            |
| GPMC_A[1]     | A0                                                | A1                                          | A16                                           | Not Used             | Not Used            |
| GPMC_A[0]     | Not Used                                          | A0                                          | Not Used                                      | Not Used             | Not Used            |
| GPMC_AD[15]   | D15                                               | Not Used                                    | A/D[15]                                       | D15                  | Not Used            |
| GPMC_AD[14]   | D14                                               | Not Used                                    | A/D[14]                                       | D14                  | Not Used            |
| GPMC_AD[13]   | D13                                               | Not Used                                    | A/D[13]                                       | D13                  | Not Used            |
| GPMC_AD[12]   | D12                                               | Not Used                                    | A/D[12]                                       | D12                  | Not Used            |
| GPMC_AD[11]   | D11                                               | Not Used                                    | A/D[11]                                       | D11                  | Not Used            |
| GPMC_AD[10]   | D10                                               | Not Used                                    | A/D[10]                                       | D10                  | Not Used            |
| GPMC_AD[9]    | D9                                                | Not Used                                    | A/D[9]                                        | D9                   | Not Used            |
| GPMC_AD[8]    | D8                                                | Not Used                                    | A/D[8]                                        | D8                   | Not Used            |
| GPMC_AD[7]    | D7                                                | D7                                          | A/D[7]                                        | D7                   | D7                  |
| GPMC_AD[6]    | D6                                                | D6                                          | A/D[6]                                        | D6                   | D6                  |

(1) The values in this column represent the signals on the memory. Be aware that some 16-bit memories may label the address lines differently. Some label the LSB as A0, while others use A1 for the LSB. These columns assume the LSB is A0.

<!-- image -->

<!-- image -->

Table 7-5. GPMC Pin Multiplexing Options (continued)

| GPMC Signal   | Non Multiplexed Address Data 16- Bit Device (1)   | Non Multiplexed Address Data 8-Bit Device   | Multiplexed Address Data 16- Bit Device (1)   | 16-Bit NAND Device         | 8-Bit NAND Device          |
|---------------|---------------------------------------------------|---------------------------------------------|-----------------------------------------------|----------------------------|----------------------------|
| GPMC_AD[5]    | D5                                                | D5                                          | A/D[5]                                        | D5                         | D5                         |
| GPMC_AD[4]    | D4                                                | D4                                          | A/D[4]                                        | D4                         | D4                         |
| GPMC_AD[3]    | D3                                                | D3                                          | A/D[3]                                        | D3                         | D3                         |
| GPMC_AD[2]    | D2                                                | D2                                          | A/D[2]                                        | D2                         | D2                         |
| GPMC_AD[1]    | D1                                                | D1                                          | A/D[1]                                        | D1                         | D1                         |
| GPMC_AD[0]    | D0                                                | D0                                          | A/D[0]                                        | D0                         | D0                         |
| GPMC_CS[0]n   | CS0n (Chip Select)                                | CS0n (Chip Select)                          | CS0n (Chip Select)                            | CE0n (Chip Enable)         | CE0n (Chip Enable)         |
| GPMC_CS[1]n   | CS1n                                              | CS1n                                        | CS1n                                          | CE1n                       | CE1n                       |
| GPMC_CS[2]n   | CS2n                                              | CS2n                                        | CS2n                                          | CE2n                       | CE2n                       |
| GPMC_CS[3]n   | CS3n                                              | CS3n                                        | CS3n                                          | CE3n                       | CE3n                       |
| GPMC_CS[4]n   | CS4n                                              | CS4n                                        | CS4n                                          | CE4n                       | CE4n                       |
| GPMC_CS[5]n   | CS5n                                              | CS5n                                        | CS5n                                          | CE5n                       | CE5n                       |
| GPMC_CS[6]n   | CS6n                                              | CS6n                                        | CS6n                                          | CE6n                       | CE6n                       |
| GPMC_ADVn_ALE | ADVn (Address Value)                              | ADVn (Address Value)                        | ADVn (Address Value)                          | ALE (address latch enable) | ALE (address latch enable) |
| GPMC_BE0n_CLE | BE0n (Byte Enable)                                | BE0n (Byte Enable)                          | BE0n (Byte Enable)                            | CLE (command latch enable) | CLE (command latch enable) |
| GPMC_BE1n     | BE1n                                              | BE1n                                        | BE1n                                          |                            |                            |
| GPMC_CLK      | CLK                                               | CLK                                         | CLK                                           |                            |                            |
| GPMC_OE_REn   | OEn (Output Enable)                               | OEn (Output Enable)                         | OEn (Output Enable)                           | REn (read enable)          | REn (read enable)          |
| GPMC_WAIT0    | WAIT0                                             | WAIT0                                       | WAIT0                                         | R/B0n (ready/busy)         | R/B0n (ready/busy)         |
| GPMC_WAIT1    | WAIT1                                             | WAIT1                                       | WAIT1                                         | R/B1n (ready/busy)         | R/B1n (ready/busy)         |
| GPMC_WEn      | WEn (Write Enable)                                | WEn (Write Enable)                          | WEn (Write Enable)                            | WEn (write enable)         | WEn (write enable)         |
| GPMC_WPn      | WPn (Write Protect)                               | WPn (Write Protect)                         | WPn (Write Protect)                           | WPn (write protect)        | WPn (write protect)        |

With all device types, the GPMC does not drive unnecessary address lines. They stay at their reset value of 00.

Address mapping supports address/data-multiplexed 16-bit wide devices:

- The NOR flash memory controller still supports non-multiplexed address and data memory devices.
- Multiplexing mode can be selected through the GPMC\_CONFIG1\_i[9-8] MUXADDDATA bit field.
- Asynchronous page mode is not supported for multiplexed address and data devices.

## 7.1.2.2 GPMC Modes

This section shows three GPMC external connections options:

- Figure 7-3 shows a connection between the GPMC and a 16-bit synchronous address/data-multiplexed (or AAD-multiplexed, but this protocol use less address pins) external memory device.
- Figure 7-4 shows a connection between the GPMC and a 16-bit synchronous nonmultiplexed external memory device .
- Figure 7-5 shows a connection between the GPMC and a 8-bit NAND device

Figure 7-3. GPMC to 16-Bit Address/Data-Multiplexed Memory

<!-- image -->

<!-- image -->

<!-- image -->

Figure 7-4. GPMC to 16-Bit Non-multiplexed Memory

<!-- image -->

Figure 7-5. GPMC to 8-Bit NAND Device

<!-- image -->

## 7.1.2.3 GPMC Functional Description

The GPMC basic programming model offers maximum flexibility to support various access protocols for each of the eight configurable chip-selects. Use optimal chip-select settings, based on the characteristics of the external device:

- Different protocols can be selected to support generic asynchronous or synchronous random-access devices (NOR flash, SRAM) or to support specific NAND devices.
- The address and the data bus can be multiplexed on the same external bus.
- Read and write access can be independently defined as asynchronous or synchronous.
- System requests (byte, 16-bit word, burst) are performed through single or multiple accesses. External access profiles (single, multiple with optimized burst length, native- or emulated-wrap) are based on external device characteristics (supported protocol, bus width, data buffer size, native-wrap support).
- System burst read or write requests are synchronous-burst (multiple-read or multiple-write). When neither burst nor page mode is supported by external memory or ASIC devices, system burst read or write requests are translated to successive single synchronous or asynchronous accesses (single reads or single writes). 8-bit wide devices are supported only in single synchronous or single asynchronous read or write mode.
- To simulate a programmable internal-wait state, an external wait pin can be monitored to dynamically control external access at the beginning (initial access time) of and during a burst access.

Each control signal is controlled independently for each chip-select. The internal functional clock of the GPMC (GPMC\_FCLK) is used as a time reference to specify the following:

- Read- and write-access duration
- Most GPMC external interface control-signal assertion and deassertion times
- Data-capture time during read access
- External wait-pin monitoring time
- Duration of idle time between accesses, when required

<!-- image -->

<!-- image -->

## 7.1.2.3.1 GPMC Clock Configuration

Table 7-6 describes the GPMC clocks.

Table 7-6. GPMC Clocks

| Signal    | I/O   | Description                                                     |
|-----------|-------|-----------------------------------------------------------------|
| GPMC_FCLK | I     | Functional and interface clock                                  |
| GPMC_CLK  | O     | External clock provided to synchronous external memory devices. |

The GPMC\_CLK is generated by the GPMC from the internal GPMC\_FCLK clock. The source of the GPMC\_FCLK is described in Table 7-3. The GPMC\_CLK is configured via the GPMC\_CONFIG1\_i[1-0] GPMCFCLKDIVIDER field (for i = 0 to 3) as shown in Table 7-7.

Table 7-7. GPMC\_CONFIG1\_i Configuration

| Source Clock   |   GPMC_CONFIG1_i[1-0] GPMCFCLKDIVIDER | GPMC_CLK Generated Clock Provided to External Memory Device   |
|----------------|---------------------------------------|---------------------------------------------------------------|
| GPMC_FCLK      |                                    00 | GPMC_FCLK                                                     |
| GPMC_FCLK      |                                    01 | GPMC_FCLK/2                                                   |
| GPMC_FCLK      |                                    10 | GPMC_FCLK/3                                                   |
| GPMC_FCLK      |                                    11 | GPMC_FCLK/4                                                   |

## 7.1.2.3.2 GPMC Software Reset

The GPMC can be reset by software through the GPMC\_SYSCONFIG[1] SOFTRESET bit. Setting the bit to 1 enables an active software reset that is functionally equivalent to a hardware reset. Hardware and software resets initialize all GPMC registers and the finite state-machine (FSM) immediately and unconditionally. The GPMC\_SYSSTATUS[0] RESETDONE bit indicates that the software reset is complete when its value is 1. The software must ensure that the software reset completes before doing GPMC operations.

## 7.1.2.3.3 GPMC Power Management

GPMC power is supplied by the CORE power domain, and GPMC power management complies with system power-management guidelines. Table 7-8 describes power-management features available for the GPMC module.

Table 7-8. GPMC Local Power Management Features

| Feature                | Registers                               | Description                                                                                                             |
|------------------------|-----------------------------------------|-------------------------------------------------------------------------------------------------------------------------|
| Clock Auto Gating      | GPMC_SYSCONFIG[0] AUTOIDLE] bit         | This bit allows a local power optimization inside the module, by gating the GPMC_FCLK clock upon the internal activity. |
| Slave Idle Modes       | GPMC_SYSCONFIG[4-3] SIDLEMODE bit field | Force-idle, No-idle and Smart-idle wakeup modes are available                                                           |
| Clock Activity         | N/A                                     | Feature not available                                                                                                   |
| Master Standby Modes   | N/A                                     | Feature not available                                                                                                   |
| Global Wake-up Enable  | N/A                                     | Feature not available                                                                                                   |
| Wake-up Sources Enable | N/A                                     | Feature not available                                                                                                   |

## 7.1.2.3.4 GPMC Interrupt Requests

The GPMC generates one interrupt event as shown in Figure 7-2.

- The interrupt request goes from GPMC (GPMC\_IRQ) to the MPU subsystem: A\_IRQ\_100

Table 7-9 lists the event flags, and their mask, that can cause module interrupts.

Table 7-9. GPMC Interrupt Events

| Event Flag                                  | Event Mask                                  | Sensitivity   | Map to    | Description                                                                                                                                                                                                        |
|---------------------------------------------|---------------------------------------------|---------------|-----------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| GPMC_IRQSTATUS[9] WAIT1EDGEDETECTIO NSTATUS | GPMC_IRQENABLE[9] WAIT1EDGEDETECTIO NENABLE | Edge          | A_IRQ_100 | Wait1 edge detection interrupt: Triggered if a rising or falling edge is detected on the GPMC_WAIT1 signal. The rising or falling edge detection of Wait1 is selected through GPMC_CONFIG[9] WAIT1PINPOLARITY bit. |
| GPMC_IRQSTATUS[8] WAIT0EDGEDETECTIO NSTATUS | GPMC_IRQENABLE[8] WAIT0EDGEDETECTIO NENABLE | Edge          | A_IRQ_100 | Wait0 edge detection interrupt: Triggered if a rising or falling edge is detected on the GPMC_WAIT0 signal. The rising or falling edge detection of Wait0 is selected through GPMC_CONFIG[8] WAIT0PINPOLARITY bit. |
| GPMC_IRQSTATUS[1] TERMINALCOUNTSTAT US      | GPMC_IRQENABLE[1] TERMINALCOUNTENA BLE      | Level         | A_IRQ_100 | Terminal count event: Triggered on prefetch process completion, that is when the number of currently remaining data to be requested reaches 0.                                                                     |
| GPMC_IRQSTATUS[0] FIFOEVENTSTATUS           | GPMC_IRQENABLE[0] FIFOEVENTENABLE           | Level         | A_IRQ_100 | FIFO event interrupt: Indicates FIFO levels availability for in Write-Posting mode and prefetch mode. GPMC_PREFETCH_CONFIG[2] DMAMODE bit shall be cleared to 0.                                                   |

## 7.1.2.3.5 GPMC DMA Requests

The GPMC generates one DMA event, from GPMC (GPMC\_DMA\_REQ) to the eDMA: e\_DMA\_53

## 7.1.2.3.6 L3 Slow Interconnect Interface

The GPMC L3 Slow interconnect interface is a pipelined interface including an 16 × 32-bit word write buffer. Any system host can issue external access requests through the GPMC. The device system can issue the following requests through this interface:

- One 8-bit / 16-bit / 32-bit interconnect access (read/write)
- Two incrementing 32-bit interconnect accesses (read/write)
- Two wrapped 32-bit interconnect accesses (read/write)
- Four incrementing 32-bit interconnect accesses (read/write)
- Four wrapped 32-bit interconnect accesses (read/write)
- Eight incrementing 32-bit interconnect accesses (read/write)
- Eight wrapped 32-bit interconnect accesses (read/write)

Only linear burst transactions are supported; interleaved burst transactions are not supported. Only powerof-two-length precise bursts 2 × 32, 4 × 32, 8 × 32 or 16 × 32 with the burst base address aligned on the total burst size are supported (this limitation applies to incrementing bursts only).

This interface also provides one interrupt and one DMA request line, for specific event control.

It is recommended to program the GPMC\_CONFIG1\_i ATTACHEDDEVICEPAGELENGTH field ([24-23]) according to the effective attached device page length and to enable the GPMC\_CONFIG1\_i WRAPBURST bit ([31]) if the attached device supports wrapping burst. However, it is possible to emulate wrapping burst on a non-wrapping memory by providing relevant addresses within the page or splitting transactions. Bursts larger than the memory page length are chopped into multiple bursts transactions. Due to the alignment requirements, a page boundary is never crossed.

<!-- image -->

<!-- image -->

www.ti.com

## 7.1.2.3.7 GPMC Address and Data Bus

The current application supports GPMC connection to NAND devices and to address/data-multiplexed memories or devices. Connection to address/data-nonmultiplexed memories Depending on the GPMC configuration of each chip-select, address and data bus lines that are not required for a particular access protocol are not updated (changed from current value) and are not sampled when input (input data bus).

- For address/data-multiplexed and AAD-multiplexed NOR devices, the address is multiplexed on the data bus.
- 8-bit wide NOR devices do not use GPMC I/O: GPMC\_AD[15-8] for data (they are used for address if needed).
- 16-bit wide NAND devices do not use GPMC I/O: GPMC\_A[27-0].
- 8-bit wide NAND devices do not use GPMC I/O: GPMC\_A[27-0] and GPMC I/O: GPMC\_AD[15-8].

## 7.1.2.3.7.1 GPMC I/O Configuration Setting

NOTE:

In this section and next sections, the i in GPMC\_CONFIGx\_i stands for the GPMC chipselect i where i = 0 to 6.

To select a NAND device, program the following register fields:

- GPMC\_CONFIG1\_i[11-10] DEVICETYPE field = 10b
- GPMC\_CONFIG1\_i[9-8] MUXADDDATA bit = 00

To select an address/data-multiplexed device, program the following register fields:

- GPMC\_CONFIG1\_i[11-10] DEVICETYPE field = 00
- GPMC\_CONFIG1\_i[9-8] MUXADDDATA bit = 10b

To select an address/address/data-multiplexed device, program the following register fields:

- GPMC\_CONFIG1\_i[11-10] DEVICETYPE field = 00
- GPMC\_CONFIG1\_i[9-8] MUXADDDATA bit = 01b

To select an address/data-nonmultiplexed device , program the following register fields:

- GPMC\_CONFIG1\_i[11-10] DEVICETYPE field = 00
- GPMC\_CONFIG1\_i[9-8] MUXADDDATA bit = 00

## 7.1.2.3.8 Address Decoder and Chip-Select Configuration

Addresses are decoded accordingly with the address request of the chip-select and the content of the chip-select base address register file, which includes a set of global GPMC configuration registers and eight sets of chip-select configuration registers.

The GPMC configuration register file is memory-mapped and can be read or written with byte, 16-bit word, or 32-bit word accesses. The register file should be configured as a noncacheable, nonbufferable region to prevent any desynchronization between host execution (write request) and the completion of register configuration (write completed with register updated). provides the GPMC register locations. For the map of GPMC memory locations, see Table 7-48.

After the chip-select is configured, the access engine accesses the external device, drives the external interface control signals, and applies the interface protocol based on user-defined timing parameters and settings.

## 7.1.2.3.8.1 Chip-Select Base Address and Region Size

Any external memory or ASIC device attached to the GPMC external interface can be accessed by any device system host within the GPMC 512-Mbyte contiguous address space. For details, see Table 7-48.

The GPMC 512 Mbyte address space can be divided into a maximum of seven chip-select regions with programmable base address and programmable CS size. The CS size is programmable from 16 Mbytes to 256 Mbytes (must be a power-of-2) and is defined by the mask field. Attached memory smaller than the programmed CS region size is accessed through the entire CS region (aliasing).

Each chip-select has a 6-bit base address encoding and a 4-bit decoding mask, which must be programmed according to the following rules:

- The programmed chip-select region base address must be aligned on the chip-select region size address boundary and is limited to a power-of-2 address value. During access decoding, the register base address value is used for address comparison with the address-bit line mapping as described in Figure 7-6 (with A0 as the device system byte-address line). Base address is programmed through the GPMC\_CONFIG7\_i[5-0] BASEADDRESS bit field.
- The register mask is used to exclude some address lines from the decoding. A register mask bit field cleared to 0 suppresses the associated address line from the address comparison (incoming address bit line is don't care). The register mask value must be limited to the subsequent value, based on the desired chip-select region size. Any other value has an undefined result. When multiple chip-select regions with overlapping addresses are enabled concurrently, access to these chip-select regions is cancelled and a GPMC access error is posted. The mask field is programmed through the GPMC\_CONFIG7\_i[11-8] MASKADDRESS bit field.

Figure 7-6. Chip-Select Address Mapping and Decoding Mask

<!-- image -->

A mask value of 0010 or 1001 must be avoided because it will create holes in the chip-select address space.

Chip-select configuration (base and mask address or any protocol and timing settings) must be performed while the associated chip-select is disabled through the GPMC\_CONFIG7\_i[6] CSVALID bit. In addition, a chip-select configuration can only be disabled if there is no ongoing access to that chip-select. This requires activity monitoring of the prefetch or write-posting engine if the engine is active on the chip-select. Also, the write buffer state must be monitored to wait for any posted write completion to the chip-select.

<!-- image -->

<!-- image -->

www.ti.com

Any access attempted to a nonvalid GPMC address region (CSVALID disabled or address decoding outside a valid chip-select region) is not propagated to the external interface and a GPMC access error is posted. In case of chip-selects overlapping, an error is generated and no access will occur on either chipselect. Chip-select 0 is the only chip-select region enabled after either a power-up or a GPMC reset.

Although the GPMC interface can drive up to seven chip-selects, the frequency specified for this interface is for a specific load. If this load is exceeded, the maximum frequency cannot be reached. One solution is to implement a board with buffers, to allow the slowest device to maintain the total load on the lines.

## 7.1.2.3.8.2 Access Protocol

## 7.1.2.3.8.2.1 Supported Devices

The access protocol of each chip-select can be independently specified through the GPMC\_CONFIG1\_i[11-10] DEVICETYPE parameter for:

- Random-access synchronous or asynchronous memory like NOR flash, SRAM
- NAND flash asynchronous devices

For more information about the NAND flash GPMC basic programming model and NAND support, see Section 7.1.2.3.12 and Section 7.1.2.3.12.1.

## 7.1.2.3.8.2.2 Access Size Adaptation and Device Width

Each chip-select can be independently configured through the GPMC\_CONFIG1\_i[13-12] DEVICESIZE field to interface with a 16-bit wide device or an 8-bit wide device. System requests with data width greater than the external device data bus width are split into successive accesses according to both the external device data-bus width and little-endian data organization.

An 8-bit wide device must be interfaced to the D0-D7 external interface bus lane. GPMC data accesses only use this bus lane when the associated chip-select is attached to an 8-bit wide device.

The 8-bit wide device can be interfaced in asynchronous or synchronous mode in single data phase (no 8bit wide device burst mode). If the 8-bit wide device is set in the chip-select configuration register, ReadMultiple and WriteMultiple bit fields are considered 'don't care' and only single accesses are performed.

A 16-bit wide device can be interfaced in asynchronous or synchronous mode, with single or multiple data phases for an access, and with native or emulated wrap mode support.

## 7.1.2.3.8.2.3 Address/Data-Multiplexing Interface

For random synchronous or asynchronous memory interfacing (DEVICETYPE = 0b00), an address- and data-multiplexing protocol can be selected through the GPMC\_CONFIG1\_i[[9-8] MUXADDDATA bit field. The ADVn signal must be used as the external device address latch control signal. For the associated chip-select configuration, ADVn assertion and deassertion time and OEn assertion time must be set to the appropriate value to meet the address latch setup/hold time requirements of the external device (see Section 7.1.2).

This address/data-multiplexing interface is not applicable to NAND device interfacing. NAND devices require a specific address, command, and data multiplexing protocol (see Section 7.1.2.3.12).

## 7.1.2.3.8.3 External Signals

## 7.1.2.3.8.3.1 WAIT Pin Monitoring Control

GPMC access time can be dynamically controlled using an external gpmc\_wait pin when the external device access time is not deterministic and cannot be defined and controlled only using the GPMC internal RDACCESSTIME, WRACCESSTIME and PAGEBURSTACCESSTIME wait state generator.

The GPMC features two input wait pin:gpmc\_wait1, and gpmc\_wait0. This pin allow control of external devices with different wait-pin polarity. They also allow the overlap of wait-pin assertion from different devices without affecting access to devices for which the wait pin is not asserted.

<!-- image -->

- The GPMC\_CONFIG1\_i[17-16] WAITPINSELECT bit field (where i = 0 to 6) selects which input gpmc\_wait pin is used for the device attached to the corresponding chip-select.
- The polarity of the wait pin is defined through the WAITxPINPOLARITY bit of the GPMC\_CONFIG register. A wait pin configured to be active low means that low level on the WAIT signal indicates that the data is not ready and that the data bus is invalid. When WAIT is inactive, data is valid.

The GPMC access engine can be configured per CS to monitor the wait pin of the external memory device or not, based on the access type: read or write.

- The GPMC\_CONFIG1\_i[22] WAITREADMONITORING bit defines whether the wait pin should be monitored during read accesses or not.
- The GPMC\_CONFIG1\_i[21] WAITWRITEMONITORING bit defines whether the wait pin should be monitored during write accesses or not.

The GPMC access engine can be configured to monitor the wait pin of the external memory device asynchronously or synchronously with the GPMC\_CLK clock, depending on the access type: synchronous or asynchronous (the GPMC\_CONFIG1\_i[29] READTYPE and GPMC\_CONFIG1\_i[27] WRITETYPE bits).

## 7.1.2.3.8.3.2 Wait Monitoring During an Asynchronous Read Access

When wait-pin monitoring is enabled for read accesses (WAITREADMONITORING), the effective access time is a logical AND combination of the RDACCESSTIME timing completion and the wait-deasserted state.

During asynchronous read accesses with wait-pin monitoring enabled, the wait pin must be at a valid level (asserted or deasserted) for at least two GPMC clock cycles before RDACCESSTIME completes, to ensure correct dynamic access-time control through wait-pin monitoring. The advance pipelining of the two GPMC clock cycles is the result of the internal synchronization requirements for the WAIT signal.

In this context, RDACCESSTIME is used as a WAIT invalid timing window and is set to such a value that the wait pin is at a valid state two GPMC clock cycles before RDACCESSTIME completes.

Similarly, during a multiple-access cycle (for example, asynchronous read page mode), the effective access time is a logical AND combination of PAGEBURSTACCESSTIME timing completion and the waitdeasserted state. Wait-monitoring pipelining is also applicable to multiple accesses (access within a page).

- WAIT monitored as active freezes the CYCLETIME counter. For an access within a page, when the CYCLETIME counter is by definition in a lock state, WAIT monitored as asserted extends the current access time in the page. Control signals are kept in their current state. The data bus is considered invalid, and no data are captured during this clock cycle.
- WAIT monitored as inactive unfreezes the CYCLETIME counter. For an access within a page, when the CYCLETIME counter is by definition in a lock state, WAIT monitored as inactive completes the current access time and starts the next access phase in the page. The data bus is considered valid, and data are captured during this clock cycle. In case of a single access or if this was the last access in a multiple-access cycle, all signals are controlled according to their related control timing value and according to the CYCLETIME counter status.

When a delay larger than two GPMC clocks must be observed between wait-pin deactivation time and data valid time (including the required GPMC and the device data setup time), an extra delay can be added between wait-pin deassertion time detection and effective data-capture time and the effective unlock of the CYCLETIME counter. This extra delay can be programmed in the GPMC\_CONFIG1\_i[19-18] WAITMONITORINGTIME field.

- The WAITMONITORINGTIME parameter does not delay the wait-pin active or inactive detection, nor does it modify the two GPMC clocks pipelined detection delay.
- This extra delay is expressed as a number of GPMC\_CLK clock cycles, even though the access is defined as asynchronous, and no GPMC\_CLK clock is provided to the external device. Still, GPMCFCLKDIVIDER is used as a divider for the GPMC clock, so it must be programmed to define the correct WAITMONITORINGTIME delay.

Figure 7-7 shows wait behavior during an asynchronous single read access.

<!-- image -->

Figure 7-7. Wait Behavior During an Asynchronous Single Read Access (GPMCFCLKDivider = 1)

<!-- image -->

The WAIT signal is active low. GPMC\_CONFIG1\_i[19-18] WAITMONITORINGTIME = 00b or 01b.

## 7.1.2.3.8.3.3 Wait Monitoring During an Asynchronous Write Access

When wait-pin monitoring is enabled for write accesses (GPMC\_CONFIG1\_i[21]

WAITWRITEMONITORING bit = 1), the WAIT-invalid timing window is defined by the WRACCESSTIME field. WRACCESSTIME must be set so that the wait pin is at a valid state two GPMC clock cycles before WRACCESSTIME completes. The advance pipelining of the two GPMC clock cycles is the result of the internal synchronization requirements for the WAIT signal.

- WAIT monitored as active freezes the CYCLETIME counter. This informs the GPMC that the data bus is not captured by the external device. The control signals are kept in their current state. The data bus still drives the data.
- WAIT monitored as inactive unfreezes the CYCLETIME counter. This informs that the data bus is correctly captured by the external device. All signals, including the data bus, are controlled according to their related control timing value and to the CYCLETIME counter status.

<!-- image -->

When a delay larger than two GPMC clock cycles must be observed between wait-pin deassertion time and the effective data write into the external device (including the required GPMC data setup time and the device data setup time), an extra delay can be added between wait-pin deassertion time detection and effective data write time into the external device and the effective unfreezing of the CYCLETIME counter. This extra delay can be programmed in the GPMC\_CONFIG1\_i[19-18] WAITMONITORINGTIME fields.

- The WAITMONITORINGTIME parameter does not delay the wait-pin assertion or deassertion detection, nor does it modify the two GPMC clock cycles pipelined detection delay.
- This extra delay is expressed as a number of GPMC\_CLK clock cycles, even though the access is defined as asynchronous, and even though no clock is provided to the external device. Still, GPMC\_CONFIG1\_i[1-0] GPMCFCLKDIVIDER is used as a divider for the GPMC clock and so it must be programmed to define the correct WAITMONITORINGTIME delay.

## 7.1.2.3.8.3.4 Wait Monitoring During a Synchronous Read Access

During synchronous accesses with wait-pin monitoring enabled, the wait pin is captured synchronously with GPMC\_CLK, using the rising edge of this clock.

The WAIT signal can be programmed to apply to the same clock cycle it is captured in. Alternatively, it can be sampled one or two GPMC\_CLK cycles ahead of the clock cycle it applies to. This pipelining is applicable to the entire burst access, and to all data phase in the burst access. This WAIT pipelining depth is programmed in the GPMC\_CONFIG1\_i[19-18] WAITMONITORINGTIME field, and is expressed as a number of GPMC\_CLK clock cycles.

In synchronous mode, when wait-pin monitoring is enabled (GPMC\_CONFIG1\_i[22] WAITREADMONITORING bit), the effective access time is a logical AND combination of the RDACCESSTIME timing completion and the WAIT deasserted-state detection.

Depending on the programmed WAITMONITORINGTIME value, the wait pin should be at a valid level, either asserted or deasserted:

- In the same clock cycle the data is valid if WAITMONITORINGTIME = 0 ( at RDACCESSTIME completion)
- In the WAITMONITORINGTIME x (GPMCFCLKDIVIDER + 1) GPMC\_FCLK clock cycles before RDACCESSTIME completion if WAITMONITORINGTIME not equal to 0

Similarly, during a multiple-access cycle (burst mode), the effective access time is a logical AND combination of PAGEBURSTACCESSTIME timing completion and the wait-inactive state. The Wait pipelining depth programming applies to the whole burst access.

- WAIT monitored as active freezes the CYCLETIME counter. For an access within a burst (when the CYCLETIME counter is by definition in a lock state), WAIT monitored as active extends the current access time in the burst. Control signals are kept in their current state. The data bus is considered invalid, and no data are captured during this clock cycle.
- WAIT monitored as inactive unfreezes the CYCLETIME counter. For an access within a burst (when the CYCLETIME counter is by definition in lock state), WAIT monitored as inactive completes the current access time and starts the next access phase in the burst. The data bus is considered valid, and data are captured during this clock cycle. In a single access or if this was the last access in a multiple-access cycle, all signals are controlled according to their relative control timing value and the CYCLETIME counter status.

Figure 7-8 shows wait behavior during a synchronous read burst access.

<!-- image -->

Figure 7-8. Wait Behavior During a Synchronous Read Burst Access

<!-- image -->

The WAIT signal is active low. WAITMONITORINGTIME = 00b or 01b.

## 7.1.2.3.8.3.5 Wait Monitoring During a Synchronous Write Access

During synchronous accesses with wait-pin monitoring enabled (the WAITWRITEMONITORING bit), the wait pin is captured synchronously with GPMC\_CLK, using the rising edge of this clock.

If enabled, external wait-pin monitoring can be used in combination with WRACCESSTIME to delay the effective memory device GPMC\_CLK capture edge.

Wait-monitoring pipelining depth is similar to synchronous read access:

- At WRACCESSTIME completion if WAITMONITORINGTIME = 0
- In the WAITMONITORINGTIME x (GPMCFCLKDIVIDER + 1) GPMC\_FCLK cycles before WRACCESSTIME completion if WAITMONITORINGTIME not equal to 0.

Wait-monitoring pipelining definition applies to whole burst accesses:

- WAIT monitored as active freezes the CYCLETIME counter. For accesses within a burst, when the CYCLETIME counter is by definition in a lock state, WAIT monitored as active indicates that the data bus is not being captured by the external device. Control signals are kept in their current state. The data bus is kept in its current state.
- WAIT monitored as inactive unfreezes the CYCLETIME counter. For accesses within a burst, when the CYCLETIME counter is by definition in a lock state, WAIT monitored as inactive indicates the effective data capture of the bus by the external device and starts the next access of the burst. In case of a single access or if this was the last access in a multiple access cycle, all signals, including the data bus, are controlled according to their related control timing value and the CYCLETIME counter status.

Wait monitoring is supported for all configurations except for GPMC\_CONFIG1\_i[19-18] WAITMONITORINGTIME = 0 for write bursts with a clock divider of 1 or 2 (GPMC\_CONFIG1\_i[1-0] GPMCFCLKDIVIDER field equal to 0 or 1, respectively).

## 7.1.2.3.8.3.6 WAIT With NAND Device

For details about the use of the wait pin for communication with a NAND flash external device, see Section 7.1.2.3.12.2.

## 7.1.2.3.8.3.7 Idle Cycle Control Between Successive Accesses

## 7.1.2.3.8.3.7.1 Bus Turnaround (BUSTURNAROUND)

To prevent data-bus contention, an access that follows a read access to a slow memory/device must be delayed (in other words, control the CSn/OEn de-assertion to data bus in high-impedance delay).

The bus turnaround is a time-out counter starting after CSn or OEn de-assertion time, whichever occurs first, and delays the next access start-cycle time. The counter is programmed through the GPMC\_CONFIG6\_i[3-0] BUSTURNAROUND bit field.

After a read access to a chip-select with a non zero BUSTURNAROUND, the next access is delayed until the BUSTURNAROUND delay completes, if the next access is one of the following:

- A write access to any chip-select (same or different from the chip-select data was read from)
- A read access to a different chip-select from the chip-select data was read access from
- A read or write access to a chip-select associated with an address/data-multiplexed device

Bus keeping starts after bus turnaround completion so that DIR changes from IN to OUT after bus turnaround. The bus will not have enough time to go into high-impedance even though it could be driven with the same value before bus turnaround timing.

BUSTURNAROUND delay runs in parallel with GPMC\_CONFIG6\_i[3-0] CYCLE2CYCLEDELAY delays. It should be noted that BUSTURNAROUND is a timing parameter for the ending chip-select access while CYCLE2CYCLEDELAY is a timing parameter for the following chip-select access. The effective minimum delay between successive accesses is driven by these delay timing parameters and by the access type of the following access. See Figure 7-9 to Figure 7-11.

Another way to prevent bus contention is to define an earlier CSn or OEn deassertion time for slow devices or to extend the value of RDCYCLETIME. Doing this prevents bus contention, but affects all accesses of this specific chip-select.

<!-- image -->

Figure 7-9. Read to Read for an Address-Data Multiplexed Device, On Different CS, Without Bus Turnaround (CS0n Attached to Fast Device)

<!-- image -->

New read/write access

<!-- image -->

Figure 7-10. Read to Read / Write for an Address-Data Multiplexed Device, On Different CS, With Bus Turnaround

<!-- image -->

<!-- image -->

Figure 7-11. Read to Read / Write for a Address-Data or AAD-Multiplexed Device, On Same CS, With Bus Turnaround

<!-- image -->

## 7.1.2.3.8.3.7.2 Idle Cycles Between Accesses to Same Chip-Select (CYCLE2CYCLESAMECSEN, CYCLE2CYCLEDELAY)

Some devices require a minimum chip-select signal inactive time between accesses. The GPMC\_CONFIG6\_i[7] CYCLE2CYCLESAMECSEN bit enables insertion of a minimum number of GPMC\_FCLK cycles, defined by the GPMC\_CONFIG6\_i[11-8] CYCLE2CYCLEDELAY field, between successive accesses of any type (read or write) to the same chip-select.

If CYCLE2CYCLESAMECSEN is enabled, any subsequent access to the same chip-select is delayed until its CYCLE2CYCLEDELAY completes. The CYCLE2CYCLEDELAY counter starts when CSRDOFFTIME/CSWROFFTIME completes.

The same applies to successive accesses occurring during 32-bit word or burst accesses split into successive single accesses when the single-access mode is used (GPMC\_CONFIG1\_i[30] READMULTIPLE = 0 or GPMC\_CONFIG1\_i[28] WRITEMULTIPLE = 0).

All control signals are kept in their default states during these idle GPMC\_FCLK cycles. This prevents back-to-back accesses to the same chip-select without idle cycles between accesses.

## 7.1.2.3.8.3.7.3 Idle Cycles Between Accesses to Different Chip-Select (CYCLE2CYCLEDIFFCSEN, CYCLE2CYCLEDELAY)

Because of the pipelined behavior of the system, successive accesses to different chip-selects can occur back-to-back with no idle cycles between accesses. Depending on the control signals (CSn, ADV\_ALEn, BE0\_CLEn, OE\_REn, WEn) assertion and de-assertion timing parameters and on the IC timing parameters, some control signals assertion times may overlap between the successive accesses to different CS. Similarly, some control signals (WEn, OE\_REn) may not respect required transition times.

To work around the overlapping and to observe the required control-signal transitions, a minimum of CYCLE2CYCLEDELAY inactive cycles is inserted between the access being initiated to this chip-select and the previous access ending for a different chip-select. This applies to any type of access (read or write).

<!-- image -->

If GPMC\_CONFIG6\_i[6] CYCLE2CYCLEDIFFCSEN is enabled, the chip-select access is delayed until CYCLE2CYCLEDELAY cycles have expired since the end of a previous access to a different chip-select. CYCLE2CYCLEDELAY count starts at CSRDOFFTIME/CSWROFFTIME completion. All control signals are kept inactive during the idle GPMC\_FCLK cycles.

CYCLE2CYCLESAMECSEN and CYCLE2CYCLEDIFFCSEN should be set in registers to respectively get idle cycles inserted between accesses on this chip-select and after accesses to a different chip-select.

The CYCLE2CYCLEDELAY delay runs in parallel with the BUSTURNAROUND delay. It should be noted that BUSTURNAROUND is a timing parameter defined for the ending chip-select access, whereas CYCLE2CYCLEDELAY is a timing parameter defined for the starting chip-select access. The effective minimum delay between successive accesses is based on the larger delay timing parameter and on access type combination, since bus turnaround does not apply to all access types. See Section 7.1.2.3.8.3.7.1 for more details on bus turnaround.

Table 7-10 describes the configuration required for idle cycle insertion.

Table 7-10. Idle Cycle Insertion Configuration

| First Access Type   | BUSTURN AROUND Timing Parameter   | Second Access Type   | Chip-Select   | Addr/Data Multiplexed   | CYCLE2 CYCLE SAMECSEN Parameter   | CYCLE2 CYCLE DIFFCSEN Parameter   | Idle Cycle Insertion Between the Two Accesses                                                                                                                                |
|---------------------|-----------------------------------|----------------------|---------------|-------------------------|-----------------------------------|-----------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| R/W                 | 0                                 | R/W                  | Any           | Any                     | 0                                 | x                                 | No idle cycles are inserted if the two accesses are well pipelined.                                                                                                          |
| R                   | >0                                | R                    | Same          | Nonmuxed                | x                                 | 0                                 | No idle cycles are inserted if the two accesses are well pipelined.                                                                                                          |
| R                   | >0                                | R                    | Different     | Nonmuxed                | 0                                 | 0                                 | BUSTURNAROUND cycles are inserted.                                                                                                                                           |
| R                   | >0                                | R/W                  | Any           | Muxed                   | 0                                 | 0                                 | BUSTURNAROUND cycles are inserted.                                                                                                                                           |
| R                   | >0                                | W                    | Any           | Any                     | 0                                 | 0                                 | BUSTURNAROUND cycles are inserted.                                                                                                                                           |
| W                   | >0                                | R/W                  | Any           | Any                     | 0                                 | 0                                 | No idle cycles are inserted if the two accesses are well pipelined.                                                                                                          |
| R/W                 | 0                                 | R/W                  | Same          | Any                     | 1                                 | x                                 | CYCLE2CYCLEDELAY cycles are inserted.                                                                                                                                        |
| R/W                 | 0                                 | R/W                  | Different     | Any                     | x                                 | 1                                 | CYCLE2CYCLEDELAY cycles are inserted.                                                                                                                                        |
| R/W                 | >0                                | R/W                  | Same          | Any                     | 1                                 | x                                 | CYCLE2CYCLEDELAY cycles are inserted. If BTA idle cycles already apply on these two back-to-back accesses, the effective delay is max (BUSTURNAROUND, CYCLE2CYCLEDELAY).     |
| R/W                 | >0                                | R/W                  | Different     | Any                     | x                                 | 1                                 | CYCLE2CYCLEDELAY cycles are inserted. If BTA idle cycles already apply on these two back-to-back accesses, the effective delay is maximum (BUSTURNAROUND, CYCLE2CYCLEDELAY). |

## 7.1.2.3.8.3.8 Slow Device Support (TIMEPARAGRANULARITY Parameter)

All access-timing parameters can be multiplied by 2 by setting the GPMC\_CONFIG1\_i[4] TIMEPARAGRANULARITY bit. Increasing all access timing parameters allows support of slow devices.

## 7.1.2.3.8.3.9 GPMC\_DIR Pin

The GPMC\_DIR pin is used to control I/O direction on the GPMC data bus GPMC\_D[15-0]. Depending on top-level pad multiplexing, this signal can be output and used externally to the device, if required. The GPMC\_DIR pin is low during transmit (OUT) and high during receive (IN).

For write accesses, the GPMC\_DIR pin stays OUT from start-cycle time to end-cycle time.

For read accesses, the GPMC\_DIR pin goes from OUT to IN at OEn assertion time and stays IN until:

- BUSTURNAROUND is enabled
- -The GPMC\_DIR pin goes from IN to OUT at end-cycle time plus programmable bus turnaround time.
- BUSTURNAROUND is disabled
- -After an asynchronous read access, the GPMC\_DIR pin goes from IN to OUT at RDACCESSTIME + 1 GPMC\_FCLK cycle or when RDCYCLETIME completes, whichever occurs last.
- -After a synchronous read access, the GPMC\_DIR pin goes from IN to OUT at RDACCESSTIME + 2 GPMC\_FCLK cycles or when RDCYCLETIME completes, whichever occurs last.

Because of the bus-keeping feature of the GPMC, after a read or write access and with no other accesses pending, the default value of the GPMC\_DIR pin is OUT (see Section 7.1.2.3.9.10). In nonmultiplexed devices, the GPMC\_DIR pin stays IN between two successive read accesses to prevent unnecessary toggling.

## 7.1.2.3.8.3.10 Reset

No reset signal is sent to the external memory device by the GPMC. For more information about externaldevice reset, see Chapter 8, Power, Reset, and Clock Management (PRCM) .

The PRCM module provides an input pin, global\_rst\_n, to the GPMC:

- The global\_rst\_n pin is activated during device warm reset and cold reset.
- The global\_rst\_n pin initializes the internal state-machine and the internal configuration registers.

## 7.1.2.3.8.3.11 Write Protect Signal (WPn)

When connected to the attached memory device, the write protect signal can enable or disable the lockdown function of the attached memory. The GPMC\_WPn output pin value is controlled through the GPMC\_CONFIG[4] WRITEPROTECT bit, which is common to all CS.

## 7.1.2.3.8.3.12 Byte Enable (BE1n/BE0n)

Byte enable signals (BE1n/BE0n) are:

- Valid (asserted or nonasserted according to the incoming system request) from access start to access completion for asynchronous and synchronous single accesses
- Asserted low from access start to access completion for asynchronous and synchronous multiple read accesses
- Valid (asserted or nonasserted, according to the incoming system request) synchronously to each written data for synchronous multiple write accesses

## 7.1.2.3.8.4 Error Handling

When an error occurs in the GPMC, the error information is stored in the GPMC\_ERR\_TYPE register and the address of the illegal access is stored in the GPMC\_ERR\_ADDRESS register. The GPMC keeps only the first error abort information until the GPMC\_ERR\_TYPE register is reset. Subsequent accesses that cause errors are not logged until the error is cleared by hardware with the GPMC\_ERR\_TYPE[0]ERRORVALID bit.

<!-- image -->

<!-- image -->

www.ti.com

- ERRORNOTSUPPADD occurs when an incoming system request address decoding does not match any valid chip-select region, or if two chip-select regions are defined as overlapped, or if a register file access is tried outside the valid address range of 1KB.
- ERRORNOTSUPPMCMD occurs when an unsupported command request is decoded at the L3 Slow interconnect interface
- ERRORTIMEOUT: A time-out mechanism prevents the system from hanging. The start value of the

9-bit time-out counter is defined in the GPMC\_TIMEOUT\_CONTROL register and enabled with the GPMC\_TIMEOUT\_CONTROL[0] TIMEOUTENABLE bit. When enabled, the counter starts at start-cycle time until it reaches 0 and data is not responded to from memory, and then a time-out error occurs. When data are sent from memory, this counter is reset to its start value. With multiple accesses (asynchronous page mode or synchronous burst mode), the counter is reset to its start value for each data access within the burst.

The GPMC does not generate interrupts on these errors. True abort to the MPU or interrupt generation is handled at the interconnect level.

## 7.1.2.3.9 Timing Setting

The GPMC offers the maximum flexibility to support various access protocols. Most of the timing parameters of the protocol access used by the GPMC to communicate with attached memories or devices are programmable on a chip-select basis. Assertion and deassertion times of control signals are defined to match the attached memory or device timing specifications and to get maximum performance during accesses. For more information on GPMC\_CLK and GPMC\_FCLK see Section 7.1.2.3.9.6.

In the following sections, the start access time refer to the time at which the access begins.

## 7.1.2.3.9.1 Read Cycle Time and Write Cycle Time (RDCYCLETIME / WRCYCLETIME)

The GPMC\_CONFIG5\_i[4-0] RDCYCLETIME and GPMC\_CONFIG5\_i[12-8] WRCYCLETIME fields define the address bus and byte enables valid times for read and write accesses. To ensure a correct duty cycle of GPMC\_CLK between accesses, RDCYCLETIME and WRCYCLETIME are expressed in GPMC\_FCLK cycles and must be multiples of the GPMC\_CLK cycle. RDCYCLETIME and WRCYCLETIME bit fields can be set with a granularity of 1 or 2 throught GPMC\_CONFIG1\_i[4] TIMEPARAGRANULARITY.

When either RDCYCLETIME or WRCYCLETIME completes, if they are not already deasserted, all control signals (CSn, ADV\_ALEn, OE\_REn, WEn, and BE0\_CLEn) are deasserted to their reset values, regardless of their deassertion time parameters.

An exception to this forced deassertion occurs when a pipelined request to the same chip-select or to a different chip-select is pending. In such a case, it is not necessary to deassert a control signal with deassertion time parameters equal to the cycle-time parameter. This exception to forced deassertion prevents any unnecessary glitches. This requirement also applies to BE signals, thus avoiding an unnecessary BE glitch transition when pipelining requests.

If no inactive cycles are required between successive accesses to the same or to a different chip-select (GPMC\_CONFIG6\_i[7] CYCLE2CYCLESAMECSEN = 0 or GPMC\_CONFIG6\_i[6] CYCLE2CYCLEDIFFCSEN = 0, where i = 0 to 3), and if assertion-time parameters associated with the pipelined access are equal to 0, asserted control signals (CSn, ADV\_ALEn, BE0\_CLEn, WEn, and OE\_REn) are kept asserted. This applies to any read/write to read/write access combination.

If inactive cycles are inserted between successive accesses, that is, CYCLE2CYCLESAMECSEN = 1 or CYCLE2CYCLEDIFFCSEN = 1, the control signals are forced to their respective default reset values for the number of GPMC\_FCLK cycles defined in CYCLE2CYCLEDELAY.

## 7.1.2.3.9.2 CSn: Chip-Select Signal Control Assertion/Deassertion Time (CSONTIME / CSRDOFFTIME / CSWROFFTIME / CSEXTRADELAY)

The GPMC\_CONFIG2\_i[3-0] CSONTIME field defines the CSn signal-assertion time relative to the start access time. It is common for read and write accesses.

<!-- image -->

The GPMC\_CONFIG2\_i[12-8] CSRDOFFTIME (read access) and GPMC\_CONFIG2\_i[20-16] CSWROFFTIME (write access) bit fields define the CSn signal deassertion time relative to start access time.

CSONTIME, CSRDOFFTIME and CSWROFFTIME parameters are applicable to synchronous and asynchronous modes. CSONTIME can be used to control an address and byte enable setup time before chip-select assertion. CSRDOFFTIME and CSWROFFTIME can be used to control an address and byte enable hold time after chip-select deassertion.

CSn signal transitions as controlled through CSONTIME, CSRDOFFTIME, and CSWROFFTIME can be delayed by half a GPMC\_FCLK period by enabling the GPMC\_CONFIG2\_i[7] CSEXTRADELAY bit. This half of a GPMC\_FCLK period provides more granularity on the CSn assertion and deassertion time to guarantee proper setup and hold time relative to GPMC\_CLK. CSEXTRADELAY is especially useful in configurations where GPMC\_CLK and GPMC\_FCLK have the same frequency, but can be used for all GPMC configurations. If enabled, CSEXTRADELAY applies to all parameters controlling CSn transitions.

The CSEXTRADELAY bit must be used carefully to avoid control-signal overlap between successive accesses to different chip-selects. This implies the need to program the RDCYCLETIME and WRCYCLETIME bit fields to be greater than the CSn signal-deassertion time, including the extra half-GPMC\_FCLK-period delay.

## 7.1.2.3.9.3 ADVn/ALE: Address Valid/Address Latch Enable Signal Control Assertion/Deassertion Time (ADVONTIME / ADVRDOFFTIME / ADVWROFFTIME / ADVEXTRADELAY/ADVAADMUXONTIME/ADVAADMUXRDOFFTIME/ADVAADMUXWROFFTIME )

The GPMC\_CONFIG3\_i[3-0] ADVONTIME field defines the ADVn\_ALE signal-assertion time relative to start access time. It is common to read and write accesses.

The GPMC\_CONFIG3\_i[12-8] ADVRDOFFTIME (read access) and GPMC\_CONFIG3\_i[20-16] ADVWROFFTIME (write access) bit fields define the ADVn\_ALE signal-deassertion time relative to start access time.

ADVONTIME can be used to control an address and byte enable valid setup time control before ADVn\_ALE assertion. ADVRDOFFTIME and ADVWROFFTIME can be used to control an address and byte enable valid hold time control after ADVn\_ALE de-assertion. ADVRDOFFTIME and ADVWROFFTIME are applicable to both synchronous and asynchronous modes.

ADVn\_ALE signal transitions as controlled through ADVONTIME, ADVRDOFFTIME, and ADVWROFFTIME can be delayed by half a GPMC\_FCLK period by enabling the GPMC\_CONFIG3\_i[7] ADVEXTRADELAY bit. This half of a GPMC\_FCLK period provides more granularity on ADVn\_ALE assertion and deassertion time to assure proper setup and hold time relative to GPMC\_CLK. The ADVEXTRADELAY configuration parameter is especially useful in configurations where GPMC\_CLK and GPMC\_FCLK have the same frequency, but can be used for all GPMC configurations. If enabled, ADVEXTRADELAY applies to all parameters controlling ADVn\_ALE transitions.

ADVEXTRADELAY must be used carefully to avoid control-signal overlap between successive accesses to different chip-selects. This implies the need to program the RDCYCLETIME and WRCYCLETIME bit fields to be greater than ADVn\_ALE signal-deassertion time, including the extra half-GPMC\_FCLK-period delay.

The GPMC\_CONFIG3\_i[6-4] ADVAADMUXONTIME, GPMC\_CONFIG3\_i[26-24] ADVAADMUXRDOFFTIME, and GPMC\_CONFIG3\_i[30-28] ADVAADMUXWROFFTIME parameters have the same functions as ADVONTIME, ADVRDOFFTIME, and ADVWROFFTIME, but apply to the first address phase in the AAD-multiplexed protocol. It is the user responsibility to make sure ADVAADMUXxxOFFTIME is programmed to a value lower than or equal to ADVxxOFFTIME. Functionality in AAD-mux mode is undefined if the settings do not comply with this requirement. ADVAADMUXxxOFFTIME can be programmed to the same value as ADVONTIME if no high ADVn pulse is needed between the two AAD-mux address phases, which is the typical case in synchronous mode. In this configuration, ADVn is kept low until it reaches the correct ADVxxOFFTIME.

See Section 7.1.2.3.12 for more details on ADVONTIME, ADVRDOFFTIME, ADVWROFFTIME, and ADVAADMUXRDOFFTIME, ADVAADMUXWROFFTIME usage for CLE and ALE (Command / Address Latch Enable) usage for a NAND Flash interface.

<!-- image -->

## 7.1.2.3.9.4 OEn/REn: Output Enable / Read Enable Signal Control Assertion / Deassertion Time (OEONTIME / OEOFFTIME / OEEXTRADELAY / OEAADMUXONTIME / OEAADMUXOFFTIME)

The GPMC\_CONFIG4\_i[3-0] OEONTIME field defines the OEn\_REn signal assertion time relative to start access time. It is applicable only to read accesses.

The GPMC\_CONFIG4\_i[12-8] OEOFFTIME field defines the OEn\_REn signal deassertion time relative to start access time. It is applicable only to read accesses. OEn\_REn is not asserted during a write cycle.

OEONTIME, OEOFFTIME, OEAADMUXONTIME and OEAADMUXOFFTIME parameters are applicable to synchronous and asynchronous modes. OEONTIME can be used to control an address and byte enable valid setup time control before OEn\_REn assertion. OEOFFTIME can be used to control an address and byte enable valid hold time control after OEn\_REn assertion.

OEAADMUXONTIME and OEAADMUXOFFTIME parameters have the same functions as OEONTIME and OEOFFTIME, but apply to the first OE assertion in the AAD-multiplexed protocol for a read phase, or to the only OE assertion for a write phase. It is the user responsibility to make sure OEAADMUXOFFTIME is programmed to a value lower than OEONTIME. Functionality in AAD-mux mode is undefined if the settings do not comply with this requirement. OEAADMUXOFFTIME shall never be equal to OEONTIME because the AAD-mux protocol requires a second address phase with the OEn signal de-asserted before OEn can be asserted again to define a read command.

The OEn\_REn signal transitions as controlled through OEONTIME, OEOFFTIME, OEAADMUXONTIME and OEAADMUXOFFTIME can be delayed by half a GPMC\_FCLK period by enabling the GPMC\_CONFIG4\_i[7] OEEXTRADELAY bit. This half of a GPMC\_FCLK period provides more granularity on OEn\_REn assertion and deassertion time to assure proper setup and hold time relative to GPMC\_CLK. If enabled, OEEXTRADELAY applies to all parameters controlling OEn\_REn transitions.

OEEXTRADELAY must be used carefully, to avoid control-signal overlap between successive accesses to different chip-selects. This implies the need to program RDCYCLETIME and WRCYCLETIME to be greater than OEn\_REn signal-deassertion time, including the extra half-GPMC\_FCLK-period delay.

When the GPMC generates a read access to an address-/data-multiplexed device, it drives the address bus until OEn assertion time.

## 7.1.2.3.9.5 WEn: Write Enable Signal Control Assertion / Deassertion Time (WEONTIME / WEOFFTIME / WEEXTRADELAY)

The GPMC\_CONFIG4\_i[19-16] WEONTIME field (where i = 0 to 3) defines the WEn signal-assertion time relative to start access time. The GPMC\_CONFIG4\_i[28-24] WEOFFTIME field defines the WEn signaldeassertion time relative to start access time. These bit fields only apply to write accesses. WEn is not asserted during a read cycle.

WEONTIME can be used to control an address and byte enable valid setup time control before WEn assertion. WEOFFTIME can be used to control an address and byte enable valid hold time control after WEn assertion.

WEn signal transitions as controlled through WEONTIME, and WEOFFTIME can be delayed by half a GPMC\_FCLK period by enabling the GPMC\_CONFIG4\_i[23] WEEXTRADELAY bit. This half of a GPMC\_FCLK period provides more granularity on WEn assertion and deassertion time to guaranty proper setup and hold time relative to GPMC\_CLK. If enabled, WEEXTRADELAY applies to all parameters controlling WEn transitions.

The WEEXTRADELAY bit must be used carefully to avoid control-signal overlap between successive accesses to different chip-selects. This implies the need to program the WRCYCLETIME bit field to be greater than the WEn signal-deassertion time, including the extra half-GPMC\_FCLK-period delay.

## 7.1.2.3.9.6 GPMC\_CLK

GPMC\_CLK is the external clock provided to the attached synchronous memory or device.

- The GPMC\_CLK clock frequency is the GPMC\_FCLK functional clock frequency divided by 1, 2, 3, or 4, depending on the GPMC\_CONFIG1\_i[1-0] GPMCFCLKDIVIDER bit field, with a guaranteed 50percent duty cycle.
- The GPMC\_CLK clock is only activated when the access in progress is defined as synchronous (read or write access).
- The GPMC\_CONFIG1\_i[26-25] CLKACTIVATIONTIME field defines the number of GPMC\_FCLK cycles from start access time to GPMC\_CLK activation.
- The GPMC\_CLK clock is stopped when cycle time completes and is asserted low between accesses.
- The GPMC\_CLK clock is kept low when access is defined as asynchronous.
- When the GPMC is configured for synchronous mode, the GPMC\_CLK signal (which is an output) must also be set as an input in the Pin Mux configuration for the pin. GPMC\_CLK is looped back through the output and input buffers of the corresponding GPMC\_CLK pad at the device boundary. The looped-back clock is used to synchronize the sampling of the memory signals.

When cycle time completes, the GPMC\_CLK may be high because of the GPMCFCLKDIVIDER bit field. To ensure correct stoppage of the GPMC\_CLK clock within the 50-percent required duty cycle, it is the user's responsibility to extend the RDCYCLETIME or WRCYCLETIME value.

To ensure a correct external clock cycle, the following rules must be applied:

- (RDCYCLETIME - CLKACTIVATIONTIME) must be a multiple of (GPMCFCLKDIVIDER + 1).
- The PAGEBURSTACCESSTIME value must be a multiple of (GPMCFCLKDIVIDER + 1).

## 7.1.2.3.9.7 GPMC\_CLK and Control Signals Setup and Hold

Control-signal transition (assertion and deassertion) setup and hold values with respect to the GPMC\_CLK edge can be controlled in the following ways:

- For the GPMC\_CLK signal, the GPMC\_CONFIG1\_i[26-25] CLKACTIVATIONTIME field allows setup and hold control of control-signal assertion time.
- The use of a divided GPMC\_CLK allows setup and hold control of control-signal assertion and deassertion times.
- When GPMC\_CLK runs at the GPMC\_FCLK frequency so that GPMC\_CLK edge and control-signal transitions refer to the same GPMC\_FCLK edge, the control-signal transitions can be delayed by half of a GPMC\_FCLK period to provide minimum setup and hold times. This half-GPMC\_FCLK delay is enabled with the CSEXTRADELAY, ADVEXTRADELAY, OEEXTRADELAY, or WEEXTRADELAY parameter. This delay must be used carefully to prevent control-signal overlap between successive accesses to different chip-selects. This implies that the RDCYCLETIME and WRCYCLETIME are greater than the last control-signal deassertion time, including the extra half-GPMC\_FCLK cycle.

## 7.1.2.3.9.8 Access Time (RDACCESSTIME / WRACCESSTIME)

The read access time and write access time durations can be programmed independently through GPMC\_CONFIG5\_i[20-16] RDACCESSTIME and GPMC\_CONFIG6\_i[28-24] WRACCESSTIME. This allows OEn and GPMC data capture timing parameters to be independent of WEn and memory device data capture timing parameters. RDACCESSTIME and WRACCESSTIME bit fields can be set with a granularity of 1 or 2 throught GPMC\_CONFIG1\_i[4] TIMEPARAGRANULARITY.

## 7.1.2.3.9.8.1 Access Time on Read Access

In asynchronous read mode, for single and paged accesses, GPMC\_CONFIG5\_i[[20-16] RDACCESSTIME field defines the number of GPMC\_FCLK cycles from start access time to the GPMC\_FCLK rising edge used for the first data capture. RDACCESSTIME must be programmed to the rounded greater value (in GPMC\_FCLK cycles) of the read access time of the attached memory device.

In synchronous read mode, for single or burst accesses, RDACCESSTIME defines the number of GPMC\_FCLK cycles from start access time to the GPMC\_FCLK rising edge corresponding to the GPMC\_CLK rising edge used for the first data capture.

<!-- image -->

<!-- image -->

www.ti.com

GPMC\_CLK which is sent to the memory device for synchronization with the GPMC controller, is internally retimed to correctly latch the returned data. GPMC\_CONFIG5\_i[4-0] RDCYCLETIME must be greater than RDACCESSTIME in order to let the GPMC latch the last return data using the internally retimed GPMC\_CLK.

The external WAIT signal can be used in conjunction with RDACCESSTIME to control the effective GPMC data-capture GPMC\_FCLK edge on read access in both asynchronous mode and synchronous mode. For details about wait monitoring, see Section 7.1.2.3.8.1.

## 7.1.2.3.9.8.2 Access Time on Write Access

In asynchronous write mode, the GPMC\_CONFIG6\_i[[28-24] WRACCESSTIME timing parameter is not used to define the effective write access time. Instead, it is used as a WAIT invalid timing window, and must be set to a correct value so that the gpmc\_wait pin is at a valid state two GPMC\_CLK cycles before WRACCESSTIME completes. For details about wait monitoring, see Section 7.1.2.3.8.1.

In synchronous write mode , for single or burst accesses, WRACCESSTIME defines the number of GPMC\_FCLK cycles from start access time to the GPMC\_CLK rising edge used by the memory device for the first data capture.

The external WAIT signal can be used in conjunction with WRACCESSTIME to control the effective memory device data capture GPMC\_CLK edge for a synchronous write access. For details about wait monitoring, see Section 7.1.2.3.8.1.

## 7.1.2.3.9.9 Page Burst Access Time (PAGEBURSTACCESSTIME)

GPMC\_CONFIG5\_i[27-24] PAGEBURSTACCESSTIME bit field can be set with a granularity of 1 or 2 throught the GPMC\_CONFIG1\_i[[4] TIMEPARAGRANULARITY.

## 7.1.2.3.9.9.1 Page Burst Access Time on Read Access

In asynchronous page read mode, the delay between successive word captures in a page is controlled through the PAGEBURSTACCESSTIME bit field. The PAGEBURSTACCESSTIME parameter must be programmed to the rounded greater value (in GPMC\_FCLK cycles) of the read access time of the attached device.

In synchronous burst read mode, the delay between successive word captures in a burst is controlled through the PAGEBURSTACCESSTIME field.

The external WAIT signal can be used in conjunction with PAGEBURSTACCESSTIME to control the effective GPMC data capture GPMC\_FCLK edge on read access. For details about wait monitoring, see Section 7.1.2.3.8.1.

## 7.1.2.3.9.9.2 Page Burst Access Time on Write Access

Asynchronous page write mode is not supported. PAGEBURSTACCESSTIME is irrelevant in this case.

In synchronous burst write mode, PAGEBURSTACCESSTIME controls the delay between successive memory device word captures in a burst.

The external WAIT signal can be used in conjunction with PAGEBURSTACCESSTIME to control the effective memory-device data capture GPMC\_CLK edge in synchronous write mode. For details about wait monitoring, see Section 7.1.2.3.8.1.

## 7.1.2.3.9.10 Bus Keeping Support

At the end-cycle time of a read access, if no other access is pending, the GPMC drives the bus with the last data read after RDCYCLETIME completion time to prevent bus floating and reduce power consumption.

After a write access, if no other access is pending, the GPMC keeps driving the data bus after WRCYCLETIME completes with the same data to prevent bus floating and power consumption.

## 7.1.2.3.10 NOR Access Description

For each chip-select configuration, the read access can be specified as either asynchronous or synchronous access through the GPMC\_CONFIG1\_i[29] READTYPE bit. For each chip-select configuration, the write access can be specified as either synchronous or asynchronous access through the GPMC\_CONFIG1\_i[27] WRITETYPE bit.

Asynchronous and synchronous read and write access time and related control signals are controlled through timing parameters that refer to GPMC\_FCLK. The primary difference of synchronous mode is the availability of a configurable clock interface (GPMC\_CLK) to control the external device. Synchronous mode also affects data-capture and wait-pin monitoring schemes in read access.

For details about asynchronous and synchronous access, see the descriptions of GPMC\_CLK, RdAccessTime, WrAccessTime, and wait-pin monitoring.

For more information about timing-parameter settings, see the sample timing diagrams in this chapter.

The address bus and BE[1:0]n are fixed for the duration of a synchronous burst read access, but they are updated for each beat of an asynchronous page-read access.

## 7.1.2.3.10.1 Asynchronous Access Description

This section describes:

- Asynchronous single read operation on an address/data multiplexed device
- Asynchronous single write operation on an address/data-multiplexed device
- Asynchronous single read operation on an AAD-multiplexed device
- Asynchronous single write operation on an AAD-multiplexed device
- Asynchronous multiple (page) read operation on a non-multiplexed device

In asynchronous operations GPMC\_CLK is not provided outside the GPMC and is kept low.

<!-- image -->

<!-- image -->

## 7.1.2.3.10.1.1 Access on Address/Data Multiplexed Devices

## 7.1.2.3.10.1.1.1 Asynchronous Single-Read Operation on an Address/Data Multiplexed Device

Figure 7-12 shows an asynchronous single read operation on an address/data-multiplexed device.

Figure 7-12. Asynchronous Single Read Operation on an Address/Data Multiplexed Device

<!-- image -->

## 7.1.2.3.10.1.1.2 Asynchronous Single Read on an Address/Data-Multiplexed Device

See the device-specific datasheet for formulas to calculate timing parameters.

Table 7-38 lists the timing bit fields to set up in order to configure the GPMC in asynchronous single read mode.

When the GPMC generates a read access to an address/data-multiplexed device, it drives the address bus until OEn assertion time. For details, see Section 7.1.2.3.8.2.3.

Address bits (A[16:1] from a GPMC perspective, A[15:0] from an external device perspective) are placed on the address/data bus, and the remaining address bits GPMC\_A[25:16] are placed on the address bus. The address phase ends at OEn assertion, when the DIR signal goes from OUT to IN.

- Chip-select signal CSn
- -CSn assertion time is controlled by the GPMC\_CONFIG2\_i[3-0] CSONTIME field. It controls the address setup time to CSn assertion.
- -CSn deassertion time is controlled by the GPMC\_CONFIG2\_i[12-8] CSRDOFFTIME field. It controls the address hold time from CSn deassertion
- Address valid signal ADVn
- -ADVn assertion time is controlled by the GPMC\_CONFIG3\_i[3-0] ADVONTIME field.
- -ADVn deassertion time is controlled by the GPMC\_CONFIG3\_i[[12-8] ADVRDOFFTIME field.

- Output enable signal OEn
- -OEn assertion indicates a read cycle.
- -OEn assertion time is controlled by the GPMC\_CONFIG4\_i[[3-0] OEONTIME field.
- -OEn deassertion time is controlled by the GPMC\_CONFIG4\_i[[12-8] OEOFFTIME field.
- Read data is latched when RDACCESSTIME completes. Access time is defined in the GPMC\_CONFIG5\_i[20-16] RDACCESSTIME field.
- Direction signal DIR: DIR goes from OUT to IN at the same time that OEn is asserted.
- The end of the access is defined by the GPMC\_CONFIG5\_i[4-0] RDCYCLETIME parameter.

In the GPMC, when a 16-bit wide device is attached to the controller, a 32-bit word write access is split into two 16-bit word write accesses. For more information about GPMC access size and type adaptation, see Section 7.1.2.3.10.5. Between two successive accesses, if a OEn pulse is needed:

- The GPMC\_CONFIG6\_i[[11-8] CYCLE2CYCLEDELAY field can be programmed with GPMC\_CONFIG6\_i[[7] CYCLE2CYCLESAMECSEN enabled.
- The CSWROFFTIME and CSONTIME parameters also allow a chip-select pulse, but this affects all other types of access.

Figure 7-13 shows two asynchronous single-read accesses on an address/data-multiplexed devices.

Figure 7-13. Two Asynchronous Single Read Accesses on an Address/Data Multiplexed Device (32-Bit Read Split Into 2 × 16-Bit Read)

<!-- image -->

<!-- image -->

<!-- image -->

## 7.1.2.3.10.1.1.3 Asynchronous Single Write Operation on an Address/Data-Multiplexed Device

Figure 7-14 shows an asynchronous single write operation on an address/data-multiplexed device.

Figure 7-14. Asynchronous Single Write on an Address/Data-Multiplexed Device

<!-- image -->

## 7.1.2.3.10.1.1.4 Asynchronous Single Write on an Address/Data-Multiplexed Device

See the device-specific datasheet for formulas to calculate timing parameters.

Table 7-38 lists the timing bit fields to set up in order to configure the GPMC in asynchronous single write mode. When the GPMC generates a write access to an address/data-multiplexed device, it drives the address bus until WEn assertion time. For more information, see Section 7.1.2.3.8.2.3.

The CSn and ADVn signals are controlled in the same way as for asynchronous single read operation on an address/data-multiplexed device.

- Write enable signal WEn
- -WEn assertion indicates a write cycle.
- -WEn assertion time is controlled by the GPMC\_CONFIG4\_i[19-16] WEONTIME field.
- -WEn deassertion time is controlled by the GPMC\_CONFIG4\_i[28-24] WEOFFTIME field.
- Direction signal DIR: DIR signal is OUT during the entire access.
- The end of the access is defined by the GPMC\_CONFIG5\_i[12-8] WRCYCLETIME parameter.

Address bits A[16:1] (GPMC point of view) are placed on the address/data bus at the start of cycle time, and the remaining address bits A[26:17] are placed on the address bus.

Data is driven on the address/data bus at a GPMC\_CONFIG6\_i[19-16] WRDATAONADMUXBUS time.

Write multiple access in asynchronous mode is not supported. If WRITEMULTIPLE is enabled with WRITETYPE as asynchronous, the GPMC processes single asynchronous accesses.

<!-- image -->

After a write operation, if no other access (read or write) is pending, the data bus keeps its previous value. See Section 7.1.2.3.9.10.

## 7.1.2.3.10.1.1.5 Asynchronous Multiple (Page) Write Operation on an Address/Data-Multiplexed Device

Write multiple (page) access in asynchronous mode is not supported for address/data-multiplexed devices. If GPMC\_CONFIG1\_i[28] WRITEMULTIPLE is enabled (1) with GPMC\_CONFIG1\_i[27] WRITETYPE as asynchronous (0), the GPMC processes single asynchronous accesses.

For accesses on non-multiplexed devices, see Section 7.1.2.3.10.3.

## 7.1.2.3.10.1.2 Access on Address/Address/Data (AAD) Multiplexed Devices

## 7.1.2.3.10.1.2.1 Asynchronous Single Read Operation on an AAD-Multiplexed Device

Figure 7-15 shows an asynchronous single read operation on an AAD-multiplexed device.

Figure 7-15. Asynchronous Single-Read on an AAD-Multiplexed Device

<!-- image -->

<!-- image -->

www.ti.com

## 7.1.2.3.10.1.2.2 Asynchronous Single Read on an AAD-Multiplexed Device

See the device-specific datasheet for formulas to calculate timing parameters.

Table 7-38 lists the timing bit fields to set up in order to configure the GPMC in asynchronous single write mode.

When the GPMC generates a read access to an AAD-multiplexed device, all address bits are driven onto the address/data bus in two separate phases. The first phase is used for the MSB address and is qualified with OEn driven low. The first address phase ends at the first OEn deassertion time. The second phase for LSB address is qualified with OEn driven high. The second address phase ends at the second OEn assertion time, when the DIR signal goes from OUT to IN.

The CSn and DIR signals are controlled in the same way as for asynchronous single read operation on an address/data-multiplexed device.

- Address valid signal ADVn. ADVn is asserted and deasserted twice during a read transaction:
- -ADVn first assertion time is controlled by the GPMC\_CONFIG3\_i[6-4] ADVAADMUXONTIME field.
- -ADVn first deassertion time is controlled by the GPMC\_CONFIG3\_i[26-24] ADVAADMUXRDOFFTIME field.
- -ADVn second assertion time is controlled by the GPMC\_CONFIG3\_i[3-0] ADVONTIME field.
- -ADVn second deassertion time is controlled by the GPMC\_CONFIG3\_i[12-8] ADVRDOFFTIME field.
- Output Enable signal OEn. OEn is asserted and deasserted twice during a read transaction (OEn second assertion indicates a read cycle):
- -OEn first assertion time is controlled by the GPMC\_CONFIG4\_i[6-4] OEAADMUXONTIME field.
- -OEn first deassertion time is controlled by the GPMC\_CONFIG3\_i[15-13] OEAADMUXOFFTIME field.
- -OEn second assertion time is controlled by the GPMC\_CONFIG4\_i[3-0] OEONTIME field.
- -OEn second deassertion time is controlled by the GPMC\_CONFIG4\_i[12-8] OEOFFTIME field.

<!-- image -->

## 7.1.2.3.10.1.2.3 Asynchronous Single Write Operation on an AAD-Multiplexed Device

Figure 7-16 shows an asynchronous single write operation on an AAD-multiplexed device.

<!-- image -->

<!-- image -->

See the device-specific datasheet for formulas to calculate timing parameters.

Table 7-38 lists the timing bit fields to set up to configure the GPMC in asynchronous single write mode.

When the GPMC generates a write access to an AAD-multiplexed device, all address bits are driven onto the address/data bus in two separate phases. The first phase is used for the MSB address and is qualified with OEn driven low. The second phase for LSB address is qualified with OEn driven high. The address phase ends at WEn assertion time.

The CSn, WEn, and DIR signals are controlled in the same way as for asynchronous single write operation on an address/data-multiplexed device.

- Address valid signal ADVn is asserted and deasserted twice during a write transaction
- -ADVn first assertion time is controlled by the GPMC\_CONFIG3\_i[6-4] ADVAADMUXONTIME field.
- -ADVn first deassertion time is controlled by the GPMC\_CONFIG3\_i[30-28] ADVAADMUXWROFFTIME field.
- -ADVn second assertion time is controlled by the GPMC\_CONFIG3\_i[3-0] ADVONTIME field.
- -ADVn second deassertion time is controlled by the GPMC\_CONFIG3\_i[20-16] ADVWROFFTIME field.
- Output Enable signal OEn is asserted during the address phase of a write transaction
- -OEn assertion time is controlled by the GPMC\_CONFIG4\_i[6-4] OEAADMUXONTIME field.
- -OEn deassertion time is controlled by the GPMC\_CONFIG3\_i[15-13] OEAADMUXOFFTIME field.

The address bits for the first address phase are driven onto the data bus until OEn deassertion. Data is driven onto the address/data bus at the clock edge defined by the GPMC\_CONFIG6\_i[19-16] WRDATAONADMUXBUS parameter.

## 7.1.2.3.10.1.2.4 Asynchronous Multiple (Page) Read Operation on an AAD-Multiplexed Device

Write multiple (page) access in asynchronous mode is not supported for AAD-multiplexed devices.

If GPMC\_CONFIG1\_i[28] WRITEMULTIPLE is enabled (1) with GPMC\_CONFIG1\_i[27] WRITETYPE as asynchronous (0), the GPMC processes single asynchronous accesses.

For accesses on non-multiplexed devices, see Section 7.1.2.3.10.3.

## 7.1.2.3.10.2 Synchronous Access Description

This section details read and write synchronous accesses on address/data multiplexed. All information in this section can be applied to any type of memory - non-multiplexed, address and data multiplexed or AAD-multiplexed - with a difference limited to the address phase. For accesses on non-multiplexed devices, see Section 7.1.2.3.10.3.

In synchronous operations:

- The GPMC\_CLK clock is provided outside the GPMC when accessing the memory device.
- The GPMC\_CLK clock is derived from the GPMC\_FCLK clock using the GPMC\_CONFIG1\_i[1-0] GPMCFCLKDIVIDER field. In the following section, i stands for the chip-select number, i = 0 to 3.
- The GPMC\_CONFIG1\_i[26-25] CLKACTIVATIONTIME field specifies that the GPMC\_CLK is provided outside the GPMC 0, 1, or 2 GPMC\_FCLK cycles after start access time until RDCYCLETIME or WRCYCLETIME completion.

## 7.1.2.3.10.2.1 Synchronous Single Read

Figure 7-17 and Figure 7-18 show a synchronous single-read operation with GPMCFCLKDIVIDER equal to 0 and 1, respectively.

Figure 7-17. Synchronous Single Read (GPMCFCLKDIVIDER = 0)

<!-- image -->

<!-- image -->

<!-- image -->

<!-- image -->

See the device-specific datasheet for formulas to calculate timing parameters.

Table 7-38 lists the timing bit fields to set up in order to configure the GPMC in asynchronous single read mode.

When the GPMC generates a read access to an address/data-multiplexed device, it drives the address bus until OEn assertion time. For details, see Section 7.1.2.3.8.2.3.

- Chip-select signal CSn
- -CSn assertion time is controlled by the GPMC\_CONFIG2\_i[3-0] CSONTIME field and ensures address setup time to CSn assertion.
- -CSn deassertion time is controlled by the GPMC\_CONFIG2\_i[12-8] CSRDOFFTIME field and ensures address hold time to CSn deassertion.
- Address valid signal ADVn
- -ADVn assertion time is controlled by the GPMC\_CONFIG3\_i[3-0] ADVONTIME field.
- -ADVn deassertion time is controlled by the GPMC\_CONFIG3\_i[12-8] ADVRDOFFTIME field.
- Output enable signal OEn
- -OEn assertion indicates a read cycle.
- -OEn assertion time is controlled by the GPMC\_CONFIG4\_i[3-0] OEONTIME field.
- -OEn deassertion time is controlled by the GPMC\_CONFIG4\_i[12-8] OEOFFTIME field.
- Initial latency for the first read data is controlled by GPMC\_CONFIG5\_i[20-16] RDACCESSTIME or by monitoring the WAIT signal.
- Total access time (GPMC\_CONFIG5\_i[4-0] RDCYCLETIME) corresponds to RDACCESSTIME plus the address hold time from CSn deassertion, plus time from RDACCESSTIME to CSRDOFFTIME.

<!-- image -->

- Direction signal DIR: DIR goes from OUT to IN at the same time as OEn assertion.

When the GPMC generates a write access to an AAD-multiplexed device, all address bits are driven onto the address/data bus in two separate phases. The first phase is used for the MSB address and is qualified with OEn driven low. The second phase for LSB address is qualified with OEn driven high. The address phase ends at WEn assertion time.

The CSn and DIR signals are controlled in the same way as for synchronous single read operation on an address/data-multiplexed device.

- Address valid signal ADVn is asserted and deasserted twice during a read transaction
- -ADVn first assertion time is controlled by the GPMC\_CONFIG3\_i[6-4] ADVAADMUXONTIME field.
- -ADVn first deassertion time is controlled by the GPMC\_CONFIG3\_i[26-24] ADVAADMUXRDOFFTIME field.
- -ADVn second assertion time is controlled by the GPMC\_CONFIG3\_i[3-0] ADVONTIME field.
- -ADVn second deassertion time is controlled by the GPMC\_CONFIG3\_i[12-8] ADVRDOFFTIME field.
- Output Enable signal OEn is asserted and deasserted twice during a read transaction (OEn second assertion indicates a read cycle)
- -OEn first assertion time is controlled by the GPMC\_CONFIG4\_i[6-4] OEAADMUXONTIME field.
- -OEn first deassertion time is controlled by the GPMC\_CONFIG3\_i[15-13] OEAADMUXOFFTIME field.
- -OEn second assertion time is controlled by the GPMC\_CONFIG4\_i[3-0] OEONTIME field.
- -OEn second deassertion time is controlled by the GPMC\_CONFIG4\_i[12-8] OEOFFTIME field.

After a read operation, if no other access (read or write) is pending, the data bus is driven with the previous read value. See Section 7.1.2.3.9.10.

<!-- image -->

## 7.1.2.3.10.2.2 Synchronous Multiple (Burst) Read (4-, 8-, 16-Word16 Burst With Wraparound Capability)

Figure 7-19 and Figure 7-20 show a synchronous multiple read operation with GPMCFCLKDivider equal to 0 and 1, respectively.

Figure 7-19. Synchronous Multiple (Burst) Read (GPMCFCLKDIVIDER = 0)

<!-- image -->

<!-- image -->

Figure 7-20. Synchronous Multiple (Burst) Read (GPMCFCLKDIVIDER = 1)

<!-- image -->

When GPMC\_CONFIG5\_i[20-16] RDACCESSTIME completes, control-signal timings are frozen during the multiple data transactions, corresponding to GPMC\_CONFIG5\_i[27-24] PAGEBURSTACCESSTIME multiplied by the number of remaining data transactions.

The CSn, ADVn, OEn and DIR signals are controlled in the same way as for synchronous single read operation. See Section 7.1.2.3.10.2.1.

Initial latency for the first read data is controlled by RDACCESSTIME or by monitoring the WAIT signal. Successive read data are provided by the memory device each one or two GPMC\_CLK cycles. The PAGEBURSTACCESSTIME parameter must be set accordingly with GPMC\_CONFIG1\_i[1-0] GPMCFCLKDIVIDER and the memory-device internal configuration. Depending on the device page length, the GPMC checks device page crossing during a new burst request and purposely insert initial latency (of RDACCESSTIME) when required.

Total access time GPMC\_CONFIG5\_i[4-0] RDCYCLETIME corresponds to RDACCESSTIME plus the address hold time from CSn deassertion. In Figure 7-19, RDCYCLETIME programmed value equals to RDCYCLETIME0 + RDCYCLETIME1.

After a read operation, if no other access (read or write) is pending, the data bus is driven with the previous read value. See Section 7.1.2.3.9.10.

Burst wraparound is enabled through the GPMC\_CONFIG1\_i[31] WRAPBURST bit and allows a 4-, 8-, or 16-Word16 linear burst access to wrap within its burst-length boundary through GPMC\_CONFIG1\_i[24-23] ATTACHEDDEVICEPAGELENGTH.

<!-- image -->

## 7.1.2.3.10.2.3 Synchronous Single Write

Burst write mode is used for synchronous single or burst accesses (see Figure 7-21).

Figure 7-21. Synchronous Single Write on an Address/Data-Multiplexed Device

<!-- image -->

When the GPMC generates a write access to an address/data-multiplexed device, it drives the data bus (with address bits A[16:1]) until [19:16] WRDATAONADMUXBUS time. First data of the burst is driven on the address/data bus at WRDATAONADMUXBUS time.

## 7.1.2.3.10.2.4 Synchronous Multiple (Burst) Write

Synchronous burst write mode provides synchronous single or consecutive accesses. Figure 7-22 shows a synchronous burst write access when the chip-select is configured in address/data-multiplexed mode.

Figure 7-22. Synchronous Multiple Write (Burst Write) in Address/Data-Multiplexed Mode

<!-- image -->

Figure 7-23 shows the same synchronous burst write access when the chip-select is configured in address/address/data-multiplexed (AAD-multiplexed) mode.

<!-- image -->

<!-- image -->

Figure 7-23. Synchronous Multiple Write (Burst Write) in Address/Address/Data-Multiplexed Mode

<!-- image -->

The first data of the burst is driven on the A/D bus at GPMC\_CONFIG6\_i[19:16] WRDATAONADMUXBUS.

When WRACCESSTIME completes, control-signal timings are frozen during the multiple data transactions, corresponding to the GPMC\_CONFIG5\_i[27-24] PAGEBURSTACCESSTIME multiplied by the number of remaining data transactions.

When the GPMC generates a read access to an address/data-multiplexed device, it drives the address bus until OEn assertion time. For details, see Section 7.1.2.3.8.2.3.

- Chip-select signal CSn
- -CSn assertion time is controlled by the GPMC\_CONFIG2\_i[3-0] CSONTIME field and ensures address setup time to CSn assertion.
- -CSn deassertion time controlled by the GPMC\_CONFIG2\_i[20-16] CSWROFFTIME field and ensures address hold time to CSn deassertion.
- Address valid signal ADVn
- -ADVn assertion time is controlled by the GPMC\_CONFIG3\_i[3-0] ADVONTIME field.
- -ADVn deassertion time is controlled by the GPMC\_CONFIG3\_i[20-16] ADVWROFFTIME field.

- Write enable signal WEn
- -WEn assertion indicates a read cycle.
- -WEn assertion time is controlled by the GPMC\_CONFIG4\_i[19-16] WEONTIME field.
- -WEn deassertion time is controlled by the GPMC\_CONFIG4\_i[28-24] WEOFFTIME field.

The WEn falling edge must not be used to control the time when the burst first data is driven in the address/data bus because some new devices require the WEn signal at low during the address phase.

- Direction signal DIR is OUT during the entire access.

When the GPMC generates a write access to an AAD-multiplexed device, all address bits are driven onto the address/data bus in two separate phases. The first phase is used for the MSB address and is qualified with OEn driven low. The second phase for LSB address is qualified with OEn driven high. The address phase ends at WEn assertion time.

The CSn and DIR signals are controlled as detailled above.

- Address valid signal ADVn is asserted and deasserted twice during a read transaction
- -ADVn first assertion time is controlled by the GPMC\_CONFIG3\_i[[6-4] ADVAADMUXONTIME field.
- -ADVn first deassertion time is controlled by the GPMC\_CONFIG3\_i[[26-24] ADVAADMUXRDOFFTIME field.
- -ADVn second assertion time is controlled by the GPMC\_CONFIG3\_i[[3-0] ADVONTIME field.
- -ADVn second deassertion time is controlled by the GPMC\_CONFIG3\_i[[12-8] ADVRDOFFTIME field.
- Output Enable signal OEn is asserted and deasserted twice during a read transaction (OEn second assertion indicates a read cycle)
- -OEn first assertion time is controlled by the GPMC\_CONFIG4\_i[[6-4] OEAADMUXONTIME field.
- -OEn first deassertion time is controlled by the GPMC\_CONFIG4\_i[15-13] OEAADMUXOFFTIME field.
- -OEn second assertion time is controlled by the GPMC\_CONFIG4\_i[3-0] OEONTIME field.
- -OEn second deassertion time is controlled by the GPMC\_CONFIG4\_i[12-8] OEOFFTIME field.

First write data is driven by the GPMC at GPMC\_CONFIG6\_i[19-16] WRDATAONADMUXBUS, when in address/data mux configuration. The next write data of the burst is driven on the bus at WRACCESSTIME + 1 during GPMC\_CONFIG5\_i[27-24] PAGEBURSTACCESSTIME GPMC\_FCLK cycles. The last data of the synchronous burst write is driven until GPMC\_CONFIG5\_i[12-8] WRCYCLETIME completes.

- WRACCESSTIME is defined in the GPMC\_CONFIG6\_i[28-24] register.
- The PAGEBURSTACCESSTIME parameter must be set accordingly with GPMCFCLKDIVIDER and the memory-device internal configuration.

Total access time GPMC\_CONFIG5\_i[12-8] WRCYCLETIME corresponds to WRACCESSTIME plus the address hold time from CSn deassertion. In Figure 7-23 the WRCYCLETIME programmed value equals WRCYCLETIME0 + WRCYCLETIME1. WRCYCLETIME0 and WRCYCLETIME1 delays are not actual parameters and are only a graphical representation of the full WRCYCLETIME value.

After a write operation, if no other access (read or write) is pending, the data bus keeps the previous value. See Section 7.1.2.3.9.10.

## 7.1.2.3.10.3 Asynchronous and Synchronous Accesses in Nonmultiplexed Mode

Page mode is only available in non-multiplexed mode.

- Asynchronous single read operation on a nonmultiplexed device
- Asynchronous single write operation on a nonmultiplexed device
- Asynchronous multiple (page mode) read operation on a nonmultiplexed device
- Synchronous operations on a nonmultiplexed device

<!-- image -->

<!-- image -->

## 7.1.2.3.10.3.1 Asynchronous Single Read Operation on a Nonmultiplexed Device

Figure 7-24 shows an asynchronous single read operation on a nonmultiplexed device.

## Figure 7-24. Asynchronous Single Read on an Address/Data-Nonmultiplexed Device

<!-- image -->

The 27-bit address is driven onto the address bus A[27:1] and the 16-bit data is driven onto the data bus D[15:0].

Read data is latched at GPMC\_CONFIG1\_5[20-16] RDACCESSTIME completion time. The end of the access is defined by the GPMC\_CONFIG1\_5[4-0] RDCYCLETIME parameter.

CSn, ADVn, OEn and DIR signals are controlled in the same way as address/data multiplexed accesses, see Section 7.1.2.3.10.1.1.2.

<!-- image -->

## 7.1.2.3.10.3.2 Asynchronous Single Write Operation on a Nonmultiplexed Device

Figure 7-25 shows an asynchronous single write operation on a nonmultiplexed device.

Figure 7-25. Asynchronous Single Write on an Address/Data-Nonmultiplexed Device

<!-- image -->

The 27-bit address is driven onto the address bus A[27:1] and the 16-bit data is driven onto the data bus D[15:0].

CSn, ADVn, WEn and DIR signals are controlled in the same way as address/data multiplexed accesses, see Section 7.1.2.3.10.1.1.3.

<!-- image -->

## 7.1.2.3.10.3.3 Asynchronous Multiple (Page Mode) Read Operation on a Nonmultiplexed Device

Figure 7-26 shows an asynchronous multiple read operation on a Nonmultiplexed Device, in which two word32 host read accesses to the GPMC are split into one multiple (page mode of 4 word16) read access to the attached device.

Figure 7-26. Asynchronous Multiple (Page Mode) Read

<!-- image -->

The WAIT signal is active low.

CSn, ADVn, OEn and DIR signals are controlled in the same way as address/data multiplexed accesses, see Section 7.1.2.3.10.1.1.2.

When RDACCESSTIME completes, control-signal timings are frozen during the multiple data transactions, corresponding to PAGEBURSTACCESSTIME multiplied by the number of remaining data transactions.

Read data is latched at GPMC\_CONFIG5\_i[20-16] RDACCESSTIME completion time. The end of the access is defined by the GPMC\_CONFIG5\_i[4-0] RDCYCLETIME parameter.

During consecutive accesses, the GPMC increments the address after each data read completes.

Delay between successive read data in the page is controlled by the GPMC\_CONFIG5\_i[27-24] PAGEBURSTACCESSTIME parameter. Depending on the device page length, the GPMC can control device page crossing during a burst request and insert initial RDACCESSTIME latency. Note that page crossing is only possible with a new burst access, meaning a new initial access phase is initiated.

Total access time RDCYCLETIME corresponds to RDACCESSTIME plus the address hold time starting from the CSn deassertion.

- The read cycle time is defined in the GPMC\_CONFIG5\_i[4-0] RDCYCLETIME field.
- In Figure 7-26, the RDCYCLETIME programmed value equals RDCYCLETIME0 (before paged accesses) + RDCYCLETIME1 (after paged accesses).

## 7.1.2.3.10.3.4 Synchronous Operations on a Nonmultiplexed Device

All information for this section is equivalent to similar operations for address/data- or AAD-multiplexed accesses. The only difference resides in the address phase. See Section 7.1.3.2.

## 7.1.2.3.10.4 Page and Burst Support

Each chip-select can be configured to process system single or burst requests into successive single accesses or asynchronous page/synchronous burst accesses, with appropriate access size adaptation.

Depending on the external device page or burst capability, read and write accesses can be independently configured through the GPMC. The GPMC\_CONFIG1\_i[30] READMULTIPLE and GPMC\_CONFIG1\_i[28] WRITMULTIPLE bits are associated with the READTYPE and WRITETYPE parameters.

- Asynchronous write page mode is not supported.
- 8-bit wide device support is limited to nonburstable devices (READMULTIPLE and WRITEMULTIPLE are ignored).
- Not applicable to NAND device interfacing.

## 7.1.2.3.10.5 System Burst Versus External Device Burst Support

The device system can issue the following requests to the GPMC:

- Byte, 16-bit word, 32-bit word requests (byte enable controlled). This is always a single request from the interconnect point of view.
- Incrementing fixed-length bursts of two words, four words, and eight words
- Wrapped (critical word access first) fixed-length burst of two, four, or eight words

To process a system request with the optimal protocol, the READMULTIPLE (and READTYPE) and WRITEMULTIPLE (and WRITETYPE) parameters must be set according to the burstable capability (synchronous or asynchronous) of the attached device.

The GPMC access engine issues only fixed-length burst. The maximum length that can be issued is defined per CS by the GPMC\_CONFIG1\_i[24-23] ATTACHEDDEVICEPAGELENGTH field. When the ATTACHEDDEVICEPAGELENGTH value is less than the system burst request length (including the appropriate access size adaptation according to the device width), the GPMC splits the system burst request into multiple bursts. Within the specified 4-, 8-, or 16-word value, the

ATTACHEDDEVICEPAGELENGTH field value must correspond to the maximum-length burst supported by the memory device configured in fixed-length burst mode (as opposed to continuous burst mode).

To get optimal performance from memory devices that natively support 16 Word16-length-wrapping burst capability (critical word access first), the ATTACHEDDEVICEPAGELENGTH parameter must be set to 16 words and the GPMC\_CONFIG1\_i[31] WRAPBURST bit must be set to 1. Similarly DEVICEPAGELENGTH is set to 4 and 8 for memories supporting respectively 4 and 8 Word16-lengthwrapping burst.

When the memory device does not offer (or is not configured to offer) native 16 Word16-length-wrapping burst, the WRAPBURST parameter must be cleared, and the GPMC access engine emulates the wrapping burst by issuing the appropriate burst sequences according to the ATTACHEDDEVICEPAGELENGTH value.

When the memory device does not support native-wrapping burst, there is usually no difference in behavior between a fixed burst length mode and a continuous burst mode configuration (except for a potential power increase from a memory-speculative data prefetch in a continuous burst read). However, even though continuous burst mode is compatible with GPMC behavior, because the GPMC access engine issues only fixed-length burst and does not benefit from continuous burst mode, it is best to configure the memory device in fixed-length burst mode.

The memory device maximum-length burst (configured in fixed-length burst wrap or nonwrap mode) usually corresponds to the memory device data buffer size. Memory devices with a minimum of 16 halfword buffers are the most appropriate (especially with wrap support), but memory devices with smaller buffer size (4 or 8) are also supported, assuming that the GPMC\_CONFIG1\_i[24-23] ATTACHEDDEVICEPAGELENGTH field is set accordingly to 4 or 8 words.

<!-- image -->

<!-- image -->

www.ti.com

The device system issues only requests with addresses or starting addresses for nonwrapping burst requests; that is, the request size boundary is aligned. In case of an eight-word-wrapping burst, the wrapping address always occurs on the eight-words boundary. As a consequence, all words requested must be available from the memory data buffer when the buffer size is equal to or greater than the ATTACHEDDEVICEPAGELENGTH value. This usually means that data can be read from or written to the buffer at a constant rate (number of cycles between data) without wait states between data accesses. If the memory does not behave this way (nonzero wait state burstable memory), wait-pin monitoring must be enabled to dynamically control data-access completion within the burst.

When the system burst request length is less than the ATTACHEDDEVICEPAGELENGTH value, the GPMC proceeds with the required accesses.

## 7.1.2.3.11 pSRAM Access Specificities

pSRAM devices are SRAM-pin-compatible low-power memories that contain a self-refreshed DRAM memory array. The GPMC\_CONFIG1\_i[[11-10] DEVICETYPE field shall be cleared to 0b00.

The pSRAM devices uses the NOR protocol. It support the following operations:

- Asynchronous single read
- Asynchronous page read
- Asynchronous single write
- Synchronous single read and write
- Synchronous burst read
- Synchronous burst write (not supported by NOR Flash memory)

pSRAM devices must be powered up and initialized in a predefined manner according to the specifications of the attached device.

pSRAM devices can be programmed to use either mode: fixed or variable latency. pSRAM devices can either automatically schedule autorefresh operations, which force the GPMC to use its WAIT signal capability when read or write operations occur during an internal self-refresh operation, or pSRAM devices automatically include the autorefresh operation in the access time. These devices do not require additional WAIT signal capability or a minimum CSn high pulse width between consecutive accesses to ensure that the correct internal refresh operation is scheduled.

## 7.1.2.3.12 NAND Access Description

NAND (8-bit and 16-bit) memory devices using a standard NAND asynchronous address/data-multiplexing scheme can be supported on any chip-select with the appropriate asynchronous configuration settings

As for any other type of memory compatible with the GPMC interface, accesses to a chip-select allocated to a NAND device can be interleaved with accesses to chip-selects allocated to other external devices. This interleaved capability limits the system to chip enable don't care NAND devices, because the chipselect allocated to the NAND device must be de-asserted if accesses to other chip-selects are requested.

## 7.1.2.3.12.1 NAND Memory Device in Byte or 16-Bit Word Stream Mode

NAND devices require correct command and address programming before data array read or write accesses. The GPMC does not include specific hardware to translate a random address system request into a NAND-specific multiphase access. In that sense, GPMC NAND support, as opposed to random memory-map device support, is data-stream-oriented (byte or 16-bit word).

The GPMC NAND programming model relies on a software driver for address and command formatting with the correct data address pointer value according to the block and page structure. Because of NAND structure and protocol interface diversity, the GPMC does not support automatic command and address phase programming, and software drivers must access the NAND device ID to ensure that correct command and address formatting are used for the identified device.

NAND device data read and write accesses are achieved through an asynchronous read or write access. The associated chip-select signal timing control must be programmed according to the NAND device timing specification.

<!-- image -->

Any chip-select region can be qualified as a NAND region to constrain the ADVn\_ALE signal as Address Latch Enable (ALE active high, default state value at low) during address program access, and the BE0n\_CLE signal as Command Latch Enable (CLE active high, default state value at low) during command program access. GPMC address lines are not used (the previous value is not changed) during NAND access.

## 7.1.2.3.12.1.1 Chip-Select Configuration for NAND Interfacing in Byte or Word Stream Mode

The GPMC\_CONFIG7\_i register associated with a NAND device region interfaced in byte or word stream mode can be initialized with a minimum size of 16 Mbytes, because any address location in the chip-select memory region can be used to access a NAND data array. The NAND Flash protocol specifies an address sequence where address bits are passed through the data bus in a series of write accesses with the ALE pin asserted. After this address phase, all operations are streamed and the system requests address is irrelevant.

To allow correct command, address, and data-access controls, the GPMC\_CONFIG1\_i register associated with a NAND device region must be initialized in asynchronous read and write modes with the parameters shown in Chip-Select Configuration for NAND Interfacing. Failure to comply with these settings corrupts the NAND interface protocol.

The GPMC\_CONFIG1\_i to GPMC\_CONFIG4\_i register associated with a NAND device region must be initialized with the correct control-signal timing value according to the NAND device timing parameters.

## Chip-Select Configuration for NAND Interfacing

| Bit Field                | Register       | Value        | Comments                                         |
|--------------------------|----------------|--------------|--------------------------------------------------|
| WRAPBURST                | GPMC_CONFIG1_i | 0            | No wrap                                          |
| READMULTIPLE             | GPMC_CONFIG1_i | 0            | Single access                                    |
| READTYPE                 | GPMC_CONFIG1_i | 0            | Asynchronous mode                                |
| WRITEMULTIPLE            | GPMC_CONFIG1_i | 0            | Single access                                    |
| WRITETYPE                | GPMC_CONFIG1_i | 0            | Asynchronous mode                                |
| CLKACTIVATIONTIME        | GPMC_CONFIG1_i | 0b00         |                                                  |
| ATTACHEDDEVICEPAGELENGTH | GPMC_CONFIG1_i | Don't care   | Single-access mode                               |
| WAITREADMONITORING       | GPMC_CONFIG1_i | 0            | Wait not monitored by GPMC access engine         |
| WAITWRITEMONITORING      | GPMC_CONFIG1_i | 0            | Wait not monitored by GPMC access engine         |
| WAITMONITORINGTIME       | GPMC_CONFIG1_i | Don't care   | Wait not monitored by GPMC access engine         |
| WAITPINSELECT            | GPMC_CONFIG1_i |              | Select which wait is monitored by edge detectors |
| DEVICESIZE               | GPMC_CONFIG1_i | 0b00 or 0b01 | 8- or 16-bit interface                           |
| DEVICETYPE               | GPMC_CONFIG1_i | 0b10         | NAND device in stream mode                       |
| MUXADDDATA               | GPMC_CONFIG1_i | 0b00         | Nonmultiplexed mode                              |
| TIMEPARAGRANULARITY      | GPMC_CONFIG1_i | 0            | Timing achieved with best GPMC clock granularity |
| GPMCFCLKDIVIDER          | GPMC_CONFIG1_i | Don't care   | Asynchronous mode                                |

## 7.1.2.3.12.1.2 NAND Device Command and Address Phase Control

NAND devices require multiple address programming phases. The MPU software driver is responsible for issuing the correct number of command and address program accesses, according to the device command set and the device address-mapping scheme.

NAND device-command and address-phase programming is achieved through write requests to the GPMC\_NAND\_COMMAND\_i and GPMC\_NAND\_ADDRESS\_i register locations with the correct command and address values. These locations are mapped in the associated chip-select register region. The associated chip-select signal timing control must be programmed according to the NAND device timing specification.

<!-- image -->

## www.ti.com

Command and address values are not latched during the access and cannot be read back at the register location.

- Only write accesses must be issued to these locations, but the GPMC does not discard any read access. Accessing a NAND device with OEn and CLE or ALE asserted (read access) can produce undefined results.
- Write accesses to the GPMC\_NAND\_COMMAND\_i register location and to the GPMC\_NAND\_ADDRESS\_i register location must be posted for faster operations. The GPMC\_CONFIG[0] NANDFORCEPOSTEDWRITE bit enables write accesses to these locations as posted, even if they are defined as nonposted.

A write buffer is used to store write transaction information before the external device is accessed:

- Up to eight consecutive posted write accesses can be accepted and stored in the write buffer.
- For nonposted write, the pipeline is one deep.
- A GPMC\_STATUS[0] EMPTYWRITEBUFFERSTATUS bit stores the empty status of the write buffer.

The GPMC\_NAND\_COMMAND\_i and GPMC\_NAND\_ADDRESS\_i registers are 32-bit word locations, which means any 32-bit word or 16-bit word access is split into 4- or 2-byte accesses if an 8-bit wide NAND device is attached. For multiple-command phase or multiple-address phase, the software driver can use 32-bit word or 16-bit word access to these registers, but it must account for the splitting and littleendian ordering scheme. When only one byte command or address phase is required, only byte write access to a GPMC\_NAND\_COMMAND\_i and GPMC\_NAND\_ADDRESS\_i can be used, and any of the four byte locations of the registers are valid.

The same applies to GPMC\_NAND\_COMMAND\_i and GPMC\_NAND\_ADDRESS\_i 32-bit word write access to a 16-bit wide NAND device (split into two 16-bit word accesses). In the case of a 16-bit word write access, the MSByte of the 16-bit word value must be set according to the NAND device requirement (usually 0). Either 16-bit word location or any one of the four byte locations of the registers is valid

## 7.1.2.3.12.1.3 Command Latch Cycle

Writing data at the GPMC\_NAND\_COMMAND\_i location places the data as the NAND command value on the bus, using a regular asynchronous write access.

- CSn[i] is controlled by the CSONTIME and CSWROFFTIME timing parameters.
- CLE is controlled by the ADVONTIME and ADVWROFFTIME timing parameters.
- WE is controlled by the WEONTIME and WEOFFTIME timing parameters.
- ALE and REn (OEn) are maintained inactive.

Figure 7-27 shows the NAND command latch cycle.

CLE is shared with the BE0n output signal and has an inverted polarity from BE0n. The NAND qualifier deals with this. During the asynchronous NAND data access cycle, BE0n (also BE1n) must not toggle, because it is shared with CLE.

NAND Flash memories do not use byte enable signals at all.

Figure 7-27. NAND Command Latch Cycle

<!-- image -->

<!-- image -->

<!-- image -->

## 7.1.2.3.12.1.4 Address Latch Cycle

Writing data at the GPMC\_NAND\_ADDRESS\_i location places the data as the NAND partial address value on the bus, using a regular asynchronous write access.

- CSn is controlled by the CSONTIME and CSWROFFTIME timing parameters.
- ALE is controlled by the ADVONTIME and ADVWROFFTIME timing parameters.
- WEn is controlled by the WEONTIME and WEOFFTIME timing parameters.
- CLE and REn (OEn) are maintained inactive.

Figure 7-28 shows the NAND address latch cycle.

ALE is shared with the ADVn output signal and has an inverted polarity from ADVn. The NAND qualifier deals with this. During the asynchronous NAND data access cycle, ALE is kept stable.

## Figure 7-28. NAND Address Latch Cycle

<!-- image -->

## 7.1.2.3.12.1.5 NAND Device Data Read and Write Phase Control in Stream Mode

NAND device data read and write accesses are achieved through a read or write request to the chipselect-associated memory region at any address location in the region or through a read or write request to the GPMC\_NAND\_DATA\_i location mapped in the chip-select-associated control register region. GPMC\_NAND\_DATA\_i is not a true register, but an address location to enable REn or WEn signal control. The associated chip-select signal timing control must be programmed according to the NAND device timing specification.

Reading data from the GPMC\_NAND\_DATA\_i location or from any location in the associated chip-select memory region activates an asynchronous read access.

- CSn is controlled by the CSONTIME and CSRDOFFTIME timing parameters.
- REn is controlled by the OEONTIME and OEOFFTIME timing parameters.
- To take advantage of REn high-to-data invalid minimum timing value, the RDACCESSTIME can be set so that data are effectively captured after REn deassertion. This allows optimization of NAND read access cycle time completion. For optimal timing parameter settings, see the NAND device and the device IC timing parameters.

ALE, CLE, and WEn are maintained inactive.

Figure 7-29 shows the NAND data read cycle.

## Figure 7-29. NAND Data Read Cycle

<!-- image -->

Writing data to the GPMC\_NAND\_DATA\_i location or to any location in the associated chip-select memory region activates an asynchronous write access.

- CSn is controlled by the CSONTIME and CSWROFFTIME timing parameters.
- WEn is controlled by the WEONTIME and WEOFFTIME timing parameters.
- ALE, CLE, and REn (OEn) are maintained inactive.

Figure 7-30 shows the NAND data write cycle.

<!-- image -->

<!-- image -->

www.ti.com

Figure 7-30. NAND Data Write Cycle

<!-- image -->

## 7.1.2.3.12.1.6 NAND Device General Chip-Select Timing Control Requirement

For most NAND devices, read data access time is dominated by CSn-to-data-valid timing and has faster REn-to-data-valid timing. Successive accesses with CSn deassertions between accesses are affected by this timing constraint. Because accesses to a NAND device can be interleaved with other chip-select accesses, there is no certainty that CSn always stays low between two accesses to the same chip-select. Moreover, an CSn deassertion time between the same chip-select NAND accesses is likely to be required as follows: the CSn deassertion requires programming CYCLETIME and RDACCESSTIME according to the CSn-to-data-valid critical timing.

To get full performance from NAND read and write accesses, the prefetch engine can dynamically reduce RDCYCLETIME, WRCYCLETIME, RDACCESSTIME, WRACCESSTIME, CSRDOFFTIME, CSWROFFTIME, ADVRDOFFTIME, ADVWROFFTIME, OEOFFTIME, and WEOFFTIME on back-to-back NAND accesses (to the same memory) and suppress the minimum CSn high pulse width between accesses. For more information about optimal prefetch engine access, see Section 7.1.2.3.12.4.

Some NAND devices require minimum write-to-read idle time, especially for device-status read accesses following status-read command programming (write access). If such write-to-read transactions are used, a minimum CSn high pulse width must be set. For this, CYCLE2CYCLESAMECSEN and CYCLE2CYCLEDELAY must be set according to the appropriate timing requirement to prevent any timing violation.

NAND devices usually have an important REn high to data bus in tristate mode. This requires a bus turnaround setting (BUSTURNAROUND = 1), so that the next access to a different chip-select is delayed until the BUSTURNAROUND delay completes. Back-to-back NAND read accesses to the same NAND Flash are not affected by the programmed bus turnaround delay.

## 7.1.2.3.12.1.7 Read and Write Access Size Adaptation

## 7.1.2.3.12.1.7.1 8-Bit Wide NAND Device

Host 16-bit word and 32-bit word read and write access requests to a chip-select associated with an 8-bit wide NAND device are split into successive read and write byte accesses to the NAND memory device. Byte access is ordered according to little-endian organization. A NAND 8-bit wide device must be interfaced on the D0D7 interface bus lane. GPMC data accesses are justified on this bus lane when the chip-select is associated with an 8-bit wide NAND device.

## 7.1.2.3.12.1.7.2 16-Bit Wide NAND Device

Host 32-bit word read and write access requests to a chip-select associated with a 16-bit wide NAND device are split into successive read and write 16-bit word accesses to the NAND memory device. 16-bit word access is ordered according to little-endian organization.

<!-- image -->

Host byte read and write access requests to a 16-bit wide NAND device are completed as 16-bit accesses on the device itself, because there is no byte-addressing capability on 16-bit wide NAND devices. This means that the NAND device address pointer is incremented on a 16-bit word basis and not on a byte basis. For a read access, only the requested byte is given back to the host, but the remaining byte is not stored or saved by the GPMC, and the next byte or 16-bit word read access gets the next 16-bit word NAND location. For a write access, the invalid byte part of the 16-bit word is driven to FF, and the next byte or 16-bit word write access programs the next 16-bit word NAND location.

Generally, byte access to a 16-bit wide NAND device should be avoided, especially when ECC calculation is enabled. 8-bit or 16-bit ECC-based computations are corrupted by a byte read to a 16-bit wide NAND device, because the nonrequested byte is considered invalid on a read access (not captured on the external data bus; FF is fed to the ECC engine) and is set to FF on a write access.

Host requests (read/write) issued in the chip-select memory region are translated in successive single or split accesses (read/write) to the attached device. Therefore, incrementing 32-bit burst requests are translated in multiple 32-bit sequential accesses following the access adaptation of the 32-bit to 8- or 16bit device.

## 7.1.2.3.12.2 NAND Device-Ready Pin

The NAND memory device provides a ready pin to indicate data availability after a block/page opening and to indicate that data programming is complete. The ready pin can be connected to one of the WAIT GPMC input pins; data read accesses must not be tried when the ready pin is sampled inactive (device is not ready) even if the associated chip-select WAITREADMONITORING bit field is set. The duration of the NAND device busy state after the block/page opening is so long (up to 50 µs) that accesses occurring when the ready pin is sampled inactive can stall GPMC access and eventually cause a system time-out.

If a read access to a NAND flash is done using the wait monitoring mode, the device is blocked during a page opening, and so is the GPMC. If the correct settings are used, other chip-selects can be used while the memory processes the page opening command.

To avoid a time-out caused by a block/page opening delay in NAND flash, disable the wait pin monitoring for read and write accesses (that is, set the GPMC\_CONFIG1\_i[[21] WAITWRITEMONITORING and GPMC\_CONFIG1\_i[[22] WAITREADMONITORING bits to 0 and use one of the following methods instead:

- Use software to poll the WAITnSTATUS bit (n = 0 to 1) of the GPMC\_STATUS register.
- Configure an interrupt that is generated on the WAIT signal change (through the GPMC\_IRQENABLE [11-8]bits).

Even if the READWAITMONITORING bit is not set, the external memory nR/B pin status is captured in the programmed WAIT bit in the GPMC\_STATUS register.

The READWAITMONITORING bit method must be used for other memories than NAND flash, if they require the use of a WAIT signal.

## 7.1.2.3.12.2.1 Ready Pin Monitored by Software Polling

The ready signal state can be monitored through the GPMC\_STATUS WAITxSTATUS bit (x = 0 or 1). The software must monitor the ready pin only when the signal is declared valid. Refer to the NAND device timing parameters to set the correct software temporization to monitor ready only after the invalid window is complete from the last read command written to the NAND device.

## 7.1.2.3.12.2.2 Ready Pin Monitored by Hardware Interrupt

Each gpmc\_wait input pin can generate an interrupt when a wait-to-no-wait transition is detected. Depending on whether the GPMC\_CONFIG WAITxPINPOLARITY bits (x = 0 or 1) is active low or active high, the wait-to-no-wait transition is a low-to-high external WAIT signal transition or a high-to-low external WAIT signal transition, respectively.

<!-- image -->

www.ti.com

The wait transition pin detector must be cleared before any transition detection. This is done by writing 1 to the WAITxEDGEDETECTIONSTATUS bit (x = 0 or 1) of the GPMC\_IRQSTATUS register according to the gpmc\_wait pin used for the NAND device-ready signal monitoring. To detect a wait-to-no-wait transition, the transition detector requires a wait active time detection of a minimum of two GPMC\_FCLK cycles. Software must incorporate precautions to clear the wait transition pin detector before wait (busy) time completes.

A wait-to-no-wait transition detection can issue a GPMC interrupt if the WAITxEDGEDETECTIONENABLE bit in the GPMC\_IRQENABLE register is set and if the WAITxEDGEDETECTIONSTATUS bit field in the GPMC\_IRQSTATUS register is set.

The WAITMONITORINGTIME field does not affect wait-to-no-wait transition time detection.

It is also possible to poll the WAITxEDGEDETECTIONSTATUS bit field in the GPMC\_IRQSTATUS register according to the gpmc\_wait pin used for the NAND device ready signal monitoring.

## 7.1.2.3.12.3 ECC Calculator

The General Purpose Memory Controller includes an Error Code Correction (ECC) calculator circuitry that enables on the fly ECC calculation during data read or data program (that is, write) operations. The page size supported by the ECC calculator in one calculation/context is 512 bytes.

The user can choose from two different algorithms with different error correction capabilities through the GPMC\_ECC\_CONFIG[16] ECCALGORITHM bit:

- Hamming code for 1-bit error code correction on 8- or 16-bit NAND Flash organized with page size greater than 512 bytes
- BCH (Bose-Chaudhurl-Hocquenghem) code for 4- to 16-bit error correction

The GPMC does not directly handle the error code correction itself. During writes, the GPMC computes parity bits. During reads, the GPMC provides enough information for the processor to correct errors without reading the data buffer all over again.

The Hamming code ECC is based on a 2-dimensional (row and column) bit parity accumulation. This parity accumulation is either accomplished on the programmed number of bytes or 16-bit words read from the memory device, or written to the memory device in stream mode.

Because the ECC engine includes only one accumulation context, it can be allocated to only one chipselect at a time through the GPMC\_ECC\_CONFIG[3-1] ECCCS bit field. Even if two CS use different ECC algorithms, one the Hamming code and the other a BCH code, they must define separate ECC contexts because some of the ECC registers are common to all types of algorithms.

## 7.1.2.3.12.3.1 Hamming Code

All references to Error Code Correction (ECC) in this subsection refer to the 1-bit error correction Hamming code.

The ECC is based on a two-dimensional (row and column) bit parity accumulation known as Hamming Code. The parity accumulation is done for a programmed number of bytes or 16-bit word read from the memory device or written to the memory device in stream mode.

There is no automatic error detection or correction, and it is the software NAND driver responsibility to read the multiple ECC calculation results, compare them to the expected code value, and take the appropriate corrective actions according to the error handling strategy (ECC storage in spare byte, error correction on read, block invalidation).

The ECC engine includes a single accumulation context. It can be allocated to a single designated chipselect at a time and parallel computations on different chip-selects are not possible. Since it is allocated to a single chip-select, the ECC computation is not affected by interleaved GPMC accesses to other chipselects and devices. The ECC accumulation is sequentially processed in the order of data read from or written to the memory on the designated chip-select. The ECC engine does not differentiate read accesses from write accesses and does not differentiate data from command or status information. It is the software responsibility to make sure only relevant data are passed to the NAND flash memory while the ECC computation engine is active.

<!-- image -->

The starting NAND page location must be programmed first, followed by an ECC accumulation context reset with an ECC enabling, if required. The NAND device accesses discussed in the following sections must be limited to data read or write until the specified number of ECC calculations is completed.

## 7.1.2.3.12.3.1.1 ECC Result Register and ECC Computation Accumulation Size

The GPMC includes up to nine ECC result registers (GPMC\_ECCj\_RESULT, j = 1 to 9) to store ECC computation results when the specified number of bytes or 16-bit words has been computed.

The ECC result registers are used sequentially; one ECC result is stored in one ECC result register on the list, the next ECC result is stored in the next ECC result register on the list, and so forth, until the last ECC computation. The value of the GPMC\_ECCj\_RESULT register value is valid only when the programmed number of bytes or 16-bit words has been accumulated, which means that the same number of bytes or 16-bit words has been read from or written to the NAND device in sequence.

The GPMC\_ECC\_CONTROL[3-0] ECCPOINTER field must be set to the correct value to select the ECC result register to be used first in the list for the incoming ECC computation process. The ECCPointer can be read to determine which ECC register is used in the next ECC result storage for the ongoing ECC computation. The value of the GPMC\_ECCj\_RESULT register (j = 1 to 9) can be considered valid when ECCPOINTER equals j + 1. When the GPMC\_ECCj\_RESULT (where j = 9) is updated, ECCPOINTER is frozen at 10, and ECC computing is stopped (ECCENABLE = 0).

The ECC accumulator must be reset before any ECC computation accumulation process. The GPMC\_ECC\_CONTROL[8] ECCCLEAR bit must be set to 1 (nonpersistent bit) to clear the accumulator and all ECC result registers.

For each ECC result (each register, j = 1 to 9), the number of bytes or 16-bit words used for ECC computing accumulation can be selected from between two programmable values.

The ECCjRESULTSIZE bits (j = 1 to 9) in the GPMC\_ECC\_SIZE\_CONFIG register select which programmable size value (ECCSIZE0 or ECCSIZE1) must be used for this ECC result (stored in GPMC\_ECCj\_RESULT register ).

The ECCSIZE0 and ECCSIZE1 fields allow selection of the number of bytes or 16-bit words used for ECC computation accumulation. Any even values from 2 to 512 are allowed.

Flexibility in the number of ECCs computed and the number of bytes or 16-bit words used in the successive ECC computations enables different NAND page error-correction strategies. Usually based on 256 or 512 bytes and on 128 or 256 16-bit word, the number of ECC results required is a function of the NAND device page size. Specific ECC accumulation size can be used when computing the ECC on the NAND spare byte.

For example, with a 2 Kbyte data page 8-bit wide NAND device, eight ECCs accumulated on 256 bytes can be computed and added to one extra ECC computed on the 24 spare bytes area where the eight ECC results used for comparison and correction with the computed data page ECC are stored. The GPMC then provides nine GPMC\_ECCj\_RESULT registers (j= 1 to 9) to store the results. In this case, ECCSIZE0 is set to 256, and ECCSIZE1 is set to 24; the ECC[1-8]RESULTSIZE bits are cleared to 0, and the ECC9RESULTSIZE bit is set to 1.

## 7.1.2.3.12.3.1.2 ECC Enabling

The GPMC\_ECC\_CONFIG[3-1] ECCCS field selects the allocated chip-select. The GPMC\_ECC\_CONFIG[0] ECCENABLE bit enables ECC computation on the next detected read or write access to the selected chip-select.

The ECCPOINTER, ECCCLEAR, ECCSIZE, ECCjRESULTSIZE (where j = 1 to 9), ECC16B, and ECCCS fields must not be changed or cleared while an ECC computation is in progress.

The ECC accumulator and ECC result register must not be changed or cleared while an ECC computation is in progress.

ECC Enable Settings describes the ECC enable settings.

<!-- image -->

## ECC Enable Settings

| Bit Field                      | Register             | Value   | Comments                                                                                                                  |
|--------------------------------|----------------------|---------|---------------------------------------------------------------------------------------------------------------------------|
| ECCCS                          | GPMC_ECC_CONFIG      | 0-3h    | Selects the chip-select where ECC is computed                                                                             |
| ECC16B                         | GPMC_ECC_CONFIG      | 0/1     | Selects column number for ECC calculation                                                                                 |
| ECCCLEAR                       | GPMC_ECC_CONTROL     | 0-7h    | Clears all ECC result registers                                                                                           |
| ECCPOINTER                     | GPMC_ECC_CONTROL     | 0-7h    | A write to this bit field selects the ECC result register where the first ECC computation is stored. Set to 1 by default. |
| ECCSIZE1                       | GPMC_ECC_SIZE_CONFIG | 0-FFh   | Defines ECCSIZE1                                                                                                          |
| ECCSIZE0                       | GPMC_ECC_SIZE_CONFIG | 0-FFh   | Defines ECCSIZE0                                                                                                          |
| ECCjRESULTSIZE (j from 1 to 9) | GPMC_ECC_SIZE_CONFIG | 0/1     | Selects the size of ECCn result register                                                                                  |
| ECCENABLE                      | GPMC_ECC_CONFIG      | 1       | Enables the ECC computation                                                                                               |

## 7.1.2.3.12.3.1.3 ECC Computation

The ECC algorithm is a multiple parity bit accumulation computed on the odd and even bit streams extracted from the byte or Word 16 streams. The parity accumulation is split into row and column accumulations, as shown in Figure 7-31 and Figure 7-32. The intermediate row and column parities are used to compute the upper level row and column parities. Only the final computation of each parity bit is used for ECC comparison and correction.

P1o = bit7 XOR bit5 XOR bit3 XOR bit1 on each byte of the data stream

P1e = bit6 XOR bit4 XOR bit2 XOR bit0 on each byte of the data stream

P2o = bit7 XOR bit6 XOR bit3 XOR bit2 on each byte of the data stream

P2e = bit5 XOR bit4 XOR bit1 XOR bit0 on each byte of the data stream

P4o = bit7 XOR bit6 XOR bit5 XOR bit4 on each byte of the data stream

P4e = bit3 XOR bit2 XOR bit1 XOR bit0 on each byte of the data stream

Each column parity bit is XORed with the previous accumulated value.

Figure 7-31. Hamming Code Accumulation Algorithm (1 of 2)

<!-- image -->

<!-- image -->

For line parities, the bits of each new data are XORed together, and line parity bits are computed as:

P8e = row0 XOR row2 XOR row4 XOR ... XOR row254

P8o = row1 XOR row3 XOR row5 XOR ... XOR row255

P16e = row0 XOR row1 XOR row4 XOR row5 XOR ... XOR row252 XOR row 253

P16o = row2 XOR row3 XOR row6 XOR row7 XOR ... XOR row254 XOR row 255

Unused parity bits in the result registers are cleared to 0.

Figure 7-32. Hamming Code Accumulation Algorithm (2 of 2)

<!-- image -->

Figure 7-33 shows ECC computation for a 256-byte data stream (read or write). The result includes six column parity bits (P1o-P2o-P4o for odd parities, and P1e-P2e-P4e for even parities) and sixteen row parity bits (P8o-P16o-P32o--P1024o for odd parities, and P8e-P16e-P32e--P1024e for even parities).

Figure 7-33. ECC Computation for a 256-Byte Data Stream (Read or Write)

<!-- image -->

<!-- image -->

Figure 7-34 shows ECC computation for a 512-byte data stream (read or write). The result includes six column parity bits (P1o-P2o-P4o for odd parities, and P1e-P2e-P4e for even parities) and eighteen row parity bits (P8o-P16o-P32o--P1024o- - P2048o for odd parities, and P8e-P16e-P32e--P1024e- P2048e for even parities).

For a 2 Kbytes page, four 512 bytes ECC calculations plus one for the spare area are required. Results are stored in the GPMC\_ECCj\_RESULT registers (j = 1 to 9).

Figure 7-34. ECC Computation for a 512-Byte Data Stream (Read or Write)

<!-- image -->

## 7.1.2.3.12.3.1.4 ECC Comparison and Correction

To detect an error, the computed ECC result must be XORed with the parity value stored in the spare area of the accessed page.

- If the result of this logical XOR is all 0s, no error is detected and the read data is correct.
- If every second bit in the parity result is a 1, one bit is corrupted and is located at bit address (P2048o, P1024o, P512o, P256o, P128o, P64o, P32o, P16o, P8o, P4o, P2o, P1o). The software must correct the corresponding bit.
- If only one bit in the parity result is 1, it is an ECC error and the read data is correct.

## 7.1.2.3.12.3.1.5 ECC Calculation Based on 8-Bit Word

The 8-bit based ECC computation is used for 8-bit wide NAND device interfacing.

The 8-bit based ECC computation can be used for 16-bit wide NAND device interfacing to get backward compatibility on the error-handling strategy used with 8-bit wide NAND devices. In this case, the 16-bit wide data read from or written to the NAND device is fragmented into 2 bytes. According to little-endian access, the least significant bit (LSB) of the 16-bit wide data is ordered first in the byte stream used for 8bit based ECC computation.

## 7.1.2.3.12.3.1.6 ECC Calculation Based on 16-Bit Word

ECC computation based on a 16-bit word is used for 16-bit wide NAND device interfacing. This ECC computation is not supported when interfacing an 8-bit wide NAND device, and the GPMC\_ECC\_CONFIG[7] ECC16B bit must be cleared to 0 when interfacing an 8-bit wide NAND device.

The parity computation based on 16-bit words affects the row and column parity mapping. The main difference is that the odd and even parity bits P8o and P8e are computed on rows for an 8-bit based ECC while there are computed on columns for a 16-bit based ECC. Figure 7-35 and Figure 7-36.

Figure 7-35. 128 Word16 ECC Computation

<!-- image -->

Figure 7-36. 256 Word16 ECC Computation

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 7.1.2.3.12.3.2 BCH Code (Bose-Chaudhurl-Hocquenghem)

All references to Error Code Correction (ECC) in this subsection refer to the 4- to 16-bit error correction BCH code.

## 7.1.2.3.12.3.2.1 Requirements

Read and write accesses to a NAND flash take place by whole pages, in a predetermined sequence: first the data byte page itself, then some spare bytes, including the BCH ECC (and other information). The NAND IC can cache a full page, including spares, for read and write accesses.

Typical page write sequence:

- Sequential write to NAND cache of main data + spare data, for a page. ECC is calculated on the fly. Calculated ECC may be inserted on the fly in the spares, or replaced by dummy accesses.
- When the calculated ECC is replaced by dummy accesses, it must be written to the cache in a second, separate phase. The ECC module is disabled during that time.
- NAND writes its cache line (page) to the array

## Typical page read sequence:

- Sequential read of a page. ECC is calculated on the fly.
- ECC module buffers status determines the presence of errors.
- Accesses to several memories may be interleaved by the GPMC, but only one of those memories can be a NAND using the BCH engine at a time; in other words, only one BCH calculation (for example, for a single page) can be on-going at any time. Note also that the sequential nature of NAND accesses guarantees that the data is always written / read out in the same order. BCH-relevant accesses are selected by the GPMCs chip-select.
- Each page may hold up to 4 Kbytes of data, spare bytes not included. This means up to 8 x 512-byte BCH messages. Since all the data is written / read out first, followed by the BCH ECC, this means that the BCH engine must be able to hold 8 104-bit remainders or syndromes (or smaller, 52-bit ones) at the same time.

The BCH module has the capacity to store all remainders internally. After the page start, an internal counter is used to detect the 512-byte sector boundaries. On those boundaries, the current remainder is stored and the divider reset for the next calculation. At the end of the page, the BCH module contains all remainders.

- NAND access cycles hold 8 or 16 bits of data each (1 or 2 bytes); Each NAND cycle takes at least 4 cycles of the GPMCs internal clock. This means the NAND flash timing parameters must define a RDCYCLETIME and a WRCYCLETIME of at least 4 clock cycles after optimization when using the BCH calculator.
- The spare area is assumed to be large enough to hold the BCH ECC, that is, to have at least a message of 13 bytes available per 512-byte sector of data. The zone of unused spare area by the ECC may or may not be protected by the same ECC scheme, by extending the BCH message beyond 512 bytes (maximum codeword is 1023-byte long, ECC included, which leaves a lot of space to cover some spares bytes).

## 7.1.2.3.12.3.2.2 Memory-Mapping of the BCH Codeword

BCH encoding considers a block of data to protect as a polynomial message M(x). In our standard case, 512 bytes of data (that is, 2 bits = 4096 bits) are seen as a polynomial of degree 2 - 1 = 4095, with parameters ranging from M0 to M4095. For 512 bytes of data, 52 bits are required for 4-bit error correction, and 104 bits are required for 8-bit error correction and 207 bits are required for 16-bit error correction. The ECC is a remainder polynomial R(x) of degree 103 (or 51, depending on the selected mode). The complete codeword C(x) is the concatenation of M(x) and R(x) as shown in Table 7-11.

Table 7-11. Flattened BCH Codeword Mapping (512 Bytes + 104 Bits)

|            | Message M(x)   | ECC R(x)   |    |      |     |    |
|------------|----------------|------------|----|------|-----|----|
| Bit number | M4095          | ...        | M0 | R103 | ... | R0 |

If the message is extended by the addition of spare bytes to be protected by the same ECC, the principle is still valid. For example, a 3-byte extension of the message gives a polynomial message M(x) of degree ((512 + 3) × 8) - 1 = 4119, for a total of 3 + 13 = 16 spare bytes of spare, all protected as part of the same codeword.

The message and the ECC bits are manipulated and mapped in the GPMC byte-oriented system. The ECC bits are stored in:

- GPMC\_BCH\_RESULT0\_i
- GPMC\_BCH\_RESULT1\_i
- GPMC\_BCH\_RESULT2\_i
- GPMC\_BCH\_RESULT3\_i

## 7.1.2.3.12.3.2.3 Memory Mapping of the Data Message

The data message mapping shall follow the following rules:

- Bit endianness within a byte is little-endian, that is, the bytes LS bit is also the lowest-degree polynomial parameter: a byte b7-b0 (with b0 the LS bit) represents a segment of polynomial b7 * x + b6 * x + ... + b0 * x
- The message is mapped in the NAND starting with the highest-order parameters, that is, in the lowest addresses of a NAND page.
- Byte endianness within the NANDs 16-bit words is big endian. This means that the same message mapped in 8- and 16-bit memories has the same content at the same byte address.

The BCH module has no visibility over actual addresses. The most important point is the sequence of data word the BCH sees. However, the NAND page is always scanned incrementally in read and write accesses, and this produces the mapping patterns described in the following.

Table 7-12 and Table 7-13 show the mapping of the same 512-byte vector (typically a BCH message) in the NAND memory space. Note that the byte 'address' is only an offset modulo 512 (200h), since the same page may contain several contiguous 512-byte sectors (BCH blocks). The LSB and MSB are respectively the bits M0 and M(2^12-1) of the codeword mapping given above. In both cases the data vectors are aligned, that is, their boundaries coincide with the RAMs data word boundaries.

Table 7-12. Aligned Message Byte Mapping in 8-bit NAND

| Byte Offset   | 8-Bit Word            |
|---------------|-----------------------|
| 0             | (msb) Byte 511 (1FFh) |
| 1h            | Byte 510 (1FEh)       |
| ⋮             | ⋮                     |
| 1FFh          | Byte 0 (0) (LSB)      |

<!-- image -->

<!-- image -->

Table 7-13. Aligned Message Byte Mapping in 16-bit NAND

| Byte Offset   | 16-Bit Words MSB   | 16-Bit Words LSB      |
|---------------|--------------------|-----------------------|
| 0             | Byte 510 (1FEh)    | (msb) Byte 511 (1FFh) |
| 2h            | Byte 508 (1FCh)    | Byte 509 (1FDh)       |
| ⋮             | ⋮                  | ⋮                     |
| 1FEh          | Byte 0 (0)         | (lsb) Byte 1 (1)      |

Table 7-14 and Table 7-15 show the mapping in memory of arbitrarily-sized messages, starting on access (byte or 16-bit word) boundaries for more clarity. Note that message may actually start and stop on arbitrary nibbles. A nibble is a 4-bit entity. The unused nibbles are not discarded, and they can still be used by the BCH module, but as part of the next message section (for example, on another sectors ECC).

Table 7-14. Aligned Nibble Mapping of Message in 8-bit NAND

|             | 8-Bit Word                    | 8-Bit Word                    |
|-------------|-------------------------------|-------------------------------|
| Byte Offset | 4-Bit Most Significant Nibble | 4-Bit Less Significant Nibble |
| 1           | (MSB) Nibble S-1              | Nibble S-2                    |
| 2           | Nibble S-3                    | Nibble S-4                    |
| ⋮           | ⋮                             | ⋮                             |
| S/2 - 2     | Nibble 3                      | Nibble 2                      |
| S/2 - 1     | Nibble 1                      | Nibble 0 (LSB)                |

Table 7-15. Misaligned Nibble Mapping of Message in 8-bit NAND

|             | 8-Bit Word                    | 8-Bit Word                    |
|-------------|-------------------------------|-------------------------------|
| Byte Offset | 4-Bit Most Significant Nibble | 4-Bit Less Significant Nibble |
| 1           | (MSB) Nibble S-1              | Nibble S-2                    |
| 2           | Nibble S-3                    | Nibble S-4                    |
| ⋮           | ⋮                             | ⋮                             |
| (S+1)/2 - 2 | Nibble 2                      | Nibble 1                      |
| (S+1)/2 - 1 | Nibble 0 (LSB)                |                               |

Table 7-16. Aligned Nibble Mapping of Message in 16-bit NAND

|             | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   |
|-------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| Byte Offset | 4-Bit Most Significant Nibble | 4-Bit Most Significant Nibble | 4-Bit Less Significant Nibble | 4-Bit Less Significant Nibble |
| 0           | Nibble S-3                    | Nibble S-4                    | (MSB) Nibble S-1              | Nibble S-2                    |
| 2           | Nibble S-7                    | Nibble S-8                    | Nibble S-5                    | Nibble S-6                    |
| ⋮           | ⋮                             | ⋮                             | ⋮                             | ⋮                             |
| S/2 - 4     | Nibble 5                      | Nibble 4                      | Nibble 7                      | Nibble 6                      |
| S/2 - 2     | Nibble 1                      | Nibble 0 (LSB)                | Nibble 3                      | Nibble 2                      |

<!-- image -->

Table 7-17. Misaligned Nibble Mapping of Message in 16-bit NAND (1 Unused Nibble)

| Byte Offset   | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   |
|---------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| Byte Offset   | 4-Bit Most Significant Nibble | 4-Bit Most Significant Nibble | 4-Bit Less Significant Nibble | 4-Bit Less Significant Nibble |
| 0             | Nibble S-3                    | Nibble S-4                    | (MSB) Nibble S-1              | Nibble S-2                    |
| 2             | Nibble S-7                    | Nibble S-8                    | Nibble S-5                    | Nibble S-6                    |
| ⋮             | ⋮                             | ⋮                             | ⋮                             | ⋮                             |
| (S+1)/2 - 4   | Nibble 4                      | Nibble 3                      | Nibble 6                      | Nibble 5                      |
| (S+1)/2 - 2   | Nibble 0 (LSB)                |                               | Nibble 2                      | Nibble 1                      |

Table 7-18. Misaligned Nibble Mapping of Message in 16-bit NAND (2 Unused Nibble)

|             | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   |
|-------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| Byte Offset | 4-Bit Most Significant Nibble | 4-Bit Most Significant Nibble | 4-Bit Less Significant Nibble | 4-Bit Less Significant Nibble |
| 0           | Nibble S-3                    | Nibble S-4                    | (MSB) Nibble S-1              | Nibble S-2                    |
| 2           | Nibble S-7                    | Nibble S-8                    | Nibble S-5                    | Nibble S-6                    |
| ⋮           | ⋮                             | ⋮                             | ⋮                             | ⋮                             |
| (S+2)/2 - 4 | Nibble 3                      | Nibble 2                      | Nibble 5                      | Nibble 4                      |
| (S+2)/2 - 2 |                               |                               | Nibble 1                      | Nibble 0 (LSB)                |

Table 7-19. Misaligned Nibble Mapping of Message in 16-bit NAND (3 Unused Nibble)

|             | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   | 16-Bit Word                   |
|-------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| Byte Offset | 4-Bit Most Significant Nibble | 4-Bit Most Significant Nibble | 4-Bit Less Significant Nibble | 4-Bit Less Significant Nibble |
| 0           | Nibble S-3                    | Nibble S-4                    | (MSB) Nibble S-1              | Nibble S-2                    |
| 2           | Nibble S-7                    | Nibble S-8                    | Nibble S-5                    | Nibble S-6                    |
| ⋮           | ⋮                             | ⋮                             | ⋮                             | ⋮                             |
| (S+3)/2 - 4 | Nibble 2                      | Nibble 1                      | Nibble 4                      | Nibble 3                      |
| (S+3)/2 - 2 |                               |                               | Nibble 0 (LSB)                |                               |

Note that many other cases exist than the ones represented above, for example, where the message does not start on a word boundary.

## 7.1.2.3.12.3.2.4 Memory Mapping of the ECC

The ECC (or remainder) is presented by the BCH module as a single 104-bit (or 52-bit), little-endian vector. It is up to the software to fetch those 13 bytes (or 6 bytes) from the modules interface, then store them to the NANDs spare area (page write) or to an intermediate buffer for comparison with the stored ECC (page read). There are no constraints on the ECC mapping inside the spare area: it is a softwarecontrolled operation.

However, it is advised to maintain a coherence in the respective formats of the message or the ECC remainder once they have been read out of the NAND. The error correction algorithm works from the complete codeword (concatenated message and remainder) once an error as been detected. The creation of this codeword should be made as straightforward as possible.

<!-- image -->

## www.ti.com

There are cases where the same NAND access contains both data and the ECC protecting that data. This is the case when the data/ECC boundary (which can be on any nibble) does not coincide with an access boundary. The ECC is calculated on-the-fly following the write. In that case, the write must also contain part of the ECC because it is impossible to insert the ECC on-the-fly. Instead:

- During the initial page write (BCH encoding), the ECC is replaced by dummy bits. The BCH encoder is by definition turned OFF during the ECC section, so the BCH result is unmodified.
- During a second phase, the ECC is written to the correct location, next to the actual data.
- The completed line buffer is then written to the NAND array.

## 7.1.2.3.12.3.2.5 Wrapping Modes

For a given wrapping mode, the module automatically goes through a specific number of sections, as data is being fed into the module. For each section, the BCH core can be enabled (in which case the data is fed to the BCH divider) or not (in which case the BCH simply counts to the end of the section). When enabled, the data is added to the ongoing calculation for a given sector number (for example, number 0).

Wrapping modes are described below. To get a better understanding and see the real-life read and write sequences implemented with each mode, see Section 7.1.2.3.12.3.3.

## For each mode:

- A sequence describes the mode in pseudo-language, with for each section the size and the buffer used for ECC processing (if ON). The programmable lengths are size, size0 and size1.
- A checksum condition is given. If the checksum condition is not respected for a given mode, the modules behavior is unpredictable. S is the number of sectors in the page; size0 and size1 are the section sizes programmed for the mode, in nibbles.

Note that wrapping modes 8, 9, 10, and 11 insert a 1-nibble padding where the BCH processing is OFF. This is intended for t = 4 ECC, where ECC is 6 bytes long and the ECC area is expected to include (at least) 1 unused nibble to remain byte-aligned.

## 7.1.2.3.12.3.2.6 Manual Mode (0x0)

This mode is intended for short sequences, added manually to a given buffer through the software data port input. A complete page may be built out of several such sequences.

To process an arbitrary sequence of 4-bit nibbles, accesses to the software data port shall be made, containing the appropriate data. If the sequence end does not coincide with an access boundary (for example, to process 5 nibbles = 20 bits in 16-bit access mode) and those nibbles need to be skipped, a number of unused nibbles shall be programmed in size1 (in the same example: 5 nibbles to process + 3 to discard = 8 nibbles = exactly 2 x 16-bit accesses: we must program size0 = 5, size1 = 3).

Figure 7-37 shows the manual mode sequence and mapping. In this figure, size and size0 are the same parameter.

Figure 7-37. Manual Mode Sequence and Mapping

<!-- image -->

Section processing sequence:

- One time with buffer
- -size0 nibbles of data, processing ON
- -size1 nibbles of unused data, processing OFF

Checksum: size0 + size1 nibbles must fit in a whole number of accesses.

In the following sections, S is the number of sectors in the page.

## 7.1.2.3.12.3.2.7 Mode 0x1

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- Repeat with buffer 0 to S-1
- -size0 nibbles spare, processing ON
- -size1 nibbles spare, processing OFF

Checksum: Spare area size (nibbles) = S - (size0 + size1)

## 7.1.2.3.12.3.2.8 Mode 0xA (10)

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- Repeat with buffer 0 to S-1
- -size0 nibbles spare, processing ON
- -1 nibble pad spare, processing OFF
- -size1 nibbles spare, processing OFF

Checksum: Spare area size (nibbles) = S - (size0 + 1 + size1)

## 7.1.2.3.12.3.2.9 Mode 0x2

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- Repeat with buffer 0 to S-1
- -size0 nibbles spare, processing OFF
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = S - (size0 + size1)

## 7.1.2.3.12.3.2.10 Mode 0x3

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- One time with buffer 0
- -size0 nibbles spare, processing ON
- Repeat with buffer 0 to S-1
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = size0 + (S - size1)

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 7.1.2.3.12.3.2.11 Mode 0x7

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- One time with buffer 0
- -size0 nibbles spare, processing ON
- Repeat S times (no buffer used)
- -size1 nibbles spare, processing OFF

Checksum: Spare area size (nibbles) = size0 + (S - size1)

## 7.1.2.3.12.3.2.12 Mode 0x8

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- One time with buffer 0
- -size0 nibbles spare, processing ON
- Repeat with buffer 0 to S-1
- -1 nibble padding spare, processing OFF
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = size0 + (S - (1+size1))

## 7.1.2.3.12.3.2.13 Mode 0x4

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- One time (no buffer used)
- -size0 nibbles spare, processing OFF
- Repeat with buffer 0 to S-1
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = size0 + (S - size1)

## 7.1.2.3.12.3.2.14 Mode 0x9

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- One time (no buffer used)
- -size0 nibbles spare, processing OFF
- Repeat with buffer 0 to S-1
- -1 nibble padding spare, processing OFF
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = size0 + (S - (1+size1))

## 7.1.2.3.12.3.2.15 Mode 0x5

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- Repeat with buffer 0 to S-1
- -size0 nibbles spare, processing ON
- Repeat with buffer 0 to S-1
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = S - (size0 + size1)

## 7.1.2.3.12.3.2.16 Mode 0xB (11)

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- Repeat with buffer 0 to S-1
- -size0 nibbles spare, processing ON
- Repeat with buffer 0 to S-1
- -1 nibble padding spare, processing OFF
- -size1 nibbles spare, processing ON

Checksum: Spare area size (nibbles) = S - (size0 + 1 + size1)

## 7.1.2.3.12.3.2.17 Mode 0x6

Page processing sequence:

- Repeat with buffer 0 to S-1
- -512-byte data, processing ON
- Repeat with buffer 0 to S-1
- -size0 nibbles spare, processing ON
- Repeat S times (no buffer used)
- -size1 nibbles spare, processing OFF

Checksum: Spare area size (nibbles) = S - (size0 + size1)

<!-- image -->

www.ti.com

<!-- image -->

## 7.1.2.3.12.3.3 Supported NAND Page Mappings and ECC Schemes

The following rules apply throughout the entire mapping description:

- Main data area (sectors) size is hardcoded to 512 bytes.
- Spare area size is programmable.
- All page sections (of main area data bytes, protected spare bytes, unprotected spare bytes, and ECC) are defined as explained in Section 7.1.2.3.12.3.2.3.

Each one of the following sections shows a NAND page mapping example (per-sector spare mappings, pooled spare mapping, per-sector spare mapping, with ECC separated at the end of the page).

In the mapping diagrams, sections that belong to the same BCH codeword have the same color (blue or green); unprotected sections are not covered (orange) by the BCH scheme.

Below each mapping diagram, a write (encoding) and read (decoding: syndrome generation) sequence is given, with the number of the active buffers at each point in time (yellow). In the inactive zones (grey), no computing is taking place but the data counter is still active.

In Figure 7-38 to Figure 7-40, tables on the left summarize the mode, size0, size1 parameters to program for respectively write and read processing of a page, with the given mapping, where:

- P is the size of spare byte section Protected by the ECC (in nibbles)
- U is the size of spare byte section Unprotected by the ECC (in nibbles)
- E is the size of the ECC itself (in nibbles)
- S is the number of Sectors per page (2 in the current diagrams)

Each time the processing of a BCH block is complete (ECC calculation for write/encoding, syndrome generation for read/decoding, indicated by red arrows), the update pointer is pulsed. Note that the processing for block 0 can be the first or the last to complete, depending on the NAND page mapping and operation (read or write). All examples show a page size of 1kByte + spares, that is, S = 2 sectors of 512 bytes. The same principles can be extended to larger pages by adding more sectors.

The actual BCH codeword size is used during the error location work to restrict the search range: by definition, errors can only happen in the codeword that was actually written to the NAND, and not in the mathematical codeword of n = 2 - 1 = 8191 bits. That codeword (higher-order bits) is all-zero and implicit during computations.

The actual BCH codeword size depends on the mode, on the programmed sizes and on the sector number (all sizes in nibbles):

- Spares mapped and protected per sector (Figure 7-38: see M1-M2-M3-M9-M10):
- -all sectors: (512) + P + E
- Spares pooled and protected by sector 0 (Figure 7-38: see M5-M6):
- -sector 0 codeword: (512) + P + E
- -other sectors: (512) + E
- Unprotected spares (Figure 7-38: see M4-M7-M8-M11-M12):
- -all codewords (512) + E

## 7.1.2.3.12.3.3.1 Per-Sector Spare Mappings

In these schemes (Figure 7-38), each 512-byte sector of the main area has its own dedicated section of the spare area. The spare area of each sector is composed of:

- ECC, which must be located after the data it protects
- other data, which may or may not be protected by the sectors ECC

<!-- image -->

Figure 7-38. NAND Page Mapping and ECC: Per-Sector Schemes

<!-- image -->

<!-- image -->

<!-- image -->

<!-- image -->

<!-- image -->

## 7.1.2.3.12.3.3.2 Pooled Spare Mapping

In these schemes (Figure 7-39), the spare area is pooled for the page.

- The ECC of each sector is aligned at the end of the spare area.
- The non-ECC spare data may or may not be covered by the ECC of sector 0

## Figure 7-39. NAND Page Mapping and ECC: Pooled Spare Schemes

<!-- image -->

<!-- image -->

|       |   Mode | Size0   | Size1   |
|-------|--------|---------|---------|
| Write |      6 | 0       | U/S +E  |
| Read  |      4 | U       | E       |

<!-- image -->

<!-- image -->

<!-- image -->

## 7.1.2.3.12.3.3.3 Per-Sector Spare Mapping, With ECC Separated at the End of the Page

In these schemes (Figure 7-40), each 512-byte sector of the main area is associated with two sections of the spare area.

- ECC section, all aligned at the end of the page
- other data section, aligned before the ECCs, each of which may or may not be protected by its sectors ECC

|       |   Mode | Size0   | Size1   |
|-------|--------|---------|---------|
| Write |      6 | P       | E       |
| Read  |      5 | P       | E       |

<!-- image -->

|       |   Mode | Size0   | Size1   |
|-------|--------|---------|---------|
| Write |      6 | P       | 1+E     |
| Read  |     11 | P       | E       |

<!-- image -->

|       |   Mode | Size0   | Size1   |
|-------|--------|---------|---------|
| Write |      6 | 0       | U+E     |
| Read  |      4 | SU      | E       |

Figure 7-40. NAND Page Mapping and ECC: Per-Sector Schemes, with Separate ECC

<!-- image -->

|       |   Mode | Size0   | Size1   |
|-------|--------|---------|---------|
| Write |      6 | 0       | U+1+E   |
| Read  |      9 | SU      | E       |

<!-- image -->

<!-- image -->

www.ti.com

## 7.1.2.3.12.4 Prefetch and Write-Posting Engine

NAND device data access cycles are usually much slower than the MPU system frequency; such NAND read or write accesses issued by the processor will impact the overall system performance, especially considering long read or write sequences required for NAND page loading or programming. To minimize this effect on system performance, the GPMC includes a prefetch and write-posting engine, which can be used to read from or write to any chip-select location in a buffered manner.

The prefetch and write-posting engine is a simplified embedded-access requester that presents requests to the access engine on a user-defined chip-select target. The access engine interleaves these requests with any request coming from the L3 interface; as a default the prefetch and write-posting engine has the lowest priority.

The prefetch and write-posting engine is dedicated to data-stream access (as opposed to random data access); thus, it is primarily dedicated to NAND support. The engine does not include an address generator; the request is limited to chip-select target identification. It includes a 64-byte FIFO associated with a DMA request synchronization line, for optimal DMA-based use.

The prefetch and write-posting engine uses an embedded 64 bytes (32 16-bit word) FIFO to prefetch data from the NAND device in read mode (prefetch mode) or to store host data to be programmed into the NAND device in write mode (write-posting mode). The FIFO draining and filling (read and write) can be controlled either by the MPU through interrupt synchronization (an interrupt is triggered whenever a programmable threshold is reached) or the sDMA through DMA request synchronization, with a programmable request byte size in both prefetch or posting mode.

The prefetch and write-posting engine includes a single memory pool. Therefore, only one mode, read or write, can be used at any given time. In other words, the prefetch and write-posting engine is a singlecontext engine that can be allocated to only one chip-select at a time for a read prefetch or a write-posting process.

The engine does not support atomic command and address phase programming and is limited to linear memory read or write access. In consequence, it is limited to NAND data-stream access. The engine relies on the MPU NAND software driver to control block and page opening with the correct data address pointer initialization, before the engine can read from or write to the NAND memory device.

Once started, the engine data reads and writes sequencing is solely based on FIFO location availability and until the total programmed number of bytes is read or written.

Any host-concurrent accesses to a different chip-select are correctly interleaved with ongoing engine accesses. The engine has the lowest priority access so that host accesses to a different chip-select do not suffer a large latency.

A round-robin arbitration scheme can be enabled to ensure minimum bandwidth to the prefetch and writeposting engine in the case of back-to-back direct memory requests to a different chip-select. If the GPMC\_PREFETCH\_CONFIG1[23] PFPWENROUNDROBIN bit is enabled, the arbitration grants the prefetch and write posting engine access to the GPMC bus for a number of requests programmed in the GPMC\_PREFETCH\_CONFIG1[19-16] PFPWWEIGHTEDPRIO field.

The prefetch/write-posting engine read or write request is routed to the access engine with the chip-select destination ID. After the required arbitration phase, the access engine processes the request as a single access with the data access size equal to the device size specified in the corresponding chip-select configuration.

The destination chip-select configuration must be set to the NAND protocol-compatible configuration for which address lines are not used (the address bus is not changed from its current value). Selecting a different chip-select configuration can produce undefined behavior.

## 7.1.2.3.12.4.1 General Facts About the Engine Configuration

The engine can be configured only if the GPMC\_PREFETCH\_CONTROL[0] STARTENGINE bit is deasserted.

The engine must be correctly configured in prefetch or write-posting mode and must be linked to a NAND chip-select before it can be started. The chip-select is linked using the GPMC\_PREFETCH\_CONFIG1[2624] ENGINECSSELECTOR field.

In both prefetch and write-posting modes, the engine respectivelly uses byte or 16-bit word access requests for an 8- or 16-bit wide NAND device attached to the linked chip-select. The FIFOTHRESHOLD and TRANSFERCOUNT fields must be programmed accordingly as a number of bytes or a number of 16bit word.

When the GPMC\_PREFETCH\_CONFIG1[7] ENABLEENGINE bit is set, the FIFO entry on the L3 interconnect port side is accessible at any address in the associated chip-select memory region. When the ENABLEENGINE bit is set, any host access to this chip-select is rerouted to the FIFO input. Directly accessing the NAND device linked to this chip-select from the host is still possible through these registers:

- GPMC\_NAND\_COMMAND\_i
- GPMC\_NAND\_ADDRESS\_i
- GPMC\_NAND\_DATA\_i

The FIFO entry on the L3 interconnect port can be accessed with Byte, 16-bit word, or 32-bit word access size, according to little-endian format, even though the FIFO input is 32-bit wide.

The FIFO control is made easier through the use of interrupts or DMA requests associated with the FIFOTHRESHOLD bit field. The GPMC\_PREFETCH\_STATUS[30-24] FIFOPOINTER field monitors the number of available bytes to be read in prefetch mode or the number of free empty slots which can be written in write-posting mode. The GPMC\_PREFETCH\_STATUS[13-0] COUNTVALUE field monitors the number of remaining bytes to be read or written by the engine according to the TRANSFERCOUNT value. The FIFOPOINTER and COUNTVALUE bit fields are always expressed as a number of bytes even if a 16-bit wide NAND device is attached to the linked chip-select.

In prefetch mode, when the FIFOPOINTER equals 0, that is, the FIFO is empty, a host read access receives the byte last read from the FIFO as its response. In case of 32-bit word or 16-bit word read accesses, the last byte read from the FIFO is copied the required number of times to fit the requested word size. In write-posting mode, when the FIFOPOINTER equals 0, that is, the FIFO is full, a host write overwrites the last FIFO byte location. There is no underflow or overflow error reporting in the GPMC.

<!-- image -->

<!-- image -->

www.ti.com

## 7.1.2.3.12.4.2 Prefetch Mode

The prefetch mode is selected when the GPMC\_PREFETCH\_CONFIG1[0] ACCESSMODE bit is cleared.

The MPU NAND software driver must issue the block and page opening (READ) command with the correct data address pointer initialization before the engine can be started to read from the NAND memory device. The engine is started by asserting the GPMC\_PREFETCH\_CONTROL[0] STARTENGINE bit. The STARTENGINE bit automatically clears when the prefetch process completes.

If required, the ECC calculator engine must be initialized (i.e., reset, configured, and enabled) before the prefetch engine is started, so that the ECC is correctly computed on all data read by the prefetch engine.

When the GPMC\_PREFETCH\_CONFIG1[3] SYNCHROMODE bit is cleared, the prefetch engine starts requesting data as soon as the STARTENGINE bit is set. If using this configuration, the host must monitor the NAND device-ready pin so that it only sets the STARTENGINE bit when the NAND device is in a ready state, meaning data is valid for prefetching.

When the SYNCHROMODE bit is set, the prefetch engine starts requesting data when an active to inactive wait signal transition is detected. The transition detector must be cleared before any transition detection; see Section 7.1.2.3.12.2.2. The GPMC\_PREFETCH\_CONFIG1[5-4] WAITPINSELECTOR field selects which gpmc\_wait pin edge detector triggers the prefetch engine in this synchronized mode.

If the STARTENGINE bit is set after the NAND address phase (page opening command), the engine is effectively started only after the actual NAND address phase completion. To prevent GPMC stall during this NAND address phase, set the STARTENGINE bit field before NAND address phase completion when in synchronized mode. The prefetch engine will start when an active to inactive wait signal transition is detected. The STARTENGINE bit is automatically cleared on prefetch process completion.

The prefetch engine issues a read request to fill the FIFO with the amount of data specified by GPMC\_PREFETCH\_CONFIG2[13-0] TRANSFERCOUNT field.

Table 7-20 describes the prefetch mode configuration.

Table 7-20. Prefetch Mode Configuration

| Bit Field             | Register              | Value   | Comments                                                                                     |
|-----------------------|-----------------------|---------|----------------------------------------------------------------------------------------------|
| STARTENGINE           | GPMC_PREFETCH_CONTROL | 0       | Prefetch engine can be configured only if STARTENGINE is cleared to 0.                       |
| ENGINECSSELECTOR      | GPMC_PREFETCH_CONFIG1 | 0 to 3h | Selects the chip-select associated with a NAND device where the prefetch engine is active.   |
| ACCESSMODE            | GPMC_PREFETCH_CONFIG1 | 0       | Selects prefetch mode                                                                        |
| FIFOTHRESHOLD         | GPMC_PREFETCH_CONFIG1 |         | Selects the maximum number of bytes read or written by the host on DMA or interrupt request  |
| TRANSFERCOUNT         | GPMC_PREFETCH_CONFIG1 |         | Selects the number of bytes to be read or written by the engine to the selected chip- select |
| SYNCHROMODE           | GPMC_PREFETCH_CONFIG1 | 0/1     | Selects when the engine starts the access to the chip-select                                 |
| WAITPINSELECT         | GPMC_PREFETCH_CONFIG1 | 0 to 1  | Selects wait pin edge detector (if GPMC_PREFETCH_CONFIG1[3] SYNCHROMODE = 1)                 |
| ENABLEOPTIMIZEDACCESS | GPMC_PREFETCH_CONFIG1 | 0/1     | See Section 7.1.2.3.12.4.6                                                                   |
| CYCLEOPTIMIZATION     | GPMC_PREFETCH_CONFIG1 |         | Number of clock cycle removed to timing parameters                                           |
| ENABLEENGINE          | GPMC_PREFETCH_CONFIG1 | 1       | Engine enabled                                                                               |
| STARTENGINE           | GPMC_PREFETCH_CONFIG1 | 1       | Starts the prefetch engine                                                                   |

## 7.1.2.3.12.4.3 FIFO Control in Prefetch Mode

The FIFO can be drained directly by the MPU or by an eDMA channel.

In MPU draining mode, the FIFO status can be monitored through the GPMC\_PREFETCH\_STATUS[3024] FIFOPOINTER field or through the GPMC\_PREFETCH\_STATUS[16] FIFOTHRESHOLDSTATUS bit. The FIFOPOINTER indicates the current number of available data to be read; FIFOTHRESHOLDSTATUS set to 1 indicates that at least FIFOTHRESHOLD bytes are available from the FIFO.

An interrupt can be triggered by the GPMC if the GPMC\_IRQENABLE[0] FIFOEVENTENABLE bit is set. The FIFO interrupt event is logged, and the GPMC\_IRQSTATUS[0] FIFOEVENTSTATUS bit is set. To clear the interrupt, the MPU must read all the available bytes, or at least enough bytes to get below the programmed FIFO threshold, and the FIFOEVENTSTATUS bit must be cleared to enable further interrupt events. The FIFOEVENTSTATUS bit must always be reset prior to asserting the FIFOEVENTENABLE bit to clear any out-of-date logged interrupt event. This interrupt generation must be enabled after enabling the STARTENGINE bit.

Prefetch completion can be monitored through the GPMC\_PREFETCH\_STATUS[13-0] COUNTVALUE field. COUNTVALUE indicates the number of currently remaining data to be requested according to the TRANSFERCOUNT value. An interrupt can be triggered by the GPMC when the prefetch process is complete (that is, COUNTVALUE equals 0) if the GPMC\_IRQENABLE[1]

TERMINALCOUNTEVENTENABLE bit is set. At prefetch completion, the TERMINALCOUNT interrupt event is also logged, and the GPMC\_IRQSTATUS[1] TERMINALCOUNTSTATUS bit is set. To clear the interrupt, the MPU must clear the TERMINALCOUNTSTATUS bit. The TERMINALCOUNTSTATUS bit must always be cleared prior to asserting the TERMINALCOUNTEVENTENABLE bit to clear any out-ofdate logged interrupt event.

NOTE:

The COUNTVALUE value is only valid when the prefetch engine is active (started), and an interrupt is only triggered when COUNTVALUE reaches 0, that is, when the prefetch engine automatically goes from an active to an inactive state.

The number of bytes to be prefetched (programmed in TRANSFERCOUNT) must be a multiple of the programmed FIFOTHRESHOLD to trigger the correct number of interrupts allowing a deterministic and transparent FIFO control. If this guideline is respected, the number of ISR accesses is always required and the FIFO is always empty after the last interrupt is trigerred. In other cases, the TERMINALCOUNT interrupt must be used to read the remaining bytes in the FIFO (the number of remaining bytes being lower than the FIFOTHRESHOLD value).

In DMA draining mode, the GPMC\_PREFETCH\_CONFIG1[2] DMAMODE bit must be set so that the GPMC issues a DMA hardware request when at least FIFOTHRESHOLD bytes are ready to be read from the FIFO. The DMA channel owning this DMA request must be programmed so that the number of bytes programmed in FIFOTHRESHOLD is read from the FIFO during the DMA request process. The DMA request is kept active until this number of bytes has effectively been read from the FIFO, and no other DMA request can be issued until the ongoing active request is complete.

In prefetch mode, the TERMINALCOUNT event is also a source of DMA requests if the number of bytes to be prefetched is not a multiple of FIFOTHRESHOLD, the remaining bytes in the FIFO can be read by the DMA channel using the last DMA request. This assumes that the number of remaining bytes to be read is known and controlled through the DMA channel programming model.

Any potentially active DMA request is cleared when the prefetch engine goes from inactive to active prefetch (the STARTENGINE bit is set to 1). The associated DMA channel must always be enabled by the MPU after setting the STARTENGINE bit so that the out-of-date active DMA request does not trigger spurious DMA transfers.

<!-- image -->

<!-- image -->

## 7.1.2.3.12.4.4 Write-Posting Mode

The write-posting mode is selected when the GPMC\_PREFETCH\_CONFIG1[0] ACCESSMODE bit is set.

The MPU NAND software driver must issue the correct address pointer initialization command (page program) before the engine can start writing data into the NAND memory device. The engine starts when the GPMC\_PREFETCH\_CONTROL[0] STARTENGINE bit is set to 1. The STARTENGINE bit clears automatically when posting completes. When all data have been written to the NAND memory device, the MPU NAND software driver must issue the second cycle program command and monitor the status for programming process completion (adding ECC handling, if required).

If used, the ECC calculator engine must be started (configured, reset, and enabled) before the posting engine is started so that the ECC parities are properly calculated on all data written by the prefetch engine to the associated chip-select.

In write-posting mode, the GPMC\_PREFETCH\_CONFIG1[3] SYNCHROMODE bit must be cleared so that posting starts as soon as the STARTENGINE bit is set and the FIFO is not empty.

If the STARTENGINE bit is set after the NAND address phase (page program command), the STARTENGINE setting is effective only after the actual NAND command completion. To prevent GPMC stall during this NAND command phase, set the STARTENGINE bit field before the NAND address completion and ensure that the associated DMA channel is enabled after the NAND address phase.

The posting engine issues a write request when valid data are available from the FIFO and until the programmed GPMC\_PREFETCH\_CONFIG2[13-0] TRANSFERCOUNT accesses have been completed.

The STARTENGINE bit clears automatically when posting completes. When all data have been written to the NAND memory device, the MPU NAND software driver must issue the second cycle program command and monitor the status for programming process completion. The closing program command phase must only be issued when the full NAND page has been written into the NAND flash write buffer, including the spare area data and the ECC parities, if used.

## Write-Posting Mode Configuration

<!-- image -->

| Bit Field             | Register              | Value   | Comments                                                                                          |
|-----------------------|-----------------------|---------|---------------------------------------------------------------------------------------------------|
| STARTENGINE           | GPMC_PREFETCH_CONTROL | 0       | Write-posting engine can be configured only if STARTENGINE is cleared to 0.                       |
| ENGINECSSELECTOR      | GPMC_PREFETCH_CONFIG1 | 0 to 3h | Selects the chip-select associated with a NAND device where the prefetch engine is active         |
| ACCESSMODE            | GPMC_PREFETCH_CONFIG1 | 1       | Selects write-posting mode                                                                        |
| FIFOTHRESHOLD         | GPMC_PREFETCH_CONFIG1 |         | Selects the maximum number of bytes read or written by the host on DMA or interrupt request       |
| TRANSFERCOUNT         | GPMC_PREFETCH_CONFIG2 |         | Selects the number of bytes to be read or written by the engine from/to the selected chip- select |
| SYNCHROMODE           | GPMC_PREFETCH_CONFIG1 | 0       | Engine starts the access to chip-select as soon as STARTENGINE is set.                            |
| ENABLEOPTIMIZEDACCESS | GPMC_PREFETCH_CONFIG1 | 0/1     | See Section 7.1.2.3.12.4.6                                                                        |
| CYCLEOPTIMIZATION     | GPMC_PREFETCH_CONFIG  |         |                                                                                                   |
| ENABLEENGINE          | GPMC_PREFETCH_CONFIG1 | 1       | Engine enabled                                                                                    |
| STARTENGINE           | GPMC_PREFETCH_CONTROL | 1       | Starts the prefetch engine                                                                        |

## 7.1.2.3.12.4.5 FIFO Control in Write-Posting Mode

The FIFO can be filled directly by the MPU or by an sDMA channel.

In MPU filling mode, the FIFO status can be monitored through the FIFOPOINTER or through the GPMC\_PREFETCH\_STATUS[16] FIFOTHRESHOLDSTATUS bit. FIFOPOINTER indicates the current number of available free byte places in the FIFO, and the FIFOTHRESHOLDSTATUS bit, when set, indicates that at least FIFOTHRESHOLD free byte places are available in the FIFO.

An interrupt can be issued by the GPMC if the GPMC\_IRQENABLE[0] FIFOEVENTENABLE bit is set. When the interrupt is fired, the GPMC\_IRQSTATUS[0] FIFOEVENTSTATUS bit is set. To clear the interrupt, the MPU must write enough bytes to fill the FIFO, or enough bytes to get below the programmed threshold, and the FIFOEVENTSTATUS bit must be cleared to get further interrupt events. The FIFOEVENTSTATUS bit must always be cleared prior to asserting the FIFOEVENTENABLE bit to clear any out-of-date logged interrupt event. This interrupt must be enabled after enabling the STARTENGINE bit

The posting completion can be monitored through the GPMC\_PREFETCH\_STATUS[13-0] COUNTVALUE field. COUNTVALUE indicates the current number of remaining data to be written based on the TRANSFERCOUNT value. An interrupt is issued by the GPMC when the write-posting process completes (that is, COUNTVALUE equal to 0) if the GPMC\_IRQENABLE[1] TERMINALCOUNTEVENTENABLE bit is set. When the interrupt is fired, the GPMC\_IRQSTATUS[1] TERMINALCOUNTSTATUS bit is set. To clear the interrupt, the MPU must clear the TERMINALCOUNTSTATUS bit. The TERMINALCOUNTSTATUS bit must always be cleared prior to asserting the TERMINALCOUNTEVENTENABLE bit to clear any out-ofdate logged interrupt event.

NOTE:

The COUNTVALUE value is only valid if the write-posting engine is active and started, and an interrupt is only issued when COUNTVALUE reaches 0, that is, when the posting engine automatically goes from active to inactive.

In DMA filling mode, the DMAMode bit field in the GPMC\_PREFETCH\_CONFIG1[2] DMAMODE bit must be set so that the GPMC issues a DMA hardware request when at least FIFOTHRESHOLD bytes-free places are available in the FIFO. The DMA channel owning this DMA request must be programmed so that a number of bytes equal to the value programmed in the FIFOTHRESHOLD bit field are written into the FIFO during the DMA access. The DMA request remains active until the associated number of bytes has effectively been written into the FIFO, and no other DMA request can be issued until the ongoing active request has been completed.

Any potentially active DMA request is cleared when the prefetch engine goes from inactive to active prefetch (STARTENGINE set to 1). The associated DMA channel must always be enabled by the MPU after setting the STARTENGINE bit so that an out-of-date active DMA request does not trigger spurious DMA transfers.

In write-posting mode, the DMA or the MPU fill the FIFO with no consideration to the associated byte enables. Any byte stored in the FIFO is written into the memory device.

<!-- image -->

<!-- image -->

www.ti.com

## 7.1.2.3.12.4.6 Optimizing NAND Access Using the Prefetch and Write-Posting Engine

Access time to a NAND memory device can be optimized for back-to-back accesses if the associated CSn signal is not deasserted between accesses. The GPMC access engine can track prefetch engine accesses to optimize the access timing parameter programmed for the allocated chip-select, if no accesses to other chip-selects (that is, interleaved accesses) occur. Similarly, the access engine also eliminates the CYCLE2CYCLEDELAY even if CYCLE2CYCLESAMECSEN is set. This capability is limited to the prefetch and write-posting engine accesses, and MPU accesses to a NAND memory device (through the defined chip-select memory region or through the GPMC\_NAND\_DATA\_i are never optimized.

The GPMC\_PREFETCH\_CONFIG1[27] ENABLEOPTIMIZEDACCESS bit must be set to enable optimized accesses. To optimize access time, the GPMC\_PREFETCH\_CONFIG1[30-28] CYCLEOPTIMIZATION field defines the number of GPMC\_FCLK cycles to be suppressed from the RDCYCLETIME, WRCYCLETIME, RDACCESSTIME, WRACCESSTIME, CSOFFTIME, ADVOFFTIME, OEOFFTIME, and WEOFFTIME timing parameters.

NAND Read Cycle Optimization Timing Description, in the case of back-to-back accesses to the NAND flash through the prefetch engine, CYCLE2CYCLESAMECSEN is forced to 0 when using optimized accesses. The first access uses the regular timing settings for this chip-select. All accesses after this one use settings reduced by x clock cycles, x being defined by the GPMC\_PREFETCH\_CONFIG1[30-28] CYCLEOPTIMIZATION field.

<!-- image -->

<!-- image -->

## 7.1.2.3.12.4.7 Interleaved Accesses Between Prefetch and Write-Posting Engine and Other Chip-Selects

Any on-going read or write access from the prefetch and write-posting engine is completed before an access to any other chip-select can be initiated. As a default, the arbiter uses a fixed-priority algorithm, and the prefetch and write-posting engine has the lowest priority. The maximum latency added to access starting time in this case equals the RDCYCLETIME or WRCYCLETIME (optimized or not) plus the requested BUSTURNAROUND delay for bus turnaround completion programmed for the chip-select to which the NAND device is connected to.

Alternatively, a round-robin arbitration can be used to prioritize accesses to the external bus. This arbitration scheme is enabled by setting the GPMC\_PREFETCH\_CONFIG1[23] PFPWENROUNDROBIN bit. When a request to another chip-select is received while the prefetch and write-posting engine is active, priority is given to the new request. The request processed thereafter is the prefetch and write-posting engine request, even if another interconnect request is passed in the mean time. The engine keeps control of the bus for an additional number of requests programmed in the GPMC\_PREFETCH\_CONFIG1[19-16] PFPWWEIGHTEDPRIO bit field. Control is then passed to the direct interconnect request.

As an example, the round-robin arbitration scheme is selected with PFPWWEIGHTEDPRIO set to 2h. Considering the prefetch and write-posting engine and the interconnect interface are always requesting access to the external interface, the GPMC grants priority to the direct interconnect access for one request. The GPMC then grants priority to the engine for three requests, and finnaly back to the direct interconnect access, until the arbiter is reset when one of the two initiators stops initiating requests.