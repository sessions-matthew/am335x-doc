<!-- image -->

www.ti.com

## Introduction

This chapter describes the 2D/3D graphics accelerator (SGX) for the device.

NOTE:

The SGX subsystem is a Texas Instruments instantiation of the POWERVR ® SGX530 core from Imagination Technologies Ltd.

This document contains materials that are ©2003-2007 Imagination Technologies Ltd.

POWERVR® and USSE™ are trademarks or registered trademarks of Imagination Technologies Ltd.

The 2D/3D graphics accelerator (SGX) subsystem accelerates 2-dimensional (2D) and 3-dimensional (3D) graphics applications. The SGX subsystem is based on the POWERVR ® SGX core from Imagination Technologies. SGX is a new generation of programmable POWERVR graphic cores. The POWERVR SGX530 v1.2.5 architecture is scalable and can target market segments, from portable devices to HMI.

## 5.0.10 POWERVR SGX Main Features

- 2D and 3D graphics
- Tile-based architecture
- Universal scalable shader engine (USSE™) - multithreaded engine incorporating pixel and vertex shader functionality
- Advanced shader feature set: in excess of OpenGL2.0
- Industry-standard API support: OpenGL ES 1.1 and 2.0, OpenVG v1.0.1
- Fine-grained task switching, load balancing, and power management
- Advanced geometry direct memory access (DMA) driven operation for minimum CPU interaction
- Programmable high-quality image anti-aliasing
- POWERVR SGX core MMU for address translation from the core virtual address to the external physical address (up to 4GB address range)
- Fully virtualized memory addressing for OS operation in a unified memory architecture
- Advanced and standard 2D operations [e.g., vector graphics, BLTs (block level transfers), ROPs (raster operations)]
- 32K stride support