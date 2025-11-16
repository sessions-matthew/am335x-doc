## 7.3.3 Functional Description

## 7.3.3.1 Signal Descriptions

The DDR2/3/mDDR memory controller signals are shown in Figure 7-201 and described in Table 7-208. The following features are included:

- The maximum width for the data bus (DDR\_D[15:0]) is 16-bits
- The address bus (DDR\_A[15:0]) is 16-bits wide with an additional 3 bank address pins (DDR\_BA[2:0])
- Two differential output clocks (DDR\_CK and DDR\_nCK) driven by internal clock sources
- Command signals: Row and column address strobe (DDR\_RASn and DDR\_CASn), write enable strobe

(DDR\_WEn), data strobe (DDR\_DQS[1:0] and DDR\_DQSn[1:0]), and data mask (DDR\_DQM[1:0]).

- One chip select signal (DDR\_CSN0) and one clock enable signal (DDR\_CKE)
- One on-die termination output signals (DDR\_ODT).

Figure 7-201. DDR2/3/mDDR Memory Controller Signals

<!-- image -->

Table 7-208. DDR2/3/mDDR Memory Controller Signal Descriptions

| Pin              | Description                                                                                    |
|------------------|------------------------------------------------------------------------------------------------|
| DDR_D[15:0]      | Bidirectional data bus. Input for data reads and output for data writes.                       |
| DDR_A[15:0]      | External address output.                                                                       |
| DDR_CSN0         | Chip select output.                                                                            |
| DDR_DQM[1:0]     | Active-low output data mask.                                                                   |
| DDR_CLK/DDR_CLKn | Differential clock outputs. All DDR2/3/mDDR interface signals are synchronous to these clocks. |
| DDR_CKE          | Clock enable. Used to select Power-Down and Self-Refresh operations.                           |
| DDR_CASn         | Active-low column address strobe.                                                              |
| DDR_RASn         | Active-low row address strobe.                                                                 |
| DDR_WEn          | Active-low write enable.                                                                       |

<!-- image -->

<!-- image -->

Table 7-208. DDR2/3/mDDR Memory Controller Signal Descriptions (continued)

| Pin                         | Description                                                                                                                           |
|-----------------------------|---------------------------------------------------------------------------------------------------------------------------------------|
| DDR_DQS[1:0]/DDR_DQSn[1: 0] | Differential data strobe bidirectional signals. Edge-aligned inputs on reads and center-aligned outputs on writes.                    |
| DDR_ODT                     | On-die termination signal to external DDR2/3 SDRAM. ODT is not supported for mDDR.                                                    |
| DDR_BA[2:0]                 | Bank-address control outputs.                                                                                                         |
| DDR_VREF                    | Memory Controller reference voltage. This voltage must be supplied externally. See the device- specific data manual for more details. |
| DDR_VTP                     | DDR2/3/mDDR VTP Compensation Resistor Connection.                                                                                     |
| DDR_RESETn                  | Reset output. Asynchronous reset for DDR3 devices.                                                                                    |

## 7.3.3.2 Clock Control

DDR2/3/mDDR clock is derived directly from the DDR PLL's VCO output. The frequency of DDR\_CLK can be determined by using the following formula:

DDR\_CLK frequency = (DDRPLL input clock frequency x mulitplier)/((pre-divider+1)*post-divider)

The second output clock of the DDR2/3/mDDR memory controller DDR\_CLKn, is the inverse of DDR\_CLK. You can change the muliplier, pre-divier and post-divider to get the desired DDR\_CLK frequency.

For detailed information on DDR PLL, see Section 8.1, Power Management and Clock Module (PRCM) .

## 7.3.3.3 DDR2/3/mDDR Memory Controller Subsytem Overview

The DDR2/3/mDDR memory controller can gluelessly interface to most standard DDR2/3/mDDR SDRAM devices and supports such features as self-refresh mode and prioritized refresh. In addition, it provides flexibility through programmable parameters such as the refresh rate, CAS latency, and many SDRAM timing parameters. The DDR2/3/mDDR subsystem consists of the following:

- DDR2/3/mDDR memory controller
- Command macro
- Data macro
- VTP controller macro
- IOs for DQS gate

The subsystem supports JEDEC standard compliant DDR2/DDR3 and mDDR(LPDRR1)devices. It does not support CAS latency of 2 for DDR2 due to data and command macro limitations. It supports a 128-bit wide OCP interface on the core side for programmability. The subsystem can be used to connect to 16-bit memory devices.

Figure 7-202 shows the DDR2/3/mDDR subsystem block diagram.

<!-- image -->

## Figure 7-202. DDR2/3/mDDR Subsystem Block Diagram

<!-- image -->

## Where

fifo\_we\_out = DQS enable output for timing match between DQS and system (Memory) clock.

fifo\_we\_in = DQS enable input for timing match between DQS and system (Memory) clock.

## 7.3.3.3.1 DDR2/3/mDDR Memory Controller Interface

To move data efficiently from on-chip resources to external DDR2/3/mDDR SDRAM device, the DDR2/3/mDDR memory controller makes use of a command FIFO, a write data FIFO, a return command FIFO, and two Read Data FIFOs. Purpose of each FIFO is described below.

Figure 7-203 shows the block diagram of the DDR2/3/mDDR memory controller FIFOs. Commands, write data, and read data arrive at the DDR2 memory controller parallel to each other. The same peripheral bus is used to write and read data from external memory as well as internal memory-mapped registers.

<!-- image -->

Figure 7-203. DDR2/3/mDDR Memory Controller FIFO Block Diagram

<!-- image -->

Control

Data

The command FIFO stores all the commands coming in on the OCP command interface.

The Write Data FIFO stores the write data for all the write transactions coming in on the OCP write data interface.

The Return Command FIFO stores all the return transactions that are to be issued to the OCP return interface. These include the write status return and the read data return commands.

There are two Read Data FIFOs that store the read data to be sent to the OCP return interface. One Read Data FIFO stores read data from the memory mapped registers and other Read Data FIFO stores read data from external memory.

## 7.3.3.3.2 Data Macro

The data macro consists of 8 data channels, one pair of complementary strobes (one pair for 8 bits of data), and one data mask channel (one for 8 bits of data).

The data macros consists of PHY Data Macro, DLLs and IOs integrated into a macro.

<!-- image -->

The data macro is a bidirectional interface. It is used to transmit data from the memory controller to the external memory chip during a write operation and receive data from memory and transmit it to the memory controller during a read operation.

During a write operation, the data macro translates 32/16-bit words from memory controller to 8-bit words and transmits them at double the bit rate to the memory along with the strobe. The strobe is centeraligned to the data. Data can be prevented from writing to the memory using data mask signal.

During a read operation, the data macro receives 8-bit DDR data along with the strobe and converts it to 32/16- bit words and transmits them to the memory controller along with the read-valid signals.

## 7.3.3.3.3 Command Macro

It consists of PHY Command Macro, DLLs and the IOs integrated together. The command macro acts as a unidirectional macro that transmits address and control bits from memory controller to the memory chip. The clocks DDR\_CLK and DDR\_CLKn are used by the memory to register the command and address transmitted on the transmit channels. All address and control signals are transmitted clock-centered with respect to DDR\_CLK and DDR\_CLKn. The memory, on the positive edge of DDR\_CLK and the negative edge of DDR\_CLKn, samples all address and control signals.

## 7.3.3.3.4 VTP Controller Macro

The VTP controller macro evaluates silicon performance at current voltage, temperature, and process (VTP) to enable IO drivers to set constant predetermined output driver impedance. The controller operates by comparing driver impedances to the external reference resistor and adjusting driver impedance to obtain an impedance match. VTP Controller supports the following features:

- The VTP controller generates information regarding the Voltage, temperature, and process(VTP) on a chip to be shared with the device's IO drivers
- Requires a Clock input from the core running at 20MHz or less
- 56 Clock cycles are needed to guarantee the VTP outputs are initially set after reset is removed
- Can be used in static or dynamic update mode of operation
- The VTP controller has internal noise filtering which allows it to control spurious update requests due to noise

Impedance of the drivers and terminations must be updated often even while in operation. In such scenarios where Voltage and Temperature are variables VTP macro can be configured in dynamic update mode. In contrast, static mode of operation does not allow dynamic calibration of IO impedance, and hence consumes lesser power compared to dynamic update mode.

It is possible that under noisy conditions, dynamic update controller can generate too frequent update requests. Noise can cause the controller to request a change in the impedance that can again be quickly reversed on subsequent clock cycles. To prevent the controller from making excessive numbers of impedance changes, a digital filter is included which can be configured to regulate the update rate. For example if the user configures the filter value as F2=0,F1=1 and F0=1, then an impedance update will be performed only if four successive update requests are generated from the VTP controller. It is recommended to use a filter value of 011'b.

