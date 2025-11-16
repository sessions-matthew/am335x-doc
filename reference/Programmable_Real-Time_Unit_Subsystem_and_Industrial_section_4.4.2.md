<!-- image -->

www.ti.com

## 4.4.2 Interrupt Controller (INTC)

The PRU-ICSS interrupt controller (INTC) is an interface between interrupts coming from different parts of the system (referred to as system events; see Section 4.4.2.2) and the PRU-ICSS interrupt interface.

The PRU-ICSS INTC has the following features:

- Capturing up to 64 System Events
- Supports up to 10 interrupt channels.
- Generation of 10 Host Interrupts
- -2 Host Interrupts for the PRUs.
- -8 Host Interrupts exported from the PRU-ICSS for signaling the ARM interrupt controllers.
- Each system event can be enabled and disabled.
- Each host event can be enabled and disabled.
- Hardware prioritization of events.

## 4.4.2.1 INTC Overview

The PRU-ICSS INTC supports up to 64 system events from different peripherals and PRUs to be mapped to 10 channels inside the INTC (see Figure 4-17). Interrupts from these 10 channels are further mapped to 10 Host Interrupts.

- Any of the 64 system events can be mapped to any of the 10 channels.
- Multiple interrupts can be mapped to a single channel.
- An interrupt should not be mapped to more than one channel.
- Any of the 10 channels can be mapped to any of the 10 host interrupts. It is recommended to map channel 'x' to host interrupt 'x', where x is from 0 to 9
- A channel should not be mapped to more than one host interrupt
- For channels mapping to the same host interrupt, lower number channels have higher priority.
- For interrupts on same channel, priority is determined by the hardware interrupt number. The lower the interrupt number, the higher the priority.
- Host Interrupt 0 is connected to bit 30 in register 31 of PRU0 and PRU1.
- Host Interrupt 1 is connected to bit 31 in register 31 for PRU0 and PRU1.
- Host Interrupts 2 through 9 exported from PRU-ICSS for signaling ARM interrupt controllers or other machines like EDMA.

Figure 4-17. Interrupt Controller Block Diagram

<!-- image -->

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.2.2 PRU-ICSS System Events

The PRU-ICSS system events can be found in Table 4-22.

Table 4-22. PRU-ICSS System Events

|   Int Number | Signal Name (Standard Mode)             | Source                                           | Signal Name (MII_RT Mode) (1)(2)          |
|--------------|-----------------------------------------|--------------------------------------------------|-------------------------------------------|
|           63 | tpcc_int_pend_po1                       | TPCC (EDMA)                                      |                                           |
|           62 | tpcc_errint_pend_po                     | TPCC (EDMA)                                      |                                           |
|           61 | tptc_erint_pend_po                      | TPTC0 (EDMA)                                     |                                           |
|           60 | initiator_sinterrupt_q_n1               | Mbox0 - mail_u1_irq (mailbox interrupt for pru0) |                                           |
|           59 | initiator_sinterrupt_q_n2               | Mbox0 - mail_u2_irq (mailbox interrupt for pru1) |                                           |
|           58 | Emulation Suspend Signal (software use) | Debugss                                          |                                           |
|           57 | POINTRPEND1                             | GPIO0                                            |                                           |
|           56 | pwm_trip_zone                           | eHRPWM0/eHRPWM1/eHR PWM2                         |                                           |
|           55 | mcasp_x_intr_pend                       | McASP0 Tx                                        | (pr1_mii1_col & pr1_mii1_txen) (external) |
|           54 | mcasp_r_intr_pend                       | McASP0 Rx                                        | PRU-ICSS0 PRU1_RX_EOF                     |
|           53 | gen_intr_pend                           | ADC_TSC                                          | PRU-ICSS0 MDIO_MII_LINK[1]                |
|           52 | nirq                                    | UART2                                            | PRU-ICSS0 PORT1_TX_OVERFLOW               |
|           51 | nirq                                    | UART0                                            | PRU-ICSS0 PORT1_TX_UNDERFLOW              |
|           50 | c0_rx_thresh_pend                       | 3PGSW (GEMAC)                                    | PRU-ICSS0 PRU1_RX_OVERFLOW                |
|           49 | c0_rx_pend                              | 3PGSW (GEMAC)                                    | PRU-ICSS0 PRU1_RX_NIBBLE_ODD              |
|           48 | c0_tx_pend                              | 3PGSW (GEMAC)                                    | PRU-ICSS0 PRU1_RX_CRC                     |
|           47 | c0_misc_pend                            | 3PGSW (GEMAC)                                    | PRU-ICSS0 PRU1_RX_SOF                     |
|           46 | epwm_intr_intr_pend                     | eHRPWM1                                          | PRU-ICSS0 PRU1_RX_SFD                     |
|           45 | eqep_intr_intr_pend                     | eQEP0                                            | PRU-ICSS0 PRU1_RX_ERR32                   |
|           44 | SINTERRUPTN                             | McSPI0                                           | PRU-ICSS0 PRU1_RX_ERR                     |
|           43 | epwm_intr_intr_pend                     | eHRPWM0                                          | (pr1_mii0_col & pr1_mii0_txen) (external) |
|           42 | ecap_intr_intr_pend                     | eCAP0                                            | PRU-ICSS0 PRU0_RX_EOF                     |
|           41 | POINTRPEND                              | I2C0                                             | PRU-ICSS0 MDIO_MII_LINK[0]                |
|           40 | dcan_intr                               | DCAN0                                            | PRU-ICSS0 PORT0_TX_OVERFLOW               |
|           39 | dcan_int1                               | DCAN0                                            | PRU-ICSS0 PORT0_TX_UNDERFLOW              |
|           38 | dcan_uerr                               | DCAN0                                            | PRU-ICSS0 PRU0_RX_OVERFLOW                |
|           37 | epwm_intr_intr_pend                     | eHRPWM2                                          | PRU-ICSS0 PRU0_RX_NIBBLE_ODD              |
|           36 | ecap_intr_intr_pend                     | eCAP2                                            | PRU-ICSS0 PRU0_RX_CRC                     |
|           35 | ecap_intr_intr_pend                     | eCAP1                                            | PRU-ICSS0 PRU0_RX_SOF                     |
|           34 | mcasp_r_intr_pend                       | McASP1 Rx                                        | PRU-ICSS0 PRU0_RX_SFD                     |
|           33 | mcasp_x_intr_pend                       | McASP1 Tx                                        | PRU-ICSS0 PRU0_RX_ERR32                   |
|           32 | nirq                                    | UART1                                            | PRU-ICSS0 PRU0_RX_ERR                     |

