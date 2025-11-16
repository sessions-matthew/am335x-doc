<!-- image -->

www.ti.com

## 4.1 Introduction

The Programmable Real-Time Unit Subsystem and Industrial Communication Subsystem (PRU-ICSS) consists of dual 32-bit RISC cores (Programmable Real-Time Units, or PRUs), shared, data, and instruction memories, internal peripheral modules, and an interrupt controller (INTC). The programmable nature of the PRU, along with its access to pins, events and all SoC resources, provides flexibility in implementing fast real-time responses, specialized data handling operations, custom peripheral interfaces, and in offloading tasks from the other processor cores of the system-on-chip (SoC).

Figure 4-1 shows the PRU-ICSS details.

The PRUs have access to all resources on the SoC through the Interface/OCP Master port, and the external host processors can access the PRU-ICSS resources through the Interface/OCP Slave port. The 32-bit interconnect bus connects the various internal and external masters to the resources inside the PRU-ICSS. The INTC handles system input events and posts events back to the device-level host CPU.

The PRU cores are programmed with a small, deterministic instruction set. Each PRU can operate independently or in coordination with each other and can also work in coordination with the device-level host CPU. This interaction between processors is determined by the nature of the firmware loaded into the PRU's instruction memories.

Figure 4-1. PRU-ICSS Block Diagram

<!-- image -->