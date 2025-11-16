## 10.1 Introduction

The system interconnect is based on a 2-level hierarchical architecture (L3, L4) driven by system performance. The L4 interconnect is based on a fully native OCP infrastructure, directly complying with the OCPIP2.2 reference standard.

## 10.1.1 Terminology

The following is a brief explanation of some terms used in this document:

Initiator: Module able to initiate read and write requests to the chip interconnect (typically: processors, DMA, etc.).

Target: Unlike an initiator, a target module cannot generate read/write requests to the chip interconnect, but it can respond to these requests. However, it may generate interrupts or a DMA request to the system (typically: peripherals, memory controllers). Note: A module can have several separate ports; therefore, a module can be an initiator and a target.

Agent: Each connection of one module to one interconnect is done using an agent, which is an adaptation (sometimes configurable) between the module and the interconnect. A target module is connected by a target agent (TA), and an initiator module is connected by an initiator agent (IA).

Interconnect: The decoding, routing, and arbitration logic that enable the connection between multiple initiator modules and multiple target modules connected on it.

Register Target (RT): Special TA used to access the interconnect internal configuration registers.

Data-flow Signal: Any signal that is part of a clearly identified transfer or data flow (typically: command, address, byte enables, etc.). Signal behavior is defined by the protocol semantics.

Sideband Signal: Any signal whose behavior is not associated to a precise transaction or data flow.

Command Slot: A command slot is a subset of the command list. It is the memory buffer for a single command. A total of 32 command slots exist.

Out-of-band Error: Any signal whose behavior is associated to a device error-reporting scheme, as opposed to in-band errors. Note: Interrupt requests and DMA requests are not routed by the interconnect in the device.

ConnID: Any transaction in the system interconnect is tagged by an in-band qualifier ConnID, which uniquely identifies the initiator at a given interconnect point. A ConnID is transmitted in band with the request and is used for error-logging mechanism.

## 10.1.2 L3 Interconnect

The L3 high-performance interconnect is based on a Network-On-Chip (NoC) interconnect infrastructure. The NoC uses an internal packet-based protocol for forward (read command, write command with data payload) and backward (read response with data payload, write response) transactions. All exposed interfaces of this NoC interconnect, both for Targets and Initiators; comply with the OCPIP2.2 reference standard.

## 10.1.2.1 L3 Topology

The L3 topology is driven by performance requirements, bus types, and clocking structure. The main L3 paths are shown in Figure 10-1. Arrows indicate the master/slave relationship not data flow. L3 is partitioned into two separate clock domains: L3F corresponds to L3 Fast clock domain and L3S corresponds to L3 Slow clock domain.

<!-- image -->

<!-- image -->

www.ti.com

<!-- image -->

## 10.1.2.2 L3 Port Mapping

Each initiator and target core is connected to the L3 interconnect through a Network Interface Unit (NIU). The NIUs act as entry and exit points to the L3 Network on Chip - converting between the IP's OCP protocol and the NoC's internal protocol, and also include various programming registers. All ports are single threaded with tags used to enable pipelined transactions. The interconnect includes:

## Initiator Ports :

- L3F
- -Cortex-A8 MPUSS 128-bit initiator port0 and 64-bit initiator port1
- -SGX530 128-bit initiator port
- -3 TPTC 128-bit read initiator ports
- -3 TPTC 128-bit write initiator ports
- -LCDC 32-bit initiator port
- -2 PRU-ICSS1 32-bit initiator ports
- -2 port Gigabit Ethernet Switch (2PGSW) 32-bit initiator port
- -Debug Subsystem 32-bit initiator port
- L3S
- -USB 32-bit CPPI DMA initiator port
- -USB 32-bit Queue Manager initiator port
- -P1500 32-bit initiator port

## Target Ports :

- L3F
- -EMIF 128-bit target port
- -3 TPTC CFG 32-bit target ports
- -TPCC CFG 32-bit target port
- -OCM RAM0 64-bit target port
- -DebugSS 32-bit target port
- -SGX530 64-bit target port
- -L4\_FAST 32-bit target port
- L3S
- -4 L4\_PER peripheral 32-bit target ports
- -GPMC 32-bit target port
- -McASP0 32-bit target port

- -McASP1 32-bit target port
- -ADC\_TSC 32-bit target port
- -USB 32-bit target port
- -MMHCS2 32-bit target port
- -L4\_WKUP wakeup 32-bit target port

## 10.1.2.3 Interconnect Requirements

The required L3 connections between bus masters and slave ports are shown in Table 10-1. The L3 interconnect will return an address-hole error if any initiator attempts to access a target to which it has no connection.

Table 10-1. L3 Master - Slave Connectivity

| Slaves   |
|----------|

<!-- image -->