<!-- image -->

www.ti.com

## 12.2 Integration

Figure 12-1 shows the integration of the TSC\_ADC module in the device.

Figure 12-1. TSC\_ADC Integration

<!-- image -->

pr1\_host\_intr[0:7] corresponds to Host-2 to Host-9 of the PRU-ICSS interrupt controller.

## 12.2.1 TSC\_ADC Connectivity Attributes

The general connectivity attributes for the TSC\_ADC module are summarized in Table 12-1.

Table 12-1. TSC\_ADC Connectivity Attributes

| Attributes          | Type                                                                                |
|---------------------|-------------------------------------------------------------------------------------|
| Power domain        | Wakeup Domain                                                                       |
| Clock domain        | PD_WKUP_L4_WKUP_GCLK (OCP) PD_WKUP_ADC_FCLK (Func)                                  |
| Reset signals       | WKUP_DOM_RST_N                                                                      |
| Idle/Wakeup signals | Smart idle Wakeup                                                                   |
| Interrupt request   | 1 interrupt to MPU Subsystem (ADC_TSC_GENINT), PRU-ICSS (gen_intr_pend), and WakeM3 |
| DMA request         | 2 Events (tsc_adc_FIFO0, tsc_adc_FIFO1)                                             |
| Physical address    | L3 Slow slave port (DMA) L4 Wkup slave port (MMR)                                   |