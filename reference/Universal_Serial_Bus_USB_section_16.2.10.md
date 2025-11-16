<!-- image -->

www.ti.com

## 16.2.10 USB 2.0 Test Modes

The USB2.0 controller supports the four USB 2.0 test modes (Test\_SE0\_NAK, Test\_J, Test\_K, and Test\_Packet) defined for high-speed functions. It also supports an additional 'FIFO access' test mode that can be used to test the operation of the CPU interface, the DMA controller and the RAM block.

The test modes are entered by writing to the TESTMODE register. A test mode is usually requested by the host sending a SET\_FEATURE request to Endpoint 0. When the software receives the request, it should wait until the Endpoint 0 transfer has completed (when it receives the Endpoint 0 interrupt indicating the status phase has completed) then write to the TESTMODE register.

Note: These test modes have no purpose in normal operation.

## 16.2.10.1 TEST\_SE0\_NAK

To enter the Test\_SE0\_NAK test mode, the software should set the TEST\_SE0\_NAK bit in the TESTMODE register to 1. The USB controller will then go into a mode in which it responds to any valid IN token with a NAK.

## 16.2.10.2 TEST\_J

To enter the Test\_J test mode, the software should set the TEST\_J bit in the TESTMODE register to 1. The USB controller will then go into a mode in which it transmits a continuous J on the bus.

## 16.2.10.3 TEST\_K

To enter the Test\_K test mode, the software should set the TEST\_K bit in the TESTMODE register to 1. The USB controller will then go into a mode in which it transmits a continuous K on the bus.

## 16.2.10.4 TEST\_PACKET

To execute the Test\_Packet, the software should:

1. Start a session (if the core is being used in Host mode.
2. Write the standard test packet (shown below) to the Endpoint 0 FIFO.
3. Write 8h to the TESTMODE register (TEST\_PACKET = 1) to enter Test\_Packet test mode.
4. Set the TxPktRdy bit in the HOST/PERI\_CSR0 register (bit 1).

The 53 byte test packet to load is as follows (all bytes in hex). The test packet only has to be loaded once; the USB controller will keep re-sending the test packet without any further intervention from the software.

Table 16-28 displays the 53 Bytes test packet content.

Table 16-28. 53 Bytes Test Packet Content

| 0   | 0   | 0   | 0   | 0   | 0   | 0   | 0   |
|-----|-----|-----|-----|-----|-----|-----|-----|
| 0   | AA  | AA  | AA  | AA  | AA  | AA  | AA  |
| AA  | EE  | EE  | EE  | EE  | EE  | EE  | EE  |
| EE  | FE  | FF  | FF  | FF  | FF  | FF  | FF  |
| FF  | FF  | FF  | FF  | FF  | 7F  | BF  | DF  |
| EF  | F7  | FB  | FD  | FC  | 7E  | BF  | DF  |
| EF  | F7  | FB  | FD  | 7E  |     |     |     |

This data sequence is defined in Universal Serial Bus Specification Revision 2.0, Section 7.1.20. The USB controller will add the DATAA0 PID to the head of the data sequence and the CRC to the end.

Universal Serial Bus (USB)

## 16.2.10.5 FIFO\_ACCESS

The FIFO Access test mode allows you to test the operation of CPU Interface, the DMA controller (if configured), and the RAM block by loading a packet of up to 64 bytes into the Endpoint 0 FIFO and then reading it back out again. Endpoint 0 is used because it is a bidirectional endpoint that uses the same area of RAM for its Tx and Rx FIFOs.

NOTE: The core does not need to be connected to the USB bus to run this test. If it is connected, then no session should be in progress when the test is run.

The test procedure is as follows:

1. Load a packet of up to 64 bytes into the Endpoint 0 Tx FIFO.
2. Set HOST/PERI\_CSR0[TXPKTRDY].
3. Write 40h to the TESTMODE register (FIFO\_ACCESS = 1).
4. Unload the packet from the Endpoint Rx FIFO, again.
5. Set HOST/PERI\_CSR0[SERVICEDRXPKTRDY].

Writing 40h to the TESTMODE register causes the following sequence of events:

The Endpoint 0 CPU pointer (that records the number of bytes to be transmitted) is copied to the Endpoint 0 USB pointer (that records the number of bytes received).

1. The Endpoint 0 CPU pointer is reset.
2. HOST/PERI\_CSR0[TXPKTRDY] is cleared.
3. HOST/PERI\_CSR0[RXPKTRDY] is set.
4. An Endpoint 0 interrupt is generated (if enabled).

The effect of these steps is to make the Endpoint 0 controller act as if the packet loaded into the Tx FIFO has flushed and the same packet received over the USB. The data that was loaded in the Tx FIFO can now be read out of the Rx FIFO.

## 16.2.10.6 FORCE\_HOST

The Force Host test mode enables you to instruct the core to operate in Host mode, regardless of whether it is actually connected to any peripheral; that is, the state of the CID input and the LINESTATE and HOSTDISCON signals are ignored. (While in this mode, the state of the HOSTDISCON signal can be read from the BDEVICE bit in the device control register (DEVCTL)) .

This mode, which is selected by writing 80h to the TESTMODE register (FORCE\_HOST = 1), allows implementation of the USB Test\_Force\_Enable (USB 2.0 Specification Section 7.1.20). It can also be used for debugging PHY problems in hardware.

While the FORCE\_HOST bit remains set, the core enters the Host mode when the SESSION bit in DEVCTL is set to 1 and remains in the Host mode until the SESSION bit is cleared to 0 even if a connected device is disconnected during the session. The operating speed while in this mode is determined by the FORCE\_HS and FORCE\_FS bits in the TESTMODE register.

## 16.2.10.7 USB Behavior During Emulation

To configure the USB subsystem to stop during emulation suspend events (for example, debugger breakpoints), set up the USB Subsystem and the Debug Subsystem:

1. Set SYSCONFIG.FREEEMU=0. This will allow the Suspend\_Control signal from the Debug Subsystem (Chapter 27) to stop and start the USBSS. Note that if FREEEMU=1, the Suspend\_Control signal is ignored and the USBSS is free running regardless of any debug suspend event. This FREEEMU bit gives local control from a module perspective to gate the suspend signal coming from the Debug Subsystem.
2. Set the appropriate xxx\_Suspend\_Control register = 0x9, as described in Section 27.1.1.1, Debug Suspend Support for Peripherals . Choose the register appropriate to the peripheral you want to suspend during a suspend event.

<!-- image -->