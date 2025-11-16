## 7.3.2 Integration

## 7.3.2.1 EMIF Connectivity Attributes

The general connectivity attributes for the EMIF are shown in Table 7-205.

Table 7-205. EMIF Connectivity Attributes

| Attributes          | Type                                         |
|---------------------|----------------------------------------------|
| Power Domain        | Peripheral Domain                            |
| Clock Domain        | PD_PER_L3_GCLK (OCP) PD_PER_EMIF_GCLK (Func) |
| Reset Signals       | POR_N                                        |
| Idle/Wakeup Signals | Smart Idle                                   |
| Interrupt Requests  | 1 interrupt to MPU Subsystem (DDRERR0)       |
| DMA Requests        | None                                         |
| Physical Address    | L3 Fast Slave Port                           |

## 7.3.2.2 EMIF Clock Management

The EMIF4 OCP interface (ocp\_clk) is clocked by the L3 Fast clock sourced from the Core PLL. The DDR Command and Data macros are clocked by the DDR PLL. The PRCM divides this clock by two to create the EMIF functional clock (m\_clk).

The OCP and functional clocks may be asynchronous because synchronization is managed in the EMIF4 internal FIFO (EMIF4 is set in asynchronous mode).

Table 7-206. EMIF Clock Signals

| Clock Signal                                                                      | Maximum Frequency   | Reference Source   | Comments                   |
|-----------------------------------------------------------------------------------|---------------------|--------------------|----------------------------|
| ocp_clk (Interface clock)                                                         | 200 MHz             | CORE_CLKOUTM4      | pd_per_l3_gclk From PRCM   |
| m_clk (EMIF functional clock)                                                     | 200 MHz (1)         | DDR PLL CLKOUT / 2 | pd_per_emif_gclk From PRCM |
| cmd0_dfi_clk cmd1_dfi_clk cmd2_dfi_clk data0_dfi_clk data1_dfi_clk (Macro clocks) | 400 MHz (1)         | DDR PLL CLKOUT     | clkout_po From DDR PLL     |

(1) The maximum frequency depends on the type of DDR. See the maximum DDR frequency for your device in the device datasheet AM335x Sitara Processors (literature number SPRS717).

## 7.3.2.3 EMIF Pin List

The EMIF/DDR external interface signals are shown in Table 7-207.

Table 7-207. EMIF Pin List

| Pin            | Type   | Description             |
|----------------|--------|-------------------------|
| DDR_CK DDR_NCK | O      | Differential clock pair |
| DDR_CKE        | O      | Clock enable            |
| DDR_CSn0       | O      | Chip select             |
| DDR_RASn       | O      | Row address strobe      |
| DDR_CASn       | O      | Column address strobe   |
| DDR_WEn        | O      | Write enable            |

<!-- image -->

<!-- image -->

## Table 7-207. EMIF Pin List (continued)

| Pin           | Type   | Description                |
|---------------|--------|----------------------------|
| DDR_BA[2:0]   | O      | Bank address               |
| DDR_A[15:0]   | O      | Row/column address         |
| DDR_DQS[1:0]  | I/O    | Data strobes               |
| DDR_DQSn[1:0] | I/O    | Complimentary data strobes |
| DDR_DQM[1:0]  | O      | Data masks                 |
| DDR_D[15:0]   | I/O    | Data                       |
| DDR_ODT       | O      | On-die termination         |
| DDR_RESETn    | O      | DDR device reset           |
| DDR_VREF      | I      | I/O Voltage reference      |
| DDR_VTP       | I      | VTP compensation pin       |