## 16.4.4.18 ANA\_CONFIG2 Register (offset = 54h) [reset = 0h]

Register mask: FFFFFFFFh

ANA\_CONFIG2 is shown in Figure 16-151 and described in Table 16-162.

Used to configure and debug the analog blocks.

Figure 16-151. ANA\_CONFIG2 Register

| 31           | 30           | 29           | 28       | 27       | 26           | 25           | 24           |
|--------------|--------------|--------------|----------|----------|--------------|--------------|--------------|
|              | RESERVED     | RESERVED     | RESERVED |          | REF_GEN_TEST | REF_GEN_TEST | REF_GEN_TEST |
|              | R/W-0h       | R/W-0h       | R/W-0h   |          | R/W-0h       | R/W-0h       | R/W-0h       |
| 23           | 22           | 21           | 20       | 19       | 18           | 17           | 16           |
| REF_GEN_TEST | REF_GEN_TEST | REF_GEN_TEST |          | RESERVED | RESERVED     | RTERM_TEST   | RTERM_TEST   |
| R/W-0h       | R/W-0h       | R/W-0h       |          | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       |
| 15           | 14           | 13           | 12       | 11       | 10           | 9            | 8            |
| RTERM_TEST   | RESERVED     | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       |
| 7            | 6            | 5            | 4        | 3        | 2            | 1            | 0            |
| RESERVED     | RESERVED     | RESERVED     | RESERVED | RESERVED | RESERVED     | RESERVED     | RESERVED     |
| R/W-0h       | R/W-0h       | R/W-0h       | R/W-0h   | R/W-0h   | R/W-0h       | R/W-0h       | R/W-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-162. ANA\_CONFIG2 Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                                                          |
|-------|--------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-27 | RESERVED     | R/W    | 0h      | Reserved.                                                                                                                                                                                                                            |
| 26-20 | REF_GEN_TEST | R/W    | 0h      | 0000000b - Produces the typical vertical eye diagram amplitude (default). 1100000b - Increases vertical eye diagram amplitude by 15 mV. 1010000b - Decreases vertical eye diagram amplitude by 15 mV. All other values are reserved. |
| 19-18 | RESERVED     | R/W    | 0h      | Reserved.                                                                                                                                                                                                                            |
| 17-15 | RTERM_TEST   | R/W    | 0h      | 000b - Typical termination impedance (default). 011b - Decreases the termination impedance by 2 to 3% and can be used to increase the vertical eye diagram amplitude by 1 to 1.5%. All other values reserved.                        |
| 14-0  | RESERVED     | R/W    | 0h      | Reserved.                                                                                                                                                                                                                            |

## 16.4.5 CPPI\_DMA Registers

Table 16-163 lists the memory-mapped registers for the CPPI\_DMA. All register offset addresses not listed in Table 16-163 should be considered as reserved locations and the register contents should not be modified.

## Table 16-163. CPPI\_DMA REGISTERS

| Offset   | Acronym   | Register Name   | Section          |
|----------|-----------|-----------------|------------------|
| 0h       | DMAREVID  |                 | Section 16.4.5.1 |
| 4h       | TDFDQ     |                 | Section 16.4.5.2 |
| 8h       | DMAEMU    |                 | Section 16.4.5.3 |
| 800h     | TXGCR0    |                 | Section 16.4.5.4 |
| 808h     | RXGCR0    |                 | Section 16.4.5.5 |
| 80Ch     | RXHPCRA0  |                 | Section 16.4.5.6 |
| 810h     | RXHPCRB0  |                 | Section 16.4.5.7 |
| 820h     | TXGCR1    |                 | Section 16.4.5.8 |
| 828h     | RXGCR1    |                 | Section 16.4.5.9 |

<!-- image -->

<!-- image -->

Table 16-163. CPPI\_DMA REGISTERS (continued)

| Offset   | Acronym           | Register Name   | Section           |
|----------|-------------------|-----------------|-------------------|
| 82Ch     | RXHPCRA1          |                 | Section 16.4.5.10 |
| 830h     | RXHPCRB1          |                 | Section 16.4.5.11 |
| 840h     | TXGCR2            |                 | Section 16.4.5.12 |
| 848h     | RXGCR2            |                 | Section 16.4.5.13 |
| 84Ch     | RXHPCRA2          |                 | Section 16.4.5.14 |
| 850h     | RXHPCRB2          |                 | Section 16.4.5.15 |
| 860h     | TXGCR3            |                 | Section 16.4.5.16 |
| 868h     | RXGCR3            |                 | Section 16.4.5.17 |
| 86Ch     | RXHPCRA3          |                 | Section 16.4.5.18 |
| 870h     | RXHPCRB3          |                 | Section 16.4.5.19 |
| 880h     | TXGCR4            |                 | Section 16.4.5.20 |
| 888h     | RXGCR4            |                 | Section 16.4.5.21 |
| 88Ch     | RXHPCRA4          |                 | Section 16.4.5.22 |
| 890h     | RXHPCRB4          |                 | Section 16.4.5.23 |
| 8A0h     | TXGCR5            |                 | Section 16.4.5.24 |
| 8A8h     | RXGCR5            |                 | Section 16.4.5.25 |
| 8ACh     | RXHPCRA5          |                 | Section 16.4.5.26 |
| 8B0h     | RXHPCRB5          |                 | Section 16.4.5.27 |
| 8C0h     | TXGCR6            |                 | Section 16.4.5.28 |
| 8C8h     | RXGCR6            |                 | Section 16.4.5.29 |
| 8CCh     | RXHPCRA6          |                 | Section 16.4.5.30 |
| 8D0h     | RXHPCRB6          |                 | Section 16.4.5.31 |
| 8E0h     | TXGCR7            |                 | Section 16.4.5.32 |
| 8E8h     | RXGCR7            |                 | Section 16.4.5.33 |
| 8ECh     | RXHPCRA7          |                 | Section 16.4.5.34 |
| 8F0h     | RXHPCRB7          |                 | Section 16.4.5.35 |
| 900h     | TXGCR8            |                 | Section 16.4.5.36 |
| 908h     | RXGCR8            |                 | Section 16.4.5.37 |
| 90Ch     | RXHPCRA8          |                 | Section 16.4.5.38 |
| 910h     | RXHPCRB8          |                 | Section 16.4.5.39 |
| 920h     | TXGCR9            |                 | Section 16.4.5.40 |
| 928h     | RXGCR9            |                 | Section 16.4.5.41 |
| 92Ch     | RXHPCRA9          |                 | Section 16.4.5.42 |
| 930h     | RXHPCRB9          |                 | Section 16.4.5.43 |
| 940h     | TXGCR10           |                 | Section 16.4.5.44 |
| 948h     | RXGCR10           |                 | Section 16.4.5.45 |
| 94Ch     | RXHPCRA10         |                 | Section 16.4.5.46 |
| 950h     | RXHPCRB10         |                 | Section 16.4.5.47 |
| 960h     | TXGCR11           |                 | Section 16.4.5.48 |
| 968h     | RXGCR11           |                 | Section 16.4.5.49 |
| 96Ch     | RXHPCRA11         |                 | Section 16.4.5.50 |
| 970h     | RXHPCRB11         |                 | Section 16.4.5.51 |
| 980h     | TXGCR12           |                 | Section 16.4.5.52 |
| 988h     | RXGCR12           |                 | Section 16.4.5.53 |
| 98Ch     | RXHPCRA12         |                 | Section 16.4.5.54 |
| 990h     | RXHPCRB12 TXGCR13 |                 | Section 16.4.5.55 |
| 9A0h     |                   |                 | Section 16.4.5.56 |

