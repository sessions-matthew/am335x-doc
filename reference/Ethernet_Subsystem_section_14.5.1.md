## 14.5 Ethernet Subsystem Registers

## 14.5.1 CPSW\_ALE Registers

Table 14-23 lists the memory-mapped registers for the CPSW\_ALE. All register offset addresses not listed in Table 14-23 should be considered as reserved locations and the register contents should not be modified.

Table 14-23. CPSW\_ALE REGISTERS

| Offset   | Acronym      | Register Name                                 | Section           |
|----------|--------------|-----------------------------------------------|-------------------|
| 0h       | IDVER        | ADDRESS LOOKUP ENGINE ID/VERSION REGISTER     | Section 14.5.1.1  |
| 8h       | CONTROL      | ADDRESS LOOKUP ENGINE CONTROL REGISTER        | Section 14.5.1.2  |
| 10h      | PRESCALE     | ADDRESS LOOKUP ENGINE PRESCALE REGISTER       | Section 14.5.1.3  |
| 18h      | UNKNOWN_VLAN | ADDRESS LOOKUP ENGINE UNKNOWN VLAN REGISTER   | Section 14.5.1.4  |
| 20h      | TBLCTL       | ADDRESS LOOKUP ENGINE TABLE CONTROL           | Section 14.5.1.5  |
| 34h      | TBLW2        | ADDRESS LOOKUP ENGINE TABLE WORD 2 REGISTER   | Section 14.5.1.6  |
| 38h      | TBLW1        | ADDRESS LOOKUP ENGINE TABLE WORD 1 REGISTER   | Section 14.5.1.7  |
| 3Ch      | TBLW0        | ADDRESS LOOKUP ENGINE TABLE WORD 0 REGISTER   | Section 14.5.1.8  |
| 40h      | PORTCTL0     | ADDRESS LOOKUP ENGINE PORT 0 CONTROL REGISTER | Section 14.5.1.9  |
| 44h      | PORTCTL1     | ADDRESS LOOKUP ENGINE PORT 1 CONTROL REGISTER | Section 14.5.1.10 |
| 48h      | PORTCTL2     | ADDRESS LOOKUP ENGINE PORT 2 CONTROL REGISTER | Section 14.5.1.11 |
| 4Ch      | PORTCTL3     | ADDRESS LOOKUP ENGINE PORT 3 CONTROL REGISTER | Section 14.5.1.12 |
| 50h      | PORTCTL4     | ADDRESS LOOKUP ENGINE PORT 4 CONTROL REGISTER | Section 14.5.1.13 |
| 54h      | PORTCTL5     | ADDRESS LOOKUP ENGINE PORT 5 CONTROL REGISTER | Section 14.5.1.14 |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.1.1 IDVER Register (offset = 0h) [reset = 290104h]

IDVER is shown in Figure 14-15 and described in Table 14-24. ADDRESS LOOKUP ENGINE ID/VERSION REGISTER

| Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   | Figure 14-15. IDVER Register   |
|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|--------------------------------|
| 31                             | 30                             | 29                             | 28                             | 27                             | 26                             | 25                             | 24                             |
| IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          |
| R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            |
| 23                             | 22                             | 21                             | 20                             | 19                             | 18                             | 17                             | 16                             |
| IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          | IDENT                          |
| R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            |
| 15                             | 14                             | 13                             | 12                             | 11                             | 10                             | 9                              | 8                              |
| MAJ_VER                        | MAJ_VER                        | MAJ_VER                        | MAJ_VER                        | MAJ_VER                        | MAJ_VER                        | MAJ_VER                        | MAJ_VER                        |
| R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            | R-0                            |
| 7                              | 6                              | 5                              | 4                              | 3                              | 2                              | 1                              | 0                              |
| MINOR_VER                      | MINOR_VER                      | MINOR_VER                      | MINOR_VER                      | MINOR_VER                      | MINOR_VER                      | MINOR_VER                      | MINOR_VER                      |

R-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-24. IDVER Register Field Descriptions

