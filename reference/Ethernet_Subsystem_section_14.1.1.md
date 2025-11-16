<!-- image -->

www.ti.com

## 14.1 Introduction

Described in the following sections is the Layer 2 3-port switch (3PSW) Ethernet subsystem. The 3-port switch gigabit ethernet subsystem provides ethernet packet communication and can be configured as an ethernet switch. It provides the gigabit media independent interface (GMII),reduced gigabit media independent interface (RGMII), reduced media independent interface (RMII), the management data input output (MDIO) for physical layer device (PHY) management.

As a Layer 2 switch, this device is capable of supporting all higher layers and various protocols (e.g., IPV4, IPV6, 802.3x) in software.

## 14.1.1 Features

The general features of the ethernet switch subsystem are:

- Two 10/100/1000 Ethernet ports with GMII, RMII and RGMII interfaces
- Wire rate switching (802.1d)
- Non Blocking switch fabric
- Flexible logical FIFO based packet buffer structure
- Four priority level QOS support (802.1p)
- CPPI 3.1 compliant DMA controllers
- Support for IEEE 1588v2 Clock Synchronization (2008 Annex D and Annex F)
- -Timing FIFO and time stamping logic inside the SS
- Device Level Ring (DLR) Support
- Address Lookup Engine
- -1024 addresses plus VLANs
- -Wire rate lookup
- -VLAN support
- -Host controlled time-based aging
- -Spanning tree support
- -L2 address lock and L2 filtering support
- -MAC authentication (802.1x)
- -Receive or destination based Multicast and Broadcast limits
- -MAC address blocking
- -Source port locking
- -OUI host accept/deny feature
- Flow Control Support (802.3x)
- EtherStats and 802.3Stats RMON statistics gathering (shared)
- Support for external packet dropping engine
- CPGMAC\_SL transmit to CPGMAC\_SL receive Loopback mode (digital loopback) supported
- CPGMAC\_SL receive to CPGMAC\_SL transmit Loobback mode (FIFO loopback) supported
- Maximum frame size 2016 bytes (2020 with VLAN)
- 8k (2048 x 32) internal CPPI buffer descriptor memory
- MDIO module for PHY Management
- Programmable interrupt control with selected interrupt pacing
- Emulation Support.
- Programmable transmit Inter-Packet Gap (IPG)
- Reset isolation