(1) MII\_RT mode is selected through the MII\_RT register in the PRU-ICSS0 CFG register space.

(2) Signals 63-56 and 31-0 for MII\_RT Mode are the same as for Standard Mode.

Table 4-22. PRU-ICSS System Events (continued)

|   Int Number | Signal Name (Standard Mode)    | Source                        | Signal Name (MII_RT Mode) (1)(2)   |
|--------------|--------------------------------|-------------------------------|------------------------------------|
|           31 | pr1_pru_mst_intr[15]_intr_re q | pru0 or pru1                  | PRU-ICSS0 Internal Interrupts      |
|           30 | pr1_pru_mst_intr[14]_intr_re q | pru0 or pru1                  |                                    |
|           29 | pr1_pru_mst_intr[13]_intr_re q | pru0 or pru1                  |                                    |
|           28 | pr1_pru_mst_intr[12]_intr_re q | pru0 or pru1                  |                                    |
|           27 | pr1_pru_mst_intr[11]_intr_re q | pru0 or pru1                  |                                    |
|           26 | pr1_pru_mst_intr[10]_intr_re q | pru0 or pru1                  |                                    |
|           25 | pr1_pru_mst_intr[9]_intr_req   | pru0 or pru1                  |                                    |
|           24 | pr1_pru_mst_intr[8]_intr_req   | pru0 or pru1                  |                                    |
|           23 | pr1_pru_mst_intr[7]_intr_req   | pru0 or pru1                  |                                    |
|           22 | pr1_pru_mst_intr[6]_intr_req   | pru0 or pru1                  |                                    |
|           21 | pr1_pru_mst_intr[5]_intr_req   | pru0 or pru1                  |                                    |
|           20 | pr1_pru_mst_intr[4]_intr_req   | pru0 or pru1                  |                                    |
|           19 | pr1_pru_mst_intr[3]_intr_req   | pru0 or pru1                  |                                    |
|           18 | pr1_pru_mst_intr[2]_intr_req   | pru0 or pru1                  |                                    |
|           17 | pr1_pru_mst_intr[1]_intr_req   | pru0 or pru1                  |                                    |
|           16 | pr1_pru_mst_intr[0]_intr_req   | pru0 or pru1                  |                                    |
|           15 | pr1_ecap_intr_req              | PRU-ICSS eCAP                 |                                    |
|           14 | sync0_out_pend                 | PRU-ICSS IEP                  |                                    |
|           13 | sync1_out_pend                 | PRU-ICSS IEP                  |                                    |
|           12 | latch0_in (input to PRU- ICSS) | PRU-ICSS IEP                  |                                    |
|           11 | latch1_in (input to PRU- ICSS) | PRU-ICSS IEP                  |                                    |
|           10 | pdi_wd_exp_pend                | PRU-ICSS IEP                  |                                    |
|            9 | pd_wd_exp_pend                 | PRU-ICSS IEP                  |                                    |
|            8 | pr1_digio_event_req            | PRU-ICSS IEP                  |                                    |
|            7 | pr1_iep_tim_cap_cmp_pend       | PRU-ICSS IEP                  |                                    |
|            6 | pr1_uart_uint_intr_req         | PRU-ICSS UART                 |                                    |
|            5 | pr1_uart_utxevt_intr_req       | PRU-ICSS UART                 |                                    |
|            4 | pr1_uart_urxevt_intr_req       | PRU-ICSS UART                 |                                    |
|            3 | pr1_xfr_timeout                | PRU-ICSS Scratch Pad          |                                    |
|            2 | pr1_pru1_r31_status_cnt16      | PRU-ICSS PRU1 (Shift Capture) |                                    |
|            1 | pr1_pru0_r31_status_cnt16      | PRU-ICSS PRU0 (Shift Capture) |                                    |
|            0 | pr1_parity_err_intr_pend       | PRU-ICSS Parity Logic         |                                    |

