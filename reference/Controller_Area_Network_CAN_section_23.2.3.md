<!-- image -->

## 23.2.2 DCAN Clock and Reset Management

The DCAN controllers have separate bus interface and functional clocks.

## Table 23-2. DCAN Clock Signals

| Clock Signal                 | Max Freq   | Reference / Source   | Comments                   |
|------------------------------|------------|----------------------|----------------------------|
| DCAN_ocp_clk Interface clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk from PRCM |
| DCAN_io_clk Functional clock | 26 MHz     | CLK_M_OSC            | pd_per_can_clk from PRCM   |

## 23.2.3 DCAN Pin List

The external signals for the DCAN module are shown in the following table.

## Table 23-3. DCAN Pin List

| Pin        | Type   | Description        |
|------------|--------|--------------------|
| DCAN x _TX | O      | DCAN transmit line |
| DCAN x _RX | I      | DCAN receive line  |