Table 7-209 shows the configuration details of the digital filter.

## Table 7-209. Digital Filter Configuration

|   F2 |   F1 |   F0 | Description                             |
|------|------|------|-----------------------------------------|
|    0 |    0 |    0 | Off                                     |
|    0 |    0 |    1 | Update on 2 consecutive update requests |
|    0 |    1 |    0 | Update on 3 consecutive update requests |
|    0 |    1 |    1 | Update on 4 consecutive update requests |
|    1 |    0 |    0 | Update on 5 consecutive update requests |
|    1 |    0 |    1 | Update on 6 consecutive update requests |
|    1 |    1 |    0 | Update on 7 consecutive update requests |

<!-- image -->

## Table 7-209. Digital Filter Configuration (continued)

|   F2 |   F1 |   F0 | Description                             |
|------|------|------|-----------------------------------------|
|    1 |    1 |    1 | Update on 8 consecutive update requests |

## 7.3.3.3.5 DQS-Gate IOs

To effectively model the I/O delay on the DQS gating signal during a read request (the DQS receiver and the CLK driver I/Os), the signal is expected to be looped on a single I/O connecting fifo\_we\_in to fifo\_we\_out. The board and memory delay, being fairly constant across PTV variations, are calibrated within the IDID using a compensated delay line. The loop-back is done at the die level without bringing the signals out to the package level. Each Data Macro supports delay compensation independent of each other.

The data and command macros are responsible for System level flight time compensation. The following controls are supported by the DDR2/3/mDDR controller Sub System.

- Aligning DDR\_DQS w.r.t DDR\_CLK during Write Cycle: For DDR3 operation, initiate the write leveling state machine on each rank in turn to capture the proper delay settings to align DDR\_DQS with DDR\_CLK clock for each memory chip. If one wants to do this in a manual way one can write to the control register that controls the delay of DDR\_DQS vs DDR\_CLK Clock position. To produce a given amount of skew to center the DDR\_DQS vs. Clock at the SDRAM the following register can be programmed.

Data Macro 0/1 Write DQS Slave Ratio Register=256 x ([command delay] - [DDR\_DQS delay]) / DDR\_CLK Clock period.

- Aligning ADDR/CMD w.r.t DDR\_CLK
- Aligning DDR\_DQ[15:0] w.r.t DDR\_DQS during Write Operation
- Offset DDR\_D[15:0] w.r.t DDR\_DQS during Read Operation
- Align FIFO WE Window

## 7.3.3.4 Address Mapping

The DDR2/3/mDDR memory controller views external DDR2/3/mDDR SDRAM as one continuous block of memory. This statement is true regardless of the number of memory devices located on the chip select space. The DDR2/3/mDDR memory controller receives DDR2/3/mDDR memory access requests along with a 32-bit logical address from the rest of the system. In turn, DDR2/3/mDDR memory controller uses the logical address to generate a row/page, column, and bank address for the DDR2/3/mDDR SDRAM. The number of column, row and bank address bits used is determined by the IBANK, RSIZE and PAGESIZE fields (see Table 7-210). The DDR2/3/mDDR memory controller uses up to 16 bits for the row/page address.

Table 7-210. IBANK, RSIZE and PAGESIZE Fields Information

| Bit Field   | Bit Value   | Bit Description                                                                  |
|-------------|-------------|----------------------------------------------------------------------------------|
| RSIZE       |             | Defines the number of address lines to be connected to DDR2/3/mDDR memory device |
| RSIZE       | 0           | 9 row bits                                                                       |
| RSIZE       | 1h          | 10 row bits                                                                      |
| RSIZE       | 2h          | 11 row bits                                                                      |
| RSIZE       | 3h          | 12 row bits                                                                      |
| RSIZE       | 4h          | 13 row bits                                                                      |
| RSIZE       | 5h          | 14 row bits                                                                      |
| RSIZE       | 6h          | 15 row bits                                                                      |
| RSIZE       | 7h          | 16 row bits                                                                      |

<!-- image -->

## Table 7-210. IBANK, RSIZE and PAGESIZE Fields Information (continued)

| Bit Field   | Bit Value   | Bit Description                                                                |
|-------------|-------------|--------------------------------------------------------------------------------|
| PAGESIZE    |             | Defines the page size of each page of the external DDR2/3/mDDR memory device   |
| PAGESIZE    | 0           | 256 words (requires 8 column address bits)                                     |
| PAGESIZE    | 1h          | 512 words (requires 9 column address bits)                                     |
| PAGESIZE    | 2h          | 1024 words (requires 10 column address bits)                                   |
| PAGESIZE    | 3h          | 2048 words (requires 11 column address bits)                                   |
| IBANK       |             | Defines the number of internal banks on the external DDR2/3/mDDR memory device |
| IBANK       | 0           | 1 bank                                                                         |
| IBANK       | 1h          | 2 banks                                                                        |
| IBANK       | 2h          | 4 banks                                                                        |
| IBANK       | 3h          | 8 banks                                                                        |
| EBANK       |             | Defines the number of DDR2/3/mDDR memory controller chip selects               |
| EBANK       | 0           | CS0 only                                                                       |
| EBANK       | 1h          | Reserved                                                                       |

When addressing SDRAM, if the REG\_IBANK\_POS field in the SDRAM Config register is set to 0, and the REG\_EBANK\_POS field in the SDRAM Config 2 register is also set to 0, the DDR2/3/mDDR memory controller uses the three fields, IBANK, EBANK and PAGESIZE in the SDRAM Config register to determine the mapping from source address to SDRAM row, column, bank, and chip select. If the REG\_IBANK\_POS field in the SDRAM Config register is set to 1, 2, or 3, or the REG\_EBANK\_POS field in the SDRAM Config 2 register is set to 1, the DDR2/3/mDDR memory controller uses the 4 fields IBANK, EBANK, PAGESIZE, and ROWSIZE in the SDRAM Config register to determine the mapping from source address to SDRAM row, column, bank, and chip select. In all cases the DDR2/3/mDDR memory controller considers its SDRAM address space to be a single logical block regardless of the number of physical devices or whether the devices are mapped across 1 or 2 DDR2/3/mDDR memory controller chip selects.

## 7.3.3.4.1 Address Mapping when REG\_IBANK\_POS=0 and REG\_EBANK\_POS=0

For REG\_IBANK\_POS=0 and REG\_EBANK\_POS=0, the effect of address mapping scheme is that as the source address increments across DDR2/3/mDDR memory device page boundaries, the DDR2/3/mDDR controller moves onto the same page in the next bank in the current device DDR\_CSn[0]. This movement along the banks of the current proceeds to the same page in the next device(if EBANK=1, DDR\_CSn[1]) and proceeds through the same page in all its banks before moving over to the next page in the first device(DDR\_CSn[0]). The DDR2/3/mDDR controller exploits this traversal across internal banks and chip selects while remaining on the same page to maximize the number of open DDR2/3/mDDR memory device banks within the overall DDR2/3/mDDR memory device space.

Thus, the DDR2/3/mDDR controller can keep a maximum of 16 banks (8 internal banks across 2 chip selects) open at a time, and can interleave among all of them.

Table 7-211. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=0 and REG\_EBANK\_POS=0

| Logical Address   | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Row Address       | Chip Select                         | Bank Address                        | Column Address                         |
|                   | # of bits defined by EBANK of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| 16 bits           | EBANK=0 => 0 bits                   | IBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |
|                   | EBANK=1 => 1 bit                    | IBANK=1 => 1 bit                    | PAGESIZE=1 => 9 bits                   |
|                   |                                     | IBANK=2 => 2 bits                   | PAGESIZE=2 => 10 bits                  |
|                   |                                     | IBANK=3 => 3 bits                   | PAGESIZE=3 => 11 bits                  |

<!-- image -->

## 7.3.3.4.2 Address Mapping when REG\_IBANK\_POS = 1 and REG\_EBANK\_POS = 0

For REG\_IBANK\_POS = 1 and REG\_EBANK\_POS = 0, the interleaving of banks within a device (per chip select) is limited to 4 banks. However, it can still interleave banks between the two chip selects. Thus, the DDR2/3/mDDR controller can keep a maximum of 16 banks (8 internal banks across 2 chip selects) open at a time, but can only interleave among eight of them.

