## 4.4 Functional Description

## 4.4.1 PRU Cores

The PRU is a processor optimized for performing embedded tasks that require manipulation of packed memory mapped data structures, handling of system events that have tight real-time constraints and interfacing with systems external to the SoC. The PRU is both very small and very efficient at handling such tasks.

The major attributes of the PRU are as follows.

| Attribute                     | Value                                                                                                                                                                   |                                 |
|-------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------|
| IO Architecture               | Load / Store                                                                                                                                                            |                                 |
| Data Flow Architecture        | Register to Register                                                                                                                                                    |                                 |
| Core Level Bus Architecture   |                                                                                                                                                                         |                                 |
| Type                          | 4-Bus Harvard (1 Instruction, 3 Data) 32-Bit 32-Bit                                                                                                                     |                                 |
| Instruction I/F               |                                                                                                                                                                         |                                 |
| Memory I/F 0                  |                                                                                                                                                                         |                                 |
| Memory I/F 1                  | 32-Bit                                                                                                                                                                  |                                 |
| Execution Model               |                                                                                                                                                                         |                                 |
| Issue Type                    | Scalar                                                                                                                                                                  |                                 |
| Pipelining                    | None (Purposefully)                                                                                                                                                     |                                 |
| Ordering                      | In Order                                                                                                                                                                |                                 |
| ALU Type                      | Unsigned Integer                                                                                                                                                        |                                 |
| Registers                     |                                                                                                                                                                         |                                 |
| General Purpose (GP)          | 30 (R1 - R30)                                                                                                                                                           |                                 |
| External Status               | 1 (R31)                                                                                                                                                                 |                                 |
| GP / Indexing                 | 1 (R0)                                                                                                                                                                  |                                 |
| Addressability in Instruction | Bit, Byte (8-bit), Halfword (16-bit), Word (32-bit), Pointer                                                                                                            |                                 |
| Addressing                    |                                                                                                                                                                         |                                 |
|                               | Register Base + 8-bit Immediate Offset Register Base with auto increment / decrement Constant Table Base + Register Offset Constant Table Base + 8-bit Immediate Offset |                                 |
|                               | Provides 32-bit slave with three regions: • Instruction RAM                                                                                                             |                                 |
|                               | • Control / Status registers • Debug access to internal registers (R0-R31) and                                                                                          |                                 |
| Instruction                   | 32-Bits                                                                                                                                                                 |                                 |
|                               | 32-Bits                                                                                                                                                                 |                                 |
| Data Path                     |                                                                                                                                                                         |                                 |
| Width                         |                                                                                                                                                                         |                                 |
|                               | constant                                                                                                                                                                |                                 |
| Accessibility to Internal PRU |                                                                                                                                                                         |                                 |
|                               | table                                                                                                                                                                   |                                 |
| Structures                    |                                                                                                                                                                         |                                 |
| Width                         |                                                                                                                                                                         |                                 |
|                               | Constant Table Base with auto increment / decrement                                                                                                                     | Register Base + Register Offset |
| Load / Store -                |                                                                                                                                                                         |                                 |
| Load Immediate                |                                                                                                                                                                         |                                 |
|                               | Memory                                                                                                                                                                  |                                 |
|                               | 16-bit Immediate                                                                                                                                                        |                                 |
|                               | Modes                                                                                                                                                                   |                                 |

<!-- image -->

<!-- image -->

www.ti.com

The processor is based on a four-bus architecture which allows instructions to be fetched and executed concurrently with data transfers. In addition, an input is provided in order to allow external status information to be reflected in the internal processor status register. Figure 4-5 shows a block diagram of the processing element and the associated instruction RAM/ROM that contains the code that is to be executed.

Figure 4-5. PRU Block Diagram

<!-- image -->

## 4.4.1.1 Constants Table

The PRU Constants Table is a structure of hard-coded memory addresses for commonly used peripherals and memories. The Constants table exists to more efficiently load/store data to these commonly accessed addresses by:

- Reduce a PRU instruction by not needing to pre-load an address into the internal register file before loading or storing data to a memory address
- Maximize the usage of the PRU register file for embedded processing applications by moving many of the commonly used constants or deterministically calculated base addresses from the internal register file to an external table.

Table 4-9. PRU0/1 Constants Table

|   Entry No. | Region Pointed To     | Value [31:0]   |
|-------------|-----------------------|----------------|
|           0 | PRU-ICSS INTC (local) | 0x0002_0000    |
|           1 | DMTIMER2              | 0x4804_0000    |
|           2 | I2C1                  | 0x4802_A000    |
|           3 | PRU-ICSS eCAP (local) | 0x0003_0000    |
|           4 | PRU-ICSS CFG (local)  | 0x0002_6000    |

Table 4-9. PRU0/1 Constants Table (continued)

