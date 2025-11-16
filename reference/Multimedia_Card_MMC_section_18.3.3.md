- SD\_SYSCTL[25] SRC bit

These two reset bits are useful to reinitialize data or command processes respectively in case of line conflict. When set to 1, a reset process is automatically released when the reset completes:

- The SD\_SYSCTL[26] SRD bit resets all finite state-machines and status management that handle data transfers on both the interface and functional side.
- The SD\_SYSCTL[25] SRC bit resets all finite state-machines and status management that handle command transfers on both the interface and functional side.

NOTE:

If any of the clock inputs are not present for the MMC/SD/SDIO peripheral, the software reset will not complete.

## 18.3.3 Power Management

The MMC/SD/SDIO host controller can enter into different modes and save power:

- Normal mode
- Idle mode

The two modes are mutually exclusive (the module can be in normal mode or in idle mode). The MMC/SD/SDIO host controller is compliant with the PRCM module handshake protocol. When the MMC/SD/SDIO power domain is off, the only way to wake up the power domain and different

MMC/SD/SDIO clocks is to monitor the mmc\_dat1 input pin state via a different GPIO line for each MMC/SD/SDIO interface.

## 18.3.3.1 Normal Mode

The autogating of interface and functional clocks occurs when the following conditions are met:

- The SD\_SYSCONFIG[0] AUTOIDLE bit is set to 1.
- There is no transaction on the MMC interface.

The autogating of interface and functional clocks stops when the following conditions are met:

- A register access occurs through the L3 (or L4) interconnect.
- A wake-up event occurs (an interrupt from a SDIO card).
- A transaction on the MMC/SD/SDIO interface starts.

Then the MMC/SD/SDIO host controller enters in low-power state even if SD\_SYSCONFIG[0] AUTOIDLE is cleared to 0. The functional clock is internally switched off and only interconnect read and write accesses are allowed.

## 18.3.3.2 Idle Mode

The clocks provided to MMC/SD/SDIO are switched off upon a PRCM module request. They are switched back upon module request. The MMC/SD/SDIO host controller complies with the PRCM module handshaking protocol:

- Idle request from the system power manager
- Idle acknowledgment from the MMC/SD/SDIO host controller

The idle acknowledgment varies according to the SD\_SYSCONFIG[4:3] SIDLEMODE bit field:

- 0: Force-idle mode. The MMC/SD/SDIO host controller acknowledges the system power manager request unconditionally.
- 1h: No-idle mode. The MMC/SD/SDIO host controller ignores the system power manager request and behaves normally as if the request was not asserted.
- 2h: Smart-idle mode. The MMC/SD/SDIO host controller acknowledges the system power manager request according to its internal state.
- 3h: Reserved.

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

During the smart-idle mode period, the MMC/SD/SDIO host controller acknowledges that the OCP and Functional clocks may be switched off whatever the value set in the SD\_SYSCONFIG[9:8] CLOCKACTIVITY field.

## 18.3.3.3 Transition from Normal Mode to Smart-Idle Mode

Smart-idle mode is enabled when the SD\_SYSCONFIG[4:3] SIDLEMODE bit field is set to 2h or 3h. The MMC/SD/SDIO host controller goes into idle mode when the PRCM issues an idle request, according to its internal activity. The MMC/SD/SDIO host controller acknowledges the idle request from the PRCM after ensuring the following:

- The current multi/single-block transfer is completed.
- Any interrupt or DMA request is asserted.
- There is no card interrupt on the SD\_dat1 signal.

As long as the MMC/SD/SDIO controller does not acknowledge the idle request, if an event occurs, the MMC/SD/SDIO host controller can still generate an interrupt or a DMA request. In this case, the module ignores the idle request from the PRCM.

As soon as the MMC/SD/SDIO controller acknowledges the idle request from the PRCM:

- If Smart-Idle mode the module does not assert any new interrupt or DMA request

## 18.3.3.4 Transition from Smart-Idle Mode to Normal Mode

