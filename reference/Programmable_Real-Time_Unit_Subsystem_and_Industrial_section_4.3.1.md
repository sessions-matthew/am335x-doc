## 4.3 PRU-ICSS Memory Map Overview

The PRU-ICSS comprises various distinct addressable regions that are mapped to both a local and global memory map. The local memory maps are maps with respect to the PRU core point of view. The global memory maps are maps with respect to the Host point of view, but can also be accessed by the PRUICSS.

## 4.3.1 Local Memory Map

The PRU-ICSS memory map is documented in Table 4-6 (Instruction Space) and in Table 4-7 (Data Space). Note that these two memory maps are implemented inside the PRU-ICSS and are local to the components of the PRU-ICSS.

## 4.3.1.1 Local Instruction Memory Map

Each PRU core has a dedicated 8KB of Instruction Memory which needs to be initialized by a Host processor before the PRU executes instructions. This region is only accessible to masters via the interface/ OCP slave port when the PRU is not running.

Table 4-6. Local Instruction Memory Map

| Start Address   | PRU0     | PRU1     |
|-----------------|----------|----------|
| 0x0000_0000     | 8KB IRAM | 8KB IRAM |

## 4.3.1.2 Local Data Memory Map

The local data memory map in Table 4-7 allows each PRU core to access the PRU-ICSS addressable regions and the external host's memory map.

The PRU accesses the external Host memory map through the Interface/OCP Master port (System OCP\_HP0/1) starting at address 0x0008\_0000. By default, memory addresses between 0x0000\_0000 -0x0007\_FFFF will correspond to the PRU-ICSS local address in Table 4-7. To access an address between 0x0000\_0000-0x0007\_FFFF of the external Host map, the address offset of -0x0008\_0000 feature is enabled through the PMAO register of the PRU-ICSS CFG register space.

Table 4-7. Local Data Memory Map

| Start Address   | PRU0                   | PRU1                   |
|-----------------|------------------------|------------------------|
| 0x0000_0000     | Data 8KB RAM 0 (1)     | Data 8KB RAM 1 (1)     |
| 0x0000_2000     | Data 8KB RAM 1 (1)     | Data 8KB RAM 0 (1)     |
| 0x0001_0000     | Shared Data 12KB RAM 2 | Shared Data 12KB RAM 2 |
| 0x0002_0000     | INTC                   | INTC                   |
| 0x0002_2000     | PRU0 Control           | PRU0 Control           |
| 0x0002_2400     | Reserved               | Reserved               |
| 0x0002_4000     | PRU1 Control           | PRU1 Control           |
| 0x0002_4400     | Reserved               | Reserved               |
| 0x0002_6000     | CFG                    | CFG                    |
| 0x0002_8000     | UART 0                 | UART 0                 |
| 0x0002_A000     | Reserved               | Reserved               |
| 0x0002_C000     | Reserved               | Reserved               |
| 0x0002_E000     | IEP                    | IEP                    |
| 0x0003_0000     | eCAP 0                 | eCAP 0                 |
| 0x0003_2000     | MII_RT_CFG             | MII_RT_CFG             |
| 0x0003_2400     | MII_MDIO               | MII_MDIO               |
| 0x0003_4000     | Reserved               | Reserved               |

(1) Data RAM0 is intended to be the primary data memory for PRU0, as is Data RAM1 for PRU1. However, both PRU cores can access Data RAM0 and Data RAM1 to pass information between PRUs. Each PRU core accesses their intended Data RAM at address 0x0000\_0000 and the other Data RAM at address 0x0000\_2000.

<!-- image -->