Table 7-212. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=1 and REG\_EBANK\_POS=0

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Bank Address[2]                     | Row Address                         | Chip Select                         | Bank Address[1:0]                   | Column Address                         |
| # of bits defined by IBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by EBANK of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| IBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | EBANK=0 => 0 bits                   | IBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |
| IBANK=1 => 0 bits                   | RSIZE=1 => 10 bits                  | EBANK=1 => 1 bit                    | IBANK=1 => 1 bit                    | PAGESIZE=1 => 9 bits                   |
| IBANK=2 => 0 bits                   | RSIZE=2 => 11 bits                  |                                     | IBANK=2 => 2 bits                   | PAGESIZE=2 => 10 bits                  |
| IBANK=3 => 1 bit                    | RSIZE=3 => 12 bits                  |                                     | IBANK=3 => 3 bits                   | PAGESIZE=3 => 11 bits                  |
|                                     | RSIZE=4 => 13 bits                  |                                     |                                     |                                        |
|                                     | RSIZE=5 => 14 bits                  |                                     |                                     |                                        |
|                                     | RSIZE=6 => 15 bits                  |                                     |                                     |                                        |
|                                     | RSIZE=7 => 16 bits                  |                                     |                                     |                                        |

## 7.3.3.4.3 Address Mapping when REG\_IBANK\_POS=2 and REG\_EBANK\_POS = 0

For REG\_IBANK\_POS=2 and REG\_EBANK\_POS = 0, the interleaving of banks within a device (per chip select) is limited to 2 banks. However, it can still interleave banks between the two chip selects. Thus, the DDR2/3/mDDR controller can keep a maximum of 16 banks (eight internal banks across 2 chip selects) open at a time, but can only interleave among four of them.

## Table 7-213. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=2 and REG\_EBANK\_POS=0

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Bank Address[2:1]                   | Row Address                         | Chip Select                         | Bank Address[0]                     | Column Address                         |
| # of bits defined by IBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by EBANK of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| IBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | EBANK=0 => 0 bits                   | IBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |
| IBANK=1 => 0 bits                   | RSIZE=1 => 10 bits                  | EBANK=1 => 1 bit                    | IBANK=1 => 1 bit                    | PAGESIZE=1 => 9 bits                   |
| IBANK=2 => 1 bit                    | RSIZE=2 => 11 bits                  |                                     | IBANK=2 => 1 bit                    | PAGESIZE=2 => 10 bits                  |
| IBANK=3 => 2 bits                   | RSIZE=3 => 12 bits                  |                                     | IBANK=3 => 1 bit                    | PAGESIZE=3 => 11 bits                  |
|                                     | RSIZE=4 => 13 bits                  |                                     |                                     |                                        |
|                                     | RSIZE=5 => 14 bits                  |                                     |                                     |                                        |
|                                     | RSIZE=6 => 15 bits                  |                                     |                                     |                                        |
|                                     | RSIZE=7 => 16 bits                  |                                     |                                     |                                        |

## 7.3.3.4.4 Address Mapping when REG\_IBANK\_POS= 3 and REG\_EBANK\_POS = 0

For REG\_IBANK\_POS= 3 and REG\_EBANK\_POS = 0, the DDR2/3/mDDR controller cannot interleave banks within a device (per chip select). However, it can still interleave banks between the two chip selects. Thus, the DDR2/3/mDDR controller can keep a maximum of 16 banks (8 internal banks across 2 chip selects) open at a time, but can only interleave among two of them.

<!-- image -->

## Table 7-214. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=3 and REG\_EBANK\_POS=0

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Bank Address                        | Row Address                         | Chip Select                         | Column Address                         |
| # of bits defined by IBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by EBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| IBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | EBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |
| IBANK=1 => 1 bit                    | RSIZE=1 => 10 bits                  | EBANK=1 => 1 bit                    | PAGESIZE=1 => 9 bits                   |
| IBANK=2 => 2 bits                   | RSIZE=2 => 11 bits                  |                                     | PAGESIZE=2 => 10 bits                  |
| IBANK=3 => 3 bits                   | RSIZE=3 => 12 bits                  |                                     | PAGESIZE=3 => 11 bits                  |
|                                     | RSIZE=4 => 13 bits                  |                                     |                                        |
|                                     | RSIZE=5 => 14 bits                  |                                     |                                        |
|                                     | RSIZE=6 => 15 bits                  |                                     |                                        |
|                                     | RSIZE=7 => 16 bits                  |                                     |                                        |

## 7.3.3.4.5 Address Mapping when REG\_IBANK\_POS = 0 and REG\_EBANK\_POS = 1

For REG\_IBANK\_POS = 0 and REG\_EBANK\_POS = 1, the DDR2/3/mDDR memory controller interleaves among all the banks within a device (per chip select). However, the DDR2/3/mDDR memory controller cannot interleave banks between the two chip selects. Thus, the DDR2/3/mDDR memory controller can keep a maximum of 16 banks (8 internal banks across 2 chip selects) open at a time, but can only interleave among 8 of them.

## Table 7-215. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=0 and REG\_EBANK\_POS=1

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Chip Select                         | Row Address                         | Bank Address                        | Column Address                         |
| # of bits defined by EBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| EBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | IBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |
| EBANK=1 => 1 bit                    | RSIZE=1 => 10 bits                  | IBANK=1 => 1 bit                    | PAGESIZE=1 => 9 bits                   |
|                                     | RSIZE=2 => 11 bits                  | IBANK=2 => 2 bits                   | PAGESIZE=2 => 10 bits                  |
|                                     | RSIZE=3 => 12 bits                  | IBANK=3 => 3 bits                   | PAGESIZE=3 => 11 bits                  |
|                                     | RSIZE=4 => 13 bits                  |                                     |                                        |
|                                     | RSIZE=5 => 14 bits                  |                                     |                                        |
|                                     | RSIZE=6 => 15 bits                  |                                     |                                        |
|                                     | RSIZE=7 => 16 bits                  |                                     |                                        |

## 7.3.3.4.6 Address Mapping when REG\_IBANK\_POS = 1 and REG\_EBANK\_POS = 1

For REG\_IBANK\_POS = 1 and REG\_EBANK\_POS = 1, the interleaving of banks within a device (per chip select) is limited to 4 banks. Also, the DDR2/3/mDDR memory controller cannot interleave banks between the two chip selects. Thus, the DDR2/3/mDDR memory controller can keep a maximum of 16 banks (8 internal banks across 2 chip selects) open at a time, but can only interleave among four of them.

## Table 7-216. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=1 and REG\_EBANK\_POS = 1

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Chip Select                         | Bank Address[2]                     | Row Address                         | Bank Address[1:0]                   | Column Address                         |
| # of bits defined by EBANK of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| EBANK=0 => 0 bits                   | IBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | IBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |

<!-- image -->

## Table 7-216. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=1 and REG\_EBANK\_POS = 1 (continued)

| Logical Address   | Logical Address   | Logical Address    | Logical Address   | Logical Address       |
|-------------------|-------------------|--------------------|-------------------|-----------------------|
| Chip Select       | Bank Address[2]   | Row Address        | Bank Address[1:0] | Column Address        |
| EBANK=1 => 1 bit  | IBANK=1 => 0 bits | RSIZE=1 => 10 bits | IBANK=1 => 1 bit  | PAGESIZE=1 => 9 bits  |
|                   | IBANK=2 => 0 bits | RSIZE=2 => 11 bits | IBANK=2 => 2 bits | PAGESIZE=2 => 10 bits |
|                   | IBANK=3 => 1 bit  | RSIZE=3 => 12 bits | IBANK=3 => 2 bits | PAGESIZE=3 => 11 bits |
|                   |                   | RSIZE=4 => 13 bits |                   |                       |
|                   |                   | RSIZE=5 => 14 bits |                   |                       |
|                   |                   | RSIZE=6 => 15 bits |                   |                       |
|                   |                   | RSIZE=7 => 16 bits |                   |                       |

## 7.3.3.4.7 Address Mapping when REG\_IBANK\_POS = 2 and REG\_EBANK\_POS = 1

For REG\_IBANK\_POS = 2 and REG\_EBANK\_POS = 1, the interleaving of banks within a device (per chip select) is limited to 2 banks. Also, the DDR2/3/mDDR memory controller cannot interleave banks between the two chip selects. Thus, the DDR2/3/mDDR memory controller can keep a maximum of 16 banks (8 internal banks across 2 chip selects) open at a time, but can only interleave among two of them.

## Table 7-217. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=2 and REG\_EBANK\_POS = 1

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Chip Select                         | Bank Address[2:1]                   | Row Address                         | Bank Address[0]                     | Column Address                         |
| # of bits defined by EBANK of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| EBANK=0 => 0 bits                   | IBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | IBANK=0 => 0 bits                   | PAGESIZE=0 => 8 bits                   |
| EBANK=1 => 1 bit                    | IBANK=1 => 0 bits                   | RSIZE=1 => 10 bits                  | IBANK=1 => 1 bit                    | PAGESIZE=1 => 9 bits                   |
|                                     | IBANK=2 => 1 bit                    | RSIZE=2 => 11 bits                  | IBANK=2 => 1 bit                    | PAGESIZE=2 => 10 bits                  |
|                                     | IBANK=3 => 2 bits                   | RSIZE=3 => 12 bits                  | IBANK=3 => 1 bit                    | PAGESIZE=3 => 11 bits                  |
|                                     |                                     | RSIZE=4 => 13 bits                  |                                     |                                        |
|                                     |                                     | RSIZE=5 => 14 bits                  |                                     |                                        |
|                                     |                                     | RSIZE=6 => 15 bits                  |                                     |                                        |
|                                     |                                     | RSIZE=7 => 16 bits                  |                                     |                                        |

