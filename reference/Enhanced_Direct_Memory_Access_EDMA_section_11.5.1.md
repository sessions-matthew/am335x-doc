## 11.4.2.46 DFMPPRXY3 Register (offset = 3D4h) [reset = 0h]

DFMPPRXY3 is shown in Figure 11-210 and described in Table 11-198.

The Destination FIFO Memory Protection Proxy Register (DFMPPRXY) is an EDMA3TC channel register. This EDMA3TC channel register is part of the Destination Register FIFO Register Set. It is read-only and provided to facilitate debugging by providing a window into how the transfer controller (TC) was programmed by the channel controller (CC), as well as showing status of the transfer controller (TC) during a transfer. The number of destination FIFO register sets depends on the destination FIFO depth. TC0, TC1, and TC2 each have a destination FIFO depth of 4, so there are four sets of destination FIFO registers for each of these transfer controllers.

## Figure 11-210. DFMPPRXY3 Register

| 31        | 30        | 29        | 28        | 27        | 26        | 25        | 24        |
|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 23        | 22        | 21        | 20        | 19        | 18        | 17        | 16        |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 15        | 14        | 13        | 12        | 11        | 10        | 9         | 8         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIV      |
| R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      | R-0h      |
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
| RESERVED  | RESERVED  | RESERVED  | RESERVED  | PRIVID    | PRIVID    | PRIVID    | PRIVID    |
| R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h | R-0h R-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 11-198. DFMPPRXY3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 8     | PRIV     | R      | 0h      | Privilege level. This contains the Privilege level used by the EDMA3 programmer to set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. The privilege ID is used while issuing read and write command to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIV of the host that set up the DMA transaction. 0h = User-level privilege 1h = Supervisor-level privilege |
| 7-4   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 3-0   | PRIVID   | R      | 0h      | Privilege ID. This contains the Privilege ID of the EDMA3 programmer that set up the parameter entry in the channel controller. This field is set up when the associated TR is submitted to the EDMA3TC. This PRIVID value is used while issuing read and write commands to the target endpoints so that the target endpoints can perform memory protection checks based on the PRIVID of the host that set up the DMA transaction. Value 0 to Fh.                                                 |

## 11.5 Appendix A

## 11.5.1 Debug Checklist

This section lists some tips to keep in mind while debugging applications using the EDMA3.

The following table provides some common issues and their probable causes and resolutions.

<!-- image -->