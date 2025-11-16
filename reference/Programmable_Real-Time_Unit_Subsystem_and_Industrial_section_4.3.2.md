<!-- image -->

www.ti.com

Table 4-7. Local Data Memory Map (continued)

| Start Address   | PRU0           | PRU1           |
|-----------------|----------------|----------------|
| 0x0003_8000     | Reserved       | Reserved       |
| 0x0004_0000     | Reserved       | Reserved       |
| 0x0008_0000     | System OCP_HP0 | System OCP_HP1 |

## 4.3.2 Global Memory Map

The global view of the PRU-ICSS internal memories and control ports is shown in Table 4-8. The offset addresses of each region are implemented inside the PRU-ICSS but the global device memory mapping places the PRU-ICSS slave port in the address range shown in the external Host top-level memory map.

The global memory map is with respect to the Host point of view, but it can also be accessed by the PRUICSS. Note that PRU0 and PRU1 can use either the local or global addresses to access their internal memories, but using the local addresses will provide access time several cycles faster than using the global addresses. This is because when accessing via the global address the access needs to be routed through the switch fabric outside PRU-ICSS and back in through the PRU-ICSS slave port.

Each of the PRUs can access the rest of the device memory (including memory mapped peripheral and configuration registers) using the global memory space addresses. See Table 4-8, Global Memory Map , for base addresses of each module in the device.

Table 4-8. Global Memory Map

| Offset Address   | PRU-ICSS               |
|------------------|------------------------|
| 0x0000_0000      | Data 8KB RAM 0         |
| 0x0000_2000      | Data 8KB RAM 1         |
| 0x0001_0000      | Shared Data 12KB RAM 2 |
| 0x0002_0000      | INTC                   |
| 0x0002_2000      | PRU0 Control           |
| 0x0002_2400      | PRU0 Debug             |
| 0x0002_4000      | PRU1 Control           |
| 0x0002_4400      | PRU1 Debug             |
| 0x0002_6000      | CFG                    |
| 0x0002_8000      | UART 0                 |
| 0x0002_A000      | Reserved               |
| 0x0002_C000      | Reserved               |
| 0x0002_E000      | IEP                    |
| 0x0003_0000      | eCAP 0                 |
| 0x0003_2000      | MII_RT_CFG             |
| 0x0003_2400      | MII_MDIO               |
| 0x0003_4000      | PRU0 8KB IRAM          |
| 0x0003_8000      | PRU1 8KB IRAM          |
| 0x0004_0000      | Reserved               |