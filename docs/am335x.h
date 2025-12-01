#define AM335X_DDR_BASE         0x80000000UL
#define AM335X_DDR_SIZE         (512 * MiB)  /* BeagleBone Black has 512MB DDR3 */
#define AM335X_SRAM_BASE        0x40300000UL
#define AM335X_SRAM_SIZE        (64 * KiB)   /* 64KB internal SRAM */
#define AM335X_INTC_BASE        0x48200000UL
#define AM335X_INTC_SIZE        0x1000
#define AM335X_INTC_NUM_IRQS    128
#define AM335X_UART0_BASE       0x44E09000UL  /* Console UART */
#define AM335X_UART1_BASE       0x48022000UL  /* UART1 */
#define AM335X_UART2_BASE       0x48024000UL  /* UART2 */
#define AM335X_UART3_BASE       0x481A6000UL  /* UART3 */
#define AM335X_UART4_BASE       0x481A8000UL  /* UART4 */
#define AM335X_UART5_BASE       0x481AA000UL  /* UART5 */
#define AM335X_UART0_IRQ        72
#define AM335X_UART1_IRQ        73
#define AM335X_UART2_IRQ        74
#define AM335X_UART3_IRQ        44
#define AM335X_UART4_IRQ        45
#define AM335X_UART5_IRQ        46
#define AM335X_GPIO0_BASE       0x44E07000UL  /* GPIO0 Controller */
#define AM335X_GPIO1_BASE       0x4804C000UL  /* GPIO1 Controller (USR LEDs) */
#define AM335X_GPIO2_BASE       0x481AC000UL  /* GPIO2 Controller */
#define AM335X_GPIO3_BASE       0x481AE000UL  /* GPIO3 Controller */
#define GPIO_REVISION           0x00
#define GPIO_SYSCONFIG          0x10
#define GPIO_EOI                0x20
#define GPIO_IRQSTATUS_RAW_0    0x24
#define GPIO_IRQSTATUS_RAW_1    0x28
#define GPIO_IRQSTATUS_0        0x2C
#define GPIO_IRQSTATUS_1        0x30
#define GPIO_IRQSTATUS_SET_0    0x34
#define GPIO_IRQSTATUS_SET_1    0x38
#define GPIO_IRQSTATUS_CLR_0    0x3C
#define GPIO_IRQSTATUS_CLR_1    0x40
#define GPIO_IRQWAKEN_0         0x44
#define GPIO_IRQWAKEN_1         0x48
#define GPIO_SYSSTATUS          0x114
#define GPIO_CTRL               0x130
#define GPIO_OE                 0x134  /* Output Enable (0=output, 1=input) */
#define GPIO_DATAIN             0x138  /* Data Input */
#define GPIO_DATAOUT            0x13C  /* Data Output */
#define GPIO_LEVELDETECT0       0x140
#define GPIO_LEVELDETECT1       0x144
#define GPIO_RISINGDETECT       0x148
#define GPIO_FALLINGDETECT      0x14C
#define GPIO_DEBOUNCENABLE      0x150
#define GPIO_DEBOUNCINGTIME     0x154
#define GPIO_CLEARDATAOUT       0x190  /* Clear Data Output */
#define GPIO_SETDATAOUT         0x194  /* Set Data Output */
#define AM335X_CONTROL_BASE     0x44E10000UL
#define AM335X_CONTROL_SIZE     0x2000
#define AM335X_CM_WKUP_BASE     0x44E00400UL
#define AM335X_CM_WKUP_SIZE     0x200
#define CM_WKUP_CLKSTCTRL       0x00    /* Wake-up Clock Domain Clock State Control */
#define CM_WKUP_CONTROL_CLKCTRL 0x04    /* Wake-up Control Module Clock Control */
#define CM_WKUP_GPIO0_CLKCTRL   0x08    /* Wake-up GPIO0 Clock Control */
#define CM_WKUP_L4WKUP_CLKCTRL  0x0C    /* Wake-up L4WKUP Clock Control */
#define CM_WKUP_TIMER0_CLKCTRL  0x10    /* Wake-up Timer0 Clock Control */
#define CM_WKUP_DEBUGSS_CLKCTRL 0x14    /* Wake-up Debug Sub System Clock Control */
#define CM_WKUP_L3_AON_CLKSTCTRL 0x18   /* Wake-up L3 AON Clock State Control */
#define CM_WKUP_AUTOIDLE_DPLL_MPU 0x1C  /* Auto-idle DPLL MPU */
#define CM_WKUP_IDLEST_DPLL_MPU 0x20    /* Idle Status DPLL MPU */
#define CM_WKUP_SSC_DELTAMSTEP_DPLL_MPU 0x24 /* SSC Delta M Step DPLL MPU */
#define CM_WKUP_SSC_MODFREQDIV_DPLL_MPU 0x28 /* SSC Modulation Frequency Divider DPLL MPU */
#define CM_WKUP_CLKSEL_DPLL_MPU 0x2C    /* Clock Select DPLL MPU */
#define CM_WKUP_AUTOIDLE_DPLL_DDR 0x30  /* Auto-idle DPLL DDR */
#define CM_WKUP_IDLEST_DPLL_DDR 0x34    /* Idle Status DPLL DDR */
#define CM_WKUP_SSC_DELTAMSTEP_DPLL_DDR 0x38 /* SSC Delta M Step DPLL DDR */
#define CM_WKUP_SSC_MODFREQDIV_DPLL_DDR 0x3C /* SSC Modulation Frequency Divider DPLL DDR */
#define CM_WKUP_CLKSEL_DPLL_DDR 0x40    /* Clock Select DPLL DDR */
#define CM_WKUP_AUTOIDLE_DPLL_DISP 0x44 /* Auto-idle DPLL DISP */
#define CM_WKUP_IDLEST_DPLL_DISP 0x48   /* Idle Status DPLL DISP */
#define CM_WKUP_SSC_DELTAMSTEP_DPLL_DISP 0x4C /* SSC Delta M Step DPLL DISP */
#define CM_WKUP_SSC_MODFREQDIV_DPLL_DISP 0x50 /* SSC Modulation Frequency Divider DPLL DISP */
#define CM_WKUP_CLKSEL_DPLL_DISP 0x54   /* Clock Select DPLL DISP */
#define CM_WKUP_AUTOIDLE_DPLL_CORE 0x58 /* Auto-idle DPLL CORE */
#define CM_WKUP_IDLEST_DPLL_CORE 0x5C   /* Idle Status DPLL CORE */
#define CM_WKUP_SSC_DELTAMSTEP_DPLL_CORE 0x60 /* SSC Delta M Step DPLL CORE */
#define CM_WKUP_SSC_MODFREQDIV_DPLL_CORE 0x64 /* SSC Modulation Frequency Divider DPLL CORE */
#define CM_WKUP_CLKSEL_DPLL_CORE 0x68   /* Clock Select DPLL CORE */
#define CM_WKUP_AUTOIDLE_DPLL_PER 0x6C  /* Auto-idle DPLL PER */
#define CM_WKUP_IDLEST_DPLL_PER 0x70    /* Idle Status DPLL PER */
#define CM_WKUP_SSC_DELTAMSTEP_DPLL_PER 0x74 /* SSC Delta M Step DPLL PER */
#define CM_WKUP_SSC_MODFREQDIV_DPLL_PER 0x78 /* SSC Modulation Frequency Divider DPLL PER */
#define CM_WKUP_CLKDCOLDO_DPLL_PER 0x7C /* Clock DCO LDO DPLL PER */
#define CM_WKUP_DIV_M4_DPLL_CORE 0x80   /* Divider M4 DPLL CORE */
#define CM_WKUP_DIV_M5_DPLL_CORE 0x84   /* Divider M5 DPLL CORE */
#define CM_WKUP_CLKMODE_DPLL_MPU 0x88   /* Clock Mode DPLL MPU */
#define CM_WKUP_CLKMODE_DPLL_PER 0x8C   /* Clock Mode DPLL PER */
#define CM_WKUP_CLKMODE_DPLL_CORE 0x90  /* Clock Mode DPLL CORE */
#define CM_WKUP_CLKMODE_DPLL_DDR 0x94   /* Clock Mode DPLL DDR */
#define CM_WKUP_CLKMODE_DPLL_DISP 0x98  /* Clock Mode DPLL DISP */
#define CM_WKUP_CLKSEL_DPLL_PER 0x9C    /* Clock Select DPLL PER */
#define CM_WKUP_DIV_M2_DPLL_DDR 0xA0    /* Divider M2 DPLL DDR */
#define CM_WKUP_DIV_M2_DPLL_DISP 0xA4   /* Divider M2 DPLL DISP */
#define CM_WKUP_DIV_M2_DPLL_MPU 0xA8    /* Divider M2 DPLL MPU */
#define CM_WKUP_DIV_M2_DPLL_PER 0xAC    /* Divider M2 DPLL PER */
#define CM_WKUP_WKUP_M3_CLKCTRL 0xB0    /* Wake-up M3 Clock Control */
#define CM_WKUP_UART0_CLKCTRL   0xB4    /* Wake-up UART0 Clock Control */
#define CM_WKUP_I2C0_CLKCTRL    0xB8    /* Wake-up I2C0 Clock Control */
#define CM_WKUP_ADC_TSC_CLKCTRL 0xBC    /* Wake-up ADC TSC Clock Control */
#define CM_WKUP_SMARTREFLEX0_CLKCTRL 0xC0 /* Wake-up SmartReflex0 Clock Control */
#define CM_WKUP_TIMER1_CLKCTRL  0xC4    /* Wake-up Timer1 Clock Control */
#define CM_WKUP_SMARTREFLEX1_CLKCTRL 0xC8 /* Wake-up SmartReflex1 Clock Control */
#define CM_WKUP_L4_WKUP_AON_CLKSTCTRL 0xCC /* Wake-up L4 WKUP AON Clock State Control */
#define CM_WKUP_WDT1_CLKCTRL    0xD4    /* Wake-up WDT1 Clock Control */
#define CM_WKUP_DIV_M6_DPLL_CORE 0xD8   /* Divider M6 DPLL CORE */
#define CLKCTRL_MODULEMODE_MASK 0x3     /* Module Mode field mask */
#define CLKCTRL_MODULEMODE_DISABLED 0x0 /* Module is disabled */
#define CLKCTRL_MODULEMODE_ENABLE 0x2   /* Module is enabled */
#define CLKCTRL_IDLEST_SHIFT    16      /* Idle Status field shift */
#define AM335X_CM_PER_BASE      0x44E00000UL
#define AM335X_CM_PER_SIZE      0x400
#define CM_PER_L4LS_CLKSTCTRL   0x00    /* L4LS Clock Domain Clock State Control */
#define CM_PER_L3S_CLKSTCTRL    0x04    /* L3S Clock Domain Clock State Control */
#define CM_PER_L4FW_CLKSTCTRL   0x08    /* L4FW Clock Domain Clock State Control */
#define CM_PER_L3_CLKSTCTRL     0x0C    /* L3 Clock Domain Clock State Control */
#define CM_PER_IEEE5000_CLKCTRL 0x10    /* IEEE5000 Clock Control */
#define CM_PER_LCDC_CLKCTRL     0x18    /* LCDC Clock Control */
#define CM_PER_USB0_CLKCTRL     0x1C    /* USB0 Clock Control */
#define CM_PER_TPTC0_CLKCTRL    0x24    /* TPTC0 Clock Control */
#define CM_PER_EMIF_CLKCTRL     0x28    /* EMIF Clock Control */
#define CM_PER_OCMCRAM_CLKCTRL  0x2C    /* OCMCRAM Clock Control */
#define CM_PER_GPMC_CLKCTRL     0x30    /* GPMC Clock Control */
#define CM_PER_MCASP0_CLKCTRL   0x34    /* MCASP0 Clock Control */
#define CM_PER_UART5_CLKCTRL    0x38    /* UART5 Clock Control */
#define CM_PER_MMC0_CLKCTRL     0x3C    /* MMC0 Clock Control */
#define CM_PER_ELM_CLKCTRL      0x40    /* ELM Clock Control */
#define CM_PER_I2C2_CLKCTRL     0x44    /* I2C2 Clock Control */
#define CM_PER_I2C1_CLKCTRL     0x48    /* I2C1 Clock Control */
#define CM_PER_SPI0_CLKCTRL     0x4C    /* SPI0 Clock Control */
#define CM_PER_SPI1_CLKCTRL     0x50    /* SPI1 Clock Control */
#define CM_PER_L4LS_CLKCTRL     0x60    /* L4LS Clock Control */
#define CM_PER_MCASP1_CLKCTRL   0x68    /* MCASP1 Clock Control */
#define CM_PER_UART1_CLKCTRL    0x6C    /* UART1 Clock Control */
#define CM_PER_UART2_CLKCTRL    0x70    /* UART2 Clock Control */
#define CM_PER_UART3_CLKCTRL    0x74    /* UART3 Clock Control */
#define CM_PER_UART4_CLKCTRL    0x78    /* UART4 Clock Control */
#define CM_PER_TIMER7_CLKCTRL   0x7C    /* Timer7 Clock Control */
#define CM_PER_TIMER2_CLKCTRL   0x80    /* Timer2 Clock Control */
#define CM_PER_TIMER3_CLKCTRL   0x84    /* Timer3 Clock Control */
#define CM_PER_TIMER4_CLKCTRL   0x88    /* Timer4 Clock Control */
#define CM_PER_GPIO1_CLKCTRL    0xAC    /* GPIO1 Clock Control */
#define CM_PER_GPIO2_CLKCTRL    0xB0    /* GPIO2 Clock Control */
#define CM_PER_GPIO3_CLKCTRL    0xB4    /* GPIO3 Clock Control */
#define CM_PER_TPCC_CLKCTRL     0xBC    /* TPCC Clock Control */
#define CM_PER_DCAN0_CLKCTRL    0xC0    /* DCAN0 Clock Control */
#define CM_PER_DCAN1_CLKCTRL    0xC4    /* DCAN1 Clock Control */
#define CM_PER_EPWMSS1_CLKCTRL  0xCC    /* EPWMSS1 Clock Control */
#define CM_PER_EPWMSS0_CLKCTRL  0xD4    /* EPWMSS0 Clock Control */
#define CM_PER_EPWMSS2_CLKCTRL  0xD8    /* EPWMSS2 Clock Control */
#define CM_PER_L3_INSTR_CLKCTRL 0xDC    /* L3 Instrumentation Clock Control */
#define CM_PER_L3_CLKCTRL       0xE0    /* L3 Clock Control */
#define CM_PER_IEEE5000_CLKSTCTRL 0xEC  /* IEEE5000 Clock Domain State Control */
#define CM_PER_LCDC_CLKSTCTRL   0xF0    /* LCDC Clock Domain State Control */
#define CM_PER_CPSW_CLKSTCTRL   0xF4    /* CPSW Clock Domain State Control */
#define CM_PER_OCPWP_L3_CLKSTCTRL 0xF8  /* OCPWP L3 Clock Domain State Control */
#define CM_PER_PRU_ICSS_CLKSTCTRL 0xFC  /* PRU ICSS Clock Domain State Control */
#define CM_PER_CPSW_CLKCTRL     0x144   /* CPSW Clock Control */
#define CM_PER_PRUSS_CLKCTRL    0x148   /* PRUSS Clock Control */
#define CM_PER_MMC1_CLKCTRL     0x14C   /* MMC1 Clock Control */
#define CM_PER_MMC2_CLKCTRL     0x150   /* MMC2 Clock Control */
#define CM_PER_TPTC1_CLKCTRL    0x154   /* TPTC1 Clock Control */
#define CM_PER_TPTC2_CLKCTRL    0x158   /* TPTC2 Clock Control */
#define CM_PER_SPINLOCK_CLKCTRL 0x15C   /* SPINLOCK Clock Control */
#define CM_PER_MAILBOX0_CLKCTRL 0x160   /* MAILBOX0 Clock Control */
#define CM_PER_L4HS_CLKSTCTRL   0x11C   /* L4HS Clock Domain State Control */
#define CM_PER_L4HS_CLKCTRL     0x120   /* L4HS Clock Control */
#define CM_PER_OCPWP_CLKCTRL    0x130   /* OCPWP Clock Control */
#define CM_PER_PRU_ICSS_CLKCTRL 0x140   /* PRU ICSS Clock Control */
#define CM_PER_TIMER5_CLKCTRL   0x164   /* Timer5 Clock Control */
#define CM_PER_TIMER6_CLKCTRL   0x168   /* Timer6 Clock Control */
#define CLKCTRL_IDLEST_MASK     (0x3 << CLKCTRL_IDLEST_SHIFT)
#define CLKCTRL_IDLEST_FUNCTIONAL (0x0 << CLKCTRL_IDLEST_SHIFT) /* Module is functional */
#define CLKCTRL_IDLEST_TRANSITION (0x1 << CLKCTRL_IDLEST_SHIFT) /* Module is in transition */
#define CLKCTRL_IDLEST_IDLE     (0x2 << CLKCTRL_IDLEST_SHIFT)   /* Module is in idle */
#define CLKCTRL_IDLEST_DISABLED (0x3 << CLKCTRL_IDLEST_SHIFT)   /* Module is disabled */
#define AM335X_TIMER0_BASE      0x44E05000UL  /* DMTimer0 (not implemented) */
#define AM335X_TIMER1_MS_BASE   0x44E31000UL  /* DMTimer1 (1ms) - Table 20-35 */
#define AM335X_TIMER2_BASE      0x48040000UL  /* DMTimer2 - Table 20-10 */
#define AM335X_TIMER3_BASE      0x48042000UL  /* DMTimer3 - Table 20-10 */
#define AM335X_TIMER4_BASE      0x48044000UL  /* DMTimer4 - Table 20-10 */
#define AM335X_TIMER5_BASE      0x48046000UL  /* DMTimer5 - Table 20-10 */
#define AM335X_TIMER6_BASE      0x48048000UL  /* DMTimer6 - Table 20-10 */
#define AM335X_TIMER7_BASE      0x4804A000UL  /* DMTimer7 - Table 20-10 */
#define AM335X_TIMER_SIZE       0x1000
#define AM335X_TIMER0_IRQ       66
#define AM335X_TIMER1_MS_IRQ    67
#define AM335X_TIMER2_IRQ       68
#define AM335X_TIMER3_IRQ       69
#define AM335X_TIMER4_IRQ       92
#define AM335X_TIMER5_IRQ       93
#define AM335X_TIMER6_IRQ       94
#define AM335X_TIMER7_IRQ       95
#define AM335X_GPIO3A_IRQ       62
#define AM335X_GPIO3B_IRQ       63
#define AM335X_GPIO0A_IRQ       96
#define AM335X_GPIO0B_IRQ       97
#define AM335X_GPIO1A_IRQ       98
#define AM335X_GPIO1B_IRQ       99
#define AM335X_I2C0_BASE        0x44E0B000UL  /* I2C0 - PMIC control */
#define AM335X_I2C1_BASE        0x4802A000UL  /* I2C1 - General purpose */
#define AM335X_I2C2_BASE        0x4819C000UL  /* I2C2 - General purpose */
#define AM335X_I2C_SIZE         0x1000
#define AM335X_I2C0_IRQ         70
#define AM335X_I2C1_IRQ         71
#define AM335X_I2C2_IRQ         30
#define AM335X_SPI0_BASE        0x48030000UL  /* SPI0 - McSPI0 */
#define AM335X_SPI1_BASE        0x481A0000UL  /* SPI1 - McSPI1 */
#define AM335X_SPI_SIZE         0x1000
#define AM335X_SPI0_IRQ         65
#define AM335X_SPI1_IRQ         125
#define AM335X_EHRPWM0_BASE     0x48300000UL  /* EHRPWM0 */
#define AM335X_EHRPWM1_BASE     0x48302000UL  /* EHRPWM1 */ 
#define AM335X_EHRPWM2_BASE     0x48304000UL  /* EHRPWM2 */
#define AM335X_EHRPWM_SIZE      0x1000
#define AM335X_EHRPWM0_IRQ      86
#define AM335X_EHRPWM1_IRQ      87
#define AM335X_EHRPWM2_IRQ      88
#define UART_RBR_THR_DLL        0x00    /* Receiver Buffer/Transmitter Holding/Divisor Latch Low */
#define UART_IER_DLH            0x04    /* Interrupt Enable/Divisor Latch High */
#define UART_IIR_FCR            0x08    /* Interrupt Identification/FIFO Control */
#define UART_LCR                0x0C    /* Line Control */
#define UART_MCR                0x10    /* Modem Control */
#define UART_LSR                0x14    /* Line Status */
#define UART_MSR                0x18    /* Modem Status */
#define UART_SPR                0x1C    /* Scratch Pad */
#define UART_MDR1               0x20    /* Mode Definition 1 */
#define UART_MDR2               0x24    /* Mode Definition 2 */
#define UART_SFLSR              0x28    /* Status FIFO Line Status */
#define UART_RESUME             0x2C    /* Resume */
#define UART_SFREGL             0x30    /* Status FIFO Register Low */
#define UART_SFREGH             0x34    /* Status FIFO Register High */
#define UART_BLR                0x38    /* BOF Length */
#define UART_ACREG              0x3C    /* Auxiliary Control */
#define UART_SCR                0x40    /* Supplementary Control */
#define UART_SSR                0x44    /* Supplementary Status */
#define UART_EBLR               0x48    /* BOF Length Extended */
#define UART_MVR                0x50    /* Module Version */
#define UART_SYSC               0x54    /* System Configuration */
#define UART_SYSS               0x58    /* System Status */
#define UART_WER                0x5C    /* Wake-up Enable */
#define UART_CFPS               0x60    /* Carrier Frequency Prescaler */
#define UART_RXFIFO_LVL         0x64    /* RX FIFO Level */
#define UART_TXFIFO_LVL         0x68    /* TX FIFO Level */
#define UART_IER2               0x6C    /* Interrupt Enable 2 */
#define UART_ISR2               0x70    /* Interrupt Status 2 */
#define UART_FREQ_SEL           0x74    /* Frequency Select */
#define UART_ABAUD_1ST_CHAR     0x78    /* Auto-baud First Character */
#define UART_ABAUD_2ND_CHAR     0x7C    /* Auto-baud Second Character */
#define UART_LSR_DR             0x01    /* Data Ready */
#define UART_LSR_OE             0x02    /* Overrun Error */
#define UART_LSR_PE             0x04    /* Parity Error */
#define UART_LSR_FE             0x08    /* Framing Error */
#define UART_LSR_BI             0x10    /* Break Interrupt */
#define UART_LSR_THRE           0x20    /* Transmitter Holding Register Empty */
#define UART_LSR_TEMT           0x40    /* Transmitter Empty */
#define UART_LSR_RXFIFOE        0x80    /* RX FIFO Error */
#define UART_MDR1_MODE_16X      0x00    /* 16x over-sampling UART mode */
#define UART_MDR1_MODE_SIR      0x01    /* SIR mode */
#define UART_MDR1_MODE_16X_AUTO_BAUD 0x02 /* 16x auto-baud */
#define UART_MDR1_MODE_13X      0x03    /* 13x mode */
#define UART_MDR1_MODE_MIR      0x04    /* MIR mode */
#define UART_MDR1_MODE_FIR      0x05    /* FIR mode */
#define UART_MDR1_MODE_CIR      0x06    /* CIR mode */
#define UART_MDR1_MODE_DISABLE  0x07    /* Disable mode */
#define UART_LCR_WLS_5          0x00    /* Word Length Select: 5 bits */
#define UART_LCR_WLS_6          0x01    /* Word Length Select: 6 bits */
#define UART_LCR_WLS_7          0x02    /* Word Length Select: 7 bits */
#define UART_LCR_WLS_8          0x03    /* Word Length Select: 8 bits */
#define UART_LCR_STB            0x04    /* Stop Bit Select */
#define UART_LCR_PEN            0x08    /* Parity Enable */
#define UART_LCR_EPS            0x10    /* Even Parity Select */
#define UART_LCR_SP             0x20    /* Stick Parity */
#define UART_LCR_BC             0x40    /* Break Control */
#define UART_LCR_DLAB           0x80    /* Divisor Latch Access Bit */
#define UART_FCR_FIFOEN         0x01    /* FIFO Enable */
#define UART_FCR_RXCLR          0x02    /* RX FIFO Clear */
#define UART_FCR_TXCLR          0x04    /* TX FIFO Clear */
#define UART_FCR_DMA_SELECT     0x08    /* DMA Mode Select */
#define UART_FCR_TX_TRIG_8      0x00    /* TX Trigger Level: 8 spaces */
#define UART_FCR_TX_TRIG_16     0x10    /* TX Trigger Level: 16 spaces */
#define UART_FCR_TX_TRIG_32     0x20    /* TX Trigger Level: 32 spaces */
#define UART_FCR_TX_TRIG_56     0x30    /* TX Trigger Level: 56 spaces */
#define UART_FCR_RX_TRIG_1      0x00    /* RX Trigger Level: 1 character */
#define UART_FCR_RX_TRIG_4      0x40    /* RX Trigger Level: 4 characters */
#define UART_FCR_RX_TRIG_8      0x80    /* RX Trigger Level: 8 characters */
#define UART_FCR_RX_TRIG_14     0xC0    /* RX Trigger Level: 14 characters */
#define UART_SYSC_AUTOIDLE      0x01    /* Auto-idle Enable */
#define UART_SYSC_SOFTRESET     0x02    /* Software Reset */
#define UART_SYSC_ENAWAKEUP     0x04    /* Enable Wakeup */
#define UART_SYSC_IDLEMODE_FORCE 0x00   /* Force-idle mode */
#define UART_SYSC_IDLEMODE_NO   0x08    /* No-idle mode */
#define UART_SYSC_IDLEMODE_SMART 0x10   /* Smart-idle mode */
#define UART_SYSC_IDLEMODE_SMART_WKUP 0x18 /* Smart-idle wakeup-capable mode */
#define UART_SYSS_RESETDONE     0x01    /* Reset Done */
#define UART_MCR_DTR            0x01    /* Data Terminal Ready */
#define UART_MCR_RTS            0x02    /* Request to Send */
#define UART_MCR_OUT1           0x04    /* Output 1 */
#define UART_MCR_OUT2           0x08    /* Output 2 (enables interrupts) */
#define UART_MCR_LOOP           0x10    /* Loopback mode */
#define UART_MCR_AFE            0x20    /* Auto Flow Control Enable */
#define UART_MCR_TCRTLR         0x40    /* TCR/TLR register access */
#define I2C_REVNB_LO            0x00    /* Revision Number Low */
#define I2C_REVNB_HI            0x04    /* Revision Number High */
#define I2C_STAT                0x08    /* Status Register */
#define I2C_IE                  0x0C    /* Interrupt Enable */
#define I2C_IRQSTATUS_RAW       0x10    /* Raw Interrupt Status */
#define I2C_IRQSTATUS           0x14    /* Interrupt Status */
#define I2C_IRQENABLE_SET       0x18    /* Interrupt Enable Set */
#define I2C_IRQENABLE_CLR       0x1C    /* Interrupt Enable Clear */
#define I2C_WE                  0x20    /* Wakeup Enable */
#define I2C_DMARXENABLE_SET     0x24    /* DMA RX Enable Set */
#define I2C_DMATXENABLE_SET     0x28    /* DMA TX Enable Set */
#define I2C_DMARXENABLE_CLR     0x2C    /* DMA RX Enable Clear */
#define I2C_DMATXENABLE_CLR     0x30    /* DMA TX Enable Clear */
#define I2C_DMARXWAKE_EN        0x34    /* DMA RX Wakeup Enable */
#define I2C_DMATXWAKE_EN        0x38    /* DMA TX Wakeup Enable */
#define I2C_SYSS                0x90    /* System Status */
#define I2C_BUF                 0x94    /* Buffer Configuration */
#define I2C_CNT                 0x98    /* Data Counter */
#define I2C_DATA                0x9C    /* Data Access */
#define I2C_CON                 0xA4    /* Configuration */
#define I2C_OA                  0xA8    /* Own Address */
#define I2C_SA                  0xAC    /* Slave Address */
#define I2C_PSC                 0xB0    /* Clock Prescaler */
#define I2C_SCLL                0xB4    /* SCL Low Time */
#define I2C_SCLH                0xB8    /* SCL High Time */
#define I2C_SYSTEST             0xBC    /* System Test */
#define I2C_BUFSTAT             0xC0    /* Buffer Status */
#define I2C_OA1                 0xC4    /* Own Address 1 */
#define I2C_OA2                 0xC8    /* Own Address 2 */
#define I2C_OA3                 0xCC    /* Own Address 3 */
#define I2C_ACTOA               0xD0    /* Active Own Address */
#define I2C_SBLOCK              0xD4    /* Clock Blocking Enable */
#define I2C_STAT_XDR            (1 << 14)   /* Transmit Data Ready */
#define I2C_STAT_RDR            (1 << 13)   /* Receive Data Ready */
#define I2C_STAT_BB             (1 << 12)   /* Bus Busy */
#define I2C_STAT_ROVR           (1 << 11)   /* Receive Overrun */
#define I2C_STAT_XUDF           (1 << 10)   /* Transmit Underflow */
#define I2C_STAT_AAS            (1 << 9)    /* Address As Slave */
#define I2C_STAT_BF             (1 << 8)    /* Bus Free */
#define I2C_STAT_XRDY           (1 << 4)    /* Transmit Data Ready */
#define I2C_STAT_RRDY           (1 << 3)    /* Receive Data Ready */
#define I2C_STAT_ARDY           (1 << 2)    /* Access Ready */
#define I2C_STAT_NACK           (1 << 1)    /* No Acknowledgment */
#define I2C_STAT_AL             (1 << 0)    /* Arbitration Lost */
#define I2C_CON_EN              (1 << 15)   /* I2C Enable */
#define I2C_CON_BE              (1 << 14)   /* Big Endian */
#define I2C_CON_OPMODE_SHIFT    12
#define I2C_CON_OPMODE_MASK     (3 << I2C_CON_OPMODE_SHIFT)
#define I2C_CON_STB             (1 << 11)   /* Start Byte */
#define I2C_CON_MST             (1 << 10)   /* Master Mode */
#define I2C_CON_TRX             (1 << 9)    /* Transmitter Mode */
#define I2C_CON_XSA             (1 << 8)    /* Expand Slave Address */
#define I2C_CON_XOA0            (1 << 7)    /* Expand Own Address 0 */
#define I2C_CON_XOA1            (1 << 6)    /* Expand Own Address 1 */
#define I2C_CON_XOA2            (1 << 5)    /* Expand Own Address 2 */
#define I2C_CON_XOA3            (1 << 4)    /* Expand Own Address 3 */
#define I2C_CON_STP             (1 << 1)    /* Stop */
#define I2C_CON_STT             (1 << 0)    /* Start */
#define MCSPI_REVISION          0x00    /* Module Revision */
#define MCSPI_SYSCONFIG         0x10    /* System Configuration */
#define MCSPI_SYSSTATUS         0x14    /* System Status */
#define MCSPI_IRQSTATUS         0x18    /* Interrupt Status */
#define MCSPI_IRQENABLE         0x1C    /* Interrupt Enable */
#define MCSPI_WAKEUPENABLE      0x20    /* Wakeup Enable */
#define MCSPI_SYST              0x24    /* System Test */
#define MCSPI_MODULCTRL         0x28    /* Module Control */
#define MCSPI_CH0CONF           0x2C    /* Channel 0 Configuration */
#define MCSPI_CH0STAT           0x30    /* Channel 0 Status */
#define MCSPI_CH0CTRL           0x34    /* Channel 0 Control */
#define MCSPI_TX0               0x38    /* Channel 0 TX Buffer */
#define MCSPI_RX0               0x3C    /* Channel 0 RX Buffer */
#define MCSPI_CH1CONF           0x40    /* Channel 1 Configuration */
#define MCSPI_CH1STAT           0x44    /* Channel 1 Status */
#define MCSPI_CH1CTRL           0x48    /* Channel 1 Control */
#define MCSPI_TX1               0x4C    /* Channel 1 TX Buffer */
#define MCSPI_RX1               0x50    /* Channel 1 RX Buffer */
#define MCSPI_CH2CONF           0x54    /* Channel 2 Configuration */
#define MCSPI_CH2STAT           0x58    /* Channel 2 Status */
#define MCSPI_CH2CTRL           0x5C    /* Channel 2 Control */
#define MCSPI_TX2               0x60    /* Channel 2 TX Buffer */
#define MCSPI_RX2               0x64    /* Channel 2 RX Buffer */
#define MCSPI_CH3CONF           0x68    /* Channel 3 Configuration */
#define MCSPI_CH3STAT           0x6C    /* Channel 3 Status */
#define MCSPI_CH3CTRL           0x70    /* Channel 3 Control */
#define MCSPI_TX3               0x74    /* Channel 3 TX Buffer */
#define MCSPI_RX3               0x78    /* Channel 3 RX Buffer */
#define MCSPI_XFERLEVEL         0x7C    /* Transfer Level */
#define MCSPI_DAFTX             0x80    /* DMA Address Aligned FIFO TX */
#define MCSPI_DAFRX             0xA0    /* DMA Address Aligned FIFO RX */
#define MCSPI_CHCONF_CLKD_SHIFT     2   /* Clock Divider */
#define MCSPI_CHCONF_CLKD_MASK      (0xF << MCSPI_CHCONF_CLKD_SHIFT)
#define MCSPI_CHCONF_EPOL           (1 << 6)    /* CS Polarity */
#define MCSPI_CHCONF_WL_SHIFT       7   /* Word Length */
#define MCSPI_CHCONF_WL_MASK        (0x1F << MCSPI_CHCONF_WL_SHIFT)
#define MCSPI_CHCONF_TRM_SHIFT      12  /* Transmit/Receive Mode */
#define MCSPI_CHCONF_TRM_MASK       (0x3 << MCSPI_CHCONF_TRM_SHIFT)
#define MCSPI_CHCONF_DMAW           (1 << 14)   /* DMA Write Request */
#define MCSPI_CHCONF_DMAR           (1 << 15)   /* DMA Read Request */
#define MCSPI_CHCONF_DPE0           (1 << 16)   /* Data Pin Enable 0 */  
#define MCSPI_CHCONF_DPE1           (1 << 17)   /* Data Pin Enable 1 */
#define MCSPI_CHCONF_IS             (1 << 18)   /* Input Select */
#define MCSPI_CHCONF_TURBO          (1 << 19)   /* Turbo Mode */
#define MCSPI_CHCONF_FORCE          (1 << 20)   /* Manual CS Assert */
#define MCSPI_CHCONF_SPIENSLV_SHIFT 21  /* Slave CS Select */
#define MCSPI_CHCONF_SPIENSLV_MASK  (0x3 << MCSPI_CHCONF_SPIENSLV_SHIFT)
#define MCSPI_CHCONF_SBE            (1 << 23)   /* Start Bit Enable */
#define MCSPI_CHCONF_SBPOL          (1 << 24)   /* Start Bit Polarity */
#define MCSPI_CHCONF_TCS_SHIFT      25  /* CS Time Control */
#define MCSPI_CHCONF_TCS_MASK       (0x3 << MCSPI_CHCONF_TCS_SHIFT)
#define MCSPI_CHCONF_FFEW           (1 << 27)   /* FIFO Enabled Write */
#define MCSPI_CHCONF_FFER           (1 << 28)   /* FIFO Enabled Read */
#define MCSPI_CHCONF_CLKG           (1 << 29)   /* Clock/Data Gating */
#define MCSPI_CHSTAT_RXS            (1 << 0)    /* RX Register Full */
#define MCSPI_CHSTAT_TXS            (1 << 1)    /* TX Register Empty */
#define MCSPI_CHSTAT_EOT            (1 << 2)    /* End of Transfer */
#define MCSPI_CHSTAT_TXFFE          (1 << 3)    /* TX FIFO Empty */
#define MCSPI_CHSTAT_TXFFF          (1 << 4)    /* TX FIFO Full */
#define MCSPI_CHSTAT_RXFFE          (1 << 5)    /* RX FIFO Empty */
#define MCSPI_CHSTAT_RXFFF          (1 << 6)    /* RX FIFO Full */
#define MCSPI_CHCTRL_EN             (1 << 0)    /* Channel Enable */
#define MCSPI_CHCTRL_EXTCLK_SHIFT   8   /* External Clock */
#define MCSPI_CHCTRL_EXTCLK_MASK    (0xFF << MCSPI_CHCTRL_EXTCLK_SHIFT)
#define MCSPI_MODULCTRL_SINGLE      (1 << 0)    /* Single Channel Mode */
#define MCSPI_MODULCTRL_PIN34       (1 << 1)    /* Pin Mode Select */
#define MCSPI_MODULCTRL_MS          (1 << 2)    /* Master/Slave */
#define MCSPI_MODULCTRL_SYSTEM_TEST (1 << 3)    /* System Test Enable */
#define MCSPI_MODULCTRL_MOA         (1 << 7)    /* Multiple Word Access */
#define MCSPI_MODULCTRL_FDAA        (1 << 8)    /* FIFO DMA Address Aligned */
#define EHRPWM_TBCTL            0x00    /* Time-Base Control Register */
#define EHRPWM_TBSTS            0x02    /* Time-Base Status Register */
#define EHRPWM_TBPHSHR          0x04    /* Time-Base Phase High Resolution Register */
#define EHRPWM_TBPHS            0x06    /* Time-Base Phase Register */
#define EHRPWM_TBCNT            0x08    /* Time-Base Counter Register */
#define EHRPWM_TBPRD            0x0A    /* Time-Base Period Register */
#define EHRPWM_TBPRDHR          0x0C    /* Time-Base Period High Resolution Register */
#define EHRPWM_CMPCTL           0x0E    /* Counter-Compare Control Register */
#define EHRPWM_CMPAHR           0x10    /* Counter-Compare A High Resolution Register */
#define EHRPWM_CMPA             0x12    /* Counter-Compare A Register */
#define EHRPWM_CMPB             0x14    /* Counter-Compare B Register */
#define EHRPWM_AQCTLA           0x16    /* Action-Qualifier Control Register for Output A */
#define EHRPWM_AQCTLB           0x18    /* Action-Qualifier Control Register for Output B */
#define EHRPWM_AQSFRC           0x1A    /* Action-Qualifier Software Force Register */
#define EHRPWM_AQCSFRC          0x1C    /* Action-Qualifier Continuous Software Force Register */
#define EHRPWM_DBCTL            0x1E    /* Dead-Band Generator Control Register */
#define EHRPWM_DBRED            0x20    /* Dead-Band Generator Rising Edge Delay Register */
#define EHRPWM_DBFED            0x22    /* Dead-Band Generator Falling Edge Delay Register */
#define EHRPWM_TZSEL            0x24    /* Trip-Zone Select Register */
#define EHRPWM_TZCTL            0x28    /* Trip-Zone Control Register */
#define EHRPWM_TZEINT           0x2A    /* Trip-Zone Enable Interrupt Register */
#define EHRPWM_TZFLG            0x2C    /* Trip-Zone Flag Register */
#define EHRPWM_TZCLR            0x2E    /* Trip-Zone Clear Register */
#define EHRPWM_TZFRC            0x30    /* Trip-Zone Force Register */
#define EHRPWM_ETSEL            0x32    /* Event-Trigger Selection Register */
#define EHRPWM_ETPS             0x34    /* Event-Trigger Pre-Scale Register */
#define EHRPWM_ETFLG            0x36    /* Event-Trigger Flag Register */
#define EHRPWM_ETCLR            0x38    /* Event-Trigger Clear Register */
#define EHRPWM_ETFRC            0x3A    /* Event-Trigger Force Register */
#define EHRPWM_PCCTL            0x3C    /* PWM-Chopper Control Register */
#define EHRPWM_HRCTL            0x40    /* High-Resolution Control Register */
#define TBCTL_CTRMODE_MASK      0x3     /* Counter Mode */
#define TBCTL_CTRMODE_UP        0x0     /* Up-count mode */
#define TBCTL_CTRMODE_DOWN      0x1     /* Down-count mode */
#define TBCTL_CTRMODE_UPDOWN    0x2     /* Up-down-count mode */
#define TBCTL_CTRMODE_STOP      0x3     /* Stop-freeze counter */
#define TBCTL_PHSEN             (1 << 2)    /* Phase load enable */
#define TBCTL_RND               (1 << 3)    /* Emulation mode */
#define TBCTL_SWFSYNC           (1 << 6)    /* Software forced sync pulse */
#define TBCTL_HSPCLKDIV_SHIFT   7       /* High speed time-base clock prescale bits */
#define TBCTL_HSPCLKDIV_MASK    (0x7 << TBCTL_HSPCLKDIV_SHIFT)
#define TBCTL_CLKDIV_SHIFT      10      /* Time-base clock prescale bits */
#define TBCTL_CLKDIV_MASK       (0x7 << TBCTL_CLKDIV_SHIFT)
#define AQCTL_ZRO_SHIFT         0       /* Action when CTR = 0 */
#define AQCTL_ZRO_MASK          (0x3 << AQCTL_ZRO_SHIFT)
#define AQCTL_PRD_SHIFT         2       /* Action when CTR = PRD */
#define AQCTL_PRD_MASK          (0x3 << AQCTL_PRD_SHIFT)
#define AQCTL_CAU_SHIFT         4       /* Action when CTR = CMPA on UP count */
#define AQCTL_CAU_MASK          (0x3 << AQCTL_CAU_SHIFT)
#define AQCTL_CAD_SHIFT         6       /* Action when CTR = CMPA on DOWN count */
#define AQCTL_CAD_MASK          (0x3 << AQCTL_CAD_SHIFT)
#define AQCTL_CBU_SHIFT         8       /* Action when CTR = CMPB on UP count */
#define AQCTL_CBU_MASK          (0x3 << AQCTL_CBU_SHIFT)
#define AQCTL_CBD_SHIFT         10      /* Action when CTR = CMPB on DOWN count */
#define AQCTL_CBD_MASK          (0x3 << AQCTL_CBD_SHIFT)
#define AQ_NO_ACTION            0x0     /* Do nothing */
#define AQ_CLEAR                0x1     /* Clear */
#define AQ_SET                  0x2     /* Set */
#define AQ_TOGGLE               0x3     /* Toggle */
#define TIMER_TIDR          0x00    /* Timer Identification Register */
#define TIMER_TIOCP_CFG     0x10    /* Timer OCP Configuration Register */
#define TIMER_IRQ_EOI       0x20    /* Timer IRQ End-of-Interrupt Register */
#define TIMER_IRQSTATUS_RAW 0x24    /* Timer Status Raw Register */
#define TIMER_IRQSTATUS     0x28    /* Timer Status Register */
#define TIMER_IRQENABLE_SET 0x2C    /* Timer Interrupt Enable Set Register */
#define TIMER_IRQENABLE_CLR 0x30    /* Timer Interrupt Enable Clear Register */
#define TIMER_IRQWAKEEN     0x34    /* Timer IRQ Wakeup Enable Register */
#define TIMER_TCLR          0x38    /* Timer Control Register */
#define TIMER_TCRR          0x3C    /* Timer Counter Register */
#define TIMER_TLDR          0x40    /* Timer Load Register */
#define TIMER_TTGR          0x44    /* Timer Trigger Register */
#define TIMER_TWPS          0x48    /* Timer Write Posting Bits Register */
#define TIMER_TMAR          0x4C    /* Timer Match Register */
#define TIMER_TCAR1         0x50    /* Timer Capture Register 1 */
#define TIMER_TSICR         0x54    /* Timer Synchronous Interface Control Register */
#define TIMER_TCAR2         0x58    /* Timer Capture Register 2 */
#define TIMER_1MS_TIDR      0x00    /* Timer Identification Register */
#define TIMER_1MS_TIOCP_CFG 0x10    /* Timer OCP Configuration Register */
#define TIMER_1MS_TISTAT    0x14    /* Timer Status Register */
#define TIMER_1MS_TISR      0x18    /* Timer Interrupt Status Register */
#define TIMER_1MS_TIER      0x1C    /* Timer Interrupt Enable Register */
#define TIMER_1MS_TWER      0x20    /* Timer Wakeup Enable Register */
#define TIMER_1MS_TCLR      0x24    /* Timer Control Register */
#define TIMER_1MS_TCRR      0x28    /* Timer Counter Register */
#define TIMER_1MS_TLDR      0x2C    /* Timer Load Register */
#define TIMER_1MS_TTGR      0x30    /* Timer Trigger Register */
#define TIMER_1MS_TWPS      0x34    /* Timer Write Posted Status Register */
#define TIMER_1MS_TMAR      0x38    /* Timer Match Register */
#define TIMER_1MS_TCAR1     0x3C    /* Timer Capture Register 1 */
#define TIMER_1MS_TSICR     0x40    /* Timer Synchronous Interface Control Register */
#define TIMER_1MS_TCAR2     0x44    /* Timer Capture Register 2 */
#define TIMER_1MS_TPIR      0x48    /* Positive Increment Register (1ms tick generation) */
#define TIMER_1MS_TNIR      0x4C    /* Negative Increment Register (1ms tick generation) */
#define TIMER_1MS_TCVR      0x50    /* Counter Value Register (1ms tick generation) */
#define TIMER_1MS_TOCR      0x54    /* Overflow Counter Register (mask tick interrupts) */
#define TIMER_1MS_TOWR      0x58    /* Overflow Wrapper Register (masked overflow count) */
#define TCLR_ST             (1 << 0)    /* Start/Stop Timer */
#define TCLR_AR             (1 << 1)    /* Auto-reload */
#define TCLR_PTV_SHIFT      2           /* Pre-scaler value shift */
#define TCLR_PTV_MASK       (7 << TCLR_PTV_SHIFT)
#define TCLR_PRE            (1 << 5)    /* Pre-scaler enable */
#define TCLR_CE             (1 << 6)    /* Compare enable */
#define TCLR_SCPWM          (1 << 7)    /* Single compare pulse width modulation */
#define TCLR_TCM_SHIFT      8           /* Transition capture mode */
#define TCLR_TCM_MASK       (3 << TCLR_TCM_SHIFT)
#define TCLR_TRG_SHIFT      10          /* Trigger output mode */
#define TCLR_TRG_MASK       (3 << TCLR_TRG_SHIFT)
#define TCLR_PT             (1 << 12)   /* Pulse/toggle select */
#define TCLR_CAPT_MODE      (1 << 13)   /* Capture mode select */
#define TCLR_GPO_CFG        (1 << 14)   /* PWM output pin configuration */
#define TSICR_CLK_SRC_MASK  (7 << 0)    /* Clock source selection mask */
#define TSICR_CLK_SYS       0           /* System clock (24 MHz) */
#define TSICR_CLK_32KHZ     1           /* 32.768 kHz oscillator */
#define TSICR_CLK_TCLKIN    2           /* External TCLKIN */
#define TSICR_POSTED        (1 << 2)    /* Posted mode enable */
#define TSICR_SFT           (1 << 1)    /* Software reset */
#define TSICR_RESERVED      (1 << 0)    /* Reserved bit */
#define TIMER_IRQ_MAT       (1 << 0)    /* Match interrupt */
#define TIMER_IRQ_OVF       (1 << 1)    /* Overflow interrupt */
#define TIMER_IRQ_TCAR      (1 << 2)    /* Capture interrupt */
#define AM335X_TIMER_SIZE           0x1000      /* 4KB timer region */
#define AM335X_TIMER_FREQ_24MHZ     24000000ULL /* 24 MHz system clock */
#define AM335X_TIMER_FREQ_32KHZ     32768ULL    /* 32.768 kHz oscillator */
