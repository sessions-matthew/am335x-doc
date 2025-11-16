<!-- image -->

www.ti.com

## 6.3 ARM Cortex-A8 Interrupts

## Table 6-1. ARM Cortex-A8 Interrupts

|   Int Number | Acronym/name     | Source                                               | Signal Name                                                              |
|--------------|------------------|------------------------------------------------------|--------------------------------------------------------------------------|
|            0 | EMUINT           | MPU Subsystem Internal                               | Emulation interrupt (EMUICINTR)                                          |
|            1 | COMMTX           | MPU Subsystem Internal                               | CortexA8 COMMTX                                                          |
|            2 | COMMRX           | MPU Subsystem Internal                               | CortexA8 COMMRX                                                          |
|            3 | BENCH            | MPU Subsystem Internal                               | CortexA8 NPMUIRQ                                                         |
|            4 | ELM_IRQ          | ELM                                                  | Sinterrupt (Error location process completion)                           |
|            5 | SSM_WFI_IRQ      | MPU Subsystem Internal (SSM)                         | MPU s/s Secure State Machine Wait for Interrupt (WFI) tracking mechanism |
|            5 | Reserved         |                                                      |                                                                          |
|            6 | SSM_IRQ          | MPU Subsystem Internal (SSM)                         | MPU s/s Secure State Machine interrupt generation for Public FIQ support |
|            6 | Reserved         |                                                      |                                                                          |
|            7 | NMI              | External Pin (active low) (1)                        | nmi_int                                                                  |
|            8 | SEC_EVNT         | Firewalls                                            | security_events_irq                                                      |
|            8 | Reserved         |                                                      |                                                                          |
|            9 | L3DEBUG          | L3                                                   | l3_FlagMux_top_FlagOut1                                                  |
|           10 | L3APPINT         | L3                                                   | l3_FlagMux_top_FlagOut0                                                  |
|           11 | PRCMINT          | PRCM                                                 | irq_mpu                                                                  |
|           12 | EDMACOMPINT      | TPCC (EDMA)                                          | tpcc_int_pend_po0                                                        |
|           13 | EDMAMPERR        | TPCC (EDMA)                                          | tpcc_mpint_pend_po                                                       |
|           14 | EDMAERRINT       | TPCC (EDMA)                                          | tpcc_errint_pend_po                                                      |
|           15 | WDT0INT          | WDTIMER0                                             | PO_INT_PEND                                                              |
|           15 | Reserved         |                                                      |                                                                          |
|           16 | ADC_TSC_GENINT   | ADC_TSC (Touchscreen Controller)                     | gen_intr_pend                                                            |
|           17 | USBSSINT         | USBSS                                                | usbss_intr_pend                                                          |
|           18 | USBINT0          | USBSS                                                | usb0_intr_pend                                                           |
|           19 | USBINT1          | USBSS                                                | usb1_intr_pend                                                           |
|           20 | PRU_ICSS_EVTOUT0 | pr1_host[0] output/events exported from PRU-ICSS (2) | pr1_host_intr0_intr_pend                                                 |
|           21 | PRU_ICSS_EVTOUT1 | pr1_host[1] output/events exported from PRU-ICSS (2) | pr1_host_intr1_intr_pend                                                 |
|           22 | PRU_ICSS_EVTOUT2 | pr1_host[2] output/events exported from PRU-ICSS (2) | pr1_host_intr2_intr_pend                                                 |
|           23 | PRU_ICSS_EVTOUT3 | pr1_host[3] output/events exported from PRU-ICSS (2) | pr1_host_intr3_intr_pend                                                 |
|           24 | PRU_ICSS_EVTOUT4 | pr1_host[4] output/events exported from PRU-ICSS (2) | pr1_host_intr4_intr_pend                                                 |
|           25 | PRU_ICSS_EVTOUT5 | pr1_host[5] output/events exported from PRU-ICSS (2) | pr1_host_intr5_intr_pend                                                 |
|           26 | PRU_ICSS_EVTOUT6 | pr1_host[6] output/events exported from PRU-ICSS (2) | pr1_host_intr6_intr_pend                                                 |
|           27 | PRU_ICSS_EVTOUT7 | pr1_host[7] output/events exported from PRU-ICSS (2) | pr1_host_intr7_intr_pend                                                 |
|           28 | MMCSD1INT        | MMCSD1                                               | SINTERRUPTN                                                              |

(1) For differences in operation based on AM335x silicon revisions, see Section 1.2, Silicon Revision Functional Differences and Enhancements .

(2) pr1\_host\_intr[0:7] corresponds to Host-2 to Host-9 of the PRU-ICSS interrupt controller.

Table 6-1. ARM Cortex-A8 Interrupts (continued)

