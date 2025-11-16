## 24.2.1 McSPI Connectivity Attributes

The general connectivity attributes for the McSPI module are shown in Table 24-2.

Table 24-2. McSPI Connectivity Attributes

| Attributes          | Type                                                                                                                                                                        |
|---------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                                                                           |
| Clock Domain        | PD_PER_L4LS_GCLK (Interface/OCP) PD_PER_SPI_GCLK (Func)                                                                                                                     |
| Reset Signals       | PER_DOM_RST_N                                                                                                                                                               |
| Idle/Wakeup Signals | Smart Idle                                                                                                                                                                  |
| Interrupt Requests  | 1 interrupt to MPU subsystem and PRU-ICSS (McSPI0INT) 1 interrupt to MPU subsystem only (McSPI1INT)                                                                         |
| DMA Requests        | 4 DMA requests per instance to EDMA • 1 RX request for CS0 (SPIREVT0) • 1 TX request for CS0 (SPIXEVT0) • 1 RX request for CS1 (SPIREVT1) • 1 TX request for CS1 (SPIXEVT1) |
| Physical Address    | L4 Peripheral slave port                                                                                                                                                    |

## 24.2.2 McSPI Clock and Reset Management

The SPI module clocks can be woken up in two manners: by the SPI module itself using the SWAKEUP signal (refer to the module functional spec for detailed conditions), or directly from an external SPI master device by detecting an active low level on its chip select input pin (CS0n) using a GPIO attached to that device pin. Neither of these methods is supported on the device.

Table 24-3. McSPI Clock Signals

| Clock Signal               | Max Freq   | Reference / Source   | Comments                   |
|----------------------------|------------|----------------------|----------------------------|
| CLK Interface clock        | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk From PRCM |
| CLKSPIREF Functional clock | 48 MHz     | PER_CLKOUTM2 / 4     | pd_per_spi_gclk From PRCM  |

## 24.2.3 McSPI Pin List

The McSPI interface pins are summarized in Table 24-4.

Table 24-4. McSPI Pin List

| Pin         | Type    | Description                                                         |
|-------------|---------|---------------------------------------------------------------------|
| SPI x _SCLK | I/O (1) | SPI serial clock (output when master, input when slave)             |
| SPI x _D0   | I/O     | Can be configured as either input or output (MOSI or MISO)          |
| SPI x _D1   | I/O     | Can be configured as either input or output (MOSI or MISO)          |
| SPI x _CS0  | I/O     | SPI chip select 0 output when master, input when slave (active low) |
| SPI x _CS1  | I/O     | SPI chip select 1 output when master, input when slave (active low) |

(1) These signals are also used as inputs to re-time or sync data. The associated CONF\_&lt;module&gt;\_&lt;pin&gt;\_RXACTIVE bit for these signals must be set to 1 to enable the inputs back to the module. It is also recommended to place a 33-ohm resistor in series (close to the processor) on each of these signals to avoid signal reflections.

<!-- image -->