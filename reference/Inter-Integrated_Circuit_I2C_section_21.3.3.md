Figure 21-4. Multiple I2C Modules Connected

<!-- image -->

Table 21-6. Signal Pads

|         | I2C Mode               | I2C Mode                                                                                |
|---------|------------------------|-----------------------------------------------------------------------------------------|
| Name    | Default Operating Mode | Description                                                                             |
| I2C_SCL | In/ Out                | I2C serial CLK line Open-drain output buffer. Requires external pull-up resistor (Rp).  |
| I2C_SDA | In/ Out                | I2C serial data line Open-drain output buffer. Requires external pull-up resistor (Rp). |

## 21.3.3 I2C Reset

The I2C module can be reset in the following three ways:

- A system reset (PIRSTNA = 0). A device reset causes the system reset. All registers are reset to power up reset values.
- A software reset by setting the SRST bit in the I2C\_SYSC register. This bit has exactly the same action on the module logic as the system bus reset. All registers are reset to power up reset values.
- The I2C\_EN bit in the I2C\_CON register can be used to hold the I2C module in reset. When the system bus reset is removed (PIRSTNA = 1), I2C\_EN = 0 keeps the functional part of I2C module in reset state and all configuration registers can be accessed. I2C\_EN = 0 does not reset the registers to power up reset values.

Table 21-7. Reset State of I2C Signals

| Pin   | I/O/Z (1)   | System Reset   | I2C Reset (I2C_EN = 0)   |
|-------|-------------|----------------|--------------------------|
| SDA   | I/O/Z       | High impedance | High impedance           |
| SCL   | I/O/Z       | High impedance | High impedance           |

(1) I = Input, O = Outpu, Z = High impedance

<!-- image -->