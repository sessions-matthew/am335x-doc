<!-- image -->

## 11.2 Integration

## 11.2.1 Third-Party Channel Controller (TPCC) Integration

This device uses the TPCC peripheral to provide control over its third-party transfer channels (TPTCs). TPCC Integration shows the integration of the TPCC module.

## TPCC Integration

<!-- image -->

## 11.2.1.1 TPCC Connectivity Attributes

The general connectivity attributes of the TPCC are summarized in Table 11-1.

Table 11-1. TPCC Connectivity Attributes

| Attributes          | Type                                                                                                                                                                                                                                                                                           |
|---------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power domain        | Peripheral Domain                                                                                                                                                                                                                                                                              |
| Clock domain        | PD_PER_L3_GCLK                                                                                                                                                                                                                                                                                 |
| Reset signals       | PER_DOM_RST_N                                                                                                                                                                                                                                                                                  |
| Idle/Wakeup signals | Smart Idle                                                                                                                                                                                                                                                                                     |
| Interrupt request   | 4 Regional Completion Interrupts: int_pend_po0 (EDMACOMPINT) - to MPU Subsystem int_pend_po1 (tpcc_int_pend_po1) - to PRU-ICSS Int_pend_po[3:2] - unused Error Interrupt: errint_po (EDMAERRINT) - to MPU Subsystem Memory Protection Error Interrupt: mpint_p0 (EDMAMPERR) - to MPU Subsystem |
| DMA request         | none                                                                                                                                                                                                                                                                                           |
| Physical address    | L3 Fast slave port                                                                                                                                                                                                                                                                             |

## 11.2.1.2 TPCC Clock and Reset Management

The TPCC operates from a single clock and runs at the L3\_Fast clock rate.

Table 11-2. TPCC Clock Signals

| Clock Signal                             | Max Freq   | Reference / Source   | Comments                 |
|------------------------------------------|------------|----------------------|--------------------------|
| tpcc_clk_pi Interface / Functional clock | 200 MHz    | CORE_CLKOUTM4        | pd_per_l3_gclk From PRCM |