|   Entry No. | Region Pointed To                | Value [31:0]                          |
|-------------|----------------------------------|---------------------------------------|
|           5 | MMCHS 0                          | 0x4806_0000                           |
|           6 | MCSPI 0                          | 0x4803_0000                           |
|           7 | PRU-ICSS UART0 (local)           | 0x0002_8000                           |
|           8 | McASP0 DMA                       | 0x4600_0000                           |
|           9 | GEMAC                            | 0x4A10_0000                           |
|          10 | Reserved                         | 0x4831_8000                           |
|          11 | UART1                            | 0x4802_2000                           |
|          12 | UART2                            | 0x4802_4000                           |
|          13 | Reserved                         | 0x4831_0000                           |
|          14 | DCAN0                            | 0x481C_C000                           |
|          15 | DCAN1                            | 0x481D_0000                           |
|          16 | MCSPI 1                          | 0x481A_0000                           |
|          17 | I2C2                             | 0x4819_C000                           |
|          18 | eHRPWM1/eCAP1/eQEP1              | 0x4830_0000                           |
|          19 | eHRPWM2/eCAP2/eQEP2              | 0x4830_2000                           |
|          20 | eHRPWM3/eCAP3/eQEP3              | 0x4830_4000                           |
|          21 | PRU-ICSS MDIO (local)            | 0x0003_2400                           |
|          22 | Mailbox 0                        | 0x480C_8000                           |
|          23 | Spinlock                         | 0x480C_A000                           |
|          24 | PRU-ICSS PRU0/1 Data RAM (local) | 0x0000_0n00, n = c24_blk_index[3:0]   |
|          25 | PRU-ICSS PRU1/0 Data RAM (local) | 0x0000_2n00, n = c25_blk_index[3:0]   |
|          26 | PRU-ICSS IEP (local)             | 0x0002_En00, n = c26_blk_index[3:0]   |
|          27 | PRU-ICSS MII_RT (local)          | 0x0003_2n00, n = c27_blk_index[3:0]   |
|          28 | PRU-ICSS Shared RAM (local)      | 0x00nn_nn00, nnnn = c28_pointer[15:0] |
|          29 | TPCC                             | 0x49nn_nn00, nnnn = c29_pointer[15:0] |
|          30 | L3 OCMC0                         | 0x40nn_nn00, nnnn = c30_pointer[15:0] |
|          31 | EMIF0 DDR Base                   | 0x80nn_nn00, nnnn = c31_pointer[15:0] |

NOTE:

Addresses in constants entries 24-31 are partially programmable. Their programmable bit field (for example, c24\_blk\_index[3:0]) is programmable through the PRU CTRL register space. As a general rule, the PRU should configure this field before using the partially programmable constant entries.

## 4.4.1.2 PRU Module Interface to PRU I/Os and INTC

The PRU module interface consists of the PRU internal registers 30 and 31 (R30 and R31). Figure 4-6 shows the PRU module interface and the functionality of R30 and R31. The register R31 serves as an interface with the dedicated PRU general purpose input (GPI) pins and PRU interrupt controller (INTC). Reading R31 returns status information from the GPI pins and INTC via the PRU Real-Time Status Interface. Writing to R31 generates PRU system events via the PRU Event Interface. The register R30 serves as an interface with the dedicated PRU general purpose output (GPO) pins. The R30/R31 GPO or GPI register content changes depending on the selected configuration (such as MII\_RT, Parallel Capture, Shift Out, and so forth). See the subsequent sections for more details.

<!-- image -->

<!-- image -->

www.ti.com

Figure 4-6. PRU Module Interface

<!-- image -->

## 4.4.1.2.1 Real-Time Status Interface Mapping (R31): Interrupt Events Input

The PRU Real-Time Status Interface directly feeds information into register 31 (R31) of the PRU's internal register file. The firmware on the PRU uses the status information to make decisions during execution. The status interface is comprised of signals from different modules inside of the PRU-ICSS which require some level of interaction with the PRU. More details on the Host interrupts imported into bit 30 and 31 of register R31 of both the PRUs is provided in Section 4.4.2, Interrupt Controller (INTC) .

Table 4-10. Real-Time Status Interface Mapping (R31) Field Descriptions

| Bit   | Field                    | Value   | Description                                            |
|-------|--------------------------|---------|--------------------------------------------------------|
| 31    | pru_intr_in[1]           |         | PRU Host Interrupt 1 from local INTC                   |
| 30    | pru_intr_in[0]           |         | PRU Host Interrupt 0 from local INTC                   |
| 29-0  | pru<n>_r31_status[29: 0] |         | Status inputs from primary input via Enhanced GPI port |

## 4.4.1.2.2 Event Interface Mapping (R31): PRU System Events

This PRU Event Interface directly feeds pulsed event information out of the PRU's internal ALU. These events are exported out of the PRU-ICSS and need to be connected to the system event controller at the SoC level. The event interface can be used by the firmware to create interrupts from the PRU to the Host processor.

Figure 4-7. Event Interface Mapping (R31)

<!-- image -->

Table 4-11. Event Interface Mapping (R31) Field Descriptions

