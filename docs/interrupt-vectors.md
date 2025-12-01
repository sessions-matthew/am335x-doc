# AM3358 Interrupt Vector Table

## Overview

This document provides the complete interrupt vector table for the AM3358 SoC, showing all 128 interrupt sources with their IRQ numbers, source peripherals, and signal names.

## Interrupt Vector Table

### IRQ 0-31: System and External Interrupts

| IRQ | Acronym/Name | Source | Signal Name | Description |
|-----|--------------|--------|-------------|-------------|
| 0 | EMUINT | Emulation | emu_dtdm_intr_pend | Debug/emulation interrupt |
| 1 | COMMTX | Debug | tx_intr_pend | Debug communication TX |
| 2 | COMMRX | Debug | rx_intr_pend | Debug communication RX |
| 3 | BENCH | Debug | bench_intr_pend | Debug benchmark interrupt |
| 4 | ELM_IRQ | Error Locator Module | elmint | BCH error location |
| 5 | SSM_WFI_IRQ | Secure State Manager | ssm_wfi_irq | Secure WFI interrupt |
| 6 | SSM_IRQ | Secure State Manager | ssm_irq | Secure state interrupt |
| 7 | NMI | Non-Maskable Interrupt | ext_nmi_intr_pend | External NMI |
| 8 | SEC_EVNT | Security Event | sec_evnt_intr_pend | Security violation |
| 9 | L3DEBUG | L3 Debug | l3debug_intr_pend | L3 interconnect debug |
| 10 | L3APPINT | L3 Application | l3appint_intr_pend | L3 application interrupt |
| 11 | PRCMINT | PRCM | po_int_st | Power/reset/clock management |
| 12 | EDMACOMPINT | EDMA3 | edma_intr_pend_po | DMA completion |
| 13 | EDMAMPERR | EDMA3 | edma_mperr_intr_pend_po | DMA memory protection error |
| 14 | EDMAERRINT | EDMA3 | edma_errint_intr_pend_po | DMA error interrupt |
| 15 | WDT0INT | Secure Watchdog | po_int_pend | Secure watchdog timer |
| 16 | ADC_TSC_GENINT | ADC_TSC | gen_intr_pend | ADC/TSC general interrupt |
| 17 | USBSSINT | USB Subsystem | usbss_intr_pend | USB subsystem interrupt |
| 18 | USB0 | USB0 | usb0_intr_pend | USB0 controller |
| 19 | USB1 | USB1 | usb1_intr_pend | USB1 controller |
| 20 | PRU_ICSS_EVTOUT0 | PRU-ICSS | pr1_host_intr_pend_0 | PRU host interrupt 0 |
| 21 | PRU_ICSS_EVTOUT1 | PRU-ICSS | pr1_host_intr_pend_1 | PRU host interrupt 1 |
| 22 | PRU_ICSS_EVTOUT2 | PRU-ICSS | pr1_host_intr_pend_2 | PRU host interrupt 2 |
| 23 | PRU_ICSS_EVTOUT3 | PRU-ICSS | pr1_host_intr_pend_3 | PRU host interrupt 3 |
| 24 | PRU_ICSS_EVTOUT4 | PRU-ICSS | pr1_host_intr_pend_4 | PRU host interrupt 4 |
| 25 | PRU_ICSS_EVTOUT5 | PRU-ICSS | pr1_host_intr_pend_5 | PRU host interrupt 5 |
| 26 | PRU_ICSS_EVTOUT6 | PRU-ICSS | pr1_host_intr_pend_6 | PRU host interrupt 6 |
| 27 | PRU_ICSS_EVTOUT7 | PRU-ICSS | pr1_host_intr_pend_7 | PRU host interrupt 7 |
| 28 | MMCSD1INT | MMC/SD1 | mmcsd_sinterrupt_n | MMC/SD card 1 interrupt |
| 29 | MMC0_INTR_PEND | MMC0 | mmc0_intr_pend | MMC0 interrupt pending |
| 30 | AINT | Display | sync_lost_intr_pend | Display sync lost |
| 31 | LCDC_INTR_PEND | LCD Controller | lcdc_intr_pend | LCD controller interrupt |

### IRQ 32-63: Communication and I/O Peripherals