Table 16-163. CPPI\_DMA REGISTERS (continued)

| Offset   | Acronym   | Register Name   | Section            |
|----------|-----------|-----------------|--------------------|
| 9A8h     | RXGCR13   |                 | Section 16.4.5.57  |
| 9ACh     | RXHPCRA13 |                 | Section 16.4.5.58  |
| 9B0h     | RXHPCRB13 |                 | Section 16.4.5.59  |
| 9C0h     | TXGCR14   |                 | Section 16.4.5.60  |
| 9C8h     | RXGCR14   |                 | Section 16.4.5.61  |
| 9CCh     | RXHPCRA14 |                 | Section 16.4.5.62  |
| 9D0h     | RXHPCRB14 |                 | Section 16.4.5.63  |
| 9E0h     | TXGCR15   |                 | Section 16.4.5.64  |
| 9E8h     | RXGCR15   |                 | Section 16.4.5.65  |
| 9ECh     | RXHPCRA15 |                 | Section 16.4.5.66  |
| 9F0h     | RXHPCRB15 |                 | Section 16.4.5.67  |
| A00h     | TXGCR16   |                 | Section 16.4.5.68  |
| A08h     | RXGCR16   |                 | Section 16.4.5.69  |
| A0Ch     | RXHPCRA16 |                 | Section 16.4.5.70  |
| A10h     | RXHPCRB16 |                 | Section 16.4.5.71  |
| A20h     | TXGCR17   |                 | Section 16.4.5.72  |
| A28h     | RXGCR17   |                 | Section 16.4.5.73  |
| A2Ch     | RXHPCRA17 |                 | Section 16.4.5.74  |
| A30h     | RXHPCRB17 |                 | Section 16.4.5.75  |
| A40h     | TXGCR18   |                 | Section 16.4.5.76  |
| A48h     | RXGCR18   |                 | Section 16.4.5.77  |
| A4Ch     | RXHPCRA18 |                 | Section 16.4.5.78  |
| A50h     | RXHPCRB18 |                 | Section 16.4.5.79  |
| A60h     | TXGCR19   |                 | Section 16.4.5.80  |
| A68h     | RXGCR19   |                 | Section 16.4.5.81  |
| A6Ch     | RXHPCRA19 |                 | Section 16.4.5.82  |
| A70h     | RXHPCRB19 |                 | Section 16.4.5.83  |
| A80h     | TXGCR20   |                 | Section 16.4.5.84  |
| A88h     | RXGCR20   |                 | Section 16.4.5.85  |
| A8Ch     | RXHPCRA20 |                 | Section 16.4.5.86  |
| A90h     | RXHPCRB20 |                 | Section 16.4.5.87  |
| AA0h     | TXGCR21   |                 | Section 16.4.5.88  |
| AA8h     | RXGCR21   |                 | Section 16.4.5.89  |
| AACh     | RXHPCRA21 |                 | Section 16.4.5.90  |
| AB0h     | RXHPCRB21 |                 | Section 16.4.5.91  |
| AC0h     | TXGCR22   |                 | Section 16.4.5.92  |
| AC8h     | RXGCR22   |                 | Section 16.4.5.93  |
| ACCh     | RXHPCRA22 |                 | Section 16.4.5.94  |
| AD0h     | RXHPCRB22 |                 | Section 16.4.5.95  |
| AE0h     | TXGCR23   |                 | Section 16.4.5.96  |
| AE8h     | RXGCR23   |                 | Section 16.4.5.97  |
| AECh     | RXHPCRA23 |                 | Section 16.4.5.98  |
| AF0h     | RXHPCRB23 |                 | Section 16.4.5.99  |
| B00h     | TXGCR24   |                 | Section 16.4.5.100 |
| B08h     | RXGCR24   |                 | Section 16.4.5.101 |
| B0Ch     | RXHPCRA24 |                 | Section 16.4.5.102 |
| B10h     | RXHPCRB24 |                 | Section 16.4.5.103 |

<!-- image -->

<!-- image -->

Table 16-163. CPPI\_DMA REGISTERS (continued)

| Offset   | Acronym   | Register Name   | Section            |
|----------|-----------|-----------------|--------------------|
| B20h     | TXGCR25   |                 | Section 16.4.5.104 |
| B28h     | RXGCR25   |                 | Section 16.4.5.105 |
| B2Ch     | RXHPCRA25 |                 | Section 16.4.5.106 |
| B30h     | RXHPCRB25 |                 | Section 16.4.5.107 |
| B40h     | TXGCR26   |                 | Section 16.4.5.108 |
| B48h     | RXGCR26   |                 | Section 16.4.5.109 |
| B4Ch     | RXHPCRA26 |                 | Section 16.4.5.110 |
| B50h     | RXHPCRB26 |                 | Section 16.4.5.111 |
| B60h     | TXGCR27   |                 | Section 16.4.5.112 |
| B68h     | RXGCR27   |                 | Section 16.4.5.113 |
| B6Ch     | RXHPCRA27 |                 | Section 16.4.5.114 |
| B70h     | RXHPCRB27 |                 | Section 16.4.5.115 |
| B80h     | TXGCR28   |                 | Section 16.4.5.116 |
| B88h     | RXGCR28   |                 | Section 16.4.5.117 |
| B8Ch     | RXHPCRA28 |                 | Section 16.4.5.118 |
| B90h     | RXHPCRB28 |                 | Section 16.4.5.119 |
| BA0h     | TXGCR29   |                 | Section 16.4.5.120 |
| BA8h     | RXGCR29   |                 | Section 16.4.5.121 |
| BACh     | RXHPCRA29 |                 | Section 16.4.5.122 |
| BB0h     | RXHPCRB29 |                 | Section 16.4.5.123 |

## 16.4.5.1 DMAREVID Register (offset = 0h) [reset = 530901h]

DMAREVID is shown in Figure 16-152 and described in Table 16-164.

| Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   | Figure 16-152. DMAREVID Register   |
|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|------------------------------------|
| 31                                 | 30                                 | 29                                 | 28                                 | 27                                 | 26                                 | 25                                 | 24                                 |
| Reserved                           | Reserved                           | MODID                              | MODID                              | MODID                              | MODID                              | MODID                              | MODID                              |
|                                    |                                    | R-0                                | R-0                                | R-0                                | R-0                                | R-0                                | R-0                                |
| 23                                 | 22                                 | 21                                 | 20                                 | 19                                 | 18                                 | 17                                 | 16                                 |
| MODID                              | MODID                              | MODID                              | MODID                              | MODID                              | MODID                              | MODID                              | MODID                              |
| R-0                                | R-0                                | R-0                                | R-0                                | R-0                                | R-0                                | R-0                                | R-0                                |
| 15                                 | 14                                 | 13                                 | 12                                 | 11                                 | 10                                 | 9                                  | 8                                  |
| REVRTL                             | REVRTL                             | REVRTL                             | REVRTL                             | REVRTL                             | REVMAJ                             | REVMAJ                             | REVMAJ                             |
| R-0 R-0                            | R-0 R-0                            | R-0 R-0                            | R-0 R-0                            | R-0 R-0                            | R-0 R-0                            | R-0 R-0                            | R-0 R-0                            |
| 7                                  | 6                                  | 5                                  | 4                                  | 3                                  | 2                                  | 1                                  | 0                                  |
| REVMIN                             | REVMIN                             | REVMIN                             | REVMIN                             | REVMIN                             | REVMIN                             | REVMIN                             | REVMIN                             |

