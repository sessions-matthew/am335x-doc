<!-- image -->

www.ti.com

## 14.3 Functional Description

The 3 port switch (3PSW) Ethernet Subsystem peripheral are compliant to the IEEE Std 802.3 Specification. The 3PSW Ethernet Subsystem contains two RGMII/RMII interfaces, one CPPI 3.0 interface, Interrupt Controller, MDIO and CPSW\_3G which contains two GMII interfaces as shown in Figure 14-6.

The subsystem modules are discussed in detail in the following sections.

## 14.3.1 CPSW\_3G Subsystem

## 14.3.1.1 Interrupt Pacing

The receive and transmit pulse interrupts can be paced. The receive threshold and miscellaneous interrupts are not paced. The Interrupt pacing feature limits the number of interrupts that occur during a given period of time. For heavily loaded systems in which interrupts can occur at a very high rate (e.g. 148,800 packets per second for Ethernet), the performance benefit is significant due to minimizing the overhead associated with servicing each interrupt. Interrupt pacing increases the CPU cache hit ratio by minimizing the number of times that large interrupt service routines are moved to and from the CPU instruction cache.

Each CPU receive and transmit pulse interrupt contains an interrupt pacing sub-block (six total). Each sub-block is disabled by default allowing the selected interrupt inputs to pass through unaffected. The interrupt pacing module counts the number of interrupts that occur over a 1ms interval of time. At the end of each 1ms interval, the current number of interrupts is compared with a target number of interrupts (specified by the associated maximum number of interrupts register).

Based on the results of the comparison, the length of time during which interrupts are blocked is dynamically adjusted. The 1ms interval is derived from a 4us pulse that is created from a prescale counter whose value is set in the int\_prescale value in the Int\_Control register. The int\_prescale value should be written with the number of VBUSP\_CLK periods in 4us. The pacing timer determines the interval during which interrupts are blocked and decrements every 4us. It is reloaded each time a zero count is reached. The value loaded into the pacing timer is calculated by hardware every 1ms according to the following algorithm:

```
if (intr_count > 2*intr_max) pace_timer = 255; else if (intr_count > 1.5*intr_max) pace_timer = last_pace_timer*2 + 1; else if (intr_count > 1.0*intr_max) pace_timer = last_pace_timer + 1; else if (intr_count > 0.5*intr_max) pace_timer = last_pace_timer - 1; else if (intr_count != 0) pace_timer = last_pace_timer/2; else pace_timer = 0;
```

If the rate of interrupt inputs is much less than the target interrupt rate specified in the associated maximum interrupts register, then the interrupt is not blocked. If the interrupt rate is greater than the target rate, the interrupt will be 'paced' at the rate specified in the interrupt maximum register. The interrupt maximum register should be written with a value between 2 and 63 inclusive indicating the target number of interrupts per milli-second.

## 14.3.1.2 Reset Isolation

Reset isolation for the Ethernet switch on Device is that the switch function of the ethernet IP remains active even in case of all device resets except for POR pin reset and ICEPICK COLD reset. Packet traffic to/from the 3PSW host will be flushed/dropped, but the ethernet switch will remain operational for all traffic between external devices on the switch even though the device is under-going a device reset.Pin mux configuration for ethernet related IO and reference clocks needed by the Ethernet switch IP to be active is controlled by a protected control module bit. If reset isolation is enabled, then only a POR pin or ICEPICK COLD reset event should fully reset the Ethernet switch IP including the actual switch and also the reference clocks and pin mux control specifically associated with the Ethernet IP.

## 14.3.1.2.1 Modes of Operation

The device has two modes of operation concerning the reset of the 3PSW Ethernet switch.

The mode is controlled by the ISO\_CONTROL bit in RESET\_ISO register of the device control module .This bit should default to '0'. Writes to the ISO\_CONTROL bit must be supervisor mode writes.

## Mode 1: ISO\_CONTROL=0 (reset isolation disabled)

- This mode is selected when ISO\_CONTROL bit of control module is = 0. This should be the default state of the bit after control module reset.
- Upon any device level resets, the entire CPSW\_3GSS\_R IP, L3/L4, control module (including all pin mux control and the ISO\_CONTROL bit) is immediately reset.

## Mode 2: ISO\_CONTROL=1 (reset isolation enabled)

- This mode is selected when ISO\_CONTROL bit of control module is = 1.
- Upon any device reset source other than POR pin or ICEPICK cold (so this includes SW global cold, any watchdog reset, warm RESETn pin, ICEPICK warm, SW global warm), the following should be true:
- -The CPSW\_3GSS\_R is put into 'isolate' mode and non-switch related portions of the IP are reset.
- -The 50-MHz and 125-MHz reference clocks to the 3PSW Ethernet Subsystem remains active throughout the entire reset condition.
- -The control for pin multiplexing for all of the signals should maintain their current configuration throughout the entire reset condition.
- -The reset isolated logic inside 3PSW Ethernet Subsystem IP which maintains the switch functionality

-