| Bit   | Field     | Type   |   Reset | Description              |
|-------|-----------|--------|---------|--------------------------|
| 31-16 | IDENT     | R-0    |       0 | ALE Identification Value |
| 15-8  | MAJ_VER   | R-0    |       0 | ALE Major Version Value  |
| 7-0   | MINOR_VER | R-0    |       0 | ALE Minor Version Value  |

## 14.5.1.2 CONTROL Register (offset = 8h) [reset = 0h]

CONTROL is shown in Figure 14-16 and described in Table 14-25. ADDRESS LOOKUP ENGINE CONTROL REGISTER

## Figure 14-16. CONTROL Register

<!-- image -->

| 31            | 30            | 29               | 28       | 27             | 26         | 25                | 24                 |
|---------------|---------------|------------------|----------|----------------|------------|-------------------|--------------------|
| ENABLE_ALE    | CLEAR_TABLE   | AGE_OUT_NO W     |          |                | Reserved   |                   |                    |
| R/W-0         | R/W-0         | R/W-0            |          |                |            |                   |                    |
| 23            | 22            | 21               | 20       | 19             | 18         | 17                | 16                 |
| Reserved      | Reserved      | Reserved         | Reserved | Reserved       | Reserved   | Reserved          | Reserved           |
| 15            | 14            | 13               | 12       | 11             | 10         | 9                 | 8                  |
| Reserved      | Reserved      | Reserved         | Reserved | Reserved       | Reserved   | Reserved          | EN_P0_UNI_F LOOD   |
|               |               |                  |          |                |            |                   | R/W-0              |
| 7             | 6             | 5                | 4        | 3              | 2          | 1                 | 0                  |
| LEARN_NO_VI D | EN_VID0_MOD E | ENABLE_OUI_ DENY | BYPASS   | RATE_LIMIT_T X | VLAN_AWARE | ENABLE_AUT H_MODE | ENABLE_RAT E_LIMIT |
| R/W-0         | R/W-0         | R/W-0            | R/W-0    | R/W-0          | R/W-0      | R/W-0             | R/W-0              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-25. CONTROL Register Field Descriptions

|   Bit | Field           | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|-----------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    31 | ENABLE_ALE      | R/W-0  |       0 | Enable ALE - 0 - Drop all packets 1 - Enable ALE packet processing                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|    30 | CLEAR_TABLE     | R/W-0  |       0 | Clear ALE address table - Setting this bit causes the ALE hardware to write all table bit values to zero. Software must perform a clear table operation as part of the ALE setup/configuration process. Setting this bit causes all ALE accesses to be held up for 64 clocks while the clear is performed. Access to all ALE registers will be blocked (wait states) until the 64 clocks have completed. This bit cannot be read as one because the read is blocked until the clear table is completed at which time this bit is cleared to zero. |
|    29 | AGE_OUT_NOW     | R/W-0  |       0 | Age Out Address Table Now - Setting this bit causes the ALE hardware to remove (free up) any ageable table entry that does not have a set touch bit. This bit is cleared when the age out process has completed. This bit may be read. The age out process takes 4096 clocks best case (no ale packet processing during ageout) and 66550 clocks absolute worst case.                                                                                                                                                                             |
|     8 | EN_P0_UNI_FLOOD | R/W-0  |       0 | Enable Port 0 (Host Port) unicast flood 0 - do not flood unknown unicast packets to host port (p0) 1 - flood unknown unicast packets to host port (p0)                                                                                                                                                                                                                                                                                                                                                                                            |
|     7 | LEARN_NO_VID    | R/W-0  |       0 | Learn No VID - 0 - VID is learned with the source address 1 - VID is not learned with the source address (source address is not tied to VID).                                                                                                                                                                                                                                                                                                                                                                                                     |
|     6 | EN_VID0_MODE    | R/W-0  |       0 | Enable VLAN ID = 0 Mode 0 - Process the packet with VID = PORT_VLAN[ 11:0]. 1 - Process the packet with VID = 0.                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|     5 | ENABLE_OUI_DENY | R/W-0  |       0 | Enable OUI Deny Mode - When set this bit indicates that a packet with a non OUI table entry matching source address will be dropped to the host unless the destination address matches a multicast table entry with the super bit set.                                                                                                                                                                                                                                                                                                            |