| IRQ | Acronym/Name | Source | Signal Name | Description |
|-----|--------------|--------|-------------|-------------|
| 32 | CPSW_RX_THRESH | Ethernet | cpsw_rx_thresh_pulse | CPSW RX threshold |
| 33 | CPSW_RX | Ethernet | cpsw_rx_pulse | CPSW RX interrupt |
| 34 | CPSW_TX | Ethernet | cpsw_tx_pulse | CPSW TX interrupt |
| 35 | CPSW_MISC | Ethernet | cpsw_misc_pulse | CPSW misc interrupt |
| 36 | DMA_INTR_PIN1 | External DMA | pi_x_dma_event_intr1 | External DMA/interrupt pin 1 |
| 37 | GPIO2A | GPIO2 | pointrpend1 | GPIO bank 2 interrupt A |
| 38 | GPIO2B | GPIO2 | pointrpend2 | GPIO bank 2 interrupt B |
| 39 | USBWAKEUP | USB | usbwakeup_intr_pend | USB wakeup interrupt |
| 40 | PCIeWAKEUP | PCIe | pcie_wakeup_intr_pend | PCIe wakeup interrupt |
| 41 | LCDCINT | LCD Controller | lcd_intr_pend | LCD controller interrupt |
| 42 | GFXINT | Graphics | gfx_intr_pend | Graphics accelerator |
| 43 | ePWM2 | PWM | epwm_intr_intr_pend | Enhanced PWM 2 |
| 44 | 3PGSWRXTHR0 | Ethernet | cpsw_rx_thresh_pulse | 3-port switch RX threshold |
| 45 | 3PGSWRXINT0 | Ethernet | cpsw_rx_pulse | 3-port switch RX |
| 46 | 3PGSWTXINT0 | Ethernet | cpsw_tx_pulse | 3-port switch TX |
| 47 | 3PGSWMISC0 | Ethernet | cpsw_misc_pulse | 3-port switch misc |
| 48 | UART3INT | UART3 | niq | UART3 serial interrupt |
| 49 | UART4INT | UART4 | niq | UART4 serial interrupt |
| 50 | UART5INT | UART5 | niq | UART5 serial interrupt |
| 51 | eCAP0INT | eCAP0 | ecap_intr_intr_pend | Capture module 0 |
| 52 | GPIO3A | GPIO3 | pointrpend1 | GPIO bank 3 interrupt A |
| 53 | GPIO3B | GPIO3 | pointrpend2 | GPIO bank 3 interrupt B |
| 54 | MMCSD0INT | MMC/SD0 | mmcsd_sinterrupt_n | MMC/SD card 0 interrupt |
| 55 | McSPI0INT | McSPI0 | sinterrupt_n | Multi-channel SPI 0 |
| 56 | TINT0 | Timer0 | pointr_pend | Timer 0 interrupt |
| 57 | TINT1_1MS | DMTIMER_1ms | pointr_pend | 1ms timer interrupt |
| 58 | TINT2 | DMTIMER2 | pointr_pend | Timer 2 interrupt |
| 59 | TINT3 | DMTIMER3 | pointr_pend | Timer 3 interrupt |
| 60 | I2C0INT | I2C0 | pointrpend | I2C controller 0 |
| 61 | I2C1INT | I2C1 | pointrpend | I2C controller 1 |
| 62 | UART0INT | UART0 | niq | UART0 serial interrupt |
| 63 | UART1INT | UART1 | niq | UART1 serial interrupt |

### IRQ 64-95: Extended Peripherals and Timers

