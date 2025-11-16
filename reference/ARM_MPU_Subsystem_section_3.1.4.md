## 3.1.4 ARM Subchip

## 3.1.4.1 ARM Overview

The ARM Cortex-A8 processor incorporates the technologies available in the ARM7™ architecture. These technologies include NEON™ for media and signal processing and Jazelle™ RCT for acceleration of realtime compilers, Thumb®-2 technology for code density and the VFPv3 floating point architecture.

## 3.1.4.2 ARM Description

## 3.1.4.2.1 ARM® Cortex™-A8 Instruction, Data, and Private Peripheral Port

The AXI bus interface is the main interface to the ARM system bus. It performs L2 cache fills and noncacheable accesses for both instructions and data. The AXI interface supports 128bit and 64-bit wide input and output data buses. It supports multiple outstanding requests on the AXI bus and a wide range of bus clock to core clock ratios. The bus clock is synchronous with the core clock.

See the ARM ® Cortex™-A8 Technical Reference Manual for a complete programming model of the transaction rules (ordering, posting, and pipeline synchronization) that are applied depending on the memory region attribute associated with the transaction destination address.

## 3.1.4.2.2 Secure Monitor Calls to Access CP15 Registers

The device supports special secure monitor functions that allows access to certain ARM core registers in privileged mode. Functions to write to the Auxiliary Control Register, Nonsecure Access Control Register, and the L2 Cache Auxiliary Control Register are provided (see the ARM Technical Reference Manual for a description of these registers).

| Service ID (R12)   | Description                                              |
|--------------------|----------------------------------------------------------|
| 0x100              | Write value in R0 to Auxiliary Control Register          |
| 0x101              | Write value in R0 to Non Secure Access Control Register  |
| 0x102              | Write value in R0 to L2 Cache Auxiliary Control Register |

In general, the procedure to use these secure monitor call is as follows:

- Write the appropriate service ID to R12 .
- Load R0 with the value to write to the ARM core register.
- Perform barrier operations to ensure proper execution.
- Use SMC #1 (or SMI #1) to make the secure monitor call

Barrier instructions are also necessary to ensure a clean state before entering the secure monitor. Refer to the following example which provides the proper code sequence. This code provides an example of enabling ECC on L2 cache. Note: This function should be executed in an ARM privileged mode.

```
_enableL2ECC: STMFD sp!, {r0 - r4} ; save context of R0-R4, which secure monitor call may use MRC p15, #1, r0, c9, c0, #2 ; Read L2 Cache Auxiliary Control Reg into R0 MOV r1, #0 ; Clear R1 MOVT r1, #0x1020 ; enable mask for ECC (set bits 21 and 28 to enable ECC) ORR r0, r0, r1 ; OR with original register value MOV r12, #0x0102 ; setup service ID in R12 MCR p15,#0x0,r1,c7,c5,#6 ; invalidate entire branch predictor array DSB ; data synchronization barrier operation ISB ; instruction synchronization barrier operation DMB ; data memory barrier operation SMC #1 ; secure monitor call SMC (previously SMI) LDMFD sp!, {r0 - r4} ; after returning from SMC, restore R0-R4 MOV pc, lr ; return
```

## 3.1.4.2.3 ARM Core Supported Features

Table 3-3 provides a list of main functions of the Cortex™-A8 core supported inside the MPU Subsystem.

<!-- image -->

www.ti.com