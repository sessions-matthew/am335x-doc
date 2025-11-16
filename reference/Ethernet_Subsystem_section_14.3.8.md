## 14.3.7.3 Interrupt Handling

When an event is push onto the Event FIFO, an interrupt can be generated to indicate to software that a time sync event occurred. The following steps should be taken to process time sync events using interrupts:

- Enable the TS\_PEND interrupt by setting the TS\_PEND\_EN bit of the CPTS\_INT\_ENABLE register.
- Upon interrupt, read the CPTS\_EVENT\_LOW and CPTS\_EVENT\_HIGH register values.
- Set the EVENT\_POP field (bit zero) of the CPTS\_EVENT\_POP register to pop the previously read value off of the event FIFO.
- Process the interrupt as required by the application software

Software has the option of processing more than a single event from the event FIFO in the interrupt service routine in the following way:

1. Enable the TS\_PEND interrupt by setting the TS\_PEND\_EN bit of the CPTS\_INT\_ENABLE register.
2. Upon interrupt enter the CPTS service routine.
3. Read the CPTS\_EVENT\_LOW and CPTS\_EVENT\_HIGH register values.
4. Set the EVENT\_POP bit of the CPTS\_EVENT\_POP register to pop the previously read value off of the event FIFO.
5. Wait for an amount of time greater than eight CPTS\_RFT\_CLK periods
6. Read the ts\_pend\_raw bit in the CPTS\_INTSTAT\_RAW register to determine if another valid event is in the event FIFO. If it is asserted then goto step 3. Otherwise goto step 7.
7. Process the interrupt(s) as required by the application software

Software also has the option of disabling the interrupt and polling the ts\_pend\_raw bit of the CPTS\_INTSTAT\_RAW register to determine if a valid event is on the event FIFO.

## 14.3.8 MDIO

The MII Management I/F module implements the 802.3 serial management interface to interrogate and control two Ethernet PHYs simultaneously using a shared two-wire bus. Two user access registers to control and monitor up to two PHYs simultaneously.

## 14.3.8.1 MII Management Interface Frame Formats

The following tables show the read and write format of the 32-bit MII Management interface frames, respectively.

Table 14-21. MDIO Read Frame Format

| Preamble    |   Start Delimiter |   Operation Code | PHY Address   | Register Address   | Turnaround   | Data                 |
|-------------|-------------------|------------------|---------------|--------------------|--------------|----------------------|
| 0xFFFF FFFF |                01 |               10 | AAAAA         | RRRRR              | Z0           | DDDD.DDDD. DDDD.DDDD |

## Table 14-22. MDIO Write Frame Format

| Preamble    |   Start Delimiter |   Operation Code | PHY Address   | Register Address   |   Turnaround | Data                 |
|-------------|-------------------|------------------|---------------|--------------------|--------------|----------------------|
| 0xFFFF FFFF |                01 |               01 | AAAAA         | RRRRR              |           10 | DDDD.DDDD. DDDD.DDDD |

The default or idle state of the two wire serial interface is a logic one. All tri-state drivers should be disabled and the PHY's pull-up resistor will pull the MDIO\_DATA line to a logic one. Prior to initiating any other transaction, the station management entity shall send a preamble sequence of 32 contiguous logic one bits on the MDIO\_DATA line with 32 corresponding cycles on MDIO\_CLK to provide the PHY with a pattern that it can use to establish synchronization. A PHY shall observe a sequence of 32 contiguous logic one bits on MDIO\_DATA with 32 corresponding MDIO\_CLK cycles before it responds to any other transaction.

<!-- image -->

<!-- image -->

www.ti.com

## Preamble

The start of a frame is indicated by a preamble, which consists of a sequence of 32 contiguous bits all of which are a '1'. This sequence provides the PHY a pattern to use to establish synchronization.

## Start Delimiter

The preamble is followed by the start delimiter which is indicated by a '01' pattern. The pattern assures transitions from the default logic one state to zero and back to one.

## Operation Code

The operation code for a read is '10', while the operation code for a write is a '01'.

## PHY Address

The PHY address is 5 bits allowing 32 unique values. The first bit transmitted is the MSB of the PHY address.

## Register Address

The Register address is 5 bits allowing 32 registers to be addressed within each PHY. Refer to the 10/100 PHY address map for addresses of individual registers.

## Turnaround

An idle bit time during which no device actively drives the MDIO\_DATA signal shall be inserted between the register address field and the data field of a read frame in order to avoid contention. During a read frame, the PHY shall drive a zero bit onto MDIO\_DATA for the first bit time following the idle bit and preceding the Data field. During a write frame, this field shall consist of a one bit followed by a zero bit.

## Data

The Data field is 16 bits. The first bit transmitted and received is the MSB of the data word.

## 14.3.8.2 Functional Description

The MII Management I/F will remain idle until enabled by setting the enable bit in the MDIOControl register. The MII Management I/F will then continuously poll the link status from within the Generic Status Register of all possible 32 PHY addresses in turn recording the results in the MDIO link register.

The linksel bit in the MDIOUserPhySel register determines the status input that is used. A change in the link status of the two PHYs being monitored will set the appropriate bit in the MDIOLinkIntRaw register and the MDIOLinkIntMasked register, if enabled by the linkint\_enable bit in the MDIOUserPhySel register.

The MDIO Alive register is updated by the MII Management I/F module if the PHY acknowledged the read of the generic status register. In addition, any PHY register read transactions initiated by the host also cause the MDIOAlive register to be updated.

At any time, the host can define a transaction for the MII Management interface module to undertake using the data, phyadr, regadr, and write fields in a MDIOUserAccess register. When the host sets the go bit in this register, the MII Management interface module will begin the transaction without any further intervention from the host. Upon completion, the MII Management interface will clear the go bit and set the userintraw bit in the MDIOUserIntRaw register corresponding to the MDIOUserAccess register being used.

The corresponding bit in the MDIOUserIntMasked register may also be set depending on the mask setting in the MDIOUserIntMaskSet and MDIOUserIntMaskClr registers. A round-robin arbitration scheme is used to schedule transactions which may queued by the host in different MDIOUserAccess registers. The host should check the status of the go bit in the MDIOUserAccess register before initiating a new transaction to ensure that the previous transaction has completed. The host can use the ack bit in the MDIOUserAccess register to determine the status of a read transaction.

It is necessary for software to use the MII Management interface module to setup the auto-negotiation parameters of each PHY attached to a MAC port, retrieve the negotiation results, and setup the MACControl register in the corresponding MAC.

<!-- image -->