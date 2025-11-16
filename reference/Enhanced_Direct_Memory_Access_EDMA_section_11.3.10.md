<!-- image -->

www.ti.com

## 11.3.10 Memory Protection

The EDMA3 channel controller supports two kinds of memory protection: active and proxy.

## 11.3.10.1 Active Memory Protection

Active memory protection is a feature that allows or prevents read and write accesses (by any EDMA3 programmer) to the EDMA3CC registers (based on permission characteristics that you program). Active memory protection is achieved by a set of memory protection permissions attribute (MPPA) registers.

The EDMA3CC register map is divided into three categories:

- a global region.
- a global channel region.
- eight shadow regions.

Each shadow region consists of the respective shadow region registers and the associated PaRAM. For more detailed information regarding the contents of a shadow region, refer to section Table 11-11.

Each of the eight shadow regions has an associated MPPA register (MPPA n ) that defines the specific requestor(s) and types of requests that are allowed to the regions resources.

The global channel region is also protected with a memory-mapped register (MPPAG). The MPPAG applies to the global region and to the global channel region, except the other MPPA registers themselves. For more detailed information on the list of the registers in each region, refer to the register memory-map in section Table 11-19.

See for the bit field descriptions of MPPA n . The MPPA n have a certain set of access rules.

Table 11-18 shows the accesses that are allowed or not allowed to the MPPAG and MPPA n . The active memory protection uses the PRIV and PRIVID attributes of the EDMA programmer. The PRIV is the privilege level (i.e., user vs. supervisor). The PRIVID refers to a privilege ID with a number that is associated with an EDMA3 programmer. See the device-specific data manual for the PRIVIDs that are associated with potential EDMA3 programmers.

Table 11-18. Allowed Accesses

| Access   | Supervisor   | User   |
|----------|--------------|--------|
| Read     | Yes          | Yes    |
| Write    | Yes          | No     |

Table 11-19 describes the MPPA register mapping for the shadow regions (which includes shadow region registers and PaRAM addresses).

The region-based MPPA registers are used to protect accesses to the DMA shadow regions and the associated region PaRAM. Because there are eight regions, there are eight MPPA region registers (MPPA[0-7]).

Table 11-19. MPPA Registers to Region Assignment

| Register   | Registers Protect   | Address Range   | PaRAM Protect (1)   | Address Range   |
|------------|---------------------|-----------------|---------------------|-----------------|
| MPPAG      | Global Range        | 0000h-1FFCh     | N/A                 | N/A             |
| MPPA0      | DMA Shadow 0        | 2000h-21FCh     | 1st octant          | 4000h-47FCh     |
| MPPA1      | DMA Shadow 1        | 2200h-23FCh     | 2nd octant          | 4800h-4FFCh     |
| MPPA2      | DMA Shadow 2        | 2400h-25FCh     | 3rd octant          | 5000h-57FCh     |
| MPPA3      | DMA Shadow 3        | 2600h-27FCh     | 4th octant          | 5800h-5FFCh     |
| MPPA4      | DMA Shadow 4        | 2800h-29FCh     | 5th octant          | 6000h-67FCh     |
| MPPA5      | DMA Shadow 5        | 2A00h-2BFCh     | 6th octant          | 6800h-6FFCh     |
| MPPA6      | DMA Shadow 6        | 2C00h-2DFCh     | 7th octant          | 7000h-77FCh     |
| MPPA7      | DMA Shadow 7        | 2E00h-2FFCh     | 8th octant          | 7800h-7FFCh     |

(1) The PARAM region is divided into 8 regions referred to as an octant.

## Example Access denied.

Write access to shadow region 7's event enable set register (EESR):

1. The original value of the event enable register (EER) at address offset 0x1020 is 0x0.
2. The MPPA[7] is set to prevent user level accesses (UW = 0, UR = 0), but it allows supervisor level accesses (SW = 1, SR = 1) with a privilege ID of 0. (AID0 = 1).
3. An EDMA3 programmer with a privilege ID of 0 attempts to perform a user-level write of a value of 0xFF00FF00 to shadow region 7's event enable set register (EESR) at address offset 0x2E30. Note that the EER is a read-only register and the only way that you can write to it is by writing to the EESR. Also remember that there is only one physical register for EER, EESR, etc. and that the shadow regions only provide to the same physical set.
4. Since the MPPA[7] has UW = 0, though the privilege ID of the write access is set to 0, the access is not allowed and the EER is not written to.

Table 11-20. Example Access Denied

| Register                | Value         | Description                                                                                                                                        |
|-------------------------|---------------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| EER (offset 0x1020)     | 0x0000 0000   | Value in EER to begin with.                                                                                                                        |
| EESR (offset 0x2E30)    | 0xFF00 FF00 ↓ | Value attempted to be written to shadow region 7's EESR. This is done by an EDMA3 programmer with a privilege level of User and Privilege ID of 0. |
| MPPA[7] (offset 0x082C) | 0x0000 04B0   | Memory Protection Filter AID0 = 1, UW = 0, UR = 0, SW = 1, SR = 1.                                                                                 |
|                         | X             | Access Denied                                                                                                                                      |
| EER (offset 0x1020)     | 0x0000 0000   | Final value of EER                                                                                                                                 |

## Example Access Allowed

Write access to shadow region 7's event enable set register (EESR):

