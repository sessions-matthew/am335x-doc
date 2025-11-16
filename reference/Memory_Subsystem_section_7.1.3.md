<!-- image -->

www.ti.com

## 7.1.3 GPMC High-Level Programming Model Overview

The high-level programming model introduces a top-down approach for users that need to configure the GPMC module. Figure 7-41 shows a programming model top-level diagram for the GPMC. Each block of the diagram is described in one of the following subsections through a set of registers to configure. Table 7-21 and Table 7-22 list each step in the model.

Figure 7-41. Programming Model Top-Level Diagram

<!-- image -->

<!-- image -->

<!-- image -->

Table 7-21. GPMC Configuration in NOR Mode

| Step                          | Description    |
|-------------------------------|----------------|
| NOR Memory Type               | See Table 7-24 |
| NOR Chip-Select Configuration | See Table 7-25 |
| NOR Timings Configuration     | See Table 7-26 |
| Wait Pin Configuration        | See Table 7-27 |
| Enable Chip-Select            | See Table 7-28 |

Table 7-22. GPMC Configuration in NAND Mode

| Step                              | Description    |
|-----------------------------------|----------------|
| NAND Memory Type                  | See Table 7-29 |
| NAND Chip-Select Configuration    | See Table 7-30 |
| Write Operations (Asynchronous)   | See Table 7-31 |
| Read Operations (Asynchronous)    | See Table 7-31 |
| ECC Engine                        | See Table 7-32 |
| Prefetch and Write-Posting Engine | See Table 7-33 |
| Wait Pin Configuration            | See Table 7-34 |
| Enable Chip-Select                | See Table 7-35 |

## 7.1.3.1 GPMC Initialization

Table 7-23 describes the settings required to reset the GPMC.

Table 7-23. Reset GPMC

| Sub-process Name       | Register / Bitfield         |   Value |
|------------------------|-----------------------------|---------|
| Start a software reset | GPMC_SYSCONFIG[1] SOFTRESET |       1 |
| Wait until             | GPMC_SYSSTATUS[0] RESETDONE |       1 |

## 7.1.3.2 GPMC Configuration in NOR Mode

This section gives a generic configuration for parameters related to the NOR memory connected to the GPMC. Table 7-24 through Table 7-28 list the steps to configure the GPMC in NOR mode.

NOTE:

In the tables of this section, 'x' in Value column stands for 'depends on configuration'.

## Table 7-24. NOR Memory Type

| Sub-process Name                                            | Register / Bitfield                            | Value   |
|-------------------------------------------------------------|------------------------------------------------|---------|
| Set the NOR protocol                                        | GPMC_CONFIG1_i[11-10] DEVICETYPE               | 0       |
| Set a device size                                           | GPMC_CONFIG1_i[13-12] DEVICESIZE               | x       |
| Select an address and data multiplexing protocol            | GPMC_CONFIG1_i[9] MUXADDDATA                   | x       |
| Set the attached device page length                         | GPMC_CONFIG1_i[24-23] ATTACHEDDEVICEPAGELENGTH | x       |
| Set the wrapping burst capabilities                         | GPMC_CONFIG1_i[31] WRAPBURST                   | x       |
| Select a timing signals latencies factor                    | GPMC_CONFIG1_i[4] TIMEPARAGRANULARITY          | x       |
| Select an output clock frequency                            | GPMC_CONFIG1_i[1-0] GPMCFCLKDIVIDER            | x       |
| Choose an output clock activation time                      | GPMC_CONFIG1_i[26-25] CLKACTIVATIONTIME        | x       |
| Set a single or multiple access for read operations         | GPMC_CONFIG1_i[30] READMULTIPLE                | x       |
| Set a synchronous or asynchronous mode for read operations  | GPMC_CONFIG1_i[29] READTYPE                    | x       |
| Set a single or multiple access for write operations        | GPMC_CONFIG1_i[28] WRITEMULTIPLE               | x       |
| Set a synchronous or asynchronous mode for write operations | GPMC_CONFIG1_i[27] WRITETYPE                   | x       |

