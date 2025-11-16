Table 25-3. GPIO Clock Signals (continued)

| Clock Signal                      | Max Freq   | Reference / Source                  | Comments                       |
|-----------------------------------|------------|-------------------------------------|--------------------------------|
| Functional / Interface clock      | 100 MHz    | CORE_CLKOUTM4 / 2                   | pd_per_l4ls_gclk From PRCM     |
| Debounce Functional clock (GPIO1) | 32.768 KHz | CLK_32KHZ (PER_CLKOUTM2 / 5859.375) | pd_per_gpio_1_gdbclk From PRCM |
| Debounce Functional clock (GPIO2) | 32.768 KHz | CLK_32KHZ (PER_CLKOUTM2 / 5859.375) | pd_per_gpio_2_gdbclk From PRCM |
| Debounce Functional clock (GPIO3) | 32.768 KHz | CLK_32KHZ (PER_CLKOUTM2 / 5859.375) | pd_per_gpio_3_gdbclk From PRCM |

## 25.2.3 GPIO Pin List

Each GPIO module includes 32 interface I/Os. These signals are designated as shown in Table 25-4. Note that for this device, most of these signals will be multiplexed with functional signals from other interfaces.

Table 25-4. GPIO Pin List

| Pin          | Type   | Description                       |
|--------------|--------|-----------------------------------|
| GPIO0_[31:0] | I/O    | General Purpose Input-Output pins |
| GPIO1_[31:0] | I/O    | General Purpose Input-Output pins |
| GPIO2_[31:0] | I/O    | General Purpose Input-Output pins |
| GPIO3_[31:0] | I/O    | General Purpose Input-Output pins |
| GPIO4_[31:0] | I/O    | General Purpose Input-Output pins |
| GPIO5_[31:0] | I/O    | General Purpose Input-Output pins |

<!-- image -->