R-0

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-164. DMAREVID Register Field Descriptions

| Bit   | Field   | Type   |   Reset | Description                                   |
|-------|---------|--------|---------|-----------------------------------------------|
| 29-16 | MODID   | R-0    |       0 | Module ID field                               |
| 15-11 | REVRTL  | R-0    |       0 | RTL revision. Will vary depending on release. |
| 10-8  | REVMAJ  | R-0    |       0 | Major revision.                               |
| 7-0   | REVMIN  | R-0    |       0 | Minor revision. CPPI DMA Revision Register    |

<!-- image -->

<!-- image -->

## 16.4.5.2 TDFDQ Register (offset = 4h) [reset = 0h]

TDFDQ is shown in Figure 16-153 and described in Table 16-165.

| Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   | Figure 16-153. TDFDQ Register   |
|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|---------------------------------|
| 31                              | 30                              | 29                              | 28                              | 27                              | 26                              | 25                              | 24                              |
| Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        |
| 23                              | 22                              | 21                              | 20                              | 19                              | 18                              | 17                              | 16                              |
| Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        | Reserved                        |
| 15                              | 14                              | 13                              | 12                              | 11                              | 10                              | 9                               | 8                               |
| Reserved                        | Reserved                        | TD_DESC_QMGR                    | TD_DESC_QMGR                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    |
| R/W-0h R/W-0h                   | R/W-0h R/W-0h                   | R/W-0h R/W-0h                   | R/W-0h R/W-0h                   | R/W-0h R/W-0h                   | R/W-0h R/W-0h                   | R/W-0h R/W-0h                   | R/W-0h R/W-0h                   |
| 7                               | 6                               | 5                               | 4                               | 3                               | 2                               | 1                               | 0                               |
| TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    | TD_DESC_QNUM                    |

R/W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-165. TDFDQ Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                                                                                          |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 13-12 | TD_DESC_QMGR | R/W    | 0h      | This field controls which of the 4 Queue Managers the DMA will access in order to allocate a channel teardown descriptor from the teardown descriptor queue.                                         |
| 11-0  | TD_DESC_QNUM | R/W    | 0h      | This field controls which of the 2K queues in the indicated queue manager should be read in order to allocate channel teardown descriptors. CPPI DMA Teardown Free Descriptor Queue Control Register |

Universal Serial Bus (USB)

## 16.4.5.3 DMAEMU Register (offset = 8h) [reset = 0h]

DMAEMU is shown in Figure 16-154 and described in Table 16-166.

| Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   | Figure 16-154. DMAEMU Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | SOFT                             | FREE                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-166. DMAEMU Register Field Descriptions

|   Bit | Field   | Type   | Reset   | Description                                                                                           |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------|
|     1 | SOFT    | R/W    | 0h      | Control for emulation pause request 1 = Does not force emu_pause_req low 0 = Forces emu_pause_req low |
|     0 | FREE    | R/W    | 0h      | Enable for emulation suspend CPPI DMA Emulation Control Register                                      |

<!-- image -->

R/W-0h

R/W-0h

<!-- image -->

## 16.4.5.4 TXGCR0 Register (offset = 800h) [reset = 0h]

TXGCR0 is shown in Figure 16-155 and described in Table 16-167.

| Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   | Figure 16-155. TXGCR0 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-167. TXGCR0 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.5 RXGCR0 Register (offset = 808h) [reset = 0h]

RXGCR0 is shown in Figure 16-156 and described in Table 16-168.

## Figure 16-156. RXGCR0 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-168. RXGCR0 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-168. RXGCR0 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.6 RXHPCRA0 Register (offset = 80Ch) [reset = 0h]

RXHPCRA0 is shown in Figure 16-157 and described in Table 16-169.

## Figure 16-157. RXHPCRA0 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-169. RXHPCRA0 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.7 RXHPCRB0 Register (offset = 810h) [reset = 0h]

RXHPCRB0 is shown in Figure 16-158 and described in Table 16-170.

## Figure 16-158. RXHPCRB0 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-170. RXHPCRB0 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.8 TXGCR1 Register (offset = 820h) [reset = 0h]

TXGCR1 is shown in Figure 16-159 and described in Table 16-171.

| Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   | Figure 16-159. TXGCR1 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-171. TXGCR1 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.9 RXGCR1 Register (offset = 828h) [reset = 0h]

RXGCR1 is shown in Figure 16-160 and described in Table 16-172.

## Figure 16-160. RXGCR1 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-172. RXGCR1 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-172. RXGCR1 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.10 RXHPCRA1 Register (offset = 82Ch) [reset = 0h]

RXHPCRA1 is shown in Figure 16-161 and described in Table 16-173.

## Figure 16-161. RXHPCRA1 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-173. RXHPCRA1 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.11 RXHPCRB1 Register (offset = 830h) [reset = 0h]

RXHPCRB1 is shown in Figure 16-162 and described in Table 16-174.

## Figure 16-162. RXHPCRB1 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-174. RXHPCRB1 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.12 TXGCR2 Register (offset = 840h) [reset = 0h]

TXGCR2 is shown in Figure 16-163 and described in Table 16-175.

| Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   | Figure 16-163. TXGCR2 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-175. TXGCR2 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.13 RXGCR2 Register (offset = 848h) [reset = 0h]

RXGCR2 is shown in Figure 16-164 and described in Table 16-176.

## Figure 16-164. RXGCR2 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-176. RXGCR2 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-176. RXGCR2 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

## 16.4.5.14 RXHPCRA2 Register (offset = 84Ch) [reset = 0h]

RXHPCRA2 is shown in Figure 16-165 and described in Table 16-177.

## Figure 16-165. RXHPCRA2 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-177. RXHPCRA2 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.15 RXHPCRB2 Register (offset = 850h) [reset = 0h]

RXHPCRB2 is shown in Figure 16-166 and described in Table 16-178.

## Figure 16-166. RXHPCRB2 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-178. RXHPCRB2 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.16 TXGCR3 Register (offset = 860h) [reset = 0h]

TXGCR3 is shown in Figure 16-167 and described in Table 16-179.

| Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   | Figure 16-167. TXGCR3 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-179. TXGCR3 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.17 RXGCR3 Register (offset = 868h) [reset = 0h]

RXGCR3 is shown in Figure 16-168 and described in Table 16-180.

## Figure 16-168. RXGCR3 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-180. RXGCR3 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-180. RXGCR3 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.18 RXHPCRA3 Register (offset = 86Ch) [reset = 0h]

RXHPCRA3 is shown in Figure 16-169 and described in Table 16-181.

## Figure 16-169. RXHPCRA3 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-181. RXHPCRA3 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.19 RXHPCRB3 Register (offset = 870h) [reset = 0h]

RXHPCRB3 is shown in Figure 16-170 and described in Table 16-182.

## Figure 16-170. RXHPCRB3 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-182. RXHPCRB3 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.20 TXGCR4 Register (offset = 880h) [reset = 0h]

TXGCR4 is shown in Figure 16-171 and described in Table 16-183.

| Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   | Figure 16-171. TXGCR4 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-183. TXGCR4 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.21 RXGCR4 Register (offset = 888h) [reset = 0h]

RXGCR4 is shown in Figure 16-172 and described in Table 16-184.

## Figure 16-172. RXGCR4 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-184. RXGCR4 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-184. RXGCR4 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.22 RXHPCRA4 Register (offset = 88Ch) [reset = 0h]