## Table 7-25. NOR Chip-Select Configuration

| Sub-process Name                    | Register / Bitfield              | Value   |
|-------------------------------------|----------------------------------|---------|
| Select the chip-select base address | GPMC_CONFIG7_i[5-0] BASEADDRESS  | x       |
| Select the chip-select mask address | GPMC_CONFIG7_i[11-8] MASKADDRESS | x       |

## Table 7-26. NOR Timings Configuration

| Sub-process Name                                             | Register / Bitfield   | Value   |
|--------------------------------------------------------------|-----------------------|---------|
| Configure adequate timing parameters in various memory modes | See Section 7.1.3.5   |         |

## Table 7-27. WAIT Pin Configuration

| Sub-process Name                                           | Register / Bitfield                      | Value   |
|------------------------------------------------------------|------------------------------------------|---------|
| Enable or disable wait pin monitoring for read operations  | GPMC_CONFIG1_i[22] WAITREADMONITORING    | x       |
| Enable or disable wait pin monitoring for write operations | GPMC_CONFIG1_i[21] WAITWRITEMONITORING   | x       |
| Select a wait pin monitoring time                          | GPMC_CONFIG1_i[19-18] WAITMONITORINGTIME | x       |
| Choose the input wait pin for the chip-select              | GPMC_CONFIG1_i[17-16] WAITPINSELECT      | x       |

<!-- image -->

<!-- image -->

## Table 7-28. Enable Chip-Select

| Sub-process Name                                           | Register / Bitfield       | Value   |
|------------------------------------------------------------|---------------------------|---------|
| When all parameters are configured, enable the chip-select | GPMC_CONFIG7_i[6] CSVALID | x       |

## 7.1.3.3 GPMC Configuration in NAND Mode

This section gives a generic configuration for parameters related to NAND memory connected to the GPMC.

## Table 7-29. NAND Memory Type

| Sub-process Name                                                                                     | Register / Bitfield                   | Value   |
|------------------------------------------------------------------------------------------------------|---------------------------------------|---------|
| Set the NAND protocol                                                                                | GPMC_CONFIG1_i[11-10] DEVICETYPE      | 2h      |
| Set a device size                                                                                    | GPMC_CONFIG1_i[13-12] DEVICESIZE      | x       |
| Set the address and data multiplexing protocol to non- multiplexed attached device                   | GPMC_CONFIG1_i[9] MUXADDDATA          | 0       |
| Select a timing signals latencies factor                                                             | GPMC_CONFIG1_i[4] TIMEPARAGRANULARITY | x       |
| Set a synchronous or asynchronous mode and a single or multiple access for read and write operations | See Section 7.1.3.4                   | x       |

Table 7-30. NAND Chip-Select Configuration

| Sub-process Name                                       | Register / Bitfield              | Value   |
|--------------------------------------------------------|----------------------------------|---------|
| Select the chip-select base address                    | GPMC_CONFIG7_i[5-0] BASEADDRESS  | x       |
| Select the chip-select minimum granularity (16M bytes) | GPMC_CONFIG7_i[11-8] MASKADDRESS | x       |

Table 7-31. Asynchronous Read and Write Operations

| Sub-process Name                                           | Register / Bitfield   | Value   |
|------------------------------------------------------------|-----------------------|---------|
| Configure adequate timing parameters in asynchronous modes | See Section 7.1.3.5   |         |

## Table 7-32. ECC Engine