| IRQ | Acronym/Name | Source | Signal Name | Description |
|-----|--------------|--------|-------------|-------------|
| 64 | UART2INT | UART2 | niq | UART2 serial interrupt |
| 65 | RTCINT | RTC | timer_intr_pend | Real-time clock timer |
| 66 | RTCALARMINT | RTC | alarm_intr_pend | RTC alarm interrupt |
| 67 | MBINT0 | Mailbox0 | initiator_sinterrupt_q_n0 | Mailbox 0 interrupt |
| 68 | M3_TXEV | Wake M3 | TXEV | M3 subsystem TX event |
| 69 | eQEP0INT | eQEP0 | eqep_intr_intr_pend | Quadrature encoder 0 |
| 70 | MCATXINT0 | McASP0 | mcasp_x_intr_pend | Audio serial port 0 TX |
| 71 | MCARXINT0 | McASP0 | mcasp_r_intr_pend | Audio serial port 0 RX |
| 72 | MCATXINT1 | McASP1 | mcasp_x_intr_pend | Audio serial port 1 TX |
| 73 | MCARXINT1 | McASP1 | mcasp_r_intr_pend | Audio serial port 1 RX |
| 74 | Reserved | - | - | Reserved |
| 75 | Reserved | - | - | Reserved |
| 76 | ePWM0INT | eHRPWM0 | epwm_intr_intr_pend | Enhanced PWM 0 |
| 77 | ePWM1INT | eHRPWM1 | epwm_intr_intr_pend | Enhanced PWM 1 |
| 78 | eQEP1INT | eQEP1 | eqep_intr_intr_pend | Quadrature encoder 1 |
| 79 | eQEP2INT | eQEP2 | eqep_intr_intr_pend | Quadrature encoder 2 |
| 80 | DMA_INTR_PIN2 | External DMA | pi_x_dma_event_intr2 | External DMA/interrupt pin 2 |
| 81 | WDT1INT | Watchdog1 | PO_INT_PEND | Public watchdog timer |
| 82 | TINT4 | DMTIMER4 | pointr_pend | Timer 4 interrupt |
| 83 | TINT5 | DMTIMER5 | pointr_pend | Timer 5 interrupt |
| 84 | TINT6 | DMTIMER6 | pointr_pend | Timer 6 interrupt |
| 85 | TINT7 | DMTIMER7 | pointr_pend | Timer 7 interrupt |
| 86 | GPIOINT0A | GPIO0 | pointrpend1 | GPIO bank 0 interrupt A |
| 87 | GPIOINT0B | GPIO0 | pointrpend2 | GPIO bank 0 interrupt B |
| 88 | GPIOINT1A | GPIO1 | pointrpend1 | GPIO bank 1 interrupt A |
| 89 | GPIOINT1B | GPIO1 | pointrpend2 | GPIO bank 1 interrupt B |
| 90 | GPMCINT | GPMC | gpmc_sinterrupt | GPMC memory controller |
| 91 | DDRERR0 | EMIF | sys_err_intr_pend | DDR memory error |
| 92 | AES0_IRQ_S | AES0 | AES_SINTREQUEST_S | AES crypto secure side |
| 93 | AES0_IRQ_P | AES0 | AES_SINTREQUEST_P | AES crypto public side |
| 94 | Reserved | - | - | Reserved |
| 95 | Reserved | - | - | Reserved |

### IRQ 96-127: Security, DMA, and System Events

| IRQ | Acronym/Name | Source | Signal Name | Description |
|-----|--------------|--------|-------------|-------------|
| 96 | Reserved | - | - | Reserved |
| 97 | Reserved | - | - | Reserved |
| 98 | SHA_IRQ_S | SHA2 | SHA_SINTREQUEST_S | SHA2 crypto secure side |
| 99 | SHA_IRQ_P | SHA2 | SHA_SINTREQUEST_P | SHA2 crypto public side |
| 100 | FPKA_SINTREQUEST_S | PKA | PKA_SINTREQUEST_S | Public key accelerator |
| 101 | RNG_IRQ | RNG | TRNG_intr_pend | Random number generator |
| 102 | TCERRINT0 | TPTC0 | tptc_erint_pend_po | EDMA3 TC0 error |
| 103 | TCERRINT1 | TPTC1 | tptc_erint_pend_po | EDMA3 TC1 error |
| 104 | TCERRINT2 | TPTC2 | tptc_erint_pend_po | EDMA3 TC2 error |
| 105 | ADC_TSC_PENINT | ADC_TSC | pen_intr_pend | ADC/TSC pen interrupt |
| 106 | Reserved | - | - | Reserved |
| 107 | Reserved | - | - | Reserved |
| 108 | Reserved | - | - | Reserved |
| 109 | Reserved | - | - | Reserved |
| 110 | SMRFLX_MPU | Smart Reflex0 | intrpend | Smart reflex MPU |
| 111 | SMRFLX_Core | Smart Reflex1 | intrpend | Smart reflex core |
| 112 | Reserved | - | - | Reserved |
| 113 | DMA_INTR_PIN0 | External DMA | pi_x_dma_event_intr0 | External DMA/interrupt pin 0 |
| 114 | Reserved | - | - | Reserved |
| 115 | Reserved | - | - | Reserved |
| 116 | Reserved | - | - | Reserved |
| 117 | Reserved | - | - | Reserved |
| 118 | Reserved | - | - | Reserved |
| 119 | Reserved | - | - | Reserved |
| 120 | Reserved | - | - | Reserved |
| 121 | Reserved | - | - | Reserved |
| 122 | Reserved | - | - | Reserved |
| 123 | Reserved | - | - | Reserved |
| 124 | Reserved | - | - | Reserved |
| 125 | Reserved | - | - | Reserved |
| 126 | Reserved | - | - | Reserved |
| 127 | SPURIOUS | INTC | - | Spurious interrupt |

## Interrupt Categories

### Communication Peripherals
- **UART**: IRQ 62-64, 48-50 (UART0-5)
- **I2C**: IRQ 60-61 (I2C0-1) 
- **SPI**: IRQ 55 (McSPI0)
- **Ethernet**: IRQ 32-35, 44-47 (CPSW)
- **USB**: IRQ 18-19, 39 (USB0-1, wakeup)