## 7.3.3.4.8 Address Mapping when REG\_IBANK\_POS = 3 and REG\_EBANK\_POS = 1

For REG\_IBANK\_POS = 3 and REG\_EBANK\_POS = 1, the DDR2/3/mDDR memory controller cannot interleave banks within a device (per chip select) or between the two chip selects. Thus, the DDR2/3/mDDR memory controller can keep a maximum of 16 banks (8 internal banks across two chip selects) open at a time, but cannot interleave among of them.

Table 7-218. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=3 and REG\_EBANK\_POS=1

| Logical Address                     | Logical Address                     | Logical Address                     | Logical Address                        |
|-------------------------------------|-------------------------------------|-------------------------------------|----------------------------------------|
| Chip Select                         | Bank Address                        | Row Address                         | Column Address                         |
| # of bits defined by EBANK of SDRCR | # of bits defined by IBANK of SDRCR | # of bits defined by RSIZE of SDRCR | # of bits defined by PAGESIZE of SDRCR |
| EBANK=0 => 0 bits                   | IBANK=0 => 0 bits                   | RSIZE=0 => 9 bits                   | PAGESIZE=0 => 8 bits                   |
| EBANK=1 => 1 bit                    | IBANK=1 => 1 bit                    | RSIZE=1 => 10 bits                  | PAGESIZE=1 => 9 bits                   |
|                                     | IBANK=2 => 2 bits                   | RSIZE=2 => 11 bits                  | PAGESIZE=2 => 10 bits                  |
|                                     | IBANK=3 => 3 bits                   | RSIZE=3 => 12 bits                  | PAGESIZE=3 => 11 bits                  |

<!-- image -->

## Table 7-218. OCP Address to DDR2/3/mDDR Address Mapping for REG\_IBANK\_POS=3 and REG\_EBANK\_POS=1 (continued)

| Logical Address   | Logical Address   | Logical Address    | Logical Address   |
|-------------------|-------------------|--------------------|-------------------|
| Chip Select       | Bank Address      | Row Address        | Column Address    |
|                   |                   | RSIZE=4 => 13 bits |                   |
|                   |                   | RSIZE=5 => 14 bits |                   |
|                   |                   | RSIZE=6 => 15 bits |                   |
|                   |                   | RSIZE=7 => 16 bits |                   |

Since the DDR2/3/mDDR memory controller interleaves among less number of banks when IBANK\_POS!= 0 or EBANK\_POS= 1, these cases are lower in performance than the IBANK\_POS= 0 case. Thus these cases are only recommended to be used along with partial array self-refresh where performance can be traded off for power savings.

## 7.3.3.5 Performance Management

## 7.3.3.5.1 Command Ordering and Scheduling

The DDR2/3/mDDR memory controller performs command re-ordering and scheduling in an attempt to achieve efficient transfers with maximum throughput. The goal is to maximize the utilization of the data, address, and command buses while hiding the overhead of opening and closing DDR2/3/mDDR SDRAM rows. Command re-ordering takes place within the command FIFO.

The DDR2/3/mDDR memory controller examines all the commands stored in the command FIFO to schedule commands to the external memory. All commands from same master will complete in order, regardless of the master priority. The memory controller does not guarantee ordering between commands from different masters. However, the memory controller will maintain data coherency. Therefore, the memory controller will block a command, regardless of master priority, if that command is to the same block address (2048 bytes) as an older command. Thus, the memory controller might have one or more pending read or write for each master. Among all pending reads, the memory controller selects all reads that have their corresponding SDRAM banks already open. Similarly, among all pending writes, the memory controller selects all writes that have their corresponding SDRAM banks already open.

As a result of the above reordering, at any point of time the memory controller might have several pending reads and writes that have their corresponding banks open. The memory controller then selects the highest priority read from pending reads, and the highest priority write from pending writes. If two or more commands have the highest priority, the memory controller selects the oldest command. As a result, the memory controller might now have a final read and a final write command. The memory controller will pick either the read or the write command depending on the value programmed in the Read Write Execution Threshold register. The memory controller will keep executing reads until the read threshold is met and then switch to executing writes. The memory controller will then keep executing writes until the write threshold is met and then switch back to executing reads. The memory controller will satisfy meeting the threshold values only if that type of command is available for execution, otherwise it will switch to the other type. Similarly, the memory controller will satisfy meeting the threshold value only if the FIFOs for that type have space (Read Data FIFO for reads and Write Status FIFO for writes), otherwise it will switch to the other type.

The memory controller completes executing an OCP command before it switches to another command.

All the accesses to an SDRAM are pipe-lined to maximize the external bus utilization. In other words accesses to an SDRAM are issued back to back such that there are minimum idle cycles between any two accesses. This includes the scheduling listed above to minimize the overhead of opening and closing of SDRAM banks. All of these is done while fulfilling the access timing requirements of an SDRAM.

Besides commands received from on-chip resources, the DDR2/3/mDDR memory controller also issues refresh commands. The DDR2/3/mDDR memory controller attempts to delay refresh commands as long as possible to maximize performance while meeting the SDRAM refresh requirements. As the DDR2/3/mDDR memory controller issues read, write, and refresh commands to DDR2/3/mDDR SDRAM device, it follows the following priority scheme:

<!-- image -->

1. (Highest priority) SDRAM refresh request due to Refresh Must level of refresh urgency reached (see Section 7.3.3.5.5).
2. Request for a read or a write.
3. SDRAM Activate commands.
4. SDRAM Deactivate commands.
5. SDRAM Deep Power-Down request.
6. SDRAM clock stop or Power-Down request.
7. SDRAM refresh request due to Refresh May or Release level of refresh urgency reached (Refer Section Refresh Scheduling)
8. (Lowest priority) SDRAM self-refresh request.

## 7.3.3.5.2 Command Starvation

The reordering and scheduling rules listed above may lead to command starvation, which is the prevention of certain commands from being processed by the DDR2/3/mDDR memory controller. Command starvation results from the following conditions:

- A continuous stream of high-priority read commands can block a low-priority write command
- A continuous stream of DDR2/3/mDDR SDRAM commands to a row in an open bank can block commands to the closed row in the same bank.

To avoid these conditions, the DDR2/3/mDDR memory controller can momentarily raise the priority of the oldest command in the command FIFO after a set number of transfers have been made. The REG\_COS\_COUNT\_1,REG\_COS\_COUNT\_2 field in the Interface Configuration Register (OCP\_CONFIG) sets the number of the transfers that must be made before the DDR2/3/mDDR memory controller will raise the priority of the oldest command. See Class of Service (COS) section for more details.

NOTE:

Leaving the REG\_COS bits at their default value (FFh) in the Interface Configuration register (OCP\_CONFIG) disables this feature of the DDR2/3/mDDR memory controller. This means commands can stay in the command FIFO indefinitely. Therefore, these bits should be set to FEh immediately following reset to enable this feature with the highest level of allowable memory transfers. It is suggested that system-level prioritization be set to avoid placing highbandwidth masters on the highest priority levels. These bits can be left as FEh unless advanced bandwidth/prioritization control is required.

## 7.3.3.5.3 Possible Race Condition

A race condition may exist when certain masters write data to the DDR2/3/mDDR memory controller. For example, if master A passes a software message via a buffer in DDR2/3/mDDR memory and does not wait for indication that the write completes, when master B attempts to read the software message it may read stale data and therefore receive an incorrect message. In order to confirm that a write from master A has landed before a read from master B is performed, master A must wait for the write completion status from the DDR2/3/mDDR memory controller before indicating to master B that the data is ready to be read. If master A does not wait for indication that a write is complete, it must perform the following workaround:

1. Perform the required write.
2. Perform a dummy write to the DDR2 memory controller module ID and revision register.
3. Perform a dummy read to the DDR2 memory controller module ID and revision register.
4. Indicate to master B that the data is ready to be read after completion of the read in step 3.

The completion of the read in step 3 ensures that the previous write was done.

For a list of the master peripherals that need this workaround, see the device-specific data sheet.

## 7.3.3.5.4 Class of Service (COS)

The commands in the Command FIFO can be mapped to 2 classes of service namely 1 and 2. The mapping of commands to a particular class of service can be done based on the priority or the connection ID.