| Sub-process Name                                                                                      | Register / Bitfield                                                               | Value            |
|-------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------|------------------|
| Select the ECC result register where the first ECC computation is stored (Only applies to Hamming)    | GPMC_ECC_CONTROL[3-0] ECCPOINTER                                                  | x                |
| Clear all ECC result registers                                                                        | GPMC_ECC_CONTROL[8] ECCCLEAR                                                      | Write 1 to clear |
| Define ECCSIZE0 and ECCSIZE1                                                                          | GPMC_ECC_SIZE_CONFIG[19-12] ECCSIZE0 and GPMC_ECC_SIZE_CONFIG[29-22] ECCSIZE1     | x                |
| Select the size of each of the 9 result registers (size specified by ECCSIZE0 or ECCSIZE1)            | GPMC_ECC_SIZE_CONFIG[j-1] ECCjRESULTSIZE where j = 1 to 9                         | x                |
| Select the chip-select where ECC is computed                                                          | GPMC_ECC_SIZE_CONFIG[3-1] ECCCS                                                   | x                |
| Select the Hamming code or BCH code ECC algorithm in use                                              | GPMC_ECC_SIZE_CONFIG[16] ECCALGORITHM                                             | x                |
| Select word size for ECC calculation                                                                  | GPMC_ECC_SIZE_CONFIG[7] ECC16B                                                    | x                |
| If the BCH code is used, Set an error correction capability and Select a number of sectors to process | GPMC_ECC_SIZE_CONFIG[13-12] ECCBCHTSEL and GPMC_ECC_SIZE_CONFIG[6-4] ECCTOPSECTOR | x                |
| Enable the ECC computation                                                                            | GPMC_ECC_SIZE_CONFIG[0] ECCENABLE                                                 | 1                |

<!-- image -->

<!-- image -->

www.ti.com

## Table 7-33. Prefetch and Write-Posting Engine

| Sub-process Name                                                                                                                                       | Register / Bitfield                            | Value   |
|--------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------|---------|
| Disable the engine before configuration                                                                                                                | GPMC_PREFETCH_CONTROL[0] STARTENGINE           | 0       |
| Select the chip-select associated with a NAND device where the prefetch engine is active                                                               | GPMC_PREFETCH_CONFIG1[26-24] ENGINECSSELECTOR  | x       |
| Select access direction through prefetch engine, read or write.                                                                                        | GPMC_PREFETCH_CONFIG1[0] ACCESSMODE            | x       |
| Select the threshold used to issue a DMA request                                                                                                       | GPMC_PREFETCH_CONFIG1[14-8] FIFOTHRESHOLD      | x       |
| Select either DMA synchronized mode or SW manual mode.                                                                                                 | GPMC_PREFETCH_CONFIG1[2] DMAMODE               | x       |
| Select if the engine immediately starts accessing the memory upon STARTENGINE assertion or if hardware synchronization based on a WAIT signal is used. | GPMC_PREFETCH_CONFIG1[3] SYNCHROMODE           | x       |
| Select which wait pin edge detector should start the engine in synchronized mode                                                                       | GPMC_PREFETCH_CONFIG1[5-4] WAITPINSELECTOR     | x       |
| Enter a number of clock cycles removed to timing parameters (For all back-to-back accesses to the NAND flash but not the first one)                    | GPMC_PREFETCH_CONFIG1[30-28] CYCLEOPTIMIZATION | x       |
| Enable the prefetch postwite engine                                                                                                                    | GPMC_PREFETCH_CONFIG1[7] ENABLEENGINE          | 1       |
| Select the number of bytes to be read or written by the engine to the selected chip-select                                                             | GPMC_PREFETCH_CONFIG2[13-0] TRANSFERCOUNT      | x       |
| Start the prefetch engine                                                                                                                              | GPMC_PREFETCH_CONTROL[0] STARTENGINE           | 1       |

## Table 7-34. WAIT Pin Configuration

| Sub-process Name                                                                 | Register / Bitfield                        | Value   |
|----------------------------------------------------------------------------------|--------------------------------------------|---------|
| Selects when the engine starts the access to CS                                  | GPMC_PREFETCH_CONFIG1[3] SYNCHROMODE       | x       |
| Select which wait pin edge detector should start the engine in synchronized mode | GPMC_PREFETCH_CONFIG1[5-4] WAITPINSELECTOR | x       |

