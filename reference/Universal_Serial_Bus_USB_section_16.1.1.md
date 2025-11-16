<!-- image -->

www.ti.com

## 16.1 Integration

This device implements the USB2.0 OTG dual port module and PHY for interfacing to USB as a peripheral or host.

Figure 16-1 shows the integration of the USB module on this device.

Figure 16-1. USB Integration

<!-- image -->

## 16.1.1 USB Connectivity Attributes

The USB module itself has a very large number of interrupt outputs. For ease of integration, these outputs are all routed to a pair of interrupt aggregators. These aggregator blocks generate a single interrupt on the first occurrence of any interrupt from the USB or DMA logic of the module.

Table 16-1. USB Connectivity Attributes

| Attributes          | Type                                  |
|---------------------|---------------------------------------|
| Power domain        | Peripheral Domain                     |
| Clock domain        | PD_PER_L3S_GCLK (OCP) CLKDCOLDO (PHY) |
| Reset signals       | DEF_DOM_RST_N USB_POR_N               |
| Idle/Wakeup signals | Smart idle Wakeup Standby             |