The mapping based on priority can be done by setting the appropriate values in the Priority to Class of Service Mapping register (PRI\_COS\_MAP).

The mapping based on connection ID can be done by setting the appropriate values of connection ID and the masks in the Connection ID to Class of Service Mapping registers(CONNID\_COS\_1\_MAP and CONNID\_COS\_2\_MAP).

There are 3 connection ID and mask values that can be set for each class of service. In conjunction with the masks, each class of service can have a maximum of 144 connection IDs mapped to it. For example, a connection ID value of 0xFF along with a mask value of 0x3 will map all connection IDs from 0xF8 to 0xFF to that particular class of service.

Each class of service has an associated latency counter (REG\_COS\_COUNT). The value of this counter can be set in the Interface Configuration Register (OCP\_CONFIG). When the latency counter for a command expires, i.e., reaches the value programmed for the class of service that the command belongs to, that command will be the one that is executed next. If there are more than one commands that have expired latency counters, the command with the highest priority will be executed first. One exception to this rule is, if the oldest command in the queue has an expired reg\_pr\_old\_count, that command will be executed first irrespective of priority or class of service. This is done to prevent a continuous block effect.

The connection ID mapping allows the same connection ID to be put in both class of service 1 and 2. Also, a transaction might belong to one class of service if viewed by connection ID and might belong to another class of service if viewed by priority. In these cases, the command will belong to both class of service. The DDR2/3/mDDR memory controller will try executing the command as soon as possible, when the smaller of the two counters ( REG\_COS\_COUNT\_1 OR REG\_COS\_COUNT\_2) expire.

## 7.3.3.5.5 Refresh Scheduling

The DDR2/3/mDDR memory controller issues autorefresh (REFR) commands to DDR2/3/mDDR SDRAM devices at a rate defined in the refresh rate (REFRESH\_RATE) bit field in the SDRAM refresh control register (SDRFC). A refresh interval counter is loaded with the value of the REFRESH\_RATE bit field and decrements by 1 each cycle until it reaches zero. Once the interval counter reaches zero, it reloads with the value of the REFRESH\_RATE bit. Each time the interval counter expires, a refresh backlog counter increments by 1. Conversely, each time the DDR2/3/mDDR memory controller performs a REFR command, the backlog counter decrements by 1. This means the refresh backlog counter records the number of REFR commands the DDR2/3/mDDR memory controller currently has outstanding.

The DDR2/3/mDDR memory controller issues REFR commands based on the level of urgency. The level of urgency is defined below. Whenever the refresh level of urgency is reached, the DDR2/3/mDDR memory controller issues a REFR command before servicing any new memory access requests. Following a REFR command, the DDR2/3/mDDR memory controller waits T\_RFC cycles, defined in the SDRAM timing 1 register (SDRTIM1), before rechecking the refresh urgency level.

The refresh counters do not operate when the SDRAM memory is in self-refresh mode.

Table 7-219. Refresh Modes

| Urgency Level   | Description                                                                                                                                                                                                                       |
|-----------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Refresh May     | Backlog count is greater than 0. Indicates there is a backlog of REFR commands, when the DDR2/3/mDDR memory controller is not busy it will issue the REFR command.                                                                |
| Refresh Release | Backlog count is greater than 4. Indicates that the refresh backlog of REFR commands is getting high and when DDR2/3/mDDR memory controller is not busy it should issue the REFR command.                                         |
| Refresh Must    | Backlog count is greater than 7. Indicates that the refresh backlog of REFR commands is getting excessive and DDR2/3/mDDR memory controller should perform an auto refresh cycle before servicing any new memory access requests. |

<!-- image -->

<!-- image -->

The DDR2/3/mDDR memory controller starts servicing new memory accesses after Refresh Release level is cleared. If any of the commands in the Command FIFO have class of service latency counters that are expired, the DDR2/3/mDDR memory controller will not wait for Refresh Release level to be cleared but will only perform one refresh command and exit the refresh state.

## 7.3.3.5.6 Performance Counter Configuration

Table 7-220 shows the possible filter configurations for the two performance counters (REG\_CNTR1\_CFG and REG\_CNTR2\_CFG). These filter configurations can be used in conjunction with an OCP connection ID and/or an external chip select to obtain performance statistics for a particular OCP master and/or an external chip select.

Table 7-220. Filter Configurations for Performance Counters

| cntrN_cfg (1)   | cntrN_region_en   | cntrN_mconnid_en   | Description                                                                           |
|-----------------|-------------------|--------------------|---------------------------------------------------------------------------------------|
| 0x0             | 0x0               | 0x0 or 0x1         | Count total SDRAM accesses.                                                           |
| 0x1             | 0x0               | 0x0 or 0x1         | Count total SDRAM activations.                                                        |
| 0x2             | 0x0 or 0x1        | 0x0 or 0x1         | Count total reads.                                                                    |
| 0x3             | 0x0 or 0x1        | 0x0 or 0x1         | Count total writes.                                                                   |
| 0x4             | 0x0               | 0x0                | Count number of DDR clock cycles OCP Command FIFO is full.                            |
| 0x5             | 0x0               | 0x0                | Count number of DDR clock cycles OCP Write Data FIFO is full.                         |
| 0x6             | 0x0               | 0x0                | Count number of DDR clock cycles OCP Read Data FIFO is full.                          |
| 0x7             | 0x0               | 0x0                | Count number of DDR clock cycles OCP Return Command FIFO is full.                     |
| 0x8             | 0x0 or 0x1        | 0x0 or 0x1         | Count number of priority elevations.                                                  |
| 0x9             | 0x0               | 0x0                | Count number of DDR clock cycles that a command was pending.                          |
| 0xA             | 0x0               | 0x0                | Count number of DDR clock cycles for which the memory data bus was transferring data. |
| 0xB - 0xF       | 0x0               | 0x0                | Reserved for future use.                                                              |

(1) When MReqDebug is set to a 1 for a particular OCP command, the performance counters will not be incremented for that particular command if the cntrN\_cfg values are equal to 0x0, 0x1, 0x2, 0x3, or 0xA.

## 7.3.3.6 SDRAM Initialization

## 7.3.3.6.1 DDR2 Initialization

On coming out of reset, if the reg\_sdram\_type field in the SDRAM Config register is equal to 2 and the reg\_initref\_dis bit in the SDRAM Refresh Control register is set to 0, the EMIF performs a DDR2 SDRAM initialization sequence as follows:

1. Drives pad\_cke\_o low.
2. After 16 SDRAM refresh rate intervals, issues a NOP command with pad\_cke\_o held high. The SDRAM refresh rate is as defined in the reg\_refresh\_rate field description (see description of SDRAM Refresh Control register).
3. Issues a PRECHARGE command with pad\_a\_o[10] held high to indicate all banks.
4. Issues a LOAD MODE REGISTER command to the extended mode register 2 (pad\_ba\_o[2:0] = 0x2) with pad\_a\_o[15:0] set as follows:

| Bits          | Value   | Description                                                        |
|---------------|---------|--------------------------------------------------------------------|
| pad_a_o[15:8] | 0x0     | Reserved                                                           |
| pad_a_o[7]    | reg_srt | Self-refresh temperature range from SDRAM Refresh Control register |
| pad_a_o[6:4]  | 0x0     | Reserved                                                           |

<!-- image -->

| Bits         | Value    | Description                                                    |
|--------------|----------|----------------------------------------------------------------|
| pad_a_o[3]   | 0x0      | DCC disable                                                    |
| pad_a_o[2:0] | reg_pasr | Partial array self-refresh from SDRAM Refresh Control register |

5. Issues a LOAD MODE REGISTER command to the extended mode register 3 (pad\_ba\_o[2:0] = 0x3) with pad\_a\_o[15:0] = 0x0.
6. Issues a LOAD MODE REGISTER command to the extended mode register 1 (pad\_ba\_o[2:0] = 0x1) with the pad\_a\_o bits set as follows:
7. Issues a LOAD MODE REGISTER command to the mode register (pad\_ba\_o[2:0] = 0x0) with the pad\_a\_o bits set as follows:
8. After 267 clock cycles, issues a PRECHARGE command with pad\_a\_o[10] held high to indicate all banks.
9. After 2 AUTO REFRESH commands, issues a LOAD MODE REGISTER command to the mode register (pad\_ba\_o[2:0] = 0x0) with the pad\_a\_o bits set as follows:
10. Issues a LOAD MODE REGISTER command to the extended mode register 1 (pad\_ba\_o[2:0] = 0x1) with the pad\_a\_o bits set as follows:

