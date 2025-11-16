## 22.2.2 McASP Clock and Reset Management

The McASP module uses functional clocks either generated internally (master mode) or supplied from its serial interface (slave mode). The internal interconnect interface clock is used for the module internal OCP interface. Internal registers select the source of the functional clocks and the applied divider ratio.

Table 22-3. McASP Clock Signals

| Clock Signal            | Max Freq   | Reference / Source   | Comments                    |
|-------------------------|------------|----------------------|-----------------------------|
| ocp_clk Interface clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l3s_gclk From PRCM   |
| auxclk Functional clock | 26 MHz (1) | CLK_M_OSC            | pd_per_mcasp_fclk From PRCM |

(1) The maximum frequency may change in certain low power modes. For more timing information for different operating performance points (OPPs), see the device datasheet AM335x Sitara Processors (literature number SPRS717).

## 22.2.3 McASP Pin List

The McASP external interface signals are shown in Table 22-4.

Table 22-4. McASP Pin List

| Pin                 | Type   | Description                |
|---------------------|--------|----------------------------|
| McASP x _AXR[3:0]   | I/O    | Audio transmit/receive pin |
| McASP x _ACLKX (1)  | I/O    | Transmit clock             |
| McASP x _FSX (1)    | I/O    | Frame synch for transmit   |
| McASP x _AHCLKX (1) | I/O    | High speed transmit clock  |
| McASP x _ACLKR (1)  | I/O    | Receive clock              |
| McASP x _FSR (1)    | I/O    | Frame synch for receive    |
| McASP x _AHCLKR (1) | I/O    | High speed receive clock   |

(1) These signals are also used as inputs to re-time or sync data. The associated CONF\_&lt;module&gt;\_&lt;pin&gt;\_RXACTIVE bit for these signals must be set to 1 to enable the inputs back to the module. It is also recommended to place a 33-ohm resistor in series (close to the processor) on each of these signals to avoid signal reflections.

<!-- image -->