|   Int Number | Acronym/name                  | Source                               | Signal Name           |
|--------------|-------------------------------|--------------------------------------|-----------------------|
|           29 | MMCSD2INT                     | MMCSD2                               | SINTERRUPTN           |
|           30 | I2C2INT                       | I2C2                                 | POINTRPEND            |
|           31 | eCAP0INT                      | eCAP0 event/interrupt                | ecap_intr_intr_pend   |
|           32 | GPIOINT2A                     | GPIO 2                               | POINTRPEND1           |
|           33 | GPIOINT2B                     | GPIO 2                               | POINTRPEND2           |
|           34 | USBWAKEUP                     | USBSS                                | slv0p_Swakeup         |
|           35 | PCIeWAKEUP                    | PCIe                                 | sle_idlep_SWakeup     |
|           35 | Reserved                      |                                      |                       |
|           36 | LCDCINT                       | LCDC                                 | lcd_irq               |
|           37 | GFXINT                        | SGX530                               | THALIAIRQ             |
|           38 | Reserved                      |                                      |                       |
|           39 | ePWM2INT                      | eHRPWM2 (PWM Subsystem)              | epwm_intr_intr_pend   |
|           40 | 3PGSWRXTHR0 (RX_THRESH_PULSE) | CPSW (Ethernet)                      | c0_rx_thresh_pend     |
|           41 | 3PGSWRXINT0 (RX_PULSE)        | CPSW (Ethernet)                      | c0_rx_pend            |
|           42 | 3PGSWTXINT0 (TX_PULSE)        | CPSW (Ethernet)                      | c0_tx_pend            |
|           43 | 3PGSWMISC0 (MISC_PULSE)       | CPSW (Ethernet)                      | c0_misc_pend          |
|           44 | UART3INT                      | UART3                                | niq                   |
|           45 | UART4INT                      | UART4                                | niq                   |
|           46 | UART5INT                      | UART5                                | niq                   |
|           47 | eCAP1INT                      | eCAP1 (PWM Subsystem)                | ecap_intr_intr_pend   |
|           48 | PCIINT0                       | PCIe                                 | pcie_int_i_intr0_pend |
|           49 | PCIINT1                       | PCIe                                 | pcie_int_i_intr1_pend |
|           50 | PCIINT2                       | PCIe                                 | pcie_int_i_intr2_pend |
|           51 | PCIINT3                       | PCIe                                 | pcie_int_i_intr3_pend |
|           48 | Reserved                      |                                      |                       |
|           49 | Reserved                      |                                      |                       |
|           50 | Reserved                      |                                      |                       |
|           51 | Reserved                      |                                      |                       |
|           52 | DCAN0_INT0                    | DCAN0                                | dcan_intr0_intr_pend  |
|           53 | DCAN0_INT1                    | DCAN0                                | dcan_intr1_intr_pend  |
|           54 | DCAN0_PARITY                  | DCAN0                                | dcan_uerr_intr_pend   |
|           55 | DCAN1_INT0                    | DCAN1                                | dcan_intr0_intr_pend  |
|           56 | DCAN1_INT1                    | DCAN1                                | dcan_intr1_intr_pend  |
|           57 | DCAN1_PARITY                  | DCAN1                                | dcan_uerr_intr_pend   |
|           58 | ePWM0_TZINT                   | eHRPWM0 TZ interrupt (PWM Subsystem) | epwm_tz_intr_pend     |
|           59 | ePWM1_TZINT                   | eHRPWM1 TZ interrupt (PWM Subsystem) | epwm_tz_intr_pend     |
|           60 | ePWM2_TZINT                   | eHRPWM2 TZ interrupt (PWM Subsystem) | epwm_tz_intr_pend     |
|           61 | eCAP2INT                      | eCAP2 (PWM Subsystem)                | ecap_intr_intr_pend   |
|           62 | GPIOINT3A                     | GPIO 3                               | POINTRPEND1           |
|           63 | GPIOINT3B                     | GPIO 3                               | POINTRPEND2           |
|           64 | MMCSD0INT                     | MMCSD0                               | SINTERRUPTN           |
|           65 | McSPI0INT                     | McSPI0                               | SINTERRUPTN           |
|           66 | TINT0                         | Timer0                               | POINTR_PEND           |
|           67 | TINT1_1MS                     | DMTIMER_1ms                          | POINTR_PEND           |
|           68 | TINT2                         | DMTIMER2                             | POINTR_PEND           |

<!-- image -->

<!-- image -->

www.ti.com

Table 6-1. ARM Cortex-A8 Interrupts (continued)