| Bits           | Value           | Description                                                |
|----------------|-----------------|------------------------------------------------------------|
| pad_a_o[15:13] | 0x0             | Reserved                                                   |
| pad_a_o[12]    | 0x0             | Output buffer enabled                                      |
| pad_a_o[11]    | 0x0             | RDQS disable                                               |
| pad_a_o[10]    | !reg_ddr2_ddqs  | Differential DQS enable value from SDRAM Config register   |
| pad_a_o[9:7]   | 0x0             | Exit OCD calibration mode                                  |
| pad_a_o[6]     | reg_ddr_term[1] | DDR2 termination resistor value from SDRAM Config register |
| pad_a_o[5:3]   | 0x0             | Additive latency = 0                                       |
| pad_a_o[2]     | reg_ddr_term[0] | DDR2 termination resistor value from SDRAM Config register |
| pad_a_o[1]     | reg_sdram_drive | SDRAM drive strength from SDRAM Config register            |
| pad_a_o[0]     | 0x0             | Enable DLL                                                 |

| Bits           | Value       | Description                                                    |
|----------------|-------------|----------------------------------------------------------------|
| pad_a_o[15:13] | 0x0         | Reserved                                                       |
| pad_a_o[12]    | 0x0         | Fast exit active power-down exit time                          |
| pad_a_o[11:0]  | reg_t_wr    | Write recovery for auto precharge from SDRAM Timing 1 register |
| pad_a_o[8]     | 0x1         | DLL reset                                                      |
| pad_a_o[7]     | 0x0         | Normal mode                                                    |
| pad_a_o[6:4]   | reg_cl[2:0] | CAS latency from SDRAM Config register                         |
| pad_a_o[3]     | 0x0         | Sequential burst type                                          |
| pad_a_o[2:0]   | 0x3         | Burst length of 8                                              |

| Bits          | Value           | Description   |
|---------------|-----------------|---------------|
| pad_a_o[15:9] | Equal to step 7 |               |
| pad_a_o[8]    | 0x0             | DLL not reset |
| pad_a_o[7:0]  | Equal to step 7 |               |

| Bits           | Value           | Description             |
|----------------|-----------------|-------------------------|
| pad_a_o[15:10] | Equal to step 6 |                         |
| pad_a_o[9:7]   | 0x7             | Default OCD calibration |
| pad_a_o[6:0]   | Equal to step 6 |                         |

<!-- image -->

11. Issues a LOAD MODE REGISTER command to the extended mode register 1 (pad\_ba\_o[2:0] = 0x1) with the pad\_a\_o bits equal to step 6.
12. If the reg\_ddr\_disable\_dll bit in the SDRAM Config register is 1, issues a LOAD MODE REGISTER command to the extended mode register 1 (pad\_ba\_o[2:0] = 0x1) with the pad\_a\_o bits, set as follows:

| Bits          | Value           |
|---------------|-----------------|
| pad_a_o[15:1] | Equal to step 6 |
| pad_a_o[0]    | 0x1             |

## 13. The EMIF enters its idle state.

The EMIF also performs the initialization sequence whenever the SDRAM Config register is written. In this case, the EMIF starts at step 3.

The LOAD MODE REGISTER command may be referred to as MODE REGISTER SET command in some DDR2 datasheets. The EMIF does not perform any transactions until the DDR2 initialization sequence is complete.

The reg\_refresh\_rate value at reset is config\_refresh\_def\_val port value. When the EMIF comes out of reset, the delay time in step 2 resulting from the 16 refresh rate intervals + 8 cycles is approximately 16 * reg\_refresh\_rate / input frequency. The user must tie off the config\_refresh\_def\_val port with a correct value to meet the typical DDR2 device specified delay time of 200 us between power-up and the application of the PRECHARGE all command.

## 7.3.3.6.2 DDR3 Initialization

On coming out of reset, if the reg\_sdram\_type field in the SDRAM Config register is equal to 3 and the reg\_initref\_dis bit in the SDRAM Refresh Control register is set to 0, the EMIF performs a DDR3 SDRAM initialization sequence as follows:

1. Drives pad\_cke\_o low.
2. After 16 SDRAM refresh rate intervals, issues a NOP command with pad\_cke\_o held high. The SDRAM refresh rate is as defined in the reg\_refresh\_rate field description (see description of SDRAM Refresh Control register).
3. Issues a LOAD MODE REGISTER command to the extended mode register 2 (pad\_ba\_o[2:0] = 0x2) with pad\_a\_o[15:0] set as follows:
4. Issues a LOAD MODE REGISTER command to the extended mode register 3 (pad\_ba\_o[2:0] = 0x3) with pad\_a\_o[15:0] = 0x0.
5. Issues a LOAD MODE REGISTER command to the extended mode register 1 (pad\_ba\_o[2:0] = 0x1) with the pad\_a\_o bits set as follows:

| Bits           | Value       | Description                                                        |
|----------------|-------------|--------------------------------------------------------------------|
| pad_a_o[15:11] | 0x0         | Reserved                                                           |
| pad_a_o[10:9]  | reg_dyn_odt | Dynamic ODT value from SDRAM Config register                       |
| pad_a_o[8]     | 0x0         | Reserved                                                           |
| pad_a_o[7]     | reg_srt     | Self-refresh temperature range from SDRAM Refresh Control register |
| pad_a_o[6]     | reg_asr     | Auto self-refresh enable from SDRAM Refresh Control register       |
| pad_a_o[5]     | 0x0         | Reserved                                                           |
| pad_a_o[4:3]   | reg_cwl     | CAS write latency from SDRAM Config register                       |
| pad_a_o[2:0]   | reg_pasr    | Partial array self-refresh from SDRAM Refresh Control register     |

| Bits           | Value   | Description           |
|----------------|---------|-----------------------|
| pad_a_o[15:13] | 0x0     | Reserved              |
| pad_a_o[12]    | 0x0     | Output buffer enabled |
| pad_a_o[11]    | 0x0     | TDQS disable          |
| pad_a_o[10]    | 0x0     | Reserved              |

<!-- image -->

| Bits         | Value               | Description                                                |
|--------------|---------------------|------------------------------------------------------------|
| pad_a_o[9]   | reg_ddr_term[2]     | DDR3 termination resistor value from SDRAM Config register |
| pad_a_o[8]   | 0x0                 | Reserved                                                   |
| pad_a_o[7]   | 0x0                 | Write leveling disabled                                    |
| pad_a_o[6]   | reg_ddr_term[1]     | DDR3 termination resistor value from SDRAM Config register |
| pad_a_o[5]   | reg_sdram_drive [1] | SDRAM drive strength from SDRAM Config register            |
| pad_a_o[4:3] | 0x0                 | Additive latency = 0                                       |
| pad_a_o[2]   | reg_ddr_term[0]     | DDR3 termination resistor value from SDRAM Config register |
| pad_a_o[1]   | reg_sdram_drive[0]  | SDRAM drive strength from SDRAM Config register            |
| pad_a_o[0]   | 0x0                 | reg_ddr_disable_dll value from SDRAM Config register       |

## 6. Issues a LOAD MODE REGISTER command to the mode register (pad\_ba\_o[2:0] = 0x0) with the pad\_a\_o bits set as follows:

| Bits           | Value       | Description                                                    |
|----------------|-------------|----------------------------------------------------------------|
| pad_a_o[15:13] | 0x0         | Reserved                                                       |
| pad_a_o[12]    | 0x0         | Fast exit active power-down exit time                          |
| pad_a_o[11:9]  | reg_t_wr    | Write recovery for auto precharge from SDRAM Timing 1 register |
| pad_a_o[8]     | 0x1         | DLL reset                                                      |
| pad_a_o[7]     | 0x0         | Normal mode                                                    |
| pad_a_o[6:4]   | reg_cl[3:1] | CAS latency from SDRAM Config register                         |
| pad_a_o[3]     | 0x0         | Sequential burst type                                          |
| pad_a_o[2]     | reg_cl[0]   | CAS latency from SDRAM Config register                         |
| pad_a_o[1:0]   | 0x0         | Burst length of 8                                              |

7. Issues a ZQCL command to start long ZQ calibration.
8. Issues an AUTO REFRESH command.
9. The EMIF enters its idle state.

The EMIF also performs the initialization sequence whenever the SDRAM Config register is written. In this case, the EMIF starts at step 3.

The LOAD MODE REGISTER command may be referred to as MODE REGISTER SET command in some DDR3 datasheets. The EMIF does not perform any transactions until the DDR3 initialization sequence is complete.

The reg\_refresh\_rate value at reset is config\_refresh\_def\_val port value. When the EMIF comes out of reset, the delay time in step 2 resulting from the 16 refresh rate intervals + 8 cycles is approximately 16 * reg\_refresh\_rate / input frequency. The user must tie off the config\_refresh\_def\_val port with a correct value to meet the typical DDR3 device specified delay time of 500 us between the deassertion of reset and the assertion of CKE.

