<!-- image -->

www.ti.com

## 9.2.3 EDMA Event Multiplexing

The device has more DMA events than can be accommodated by the TPCC's maximum number of events, which is 64. To overcome the device has one crossbar at the top level. This module will multiplex the extra events with all of the direct mapped events. Mux control registers are defined in the Control Module to select the event to be routed to the TPCC. Direct mapped event is the default (mux selection set to '0').

<!-- image -->

For every EDMA event there is a cross bar implemented in the design as shown in the figure.The direct mapped event/interrupt will be always connected to Mux input[0], The additional events will be connected to Mux input[1], Mux input[2].etc as defined in EDMA event table. The Mux selection value is programmed into the corresponding TPCC\_EVT\_MUX\_n register. The EVT\_MUX value can take a value from 1 to 32. Other values are reserved. By default the MUX\_selection value is written to 0, which means the direct mapped event is connected to the Event output.

When the additional event is selected through the Cross bar programming the direct mapped event cannot be used.

For example, when TINT0 (Timer Interrupt 0) event, which is not directly mapped to the DMA event source needs to be connected to EDMA channel no 24 (which is directly mapped to SDTXEVT0 event). The user has to program the EVT\_MUX\_24 field in TPCC\_EVT\_MUX\_24\_27 register to 22 (value corresponding to TINT0 interrupt in crossbar mapping). When this is set, TINT0 interrupt event will trigger the channel 24.

Please note that once this is set. The SDTXEVT0 can no longer be handled by EDMA. The user has to allocate the correct DMA event number for crossbar mapped events so that there is no compromise on the channel allocation for the used event numbers.

## 9.2.4 Device Control and Status

## 9.2.4.1 Control and Boot Status

The device configuration is set during power on or hardware reset (PORz sequence) by the configuration input pins (SYSBOOT[15:0]).The CONTROL\_STATUS register reflects the system boot and the device type configuration values as sampled when the power-on reset (PORz) signal is asserted. The Configuration input pins are sampled continuously during the PORz active period and the final sampled value prior to the last rising edge is latched in the register. The CONTROL\_STATUS register gives the status of the device boot process.

## 9.2.4.2 Interprocessor Communication

The control module has the IPC\_MSG\_REG (7:0) registers which is for sharing messages between Cortex M3 and the Cortex A8 MPU. The M3 TX end of event (M3\_TXEV\_EOI) register provides the mechanism to clear/enable the TX Event from Cortex M3 to Cortex A8 MPU Subsystem. See the M3\_TXEV\_EOI register description for further detail.

See Section 8.1.4.6, Functional Sequencing for Power Management with Cortex M3 , for specific information on how the IPC\_MSG\_REG registers are used to communicate with the Cortex-M3 firmware.

## 9.2.4.3 Initiator Priority Control

The control module provides the registers to control the bus interconnect priority and the EMIF priority.

## 9.2.4.3.1 Initiator Priority Control for Interconnect

The INIT\_PRIORITY\_n register controls the infrastructure priority at the bus interconnects. This can be used for dynamic priority escalation. There are bit fields that control the interconnect priority for each bus initiator. By default all the initiators are given equal priority and the allocation is done on a round robin basis.

The priority can take a value from 0 to 3. The following table gives the valid set of priority values.

Table 9-4. Interconnect Priority Values

|   Interconnect Priority Value | Remarks         |
|-------------------------------|-----------------|
|                            00 | Low priority    |
|                            01 | Medium priority |
|                            10 | Reserved        |
|                            11 | High priority   |

## 9.2.4.3.2 Initiator Priority at EMIF

The MREQPRIO register provides an interface to change the access priorities for the various masters accessing the EMIF(DDR). Software can make use of this register to set the requestor priorities for required EMIF arbitration. The EMIF priority can take a value from 000b to 111b where 000b will be the highest priority and 111b will be lowest priority.

## 9.2.4.4 Peripheral Control and Status

## 9.2.4.4.1 USB Control and Status

The USB\_CTRLn and USB\_STSn registers reflect the Control and Status of the USB instances. The USB IO lines can be used as UART TX and RX lines the USB Control register bit field GPIOMODE has settings that configures the USB lines as GPIO lines. The other USB PHY control settings for controlling the OTG settings and PHY are part of the USB\_CTRLn register.

The USB\_STSn register gives the status of the USB PHY module. See the USB\_STSn register description for further details.

See Section 16.1.4, USB GPIO Details , for more information.

## 9.2.4.4.2 USB Charger Detect

Each USB PHY contains circuitry which can automatically detect the presence of a charger attached to the USB port. The charger detection circuitry is compliant to the Battery Charging Specification Revision 1.1 from the USB Implementers Forum, which can be found at www.usb.org. See this document for more details on USB charger implementation.

