<!-- image -->

## www.ti.com

2. Write to the GO, WRITE, REGADR, PHYADR, and DATA bits in MDIOUSERACCESS n corresponding to the PHY and PHY register you want to write.
3. The write operation to the PHY is scheduled and completed by the MDIO module. Completion of the write operation can be determined by polling the GO bit in MDIOUSERACCESS n for a 0.
4. Completion of the operation sets the corresponding USERINTRAW bit (0 or 1) in the MDIO user command complete interrupt register (MDIOUSERINTRAW) corresponding to USERACCESS n used. If interrupts have been enabled on this bit using the MDIO user command complete interrupt mask set register (MDIOUSERINTMASKSET), then the bit is also set in the MDIO user command complete interrupt register (MDIOUSERINTMASKED) and an interrupt is triggered on the CPU.

## 14.4.5 Reading Data from a PHY Register

The MDIO module includes a user access register (MDIOUSERACCESS n ) to directly access a specified PHY device. To read a PHY register, perform the following:

1. Ensure the GO bit in the MDIO user access register (MDIOUSERACCESS n ) is cleared.
2. Write to the GO, REGADR, and PHYADR bits in MDIOUSERACCESS n corresponding to the PHY and PHY register you want to read.
3. The read data value is available in the DATA bits in MDIOUSERACCESS n after the module completes the read operation on the serial bus. Completion of the read operation can be determined by polling the GO and ACK bits in MDIOUSERACCESS n . After the GO bit has cleared, the ACK bit is set on a successful read.
4. Completion of the operation sets the corresponding USERINTRAW bit (0 or 1) in the MDIO user command complete interrupt register (MDIOUSERINTRAW) corresponding to USERACCESS n used. If interrupts have been enabled on this bit using the MDIO user command complete interrupt mask set register (MDIOUSERINTMASKSET), then the bit is also set in the MDIO user command complete interrupt register (MDIOUSERINTMASKED) and an interrupt is triggered on the CPU.

## 14.4.6 Initialization and Configuration of CPSW

To configure the 3PSW Ethernet Subsystem for operation the host must perform the following:

- Select the Interface (GMII/RGMII/MII) Mode in the Control Module.
- Configure pads (PIN muxing) as per the Interface Selected using the appropriate pin muxing conf\_xxx registers in the Control Module.
- Enable the 3PSW Ethernet Subsystem Clocks. See Section 14.2.2 and Section 8.1 to enable the appropriate clocks.
- Configure the PRCM registers CM\_PER\_CPSW\_CLKSTCTRL and CM\_PER\_CPGMAC0\_CLKCTRL to enable power and clocks to the 3PSW Ethernet Subsystem. See Section 8.1 for register details.
- Apply soft reset to 3PSW Subsytem, CPSW\_3G, CPGMAC\_SL1/2, and CPDMA (see the soft reset registers in the following sections).
- Initialize the HDPs (Header Description Pointer) and CPs (Completion Pointer) to NULL
- Configure the Interrupts (see Chapter 6).
- Configure the CPSW\_3G Control register.
- Configure the Statistics Port Enable register
- Configure the ALE. (See Section 14.3.2.7.)
- Configure the MDIO.
- Configure the CPDMA receive DMA controller.
- Configure the CPDMA transmit DMA controller.
- Configure the CPPI Tx and Rx Descriptors.
- Configure CPGMAC\_SL1 and CPGMAC\_SL2 as per the desired mode of operations.
- Start up RX and TX DMA (write to HDP of Rx and Tx).
- Wait for the completion of the transfer (HDP cleared to zero).