## 7.3.3.6.3 LPDDR1 Initialization

On coming out of reset, if the reg\_sdram\_type field in the SDRAM Config register is equal to 1 and the reg\_initref\_dis bit in the SDRAM Refresh Control register is set to 0, the EMIF performs a LPDDR1 SDRAM initialization sequence as follows:

1. Drives pad\_cke\_o high and starts to continuously issues NOP commands.
2. After 16 SDRAM refresh rate intervals, issues a PRECHARGE command with pad\_a\_o[10] held high to indicate all banks. The SDRAM refresh rate is as defined in the reg\_refresh\_rate field description (see description of SDRAM Refresh Control register).
3. After 2 AUTO REFRESH commands, issues a LOAD MODE REGISTER command to the mode register (pad\_ba\_o[2:0] = 0x0) with the pad\_a\_o bits set as follows:

<!-- image -->

www.ti.com

| Bits          | Value       | Description                            |
|---------------|-------------|----------------------------------------|
| pad_a_o[15:7] | 0x0         | Normal operation                       |
| pad_a_o[6:4]  | reg_cl[2:0] | CAS latency from SDRAM Config register |
| pad_a_o[3]    | 0x0         | Sequential burst type                  |
| pad_a_o[2:0]  | 0x3         | Burst length of 8                      |

4. Issues a LOAD MODE REGISTER command to the extended mode register (pad\_ba\_o[2:0] = 0x2) with the pad\_a\_o bits set as follows:

| Bits          | Value           | Description                                                    |
|---------------|-----------------|----------------------------------------------------------------|
| pad_a_o[15:7] | 0x0             | Reserved                                                       |
| pad_a_o[6:5]  | reg_sdram_drive | Drive strength from SDRAM Config register                      |
| pad_a_o[4:3]  | 0x0             | Internal temperature compensated self-refresh                  |
| pad_a_o[2:0]  | reg_pasr        | Partial array self-refresh from SDRAM Refresh Control register |

## 5. The EMIF enters its idle state.

The EMIF also performs the initialization sequence whenever the SDRAM Config register is written. In this case, the EMIF starts at step 3.

The LOAD MODE REGISTER command may be referred to as MODE REGISTER SET command in some LPDDR1 datasheets. The EMIF does not perform any transactions until the LPDDR1 initialization sequence is complete.

The reg\_refresh\_rate value at reset is config\_refresh\_def\_val port value. When the EMIF comes out of reset, the delay time in step 2 resulting from the 16 refresh rate intervals + 8 cycles is approximately 16 * reg\_refresh\_rate / input frequency. The user must tie off the config\_refresh\_def\_val port with a correct value to meet the typical LPDDR1 device specified delay time of 200 us between power-up and the application of the PRECHARGE all command.

## 7.3.3.7 DDR3 Read-Write Leveling

The DDR2/3/mDDR memory controller supports read-write leveling in conjunction with the DDR PHY. The DDR2/3/mDDR memory controller supports two types of write/read leveling:

1. Full leveling
2. 2.
3. Incremental leveling

NOTE:

Please refer the device specific data sheet to know the type of leveling supported.

Each leveling type has three parts:

1. Write leveling
2. Read DQS gate training
3. Read data eye training

Read and write leveling is only supported to DDR3 memory.

The DDR2/3/mDDR memory controller does not perform full leveling after initialization upon reset deassertion. Full leveling must be triggered by software after the DDR2/3/mDDR memory controller registers are properly configured. The DDR2/3/mDDR memory controller supports triggering of full leveling through software through the use of the REG\_RDWRLVLFULL\_START field in the Read-Write Leveling Control register(RWLCR). Since full leveling takes considerable amount of time and refreshes cannot be issued to DDR3 when DDR3 is put in leveling mode, refresh interval will be violated and data inside DDR3 can be lost. Although, this is not an issue at power-up, this might be an issue if full leveling is triggered when DDR3 is functional.

<!-- image -->

The memory controller supports incremental leveling to better track voltage and temperature changes during normal operation. The incremental leveling can be enabled by writing a non-zero value to the REG\_WRLVLINC\_INT, REG\_RDLVLGATEINC\_INT, and REG\_RDLVLINC\_INT fields in the Read-Write Leveling Control register(RWLCR). The memory controller periodically triggers incremental write leveling every time REG\_WRLVLINC\_INT expires. In other words, the REG\_WRLVLINC\_INT defines the interval between successive incremental write leveling.

Similarly, the memory controller periodically triggers incremental read DQS gate training every time REG\_RDLVLGATEINC\_INT expires, and triggers incremental read data eye training every time REG\_RDLVLINC\_INT expires.

To minimize impact on bandwidth, the software can program these intervals such that these three intervals do not expire at same time. The value of interval programmed is dependent on the slope of voltage and temperature changes.

The memory controller supports increasing the rate of incremental leveling automatically for a defined period of time. This can be achieved by programming the Read-Write Leveling Ramp Window register(RDWR\_LVL\_RMP\_WIN) and the Read-Write Leveling Ramp Control register(RDWR\_LVL\_RMP\_CTRL). Whenever a pulse is received, the memory controller would use the intervals programmed in the Read-Write Leveling Ramp Control register until the REG\_RDWRLVLINC\_RMP\_WIN in the Read-Write Leveling Ramp Window register expires. After the expiration of REG\_RDWRLVLINC\_RMP\_WIN the memory controller switches back to use the intervals programmed in the Read-Write Leveling Control register.

To guarantee none of the incremental leveling events are missed, the REG\_RDWRLVLINC\_RMP\_WIN must be programmed greater than the intervals in the Read-Write Leveling Ramp Control register.

If the memory controller is in Self-Refresh or Power-Down modes when any of the incremental leveling intervals expire, the memory controller will exit Self-Refresh or Power-Down mode, perform the required leveling, and then re-enter the Self-Refresh or Power-Down mode. The memory controller also triggers incremental leveling on Self-Refresh exit.

## 7.3.3.8 PRCM Sequence for DDR2/3/mDDR Memory controller

The memory controller clock, reset and power are handled by the device PRCM module. Refer to the Power Reset Clock Management (PRCM) chapter for the PRCM register details.

## 7.3.3.9 Interrupt Support

The DDR2/3/mDDR controller is compliant with Open Core Protocol Specification (OCP-IP 2.2). The controller supports only Idle, Write, Read, and WriteNonPost command types. Also, the controller supports only incrementing, wrapping, and 2-dimensional block addressing modes. The controller supports generation of an error interrupt if an unsupported command or a command with unsupported addressing mode is received.

## 7.3.3.10 EDMA Event Support

The DDR2/3/mDDR memory controller is a DMA slave peripheral and therefore does not generate EDMA events. Data read and write requests may be made directly by masters including the EDMA controller.

## 7.3.3.11 Emulation Considerations

The DDR2/3/mDDR memory controller will remain fully functional during emulation halts to allow emulation access to external memory.

## 7.3.3.12 Power Management

This section defines the power management capabilities and requirements.

<!-- image -->

## 7.3.3.12.1 Clock Stop Mode

The memory controller supports Clock Stop mode for LPDDR1/mDDR. The memory controller automatically stops the clocks to the memory, after the memory controller is idle for REG\_CS\_TIM number of DDR clock cycles and the REG\_LP\_MODE field is set to 1. The REG\_LP\_MODE and REG\_CS\_TIM fields can be programmed in the power management control register (PMCR).

When the clock to the memory is stopped, the memory controller services register accesses as normal. If an SDRAM access is requested, or the Refresh Must level is reached while in the Clock Stop mode, the memory controller will start the clocks. The memory controller now can issue any commands. If the power saving mode is changed by changing REG\_LP\_MODE from 1 to some other value, the memory controller will exit Clock Stop mode and enter the new power saving mode.

## 7.3.3.12.2 Self-Refresh Mode

The DDR2/3/mDDR memory controller supports self-refresh mode for low power. The memory controller automatically puts the SDRAM into self-refresh after the memory controller is idle for REG\_SR\_TIM number of DDR clock cycles and the REG\_LP\_MODE field is set to 2. The REG\_LP\_MODE and REG\_SR\_TIM fields can be programmed in the Power Management Control register(PMCR). The memory controller will complete all pending refreshes before it puts the SDRAM into self-refresh. Therefore, after the expiration of REG\_SR\_TIM, the memory controller will start issuing refreshes to complete the refresh backlog, and then issue a SELF-REFRESH command to the SDRAM.

