<!-- image -->

## www.ti.com

## 7.2.2 Integration

This device includes a single instantiation of the on-chip memory controller interfacing to a single 64K bank of RAM.

Figure 7-200. OCMC RAM Integration

<!-- image -->

## 7.2.2.1 OCMC RAM Connectivity Attributes

The general connectivity attributes for the OCMC RAM modules are summarized in Table 7-202.

## Table 7-202. OCMC RAM Connectivity Attributes

| Attributes          | Type               |
|---------------------|--------------------|
| Power Domain        | Peripheral Domain  |
| Clock Domain        | PD_PER_L3_GCLK     |
| Reset Signals       | PER_DOM_RST_N      |
| Idle/Wakeup Signals | Smart Idle         |
| Interrupt Requests  | None               |
| DMA Requests        | None               |
| Physical Address    | L3 Fast slave port |

## 7.2.2.2 OCMC RAM Clock and Reset Management

The OCMC module uses a single clock for the module and its OCP interface.

Table 7-203. OCMC RAM Clock Signals

| Clock Signal                                 | Max Freq   | Reference / Source   | Comments                 |
|----------------------------------------------|------------|----------------------|--------------------------|
| prcm_ocmc_clock Interface / Functional clock | 200 MHz    | CORE_CLKOUTM4        | pd_per_l3_gclk From PRCM |

## 7.2.2.3 OCMC RAM Pin List

The OCMC RAM module does not include any external interface pins.