- Upon any cold reset sources, the entire 3PSW Ethernet Subsystem, control module (including all pin mux control and the ISO\_CONTROL bit itself) is reset.

<!-- image -->

<!-- image -->

www.ti.com

## 14.3.1.3 Interrupts

The 3 Port Switch Ethernet Subsystem generates four interrupt events.

## 14.3.1.3.1 Receive Packet Completion Pulse Interrupt (RX\_PULSE)

The RX\_PULSE interrupt is a paced pulse interrupt selected from the 3PSW RX\_PEND [7:0] interrupts. The receive DMA controller has eight channels with each channel having a corresponding (RX\_PEND[7:0]).

The following steps will enable the receive packet completion interrupt.

- Enable the required channel interrupts of the DMA engine by setting 1 to the appropriate bit in the RX\_INTMASK\_SET register.
- The receive completion interrupt(s) to be routed to RX\_PULSE is selected by setting one or more bits in the receive interrupt enable register C n \_RX\_EN. The masked interrupt status can be read in the Receive Interrupt Masked Interrupt Status (Cn\_RX\_STAT) register.

When the 3PSW completes a packet reception, the subsystem issues an interrupt to the CPU by writing the packet's last buffer descriptor address to the appropriate channel queue's receive completion pointer located in the state RAM block. The interrupt is generated by the write when enabled by the interrupt mask, regardless of the value written.

Upon interrupt reception, the CPU processes one or more packets from the buffer chain and then acknowledges one or more interrupt(s) by writing the address of the last buffer descriptor processed to the queue's associated receive completion pointer (RX n \_CP) in the receive DMA state RAM.

Upon reception of an interrupt, software should perform the following:

- Read the RX\_STAT register to determine which channel(s) caused the interrupt.
- Process received packets for the interrupting channel(s).
- Write the 3PSW completion pointer(s) (RX n \_CP). The data written by the host (buffer descriptor address of the last processed buffer) is compared to the data in the register written by the subsystem (address of last buffer descriptor used by the subsystem). If the two values are not equal (which means that the 3PSW has received more packets than the CPU has processed), the receive packet completion interrupt signal remains asserted. If the two values are equal (which means that the host has processed all packets that the system has received), the pending interrupt is de-asserted. The value that the 3PSW is expecting is found by reading the receive channel n completion pointer register (RX n \_CP).
- Write the value 1h to the CPDMA\_EOI\_VECTOR register.

To disable the interrupt:

- The eight channel interrupts may be individually disabled by writing to 1 the appropriate bit in the RX\_INTMASK\_CLEAR
- The receive completion pulse interrupt could be disabled by clearing to 0 all the bits of the RX\_EN.

The software could still poll for the RX\_INTSTAT\_RAW and RX\_INTSTAT\_MASKED registers if the corresponding interrupts are enabled.

## 14.3.1.3.2 Transmit Packet Completion Pulse Interrupt (TX\_PULSE)

The TX\_PULSE interrupt is a paced pulse interrupt selected from the 3PSW TX\_PEND [7:0] interrupts. The transmit DMA controller has eight channels with each channel having a corresponding (TX\_PEND[7:0]).

To enable the transmit packet completion interrupt:

- Enable the required channel interrupts of the DMA engine by setting 1 to the appropriate bit in the TX\_INTMASK\_SET register.
- The transmit completion interrupt(s) to be routed to TX\_PULSE is selected by setting one or more bits in the transmit interrupt enable register C n \_TX\_EN .The masked interrupt status can be read in the Transmit Interrupt Masked Interrupt Status (C n \_TX\_STAT) register.

<!-- image -->

www.ti.com

When the 3PSW completes the transmission of a packet, the 3PSW subsystem issues an interrupt to the CPU by writing the packet's last buffer descriptor address to the appropriate channel queue's transmit completion pointer located in the state RAM block. The interrupt is generated by the write when enabled by the interrupt mask, regardless of the value written.

Upon receiving an interrupt, software should perform the following:

- Read the TX\_STAT register to determine which channel(s) caused the interrupt
- Process received packets for the interrupting channel(s).
- Write the 3PSW completion pointer(s) (TX n \_CP). The data written by the host (buffer descriptor address of the last processed buffer) is compared to the data in the register written by the 3PSW (address of last buffer descriptor used by the 3PSW). If the two values are not equal (which means that the 3PSW has transmitted more packets than the CPU has processed), the transmit packet completion interrupt signal remains asserted. If the two values are equal (which means that the host has processed all packets that the subsystem has transferred), the pending interrupt is cleared. The value that the 3PSW is expecting is found by reading the transmit channel n completion pointer register (TX n \_CP).
- Write the 2h to the CPDMA\_EOI\_VECTOR register.

## To disable the interrupt:

- The eight channel interrupts may be individually disabled by writing to 1 the appropriate bit in the TX\_INTMASK\_CLEAR.
- The receive completion pulse interrupt could be disabled by clearing to 0 all the bits of the TX\_EN. The software could still poll for the TX\_INTSTAT\_RAW and TX\_INTSTAT\_MASKED registers if the corresponding interrupts are enabled.