In self-refresh mode, the memory controller automatically stops the clocks DDR\_CLK to the SDRAM. The memory controller maintains DDR\_CKE low to maintain the self-refresh state. When the SDRAM is in selfrefresh, the memory controller services register accesses as normal. If the REG\_LP\_MODE field is set not equal to 2, or an SDRAM access is requested while it is in self-refresh, and T\_CKE + 1 cycles have elapsed since the SELF-REFRESH command was issued, the memory controller will bring the SDRAM out of self-refresh. The value of T\_CKE is taken from SDRAM Timing 2 register. For DDR3, memory controller will also exit self-refresh to perform incremental leveling.

## Exit sequence of self-refresh mode for LPDDR1 device: The memory controller:

- Enables clocks.
- Drives DDR\_CKE high.
- Waits for T\_XSNR + 1 cycles. The value of T\_XSNR is taken from SDRAM Timing 2 register.
- Starts an auto-refresh cycle in the next cycle.
- Enters its idle state and can issue any commands.

## Exit sequence of self-refresh mode for DDR2 device: The memory controller:

- Enables clocks.
- Drives DDR\_CKE high.
- Waits for T\_XSNR + 1 cycles. The value of T\_XSNR is taken from SDRAM Timing 2 register.
- If the REG\_DDR\_DISABLE\_DLL bit in the SDRAM Config register is 1, issues a LOAD MODE REGISTER command to the extended mode register 1 with the pad\_a\_o bits set as follows:

| Bits         | Value           | Description                                                |
|--------------|-----------------|------------------------------------------------------------|
| DDR_A[15:13] | 0x0             | !reg_ddr2_ddqs                                             |
| DDR_A[12]    | 0x0             | Output buffer enabled                                      |
| DDR_A[11]    | 0x0             | RDQS disable                                               |
| DDR_A[10]    | !reg_ddr2_ddqs  | Differential DQS enable value from SDRAM Config register   |
| DDR_A[9:7]   | 0x0             | Exit OCD calibration mode                                  |
| DDR_A[6]     | reg_ddr_term[1] | DDR2 termination resistor value from SDRAM Config register |
| DDR_A[5:3]   | 0x0             | Additive latency = 0                                       |
| DDR_A[2]     | reg_ddr_term[0] | DDR2 termination resistor value from SDRAM Config register |
| DDR_A[1]     | reg_sdram_drive | SDRAM drive strength from SDRAM Config register            |
| DDR_A[0]     | 0x1             | Disable DLL                                                |

- Starts an auto-refresh cycle in the next cycle.
- Enters its idle state and can issue any other commands except a write or a read. A write or a read will only be issued after T\_XSRD + 1 clock cycles have elapsed since DDR\_CKE is driven high. The value of T\_XSRD is taken from SDRAM Timing 2 register.

Exit sequence of self-refresh mode for DDR3 device: The memory controller:

- Enables clocks.
- Drives DDR\_CKE high.
- Waits for T\_XSNR + 1 cycles. The value of T\_XSNR is taken from SDRAM Timing 2 register.
- If the REG\_DDR\_DISABLE\_DLL bit in the SDRAM Config register is 1, issues a LOAD MODE REGISTER command to the extended mode register 1 with the pad\_a\_o bits set as follows:
- Starts an auto-refresh cycle in the next cycle.
- Performs one write incremental leveling.
- Performs read DQS incremental training.
- Performs read data-eye incremental training.
- Enters its idle state and can issue any other commands except a write or a read. A write or a read will only be issued after T\_XSRD + 1 clock cycles have elapsed since DDR\_CKE is driven high. The value of T\_XSRD is taken from SDRAM Timing 2 register.

| Bits         | Value              | Description                                                |
|--------------|--------------------|------------------------------------------------------------|
| DDR_A[15:13] | 0x0                | Reserved                                                   |
| DDR_A[12]    | 0x0                | Output buffer enabled                                      |
| DDR_A[11]    | 0x0                | TDQS disable                                               |
| DDR_A[10]    | 0x0                | Reserved                                                   |
| DDR_A[9]     | reg_ddr_term[2]    | DDR3 termination resistor value from SDRAM Config register |
| DDR_A[8]     | 0x0                | Reserved                                                   |
| DDR_A[7]     | 0x0                | Write leveling disabled                                    |
| DDR_A[6]     | reg_ddr_term[1]    | DDR3 termination resistor value from SDRAM Config register |
| DDR_A[5]     | reg_sdram_drive[1] | SDRAM drive strength from SDRAM Config register            |
| DDR_A[4:3]   | 0x0                | Additive latency = 0                                       |
| DDR_A[2]     | reg_ddr_term[0]    | DDR3 termination resistor value from SDRAM Config register |
| DDR_A[1]     | reg_sdram_drive[0] | SDRAM drive strength from SDRAM Config register            |
| DDR_A[0]     | 0x1                | Disable DLL                                                |

## 7.3.3.12.3 Power Down Mode

The memory controller also supports power-down mode for low power. The memory controller automatically puts the SDRAM into power-sDown after the memory controller is idle for REG\_PD\_TIM number of DDR clock cycles and the REG\_LP\_MODE field is set to 4. The REG\_LP\_MODE and REG\_PD\_TIM fields can be programmed in the Power Management Control register (PMCR). If the Refresh Must level is not reached before the entry into power-down, the memory controller will not precharge all banks before issuing the POWER-DOWN command. This will result in SDRAM entering active power-down mode.

If the Refresh Must level is reached before the entry into power-down, the memory controller will precharge all banks and issue refreshes until the Refresh Release Level is reached before issuing the POWER-DOWN command. This will result in SDRAM entering precharge power-down mode.

In power-down mode, the memory controller does not stop the clocks DDR\_CLK to the SDRAM. The memory controller maintains DDR\_CKE low to maintain the power-down state.

<!-- image -->

<!-- image -->

When the SDRAM is in power-down, the memory controller services register accesses as normal. If the REG\_LP\_MODE field is set not equal to 4, or an SDRAM access is requested, or the Refresh Must level is reached while the SDRAM is in power-down, the memory controller will bring the SDRAM out of powerdown. For DDR3, memory controller will also exit power-down to perform incremental leveling.

Exit sequence of power-down mode for DDR2, DDR3 and LPDDR1: The memory controller

- Drives DDR\_CKE high after T\_CKE + 1 cycles have elapsed since the POWER-DOWN command was issued. The value of T\_CKE is taken from SDRAM Timing 2 register.
- Waits for T\_XP + 1 cycles. The value of T\_XP is taken from SDRAM Timing 2 register.
- Enters its idle state and can issue any commands.

## 7.3.3.12.4 Deep Power-Down Mode

For ultimate power savings, the memory controller supports deep power-down mode for LPDDR1.

The SDRAM can be forced into deep power-down through software by setting the reg\_dpd\_en field in the Power Management Control register to 1. In this case, the memory controller will continue normal operation until all SDRAM memory access requests have been serviced. At this point the memory controller will issue a DEEP POWER-DOWN command. The memory controller then maintains pad\_cke\_o low to maintain the Deep Power-Down state. In deep power-down mode, the memory controller automatically stops the clocks to the SDRAM.

Setting the REG\_DPD\_EN field to 1 overrides the setting of REG\_LP\_MODE field. Therefore, if the SDRAM is in Clock Stop, Self Refresh, or Power-Down mode, and REG\_DPD\_EN field is set to 1, the memory controller will exit those modes and go into deep power-down mode.

When the SDRAM is in deep power-down, the memory controller services register accesses as normal.

If the REG\_DPD\_EN field is set to 0, or an SDRAM access is requested, the memory controller will bring the SDRAM out of deep power-down.

Exit sequence for LPDDR1: The memory controller:

- Performs SDRAM initialization as specified in the LPDDR1(mDDR) SDRAM Memory Initialization section.
- Enters its idle state and can issue any commands.

Since the memory controller performs initialization upon deep power-down exit, the REG\_REFRESH\_RATE field in the SDRAM Refresh Control register must be set appropriately to meet the 200µs wait requirement for LPDDR1.

## 7.3.3.12.5 Save and Restore Mode

The DDR2/3/mDDR memory controller supports save and restore mechanism to completely switch off power to the DDR2/3/mDDR memory controller. The following sequence of operations is followed to put DDR2/3/mDDR memory controller in off mode:

An external master reads the following memory mapped registers and saves their value external to the DDR2/3/mDDR memory controller.

1. SDRAM Config register (SDRCR)
2. SDRAM Config 2 register
3. SDRAM Refresh Control register (SDRRCR)
4. SDRAM Refresh Control Shadow register (SDRRCSR)
5. SDRAM Timing 1 register (SDRTIM1)
6. SDRAM Timing 1 Shadow register (SDRTIM1SR)
7. SDRAM Timing 2 register (SDRTIM2)
8. SDRAM Timing 2 Shadow register (SDRTIM2SR)
9. SDRAM Timing 3 register (SDRTIM3)
10. SDRAM Timing 3 Shadow register (SDRTIM3SR)
11. Power Management Control register (PMCR)