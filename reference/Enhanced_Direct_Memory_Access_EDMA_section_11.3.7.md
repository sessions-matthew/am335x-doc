<!-- image -->

www.ti.com

Figure 11-12. QDMA Channel to PaRAM Mapping

<!-- image -->

## 11.3.7 EDMA3 Channel Controller Regions

The EDMA3 channel controller divides its address space into eight regions. Individual channel resources are assigned to a specific region, where each region is typically assigned to a specific EDMA programmer.

You can design the application software to use regions or to ignore them altogether. You can use active memory protection in conjunction with regions so that only a specific EDMA programmer (for example, privilege identification) or privilege level (for example, user vs. supervisor) is allowed access to a given region, and thus to a given DMA or QDMA channel. This allows robust system-level DMA code where each EDMA programmer only modifies the state of the assigned resources. Memory protection is described in Section 11.3.10.

## 11.3.7.1 Region Overview

The EDMA3 channel controller memory-mapped registers are divided in three main categories:

1. Global registers
2. Global region channel registers
3. Shadow region channel registers

The global registers are located at a single/fixed location in the EDMA3CC memory map. These registers control EDMA3 resource mapping and provide debug visibility and error tracking information.

The channel registers (including DMA, QDMA, and interrupt registers) are accessible via the global channel region address range, or in the shadow n channel region address range(s). For example, the event enable register (EER) is visible at the global address of EDMA Base Address + 1020h or region addresses of EDMA Base Address + 2020h for region 0, EDMA Base Address + 2220h for region 1, … EDMA Base Address + 2E20h for region 7.

The DMA region access enable registers (DRAE m ) and the QDMA region access enable registers (QRAE n ) control the underlying control register bits that are accessible via the shadow region address space (except for IEVAL n ). Table 11-11 lists the registers in the shadow region memory map. See the EDMA3CC memory map () for the complete global and shadow region memory maps. Figure 11-13 illustrates the conceptual view of the regions.

Table 11-11. Shadow Region Registers

| DRAE m                              | DRAEH m                             | QRAE n                              |
|-------------------------------------|-------------------------------------|-------------------------------------|
| ER                                  | ERH                                 | QER                                 |
| ECR                                 | ECRH                                | QEER                                |
| ESR                                 | ESRH                                | QEECR                               |
| CER                                 | CERH                                | QEESR                               |
| EER                                 | EERH                                |                                     |
| EECR                                | EECRH                               |                                     |
| EESR                                | EESRH                               |                                     |
| SER                                 | SERH                                |                                     |
| SECR                                | SECRH                               |                                     |
| IER                                 | IERH                                |                                     |
| IECR                                | IECRH                               |                                     |
| IESR                                | IESRH                               |                                     |
| IPR                                 | IPRH                                |                                     |
| ICR                                 | ICRH                                |                                     |
| Register not affected by DRAE\DRAEH | Register not affected by DRAE\DRAEH | Register not affected by DRAE\DRAEH |

IEVAL

Figure 11-13. Shadow Region Registers

<!-- image -->

Table 11-12. EDMA Shadow Regions

| EDMA Address Offset   | Description                       |
|-----------------------|-----------------------------------|
| 0x2000-0x2094         | Shadow Region 0 Channel Registers |
| 0x2200-0x2294         | Shadow Region 1 Channel Registers |

<!-- image -->

<!-- image -->

www.ti.com

Table 11-12. EDMA Shadow Regions (continued)

| EDMA Address Offset   | Description                                |
|-----------------------|--------------------------------------------|
| 0x2400-0x2494         | Shadow Region 2 Channel Registers          |
| 0x2600-0x2694         | Shadow Region 3 Channel Registers          |
| 0x2800-0x2894         | Shadow Region 4-7 Channel Registers unused |

## 11.3.7.2 Channel Controller Regions

There are eight EDMA3 shadow regions (and associated memory maps). Associated with each shadow region are a set of registers defining which channels and interrupt completion codes belong to that region. These registers are user-programmed per region to assign ownership of the DMA/QDMA channels to a region.

- DRAE m and DRAEH m : One register pair exists for each of the shadow regions. The number of bits in each register pair matches the number of DMA channels (64 DMA channels). These registers need to be programmed to assign ownership of DMA channels and interrupt (or TCC codes) to the respective region. Accesses to DMA and interrupt registers via the shadow region address view are filtered through the DRAE/DRAEH pair. A value of 1 in the corresponding DRAE(H) bit implies that the corresponding DMA/interrupt channel is accessible; a value of 0 in the corresponding DRAE(H) bit forces writes to be discarded and returns a value of 0 for reads.
- QRAE n : One register exists for every region. The number of bits in each register matches the number of QDMA channels (4 QDMA channels). These registers must be programmed to assign ownership of QDMA channels to the respective region. To enable a channel in a shadow region using shadow region 0 QEER, the respective bit in QRAE must be set or writing into QEESR will not have the desired effect.
- MPPA n and MPPAG: One register exists for every region. This register defines the privilege level, requestor, and types of accesses allowed to a region's memory-mapped registers.

It is typical for an application to have a unique assignment of QDMA/DMA channels (and, therefore, a given bit position) to a given region.

The use of shadow regions allows for restricted access to EDMA3 resources (DMA channels, QDMA channels, TCC, interrupts) by tasks in a system by setting or clearing bits in the DRAE/ORAE registers. If exclusive access to any given channel / TCC code is required for a region, then only that region's DRAE/ORAE should have the associated bit set.

## Example 11-1. Resource Pool Division Across Two Regions

This example illustrates a judicious resource pool division across two regions, assuming region 0 must be allocated 16 DMA channels (0-15) and 1 QDMA channel (0) and 32 TCC codes (0-15 and 48-63). Region 1 needs to be allocated 16 DMA channels (16-32) and the remaining 7 QDMA channels (1-7) and TCC codes (16-47). DRAE should be equal to the OR of the bits that are required for the DMA channels and the TCC codes:

```
Region 0: DRAEH, DRAE = 0xFFFF0000, 0x0000FFFF QRAE = 0x0000001 Region 1: DRAEH, DRAE = 0x0000FFFF, 0xFFFF0000 QRAE = 0x00000FE
```

## 11.3.7.3 Region Interrupts

In addition to the EDMA3CC global completion interrupt, there is an additional completion interrupt line that is associated with every shadow region. Along with the interrupt enable register (IER), DRAE acts as a secondary interrupt enable for the respective shadow region interrupts. See Section 11.3.9 for more information.