RXHPCRA4 is shown in Figure 16-173 and described in Table 16-185.

## Figure 16-173. RXHPCRA4 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-185. RXHPCRA4 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.23 RXHPCRB4 Register (offset = 890h) [reset = 0h]

RXHPCRB4 is shown in Figure 16-174 and described in Table 16-186.

## Figure 16-174. RXHPCRB4 Register

| 31                         | 30                         | 29                         | 28                         | 27                | 26                | 25                | 24                |
|----------------------------|----------------------------|----------------------------|----------------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved RX_HOST_FDQ3_QMGR | Reserved RX_HOST_FDQ3_QMGR | Reserved RX_HOST_FDQ3_QMGR | Reserved RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                         | 22                         | 21                         | 20                         | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                         | 14                         | 13                         | 12                         | 11                | 10                | 9                 | 8                 |
| Reserved                   | Reserved                   | RX_HOST_FDQ2_QMGR          | RX_HOST_FDQ2_QMGR          | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                          | 6                          | 5                          | 4                          | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-186. RXHPCRB4 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.24 TXGCR5 Register (offset = 8A0h) [reset = 0h]

TXGCR5 is shown in Figure 16-175 and described in Table 16-187.

| Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   | Figure 16-175. TXGCR5 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-187. TXGCR5 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.25 RXGCR5 Register (offset = 8A8h) [reset = 0h]

RXGCR5 is shown in Figure 16-176 and described in Table 16-188.

## Figure 16-176. RXGCR5 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-188. RXGCR5 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

Table 16-188. RXGCR5 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.26 RXHPCRA5 Register (offset = 8ACh) [reset = 0h]

RXHPCRA5 is shown in Figure 16-177 and described in Table 16-189.

## Figure 16-177. RXHPCRA5 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h W-0h         | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-189. RXHPCRA5 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.27 RXHPCRB5 Register (offset = 8B0h) [reset = 0h]

RXHPCRB5 is shown in Figure 16-178 and described in Table 16-190.

## Figure 16-178. RXHPCRB5 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-190. RXHPCRB5 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.28 TXGCR6 Register (offset = 8C0h) [reset = 0h]

TXGCR6 is shown in Figure 16-179 and described in Table 16-191.

| Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   | Figure 16-179. TXGCR6 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-191. TXGCR6 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.29 RXGCR6 Register (offset = 8C8h) [reset = 0h]

RXGCR6 is shown in Figure 16-180 and described in Table 16-192.

## Figure 16-180. RXGCR6 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-192. RXGCR6 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-192. RXGCR6 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.30 RXHPCRA6 Register (offset = 8CCh) [reset = 0h]

RXHPCRA6 is shown in Figure 16-181 and described in Table 16-193.

## Figure 16-181. RXHPCRA6 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-193. RXHPCRA6 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.31 RXHPCRB6 Register (offset = 8D0h) [reset = 0h]

RXHPCRB6 is shown in Figure 16-182 and described in Table 16-194.

## Figure 16-182. RXHPCRB6 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-194. RXHPCRB6 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.32 TXGCR7 Register (offset = 8E0h) [reset = 0h]

TXGCR7 is shown in Figure 16-183 and described in Table 16-195.

| Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   | Figure 16-183. TXGCR7 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-195. TXGCR7 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.33 RXGCR7 Register (offset = 8E8h) [reset = 0h]

RXGCR7 is shown in Figure 16-184 and described in Table 16-196.

## Figure 16-184. RXGCR7 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-196. RXGCR7 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-196. RXGCR7 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.34 RXHPCRA7 Register (offset = 8ECh) [reset = 0h]

RXHPCRA7 is shown in Figure 16-185 and described in Table 16-197.

## Figure 16-185. RXHPCRA7 Register

| 31                         | 30                         | 29                         | 28                         | 27                | 26                | 25                | 24                |
|----------------------------|----------------------------|----------------------------|----------------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved RX_HOST_FDQ1_QMGR | Reserved RX_HOST_FDQ1_QMGR | Reserved RX_HOST_FDQ1_QMGR | Reserved RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                         | 22                         | 21                         | 20                         | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM          | RX_HOST_FDQ1_QNUM          | RX_HOST_FDQ1_QNUM          | RX_HOST_FDQ1_QNUM          | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                         | 14                         | 13                         | 12                         | 11                | 10                | 9                 | 8                 |
| Reserved                   | Reserved                   | RX_HOST_FDQ0_QMGR          | RX_HOST_FDQ0_QMGR          | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h W-0h                  | W-0h W-0h                  | W-0h W-0h                  | W-0h W-0h                  | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         | W-0h W-0h         |
| 7                          | 6                          | 5                          | 4                          | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM          | RX_HOST_FDQ0_QNUM          | RX_HOST_FDQ0_QNUM          | RX_HOST_FDQ0_QNUM          | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-197. RXHPCRA7 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.35 RXHPCRB7 Register (offset = 8F0h) [reset = 0h]

RXHPCRB7 is shown in Figure 16-186 and described in Table 16-198.

## Figure 16-186. RXHPCRB7 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-198. RXHPCRB7 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.36 TXGCR8 Register (offset = 900h) [reset = 0h]

TXGCR8 is shown in Figure 16-187 and described in Table 16-199.

| Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   | Figure 16-187. TXGCR8 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-199. TXGCR8 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.37 RXGCR8 Register (offset = 908h) [reset = 0h]

RXGCR8 is shown in Figure 16-188 and described in Table 16-200.

## Figure 16-188. RXGCR8 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-200. RXGCR8 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-200. RXGCR8 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.38 RXHPCRA8 Register (offset = 90Ch) [reset = 0h]

RXHPCRA8 is shown in Figure 16-189 and described in Table 16-201.

## Figure 16-189. RXHPCRA8 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-201. RXHPCRA8 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.39 RXHPCRB8 Register (offset = 910h) [reset = 0h]

RXHPCRB8 is shown in Figure 16-190 and described in Table 16-202.

## Figure 16-190. RXHPCRB8 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QMGR | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-202. RXHPCRB8 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.40 TXGCR9 Register (offset = 920h) [reset = 0h]

TXGCR9 is shown in Figure 16-191 and described in Table 16-203.

| Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   | Figure 16-191. TXGCR9 Register   |
|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|----------------------------------|
| 31                               | 30                               | 29                               | 28                               | 27                               | 26                               | 25                               | 24                               |
| TX_ENABLE                        | TX_TEARDOW N                     | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| R/W-0h                           | R/W-0h                           |                                  |                                  |                                  |                                  |                                  |                                  |
| 23                               | 22                               | 21                               | 20                               | 19                               | 18                               | 17                               | 16                               |
| Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         | Reserved                         |
| 15                               | 14                               | 13                               | 12                               | 11                               | 10                               | 9                                | 8                                |
| Reserved                         | Reserved                         | TX_DEFAULT_QMGR                  | TX_DEFAULT_QMGR                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |
| W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        | W-0h W-0h                        |
| 7                                | 6                                | 5                                | 4                                | 3                                | 2                                | 1                                | 0                                |
| TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  | TX_DEFAULT_QNUM                  |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-203. TXGCR9 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.41 RXGCR9 Register (offset = 928h) [reset = 0h]

RXGCR9 is shown in Figure 16-192 and described in Table 16-204.

## Figure 16-192. RXGCR9 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-204. RXGCR9 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-204. RXGCR9 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.42 RXHPCRA9 Register (offset = 92Ch) [reset = 0h]

