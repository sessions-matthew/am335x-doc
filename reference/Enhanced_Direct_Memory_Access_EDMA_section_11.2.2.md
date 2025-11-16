## 11.2.1.3 TPCC Pin List

The TPCC module does not include any external interface pins.

## 11.2.2 Third-Party Transfer Controller (TPTC) Integration

This device uses the three TPTC peripherals (TC0-TC2; TC3 is not supported) to perform EDMA transfers between slave peripherals. The submission of transfer requests to the TPTCs is controlled by the TPCC. TPTC Integration shows the integration of the TPTC modules

## TPTC Integration

<!-- image -->

## 11.2.2.1 TPTC Connectivity Attributes

The general connectivity attributes for the TPTCs are shown in Table 11-3.

Table 11-3. TPTC Connectivity Attributes

| Attributes          | Type                                                                                                                     |
|---------------------|--------------------------------------------------------------------------------------------------------------------------|
| Power domain        | Peripheral Domain                                                                                                        |
| Clock domain        | PD_PER_L3_GCLK                                                                                                           |
| Reset signals       | PER_DOM_RST_N                                                                                                            |
| Idle/Wakeup signals | Standby Smart Idle                                                                                                       |
| Interrupt request   | Error interrupt per instance erint_pend_po (TCERRINTx) - to MPU Subsystem and PRU- ICSS (tptc_erint_pend_po, TPTC0 only) |
| DMA request         | none                                                                                                                     |
| Physical address    | L3 Fast slave port                                                                                                       |

## 11.2.2.2 TPTC Clock and Reset Management

The TPTC operates from a single clock and runs at the L3\_Fast clock rate.

## Table 11-4. TPTC Clock Signals

| Clock Signal                             | Max Freq   | Reference / Source   | Comments                 |
|------------------------------------------|------------|----------------------|--------------------------|
| tptc_clk_pi Interface / Functional clock | 200 MHz    | CORE_CLKOUTM4        | pd_per_l3_gclk From PRCM |

<!-- image -->

<!-- image -->

www.ti.com

## 11.2.2.3 TPTC Pin List

The TPTC module does not include any external interface pins.