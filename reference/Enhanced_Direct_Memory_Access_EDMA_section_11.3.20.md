<!-- image -->

www.ti.com

## 11.3.20 EDMA Events

Table 11-24. Direct Mapped

|   Event Number | Event Name      | Source Module   |
|----------------|-----------------|-----------------|
|              0 | pr1_host[7] (1) | PRU-ICSS        |
|              1 | pr1_host[6] (1) | PRU-ICSS        |
|              2 | SDTXEVT1        | MMCHS1          |
|              3 | SDRXEVT1        | MMCHS1          |
|              4 | Reserved        | Reserved        |
|              5 | Reserved        | Reserved        |
|              6 | Reserved        | Reserved        |
|              7 | Reserved        | Reserved        |
|              8 | AXEVT0          | McASP0          |
|              9 | AREVT0          | McASP0          |
|             10 | AXEVT1          | McASP1          |
|             11 | AREVT1          | McASP1          |
|             12 | Open            | Open            |
|             13 | Open            | Open            |
|             14 | ePWMEVT0        | ePWM 0          |
|             15 | ePWMEVT1        | ePWM 1          |
|             16 | SPIXEVT0        | McSPI0          |
|             17 | SPIREVT0        | McSPI0          |
|             18 | SPIXEVT1        | McSPI0          |
|             19 | SPIREVT1        | McSPI0          |
|             20 | Open            | Open            |
|             21 | Open            | Open            |
|             22 | GPIOEVT0        | GPIO0           |
|             23 | GPIOEVT1        | GPIO1           |
|             24 | SDTXEVT0        | MMCHS0          |
|             25 | SDRXEVT0        | MMCHS0          |
|             26 | UTXEVT0         | UART0           |
|             27 | URXEVT0         | UART0           |
|             28 | UTXEVT1         | UART1           |
|             29 | URXEVT1         | UART1           |
|             30 | UTXEVT2         | UART2           |
|             31 | URXEVT2         | UART2           |
|             32 | Open            | Open            |
|             33 | Open            | Open            |
|             34 | Open            | Open            |
|             35 | Open            | Open            |
|             36 | Open            | Open            |
|             37 | Open            | Open            |
|             38 | eCAPEVT0        | eCAP 0          |
|             39 | eCAPEVT1        | eCAP 1          |
|             40 | CAN_IF1DMA      | DCAN 0          |
|             41 | CAN_IF2DMA      | DCAN 0          |
|             42 | SPIXEVT0        | McSPI1          |
|             43 | SPIREVT0        | McSPI1          |
|             44 | SPIXEVT1        | McSPI1          |

(1) pr1\_host\_intr[0:7] corresponds to Host-2 to Host-9 of the PRU-ICSS interrupt controller.

Table 11-24. Direct Mapped (continued)

|   Event Number | Event Name    | Source Module   |
|----------------|---------------|-----------------|
|             45 | SPIREVT1      | McSPI1          |
|             46 | eQEPEVT0      | eQEP 0          |
|             47 | CAN_IF3DMA    | DCAN 0          |
|             48 | TINT4         | Timer 4         |
|             49 | TINT5         | Timer 5         |
|             50 | TINT6         | Timer 6         |
|             51 | TINT7         | Timer 7         |
|             52 | GPMCEVT       | GPMC            |
|             53 | tsc_adc_FIFO0 | ADC/TSC         |
|             54 | Open          |                 |
|             55 | Open          |                 |
|             56 | eQEPEVT1      | eQEP 1          |
|             57 | tsc_adc_FIFO1 | ADC/TSC         |
|             58 | I2CTXEVT0     | I2C0            |
|             59 | I2CRXEVT0     | I2C0            |
|             60 | I2CTXEVT1     | I2C1            |
|             61 | I2CRXEVT1     | I2C1            |
|             62 | eCAPEVT2      | eCAP 2          |
|             63 | eHRPWMEVT2    | eHRPWM 2        |

Table 11-25. Crossbar Mapped

|   Event Number | Event Name   | Source Module   |
|----------------|--------------|-----------------|
|              1 | SDTXEVT2     | MMCHS2          |
|              2 | SDRXEVT2     | MMCHS2          |
|              3 | I2CTXEVT2    | I2C2            |
|              4 | I2CRXEVT2    | I2C2            |
|              5 | Open         | Open            |
|              6 | Open         | Open            |
|              7 | UTXEVT3      | UART3           |
|              8 | URXEVT3      | UART3           |
|              9 | UTXEVT4      | UART4           |
|             10 | URXEVT4      | UART4           |
|             11 | UTXEVT5      | UART5           |
|             12 | URXEVT5      | UART5           |
|             13 | CAN_IF1DMA   | DCAN 1          |
|             14 | CAN_IF2DMA   | DCAN 1          |
|             15 | CAN_IF3DMA   | DCAN 1          |
|             16 | Open         | Open            |
|             17 | Open         | Open            |
|             18 | Open         | Open            |
|             19 | Open         | Open            |
|             20 | Open         | Open            |
|             21 | Open         | Open            |
|             22 | TINT0        | Timer 0         |
|             23 |              |                 |
|             24 | TINT2        | Timer 2         |

<!-- image -->

<!-- image -->

www.ti.com

Table 11-25. Crossbar Mapped (continued)

|   Event Number | Event Name           | Source Module                   |
|----------------|----------------------|---------------------------------|
|             25 | TINT3                | Timer 3                         |
|             26 | Open                 | Open                            |
|             27 | Open                 | Open                            |
|             28 | pi_x_dma_event_intr0 | External pin (XDMA_EVENT_INTR0) |
|             29 | pi_x_dma_event_intr1 | External pin (XDMA_EVENT_INTR1) |
|             30 | pi_x_dma_event_intr2 | External pin (XDMA_EVENT_INTR2) |
|             31 | eQEPEVT2             | eQEP 2                          |
|             32 | GPIOEVT2             | GPIO2                           |
|             33 | Open                 |                                 |
|             34 | Open                 |                                 |
|             35 | Open                 |                                 |
|             36 | Open                 |                                 |
|             37 | Open                 |                                 |
|             38 | Open                 |                                 |
|             39 | Open                 |                                 |
|             40 | Open                 |                                 |
|             41 | Open                 |                                 |
|             42 | Open                 |                                 |
|             43 | Open                 |                                 |
|             44 | Open                 |                                 |
|             45 | Open                 |                                 |
|             46 | Open                 |                                 |
|             47 | Open                 |                                 |
|             48 | Open                 |                                 |
|             49 | Open                 |                                 |
|             50 | Open                 |                                 |
|             51 | Open                 |                                 |
|             52 | Open                 |                                 |
|             53 | Open                 |                                 |
|             54 | Open                 |                                 |
|             55 | Open                 |                                 |
|             56 | Open                 |                                 |
|             57 | Open                 |                                 |
|             58 | Open                 |                                 |
|             59 | Open                 |                                 |
|             60 | Open                 |                                 |
|             61 | Open                 |                                 |
|             62 | Open                 |                                 |
|             63 | Open                 |                                 |