RXHPCRA9 is shown in Figure 16-193 and described in Table 16-205.

## Figure 16-193. RXHPCRA9 Register

| 31                | 30                | 29                | 28                | 27                | 26                | 25                | 24                |
|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved          | Reserved          | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QMGR | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                | 22                | 21                | 20                | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM | RX_HOST_FDQ1_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                | 14                | 13                | 12                | 11                | 10                | 9                 | 8                 |
| Reserved          | Reserved          | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QMGR | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |
| W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                 | 6                 | 5                 | 4                 | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM | RX_HOST_FDQ0_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-205. RXHPCRA9 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.43 RXHPCRB9 Register (offset = 930h) [reset = 0h]

RXHPCRB9 is shown in Figure 16-194 and described in Table 16-206.

## Figure 16-194. RXHPCRB9 Register

| 31                         | 30                         | 29                         | 28                         | 27                | 26                | 25                | 24                |
|----------------------------|----------------------------|----------------------------|----------------------------|-------------------|-------------------|-------------------|-------------------|
| Reserved RX_HOST_FDQ3_QMGR | Reserved RX_HOST_FDQ3_QMGR | Reserved RX_HOST_FDQ3_QMGR | Reserved RX_HOST_FDQ3_QMGR | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 23                         | 22                         | 21                         | 20                         | 19                | 18                | 17                | 16                |
| RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM          | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM | RX_HOST_FDQ3_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 15                         | 14                         | 13                         | 12                         | 11                | 10                | 9                 | 8                 |
| Reserved                   | Reserved                   | RX_HOST_FDQ2_QMGR          | RX_HOST_FDQ2_QMGR          | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |
| W-0h                       | W-0h                       | W-0h                       | W-0h                       | W-0h              | W-0h              | W-0h              | W-0h              |
| 7                          | 6                          | 5                          | 4                          | 3                 | 2                 | 1                 | 0                 |
| RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM          | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM | RX_HOST_FDQ2_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-206. RXHPCRB9 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.44 TXGCR10 Register (offset = 940h) [reset = 0h]

TXGCR10 is shown in Figure 16-195 and described in Table 16-207.

| Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   | Figure 16-195. TXGCR10 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-207. TXGCR10 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.45 RXGCR10 Register (offset = 948h) [reset = 0h]

RXGCR10 is shown in Figure 16-196 and described in Table 16-208.

## Figure 16-196. RXGCR10 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-208. RXGCR10 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-208. RXGCR10 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.46 RXHPCRA10 Register (offset = 94Ch) [reset = 0h]

RXHPCRA10 is shown in Figure 16-197 and described in Table 16-209.

| Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   | Figure 16-197. RXHPCRA10 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h W-0h                           | W-0h W-0h                           | W-0h W-0h                           | W-0h W-0h                           | W-0h W-0h                           | W-0h W-0h                           | W-0h W-0h                           | W-0h W-0h                           |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-209. RXHPCRA10 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.47 RXHPCRB10 Register (offset = 950h) [reset = 0h]

RXHPCRB10 is shown in Figure 16-198 and described in Table 16-210.

| Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   | Figure 16-198. RXHPCRB10 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-210. RXHPCRB10 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.48 TXGCR11 Register (offset = 960h) [reset = 0h]

TXGCR11 is shown in Figure 16-199 and described in Table 16-211.

| Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   | Figure 16-199. TXGCR11 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-211. TXGCR11 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.49 RXGCR11 Register (offset = 968h) [reset = 0h]

RXGCR11 is shown in Figure 16-200 and described in Table 16-212.

## Figure 16-200. RXGCR11 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-212. RXGCR11 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-212. RXGCR11 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.50 RXHPCRA11 Register (offset = 96Ch) [reset = 0h]

RXHPCRA11 is shown in Figure 16-201 and described in Table 16-213.

| Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   | Figure 16-201. RXHPCRA11 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-213. RXHPCRA11 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.51 RXHPCRB11 Register (offset = 970h) [reset = 0h]

RXHPCRB11 is shown in Figure 16-202 and described in Table 16-214.

| Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   | Figure 16-202. RXHPCRB11 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-214. RXHPCRB11 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.52 TXGCR12 Register (offset = 980h) [reset = 0h]

TXGCR12 is shown in Figure 16-203 and described in Table 16-215.

| Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   | Figure 16-203. TXGCR12 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-215. TXGCR12 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.53 RXGCR12 Register (offset = 988h) [reset = 0h]

RXGCR12 is shown in Figure 16-204 and described in Table 16-216.

## Figure 16-204. RXGCR12 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h W-0h            | W-0h W-0h            | W-0h W-0h          | W-0h W-0h          | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-216. RXGCR12 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-216. RXGCR12 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.54 RXHPCRA12 Register (offset = 98Ch) [reset = 0h]

RXHPCRA12 is shown in Figure 16-205 and described in Table 16-217.

| Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   | Figure 16-205. RXHPCRA12 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-217. RXHPCRA12 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.55 RXHPCRB12 Register (offset = 990h) [reset = 0h]

RXHPCRB12 is shown in Figure 16-206 and described in Table 16-218.

| Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   | Figure 16-206. RXHPCRB12 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-218. RXHPCRB12 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.56 TXGCR13 Register (offset = 9A0h) [reset = 0h]

TXGCR13 is shown in Figure 16-207 and described in Table 16-219.

| Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   | Figure 16-207. TXGCR13 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-219. TXGCR13 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.57 RXGCR13 Register (offset = 9A8h) [reset = 0h]

RXGCR13 is shown in Figure 16-208 and described in Table 16-220.

## Figure 16-208. RXGCR13 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-220. RXGCR13 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-220. RXGCR13 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.58 RXHPCRA13 Register (offset = 9ACh) [reset = 0h]

RXHPCRA13 is shown in Figure 16-209 and described in Table 16-221.

| Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   | Figure 16-209. RXHPCRA13 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-221. RXHPCRA13 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.59 RXHPCRB13 Register (offset = 9B0h) [reset = 0h]

RXHPCRB13 is shown in Figure 16-210 and described in Table 16-222.

| Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   | Figure 16-210. RXHPCRB13 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-222. RXHPCRB13 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.60 TXGCR14 Register (offset = 9C0h) [reset = 0h]

TXGCR14 is shown in Figure 16-211 and described in Table 16-223.

| Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   | Figure 16-211. TXGCR14 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-223. TXGCR14 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.61 RXGCR14 Register (offset = 9C8h) [reset = 0h]

RXGCR14 is shown in Figure 16-212 and described in Table 16-224.

## Figure 16-212. RXGCR14 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-224. RXGCR14 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-224. RXGCR14 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

## 16.4.5.62 RXHPCRA14 Register (offset = 9CCh) [reset = 0h]

RXHPCRA14 is shown in Figure 16-213 and described in Table 16-225.

| Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   | Figure 16-213. RXHPCRA14 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-225. RXHPCRA14 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.63 RXHPCRB14 Register (offset = 9D0h) [reset = 0h]

RXHPCRB14 is shown in Figure 16-214 and described in Table 16-226.

| Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   | Figure 16-214. RXHPCRB14 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-226. RXHPCRB14 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.64 TXGCR15 Register (offset = 9E0h) [reset = 0h]

TXGCR15 is shown in Figure 16-215 and described in Table 16-227.

| Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   | Figure 16-215. TXGCR15 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-227. TXGCR15 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.65 RXGCR15 Register (offset = 9E8h) [reset = 0h]