<!-- image -->

<!-- image -->

www.ti.com

## Table 14-25. CONTROL Register Field Descriptions (continued)

|   Bit | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     4 | BYPASS            | R/W-0  |       0 | ALE Bypass - When set, all packets received on ports 0 and 1 are sent to the host (only to the host).                                                                                                                                                                                                                                                                                                                        |
|     3 | RATE_LIMIT_TX     | R/W-0  |       0 | Rate Limit Transmit mode - 0 - Broadcast and multicast rate limit counters are received port based 1 - Broadcast and multicast rate limit counters are transmit port based.                                                                                                                                                                                                                                                  |
|     2 | VLAN_AWARE        | R/W-0  |       0 | ALE VLAN Aware - Determines what is done if VLAN not found. 0 - Flood if VLAN not found 1 - Drop packet if VLAN not found                                                                                                                                                                                                                                                                                                    |
|     1 | ENABLE_AUTH_MODE  | R/W-0  |       0 | Enable MAC Authorization Mode - Mac authorization mode requires that all table entries be made by the host software. There are no learned address in authorization mode and the packet will be dropped if the source address is not found (and the destination address is not a multicast address with the super table entry bit set). 0 - The ALE is not in MAC authorization mode 1 - The ALE is in MAC authorization mode |
|     0 | ENABLE_RATE_LIMIT | R/W-0  |       0 | Enable Broadcast and Multicast Rate Limit 0 - Broadcast/Multicast rates not limited 1 - Broadcast/Multicast packet reception limited to the port control register rate limit fields.                                                                                                                                                                                                                                         |

## 14.5.1.3 PRESCALE Register (offset = 10h) [reset = 0h]

PRESCALE is shown in Figure 14-17 and described in Table 14-26. ADDRESS LOOKUP ENGINE PRESCALE REGISTER

## Figure 14-17. PRESCALE Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

PRESCALE

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-26. PRESCALE Register Field Descriptions

| Bit   | Field    | Type   |   Reset | Description                                                                                                                                                                                          |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 19-0  | PRESCALE | R/W-0  |       0 | ALE Prescale Register - The input clock is divided by this value for use in the multicast/broadcast rate limiters. The minimum operating value is 0x10. The prescaler is off when the value is zero. |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.1.4 UNKNOWN\_VLAN Register (offset = 18h) [reset = 0h]

UNKNOWN\_VLAN is shown in Figure 14-18 and described in Table 14-27. ADDRESS LOOKUP ENGINE UNKNOWN VLAN REGISTER

## Figure 14-18. UNKNOWN\_VLAN Register

| 31       | 30       | 29                            | 28                            | 27                            | 26                            | 25                            | 24                            |
|----------|----------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|
| Reserved | Reserved | UNKNOWN_FORCE_UNTAGGED_EGRESS | UNKNOWN_FORCE_UNTAGGED_EGRESS | UNKNOWN_FORCE_UNTAGGED_EGRESS | UNKNOWN_FORCE_UNTAGGED_EGRESS | UNKNOWN_FORCE_UNTAGGED_EGRESS | UNKNOWN_FORCE_UNTAGGED_EGRESS |
|          |          | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         |
| 23       | 22       | 21                            | 20                            | 19                            | 18                            | 17                            | 16                            |
| Reserved | Reserved | UNKNOWN_REG_MCAST_FLOOD_MASK  | UNKNOWN_REG_MCAST_FLOOD_MASK  | UNKNOWN_REG_MCAST_FLOOD_MASK  | UNKNOWN_REG_MCAST_FLOOD_MASK  | UNKNOWN_REG_MCAST_FLOOD_MASK  | UNKNOWN_REG_MCAST_FLOOD_MASK  |
|          |          | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         |
| 15       | 14       | 13                            | 12                            | 11                            | 10                            | 9                             | 8                             |
| Reserved | Reserved | UNKNOWN_MCAST_FLOOD_MASK      | UNKNOWN_MCAST_FLOOD_MASK      | UNKNOWN_MCAST_FLOOD_MASK      | UNKNOWN_MCAST_FLOOD_MASK      | UNKNOWN_MCAST_FLOOD_MASK      | UNKNOWN_MCAST_FLOOD_MASK      |
|          |          | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         | R/W-0                         |
| 7        | 6        | 5                             | 4                             | 3                             | 2                             | 1                             | 0                             |
| Reserved | Reserved | UNKNOWN_VLAN_MEMBER_LIST      | UNKNOWN_VLAN_MEMBER_LIST      | UNKNOWN_VLAN_MEMBER_LIST      | UNKNOWN_VLAN_MEMBER_LIST      | UNKNOWN_VLAN_MEMBER_LIST      | UNKNOWN_VLAN_MEMBER_LIST      |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-27. UNKNOWN\_VLAN Register Field Descriptions