| Bit   | Field                 | Value   | Description                    |
|-------|-----------------------|---------|--------------------------------|
| 31-6  | Reserved              |         |                                |
| 5     | pru<n>_r31_vec_ valid |         | Valid strobe for vector output |
| 4     | Reserved              |         |                                |
| 3-0   | pru<n>_r31_vec[3 :0]  |         | Vector output                  |

Simultaneously writing a '1' to pru&lt;n&gt;\_r31\_vec\_valid (R31 bit 5) and a channel number from 0-15 to pru&lt;n&gt;\_r31\_vec[3:0] (R31 bits 3:0) creates a pulse on the output of the corresponding pr1\_pru\_mst\_intr[x]\_intr\_req INTC system event (Table 4-22). For example, writing '100000' will generate a pulse on pr1\_pru\_mst\_intr[0]\_intr\_req, writing '100001' will generate a pulse on pr1\_pru\_mst\_intr[1]\_intr\_req, and so on to where writing '101111' will generate a pulse on pr1\_pru\_mst\_intr[15]\_intr\_req and writing '0xxxxx' will not generate any system event pulses. The output values from both PRU cores in a subsystem are ORed together.

The output channels 0-15 are connected to the PRU-ICSS INTC system events 16-31, respectively. This allows the PRU to assert one of the system events 16-31 by writing to its own R31 register. The system event is used to either post a completion event to one of the host CPUs (ARM) or to signal the other PRU. The host to be signaled is determined by the system event to interrupt channel mapping (programmable). The 16 events are named as pr1\_pru\_mst\_intr&lt;15:0&gt;\_intr\_req. For more details, see Section 4.4.2, Interrupt Controller (INTC) .

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 4.4.1.2.3 General-Purpose Inputs (R31): Enhanced PRU GP Module

The PRU-ICSS implements an enhanced General-Purpose Input/Output (GPIO) module that supports the following general-purpose input modes: direct input, 16-bit parallel capture, 28-bit serial shift in, and MII\_RT. Register R31 serves as an interface with the general purpose inputs.

Table 4-12 describes the input modes in detail. Note each PRU core can only be configured for one GPI mode at a time. Each mode uses the same R31 signals and internal register bits for different purposes. A summary is found in Table 4-13.

Table 4-12. PRU R31 (GPI) Modes

| Mode                    | Function                                                                                                                                                                                                                           | Configuration                                                                                                                                  |
|-------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------|
| Direct input            | GPI[0:29] feeds directly into the PRU R31                                                                                                                                                                                          | Default mode                                                                                                                                   |
| 16-bit parallel capture | DATAIN[0:15] is captured by the posedge or negedge of CLOCKIN                                                                                                                                                                      | • Enabled by CFG_GPCFGn register • CLOCKIN edge selected by CFG_GPCFGn register                                                                |
| 28-bit shift in         | DATAIN is sampled and shifted into a 28- bit shift. Shift Counter (Cnt_16) feature uses: • Cnt_16 (Shift Counter) feature is mapped to pru<n>_r31_status[28] • SB (Start Bit detection) feature is mapped to pru<n>_r31_status[29] | • Enabled by CFG_GPCFGn register • Cnt_16 is self clearing and is connected to the PRU INTC • Start Bit (SB) is cleared by CFG_GPCFGn register |
| MII_RT                  | mii_rt_r31_status [29:0] internally driven by the MII_RT module                                                                                                                                                                    | Enabled by CFG                                                                                                                                 |

Table 4-13. PRU GPI Signals and Configurations

| Pad Names at Device Level   | GPI Modes    | GPI Modes        | GPI Modes       |
|-----------------------------|--------------|------------------|-----------------|
| Pad Names at Device Level   | Direct Input | Parallel Capture | 28-Bit Shift In |
| pr1_pru<n>_pru_r31_0        | GPI0         | DATAIN0          | DATAIN          |
| pr1_pru<n>_pru_r31_1        | GPI1         | DATAIN1          |                 |
| pr1_pru<n>_pru_r31_2        | GPI2         | DATAIN2          |                 |
| pr1_pru<n>_pru_r31_3        | GPI3         | DATAIN3          |                 |
| pr1_pru<n>_pru_r31_4        | GPI4         | DATAIN4          |                 |
| pr1_pru<n>_pru_r31_5        | GPI5         | DATAIN5          |                 |
| pr1_pru<n>_pru_r31_6        | GPI6         | DATAIN6          |                 |
| pr1_pru<n>_pru_r31_7        | GPI7         | DATAIN7          |                 |
| pr1_pru<n>_pru_r31_8        | GPI8         | DATAIN8          |                 |
| pr1_pru<n>_pru_r31_9        | GPI9         | DATAIN9          |                 |
| pr1_pru<n>_pru_r31_10       | GPI10        | DATAIN10         |                 |
| pr1_pru<n>_pru_r31_11       | GPI11        | DATAIN11         |                 |
| pr1_pru<n>_pru_r31_12       | GPI12        | DATAIN12         |                 |
| pr1_pru<n>_pru_r31_13       | GPI13        | DATAIN13         |                 |
| pr1_pru<n>_pru_r31_14       | GPI14        | DATAIN14         |                 |
| pr1_pru<n>_pru_r31_15       | GPI15        | DATAIN15         |                 |
| pr1_pru<n>_pru_r31_16       | GPI16        | CLOCKIN          |                 |
| pr1_pru<n>_pru_r31_17       | GPI17        |                  |                 |
| pr1_pru<n>_pru_r31_18       | GPI18        |                  |                 |
| pr1_pru<n>_pru_r31_19       | GPI19        |                  |                 |
| pr1_pru<n>_pru_r31_20       | GPI20        |                  |                 |
| pr1_pru<n>_pru_r31_21       | GPI21        |                  |                 |
| pr1_pru<n>_pru_r31_22       | GPI22        |                  |                 |
| pr1_pru<n>_pru_r31_23       | GPI23        |                  |                 |