### Timing and Control
- **DMTIMER**: IRQ 56-59, 82-85 (Timer0, 1ms, 2-7)
- **RTC**: IRQ 65-66 (timer, alarm)
- **Watchdog**: IRQ 15, 81 (secure, public)
- **PWM**: IRQ 43, 76-77 (ePWM0-2)
- **eQEP**: IRQ 69, 78-79 (eQEP0-2)
- **eCAP**: IRQ 51 (eCAP0)

### GPIO and External I/O
- **GPIO Banks**: IRQ 86-89, 37-38, 52-53 (GPIO0-3, A/B interrupts)
- **External Interrupts**: IRQ 36, 80, 113 (DMA/interrupt pins)
- **ADC/Touch**: IRQ 16, 105 (general, pen)

### Memory and Storage
- **MMC/SD**: IRQ 28, 54 (MMC0-1)
- **GPMC**: IRQ 90 (memory controller)
- **EMIF**: IRQ 91 (DDR error)
- **ELM**: IRQ 4 (error locator)

### Audio/Video
- **McASP**: IRQ 70-73 (McASP0-1 TX/RX)
- **LCD**: IRQ 30-31, 41 (display controller)
- **Graphics**: IRQ 42 (graphics accelerator)

### System and Security
- **EDMA3**: IRQ 12-14, 102-104 (completion, errors)
- **PRU-ICSS**: IRQ 20-27 (host interrupts 0-7)
- **Crypto**: IRQ 92-93, 98-101 (AES, SHA2, PKA, RNG)
- **Debug**: IRQ 0-3 (emulation, communication)
- **System**: IRQ 7-11 (NMI, security, L3, PRCM)

## Priority Groups (Typical Configuration)

### Highest Priority (0-1) - Critical System
- **NMI**: IRQ 7 (Non-maskable interrupt)
- **Secure Events**: IRQ 8 (Security violations)
- **System Errors**: IRQ 91 (Memory errors)

### High Priority (2-3) - Real-time Communication
- **Ethernet**: IRQ 32-35 (Network stack)
- **PRU-ICSS**: IRQ 20-27 (Industrial protocols)
- **USB**: IRQ 18-19 (Device communication)

### Medium Priority (4-5) - General I/O
- **UART**: IRQ 62-64 (Serial communication)
- **GPIO**: IRQ 86-89 (External interrupts)
- **Timers**: IRQ 57-59, 82-85 (Application timers)

### Low Priority (6-7) - Background Tasks
- **Audio**: IRQ 70-73 (McASP)
- **Storage**: IRQ 28, 54 (MMC/SD)
- **RTC**: IRQ 65-66 (Time keeping)

## Usage Notes

### IRQ vs FIQ Assignment
- **FIQ**: Typically used for highest priority, lowest latency interrupts
- **IRQ**: Standard interrupt handling for most peripherals
- **Software Control**: Interrupt routing configured via INTC registers

### Shared Interrupt Lines
- **GPIO Banks**: Each bank has two interrupt lines (A/B) for different pins
- **PRU-ICSS**: Multiple host interrupts from single subsystem
- **EDMA3**: Separate interrupts for completion, errors, and transfer controllers

### Reserved Interrupts
- **Future Use**: Reserved IRQ numbers for potential device variants
- **Silicon Revision**: Some interrupts may be added in later revisions
- **Application**: Should not be used by application software

## Implementation Considerations

### Interrupt Service Routine Guidelines
1. **Keep ISRs Short**: Minimize time spent in interrupt context
2. **Proper Acknowledgment**: Always acknowledge interrupts correctly
3. **Reentrancy**: Design for potential interrupt nesting
4. **Resource Sharing**: Use proper synchronization for shared resources

### Performance Optimization
- **Priority Assignment**: Assign priorities based on real-time requirements
- **Coalescing**: Combine related interrupts where possible
- **Polling vs Interrupts**: Use polling for high-frequency, low-latency events

### Debug and Testing
- **Spurious Interrupt**: Handle IRQ 127 for system robustness
- **Interrupt Storm**: Implement protection against excessive interrupt rates
- **Priority Inversion**: Monitor for priority-related scheduling issues

## Related Documentation

- [Interrupt System Overview](interrupt-system.md) - Architecture and features
- [INTC Registers](../registers/intc-registers.md) - Register-level programming
- [PRU-ICSS Interrupts](pru-icss-interrupts.md) - PRU interrupt system
- [Implementation Guide](../implementation/interrupt-handling.md) - Programming examples

## References

- AM335x Technical Reference Manual, Table 6-1 (ARM Cortex-A8 Interrupts)
- AM335x Technical Reference Manual, Chapter 6 (Interrupts)
- ARM Cortex-A8 Technical Reference Manual
- BeagleBone System Reference Manual