1. The original value of the event enable register (EER) at address offset 0x1020 is 0x0.
2. The MPPA[7] is set to allow user-level accesses (UW = 1, UR = 1) and supervisor-level accesses (SW = 1, SR = 1) with a privilege ID of 0. (AID0 = 1).
3. An EDMA3 programmer with a privilege ID of 0, attempts to perform a user-level write of a value of 0xABCD0123 to shadow region 7's event enable set register (EESR) at address offset 0x2E30. Note that the EER is a read-only register and the only way that you can write to it is by writing to the EESR. Also remember that there is only one physical register for EER, EESR, etc. and that the shadow regions only provide to the same physical set.
4. Since the MPPA[7] has UW = 1 and AID0 = 1, the user-level write access is allowed.
5. Remember that accesses to shadow region registers are masked by their respective DRAE register. In this example, the DRAE[7] is set of 0x9FF00FC2.
6. The value finally written to EER is 0x8BC00102.

<!-- image -->

<!-- image -->

www.ti.com

Table 11-21. Example Access Allowed

| Register                | Value         | Description                                                                                                                                        |
|-------------------------|---------------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| EER (offset 0x1020)     | 0x0000 0000   | Value in EER to begin with.                                                                                                                        |
| EESR (offset 0x2E30)    | 0xFF00 FF00   | Value attempted to be written to shadow region 7's EESR. This is done by an EDMA3 programmer with a privilege level of User and Privilege ID of 0. |
| MPPA[7] (offset 0x082C) | 0x0000 04B3   | Memory Protection Filter AID = 1, UW = 1, UR = 1, SW = 1, SR = 1.                                                                                  |
|                         | √ ↓           | Access allowed.                                                                                                                                    |
| DRAE[7] (offset 0x0378) | 0x9FF0 0FC2 ↓ | DMA Region Access Enable Filter                                                                                                                    |
| EESR (offset 0x2E30)    | 0x8BC0 0102 ↓ | Value written to shadow region 7's EESR. This is done by an EDMA3 programmer with a privilege level of User and a Privilege ID of 0.               |
| EER (offset 0x1020)     | ↓ 0xBC0 0102  | Final value of EER.                                                                                                                                |

## 11.3.10.2 Proxy Memory Protection

Proxy memory protection allows an EDMA3 transfer programmed by a given EDMA3 programmer to have its permissions travel with the transfer through the EDMA3TC. The permissions travel along with the read transactions to the source and the write transactions to the destination endpoints. The PRIV bit and PRIVID bit in the channel options parameter (OPT) is set with the EDMA3 programmer's PRIV value and PRIVID values, respectively, when any part of the PaRAM set is written.

The PRIV is the privilege level (i.e., user vs. supervisor). The PRIVID refers to a privilege ID with a number that is associated with an EDMA3 programmer.

See the data manual for the PRIVIDs that are associated with potential EDMA3 programmers.

These options are part of the TR that are submitted to the transfer controller. The transfer controller uses the above values on their respective read and write command bus so that the target endpoints can perform memory protection checks based on these values.

Consider a parameter set that is programmed by a CPU in user privilege level for a simple transfer with the source buffer on an L2 page and the destination buffer on an L1D page. The PRIV is 0 for user-level and the CPU has a PRIVID of 0.

The PaRAM set is shown in Figure 11-16.

(a) EDMA3 Parameters

Figure 11-17. Channel Options Parameter (OPT) Example

| Parameter Contents   | Parameter Contents   | Parameter                         | Parameter                         |
|----------------------|----------------------|-----------------------------------|-----------------------------------|
| 0010 0007h           | 0010 0007h           | Channel Options Parameter (OPT)   | Channel Options Parameter (OPT)   |
| 009F 0000h           | 009F 0000h           | Channel Source Address (SRC)      | Channel Source Address (SRC)      |
| 0001h                | 0004h                | Count for 2nd Dimension (BCNT)    | Count for 1st Dimension (ACNT)    |
| 00F0 7800h           | 00F0 7800h           | Channel Destination Address (DST) | Channel Destination Address (DST) |
| 0001h                | 0001h                | Destination BCNT Index (DSTBIDX)  | Source BCNT Index (SRCBIDX)       |
| 0000h                | FFFFh                | BCNT Reload (BCNTRLD)             | Link Address (LINK)               |
| 0001h                | 1000h                | Destination CCNT Index (DSTCIDX)  | Source CCNT Index (SRCCIDX)       |
| 0000h                | 0001h                | Reserved                          | Count for 3rd Dimension (CCNT)    |

(b)/.notdefChannel/.notdefOptions/.notdefParameter/.notdef(OPT)/.notdefContent

<!-- image -->

The PRIV and PRIVID information travels along with the read and write requests that are issued to the source and destination memories.

For example, if the access attributes that are associated with the L2 page with the source buffer only allow supervisor read, write accesses (SR,SW), the user-level read request above is refused. Similarly, if the access attributes that are associated with the L1D page with the destination buffer only allow supervisor read and write accesses (SR, SW), the user-level write request above is refused. For the transfer to succeed, the source and destination pages should have user-read and user-write permissions, respectively, along with allowing accesses from a PRIVID 0.

Because the programmer's privilege level and privilege identification travel with the read and write requests, EDMA3 acts as a proxy.

Figure 11-18 illustrates the propagation of PRIV and PRIVID at the boundaries of all the interacting entities (CPU, EDMA3CC, EDMA3TC, and slave memories).

Figure 11-16. PaRAM Set Content for Proxy Memory Protection Example

<!-- image -->