RXGCR15 is shown in Figure 16-216 and described in Table 16-228.

## Figure 16-216. RXGCR15 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-228. RXGCR15 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-228. RXGCR15 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.66 RXHPCRA15 Register (offset = 9ECh) [reset = 0h]

RXHPCRA15 is shown in Figure 16-217 and described in Table 16-229.

| Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   | Figure 16-217. RXHPCRA15 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-229. RXHPCRA15 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.67 RXHPCRB15 Register (offset = 9F0h) [reset = 0h]

RXHPCRB15 is shown in Figure 16-218 and described in Table 16-230.

| Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   | Figure 16-218. RXHPCRB15 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-230. RXHPCRB15 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.68 TXGCR16 Register (offset = A00h) [reset = 0h]

TXGCR16 is shown in Figure 16-219 and described in Table 16-231.

| Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   | Figure 16-219. TXGCR16 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-231. TXGCR16 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.69 RXGCR16 Register (offset = A08h) [reset = 0h]

RXGCR16 is shown in Figure 16-220 and described in Table 16-232.

## Figure 16-220. RXGCR16 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           |                    |                    |                    |                    | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-232. RXGCR16 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-232. RXGCR16 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.70 RXHPCRA16 Register (offset = A0Ch) [reset = 0h]

RXHPCRA16 is shown in Figure 16-221 and described in Table 16-233.

| Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   | Figure 16-221. RXHPCRA16 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-233. RXHPCRA16 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.71 RXHPCRB16 Register (offset = A10h) [reset = 0h]

RXHPCRB16 is shown in Figure 16-222 and described in Table 16-234.

| Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   | Figure 16-222. RXHPCRB16 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-234. RXHPCRB16 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.72 TXGCR17 Register (offset = A20h) [reset = 0h]

TXGCR17 is shown in Figure 16-223 and described in Table 16-235.

| Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   | Figure 16-223. TXGCR17 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-235. TXGCR17 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.73 RXGCR17 Register (offset = A28h) [reset = 0h]

RXGCR17 is shown in Figure 16-224 and described in Table 16-236.

| Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   | Figure 16-224. RXGCR17 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-236. RXGCR17 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-236. RXGCR17 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.74 RXHPCRA17 Register (offset = A2Ch) [reset = 0h]

RXHPCRA17 is shown in Figure 16-225 and described in Table 16-237.

| Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   | Figure 16-225. RXHPCRA17 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-237. RXHPCRA17 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.75 RXHPCRB17 Register (offset = A30h) [reset = 0h]

RXHPCRB17 is shown in Figure 16-226 and described in Table 16-238.

| Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   | Figure 16-226. RXHPCRB17 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-238. RXHPCRB17 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.76 TXGCR18 Register (offset = A40h) [reset = 0h]

TXGCR18 is shown in Figure 16-227 and described in Table 16-239.

| Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   | Figure 16-227. TXGCR18 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-239. TXGCR18 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.77 RXGCR18 Register (offset = A48h) [reset = 0h]

RXGCR18 is shown in Figure 16-228 and described in Table 16-240.

## Figure 16-228. RXGCR18 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-240. RXGCR18 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-240. RXGCR18 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.78 RXHPCRA18 Register (offset = A4Ch) [reset = 0h]

RXHPCRA18 is shown in Figure 16-229 and described in Table 16-241.

| Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   | Figure 16-229. RXHPCRA18 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-241. RXHPCRA18 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.79 RXHPCRB18 Register (offset = A50h) [reset = 0h]

RXHPCRB18 is shown in Figure 16-230 and described in Table 16-242.

| Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   | Figure 16-230. RXHPCRB18 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-242. RXHPCRB18 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.80 TXGCR19 Register (offset = A60h) [reset = 0h]

TXGCR19 is shown in Figure 16-231 and described in Table 16-243.

| Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   | Figure 16-231. TXGCR19 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-243. TXGCR19 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.81 RXGCR19 Register (offset = A68h) [reset = 0h]

RXGCR19 is shown in Figure 16-232 and described in Table 16-244.

## Figure 16-232. RXGCR19 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-244. RXGCR19 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-244. RXGCR19 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.82 RXHPCRA19 Register (offset = A6Ch) [reset = 0h]

RXHPCRA19 is shown in Figure 16-233 and described in Table 16-245.

| Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   | Figure 16-233. RXHPCRA19 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-245. RXHPCRA19 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.83 RXHPCRB19 Register (offset = A70h) [reset = 0h]

RXHPCRB19 is shown in Figure 16-234 and described in Table 16-246.

| Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   | Figure 16-234. RXHPCRB19 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-246. RXHPCRB19 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.84 TXGCR20 Register (offset = A80h) [reset = 0h]

TXGCR20 is shown in Figure 16-235 and described in Table 16-247.

| Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   | Figure 16-235. TXGCR20 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-247. TXGCR20 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.85 RXGCR20 Register (offset = A88h) [reset = 0h]

RXGCR20 is shown in Figure 16-236 and described in Table 16-248.

## Figure 16-236. RXGCR20 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-248. RXGCR20 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-248. RXGCR20 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.86 RXHPCRA20 Register (offset = A8Ch) [reset = 0h]

RXHPCRA20 is shown in Figure 16-237 and described in Table 16-249.

| Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   | Figure 16-237. RXHPCRA20 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-249. RXHPCRA20 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.87 RXHPCRB20 Register (offset = A90h) [reset = 0h]

RXHPCRB20 is shown in Figure 16-238 and described in Table 16-250.

| Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   | Figure 16-238. RXHPCRB20 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-250. RXHPCRB20 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.88 TXGCR21 Register (offset = AA0h) [reset = 0h]

TXGCR21 is shown in Figure 16-239 and described in Table 16-251.

| Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   | Figure 16-239. TXGCR21 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-251. TXGCR21 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.89 RXGCR21 Register (offset = AA8h) [reset = 0h]

RXGCR21 is shown in Figure 16-240 and described in Table 16-252.

| Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   | Figure 16-240. RXGCR21 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-252. RXGCR21 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-252. RXGCR21 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.90 RXHPCRA21 Register (offset = AACh) [reset = 0h]

RXHPCRA21 is shown in Figure 16-241 and described in Table 16-253.

| Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   | Figure 16-241. RXHPCRA21 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-253. RXHPCRA21 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.91 RXHPCRB21 Register (offset = AB0h) [reset = 0h]

RXHPCRB21 is shown in Figure 16-242 and described in Table 16-254.

| Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   | Figure 16-242. RXHPCRB21 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-254. RXHPCRB21 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.92 TXGCR22 Register (offset = AC0h) [reset = 0h]

TXGCR22 is shown in Figure 16-243 and described in Table 16-255.

| Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   | Figure 16-243. TXGCR22 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-255. TXGCR22 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.93 RXGCR22 Register (offset = AC8h) [reset = 0h]

RXGCR22 is shown in Figure 16-244 and described in Table 16-256.

| Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   | Figure 16-244. RXGCR22 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-256. RXGCR22 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-256. RXGCR22 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

## 16.4.5.94 RXHPCRA22 Register (offset = ACCh) [reset = 0h]

RXHPCRA22 is shown in Figure 16-245 and described in Table 16-257.

| Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   | Figure 16-245. RXHPCRA22 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-257. RXHPCRA22 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.95 RXHPCRB22 Register (offset = AD0h) [reset = 0h]

RXHPCRB22 is shown in Figure 16-246 and described in Table 16-258.

| Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   | Figure 16-246. RXHPCRB22 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-258. RXHPCRB22 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.96 TXGCR23 Register (offset = AE0h) [reset = 0h]

TXGCR23 is shown in Figure 16-247 and described in Table 16-259.

| Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   | Figure 16-247. TXGCR23 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-259. TXGCR23 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.97 RXGCR23 Register (offset = AE8h) [reset = 0h]

RXGCR23 is shown in Figure 16-248 and described in Table 16-260.

| Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   | Figure 16-248. RXGCR23 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-260. RXGCR23 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-260. RXGCR23 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.98 RXHPCRA23 Register (offset = AECh) [reset = 0h]

RXHPCRA23 is shown in Figure 16-249 and described in Table 16-261.

| Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   | Figure 16-249. RXHPCRA23 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-261. RXHPCRA23 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.99 RXHPCRB23 Register (offset = AF0h) [reset = 0h]

RXHPCRB23 is shown in Figure 16-250 and described in Table 16-262.

| Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   | Figure 16-250. RXHPCRB23 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-262. RXHPCRB23 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.100 TXGCR24 Register (offset = B00h) [reset = 0h]

TXGCR24 is shown in Figure 16-251 and described in Table 16-263.

| Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   | Figure 16-251. TXGCR24 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-263. TXGCR24 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.101 RXGCR24 Register (offset = B08h) [reset = 0h]

RXGCR24 is shown in Figure 16-252 and described in Table 16-264.

| Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   | Figure 16-252. RXGCR24 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-264. RXGCR24 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-264. RXGCR24 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.102 RXHPCRA24 Register (offset = B0Ch) [reset = 0h]

RXHPCRA24 is shown in Figure 16-253 and described in Table 16-265.

| Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   | Figure 16-253. RXHPCRA24 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-265. RXHPCRA24 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.103 RXHPCRB24 Register (offset = B10h) [reset = 0h]

RXHPCRB24 is shown in Figure 16-254 and described in Table 16-266.

| Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   | Figure 16-254. RXHPCRB24 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-266. RXHPCRB24 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.104 TXGCR25 Register (offset = B20h) [reset = 0h]

TXGCR25 is shown in Figure 16-255 and described in Table 16-267.

| Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   | Figure 16-255. TXGCR25 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-267. TXGCR25 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.105 RXGCR25 Register (offset = B28h) [reset = 0h]

RXGCR25 is shown in Figure 16-256 and described in Table 16-268.

| Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   | Figure 16-256. RXGCR25 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-268. RXGCR25 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-268. RXGCR25 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.106 RXHPCRA25 Register (offset = B2Ch) [reset = 0h]

RXHPCRA25 is shown in Figure 16-257 and described in Table 16-269.

| Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   | Figure 16-257. RXHPCRA25 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-269. RXHPCRA25 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.107 RXHPCRB25 Register (offset = B30h) [reset = 0h]

RXHPCRB25 is shown in Figure 16-258 and described in Table 16-270.

| Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   | Figure 16-258. RXHPCRB25 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-270. RXHPCRB25 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.108 TXGCR26 Register (offset = B40h) [reset = 0h]

TXGCR26 is shown in Figure 16-259 and described in Table 16-271.

| Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   | Figure 16-259. TXGCR26 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-271. TXGCR26 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.109 RXGCR26 Register (offset = B48h) [reset = 0h]

RXGCR26 is shown in Figure 16-260 and described in Table 16-272.

## Figure 16-260. RXGCR26 Register

| 31                   | 30                   | 29                 | 28                 | 27                 | 26                 | 25                 | 24                 |
|----------------------|----------------------|--------------------|--------------------|--------------------|--------------------|--------------------|--------------------|
| RX_ENABLE            | RX_TEARDOW N         | RX_PAUSE           | Reserved           | Reserved           | Reserved           | Reserved           | RX_ERROR_H ANDLING |
| R/W-0h               | R/W-0h               | R/W-0h             |                    |                    |                    |                    | W-0h               |
| 23                   | 22                   | 21                 | 20                 | 19                 | 18                 | 17                 | 16                 |
| RX_SOP_OFFSET        | RX_SOP_OFFSET        | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      | RX_SOP_OFFSET      |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 15                   | 14                   | 13                 | 12                 | 11                 | 10                 | 9                  | 8                  |
| RX_DEFAULT_DESC_TYPE | RX_DEFAULT_DESC_TYPE | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QMGR | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |
| W-0h                 | W-0h                 | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               | W-0h               |
| 7                    | 6                    | 5                  | 4                  | 3                  | 2                  | 1                  | 0                  |
| RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM   | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM | RX_DEFAULT_RQ_QNUM |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-272. RXGCR26 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-272. RXGCR26 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.110 RXHPCRA26 Register (offset = B4Ch) [reset = 0h]

RXHPCRA26 is shown in Figure 16-261 and described in Table 16-273.

| Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   | Figure 16-261. RXHPCRA26 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | Reserved RX_HOST_FDQ1_QMGR          | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-273. RXHPCRA26 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.111 RXHPCRB26 Register (offset = B50h) [reset = 0h]

RXHPCRB26 is shown in Figure 16-262 and described in Table 16-274.

| Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   | Figure 16-262. RXHPCRB26 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | Reserved RX_HOST_FDQ3_QMGR          | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-274. RXHPCRB26 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.112 TXGCR27 Register (offset = B60h) [reset = 0h]

TXGCR27 is shown in Figure 16-263 and described in Table 16-275.

| Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   | Figure 16-263. TXGCR27 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-275. TXGCR27 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.113 RXGCR27 Register (offset = B68h) [reset = 0h]

RXGCR27 is shown in Figure 16-264 and described in Table 16-276.

| Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   | Figure 16-264. RXGCR27 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          |                                   | Reserved                          | Reserved                          |                                   | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-276. RXGCR27 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-276. RXGCR27 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.114 RXHPCRA27 Register (offset = B6Ch) [reset = 0h]

RXHPCRA27 is shown in Figure 16-265 and described in Table 16-277.

| Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   | Figure 16-265. RXHPCRA27 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-277. RXHPCRA27 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)

## 16.4.5.115 RXHPCRB27 Register (offset = B70h) [reset = 0h]

RXHPCRB27 is shown in Figure 16-266 and described in Table 16-278.

| Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   | Figure 16-266. RXHPCRB27 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-278. RXHPCRB27 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

<!-- image -->

<!-- image -->

## 16.4.5.116 TXGCR28 Register (offset = B80h) [reset = 0h]

TXGCR28 is shown in Figure 16-267 and described in Table 16-279.

| Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   | Figure 16-267. TXGCR28 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-279. TXGCR28 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.117 RXGCR28 Register (offset = B88h) [reset = 0h]

RXGCR28 is shown in Figure 16-268 and described in Table 16-280.

| Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   | Figure 16-268. RXGCR28 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-280. RXGCR28 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

<!-- image -->

<!-- image -->

## Table 16-280. RXGCR28 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

Universal Serial Bus (USB)

## 16.4.5.118 RXHPCRA28 Register (offset = B8Ch) [reset = 0h]

RXHPCRA28 is shown in Figure 16-269 and described in Table 16-281.

| Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   | Figure 16-269. RXHPCRA28 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-281. RXHPCRA28 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

<!-- image -->

<!-- image -->

## 16.4.5.119 RXHPCRB28 Register (offset = B90h) [reset = 0h]

RXHPCRB28 is shown in Figure 16-270 and described in Table 16-282.

| Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   | Figure 16-270. RXHPCRB28 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QMGR                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   | RX_HOST_FDQ3_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QMGR                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   | RX_HOST_FDQ2_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-282. RXHPCRB28 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ3_QMGR | W      | 0h      | This field specifies which Manager should be used for the 4th or later Rx buffers in a host type packet                                                                           |
| 27-16 | RX_HOST_FDQ3_QNUM | W      | 0h      | This field specifies which Free Descriptor Queue should be used for the 4th or later Rx buffers in a host type packet                                                             |
| 13-12 | RX_HOST_FDQ2_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the 3rd Rx buffer in a host type packet                                                                              |
| 11-0  | RX_HOST_FDQ2_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 3rd Rx buffer in a host type packet Table 101 -Rx Channel N Host Packet Configuration Registers B |

Universal Serial Bus (USB)

## 16.4.5.120 TXGCR29 Register (offset = BA0h) [reset = 0h]

TXGCR29 is shown in Figure 16-271 and described in Table 16-283.

| Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   | Figure 16-271. TXGCR29 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| TX_ENABLE                         | TX_TEARDOW N                      | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   |                                   |                                   |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| Reserved                          | Reserved                          | TX_DEFAULT_QMGR                   | TX_DEFAULT_QMGR                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |
| W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         | W-0h W-0h                         |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   | TX_DEFAULT_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-283. TXGCR29 Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                                                                           |
|-------|-----------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | TX_ENABLE       | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                            |
| 30    | TX_TEARDOWN     | R/W    | 0h      | Setting this bit will request the channel to be torn down. This field will remain set after a channel teardown is complete.                                                                           |
| 13-12 | TX_DEFAULT_QMGR | W      | 0h      | This field controls the default queue manager number that will be used to queue teardown descriptors back to the host.                                                                                |
| 11-0  | TX_DEFAULT_QNUM | W      | 0h      | This field controls the default queue number within the selected queue manager onto which teardown descriptors will be queued back to the host. Table 98 -Tx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

www.ti.com

## 16.4.5.121 RXGCR29 Register (offset = BA8h) [reset = 0h]

RXGCR29 is shown in Figure 16-272 and described in Table 16-284.

| Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   | Figure 16-272. RXGCR29 Register   |
|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|
| 31                                | 30                                | 29                                | 28                                | 27                                | 26                                | 25                                | 24                                |
| RX_ENABLE                         | RX_TEARDOW N                      | RX_PAUSE                          | Reserved                          | Reserved                          | Reserved                          | Reserved                          | RX_ERROR_H ANDLING                |
| R/W-0h                            | R/W-0h                            | R/W-0h                            |                                   |                                   |                                   |                                   | W-0h                              |
| 23                                | 22                                | 21                                | 20                                | 19                                | 18                                | 17                                | 16                                |
| RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     | RX_SOP_OFFSET                     |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 15                                | 14                                | 13                                | 12                                | 11                                | 10                                | 9                                 | 8                                 |
| RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_DESC_TYPE              | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QMGR                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |
| W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              | W-0h                              |
| 7                                 | 6                                 | 5                                 | 4                                 | 3                                 | 2                                 | 1                                 | 0                                 |
| RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                | RX_DEFAULT_RQ_QNUM                |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 16-284. RXGCR29 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|-------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31    | RX_ENABLE         | R/W    | 0h      | This field enables or disables the channel 0 = channel is disabled 1 = channel is enabled This field will be cleared after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| 30    | RX_TEARDOWN       | R/W    | 0h      | This field indicates whether or not an Rx teardown operation is complete. This field should be cleared when a channel is initialized. This field will be set after a channel teardown is complete.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 29    | RX_PAUSE          | R/W    | 0h      | Setting this bit causes the CPPI DMA to be suspended for rx channels. If a pause is being requested and the channel is not in a packet then drop the credit.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 24    | RX_ERROR_HANDLING | W      | 0h      | This bit controls the error handling mode for the channel and is only used when channel errors (i.e. descriptor or buffer starvation occurs): 0 = Starvation errors result in dropping packet and reclaiming any used descriptor or buffer resources back to the original queues/pools they were allocated to 1 = Starvation errors result in subsequent re-try of the descriptor allocation operation. In this mode, the DMA will return to the IDLE state without saving it's internal operational state back to the internal state RAM and without issuing an advance operation on the FIFO interface. This results in the DMA re-initiating the FIFO block transfer at a later time with the intention that additional free buffers and/or descriptors will have been added. Regardless of the value of this bit, the DMA will assert the cdma_rx_sof_overrun (for SOP) or cdma_rx_mof_overrun (for non- SOP) when |
| 23-16 | RX_SOP_OFFSET     | W      | 0h      | This field specifies the number of bytes that are to be skipped in the SOP buffer before beginning to write the payload. This value must be less than the minimum size of a buffer in the system. Valid values are 0 - 255 bytes.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |

Universal Serial Bus (USB)

## Table 16-284. RXGCR29 Register Field Descriptions (continued)

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                                                                        |
|-------|-----------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 15-14 | RX_DEFAULT_DESC_TY PE | W      | 0h      | This field indicates the default descriptor type to use: 0 = Reserved 1 = Host 2 = Reserved 3 = Reserved The actual descriptor type that will be used for reception can be overridden by information provided in the CPPI FIFO data block.                         |
| 13-12 | RX_DEFAULT_RQ_QMG R   | W      | 0h      | This field indicates the default receive queue manager that this channel should use. The actual receive queue manager index can be overridden by information provided in the CPPI FIFO data block.                                                                 |
| 11-0  | RX_DEFAULT_RQ_QNU M   | W      | 0h      | This field indicates the default receive queue that this channel should use. The actual receive queue that will be used for reception can be overridden by information provided in the CPPI FIFO data block. Table 99 -Rx Channel N Global Configuration Registers |

<!-- image -->

<!-- image -->

## 16.4.5.122 RXHPCRA29 Register (offset = BACh) [reset = 0h]

RXHPCRA29 is shown in Figure 16-273 and described in Table 16-285.

| Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   | Figure 16-273. RXHPCRA29 Register   |
|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|-------------------------------------|
| 31                                  | 30                                  | 29                                  | 28                                  | 27                                  | 26                                  | 25                                  | 24                                  |
| Reserved                            | Reserved                            | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QMGR                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 23                                  | 22                                  | 21                                  | 20                                  | 19                                  | 18                                  | 17                                  | 16                                  |
| RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   | RX_HOST_FDQ1_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 15                                  | 14                                  | 13                                  | 12                                  | 11                                  | 10                                  | 9                                   | 8                                   |
| Reserved                            | Reserved                            | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QMGR                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |
| W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                | W-0h                                |
| 7                                   | 6                                   | 5                                   | 4                                   | 3                                   | 2                                   | 1                                   | 0                                   |
| RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   | RX_HOST_FDQ0_QNUM                   |

W-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 16-285. RXHPCRA29 Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                       |
|-------|-------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 29-28 | RX_HOST_FDQ1_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 27-16 | RX_HOST_FDQ1_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 2nd Rx buffer in a host type packet                                                               |
| 13-12 | RX_HOST_FDQ0_QMGR | W      | 0h      | This field specifies which Buffer Manager should be used for the second Rx buffer in a host type packet.                                                                          |
| 11-0  | RX_HOST_FDQ0_QNUM | W      | 0h      | This field specifies which Free Descriptor / Buffer Pool should be used for the 1st Rx buffer in a host type packet Table 100 -Rx Channel N Host Packet Configuration Registers A |

Universal Serial Bus (USB)