<!-- image -->

www.ti.com

## 15.1.2 Integration

The Pulse Width Modulation Subsystem (PWMSS) includes a single instance of the Enhanced High Resolution Pulse Width Modulator (eHRPWM), Enhanced Capture (eCAP), and Enhanced Quadrature Encoded Pulse (eQEP) modules. This device includes three instantiations of the PWMSS.

Figure 15-1. PWMSS Integration

<!-- image -->

## 15.1.2.1 PWMSS Synchronization Detail

The PWM (eHRPWM) and capture (eCAP) components of the PWMSS provide synchronization signals to allow them to be synchronized to other modules or events. On this device, these signals are connected in a daisy-chain fashion as shown in Figure 15-2.

The eCAP capture events may be selected from among 31 different pins or internal interrupt signals. The event is selected using the corresponding ECAPx\_EVTCAPT field of the ECAP\_EVT\_CAP register in the Control Module.

## Figure 15-2. PWMSS Synchronization

<!-- image -->

## 15.1.2.2 PWMSS Connectivity Attributes

The general connectivity attributes for the PWMSS module are shown in Table 15-2.

Table 15-2. PWMSS Connectivity Attributes

| Attributes          | Type                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|---------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Clock Domain        | PD_PER_L4LS_GCLK                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| Reset Signals       | PER_DOM_RST_N                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| Idle/Wakeup Signals | Smart Idle                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| Interrupt Requests  | 2 ePWM interrupts per instance epwm_intr_intr - Event interrupt, ePWMxINT for ARM subsystem, epwm_intr_intr_pend for PRU-ICSS epwm_tz_intr - Tripzone interrupt, ePWMx_TZINT for ARM subsystem, pwm_trip_zone for PRU-ICSS (only 1 for all 3 instances) 1 eCAP interrupt per instance ecap_intr - Capture/PWM event interrupt, eCAPxINT for ARM subsystem, ecap_intr_intr_pend for PRU-ICSS 1 eQEP Interrupt per instance eqep_intr_intr - Event interrupt, eQEPxINT for ARM subsystem, eqep_intr_intr_pend for PRU-ICSS (only for eQEP0) |

<!-- image -->