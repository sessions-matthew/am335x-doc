## 4.2.4 PRU-ICSS Internal Pinmux

The PRU-ICSS supports an internal pinmux selection option that expands the device-level pinmuxing. The internal pinmuxing is programmable through the PIN\_MX register of the PRU-ICSS CFG register space.

The pin\_mux\_sel[0] determines the external signals routed to the internal input signals, mii0\_rxd[3:0]. The pin\_mux\_sel[1] determines the internal output signals routed to the external signals, pr1\_pru0\_pru\_r30[13:8], and the external signals routed to the internal input signals, pru0\_r30[5:0].

Note : pin\_mux\_sel[x] = 0 is always the standard pin mapping (default).

Table 4-4. PRU-ICSS Internal Signal Muxing: pin\_mux\_sel[0]

|                               | pin_mux_sel[0] = 1              | pin_mux_sel[0] = 0              |
|-------------------------------|---------------------------------|---------------------------------|
| Internal PRU-ICSS Signal Name | External Chip Level Signal Name | External Chip Level Signal Name |
| mii0_rxd[3:0]                 | pr1_pru1_pru_r31[8:11]          | pr1_mii0_rxd[3:0]               |

Figure 4-3. PRU-ICSS Internal Signal Muxing: pin\_mux\_sel[0]

<!-- image -->

Table 4-5. PRU-ICSS Internal Signal Muxing: pin\_mux\_sel[1]

|                                 | pin_mux_sel[1] = 1              | pin_mux_sel[1] = 0              |
|---------------------------------|---------------------------------|---------------------------------|
| External Chip Level Signal Name | Internal PRU-ICSS Signal Name   | Internal PRU-ICSS Signal Name   |
| pr1_pru0_pru_r30[13:8]          | pru1_r30[5:0]                   | pru0_r30[13:8]                  |
| Internal PRU-ICSS Signal Name   | External Chip Level Signal Name | External Chip Level Signal Name |
| pru1_r31_status[5:0]            | pr1_pru0_pru_r31[13:8]          | pr1_pru1_pru_r31[5:0]           |

<!-- image -->

<!-- image -->

www.ti.com

Figure 4-4. PRU-ICSS Internal Signal Muxing: pin\_mux\_sel[1]

<!-- image -->