<!-- image -->

## Table 4-13. PRU GPI Signals and Configurations (continued)

| Pad Names at Device Level   | GPI Modes    | GPI Modes        | GPI Modes       |
|-----------------------------|--------------|------------------|-----------------|
| Pad Names at Device Level   | Direct Input | Parallel Capture | 28-Bit Shift In |
| pr1_pru<n>_pru_r31_24       | GPI24        |                  |                 |
| pr1_pru<n>_pru_r31_25       | GPI25        |                  |                 |
| pr1_pru<n>_pru_r31_26       | GPI26        |                  |                 |
| pr1_pru<n>_pru_r31_27       | GPI27        |                  |                 |
| pr1_pru<n>_pru_r31_28       | GPI28        |                  |                 |
| pr1_pru<n>_pru_r31_29       | GPI29        |                  |                 |

NOTE:

Some devices may not pin out all 30 bits of R31. For which pins are available on this device, see Section 4.2.3, PRU-ICSS Pin List . See the device's datasheet for device-specific pin mapping.

<!-- image -->

www.ti.com

## 4.4.1.2.3.1 Direct Input

The pru&lt;n&gt;\_r31\_status [0:29] bits of the internal PRU register file are mapped to device-level general purpose input pins (PRU&lt;n&gt;\_GPI[0:29]). In GPI Direct Input mode, PRU&lt;n&gt;\_GPI[0:29] feeds directly to pru&lt;n&gt;\_r31\_status [0:29]. There are 30 possible general purpose inputs per PRU core; however, some devices may not pin out all of these signals. See the device-specific datasheet for device specific pin mapping.

Figure 4-8. PRU R31 (GPI) Direct Input Mode Block Diagram

<!-- image -->

## 4.4.1.2.3.2 16-Bit Parallel Capture

The pru&lt;n&gt;\_r31\_status [0:15] and pru&lt;n&gt;\_r31\_status [16] bits of the internal PRU register file are mapped to device-level general purpose input pins (PRU&lt;n&gt;\_DATAIN[0:15] and PRU&lt;n&gt;\_CLOCKIN, respectively). PRU&lt;n&gt;\_CLOCKIN is designated as an external strobe clock and is used to capture PRU&lt;n&gt;\_DATAIN[0:15].

The PRU&lt;n&gt;\_DATAIN can be captured either on the positive or negative edge of PRU&lt;n&gt;\_CLOCK, programmable through the PRU-ICSS CFG register space. If the clocking is configured through the PRUICSS CFG register space to be positive, then it will equal PRU&lt;n&gt;\_CLOCK. If the clocking is configured to be negative, then it will equal PRU&lt;n&gt;\_CLOCK inverted.

Figure 4-9. PRU R31 (GPI) 16-Bit Parallel Capture Mode Block Diagram

<!-- image -->

## 4.4.1.2.3.3 28-Bit Shift In

In 28-bit Shift In mode, the device-level general purpose input pin PRU&lt;n&gt;\_DATAIN is sampled and shifted into a 28-bit shift register on an internal clock pulse. The register fills in lsb order (from bit 0 to 27) and then overflows into a bit bucket. The 28-bit register is mapped to pru&lt;n&gt;\_r31\_status [0:27] and can be cleared in software through the PRU-ICSS CFG register space.

Note that the PRU will continually capture and shift the DATAIN input when the GPI mode has been set to 28-bit shift in.

<!-- image -->

The shift rate is controlled by the effective divisor of two cascaded dividers applied to the ocp\_clk. These cascaded dividers can each be configured through the PRU-ICSS CFG register space to a value of {1, 1.5, …, 16}. Table 4-14 lists sample effective clock values and the divisor values that can be used to generate these clocks.

Table 4-14. Effective Clock Values

| Generated clock   | PRU<n>_GPI_DIV0   | PRU<n>_GPI_DIV1   |
|-------------------|-------------------|-------------------|
| 8-MHz             | 12.5 (0x17)       | 2 (0x02)          |
| 10-MHz            | 10 (0x12)         | 2 (0x02)          |
| 16-MHz            | 16 (0x1e)         | 1 (0x00)          |
| 20-MHz            | 10 (0x12)         | 1 (0x00)          |

The 28-bit Shift In mode also supports these features:

