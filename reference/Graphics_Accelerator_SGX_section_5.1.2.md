## 5.1 Integration

SGX530 Integration

<!-- image -->

## 5.1.1 SGX530 Connectivity Attributes

The general connectivity attributes of the SGX530 are shown in the following table.

Table 5-1. SGX530 Connectivity Attributes

| Attributes          | Type                                |
|---------------------|-------------------------------------|
| Power domain        | GFX Domain                          |
| Clock domain        | SGX_CLK                             |
| Reset signals       | SGX_RST                             |
| Idle/Wakeup signals | Smart Idle Initiator Standby        |
| Interrupt request   | THALIAIRQ (GFXINT) to MPU Subsystem |
| DMA request         | None                                |
| Physical address    | L3 Fast slave port                  |

## 5.1.2 SGX530 Clock and Reset Management

The SGX530 uses separate functional and interface clocks. The SYSCLK is the clock for the slave interface and runs at the L3F frequency. The MEMCLK is the clock for the memories and master interface and also runs at the L3F frequency. The CORECLK is the functional clock. It can be sourced from either the L3F clock (CORE\_CLKOUTM4) or from the 192 MHz PER\_CLKOUTM2 and can optionally be divided by 2.

Table 5-2. SGX530 Clock Signals

| Clock signal             | Max Freq   | Reference / Source            | Comments                     |
|--------------------------|------------|-------------------------------|------------------------------|
| SYSCLK Interface clock   | 200 MHz    | CORE_CLKOUTM4                 | pd_gfx_gfx_l3_gclk From PRCM |
| MEMCLK Memory Clock      | 200 MHz    | CORE_CLKOUTM4                 | pd_gfx_gfx_l3_gclk From PRCM |
| CORECLK Functional clock | 200 MHz    | PER_CLKOUTM2 or CORE_CLKOUTM4 | pd_gfx_gfx_fclk From PRCM    |

<!-- image -->