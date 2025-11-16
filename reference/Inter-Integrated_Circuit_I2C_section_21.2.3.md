Table 21-3. I2C(1-2) Connectivity Attributes

| Attributes          | Type                                                         |
|---------------------|--------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                            |
| Clock Domain        | PD_PER_L4LS_GCLK (Interface/OCP) PD_PER_I2C_FCLK (Func)      |
| Reset Signals       | PER_DOM_RST_N                                                |
| Idle/Wakeup Signals | Smart Idle                                                   |
| Interrupt Requests  | 1 interrupt per instance to MPU Subsystem (I2C1INT, I2C2INT) |
| DMA Requests        | 2 DMA requests per instance to EDMA (I2CTXEVTx, I2CRXEVTx)   |
| Physical Address    | L4 Peripheral slave port                                     |

## 21.2.2 I2C Clock and Reset Management

The I2C controllers have separate bus interface and functional clocks. During power-down mode, the I2C x \_SCL and I2C x \_SDA are configured as inputs.

Table 21-4. I2C Clock Signals

| Clock Signal              | Max Freq               | Reference / Source     | Comments                       |
|---------------------------|------------------------|------------------------|--------------------------------|
| I2C0 Clock Signals        | I2C0 Clock Signals     | I2C0 Clock Signals     | I2C0 Clock Signals             |
| PIOCPCLK Interface clock  | MHz                    |                        | pd_wkup_l4_wkup_gclk From PRCM |
| PISYSCLK Functional clock | 48 MHz                 | PER_CLKOUTM2 / 4       | pd_wkup_i2c0_gfclk From PRCM   |
| I2C(1-2) Clock Signals    | I2C(1-2) Clock Signals | I2C(1-2) Clock Signals | I2C(1-2) Clock Signals         |
| PIOCPCLK Interface clock  | 100 MHz                | CORE_CLKOUTM4 / 2      | pd_per_l4ls_gclk From PRCM     |
| PISYSCLK Functional clock | 48 MHz                 | PER_CLKOUTM2 / 4       | pd_per_ic2_fclk From PRCM      |

## 21.2.3 I2C Pin List

The external signals (I2C x \_SDA, I2C x \_SCL) on the device use standard LVCMOS I/Os and may not meet full compliance with the I2C specifications for Fast-mode devices for slope control and input filtering (spike suppression) to improve the EMC behavior.

Table 21-5. I2C Pin List

| Pin        | Type     | Description                   |
|------------|----------|-------------------------------|
| I2C x _SCL | I/OD (1) | I2C serial clock (open drain) |
| I2C x _SDA | I/OD     | I2C serial data (open drain)  |

(1) These signals are also used as inputs to re-time or sync data. The associated CONF\_&lt;module&gt;\_&lt;pin&gt;\_RXACTIVE bit for these signals must be set to 1 to enable the inputs back to the module. It is also recommended to place a 33-ohm resistor in series (close to the processor) on each of these signals to avoid signal reflections.

<!-- image -->