| Bit   | Field                          | Type   |   Reset | Description                                  |
|-------|--------------------------------|--------|---------|----------------------------------------------|
| 29-24 | UNKNOWN_FORCE_UN TAGGED_EGRESS | R/W-0  |       0 | Unknown VLAN Force Untagged Egress.          |
| 21-16 | UNKNOWN_REG_MCAS T_FLOOD_MASK  | R/W-0  |       0 | Unknown VLAN Registered Multicast Flood Mask |
| 13-8  | UNKNOWN_MCAST_FLO OD_MASK      | R/W-0  |       0 | Unknown VLAN Multicast Flood Mask            |
| 5-0   | UNKNOWN_VLAN_MEM BER_LIST      | R/W-0  |       0 | Unknown VLAN Member List                     |

## 14.5.1.5 TBLCTL Register (offset = 20h) [reset = 0h]

TBLCTL is shown in Figure 14-19 and described in Table 14-28. ADDRESS LOOKUP ENGINE TABLE CONTROL

## Figure 14-19. TBLCTL Register

| 31                     | 30                     | 29                     | 28                     | 27                     | 26                     | 25                     | 24                     |
|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|------------------------|
| WRITE_RDZ              | Reserved               | Reserved               | Reserved               | Reserved               | Reserved               | Reserved               | Reserved               |
| R/W-0                  |                        |                        |                        |                        |                        |                        |                        |
| 23                     | 22                     | 21                     | 20                     | 19                     | 18                     | 17                     | 16                     |
| Reserved               | Reserved               | Reserved               | Reserved               | Reserved               | Reserved               | Reserved               | Reserved               |
| 15                     | 14                     | 13                     | 12                     | 11                     | 10                     | 9                      | 8                      |
| Reserved ENTRY_POINTER | Reserved ENTRY_POINTER | Reserved ENTRY_POINTER | Reserved ENTRY_POINTER | Reserved ENTRY_POINTER | Reserved ENTRY_POINTER | Reserved ENTRY_POINTER | Reserved ENTRY_POINTER |
| R/W-0                  | R/W-0                  | R/W-0                  | R/W-0                  | R/W-0                  | R/W-0                  | R/W-0                  | R/W-0                  |
| 7                      | 6                      | 5                      | 4                      | 3                      | 2                      | 1                      | 0                      |
| ENTRY_POINTER          | ENTRY_POINTER          | ENTRY_POINTER          | ENTRY_POINTER          | ENTRY_POINTER          | ENTRY_POINTER          | ENTRY_POINTER          | ENTRY_POINTER          |

R/W-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-28. TBLCTL Register Field Descriptions