|   Int Number | Acronym/name              | Source                                         | Signal Name               |
|--------------|---------------------------|------------------------------------------------|---------------------------|
|           69 | TINT3                     | DMTIMER3                                       | POINTR_PEND               |
|           70 | I2C0INT                   | I2C0                                           | POINTRPEND                |
|           71 | I2C1INT                   | I2C1                                           | POINTRPEND                |
|           72 | UART0INT                  | UART0                                          | niq                       |
|           73 | UART1INT                  | UART1                                          | niq                       |
|           74 | UART2INT                  | UART2                                          | niq                       |
|           75 | RTCINT                    | RTC                                            | timer_intr_pend           |
|           76 | RTCALARMINT               | RTC                                            | alarm_intr_pend           |
|           77 | MBINT0                    | Mailbox0 (mail_u0_irq)                         | initiator_sinterrupt_q_n0 |
|           78 | M3_TXEV                   | Wake M3 Subsystem                              | TXEV                      |
|           79 | eQEP0INT                  | eQEP0 (PWM Subsystem)                          | eqep_intr_intr_pend       |
|           80 | MCATXINT0                 | McASP0                                         | mcasp_x_intr_pend         |
|           81 | MCARXINT0                 | McASP0                                         | mcasp_r_intr_pend         |
|           82 | MCATXINT1                 | McASP1                                         | mcasp_x_intr_pend         |
|           83 | MCARXINT1                 | McASP1                                         | mcasp_r_intr_pend         |
|           84 | Reserved                  |                                                |                           |
|           85 | Reserved                  |                                                |                           |
|           86 | ePWM0INT                  | eHRPWM0 (PWM Subsystem)                        | epwm_intr_intr_pend       |
|           87 | ePWM1INT                  | eHRPWM1 (PWM Subsystem)                        | epwm_intr_intr_pend       |
|           88 | eQEP1INT                  | eQEP1 (PWM Subsystem)                          | eqep_intr_intr_pend       |
|           89 | eQEP2INT                  | eQEP2 (PWM Subsystem)                          | eqep_intr_intr_pend       |
|           90 | DMA_INTR_PIN2             | External DMA/Interrupt Pin2 (xdma_event_intr2) | pi_x_dma_event_intr2      |
|           91 | WDT1INT (Public Watchdog) | WDTIMER1                                       | PO_INT_PEND               |
|           92 | TINT4                     | DMTIMER4                                       | POINTR_PEND               |
|           93 | TINT5                     | DMTIMER5                                       | POINTR_PEND               |
|           94 | TINT6                     | DMTIMER6                                       | POINTR_PEND               |
|           95 | TINT7                     | DMTIMER7                                       | POINTR_PEND               |
|           96 | GPIOINT0A                 | GPIO 0                                         | POINTRPEND1               |
|           97 | GPIOINT0B                 | GPIO 0                                         | POINTRPEND2               |
|           98 | GPIOINT1A                 | GPIO 1                                         | POINTRPEND1               |
|           99 | GPIOINT1B                 | GPIO 1                                         | POINTRPEND2               |
|          100 | GPMCINT                   | GPMC                                           | gpmc_sinterrupt           |
|          101 | DDRERR0                   | EMIF                                           | sys_err_intr_pend         |
|          102 | AES0_IRQ_S                | AES module 0 Interrupt secure side             | AES_SINTREQUEST_S         |
|          102 | Reserved                  |                                                |                           |
|          103 | AES0_IRQ_P                | AES module 0 Interrupt public side             | AES_SINTREQUEST_P         |
|          103 | Reserved                  |                                                |                           |
|          104 | Reserved                  |                                                |                           |
|          105 | Reserved                  |                                                |                           |
|          106 | Reserved                  |                                                |                           |
|          107 | Reserved                  |                                                |                           |
|          108 | Reserved                  |                                                |                           |
|          109 | Reserved                  |                                                |                           |
|          110 | Reserved                  |                                                |                           |
|          111 | Reserved                  |                                                |                           |

Table 6-1. ARM Cortex-A8 Interrupts (continued)

|   Int Number | Acronym/name         | Source                                         | Signal Name          |
|--------------|----------------------|------------------------------------------------|----------------------|
|          108 | SHA_IRQ_S            | SHA2 crypto-accelerator secure side            | SHA_SINTREQUEST_S    |
|          109 | SHA_IRQ_P            | SHA2 crypto-accelerator public side            | SHA_SINTREQUEST_P    |
|          110 | FPKA_SINTREQUEST_S   | PKA                                            | PKA_SINTREQUEST_S    |
|          111 | RNG_IRQ              | RNG                                            | TRNG_intr_pend       |
|          112 | TCERRINT0            | TPTC0                                          | tptc_erint_pend_po   |
|          113 | TCERRINT1            | TPTC1                                          | tptc_erint_pend_po   |
|          114 | TCERRINT2            | TPTC2                                          | tptc_erint_pend_po   |
|          115 | ADC_TSC_PENINT       | ADC_TSC                                        | pen_intr_pend        |
|          116 | Reserved             |                                                |                      |
|          117 | Reserved             |                                                |                      |
|          118 | Reserved             |                                                |                      |
|          119 | Reserved             |                                                |                      |
|          120 | SMRFLX_MPU subsystem | Smart Reflex 0                                 | intrpend             |
|          121 | SMRFLX_Core          | Smart Reflex 1                                 | intrpend             |
|          122 | Reserved             |                                                |                      |
|          123 | DMA_INTR_PIN0        | External DMA/Interrupt Pin0 (xdma_event_intr0) | pi_x_dma_event_intr0 |
|          124 | DMA_INTR_PIN1        | External DMA/Interrupt Pin1 (xdma_event_intr1) | pi_x_dma_event_intr1 |
|          125 | McSPI1INT            | McSPI1                                         | SINTERRUPTN          |
|          126 | Reserved             |                                                |                      |
|          127 | Reserved             |                                                |                      |

<!-- image -->