## 14.3.1.3.3 Receive Threshold Pulse Interrupt (RX\_THRESH\_PULSE)

The RX\_THRESH\_PULSE interrupt is an immediate (non-paced) pulse interrupt selected from the CPSW\_3G RX\_THRESH\_PEND[7:0] interrupts. The receive DMA controller has eight channels with each channel having a corresponding threshold pulse interrupt (RX\_THRESH\_PEND [7:0]).

To enable the receive threshold pulse Interrupt:

- Enable the required channel interrupts of the DMA engine by setting 1 to the appropriate bit in the RX\_INTMASK\_SET register.
- The receive threshold interrupt(s) to be routed to RX\_THRESH\_PULSE is selected by setting one or more bits in the receive threshold interrupt enable register RX\_THRESH\_EN. The masked interrupt status can be read in the Receive Threshold Masked Interrupt Status (C n \_RX\_THRESH\_STAT) register.

The RX\_THRESH\_PULSE is asserted when enabled when the channel's associated free buffer count RX n \_FREEBUFFER is less than or equal to the corresponding RX n \_PENDTHRESH register.

Upon receiving an interrupt, software should perform the following:

- Read the C n \_RX\_THRESH\_STAT bit address location to determine which channel(s) caused the interrupt.
- Process the received packets in order to add more buffers to any channel that is below the threshold value.
- Write the CPSW\_3G completion pointer(s).
- Write the value 0h to the CPDMA\_EOI\_VECTOR register.

The threshold pulse interrupt is an immediate interrupt intended to indicate that software should immediately process packets to preclude an overrun condition from occurring for the particular channels.

## To disable the interrupt:

- The eight channel receive threshold interrupts may be individually disabled by writing to 1 the appropriate bit in the RX\_INTMASK\_CLEAR register.
- The receive threshold pulse interrupt could be disabled by clearing to Zero the corresponding bits of the RX\_THRESH\_EN. The software could still poll for the RX\_INTSTAT\_RAW and INTSTAT\_MASKED registers if the corresponding interrupts are enabled.

<!-- image -->

www.ti.com

## 14.3.1.3.4 Miscellaneous Pulse Interrupt (MISC\_PULSE)

The MISC\_PULSE interrupt is an immediate, non-paced, pulse interrupt selected from the miscellaneous interrupts (EVNT\_PEND, STAT\_PEND, HOST\_PEND, MDIO\_LINKINT, MDIO\_USERINT). The miscellaneous interrupt(s) is selected by setting one or more bits in the C n \_MISC\_EN[4:0] register. The masked interrupt status can be read in the C n \_MISC\_STAT[4:0] register. Upon reception of an interrupt, software should perform the following:

- Read the Misc\_Stat[4:0] register to determine which caused the interrupt.
- Process the interrupt.
- Write the appropriate value (0x3) to the CPDMA\_EOI\_VECTOR register.
- Write a 1 to the appropriate bit in the MDIOLINKINTRAW register.

This device does not support multiple link interrupts. Only MDIO\_LINKINT[0] and MDIO\_USERINT[0] are used. MDIO\_LINKINT[1] and MDIO\_USERINT[1] are not used.

## 14.3.1.3.4.1 EVNT\_PEND (CPTS\_PEND) Interrupt

See Section 14.3.7, Common Platform Time Sync (CPTS) , for information on the time sync event interrupt.

## 14.3.1.3.4.2 Statistics Interrupt

The statistics level interrupt (STAT\_PEND) will be asserted if enabled when any statistics value is greater than or equal to 0x80000000. The statistics interrupt is cleared by writing to decrement all statistics values greater than 0x80000000 (such that their new values are less than 0x80000000). The statistics interrupt is enabled by setting to one the appropriate bit in the INTMASK\_SET register in the CPDMA submodule.

The statistics interrupt is disabled by writing one to the appropriate bit in the INTMASK\_CLEAR register. The raw and masked statistics interrupt status may be read by reading the TX\_IntStat\_Raw and TX\_IntStat\_Masked registers, respectively

## 14.3.1.3.4.3 Host Error Interrupt

The host error interrupt (HOST\_PEND) will be asserted if enabled when a host error is detected during transmit or receive CPDMA transactions. The host error interrupt is intended for software debug, and is cleared by a warm reset or a system reset. The raw and masked statistics interrupt status can be read by reading the TX\_INTSTAT\_RAW and TXINTSTAT\_MASKED registers, respectively.

The following list shows the transmit host error conditions:

- SOP error
- OWNERSHIP bit not set in SOP buffer
- next buffer descriptor pointer without EOP set to 0
- buffer pointer set to 0
- buffer length set to 0
- packet length error

The receive host error conditions are show in the following list:

- Ownership bit not set in input buffer.
- Zero buffer pointer.
- Zero buffer Length on non-SOP descriptor.
- SOP buffer length not greater than offset.

The host error interrupt is disabled by clearing to 0 the appropriate bit in the CPDMA\_INTMASK\_CLEAR register.