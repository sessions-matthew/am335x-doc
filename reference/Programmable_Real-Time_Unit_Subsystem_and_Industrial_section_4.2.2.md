## 4.2.1 PRU-ICSS Connectivity Attributes

The general connectivity attributes for the PRU subsystem are shown in Table 4-1.

Table 4-1. PRU-ICSS Connectivity Attributes

| Attributes          | Type                                                                                                             |
|---------------------|------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                |
| Clock Domain        | PD_PER_PRU_ICSS_OCP_GCLK (OCP clock) PD_PER_PRU_ICSS_IEP_GCLK (IEP clock) PD_PER_PRU_ICSS_UART_GCLK (UART clock) |
| Reset Signals       | PRU_ICSS_LRST_N                                                                                                  |
| Idle/Wakeup Signals | Standby Idle                                                                                                     |
| Interrupt Requests  | 8 Interrupts pr1_host_intr[7:1] (1) to MPU Subsystem pr1_host_intr[0] (1) to MPU Subsystem and TSC_ADC           |
| DMA Requests        | No dedicated DMA events but pr1_host_intr[7:6] (1) interrupt outputs also connected as DMA events                |
| Physical Address    | L4 Fast Slave Port                                                                                               |

(1) pr1\_host\_intr[0:7] corresponds to Host-2 to Host-9 of the PRU-ICSS interrupt controller.

## 4.2.2 PRU-ICSS Clock and Reset Management

The PRU-ICSS module uses the following functional and OCP interface clocks.

Table 4-2. PRU-ICSS Clock Signals

| Clock Signal              | Max Freq   | Reference / Source                  | Comments                                                                |
|---------------------------|------------|-------------------------------------|-------------------------------------------------------------------------|
| l3_clk Interface Clock    | 200 MHz    | CORE_CLKOUTM4 or Display PLL CLKOUT | pd_per_pru_icss_ocp_gclk from PRCM Clocks both L3 master and L4F slave  |
| uart_clk Functional Clock | 192 MHz    | PER_CLKOUTM2                        | pd_per_pru_icss_uart_gclk from PRCM UART Clock                          |
| iep_clk Functional Clock  | 200 MHz    | CORE_CLKOUTM4                       | pd_per_pru_icss_iep_gclk from PRCM Industrial Ethernet Peripheral Clock |

<!-- image -->