- Start Bit detection (SB) is mapped to pru&lt;n&gt;\_r31\_status [29] and is set when the first 1 is captured on PRU&lt;n&gt;\_DATAIN. The SB flag in pru&lt;n&gt;\_r31\_status [29] is cleared in software through the CFG\_GPCFGn register of the PRU-ICSS CFG register space.
- CNT\_16 (Shift Counter) is mapped to pru&lt;n&gt;\_r31\_status [28] and is set on every 16 shift clock sample after the Start Bit has been received. CNT\_16 is self clearing and is connected to the PRU-ICSS INTC. For more details, see Section 4.4.2, Interrupt Controller (INTC) .

Figure 4-10. PRU R31 (GPI) 28-Bit Shift In Mode

<!-- image -->

## 4.4.1.2.4 General-Purpose Outputs (R30): Enhanced PRU GP Module

The PRU-ICSS implements an enhanced General Purpose Input Output (GPIO) module that supports two general-purpose output modes: direct output and shift out..

Table 4-15 describes these modes in detail. Note that each PRU core can only be configured for one GPO mode at a time. Each mode uses the same R30 signals and internal register bits for different purposes. A summary is found in Table 4-16.

<!-- image -->

www.ti.com

Table 4-15. PRU R30 (GPO) Modes

| Mode          | Function                                                                                                                                                                                                                                                                       | Configuration                  |
|---------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------|
| Direct Output | pru<n>_r30[0:31] feeds directly to GPO[0:31]                                                                                                                                                                                                                                   | Default mode                   |
| Shift Out     | • pru<n>_r30[0] is shifted out on DATAOUT on every rising edge of pru<n>_r30[1] (CLOCKOUT). • LOAD_GPO_SH0 (Load Shadow Register 0) is mapped to pru<n>_r30[29] • LOAD_GPO_SH1 (Load Shadow Register 1) is mapped to pru<n>_r30[30] • ENABLE_SHIFT is mapped to pru<n>_r30[31] | Enabled by CFG_GPCFGn register |

Table 4-16. PRU GPO Signals and Configurations

| Pad Names at          | GPO Modes     | GPO Modes   |
|-----------------------|---------------|-------------|
| Device                | Direct Output | Shift Out   |
| pr1_pru<n>_pru_r30_0  | GPO0          | DATAOUT     |
| pr1_pru<n>_pru_r30_1  | GPO1          | CLOCKOUT    |
| pr1_pru<n>_pru_r30_2  | GPO2          |             |
| pr1_pru<n>_pru_r30_3  | GPO3          |             |
| pr1_pru<n>_pru_r30_4  | GPO4          |             |
| pr1_pru<n>_pru_r30_5  | GPO5          |             |
| pr1_pru<n>_pru_r30_6  | GPO6          |             |
| pr1_pru<n>_pru_r30_7  | GPO7          |             |
| pr1_pru<n>_pru_r30_8  | GPO8          |             |
| pr1_pru<n>_pru_r30_9  | GPO9          |             |
| pr1_pru<n>_pru_r30_10 | GPO10         |             |
| pr1_pru<n>_pru_r30_11 | GPO11         |             |
| pr1_pru<n>_pru_r30_12 | GPO12         |             |
| pr1_pru<n>_pru_r30_13 | GPO13         |             |
| pr1_pru<n>_pru_r30_14 | GPO14         |             |
| pr1_pru<n>_pru_r30_15 | GPO15         |             |
| pr1_pru<n>_pru_r30_16 | GPO16         |             |
| pr1_pru<n>_pru_r30_17 | GPO17         |             |
| pr1_pru<n>_pru_r30_18 | GPO18         |             |
| pr1_pru<n>_pru_r30_19 | GPO19         |             |
| pr1_pru<n>_pru_r30_20 | GPO20         |             |
| pr1_pru<n>_pru_r30_21 | GPO21         |             |
| pr1_pru<n>_pru_r30_22 | GPO22         |             |
| pr1_pru<n>_pru_r30_23 | GPO23         |             |
| pr1_pru<n>_pru_r30_24 | GPO24         |             |
| pr1_pru<n>_pru_r30_25 | GPO25         |             |
| pr1_pru<n>_pru_r30_26 | GPO26         |             |
| pr1_pru<n>_pru_r30_27 | GPO27         |             |
| pr1_pru<n>_pru_r30_28 | GPO28         |             |
| pr1_pru<n>_pru_r30_29 | GPO29         |             |
| pr1_pru<n>_pru_r30_30 | GPO30         |             |
| pr1_pru<n>_pru_r30_31 | GPO31         |             |

NOTE:

<!-- image -->

Some devices may not pin out all 32 bits of R30. For which pins are available on this device, see Section 4.2.3, PRU-ICSS Pin List . See the device's datasheet for device-specific pin mapping.

## 4.4.1.2.4.1 Direct Output