<!-- image -->

<!-- image -->

www.ti.com

## 9.2.4.4.2.1 Features

The charger detection circuitry of each PHY has the following features:

- Contains a state machine which can automatically detect the presence of a Charging Downstream Port or a Dedicated Charging Port (see the Battery Charging Specification for the definition of these terms)
- Outputs a charger enable signal (3.3 V level active high CMOS driver) when a charger is present.
- Allows you to enable/disable the circuitry to save power
- The detection circuitry requires only a 3.3-V supply to be present to operate.
- The charger detection also has a manual mode which allows the user to implement the battery charging specification in software.

## 9.2.4.4.2.2 Operation

The control module gives the following interface to control the automatic charger detection circuitry:

- USB\_CTRLx.CDET\_EXTCTL: Turns the automatic detection on/off. Keep this bit 0 to keep the automatic detection on. Changing this to 1 enables the manual mode.
- USB\_CTRLx.CHGDET\_RSTRT: Restarts the charger detection state machine. To initiate the charger detection, change this bit from 1 to 0. If this bit is 1, the charger enable output (CE) is disabled.
- USB\_CTRLx.CHGDET\_DIS: Enables/disables the charger detection circuitry. Keep this bit 0 to keep this charger detection enabled. Setting this bit to 1 will power down the charger detection circuitry.
- USB\_CTRLx.CM\_PWRDN: Powers up/down the PHY which contains the charger detection circuitry. Clear this bit to 0 to enable power to the PHY.

To start the charger detection during normal operation, ensure that the PHY and charger are enabled and the automatic detection is turned on. Then, initiate a charger detection cycle by transitioning CHGDET\_RSTRT from 1 to 0. If a Charging Downstream Port or a Dedicated Charging Port is detected, the charger enable signal (USBx\_CE) will be driven high and remain high until the charger is disabled by either CHGDET\_DIS = 1 or CHGDET\_RSTRT=1. If the port remains unconnected after intiating the charger detect cycle, it will continue the detection until a charger is detected or an error condition occurs. Note that USBx\_CE is not an open drain output.

To disable the charger after successful detection, you must disable the charger detect circuitry with CHGDET\_DIS or CHGDET\_RSTRT, even if the charger is physically disconnected.

Figure 9-1. USB Charger Detection

<!-- image -->

<!-- image -->

Charger detection can be automatically started with no power to the rest of AM335x. If VDDA3P3V\_USBx is present, via an LDO powered by VBUS connected to a host, the charger detection state machine will automatically start and perform detection. If a charger is detected, USBx\_CE will be driven high, otherwise it will be driven low.

The charger detection circuitry performs the following steps of the Battery Charging specification v1.1:

1. VBUS Detect
2. Data Contact Detect
3. Primary Detection

Secondary Detection (to distinguish between a Charging Downstream Port and a Dedicated Charging Port) is a newly added feature of the v1.2 spec and is not implemented in the charger detection state machine.

NOTE:

The USBx\_CE output will only operate when the corresponding USBx\_ID pin is grounded (indicating USB host mode). The USBx\_CE output does not operate in peripheral mode (when USBx\_ID is floating).

## 9.2.4.4.3 Ethernet MII Mode Selection

The control module provides a mechanism to select the Mode of operation of Ethernet MII interface. The GMII\_SEL register has register bit fields to select the MII/RMII/RGMII modes, clock sources, and delay mode.

## 9.2.4.4.4 Ethernet Module Reset Isolation Control

This feature allows the device to undergo a warm reset without disrupting the switch or traffic being routed through the switch during the reset condition. The CPSW Reset Isolation register (RESET\_ISO) has an ISO\_CONTROL field which controls the reset isolation feature.

If the reset isolation is enabled, any warm reset source will be blocked to the EMAC switch. If the EMAC reset isolation is NOT active (default state), then the warm reset sources are allowed to propagate as normal including to the EMAC Switch module (both reset inputs to the IP). All cold or POR resets will always propagate to the EMAC switch module as normal.

When RESET\_ISO is enabled, the following registers will not be disturbed by a warm reset:

- GMII\_SEL
- CONF\_GPMC\_A[11:0]
- CONF\_GPMC\_WAIT0
- CONF\_GPMC\_WPN
- CONF\_GPMC\_BEN1
- CONF\_MII1\_COL
- CONF\_MII1\_CRS
- CONF\_MII1\_RX\_ER
- CONF\_MII1\_TX\_EN
- CONF\_MII1\_RX\_DV
- CONF\_MII1\_TXD[3:0]
- CONF\_MII1\_TX\_CLK
- CONF\_MII1\_RX\_CLK
- CONF\_MII1\_RXD[3:0]
- CONF\_RMII1\_REF\_CLK
- CONF\_MDIO
- CONF\_MDC

