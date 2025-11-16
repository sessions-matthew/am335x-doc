<!-- image -->

www.ti.com

## 7.4.2 Integration

The error location module (ELM) is used to extract error addresses from syndrome polynomials generated using a BCH algorithm. Each of these polynomials gives a status of the read operations for a 512 bytes block from a NAND flash and its associated BCH parity bits, plus optionally some spare area information.

The ELM is intended to be used in conjunction with the GPMC. Syndrome polynomials generated on-thefly when reading a NAND Flash page and stored in GPMC registers are passed to the ELM module. The MPU can then easily correct the data block by flipping the bits pointed to by the ELM error locations outputs.

Figure 7-255. ELM Integration

<!-- image -->

## 7.4.2.1 ELM Connectivity Attributes

The general connectivity for the ELM module in this device is summarized in Table 7-276.

## Table 7-276. ELM Connectivity Attributes

| Attributes          | Type                         |
|---------------------|------------------------------|
| Power Domain        | Peripheral Domain            |
| Clock Domain        | L4PER_L4LS_GCLK              |
| Reset Signals       | PER_DOM_RST_N                |
| Idle/Wakeup Signals | Smart Idle                   |
| Interrupt Requests  | 1 interrupt to MPU Subsystem |
| DMA Requests        | None                         |
| Physical Address    | L4 Peripheral slave port     |

## 7.4.2.2 ELM Clock and Reset Management

The ELM operates from a single OCP interface clock.

## Table 7-277. ELM Clock Signals

| Clock Signal               | Max Freq   | Reference / Source   | Comments                   |
|----------------------------|------------|----------------------|----------------------------|
| Functional/interface clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk From PRCM |

## 7.4.2.3 ELM Pin List

The ELM module does not include any external interface pins.