The pru&lt;n&gt;\_r30 [0:31] bits of the internal PRU register file are mapped to device-level general purpose output pins (PRU&lt;n&gt;\_GPO [0:31]). In GPO Direct Output mode, pru&lt;n&gt;\_r30 [0:31] feed directly to PRU&lt;n&gt;\_GPO [0:31]. There are 32 possible general purpose outputs per PRU core; however, some devices may not pin out all of these signals. See the device-specific datasheet for device specific pin mapping.

NOTE:

R30 is not initialized after reset. To avoid unintended output signals, R30 should be initialized before pinmux configuration of PRU signals.

Figure 4-11. PRU R30 (GPO) Direct Output Mode Block Diagram

<!-- image -->

## 4.4.1.2.4.2 Shift Out

In shift out mode, data is shifted out of pru&lt;n&gt;\_r30[0] (on PRU&lt;n&gt;\_DATAOUT) on every rising edge of pru&lt;n&gt;\_r30[1] (PRU&lt;n&gt;\_CLOCKOUT). The shift rate is controlled by the effective divisor of two cascaded dividers applied to the op\_clk. These cascaded dividers can each be configured through the PRU-ICSS CFG register space to a value of {1, 1.5, …, 16}. Table 4-17 shows sample effective clock values and the divisor values that can be used to generate these clocks. The shift out clock is a free-running clock that is always running internally. This clock will be output to PRU&lt;n&gt;\_CLOCKOUT (or pr1\_pru&lt;n&gt;\_pru\_r30\_1) when the PRU GPO mode is set to shift out mode.

Table 4-17. Effective Clock Values

| Generated Clock   | PRU<n>_GPO_DIV0   | PRU<n>_GPO_DIV1   |
|-------------------|-------------------|-------------------|
| 8 MHz             | 12.5 (0x17)       | 2 (0x02)          |
| 10 MHz            | 10 (0x12)         | 2 (0x02)          |
| 16 MHz            | 16 (0x1e)         | 1 (0x00)          |
| 20 MHz            | 10 (0x12)         | 1 (0x00)          |

Shift out mode uses two 16-bit shadow registers (gpo\_sh0 and gpo\_sh1) to support ping-pong buffers. Each shadow register has independent load controls programmable through pru&lt;n&gt;\_r30[29:30] (PRU&lt;n&gt;\_LOAD\_GPO\_SH [0:1]). While PRU&lt;n&gt;\_LOAD\_GPO\_SH [0/1] is set, the contents of pru&lt;n&gt;\_r31[0:15] are loaded into gpo\_sh0/1.

NOTE:

If any device-level pins mapped to pru&lt;n&gt;\_r30 [2:15] are configured for the pru&lt;n&gt;\_r30 [2:15] pinmux mode, then these pins will reflect the shadow register value written to pru&lt;n&gt;\_r30. Any pin configured for a different pinmux setting will not reflect the shadow register value written to pru&lt;n&gt;\_r30.

<!-- image -->

www.ti.com

The data shift will start from the lsb of gpo\_sh0 when pru&lt;n&gt;\_r30[31] (PRU&lt;n&gt;\_ENABLE\_SHIFT) is set. Note that if no new data is loaded into gpo\_shn&lt;n&gt; after shift operation, the shift operation will continue looping and shifting out the pre-loaded data. When PRU&lt;n&gt;\_ENABLE\_SHIFT is cleared, the shift operation will finish shifting out the current shadow register, stop, and reset.

Figure 4-12. PRU R30 (GPO) Shift Out Mode Block Diagram

<!-- image -->

Follow these steps to use the GPO shift out mode:

## Step One: Initialization

1. Load 16-bits of data into gpo\_sh0:
- a. Set R30[29] = 1 (PRU&lt;n&gt;\_LOAD\_GPO\_SH0)
- b. Load data in R30[15:0]
- c. Clear R30[29] to turn off load controller
2. Load 16-bits of data into gpo\_sh1:
- a. Set R30[30] = 1 (PRU&lt;n&gt;\_LOAD\_GPO\_SH1)
- b. Load data in R30[15:0]
- c. Clear R30[30] to turn off load controller
3. Start shift operation:
- a. Set R30[31] = 1 (PRU&lt;n&gt;\_ENABLE\_SHIFT)

## Step Two: Shift Loop

1. Monitor when a shadow register has finished shifting out data and can be loaded with new data:
1. Poll PRU&lt;n&gt;\_GPI\_SH\_SEL bit of the GPCFG&lt;n&gt; register
2. Load new 16-bits of data into gpo\_sh0 if PRU&lt;n&gt;\_GPI\_SH\_SEL = 1
3. Load new 16-bits of data into gpo\_sh1 if PRU&lt;n&gt;\_GPI\_SH\_SEL = 0
2. If more data to be shifted out, loop to Shift Loop
3. If no more data, exit loop

## Exit :

1. End shift operation:
1. Clear R30[31] to turn off shift operation

NOTE:

Until the shift operation is disabled, the shift loop will continue looping and shifting out the pre-loaded data if no new data has been loaded into gpo\_sh&lt;n&gt;.

## 4.4.1.3 Multiplier With Optional Accumulation (MPY/MAC)

