<!-- image -->

www.ti.com

## 23.3.11 Local Power-Down Mode

The DCAN supports a local power-down mode, which can be controlled within the CTL register.

## 23.3.11.1 Entering Local Power-Down Mode

The local power-down mode is requested by setting the PDR bit in the CTL register.

The DCAN then finishes all transmit requests of the message objects. When all requests are done, the DCAN module waits until a bus idle state is recognized. The module will automatically set the Init bit in the CTL register to prevent any further CAN transfers, and it will also set the PDA bit in the CAN error and status register (ES). With setting the PDA bits, the DCAN module indicates that the local power-down mode has been entered.

During local power-down mode, the internal clocks of the DCAN module are turned off, but there is wakeup logic (see Section 23.3.11.2) that can be active, if enabled. Also, the actual contents of the control registers can be read back.

NOTE:

In local low-power mode, the application should not clear the Init bit while PDR is set. If there are any messages in the message RAM which are configured as transmit messages and the application resets the init bit, these messages may get sent.

## 23.3.11.2 Wakeup From Local Power Down

There are two ways to wake up the DCAN from local power-down mode:

- The application could wake up the DCAN module manually by clearing the PDR bit and then clearing the Init bit in the CTL register.
- Alternatively, a CAN bus activity detection circuit can be activated by setting the wakeup on bus activity (WUBA) bit in the CTL register. If this circuit is active, on occurrence of a dominant CAN bus level, the DCAN will automatically start the wakeup sequence. It will clear the PDR bit in the CTL register and also clear the PDA bit in the error and status register. The WakeUpPnd bit in the ES register will be set. If status interrupts are enabled, also an interrupt will be generated. Finally the Init bit in the CTL register will be cleared.

After the Init bit has been cleared, the module waits until it detects 11 consecutive recessive bits on the CAN\_RX pin and then goes bus-active again.

NOTE:

The CAN transceiver circuit has to stay active in order to detect any CAN bus activity while the DCAN is in local power down mode. The first CAN message, which initiates the bus activity, cannot be received. This means that the first message received in power-down and automatic wake-up mode, is lost.

Figure 23-11 shows a flow diagram about entering and leaving local power-down mode.

<!-- image -->

Figure 23-11. Local Power-Down Mode Flow Diagram

<!-- image -->