<!-- image -->

www.ti.com

## 9.2.4.4.5 Timer/eCAP Event Capture Control

The Timer 5, 6, 7 events and the eCAP0, 1, 2 events can be selected using the TIMER\_EVT\_CAPTURE and ECAP\_EVT\_CAPTURE registers. The following table lists the available sources for those events.

Table 9-5. Available Sources for Timer[5-7] and eCAP[0-2] Events

| Event No.   | Source module                               | Interrupt Name/Pin   |
|-------------|---------------------------------------------|----------------------|
|             | For Timer 5 MUX input from IO signal TIMER5 | TIMER5 IO pin        |
|             | For Timer 6 MUX input from IO signal TIMER6 | TIMER6 IO pin        |
| 0           | For Timer 7 MUX input from IO signal TIMER7 | TIMER7 IO pin        |
|             | For eCAP 0 MUX input from IO signal eCAP0   | eCAP0 IO pin         |
|             | For eCAP 1 MUX input from IO signal eCAP1   | eCAP1 IO pin         |
|             | For eCAP 2 MUX input from IO signal eCAP2   | eCAP2 IO pin         |
| 1           | UART0                                       | UART0INT             |
| 2           | UART1                                       | UART1INT             |
| 3           | UART2                                       | UART2INT             |
| 4           | UART3                                       | UART3INT             |
| 5           | UART4                                       | UART4INT             |
| 6           | UART5                                       | UART5INT             |
| 7           | 3PGSW                                       | 3PGSWRXTHR0          |
| 8           | 3PGSW                                       | 3PGSWRXINT0          |
| 9           | 3PGSW                                       | 3PGSWTXINT0          |
| 10          | 3PGSW                                       | 3PGSWMISC0           |
| 11          | McASP0                                      | MCATXINT0            |
| 12          | McASP0                                      | MCARXINT0            |
| 13          | McASP1                                      | MCATXINT1            |
| 14          | McASP1                                      | MCARXINT1            |
| 15          | Reserved                                    | Reserved             |
| 16          | Reserved                                    | Reserved             |
| 17          | GPIO 0                                      | GPIOINT0A            |
| 18          | GPIO 0                                      | GPIOINT0B            |
| 19          | GPIO 1                                      | GPIOINT1A            |
| 20          | GPIO 1                                      | GPIOINT1B            |
| 21          | GPIO 2                                      | GPIOINT2A            |
| 22          | GPIO 2                                      | GPIOINT2B            |
| 23          | GPIO 3                                      | GPIOINT3A            |
| 24          | GPIO 3                                      | GPIOINT3B            |
| 25          | DCAN0                                       | DCAN0_INT0           |
| 26          | DCAN0                                       | DCAN0_INT1           |
| 27          | DCAN0                                       | DCAN0_PARITY         |
| 28          | DCAN1                                       | DCAN1_INT0           |
| 29          | DCAN1                                       | DCAN1_INT1           |
| 30          | DCAN1                                       | DCAN1_PARITY         |

## 9.2.4.4.6 ADC Capture Control

The following chip level events can be connected through the software-controlled multiplexer to the TSC\_ADC module.

1. PRU-ICSS Host Event 0
2. Timer 4 Event
3. Timer 5 Event
4. Timer 6 Event
5. Timer 7 Event

This pin is the external hardware trigger to start the ADC channel conversion. The ADC\_EVT\_CAPT register needs to programmed to select the proper source for this conversion.

Table 9-6 contains the value to be programmed in the selection mux.

<!-- image -->

Table 9-6. Selection Mux Values

| ADC_EVENT_SEL Value   | ADC External event selected   |
|-----------------------|-------------------------------|
| 000                   | PRU-ICSS Host Event 0         |
| 001                   | Timer 4 Event                 |
| 010                   | Timer 5 Event                 |
| 011                   | Timer 6 Event                 |
| 100                   | Timer 7 Event                 |
| 101-111               | Reserved                      |

## 9.2.4.4.7 SRAM LDO Control

The device incorporates two instances of the SRAM LDO (VSLDO) module. One of these LDOs powers the ARM internal SRAM and the other powers the OCMC SRAMs. In the SMA2 register, the VSLDO\_CORE\_AUTO\_RAMP\_EN bit, when set, allows the VSLDO, which powers the OCMC SRAMs, to be put into retention during deepsleep and enable lower power consumption. Since the VSLDO is shared between WKUP M3 memories and CORE memories, the VSLDO has to be brought out of retention on any wakeup event. This bit allows this functionality and should be set to allow proper sleep/wakeup operation during Standby and DeepSleep modes. Similar functionality is not necessary for the LDO powering the ARM internal SRAM. It can be put in retention mode using PRM\_LDO\_SRAM\_MPU\_CTRL.

<!-- image -->