Each PRU core has a designated unsigned multiplier with optional accumulation (MPY/MAC). The MAC has two modes of operation: Multiply Only or Multiply and Accumulate. The MAC is directly connected with the PRU internal registers R25-R29 and uses the broadside load/store PRU interface and XFR instructions to both control the mode of the MAC and import the multiplication results into the PRU.

## 4.4.1.3.1 Features

- Configurable Multiply Only and Multiply and Accumulate functionality via PRU register R25
- 32-bit operands with direct connection to PRU registers R28 and R29
- 64-bit result (with carry flag) with direct connection to PRU registers R26 and R27
- PRU broadside interface and XFR instructions (XIN, XOUT) allow for importing multiplication results and initiating accumulate function

## 4.4.1.3.2 PRU and MPY/MAC Interface

The MAC directly connects with the PRU internal registers R25-R29 through use of the PRU broadside interface and XFR instructions. Figure 4-13 shows the functionality of each register.

Figure 4-13. Integration of the PRU and MPY/MAC

<!-- image -->

The XFR instructions (XIN and XOUT) are used to load/store register contents between the PRU core and the MAC. These instructions define the start, size, direction of the operation, and device ID. The device ID number corresponding to the MPY/MAC is shown in Table 4-18.

Table 4-18. MPY/MAC XFR ID

|   Device ID | Function        |
|-------------|-----------------|
|           0 | Selects MPY/MAC |

<!-- image -->

<!-- image -->

The PRU register R25 is mapped to the MAC\_CTRL\_STATUS register (Table 4-19). The MAC's current status (MAC\_mode and ACC\_carry states) is loaded into R25 using the XIN command on R25. The PRU sets the MAC's mode and clears the ACC\_carry using the XOUT command on R25.

Table 4-19. MAC\_CTRL\_STATUS Register (R25) Field Descriptions

| Bit   | Field     | Value   | Description                                           |
|-------|-----------|---------|-------------------------------------------------------|
| 7-2   | Reserved  |         | Reserved                                              |
| 1     | ACC_carry |         | Write 1 to clear                                      |
|       |           | 0       | 64-bit accumulator carry has not occurred             |
|       |           | 1       | 64-bit accumulator carry occurred                     |
| 0     | MAC_mode  | 0       | Accumulation mode disabled and accumulator is cleared |
|       |           | 1       | Accumulation mode enabled                             |

The two 32-bit operands for the multiplication are loaded into R28 and R29. These registers have a direction connection with the MAC, and the MAC samples these registers every clock cycle. Note, XOUT is not required to load the MAC. In multiply and accumulate mode, the product of R28*R29 is added to the accumulator on every XOUT of R25.

The product from the MAC is linked to R26 (lower 32 bits) and R27 (upper 32 bits). The product is loaded into register R26 and R27 using XIN.

## 4.4.1.3.2.1 Multiply-Only Mode (Default State), MAC\_mode = 0

On every clock cycle, the MAC multiplies the contents of R28 and R29.

<!-- image -->

The following steps are performed by the PRU firmware for multiply-only mode:

1. Enable multiply only MAC\_mode.
- a. Clear R25[0] for multiply only mode.
- b. Store MAC\_mode to MAC using XOUT instruction with the following parameters:
- Device ID = 0
- Base register = R25
- Size = 1
2. Load operands into R28 and R29.
3. Delay at least 1 PRU cycle before executing XIN in step 4.
4. Load product into PRU using XIN instruction on R26, R27.

Repeat steps 2 through 4 for each new operand.

## 4.4.1.3.2.2 Multiply and Accumulate Mode, MAC\_mode = 1

On every XOUT R25\_reg[7:0] transaction, the MAC multiplies the contents of R28 and R29, adds the product to its accumulated result, and sets ACC\_carry if an accumulation overflow occurs.

<!-- image -->

<!-- image -->

The following steps are performed by the PRU firmware for multiply and accumulate mode:

1. Enable multiply and accumulate MAC\_mode.
- a. Set R25[1:0] = 1 for accumulate mode.
- b. Store MAC\_mode to MAC using XOUT instruction with the following parameters:
- Device ID = 0
- Base register = R25
- Size = 1
2. Clear accumulator and carry flag.
- a. Set R25[1:0] = 3 to clear accumulator (R25[1]=1) and preserve accumulate mode (R25[0]=1).
- b. Store accumulator to MAC using XOUT instruction on R25.
3. Load operands into R28 and R29.
4. Multiply and accumulate, XOUT R25[1:0] = 1
12. Repeat step 4 for each multiply and accumulate using same operands.
13. Repeat step 3 and 4 for each multiply and accumulate for new operands.
5. Load the accumulated product into R26, R27 and the ACC\_carry status into R25 using the XIN instruction.

Note : Steps one and two are required to set the accumulator mode and clear the accumulator and carry flag.

## 4.4.1.4 PRU0/1 Scratch Pad