## Table 7-35. Enable Chip-Select

| Sub-process Name                                           | Register / Bitfield       | Value   |
|------------------------------------------------------------|---------------------------|---------|
| When all parameters are configured, enable the chip-select | GPMC_CONFIG7_i[6] CSVALID | x       |

## 7.1.3.4 Set Memory Access

This section details the bit field to configure to set the GPMC in various memory modes.

## Table 7-36. Mode Parameters Check List Table

|                |     |                | Asynchronous       | Asynchronous        | Asynchronous                | Asynchronous                 | Synchronous        | Synchronous         | Synchronous                  | Synchronous                   |
|----------------|-----|----------------|--------------------|---------------------|-----------------------------|------------------------------|--------------------|---------------------|------------------------------|-------------------------------|
| Register       | Bit | Bit Field Name | Single Read Access | Single Write Access | Multiple Read (Page) Access | Multiple Write (Page) Access | Single Read Access | Single Write Access | Multiple Read (Burst) Access | Multiple Write (Burst) Access |
| GPMC_CONFIG1_i | 30  | READMULTIPLE   | 0                  | -                   | 1                           | N/S                          | 0                  | -                   | 1                            | -                             |
| GPMC_CONFIG1_i | 29  | READTYPE       | 0                  | -                   | 0                           | N/S                          | 1                  | -                   | 1                            | -                             |
| GPMC_CONFIG1_i | 28  | WRITEMULTIPLE  | -                  | 0                   |                             | N/S                          | -                  | 0                   | -                            | 1                             |
| GPMC_CONFIG1_i | 27  | WRITETYPE      | -                  | 0                   |                             | N/S                          | -                  | 1                   | -                            | 1                             |

## Table 7-37. Access Type Parameters Check List Table

|                |     |                | Access Type   | Access Type      | Access Type   |
|----------------|-----|----------------|---------------|------------------|---------------|
| Register       | Bit | Bit Field Name | Non-Mux       | Address/Data Mux | AAD Mux       |
| GPMC_CONFIG1_i | 9-8 | MUXADDDATA     | 0             | 2h               | 1             |

<!-- image -->

<!-- image -->

## 7.1.3.5 GPMC Timing Parameters

Figure 7-42 shows a programming model diagram for the NOR interfacing timing parameters.

Table 7-38 lists bit fields to configure adequate timing parameter in various memory modes.

Figure 7-42. NOR Interfacing Timing Parameters Diagram

<!-- image -->

## Table 7-38. Timing Parameters