## 4.4.2.3 INTC Methodology

The INTC module controls the system event mapping to the host interrupt interface. System events are generated by the device peripherals or PRUs. The INTC receives the system events and maps them to internal channels. The channels are used to group interrupts together and to prioritize them. These channels are then mapped onto the host interrupts. Interrupts from the system side are active high in polarity. They are also pulse type of interrupts.

<!-- image -->

<!-- image -->

www.ti.com

The INTC encompasses many functions to process the system events and prepare them for the host interface. These functions are: processing, enabling, status, channel mapping, host interrupt mapping, prioritization, and host interfacing. Figure 4-18 illustrates the flow of system events through the functions to the host. The following subsections describe each part of the flow.

## Figure 4-18. Flow of System Events to Host

<!-- image -->

## 4.4.2.3.1 Interrupt Processing

This block does the following tasks:

- Synchronization of slower and asynchronous interrupts
- Conversion of polarity to active high
- Conversion of interrupt type to pulse interrupts

After the processing block, all interrupts will be active high pulses.

## 4.4.2.3.2 Interrupt Enabling

The next stage of INTC is to enable system events based on programmed settings. The following sequence is to be followed to enable interrupts:

- Enable required system events: System events that are required to get propagated to host are to be enabled individually by writing to IDX field in the system event enable indexed set register (EISR). The event to enable is the index value written. This sets the Enable Register bit of the given index.
- Enable required host interrupts: By writing to the IDX field in the host interrupt enable indexed set register (HIEISR), enable the required host interrupts. The host interrupt to enable is the index value written. This enables the host interrupt output or triggers the output again if that host interrupt is already enabled.
- Enable all host interrupts: By setting the EN bit in the global enable register (GER) to 1, all host interrupts will be enabled. Individual host interrupts are still enabled or disabled from their individual enables and are not overridden by the global enable.

## 4.4.2.3.3 Interrupt Status Checking

The next stage is to capture which system events are pending. There are two kinds of pending status: raw status and enabled status. Raw status is the pending status of the system event without regards to the enable bit for the system event. Enabled status is the pending status of the system events with the enable bits active. When the enable bit is inactive, the enabled status will always be inactive. The enabled status of system events is captured in system event status enabled/clear registers (SECR1-SECR2).

Status of system event 'N' is indicated by the Nth bit of SECR1-SECR2. Since there are 64 system events, two 32-bit registers are used to capture the enabled status of events. The pending status reflects whether the system event occurred since the last time the status register bit was cleared. Each bit in the status register can be individually cleared.

## 4.4.2.3.4 Interrupt Channel Mapping

The INTC has 10 internal channels to which enabled system events can be mapped. Channel 0 has highest priority and channel 9 has the lowest priority. Channels are used to group the system events into a smaller number of priorities that can be given to a host interface with a very small number of interrupt inputs.

When multiple system events are mapped to the same channel their interrupts are ORed together so that when one or more is active the output is active. The channel map registers (CMRm) define the channel for each system event. There is one register per 4 system events; therefore, there are16 channel map registers for a system of 64 events. The channel for each system event can be set using these registers.

## 4.4.2.3.4.1 Host Interrupt Mapping

The hosts can be the PRUs or ARM CPU. The 10 channels from the INTC can mapped to any of the 10 Host events. The Host map registers (HMR m ) define the channel for each system event. There is one register per 4 channels; therefore, there are 3 host map registers for 10 channels. When multiple channels are mapped to the same host interrupt, then prioritization is done to select which interrupt is in the highestpriority channel and which should be sent first to the host.

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.2.3.4.2 Interrupt Prioritization