The PRU-ICSS supports a scratch pad with three independent banks accessible by the PRU cores. The PRU cores interact with the scratch pad through broadside load/store PRU interface and XFR instructions. The scratch pad can be used as a temporary place holder for the register contents of the PRU cores. Direct connection between the PRU cores is also supported for transferring register contents directly between the cores.

## 4.4.1.4.1 Features

The PRU-ICSS scratch pad supports the following features:

- Three scratch pad banks of 30, 32-bit registers (R29:0)
- Flexible load/store options
- -User-defined start byte and length of the transfer
- -Length of transfer ranges from one byte of a register to the entire register content (R29 to R0)
- -Simultaneous transactions supported between PRU0 ↔ Bank&lt;n&gt; and PRU1 ↔ Bank&lt;m&gt;
- -Direct connection of PRU0 → PRU1 or PRU1 → PRU0 for all registers R29-R0
- XFR instructions operate in one clock cycle
- Optional XIN/XOUT shift functionality allows remapping of registers (R&lt;n&gt; → R&lt;m&gt;) during load/store operation

<!-- image -->

www.ti.com

Figure 4-16. Integration of PRU and Scratch Pad

<!-- image -->

## 4.4.1.4.2 Implementations and Operations

XFR instructions are used to load/store register contents between the PRU cores and the scratch pad banks. These instructions define the start, size, direction of the operation, and device ID. The device ID corresponds to the external source or destination (either a scratch pad bank or the other PRU core). The device ID numbers are shown in Table 4-20. Note the direct connect mode (device ID 14) can be used to synchronize the PRU cores. This mode requires the transmitting PRU core to execute XOUT and the receiving PRU core to execute XIN.

Table 4-20. Scratch Pad XFR ID

|   Device ID | Function                                     |
|-------------|----------------------------------------------|
|          10 | Selects Bank0                                |
|          11 | Selects Bank1                                |
|          12 | Selects Bank2                                |
|          13 | Reserved                                     |
|          14 | Selects other PRU core (Direct connect mode) |

A collision occurs when two XOUT commands simultaneously access the same asset or device ID. Table 4-21 shows the priority assigned to each operation when a collision occurs. In direct connect mode (device ID 14), any PRU transaction will be terminated if the stall is greater than 1024 cycles. This will generate the event pr1\_xfr\_timeout that is connected to INTC.

Table 4-21. Scratch Pad XFR Collision &amp; Stall Conditions

| Operation                 | Collision Handling                                                                                                                                                                                                                                                                |
|---------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| PRU<n> XOUT ( → ) bank[j] | If both PRU cores access the same bank simultaneously, PRU0 is given priority. PRU1 will temporarily stall until the PRU0 operation completes.                                                                                                                                    |
| PRU<n> XOUT ( → ) PRU<m>  | Direct Connect mode requires the transmitting core (PRU<n>) to execute XOUT and the receiving core (PRU<m>) to execute XIN. If PRU<n> executes XOUT before PRU<m> executes XIN, then PRU<n> will stall until either PRU<m> executes XIN or the stall is greater than 1024 cycles. |

<!-- image -->

## Table 4-21. Scratch Pad XFR Collision &amp; Stall Conditions (continued)

| PRU<m> XIN ( ← ) PRU<n>   | Direct Connect mode requires the transmitting core (PRU<n>) to execute XOUT and the receiving core (PRU<m>) to execute XIN. If PRU<m> executes XIN before PRU<n> executes XOUT, then PRU<m> will stall until either PRU<n> executes XOUT or the stall is greater than 1024 cycles.   |
|---------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|

## 4.4.1.4.2.1 Optional XIN/XOUT Shift

The optional XIN/XOUT shift functionality allows register contents to be remapped or shifted within the destination's register space. For example, the contents of PRU0 R6-R8 could be remapped to Bank1 R1012. The XIN/XOUT shift feature is not supported for direct connect mode, only for transfers between a PRU core and scratch pad bank.

The shift feature is enabled or disabled through the SPP register of the PRU-ICSS CFG register space. When enabled, R0[4:0] (internal to the PRU) defines the number of 32-bit registers in which content is shifted in the scratch pad bank. Note that scratch pad banks do not have registers R30 or R31.

## 4.4.1.4.2.2 Example Scratch Pad Operations

The following PRU firmware examples demonstrate the shift functionality. Note these assume the SHIFT\_EN bit of the SPP register of the PRU-ICSS CFG register space has been set.

## XOUT Shift By 4 Registers

Store R4:R7 to R8:R11 in bank0:

- Load 4 into R0.b0
- XOUT using the following parameters:
- -Device ID = 10
- -Base register = R4
- -Size = 16

## XOUT Shift By 9 Registers, With Wrap Around

Store R25:R29 to R4:R8 in bank1:

- Load 9 into R0.b0
- XOUT using the following parameters:
- -Device ID = 11
- -Base register = R25
- -Size = 20

## XIN Shift By 10 Registers

Store R14:R16 from bank2 to R4:R6:

- Load 10 into R0.b0
- XIN using the following parameters:
- -Device ID = 12
- -Base register = R4
- -Size = 12