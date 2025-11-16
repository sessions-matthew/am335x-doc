## Introduction

The USB controller provides a low-cost connectivity solution for numerous consumer portable devices by providing a mechanism for data transfer between USB devices with a line/bus speed up to 480 Mbps. The device USB subsystem has two independent USB 2.0 Modules built around two OTG controllers. The OTG supplement feature, the support for a dynamic role change, is also supported. Each port has the support for a dual-role feature allowing for additional versatility enabling operation capability as a host or peripheral. Both ports have identical capabilities and operate independent of each other.

Each USB controller is built around the Mentor USB OTG controller (musbmhdrc) and TI PHY. Each USB controller has user configurable 32K Bytes of Endpoint FIFO and has the support for 15 'Transmit' endpoints and 15 'Receive' endpoints in addition to Endpoint 0. The USB subsystem makes use of the CPPI 4.1 DMA for accelerating data movement via a dedicated DMA hardware.

The two USB modules share the CPPI DMA controller and accompanying Queue Manager, Interrupt Pacer, Power Management module, and PHY/UTMI clock.

Within the descriptions of the USB subsystem that would follow, the term USB controller or USB PHY is used to mean/refer to any of the two USB controllers or PHYs existing within the USB subsystem. The term USB module is used to mean/refer to any of the two USB modules. USB0 is used to refer to one of the USB modules and USB1 is used to refer to the other USB module.

## 16.0.4 Acronyms, Abbreviations, and Definitions

AHB

Advanced High-performance Bus

CBA

Common Bus Architecture

CDC

Change Data Capture

CPPI

Communications Port Programming Interface

CPU

Central Processing Unit

DFT

Design for Test

DMA

Direct Memory Access

DV

Design Verification

EOI

End of Interrupt

EOP

End of Packet

FIFO

First-In First-Out

FS

Full-Speed USB data rate

HNP

Host Negotiation

HS

High-Speed USB data rate

INTD

Interrupt Distributor

IP

Intellectual Property

ISO

Isochronous transfer type

LS

Low-Speed USB data rate

MHz

Megahertz

MOP

Middle of Packet

OCP

Open Core Protocol

OCP HD

OCP High Performance

OCP MMR

OCP Memory Mapped Registers

OTG

On-The-Go

PDR

Physical Design Requirements

PHY

Physical Layer Device

PPU

Packet Processing Unit

RAM

Random Access Memory

RNDIS

Remote Network Driver Interface Specification

<!-- image -->

<!-- image -->

## www.ti.com

| RX    | Receive                                                           |
|-------|-------------------------------------------------------------------|
| SCR   | Switched Central Resource                                         |
| SOC   | System On a Chip                                                  |
| SOP   | Start of Packet                                                   |
| SRP   | Session Resume                                                    |
| TX    | Transmit                                                          |
| USB   | Universal Serial Bus                                              |
| USB0  | One of the two USB 2.0 Compliant USB Module                       |
| USB1  | One of the two USB2.0 Compliant USB Module                        |
| USBSS | USB Subsystem (contains USB0 and USB1)                            |
| UTMI  | USB 2.0 Transceiver Macrocell Interface                           |
| XDMA  | Transfer DMA (DMA other than CPPI DMA used within the Controller) |

## USB Features

The main features of the USB subsystem are:

- Contains 2 usb20otg\_f controller modules with the following features:
- -Built around the Mentor USB 2.0 OTG core (musbmhdrc)
- -Supports USB 2.0 peripheral at speeds HS (480 Mb/s) and FS (12 Mb/s)
- -Supports USB 2.0 host or OTG at speeds HS (480 Mb/s), FS (12 Mb/s), and LS (1.5 Mb/s)
- -Supports all modes of transfers (control, bulk, interrupt, and isochronous)
- -Supports high bandwidth ISO mode
- -Supports 16 Transmit (TX) and 16 Receive (RX) endpoints including endpoint 0
- -Supports USB OTG extensions for Session Resume (SRP) and Host Negotiation (HNP)
- -Includes a 32K endpoint FIFO RAM, and supports programmable FIFO sizes
- -Includes RNDIS mode for accelerating RNDIS type protocols using short packet termination over USB
- -Includes CDC Linux mode for accelerating CDC type protocols using short packet termination over USB
- -Includes an RNDIS like mode for terminating RNDIS type protocols without using short packet termination for support of MSC applications
- Includes two USB2.0 OTG PHYs
- Interfaces to the CPU via 3 OCP interfaces:
- -Master OCP HP interface for the DMA
- -Master OCP HP interface for the Queue manager
- -Slave OCP MMR interface
- Includes a CPPI 4.1 compliant DMA controller sub-module with 30 RX and 30 TX simultaneous data connections
- Includes a CPPI 4.1 DMA scheduler
- DMA supports CPPI host descriptor formats
- DMA supports stall on buffer starvation
- Supports data buffer sizes up to 4M bytes
- CPPI FIFO interface per TX/RX endpoint
- Provides a CPPI Queue Manager module with 92 queues for queuing/de-queuing packets.
- DMA pacing logic for interrupts
- Loopback MGC test using the UTMI interfaces

2561

Universal Serial Bus (USB)