The next stage of the INTC is prioritization. Since multiple events can feed into a single channel and multiple channels can feed into a single host interrupt, it is to read the status of all system events to determine the highest priority event that is pending. The INTC provides hardware to perform this prioritization with a given scheme so that software does not have to do this. There are two levels of prioritizations:

- The first level of prioritization is between the active channels for a host interrupt. Channel 0 has the highest priority and channel 9 has the lowest. So the first level of prioritization picks the lowest numbered active channel.
- The second level of prioritization is between the active system events for the prioritized channel. The system event in position 0 has the highest priority and system event 63 has the lowest priority. So the second level of prioritization picks the lowest position active system event.

This is the final prioritized system event for the host interrupt and is stored in the global prioritized index register (GPIR). The highest priority pending event with respect to each host interrupt can be obtained using the host interrupt prioritized index registers (HIPIRn).

## 4.4.2.3.5 Interrupt Nesting

The INTC can also perform a nesting function in its prioritization. Nesting is a method of enabling certain interrupts (usually higher-priority interrupts) when an interrupt is taken so that only those desired interrupts can trigger to the host while it is servicing the current interrupt. The typical usage is to nest on the current interrupt and disable all interrupts of the same or lower priority (or channel). Then the host will only be interrupted from a higher priority interrupt.

The nesting is done in one of three methods:

1. Nesting for all host interrupts, based on channel priority: When an interrupt is taken, the nesting level is set to its channel priority. From then, that channel priority and all lower priority channels will be disabled from generating host interrupts and only higher priority channels are allowed. When the interrupt is completely serviced, the nesting level is returned to its original value. When there is no interrupt being serviced, there are no channels disabled due to nesting. The global nesting level register (GNLR) allows the checking and setting of the global nesting level across all host interrupts. The nesting level is the channel (and all of lower priority channels) that are nested out because of a current interrupt.
2. Nesting for individual host interrupts, based on channel priority: Always nest based on channel priority for each host interrupt individually. When an interrupt is taken on a host interrupt, then, the nesting level is set to its channel priority for just that host interrupt, and other host interrupts do not have their nesting affected. Then for that host interrupt, equal or lower priority channels will not interrupt the host but may on other host interrupts if programmed. When the interrupt is completely serviced the nesting level for the host interrupt is returned to its original value. The host interrupt nesting level registers (HINLR1 and HINLR2) display and control the nesting level for each host interrupt. The nesting level controls which channel and lower priority channels are nested. There is one register per host interrupt.
3. Software manually performs the nesting of interrupts. When an interrupt is taken, the software will disable all the host interrupts, manually update the enables for any or all the system events, and then re-enables all the host interrupts. This now allows only the system events that are still enabled to trigger to the host. When the interrupt is completely serviced the software must reverse the changes to re-enable the nested out system events. This method requires the most software interaction but gives the most flexibility if simple channel based nesting mechanisms are not adequate.

## 4.4.2.3.6 Interrupt Status Clearing

After servicing the event (after execution of the ISR), event status is to be cleared. If a system event status is not cleared, then another host interrupt may not be triggered or another host interrupt may be triggered incorrectly. It is also essential to clear all system events before the PRU is halted as the PRU does not power down unless all the event status are cleared. For clearing the status of an event, whose event number is N, write a 1 to the Nth bit position in the system event status enabled/clear registers (SECR1-SECR2). System event N can also be cleared by writing the value N into the system event status indexed clear register (SICR).

## 4.4.2.4 Interrupt Disabling

At any time, if any event is not to be propagated to the host, then that event should be disabled. For disabling an event whose event number is N, write a 1 to the Nth bit in the system event enable clear registers (ECR1-ECR2). System event N can also be disabled by writing the value N in the system event enable indexed clear register (EICR).

## 4.4.2.5 INTC Basic Programming Model

Follow these steps to configure the interrupt controller.

1. Set polarity and type of system event through the System Event Polarity Registers (SIPR1 and SPIR2) and the System Event Type Registers (SITR1 and SITR2). Polarity of all system events is always high. Type of all system events is always pulse.
2. Map system event to INTC channel through Channel Map registers.
3. Map channel to host interrupt through Host Interrupt Map registers. Recommend channel 'x' be mapped to host interrupt 'x'.
4. Clear system event by writing 1s to SECR registers.
5. Enable host interrupt by writing index value to HIER register.
6. Enable interrupt nesting if desired.
7. Globally enable all interrupts through GER register.

<!-- image -->