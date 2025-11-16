<!-- image -->

www.ti.com

## 11.1 Introduction

The enhanced direct memory access (EDMA3) controller's primary purpose is to service userprogrammed data transfers between two memory-mapped slave endpoints on the device.

Typical usage includes, but is not limited to the following:

- Servicing software-driven paging transfers (e.g., transfers from external memory, such as DDR2 to internal device memory).
- Servicing event-driven peripherals, such as a serial port.
- Performing sorting or sub-frame extraction of various data structures.
- Offloading data transfers from the main device CPU(s).

The EDMA3 controller consists of two principal blocks:

- EDMA3 channel controller (EDMA3CC).
- EDMA3 transfer controller(s) (EDMA3TC).

The EDMA3 channel controller serves as the user interface for the EDMA3 controller. The EDMA3CC includes parameter RAM (PaRAM), channel control registers, and interrupt control registers. The EDMA3CC serves to prioritize incoming software requests or events from peripherals and submits transfer requests (TRs) to the transfer controller.

The EDMA3 transfer controllers are slaves to the EDMA3 channel controller that is responsible for data movement. The transfer controller issues read/write commands to the source and destination addresses that are programmed for a given transfer. The operation is transparent to user.

## 11.1.1 EDMA3 Controller Block Diagram

Figure 11-1 shows a block diagram for the EDMA3 controller.

Figure 11-1. EDMA3 Controller Block Diagram

<!-- image -->