| Bit   | Field         | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|---------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | WRITE_RDZ     | R/W-0  |       0 | Write Bit - This bit is always read as zero. Writing a 1 to this bit causes the three table word register values to be written to the entry_pointer location in the address table. Writing a 0 to this bit causes the three table word register values to be loaded from the entry_pointer location in the address table so that they may be subsequently read. A read of any ALE address location will be stalled until the read or write has completed. |
| 9-0   | ENTRY_POINTER | R/W-0  |       0 | Table Entry Pointer - The entry_pointer contains the table entry value that will be read/written with accesses to the table word registers.                                                                                                                                                                                                                                                                                                               |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.1.6 TBLW2 Register (offset = 34h) [reset = 0h]

TBLW2 is shown in Figure 14-20 and described in Table 14-29. ADDRESS LOOKUP ENGINE TABLE WORD 2 REGISTER

## Figure 14-20. TBLW2 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

Reserved

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-29. TBLW2 Register Field Descriptions

| Bit   | Field      | Type   |   Reset | Description            |
|-------|------------|--------|---------|------------------------|
| 7-0   | ENTRY71-64 | R/W-0  |       0 | Table entry bits 71:64 |

ENTRY71-64

R/W-0

## 14.5.1.7 TBLW1 Register (offset = 38h) [reset = 0h]

TBLW1 is shown in Figure 14-21 and described in Table 14-30. ADDRESS LOOKUP ENGINE TABLE WORD 1 REGISTER

## Figure 14-21. TBLW1 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ENTRY63\_32

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-30. TBLW1 Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description            |
|-------|------------|--------|---------|------------------------|
| 31-0  | ENTRY63_32 | R/W    | 0h      | Table entry bits 63:32 |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 14.5.1.8 TBLW0 Register (offset = 3Ch) [reset = 0h]

TBLW0 is shown in Figure 14-22 and described in Table 14-31. ADDRESS LOOKUP ENGINE TABLE WORD 0 REGISTER

## Figure 14-22. TBLW0 Register

31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0

ENTRY31\_0

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-31. TBLW0 Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description           |
|-------|-----------|--------|---------|-----------------------|
| 31-0  | ENTRY31_0 | R/W    | 0h      | Table entry bits 31:0 |

## 14.5.1.9 PORTCTL0 Register (offset = 40h) [reset = 0h]

PORTCTL0 is shown in Figure 14-23 and described in Table 14-32. ADDRESS LOOKUP ENGINE PORT 0 CONTROL REGISTER

| Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   | Figure 14-23. PORTCTL0 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | NO_SA_UPDA TE                     | NO_LEARN                          | VID_INGRESS _CHECK                | DROP_UNTAG GED                    | PORT_STATE                        | PORT_STATE                        |
|                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-32. PORTCTL0 Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | BCAST_LIMIT       | R/W-0  |       0 | Broadcast Packet Rate Limit - Each prescale pulse loads this field into the port broadcast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Broadcast rate limiting is enabled by a non-zero value in this field  |
| 23-16 | MCAST_LIMIT       | R/W-0  |       0 | Multicast Packet Rate Limit - Each prescale pulse loads this field into the port multicast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Multicast rate limiting is enabled by a non-zero value in this field. |
| 5     | NO_SA_UPDATE      | R/W-0  |       0 | No Souce Address Update - When set the port is disabled from updating the source port number in an ALE table entry.                                                                                                                                                                                                                                                                                                           |
| 4     | NO_LEARN          | R/W-0  |       0 | No Learn Mode - When set the port is disabled from learning an address.                                                                                                                                                                                                                                                                                                                                                       |
| 3     | VID_INGRESS_CHECK | R/W-0  |       0 | VLAN ID Ingress Check - If VLAN not found then drop the packet. Packets with an unknown (default) VLAN will be dropped.                                                                                                                                                                                                                                                                                                       |
| 2     | DROP_UNTAGGED     | R/W-0  |       0 | Drop Untagged Packets - Drop non-VLAN tagged ingress packets.                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | PORT_STATE        | R/W-0  |       0 | Port State 0 - Disabled 1 - Blocked 2 - Learn 3 - Forward                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.1.10 PORTCTL1 Register (offset = 44h) [reset = 0h]

PORTCTL1 is shown in Figure 14-24 and described in Table 14-33. ADDRESS LOOKUP ENGINE PORT 1 CONTROL REGISTER

| Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   | Figure 14-24. PORTCTL1 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | NO_SA_UPDA TE                     | NO_LEARN                          | VID_INGRESS _CHECK                | DROP_UNTAG GED                    | PORT_STATE                        | PORT_STATE                        |
|                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-33. PORTCTL1 Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | BCAST_LIMIT       | R/W-0  |       0 | Broadcast Packet Rate Limit - Each prescale pulse loads this field into the port broadcast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Broadcast rate limiting is enabled by a non-zero value in this field  |
| 23-16 | MCAST_LIMIT       | R/W-0  |       0 | Multicast Packet Rate Limit - Each prescale pulse loads this field into the port multicast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Multicast rate limiting is enabled by a non-zero value in this field. |
| 5     | NO_SA_UPDATE      | R/W-0  |       0 | No Souce Address Update - When set the port is disabled from updating the source port number in an ALE table entry.                                                                                                                                                                                                                                                                                                           |
| 4     | NO_LEARN          | R/W-0  |       0 | No Learn Mode - When set the port is disabled from learning an address.                                                                                                                                                                                                                                                                                                                                                       |
| 3     | VID_INGRESS_CHECK | R/W-0  |       0 | VLAN ID Ingress Check - If VLAN not found then drop the packet. Packets with an unknown (default) VLAN will be dropped.                                                                                                                                                                                                                                                                                                       |
| 2     | DROP_UNTAGGED     | R/W-0  |       0 | Drop Untagged Packets - Drop non-VLAN tagged ingress packets.                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | PORT_STATE        | R/W-0  |       0 | Port State 0 - Disabled 1 - Blocked 2 - Learn 3 - Forward                                                                                                                                                                                                                                                                                                                                                                     |

## 14.5.1.11 PORTCTL2 Register (offset = 48h) [reset = 0h]

PORTCTL2 is shown in Figure 14-25 and described in Table 14-34. ADDRESS LOOKUP ENGINE PORT 2 CONTROL REGISTER

| Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   | Figure 14-25. PORTCTL2 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | NO_SA_UPDA TE                     | NO_LEARN                          | VID_INGRESS _CHECK                | DROP_UNTAG GED                    | PORT_STATE                        | PORT_STATE                        |
|                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-34. PORTCTL2 Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | BCAST_LIMIT       | R/W-0  |       0 | Broadcast Packet Rate Limit - Each prescale pulse loads this field into the port broadcast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Broadcast rate limiting is enabled by a non-zero value in this field  |
| 23-16 | MCAST_LIMIT       | R/W-0  |       0 | Multicast Packet Rate Limit - Each prescale pulse loads this field into the port multicast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Multicast rate limiting is enabled by a non-zero value in this field. |
| 5     | NO_SA_UPDATE      | R/W-0  |       0 | No Souce Address Update - When set the port is disabled from updating the source port number in an ALE table entry.                                                                                                                                                                                                                                                                                                           |
| 4     | NO_LEARN          | R/W-0  |       0 | No Learn Mode - When set the port is disabled from learning an address.                                                                                                                                                                                                                                                                                                                                                       |
| 3     | VID_INGRESS_CHECK | R/W-0  |       0 | VLAN ID Ingress Check - If VLAN not found then drop the packet. Packets with an unknown (default) VLAN will be dropped.                                                                                                                                                                                                                                                                                                       |
| 2     | DROP_UNTAGGED     | R/W-0  |       0 | Drop Untagged Packets - Drop non-VLAN tagged ingress packets.                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | PORT_STATE        | R/W-0  |       0 | Port State 0 - Disabled 1 - Blocked 2 - Learn 3 - Forward                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->

<!-- image -->

www.ti.com

## 14.5.1.12 PORTCTL3 Register (offset = 4Ch) [reset = 0h]

PORTCTL3 is shown in Figure 14-26 and described in Table 14-35. ADDRESS LOOKUP ENGINE PORT 3 CONTROL REGISTER

| Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   | Figure 14-26. PORTCTL3 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | NO_SA_UPDA TE                     | NO_LEARN                          | VID_INGRESS _CHECK                | DROP_UNTAG GED                    | PORT_STATE                        | PORT_STATE                        |
|                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 14-35. PORTCTL3 Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | BCAST_LIMIT       | R/W-0  |       0 | Broadcast Packet Rate Limit - Each prescale pulse loads this field into the port broadcast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Broadcast rate limiting is enabled by a non-zero value in this field  |
| 23-16 | MCAST_LIMIT       | R/W-0  |       0 | Multicast Packet Rate Limit - Each prescale pulse loads this field into the port multicast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Multicast rate limiting is enabled by a non-zero value in this field. |
| 5     | NO_SA_UPDATE      | R/W-0  |       0 | No Souce Address Update - When set the port is disabled from updating the source port number in an ALE table entry.                                                                                                                                                                                                                                                                                                           |
| 4     | NO_LEARN          | R/W-0  |       0 | No Learn Mode - When set the port is disabled from learning an address.                                                                                                                                                                                                                                                                                                                                                       |
| 3     | VID_INGRESS_CHECK | R/W-0  |       0 | VLAN ID Ingress Check - If VLAN not found then drop the packet. Packets with an unknown (default) VLAN will be dropped.                                                                                                                                                                                                                                                                                                       |
| 2     | DROP_UNTAGGED     | R/W-0  |       0 | Drop Untagged Packets - Drop non-VLAN tagged ingress packets.                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | PORT_STATE        | R/W-0  |       0 | Port State 0 - Disabled 1 - Blocked 2 - Learn 3 - Forward                                                                                                                                                                                                                                                                                                                                                                     |

## 14.5.1.13 PORTCTL4 Register (offset = 50h) [reset = 0h]

PORTCTL4 is shown in Figure 14-27 and described in Table 14-36. ADDRESS LOOKUP ENGINE PORT 4 CONTROL REGISTER

| Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   | Figure 14-27. PORTCTL4 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       | BCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       | MCAST_LIMIT                       |
| R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| Reserved                          | Reserved                          | NO_SA_UPDA TE                     | NO_LEARN                          | VID_INGRESS _CHECK                | DROP_UNTAG GED                    | PORT_STATE                        | PORT_STATE                        |
|                                   |                                   | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             | R/W-0                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 14-36. PORTCTL4 Register Field Descriptions

| Bit   | Field             | Type   |   Reset | Description                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|-------------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | BCAST_LIMIT       | R/W-0  |       0 | Broadcast Packet Rate Limit - Each prescale pulse loads this field into the port broadcast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Broadcast rate limiting is enabled by a non-zero value in this field  |
| 23-16 | MCAST_LIMIT       | R/W-0  |       0 | Multicast Packet Rate Limit - Each prescale pulse loads this field into the port multicast rate limit counter. The port counters are decremented with each packet received or transmitted depending on whether the mode is transmit or receive. If the counters decrement to zero, then further packets are rate limited until the next prescale pulse. Multicast rate limiting is enabled by a non-zero value in this field. |
| 5     | NO_SA_UPDATE      | R/W-0  |       0 | No Souce Address Update - When set the port is disabled from updating the source port number in an ALE table entry.                                                                                                                                                                                                                                                                                                           |
| 4     | NO_LEARN          | R/W-0  |       0 | No Learn Mode - When set the port is disabled from learning an address.                                                                                                                                                                                                                                                                                                                                                       |
| 3     | VID_INGRESS_CHECK | R/W-0  |       0 | VLAN ID Ingress Check - If VLAN not found then drop the packet. Packets with an unknown (default) VLAN will be dropped.                                                                                                                                                                                                                                                                                                       |
| 2     | DROP_UNTAGGED     | R/W-0  |       0 | Drop Untagged Packets - Drop non-VLAN tagged ingress packets.                                                                                                                                                                                                                                                                                                                                                                 |
| 1-0   | PORT_STATE        | R/W-0  |       0 | Port State 0 - Disabled 1 - Blocked 2 - Learn 3 - Forward                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->