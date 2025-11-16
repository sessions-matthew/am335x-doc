<!-- image -->

www.ti.com

## 23.3.2 Message Handler

The message handler is a state machine that controls the data transfer between the single-ported message RAM and the CAN core's Rx/Tx shift register. It also handles acceptance filtering and the interrupt/DMA request generation as programmed in the control registers.

## 23.3.3 Message RAM

The DCAN0 and DCAN1 enables a storage of 64 CAN messages.

## 23.3.4 Message RAM Interface

Three interface register sets control the CPU read and write accesses to the message RAM. There are two interface registers sets for read and write access, IF1 and IF2, and one interface register set for read access only, IF3. Additional information can be found in Section 23.3.15.12.

The interface registers have the same word-length as the message RAM.

## 23.3.5 Registers and Message Object Access

Data consistency is ensured by indirect accesses to the message objects. During normal operation, all CPU and DMA accesses to the message RAM are done through interface registers. In a dedicated test mode, the message RAM is memory mapped and can be directly accessed by either CPU or DMA.

## 23.3.6 Module Interface

The DCAN module registers are accessed by the CPU or user software through a 32-bit peripheral bus interface.

## 23.3.7 Dual Clock Source

Two clock domains are provided to the DCAN module: the peripheral synchronous clock domain (L3\_SLOW\_GCLK) and the peripheral asynchronous clock source domain (CLK\_M\_OSC) for CAN\_CLK.