The MMC/SD/SDIO host controller detects the end of the idle period when the PRCM deasserts the idle request. For the wake-up event, there is a corresponding interrupt status in the SD\_STAT register. The MMC/SD/SDIO host controller operates the conversion between wake-up and interrupt (or DMA request) upon exit from smart-idle mode if the associated enable bit is set in the SD\_ISE register.

Interrupts and wake-up events have independent enable/disable controls, accessible through the SD\_HCTL and SD\_ISE registers. The overall consistency must be ensured by software.

The interrupt status register SD\_STAT is updated with the event that caused the wake-up in the CIRQ bit when the SD\_IE[8] CIRQ\_ENABLE associated bit is enabled. Then, the wake-up event at the origin of the transition from smart-idle mode to normal mode is converted into its corresponding interrupt or DMA request. (The SD\_STAT register is updated and the status of the interrupt signal changes.)

When the idle request from the PRCM is deasserted, the module switches back to normal mode. The module is fully operational.

## 18.3.3.5 Force-Idle Mode

Force-idle mode is enabled when the SD\_SYSCONFIG[4:3] SIDLEMODE bit field is cleared to 0. Forceidle mode is an idle mode where the MMC/SD/SDIO host controller responds unconditionally to the idle request from the PRCM. Moreover, in this mode, the MMC/SD/SDIO host controller unconditionally deasserts interrupts and DMA request lines are asserted.

The transition from normal mode to force-idle mode does not affect the bits of the SD\_STAT register. In force-idle mode, the interrupt and DMA request lines are deasserted. Interface Clock (OCP) and functional clock (CLKADPI) can be switched off.

## CAUTION

In Force-idle mode, an idle request from the PRCM during a command or a data transfer can lead to an unexpected and unpredictable result. When the module is idle, any access to the module generates an error as long as the OCP clock is alive.

The module exits the force-idle mode when the PRCM deasserts the idle request. Then the module switches back to normal mode. The module is fully operational. Interrupt and DMA request lines are optionally asserted one clock cycle later.

## 18.3.3.6 Local Power Management

Table 18-9 describes power-management features available for the MMC/SD/SDIO modules.

Table 18-9. Local Power Management Features

| Feature                | Registers                      | Description                                                                                                                                                           |
|------------------------|--------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Clock Auto Gating      | SD_SYSCONFIG AUTOIDLE bit      | This bit allows a local power optimization inside module, by gating the OCP clock upon the interface activity or gating the CLKADPI clock upon the internal activity. |
| Slave Idle Modes       | SD_SYSCONFIG SIDLEMODE bit     | Force-idle, No-idle, and Smart-idle modes                                                                                                                             |
| Clock Activity         | SD_SYSCONFIG CLOCKACTIVITY bit | Please see Table 18-10 for configuration details.                                                                                                                     |
| Global Wake-Up Enable  | SD_SYSCONFIG ENAWAKEUP bit     | This bit enables the wake-up feature at module level.                                                                                                                 |
| Wake-Up Sources Enable | SD_HCTL register               | This register holds one active high enable bit per event source able to generate wake-up signal.                                                                      |

Table 18-10. Clock Activity Settings

|                      | Clock State When Module is in IDLE State   | Clock State When Module is in IDLE State   |                                                 |                |
|----------------------|--------------------------------------------|--------------------------------------------|-------------------------------------------------|----------------|
| CLOCKACTIVITY Values | OCP Clock                                  | CLKADPI                                    | Features Available when Module is in IDLE State | Wake-Up Events |
| 00                   | OFF                                        | OFF                                        | None                                            | Card Interrupt |
| 10                   | OFF                                        | ON                                         | None                                            |                |
| 01                   | ON                                         | OFF                                        | None                                            |                |
| 11                   | ON                                         | ON                                         | All                                             |                |

## CAUTION

The PRCM module has no hardware means of reading CLOCKACTIVITY settings. Thus, software must ensure consistent programming between the CLOCKACTIVITY and MMC clock PRCM control bits.

<!-- image -->