|                |       | Bit Field Name      | Asynchronous       | Asynchronous        | Asynchronous                | Synchronous        | Synchronous         | Synchronous                  | Synchronous                   | Access           | Access                     | Access           |
|----------------|-------|---------------------|--------------------|---------------------|-----------------------------|--------------------|---------------------|------------------------------|-------------------------------|------------------|----------------------------|------------------|
| Register       | Bit   | Bit Field Name      | Single Read Access | Single Write Access | Multiple Read (Page) access | Single Read Access | Single Write Access | Multiple Read (Burst) Access | Multiple Write (Burst) Access | Non- multiplexed | Address /Data- multiplexed | AAD- multiplexed |
| GPMC_CONFIG1_i | 9-8   | MUXADDDATA          | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG1_i | 29    | READTYPE            | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG1_i | 30    | READMULTIPLE        | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG1_i | 27    | WRITETYPE           |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG1_i | 28    | WRITEMULTIPLE       |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG1_i | 31    | WRAPBURST           |                    |                     |                             |                    |                     | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG1_i | 26-25 | CLKACTIVATIONTIME   |                    |                     |                             | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG1_i | 19-18 | WAITMONITORINGTIME  | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG1_i | 4     | TIMEPARAGRANULARITY | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG2_i | 20-16 | CSWROFFTIME         |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG2_i | 12-8  | CSRDOFFTIME         | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG2_i | 7     | CSEXTRADELAY        | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG2_i | 3-0   | CSONTIME            | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG3_i | 30-28 | ADVAADMUXWROFFTIME  |                    | y                   |                             |                    | y                   |                              | y                             |                  |                            | y                |
| GPMC_CONFIG3_i | 26-24 | ADVAADMUXRDOFFTIME  | y                  |                     | y                           | y                  |                     | y                            |                               |                  |                            | y                |
| GPMC_CONFIG3_i | 6-4   | ADVAADMUXONTIME     | y                  | y                   | y                           | y                  | y                   | y                            | y                             |                  |                            | y                |
| GPMC_CONFIG3_i | 20-16 | ADVWROFFTIME        |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG3_i | 12-8  | ADVRDOFFTIME        | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG3_i | 7     | ADVEXTRADELAY       | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG3_i | 3-0   | ADVONTIME           | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG4_i | 15-13 | OEAADMUXOFFTIME     | y                  | y                   | y                           | y                  | y                   | y                            | y                             |                  |                            | y                |
| GPMC_CONFIG4_i | 6-4   | OEAADMUXONTIME      | y                  | y                   | y                           | y                  | y                   | y                            | y                             |                  |                            | y                |
| GPMC_CONFIG4_i | 28-24 | WEOFFTIME           |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG4_i | 23    | WEEXTRADELAY        |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG4_i | 19-16 | WEONTIME            |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG4_i | 12-8  | OEOFFTIME           | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG4_i | 7     | OEEXTRADELAY        | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG4_i | 3-0   | OEONTIME            | y                  |                     | y                           | y                  |                     | y                            |                               | y                | y                          | y                |
| GPMC_CONFIG5_i | 27-24 | PAGEBURSTACCESSTIME |                    |                     | y                           |                    |                     | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG5_i | 12-8  | WRCYCLETIME         |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y                |
| GPMC_CONFIG5_i | 4-0   | RDCYCLETIME         | y                  |                     | y                           | y                  |                     |                              |                               | y                | y                          | y                |
|                |       |                     |                    |                     |                             |                    |                     | y                            |                               |                  |                            |                  |
| GPMC_CONFIG6_i | 28-24 | WRACCESSTIME        |                    | y                   |                             |                    | y                   |                              | y                             | y                | y                          | y y              |
| GPMC_CONFIG6_i | 19-16 | WRDATAONADMUXBUS    |                    | y                   |                             |                    | y                   |                              | y                             |                  | y                          |                  |

<!-- image -->

<!-- image -->

## Table 7-38. Timing Parameters (continued)

|                |      |                     | Asynchronous       | Asynchronous        | Asynchronous                | Synchronous        | Synchronous         | Synchronous                  | Synchronous                   | Access Type      | Access Type                | Access Type      |
|----------------|------|---------------------|--------------------|---------------------|-----------------------------|--------------------|---------------------|------------------------------|-------------------------------|------------------|----------------------------|------------------|
| Register       | Bit  | Bit Field Name      | Single Read Access | Single Write Access | Multiple Read (Page) access | Single Read Access | Single Write Access | Multiple Read (Burst) Access | Multiple Write (Burst) Access | Non- multiplexed | Address /Data- multiplexed | AAD- multiplexed |
| GPMC_CONFIG6_i | 11-8 | CYCLE2CYCLEDELAY    | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG6_i | 7    | CYCLE2CYCLESAMECSEN | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG6_i | 6    | CYCLE2CYCLEDIFFCSEN | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG6_i | 3-0  | BUSTURNAROUND       | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |
| GPMC_CONFIG7_i | 6    | CSVALID             | y                  | y                   | y                           | y                  | y                   | y                            | y                             | y                | y                          | y                |