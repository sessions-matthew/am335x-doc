<!-- image -->

www.ti.com

## 21.4 I2C Registers

NOTE:

All bits defined as reserved must be written by software with 0s, for preserving future compatibility. When read, any reserved bit returns 0. Also, note that it is good software practice to use complete mask patterns for setting or testing individually bit fields within a register.

## 21.4.1 I2C Registers

Table 21-8 lists the memory-mapped registers for the I2C. All register offset addresses not listed in Table 21-8 should be considered as reserved locations and the register contents should not be modified.

Table 21-8. I2C Registers

| Offset   | Acronym             | Register Name                         | Section           |
|----------|---------------------|---------------------------------------|-------------------|
| 0h       | I2C_REVNB_LO        | Module Revision Register (low bytes)  | Section 21.4.1.1  |
| 4h       | I2C_REVNB_HI        | Module Revision Register (high bytes) | Section 21.4.1.2  |
| 10h      | I2C_SYSC            | System Configuration Register         | Section 21.4.1.3  |
| 24h      | I2C_IRQSTATUS_RAW   | I2C Status Raw Register               | Section 21.4.1.4  |
| 28h      | I2C_IRQSTATUS       | I2C Status Register                   | Section 21.4.1.5  |
| 2Ch      | I2C_IRQENABLE_SET   | I2C Interrupt Enable Set Register     | Section 21.4.1.6  |
| 30h      | I2C_IRQENABLE_CLR   | I2C Interrupt Enable Clear Register   | Section 21.4.1.7  |
| 34h      | I2C_WE              | I2C Wakeup Enable Register            | Section 21.4.1.8  |
| 38h      | I2C_DMARXENABLE_SET | Receive DMA Enable Set Register       | Section 21.4.1.9  |
| 3Ch      | I2C_DMATXENABLE_SET | Transmit DMA Enable Set Register      | Section 21.4.1.10 |
| 40h      | I2C_DMARXENABLE_CLR | Receive DMA Enable Clear Register     | Section 21.4.1.11 |
| 44h      | I2C_DMATXENABLE_CLR | Transmit DMA Enable Clear Register    | Section 21.4.1.12 |
| 48h      | I2C_DMARXWAKE_EN    | Receive DMA Wakeup Register           | Section 21.4.1.13 |
| 4Ch      | I2C_DMATXWAKE_EN    | Transmit DMA Wakeup Register          | Section 21.4.1.14 |
| 90h      | I2C_SYSS            | System Status Register                | Section 21.4.1.15 |
| 94h      | I2C_BUF             | Buffer Configuration Register         | Section 21.4.1.16 |
| 98h      | I2C_CNT             | Data Counter Register                 | Section 21.4.1.17 |
| 9Ch      | I2C_DATA            | Data Access Register                  | Section 21.4.1.18 |
| A4h      | I2C_CON             | I2C Configuration Register            | Section 21.4.1.19 |
| A8h      | I2C_OA              | I2C Own Address Register              | Section 21.4.1.20 |
| ACh      | I2C_SA              | I2C Slave Address Register            | Section 21.4.1.21 |
| B0h      | I2C_PSC             | I2C Clock Prescaler Register          | Section 21.4.1.22 |
| B4h      | I2C_SCLL            | I2C SCL Low Time Register             | Section 21.4.1.23 |
| B8h      | I2C_SCLH            | I2C SCL High Time Register            | Section 21.4.1.24 |
| BCh      | I2C_SYSTEST         | System Test Register                  | Section 21.4.1.25 |
| C0h      | I2C_BUFSTAT         | I2C Buffer Status Register            | Section 21.4.1.26 |
| C4h      | I2C_OA1             | I2C Own Address 1 Register            | Section 21.4.1.27 |
| C8h      | I2C_OA2             | I2C Own Address 2 Register            | Section 21.4.1.28 |
| CCh      | I2C_OA3             | I2C Own Address 3 Register            | Section 21.4.1.29 |
| D0h      | I2C_ACTOA           | Active Own Address Register           | Section 21.4.1.30 |
| D4h      | I2C_SBLOCK          | I2C Clock Blocking Enable Register    | Section 21.4.1.31 |

## 21.4.1.1 I2C\_REVNB\_LO Register (offset = 0h) [reset = 0h]

I2C\_REVNB\_LO is shown in Figure 21-16 and described in Table 21-9.

This read-only register contains the hard-coded revision number of the module. A write to this register has no effect. I2C controller with interrupt using interrupt vector register (I2C\_IV) is revision 1.x. I2C controller with interrupt using status register bits (I2C\_IRQSTATUS\_RAW) is revision 2.x.

## Figure 21-16. I2C\_REVNB\_LO Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       | 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |          |
|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        | 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |          |
| RTL      | RTL      | RTL      | RTL      | RTL      | MAJOR    | MAJOR    | MAJOR    | CUSTOM   | CUSTOM   | MINOR    | MINOR    | MINOR    | MINOR    | MINOR    | MINOR    | MINOR    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-9. I2C\_REVNB\_LO Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                              |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                          |
| 15-11 | RTL      | R      | 0h      | RTL version.                                                                                                                                             |
| 10-8  | MAJOR    | R      | 0h      | Major Revision. This field changes when there is a major feature change. This field does not change due to bug fix, or minor feature change.             |
| 7-6   | CUSTOM   | R      | 0h      | Indicates a special version for a particular device. Consequence of use may avoid use of standard Chip Support Library (CSL) / Drivers. 0 if non-custom. |
| 5-0   | MINOR    | R      | 0h      | Minor Revision This field changes when features are scaled up or down. This field does not change due to bug fix, or major feature change.               |

<!-- image -->

<!-- image -->

## 21.4.1.2 I2C\_REVNB\_HI Register (offset = 4h) [reset = 0h]

I2C\_REVNB\_HI is shown in Figure 21-17 and described in Table 21-10. A reset has no effect on the value returned.

## Figure 21-17. I2C\_REVNB\_HI Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| SCHEME   | SCHEME   | RESERVED | RESERVED | RESERVED | FUNC     | FUNC     | FUNC     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| FUNC     | FUNC     | FUNC     | FUNC     | FUNC     | FUNC     | FUNC     | FUNC     |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-10. I2C\_REVNB\_HI Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                             |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                         |
| 15-14 | SCHEME   | R      | 0h      | Used to distinguish between old Scheme and current. Spare bit to encode future schemes. |
| 13-12 | RESERVED | R      | 0h      |                                                                                         |
| 11-0  | FUNC     | R      | 0h      | Function: Indicates a software compatible module family                                 |

## 21.4.1.3 I2C\_SYSC Register (offset = 10h) [reset = 0h]

I2C\_SYSC is shown in Figure 21-18 and described in Table 21-11.

This register allows controlling various parameters of the peripheral interface.

## Figure 21-18. I2C\_SYSC Register

| 31       | 30       | 29       | 28       | 27       | 26        | 25          | 24          |
|----------|----------|----------|----------|----------|-----------|-------------|-------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h        | R-0h        |
| 23       | 22       | 21       | 20       | 19       | 18        | 17          | 16          |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | RESERVED    | RESERVED    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R-0h        | R-0h        |
| 15       | 14       | 13       | 12       | 11       | 10        | 9           | 8           |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED  | CLKACTIVITY | CLKACTIVITY |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h      | R/W-0h      | R/W-0h      |
| 7        | 6        | 5        | 4        | 3        | 2         | 1           | 0           |
| RESERVED | RESERVED | RESERVED | IDLEMODE | IDLEMODE | ENAWAKEUP | SRST        | AUTOIDLE    |
| R-0h     | R-0h     | R-0h     | R/W-0h   | R/W-0h   | R/W-0h    | R/W-0h      | R/W-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-11. I2C\_SYSC Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|-------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 9-8   | CLKACTIVITY | R/W    | 0h      | Clock Activity selection bits. Those bits (one bit for each clock signal present on the boundary of the module) are set to 1 to disable external clock gating mechanism in Idle Mode. Values after reset are low (for both 2 bits). Note: If the System (functional) Clock is cut-off, the module will assert a WakeUp event when it asynchronously detects a Start Condition on the I2C Bus. Note that in this case the first transfer will not be taken into account by the module (NACK will be detected by the external master). 0h = Both clocks can be cut off 1h = Only Interface/OCP clock must be kept active; system clock can be cut off 2h = Only system clock must be kept active; Interface/OCP clock can be cut off 3h = Both clocks must be kept active |
| 7-5   | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 4-3   | IDLEMODE    | R/W    | 0h      | Idle Mode selection bits. These two bits are used to select one of the idle mode operation mechanisms. Value after reset is 00 (Force Idle). 1h = No Idle mode 2h = Smart Idle mode 3h = Smart-idle wakeup. Available only on I2C0.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| 2     | ENAWAKEUP   | R/W    | 0h      | Enable Wakeup control bit. When this bit is set to 1, the module enables its own wakeup mechanism. Value after reset is low. 0h = Wakeup mechanism is disabled 1h = Wakeup mechanism is enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |

<!-- image -->

<!-- image -->

Table 21-11. I2C\_SYSC Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | SRST     | R/W    | 0h      | SoftReset bit. When this bit is set to 1, entire module is reset as for the hardware reset. This bit is automatically cleared to 0 by the core and it is only reset by the hardware reset. During reads, it always returns 0. Value after reset is low. 0h = Normal mode 1h = The module is reset                                                 |
|     0 | AUTOIDLE | R/W    | 0h      | Autoidle bit. When this bit is set to 1, the module activates its own idle mode mechanism. By evaluating its internal state, the module can decide to gate part of his internal clock tree in order to improve the overall power consumption. Value after reset is high. 0h = Auto Idle mechanism is disabled 1h = Auto Idle mechanism is enabled |

## 21.4.1.4 I2C\_IRQSTATUS\_RAW Register (offset = 24h) [reset = 0h]

I2C\_IRQSTATUS\_RAW is shown in Figure 21-19 and described in Table 21-12.

This register provides core status information for interrupt handling, showing all active events (enabled and not enabled). The fields are read-write. Writing a 1 to a bit will set it to 1, that is, trigger the IRQ (mostly for debug). Writing a 0 will have no effect, that is, the register value will not be modified. Only enabled, active events will trigger an actual interrupt request on the IRQ output line.

Figure 21-19. I2C\_IRQSTATUS\_RAW Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR      | RDR      | BB       | ROVR     | XUDF     | AAS      | BF       |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| AERR     | STC      | GC       | XRDY     | RRDY     | ARDY     | NACK     | AL       |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-12. I2C\_IRQSTATUS\_RAW Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 14    | XDR      | R/W    | 0h      | Transmit draining IRQ status. I2C Master Transmit mode only. This read/clear only bit is set to 1 when the module is configured as a master transmitter, the TX FIFO level is below the configured threshold (TXTRSH) and the amount of data still to be transferred is less than TXTRSH. When this bit is set to 1 by the core, CPU must read the I2C_BUFSTAT.TXSTAT register in order to check the amount of data that need to be written in the TX FIFO. Then, according to the mode set (DMA or interrupt), the CPU can enable the DMA draining feature of the DMA controller with the number of data bytes to be transferred (I2C_BUFSTAT.TXSTAT), or generate write data accesses according to this value (IRQ mode). The interrupt needs to be cleared after the DMA controller was reconfigured (if DMA mode enabled), or before generating data accesses to the FIFO (if IRQ mode enabled). If the corresponding interrupt was enabled, an interrupt is signaled to the local host. The CPU can also poll this bit. For more details about TDR generation, refer to the FIFO Management subsection. The CPU can only clear this bit by writing a 1 into this register. A write 0 has no effect. Value after reset is low. 0h = Transmit draining inactive 1h = Transmit draining enabled |

<!-- image -->

<!-- image -->

www.ti.com

Table 21-12. I2C\_IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    13 | RDR     | R/W    | 0h      | Receive draining IRQ status. I2C Receive mode only. This read/clear only bit is set to 1 when the module is configured as a receiver, a stop condition was received on the bus and the RX FIFO level is below the configured threshold (RXTRSH). When this bit is set to 1 by the core, CPU must read the I2C_BUFSTAT.RXSTAT register in order to check the amount of data left to be transferred from the FIFO. Then, according to the mode set (DMA or interrupt), the CPU needs to enable the draining feature of the DMA controller with the number of data bytes to be transferred (I2C_BUFSTAT.RXSTAT), or generate read data accesses according to this value (IRQ mode). The interrupt needs to be cleared after the DMA controller was reconfigured (if DMA mode enabled), or before generating data accesses to the FIFO (if IRQ mode enabled). If the corresponding interrupt was enabled, an interrupt is signaled to the local host. The CPU can also poll this bit. For more details about RDR generation, refer to the FIFO Management subsection. The CPU can only clear this bit by writing a 1 into this register. A write 0 has no effect. Value after reset is low. 0h = Receive draining inactive 1h = Receive draining enabled |
|    12 | BB      | R      | 0h      | This read-only bit indicates the state of the serial bus. In slave mode, on reception of a start condition, the device sets BB to 1. BB is cleared to 0 after reception of a stop condition. In master mode, the software controls BB. To start a transmission with a start condition, MST, TRX, and STT must be set to 1 in the I2C_CON register. To end a transmission with a stop condition, STP must be set to 1 in the I2C_CON register. When BB = 1 and STT = 1, a restart condition is generated. Value after reset is low. 0h = Bus is free 1h = Bus is occupied                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|    11 | ROVR    | R/W    | 0h      | Receive overrun status. Writing into this bit has no effect. I2C receive mode only. This read-only bit indicates whether the receiver has experienced overrun. Overrun occurs when the shift register is full and the receive FIFO is full. An overrun condition does not result in a data loss the peripheral is just holding the bus (low on SCL) and prevents other bytes from being received. ROVR is set to 1 when the I2C has recognized an overrun. ROVR is clear when reading I2C_DATA register, or when resetting the I2C (I2C_CON:I2C_EN = 0). Value after reset is low. 0h = Normal operation 1h = Receiver overrun                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |

<!-- image -->

Table 21-12. I2C\_IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    10 | XUDF    | R/W    | 0h      | Transmit underflow status. Writing into this bit has no effect. I2C transmit mode only. This read-only bit indicates whether the transmitter has experienced underflow. In master transmit mode, underflow occurs when the shift register is empty, the transmit FIFO is empty, and there are still some bytes to transmit (DCOUNT 0). In slave transmit mode, underflow occurs when the shift register is empty, the transmit FIFO is empty, and there are still some bytes to transmit (read request from external I2C master). XUDF is set to 1 when the I2C has recognized an underflow. The core holds the line till the underflow cause has disappeared. XUDF is clear when writing I2C_DATA register or resetting the I2C (I2C_CON:I2C_EN = 0). Value after reset is low. 0h = Normal operation 1h = Transmit underflow |
|     9 | AAS     | R/W    | 0h      | Address recognized as slave IRQ status. I2C mode only. This read only bit is set to 1 by the device when it has recognized its own slave address (or one of the alternative own addresses), or an address of all zeros (8 bits). When this bit is set to 1 by the core, an interrupt is signaled to the local host if the interrupt was enabled. This bit can be cleared in 2 ways: One way is if the interrupt was enabled, it will be cleared by writing 1 into this register (writing 0 has no effect). The other way is if the interrupt was not enabled, the AAS bit is reset to 0 by restart or stop. Value after reset is low. 0h = No action                                                                                                                                                                           |
|     8 | BF      | R/W    | 0h      | I2C mode only. This read only bit is set to 1 by the device when the I2C bus became free (after a transfer is ended on the bus stop condition detected). This interrupt informs the Local Host that it can initiate its own I2C transfer on the bus. When this bit is set to 1 by the core, an interrupt is signaled to the local host if the interrupt was enabled. The CPU can only clear this bit by writing a 1 into this register. Writing 0 has no effect. Value after reset is low. 0h = No action                                                                                                                                                                                                                                                                                                                      |
|     7 | AERR    | R/W    | 0h      | 1h = Bus Free Access Error IRQ status. I2C mode only. This read/clear only bit is set to 1 by the device if an Interface/OCP write access is performed to I2C_DATA while the TX FIFO is full or if an Interface/OCP read access is performed to the I2C_DATA while the RX FIFO is empty. Note that, when the RX FIFO is empty, a read access will return to the previous read data value. When the TX FIFO is full, a write access is ignored. In both events, the FIFO pointers will not be updated. When this bit is set to 1 by the core, an interrupt is signaled to the local host if the interrupt was enabled. The CPU can only clear this bit by writing a 1 into this register. Writing 0 has no effect. Value after reset is low. 0h = No action                                                                     |

<!-- image -->

Table 21-12. I2C\_IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|---------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     6 | STC     | R/W    | 0h      | Start Condition IRQ status. I2C mode only. This read/clear only bit is set to 1 by the device if previously the module was in idle mode and a start condition was asynchronously detected on the I2C Bus and signalized with an Wakeup (if the I2C_SYSC.ClockActivity allows the system clock to be cut-off). When the Active Mode will be restored and the interrupt generated, this bit will indicate the reason of the wakeup. Note 1: The corresponding interrupt for this bit should be enabled only if the module was configured to allow the possibility of cutting-off the system clock while in Idle State (I2C_SYSC.ClockActivity = 00 or 01). Note 2: The first transfer (corresponding to the detected start condition) will be lost (not taken into account by the module) and it will be used only for generating the WakeUp enable for restoring the Active Mode of the module. On the I2C line, the external master which generated the transfer will detect this behavior as a not acknowledge to the address phase and will possibly restart the transfer. The CPU can only clear this bit by writing a 1 into this register. Writing 0 has no effect. Value after reset is low. 0h = No action |
|     5 | GC      | R/W    | 0h      | General call IRQ status. Set to '1' by core when General call address detected and interrupt signaled to MPUSS. Write '1' to clear. I2C mode only. This read/clear only bit is set to 1 by the device if it detects the address of all zeros (8 bits) (general call). When this bit is set to 1 by the core, an interrupt is signaled to the local host if the interrupt was enabled. The CPU can only clear this bit by writing a 1 into this register. Writing 0 has no effect. Note: When this bit is set to 1, AAS also reads as 1. Value after reset is low. 0h = No general call detected 1h = General call address detected                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |

<!-- image -->

Table 21-12. I2C\_IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     4 | XRDY    | R/W    | 0h      | Transmit data ready IRQ status. Set to '1' by core when transmitter and when new data is requested. When set to '1' by core, an interrupt is signaled to MPUSS. Write '1' to clear. Transmit mode only (I2C mode). This read/clear only bit (XRDY) is set to 1 when the I2C peripheral is a master or slave transmitter, the CPU needs to send data through the I2C bus, and the module (transmitter) requires new data to be served. Note that a master transmitter requests new data if the FIFO TX level is below the threshold (TXTRSH) and the required amount of data remained to be transmitted (I2C_BUFSTAT.TXSTAT) is greater than the threshold. A slave transmitter requests new data when the FIFO TX level is below the threshold (if TXTRSH > 1), or anytime there is a read request from external master (for each acknowledge received from the master), if TXTRSH = 1. When this bit is set to 1 by the core, an interrupt is signaled to the local host if the interrupt was enabled. The CPU can also poll this bit (refer to the FIFO Management subsection for details about XRDY generation). The CPU can only clear this bit by writing a 1 into this register. Writing 0 has no effect. Note: If the DMA transmit mode is enabled (I2C_BUF.XDMA_EN is set, together with I2C_DMATXENABLE_SET), this bit is forced to 0 and no interrupt will be generated instead, a DMA TX request to the main DMA controller of the system is generated. Value after reset is low. 0h = Transmission ongoing |
|     3 | RRDY    | R/W    | 0h      | Receive mode only (I2C mode). This read/clear only RRDY is set to 1 when the RX FIFO level is above the configured threshold (RXTRSH). When this bit is set to 1 by the core, CPU is able to read new data from the I2C_DATA register. If the corresponding interrupt was enabled, an interrupt is signaled to the local host. The CPU to read the received data in I2C_DATA register can also poll this bit (refer to the FIFO Management subsection for details about RRDY generation). The CPU can only clear this bit by writing a 1 into this register. A write 0 has no effect. If the DMA receive mode is enabled (I2C_BUF.RDMA_EN is set, together with I2C_DMARXENABLE_SET), this bit is forced to 0 and no interrupt will be generated instead a DMA RX request to the main DMA controller of the system is generated. Value after reset is low. 0h = Receive FIFO threshold not reached                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |

<!-- image -->

www.ti.com

Table 21-12. I2C\_IRQSTATUS\_RAW Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | ARDY    | R/W    | 0h      | I2C mode only. This read/clear only bit, when set to 1, indicates that the previously programmed data and command (receive or transmit, master or slave) has been performed and status bit has been updated. The CPU uses this flag to let it know that the I2C registers are ready to be accessed again. The CPU can only clear this bit by writing a 1 into this register. A write 0 has no effect. Mode: I2C Master transmit, Others: STP = 1, ARDY Set Condition: DCOUNT = 0. Mode: I2C Master receive, Others: STP = 1, ARDY Set Condition: DCOUNT = 0 and receiver FIFO empty Mode: I2C Master transmit, Others: STP = 0, ARDY Set Condition: DCOUNT passed 0 Mode: I2C Master receive, Others: STP = 0, ARDY Set Condition: DCOUNT passed 0 and receiver FIFO empty Mode: I2C Master transmit, Others: n/a, ARDY Set Condition: Stop or restart condition received from master Mode: I2C Slave receive, Others: n/a, ARDY Set Condition: Stop or restart condition and receiver FIFO empty Value after reset is low. 0h = No action |
|     1 | NACK    | R/W    | 0h      | 1h = Access ready No acknowledgment IRQ status. Bit is set when No Acknowledge has been received, an interrupt is signaled to MPUSS. Write '1' to clear this bit. I2C mode only. The read/clear only No Acknowledge flag bit is set when the hardware detects No Acknowledge has been received. When a NACK event occurs on the bus, this bit is set to 1, the core automatically ends the transfer and clears the MST/STP bits in the I2C_CON register and the I2C becomes a slave. Clearing the FIFOs from remaining data might be required. The CPU can only clear this bit by writing a 1 into this register. Writing 0 has no effect. Value after reset is low. 0h = Normal operation 1h = Not Acknowledge detected                                                                                                                                                                                                                                                                                                                   |
|     0 | AL      | R/W    | 0h      | Arbitration lost IRQ status. This bit is automatically set by the hardware when it loses the Arbitration in master transmit mode, an interrupt is signaled to MPUSS. During reads, it always returns 0. I2C mode only. The read/clear only Arbitration Lost flag bit is set to 1 when the device (configured in master mode) detects it has lost an arbitration (in Address Phase). This happens when two or more masters initiate a transfer on the I2C bus almost simultaneously or when the I2C attempts to start a transfer while BB (bus busy) is 1. When this is set to 1 due to arbitration lost, the core automatically clears the MST/STP bits in the I2C_CON register and the I2C becomes a slave receiver. The CPU can only clear this bit by writing a 1 to this register. Writing 0 has no effect. Value after reset is low. 0h = Normal operation 1h = Arbitration lost detected                                                                                                                                             |

## 21.4.1.5 I2C\_IRQSTATUS Register (offset = 28h) [reset = 0h]

I2C\_IRQSTATUS is shown in Figure 21-20 and described in Table 21-13.

This register provides core status information for interrupt handling, showing all active and enabled events and masking the others. The fields are read-write. Writing a 1 to a bit will clear it to 0, that is, clear the IRQ. Writing a 0 will have no effect, that is, the register value will not be modified. Only enabled, active events will trigger an actual interrupt request on the IRQ output line. For all the internal fields of the I2C\_IRQSTATUS register, the descriptions given in the I2C\_IRQSTATUS\_RAW subsection are valid.

Figure 21-20. I2C\_IRQSTATUS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR      | RDR      | BB       | ROVR     | XUDF     | AAS      | BF       |
| R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| AERR     | STC      | GC       | XRDY     | RRDY     | ARDY     | NACK     | AL       |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-13. I2C\_IRQSTATUS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                       |
| 14    | XDR      | R/W    | 0h      | Transmit draining IRQ enabled status. 0h = Transmit draining inactive 1h = Transmit draining enabled                  |
| 13    | RDR      | R/W    | 0h      | Receive draining IRQ enabled status. 0h = Receive draining inactive 1h = Receive draining enabled                     |
| 12    | BB       | R/W    | 0h      | Bus busy enabled status. Writing into this bit has no effect. 0h = Bus is free 1h = Bus is occupied                   |
| 11    | ROVR     | R/W    | 0h      | Receive overrun enabled status. Writing into this bit has no effect. 0h = Normal operation 1h = Receiver overrun      |
| 10    | XUDF     | R/W    | 0h      | Transmit underflow enabled status. Writing into this bit has no effect. 0h = Normal operation 1h = Transmit underflow |
| 9     | AAS      | R/W    | 0h      | Address recognized as slave IRQ enabled status. 0h = No action 1h = Address recognized                                |
| 8     | BF       | R/W    | 0h      | Bus Free IRQ enabled status. 0h = No action 1h = Bus free                                                             |
| 7     | AERR     | R/W    | 0h      | Access Error IRQ enabled status. 0h = No action 1h = Access error                                                     |

<!-- image -->

<!-- image -->

Table 21-13. I2C\_IRQSTATUS Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                          |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     6 | STC     | R/W    | 0h      | Start Condition IRQ enabled status. 0h = No action 1h = Start condition detected                                                                                                                                                                                     |
|     5 | GC      | R/W    | 0h      | General call IRQ enabled status. Set to '1' by core when General call address detected and interrupt signaled to MPUSS. Write '1' to clear. 0h = No general call detected 1h = General call address detected                                                         |
|     4 | XRDY    | R/W    | 0h      | Transmit data ready IRQ enabled status. Set to '1' by core when transmitter and when new data is requested. When set to '1' by core, an interrupt is signaled to MPUSS. Write '1' to clear. 0h = Transmission ongoing 1h = Transmit data ready                       |
|     3 | RRDY    | R/W    | 0h      | Receive data ready IRQ enabled status. Set to '1' by core when receiver mode, a new data is able to be read. When set to '1' by core, an interrupt is signaled to MPUSS. Write '1' to clear. 0h = No data available 1h = Receive data available                      |
|     2 | ARDY    | R/W    | 0h      | Register access ready IRQ enabled status. When set to '1' it indicates that previous access has been performed and registers are ready to be accessed again. An interrupt is signaled to MPUSS. Write '1' to clear. 0h = Module busy 1h = Access ready               |
|     1 | NACK    | R/W    | 0h      | No acknowledgment IRQ enabled status. Bit is set when No Acknowledge has been received, an interrupt is signaled to MPUSS. Write '1' to clear this bit. 0h = Normal operation 1h = Not Acknowledge detected                                                          |
|     0 | AL      | R/W    | 0h      | Arbitration lost IRQ enabled status. This bit is automatically set by the hardware when it loses the Arbitration in master transmit mode, an interrupt is signaled to MPUSS. During reads, it always returns 0. 0h = Normal operation 1h = Arbitration lost detected |

## 21.4.1.6 I2C\_IRQENABLE\_SET Register (offset = 2Ch) [reset = 0h]

I2C\_IRQENABLE\_SET is shown in Figure 21-21 and described in Table 21-14.

All 1-bit fields enable a specific interrupt event to trigger an interrupt request. Writing a 1 to a bit will enable the field. Writing a 0 will have no effect, that is, the register value will not be modified. For all the internal fields of the I2C\_IRQENABLE\_SET register, the descriptions given in the I2C\_IRQSTATUS\_RAW subsection are valid.

Figure 21-21. I2C\_IRQENABLE\_SET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR_IE   | RDR_IE   | RESERVED | ROVR     | XUDF     | AAS_IE   | BF_IE    |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| AERR_IE  | STC_IE   | GC_IE    | XRDY_IE  | RRDY_IE  | ARDY_IE  | NACK_IE  | AL_IE    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-14. I2C\_IRQENABLE\_SET Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                                                                                              |
| 14    | XDR_IE   | R/W    | 0h      | Transmit draining interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[XDR]. 0h = Transmit draining interrupt disabled 1h = Transmit draining interrupt enabled    |
| 13    | RDR_IE   | R/W    | 0h      | Receive draining interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[RDR]. 0h = Receive draining interrupt disabled 1h = Receive draining interrupt enabled       |
| 12    | RESERVED | R      | 0h      |                                                                                                                                                                                              |
| 11    | ROVR     | R/W    | 0h      | Receive overrun enable set. 0h = Receive overrun interrupt disabled 1h = Receive draining interrupt enabled                                                                                  |
| 10    | XUDF     | R/W    | 0h      | Transmit underflow enable set. 0h = Transmit underflow interrupt disabled 1h = Transmit underflow interrupt enabled                                                                          |
| 9     | AAS_IE   | R/W    | 0h      | Addressed as slave interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[AAS]. 0h = Addressed as slave interrupt disabled 1h = Addressed as slave interrupt enabled |
| 8     | BF_IE    | R/W    | 0h      | Bus free interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[BF]. 0h = Bus free interrupt disabled 1h = Bus free interrupt enabled                                |
| 7     | AERR_IE  | R/W    | 0h      | Access error interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[AERR]. 0h = Access error interrupt disabled 1h = Access error interrupt enabled                  |

<!-- image -->

<!-- image -->

## Table 21-14. I2C\_IRQENABLE\_SET Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                            |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     6 | STC_IE  | R/W    | 0h      | Start condition interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[STC]. 0h = Start condition interrupt disabled 1h = Start condition interrupt enabled                    |
|     5 | GC_IE   | R/W    | 0h      | General call interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[GC]. 0h = General call interrupt disabled 1h = General call interrupt enabled                              |
|     4 | XRDY_IE | R/W    | 0h      | Transmit data ready interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[XRDY]. 0h = Transmit data ready interrupt disabled 1h = Transmit data ready interrupt enabled       |
|     3 | RRDY_IE | R/W    | 0h      | Receive data ready interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[RRDY]. 0h = Receive data ready interrupt disabled 1h = Receive data ready interrupt enabled          |
|     2 | ARDY_IE | R/W    | 0h      | Register access ready interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[ARDY]. 0h = Register access ready interrupt disabled 1h = Register access ready interrupt enabled |
|     1 | NACK_IE | R/W    | 0h      | No acknowledgment interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[NACK]. 0h = Not Acknowledge interrupt disabled 1h = Not Acknowledge interrupt enabled                 |
|     0 | AL_IE   | R/W    | 0h      | Arbitration lost interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[AL]. 0h = Arbitration lost interrupt disabled 1h = Arbitration lost interrupt enabled                  |

## 21.4.1.7 I2C\_IRQENABLE\_CLR Register (offset = 30h) [reset = 0h]

I2C\_IRQENABLE\_CLR is shown in Figure 21-22 and described in Table 21-15.

All 1-bit fields clear a specific interrupt event. Writing a 1 to a bit will disable the interrupt field. Writing a 0 will have no effect, that is, the register value will not be modified. For all the internal fields of the I2C\_IRQENABLE\_CLR register, the descriptions given in the I2C\_IRQSTATUS\_RAW subsection are valid.

Figure 21-22. I2C\_IRQENABLE\_CLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR_IE   | RDR_IE   | RESERVED | ROVR     | XUDF     | AAS_IE   | BF_IE    |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| AERR_IE  | STC_IE   | GC_IE    | XRDY_IE  | RRDY_IE  | ARDY_IE  | NACK_IE  | AL_IE    |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-15. I2C\_IRQENABLE\_CLR Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                    |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                                                                                                |
| 14    | XDR_IE   | R/W    | 0h      | Transmit draining interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[XDR]. 0h = Transmit draining interrupt disabled 1h = Transmit draining interrupt enabled    |
| 13    | RDR_IE   | R/W    | 0h      | Receive draining interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[RDR]. 0h = Receive draining interrupt disabled 1h = Receive draining interrupt enabled       |
| 12    | RESERVED | R      | 0h      |                                                                                                                                                                                                |
| 11    | ROVR     | R/W    | 0h      | Receive overrun enable clear. 0h = Receive overrun interrupt disabled 1h = Receive draining interrupt enabled                                                                                  |
| 10    | XUDF     | R/W    | 0h      | Transmit underflow enable clear. 0h = Transmit underflow interrupt disabled 1h = Transmit underflow interrupt enabled                                                                          |
| 9     | AAS_IE   | R/W    | 0h      | Addressed as slave interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[AAS]. 0h = Addressed as slave interrupt disabled 1h = Addressed as slave interrupt enabled |
| 8     | BF_IE    | R/W    | 0h      | Bus Free interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[BF]. 0h = Bus free interrupt disabled 1h = Bus free interrupt enabled                                |
| 7     | AERR_IE  | R/W    | 0h      | Access error interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[AERR]. 0h = Access error interrupt disabled 1h = Access error interrupt enabled                  |

<!-- image -->

<!-- image -->

Table 21-15. I2C\_IRQENABLE\_CLR Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                              |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     6 | STC_IE  | R/W    | 0h      | Start condition interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[STC]. 0h = Start condition interrupt disabled 1h = Start condition interrupt enabled                    |
|     5 | GC_IE   | R/W    | 0h      | General call interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[GC]. 0h = General call interrupt disabled 1h = General call interrupt enabled                              |
|     4 | XRDY_IE | R/W    | 0h      | Transmit data ready interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[XRDY]. 0h = Transmit data ready interrupt disabled 1h = Transmit data ready interrupt enabled       |
|     3 | RRDY_IE | R/W    | 0h      | Receive data ready interrupt enable set. Mask or unmask the interrupt signaled by bit in I2C_STAT[RRDY] 0h = Receive data ready interrupt disabled 1h = Receive data ready interrupt enabled             |
|     2 | ARDY_IE | R/W    | 0h      | Register access ready interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[ARDY]. 0h = Register access ready interrupt disabled 1h = Register access ready interrupt enabled |
|     1 | NACK_IE | R/W    | 0h      | No acknowledgment interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[NACK]. 0h = Not Acknowledge interrupt disabled 1h = Not Acknowledge interrupt enabled                 |
|     0 | AL_IE   | R/W    | 0h      | Arbitration lost interrupt enable clear. Mask or unmask the interrupt signaled by bit in I2C_STAT[AL]. 0h = Arbitration lost interrupt disabled 1h = Arbitration lost interrupt enabled                  |

## 21.4.1.8 I2C\_WE Register (offset = 34h) [reset = 0h]

I2C\_WE is shown in Figure 21-23 and described in Table 21-16.

Every 1-bit field in the I2C\_WE register enables a specific (synchronous) IRQ request source to generate an asynchronous wakeup (on the appropriate swakeup line). When a bit location is set to 1 by the local host, a wakeup is signaled to the local host if the corresponding event is captured by the core of the I2C controller. Value after reset is low (all bits). There is no need for an Access Error WakeUp event, since this event occurs only when the module is in Active Mode (for Interface/OCP accesses to FIFO) and is signaled by an interrupt. With the exception of Start Condition WakeUp, which is asynchronously detected when the Functional clock is turned-off, all the other WakeUp events require the Functional (System) clock to be enabled.

## Figure 21-23. I2C\_WE Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR_WE   | RDR_WE   | RESERVED | ROVR_WE  | XUDF_WE  | AAS_WE   | BF_WE    |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | STC_WE   | GC_WE    | RESERVED | DRDY_WE  | ARDY_WE  | NACK_WE  | AL_WE    |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-16. I2C\_WE Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 14    | XDR_WE   | R/W    | 0h      | Transmit draining wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is in idle mode, the TX FIFO level is below the threshold and the amount of data left to be transferred is less than TXTRSH value. This allows for the module to inform the CPU that it can check the amount of data to be written to the FIFO. 0h = Transmit draining wakeup disabled 1h = Transmit draining wakeup enabled                           |
| 13    | RDR_WE   | R/W    | 0h      | Receive draining wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C is in idle mode, configured as a receiver, and it has detected a stop condition on the bus but the RX FIFO threshold is not reached (but the FIFO is not empty). This allows for the module to inform the CPU that it can check the amount of data to be transferred from the FIFO. 0h = Receive draining wakeup disabled 1h = Receive draining wakeup enabled |
| 12    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 11    | ROVR_WE  | R/W    | 0h      | Receive overrun wakeup enable 0h = Receive overrun wakeup disabled 1h = Receive overrun wakeup enabled                                                                                                                                                                                                                                                                                                                                                                            |
| 10    | XUDF_WE  | R/W    | 0h      | Transmit underflow wakeup enable 0h = Transmit underflow wakeup disabled 1h = Transmit underflow wakeup enabled                                                                                                                                                                                                                                                                                                                                                                   |

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## Table 21-16. I2C\_WE Register Field Descriptions (continued)

|   Bit | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     9 | AAS_WE   | R/W    | 0h      | Address as slave IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is in idle mode, and external master addresses the I2C module as a slave. This allows for the module to inform the CPU that it can check which of the own addresses was used by the external master to access the I2C core. 0h = Addressed as slave wakeup disabled 1h = Addressed as slave wakeup enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|     8 | BF_WE    | R/W    | 0h      | Bus free IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is in idle mode and the I2C bus became free. This allows for the module to inform the CPU that it can initiate its own transfer on the I2C line. 0h = Bus Free wakeup disabled 1h = Bus Free wakeup enabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|     7 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|     6 | STC_WE   | R/W    | 0h      | Start condition IRQ wakeup set. This read/write bit is used to enable or disable wakeup signal generation when I2C module is in idle mode (with the functional clock inactive) and a possible start condition is detected on the I2C line. The STC WakeUp is generated only if the I2C_SYSC.ClockActivity field indicates that the functional clock can be disabled. Note that if the functional clock is not active, the start condition is asynchronously detected (no filtering and synchronization is used). For this reason, it is possible that the signalized start condition to be a glitch. If the functional clock cannot be disabled (I2C_SYSC.ClockActivity = 10 or 11), the programmer should not enable this wakeup, since the module has other synchronously detected WakeUp event that might be used to exit from idle mode, only if the detected transfer is accessing the I2C module. 0h = Start condition wakeup disabled |
|     5 | GC_WE    | R/W    | 0h      | General call IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is in idle mode and a general call is received on I2C line. 0h = General call wakeup disabled                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|     4 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
|     3 | DRDY_WE  | R/W    | 0h      | Receive/Transmit data ready IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is involved into a long transfer and no more registers accesses are performed on the interface (for example module are set in F/S I2C master transmitter mode and FIFO is full). If in the middle of such a transaction, the FIFO buffer needs more data to be transferred, CPU must be informed to write (in case of transmitter mode) or read (if receiver mode) in/from the FIFO. 0h = Transmit/receive data ready wakeup disabled 1h = Transmit/receive data ready wakeup enabled                                                                                                                                                                                                                                                                                                               |
|     2 | ARDY_WE  | R/W    | 0h      | Register access ready IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is involved into a long transfer and no more registers accesses are performed on the interface (for example the module is set in F/S I2C master transmitter mode and FIFO is full). If the current transaction is finished, the module needs to inform CPU about transmission completion. 0h = Register access ready wakeup disabled 1h = Register access ready wakeup enabled                                                                                                                                                                                                                                                                                                                                                                                                                            |

## Table 21-16. I2C\_WE Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|-------|---------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     1 | NACK_WE | R/W    | 0h      | No acknowledgment IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is involved into a long transfer and no more registers accesses are performed on the interface (for example the module is set in F/S I2C master transmitter mode and FIFO is full). If in the middle of such of a transaction a Not Acknowledgment event is raised, the module needs to inform CPU about transmission error. 0h = Not Acknowledge wakeup disabled 1h = Not Acknowledge wakeup enabled                                                                                                                                                                                                                                                                                                                                        |
|     0 | AL_WE   | R/W    | 0h      | Arbitration lost IRQ wakeup enable. This read/write bit is used to enable or disable wakeup signal generation when I2C module is configured as a master and it loses the arbitration. This wake up is very useful when the module is configured as a master transmitter, all the necessary data is provided in the FIFO Tx, STT is enabled and the module enters in Idle Mode. If the module loses the arbitration, an Arbitration Lost event is raised and the module needs to inform CPU about transmission error. Note: The AL wakeup must be enabled only for multimaster communication. If the AL_WE is not enabled and the scenario described above occurs, the module will not be able to inform the CPU about the state of the transfer and it will be blocked in an undetermined state. 0h = Arbitration lost wakeup disabled 1h = Arbitration lost wakeup enabled |

<!-- image -->

<!-- image -->

www.ti.com

## 21.4.1.9 I2C\_DMARXENABLE\_SET Register (offset = 38h) [reset = 0h]

I2C\_DMARXENABLE\_SET is shown in Figure 21-24 and described in Table 21-17.

The 1-bit field enables a receive DMA request. Writing a 1 to this field will set it to 1. Writing a 0 will have no effect, that is, the register value is not modified. Note that the I2C\_BUF.RDMA\_EN field is the global (slave) DMA enabler, and that it is disabled by default. The I2C\_BUF.RDMA\_EN field should also be set to 1 to enable a receive DMA request.

## Figure 21-24. I2C\_DMARXENABLE\_SET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24                |
|----------|----------|----------|----------|----------|----------|----------|-------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h              |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16                |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h              |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED          |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h              |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0                 |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DMARX_ENAB LE_SET |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-17. I2C\_DMARXENABLE\_SET Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                     |
|-------|------------------|--------|---------|---------------------------------|
| 31-1  | RESERVED         | R      | 0h      |                                 |
| 0     | DMARX_ENABLE_SET | R/W    | 0h      | Receive DMA channel enable set. |

## 21.4.1.10 I2C\_DMATXENABLE\_SET Register (offset = 3Ch) [reset = 0h]

I2C\_DMATXENABLE\_SET is shown in Figure 21-25 and described in Table 21-18.

The 1-bit field enables a transmit DMA request. Writing a 1 to this field will set it to 1. Writing a 0 will have no effect, that is, the register value is not modified. Note that the I2C\_BUF.XDMA\_EN field is the global (slave) DMA enabler, and that it is disabled by default. The I2C\_BUF.XDMA\_EN field should also be set to 1 to enable a transmit DMA request.

Figure 21-25. I2C\_DMATXENABLE\_SET Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24                  |
|----------|----------|----------|----------|----------|----------|----------|---------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16                  |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DMATX_TRAN SMIT_SET |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-18. I2C\_DMATXENABLE\_SET Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                      |
|-------|--------------------|--------|---------|----------------------------------|
| 31-1  | RESERVED           | R      | 0h      |                                  |
| 0     | DMATX_TRANSMIT_SET | R/W    | 0h      | Transmit DMA channel enable set. |

<!-- image -->

<!-- image -->

## 21.4.1.11 I2C\_DMARXENABLE\_CLR Register (offset = 40h) [reset = 0h]

I2C\_DMARXENABLE\_CLR is shown in Figure 21-26 and described in Table 21-19.

The 1-bit field disables a receive DMA request. Writing a 1 to a bit will clear it to 0. Another result of setting to 1 the DMARX\_ENABLE\_CLEAR field, is the reset of the DMA RX request and wakeup lines. Writing a 0 will have no effect, that is, the register value is not modified.

## Figure 21-26. I2C\_DMARXENABLE\_CLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24                  |
|----------|----------|----------|----------|----------|----------|----------|---------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16                  |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DMARX_ENAB LE_CLEAR |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-19. I2C\_DMARXENABLE\_CLR Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                       |
|-------|---------------------|--------|---------|-----------------------------------|
| 31-1  | RESERVED            | R      | 0h      |                                   |
| 0     | DMARX_ENABLE_CLEA R | R/W    | 0h      | Receive DMA channel enable clear. |

## 21.4.1.12 I2C\_DMATXENABLE\_CLR Register (offset = 44h) [reset = 0h]

I2C\_DMATXENABLE\_CLR is shown in Figure 21-27 and described in Table 21-20.

The 1-bit field disables a transmit DMA request. Writing a 1 to a bit will clear it to 0. Another result of setting to 1 the DMATX\_ENABLE\_CLEAR field, is the reset of the DMA TX request and wakeup lines. Writing a 0 will have no effect, that is, the register value is not modified.

## Figure 21-27. I2C\_DMATXENABLE\_CLR Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24                  |
|----------|----------|----------|----------|----------|----------|----------|---------------------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16                  |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED            |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h                |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0                   |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | DMARX_ENAB LE_CLEAR |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-20. I2C\_DMATXENABLE\_CLR Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                       |
|-------|---------------------|--------|---------|-----------------------------------|
| 31-1  | RESERVED            | R      | 0h      |                                   |
| 0     | DMARX_ENABLE_CLEA R | R/W    | 0h      | Receive DMA channel enable clear. |

<!-- image -->

<!-- image -->

www.ti.com

## 21.4.1.13 I2C\_DMARXWAKE\_EN Register (offset = 48h) [reset = 0h]

I2C\_DMARXWAKE\_EN is shown in Figure 21-28 and described in Table 21-21.

All 1-bit fields enable a specific (synchronous) DMA request source to generate an asynchronous wakeup (on the appropriate swakeup line). Note that the I2C\_SYSC.ENAWAKEUP field is the global (slave) wakeup enabler, and that it is disabled by default.

## Figure 21-28. I2C\_DMARXWAKE\_EN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR      | RDR      | RESERVED | ROVR     | XUDF     | AAS      | BF       |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | STC      | GC       | RESERVED | DRDY     | ARDY     | NACK     | AL       |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-21. I2C\_DMARXWAKE\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                       |
| 14    | XDR      | R/W    | 0h      | Transmit draining wakeup set. 0h = Transmit draining interrupt disabled 1h = Transmit draining interrupt enabled      |
| 13    | RDR      | R/W    | 0h      | Receive draining wakeup set. 0h = Receive draining interrupt disabled 1h = Receive draining interrupt enabled         |
| 12    | RESERVED | R      | 0h      |                                                                                                                       |
| 11    | ROVR     | R/W    | 0h      | Receive overrun wakeup set. 0h = Receive overrun interrupt disabled 1h = Receive draining interrupt enabled           |
| 10    | XUDF     | R/W    | 0h      | Transmit underflow wakeup set. 0h = Transmit underflow interrupt disabled 1h = Transmit underflow interrupt enabled   |
| 9     | AAS      | R/W    | 0h      | Address as slave IRQ wakeup set. 0h = Addressed as slave interrupt disabled 1h = Addressed as slave interrupt enabled |
| 8     | BF       | R/W    | 0h      | Bus free IRQ wakeup set. 0h = Bus free wakeup disabled 1h = Bus free wakeup enabled                                   |
| 7     | RESERVED | R      | 0h      |                                                                                                                       |
| 6     | STC      | R/W    | 0h      | Start condition IRQ wakeup set. 0h = Start condition wakeup disabled 1h = Start condition wakeup enabled              |
| 5     | GC       | R/W    | 0h      | General call IRQ wakeup set. 0h = General call wakeup disabled 1h = General call wakeup enabled                       |
| 4     | RESERVED | R      | 0h      |                                                                                                                       |

<!-- image -->

Table 21-21. I2C\_DMARXWAKE\_EN Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                  |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | DRDY    | R/W    | 0h      | Receive/transmit data ready IRQ wakeup set. 0h = Transmit/receive data ready wakeup disabled 1h = Transmit/receive data ready wakeup enabled |
|     2 | ARDY    | R/W    | 0h      | Register access ready IRQ wakeup set. 0h = Register access ready wakeup disabled 1h = Register access ready wakeup enabled                   |
|     1 | NACK    | R/W    | 0h      | No acknowledgment IRQ wakeup set. 0h = Not Acknowledge wakeup disabled 1h = Not Acknowledge wakeup enabled                                   |
|     0 | AL      | R/W    | 0h      | Arbitration lost IRQ wakeup set. 0h = Arbitration lost wakeup disabled 1h = Arbitration lost wakeup enabled                                  |

<!-- image -->

www.ti.com

## 21.4.1.14 I2C\_DMATXWAKE\_EN Register (offset = 4Ch) [reset = 0h]

I2C\_DMATXWAKE\_EN is shown in Figure 21-29 and described in Table 21-22.

All 1-bit fields enable a specific (synchronous) DMA request source to generate an asynchronous wakeup (on the appropriate swakeup line). Note that the I2C\_SYSC.ENAWAKEUP field is the global (slave) wakeup enabler, and that it is disabled by default.

## Figure 21-29. I2C\_DMATXWAKE\_EN Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | XDR      | RDR      | RESERVED | ROVR     | XUDF     | AAS      | BF       |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | STC      | GC       | RESERVED | DRDY     | ARDY     | NACK     | AL       |
| R-0h     | R/W-0h   | R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-22. I2C\_DMATXWAKE\_EN Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------|
| 31-15 | RESERVED | R      | 0h      |                                                                                                                       |
| 14    | XDR      | R/W    | 0h      | Transmit draining wakeup set. 0h = Transmit draining interrupt disabled 1h = Transmit draining interrupt enabled      |
| 13    | RDR      | R/W    | 0h      | Receive draining wakeup set. 0h = Receive draining interrupt disabled 1h = Receive draining interrupt enabled         |
| 12    | RESERVED | R      | 0h      |                                                                                                                       |
| 11    | ROVR     | R/W    | 0h      | Receive overrun wakeup set. 0h = Receive overrun interrupt disabled 1h = Receive draining interrupt enabled           |
| 10    | XUDF     | R/W    | 0h      | Transmit underflow wakeup set. 0h = Transmit underflow interrupt disabled 1h = Transmit underflow interrupt enabled   |
| 9     | AAS      | R/W    | 0h      | Address as slave IRQ wakeup set. 0h = Addressed as slave interrupt disabled 1h = Addressed as slave interrupt enabled |
| 8     | BF       | R/W    | 0h      | Bus free IRQ wakeup set. 0h = Bus free wakeup disabled 1h = Bus free wakeup enabled                                   |
| 7     | RESERVED | R      | 0h      |                                                                                                                       |
| 6     | STC      | R/W    | 0h      | Start condition IRQ wakeup set. 0h = Start condition wakeup disabled 1h = Start condition wakeup enabled              |
| 5     | GC       | R/W    | 0h      | General call IRQ wakeup set. 0h = General call wakeup disabled 1h = General call wakeup enabled                       |
| 4     | RESERVED | R      | 0h      |                                                                                                                       |

<!-- image -->

## Table 21-22. I2C\_DMATXWAKE\_EN Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                  |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | DRDY    | R/W    | 0h      | Receive/transmit data ready IRQ wakeup set. 0h = Transmit/receive data ready wakeup disabled 1h = Transmit/receive data ready wakeup enabled |
|     2 | ARDY    | R/W    | 0h      | Register access ready IRQ wakeup set. 0h = Register access ready wakeup disabled 1h = Register access ready wakeup enabled                   |
|     1 | NACK    | R/W    | 0h      | No acknowledgment IRQ wakeup set. 0h = Not Acknowledge wakeup disabled 1h = Not Acknowledge wakeup enabled                                   |
|     0 | AL      | R/W    | 0h      | Arbitration lost IRQ wakeup set. 0h = Arbitration lost wakeup disabled 1h = Arbitration lost wakeup enabled                                  |

<!-- image -->

## 21.4.1.15 I2C\_SYSS Register (offset = 90h) [reset = 0h]

I2C\_SYSS is shown in Figure 21-30 and described in Table 21-23.

## Figure 21-30. I2C\_SYSS Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RDONE    |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-23. I2C\_SYSS Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-1  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                             |
| 0     | RDONE    | R/W    | 0h      | Reset done bit. This read-only bit indicates the state of the reset in case of hardware reset, global software reset (I2C_SYSC.SRST) or partial software reset (I2C_CON.I2C_EN). The module must receive all its clocks before it can grant a reset- completed status. Value after reset is low. 0h = Internal module reset in ongoing 1h = Reset completed |

## 21.4.1.16 I2C\_BUF Register (offset = 94h) [reset = 0h]

I2C\_BUF is shown in Figure 21-31 and described in Table 21-24.

This read/write register enables DMA transfers and allows the configuration of FIFO thresholds for the FIFO management (see the FIFO Management subsection).

Figure 21-31. I2C\_BUF Register

| 31       | 30         | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|------------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22         | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14         | 13       | 12       | 11       | 10       | 9        | 8        |
| RDMA_EN  | RXFIFO_CLR |          |          | RXTRSH   |          |          |          |
| R/W-0h   | R/W-0h     |          |          | R/W-0h   |          |          |          |
| 7        | 6          | 5        | 4        | 3        | 2        | 1        | 0        |
| XDMA_EN  | TXFIFO_CLR |          |          | TXTRSH   |          |          |          |
| R/W-0h   | R/W-0h     |          |          | R/W-0h   |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-24. I2C\_BUF Register Field Descriptions

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
|-------|------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 15    | RDMA_EN    | R/W    | 0h      | Receive DMA channel enable. When this bit is set to 1, the receive DMA channel is enabled and the receive data ready status bit (I2C_IRQSTATUS_RAW: RRDY) is forced to 0 by the core. Value after reset is low. 0h = Receive DMA channel disabled 1h = Receive DMA channel enabled                                                                                                                                                                                                                                                                                                                                                        |
| 14    | RXFIFO_CLR | R/W    | 0h      | Receive FIFO clear. When set, receive FIFO is cleared (hardware reset for RX FIFO generated). This bit is automatically reset by the hardware. During reads, it always returns 0. Value after reset is low. 0h = Normal mode 1h = Rx FIFO is reset                                                                                                                                                                                                                                                                                                                                                                                        |
| 13-8  | RXTRSH     | R/W    | 0h      | Threshold value for FIFO buffer in RX mode. The receive threshold value is used to specify the trigger level for data receive transfers. The value is specified from the Interface/OCP point of view. Value after reset is 00h. For the FIFO management description, see the FIFO Management subsection. Note 1: programmed threshold cannot exceed the actual depth of the FIFO. Note 2: the threshold must not be changed while a transfer is in progress (after STT was configured or after the module was addressed as a slave). 0h = Receive Threshold value = 1 1h = Receive Threshold value = 2 3Fh = Receive Threshold value = 64 |

<!-- image -->

<!-- image -->

## Table 21-24. I2C\_BUF Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 7     | XDMA_EN    | R/W    | 0h      | Transmit DMA channel enable. When this bit is set to 1, the transmit DMA channel is enabled and the transmit data ready status (I2C_IRQSTATUS_RAW: XRDY) bit is forced to 0 by the core. Value after reset is low. 0h = Transmit DMA channel disabled 1h = Transmit DMA channel enabled                                                                                                                                                                                                                                                           |
| 6     | TXFIFO_CLR | R/W    | 0h      | Transmit FIFO clear. When set, transmit FIFO is cleared (hardware reset for TX FIFO). This bit is automatically reset by the hardware. During reads, it always returns 0. Value after reset is low. 0h = Normal mode 1h = Tx FIFO is reset                                                                                                                                                                                                                                                                                                        |
| 5-0   | TXTRSH     | R/W    | 0h      | Threshold value for FIFO buffer in TX mode. The Transmit Threshold value is used to specify the trigger level for data transfers. The value is specified from the OCP point of view. Value after reset is 00h Note 1: programmed threshold cannot exceed the actual depth of the FIFO. Note 2: the threshold must not be changed while a transfer is in progress (after STT was configured or after the module was addressed as a slave). 0h = Transmit Threshold value = 1 1h = Transmit Threshold value = 2 3Fh = Transmit Threshold value = 64 |

## 21.4.1.17 I2C\_CNT Register (offset = 98h) [reset = 0h]

I2C\_CNT is shown in Figure 21-32 and described in Table 21-25.

CAUTION: During an active transfer phase (between STT having been set to 1 and reception of ARDY), no modification must be done in this register. Changing it may result in an unpredictable behavior. This read/write register is used to control the numbers of bytes in the I2C data payload.

## Figure 21-32. I2C\_CNT Register

| 31 30    | 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1   |
|----------|---------------------------------------------------------------------------------|
| RESERVED | DCOUNT                                                                          |
| R-0h     | R/W-0h                                                                          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-25. I2C\_CNT Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| 15-0  | DCOUNT   | R/W    | 0h      | Data count. I2C Master Mode only (receive or transmit F/S). This 16-bit countdown counter decrements by 1 for every byte received or sent through the I2C interface. A write initializes DCOUNT to a saved initial value. A read returns the number of bytes that are yet to be received or sent. A read into DCOUNT returns the initial value only before a start condition and after a stop condition. When DCOUNT reaches 0, the core generates a stop condition if a stop condition was specified (I2C_CON.STP = 1) and the ARDY status flag is set to 1 in the I2C_IRQSTATUS_RAW register. Note that DCOUNT must not be reconfigured after I2C_CON.STT was enabled and before ARDY is received. Note 1: In case of I2C mode of operation, if I2C_CON.STP = 0, then the I2C asserts SCL = 0 when DCOUNT reaches 0. The CPU can then reprogram DCOUNT to a new value and resume sending or receiving data with a new start condition (restart). This process repeats until the CPU sets to 1 the I2C_CON.STP bit. The ARDY flag is set each time DCOUNT reaches 0 and DCOUNT is reloaded to its initial value. Values after reset are low (all 16 bits). Note 2: Since for DCOUNT = 0, the transfer length is 65536, the module does not allow the possibility to initiate zero data bytes transfers. 0h = Data counter = 65536 bytes (216) 1h = Data counter = 1 bytes FFFFh = Data counter = 65535 bytes (216 - 1) |

<!-- image -->

<!-- image -->

## 21.4.1.18 I2C\_DATA Register (offset = 9Ch) [reset = 0h]

I2C\_DATA is shown in Figure 21-33 and described in Table 21-26.

This register is the entry point for the local host to read data from or write data to the FIFO buffer.

## Figure 21-33. I2C\_DATA Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11   | 10 9 8 7 6 5 4 3 2 1 0   |
|------------------------------------------------------------------|--------------------------|
| RESERVED                                                         | DATA                     |
| R-0h                                                             | R/W-0h                   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-26. I2C\_DATA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 7-0   | DATA     | R/W    | 0h      | Transmit/Receive data FIFO endpoint. When read, this register contains the received I2C data. When written, this register contains the byte value to transmit over the I2C data. In SYSTEST loop back mode (I2C_SYSTEST: TMODE = 11), this register is also the entry/receive point for the data. Values after reset are unknown (all 8-bits). Note: A read access, when the buffer is empty, returns the previous read data value. A write access, when the buffer is full, is ignored. In both events, the FIFO pointers are not updated and an Access Error (AERR) Interrupt is generated. |

## 21.4.1.19 I2C\_CON Register (offset = A4h) [reset = 0h]

I2C\_CON is shown in Figure 21-34 and described in Table 21-27.

During an active transfer phase (between STT having been set to 1 and reception of ARDY), no modification must be done in this register (except STP enable). Changing it may result in an unpredictable behavior.

## Figure 21-34. I2C\_CON Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| I2C_EN   | RESERVED | OPMODE   | OPMODE   | STB      | MST      | TRX      | XSA      |
| R/W-0h   | R-0h     | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| XOA0     | XOA1     | XOA2     | XOA3     | RESERVED | RESERVED | STP      | STT      |
| R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   | R-0h     | R-0h     | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-27. I2C\_CON Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 15    | I2C_EN   | R/W    | 0h      | I2C module enable. When this bit is cleared to 0, the I2C controller is not enabled and reset. When 0, receive and transmit FIFOs are cleared and all status bits are set to their default values. All configuration registers (I2C_IRQENABLE_SET, I2C_IRQWAKE_SET, I2C_BUF, I2C_CNT, I2C_CON, I2C_OA, I2C_SA, I2C_PSC, I2C_SCLL and I2C_SCLH) are not reset, they keep their initial values and can be accessed. The CPU must set this bit to 1 for normal operation. Value after reset is low. 0h = Controller in reset. FIFO are cleared and status bits are set to their default value. 1h = Module enabled |
| 14    | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 13-12 | OPMODE   | R/W    | 0h      | Operation mode selection. These two bits select module operation mode. Value after reset is 00. 0h = I2C Fast/Standard mode 1h = Reserved 2h = Reserved 3h = Reserved                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| 11    | STB      | R/W    | 0h      | Start byte mode (I2C master mode only). The start byte mode bit is set to 1 by the CPU to configure the I2C in start byte mode (I2C_SA = 0000 0001). See the Philips I2C spec for more details [1]. Value after reset is low. 0h = Normal mode 1h = Start byte mode                                                                                                                                                                                                                                                                                                                                             |

<!-- image -->

<!-- image -->

www.ti.com

## Table 21-27. I2C\_CON Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|---------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|    10 | MST     | R/W    | 0h      | Master/slave mode (I2C mode only). When this bit is cleared, the I2C controller is in the slave mode and the serial clock (SCL) is received from the master device. When this bit is set, the I2C controller is in the master mode and generates the serial clock. Note: This bit is automatically cleared at the end of the transfer on a detected stop condition, in case of arbitration lost or when the module is configured as a master but addressed as a slave by an external master. Value after reset is low. 0h = Slave mode 1h = Master mode                                                                                                                                                                        |
|     9 | TRX     | R/W    | 0h      | Transmitter/receiver mode (i2C master mode only). When this bit is cleared, the I2C controller is in the receiver mode and data on data line SDA is shifted into the receiver FIFO and can be read from I2C_DATA register. When this bit is set, the I2C controller is in the transmitter mode and the data written in the transmitter FIFO via I2C_DATA is shifted out on data line SDA. Value after reset is low. The operating modes are defined as follows: MST = 0, TRX = x, Operating Mode = Slave receiver. MST = 0, TRX = x, Operating Mode = Slave transmitter. MST = 1, TRX = 0, Operating Modes = Master receiver. MST = 1, TRX = 1, Operating Modes = Master transmitter. 0h = Receiver mode 1h = Transmitter mode |
|     8 | XSA     | R/W    | 0h      | Expand slave address. (I2C mode only). When set, this bit expands the slave address to 10-bit. Value after reset is low. 0h = 7-bit address mode 1h = 10-bit address mode                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
|     7 | XOA0    | R/W    | 0h      | Expand own address 0. (I2C mode only). When set, this bit expands the base own address (OA0) to 10-bit. Value after reset is low. 0h = 7-bit address mode 1h = 10-bit address mode                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|     6 | XOA1    | R/W    | 0h      | Expand own address 1. (I2C mode only). When set, this bit expands the first alternative own address (OA1) to 10-bit. Value after reset is low. 0h = 7-bit address mode 1h = 10-bit address mode                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|     5 | XOA2    | R/W    | 0h      | Expand own address 2. (I2C mode only). When set, this bit expands the second alternative own address (OA2) to 10-bit. Value after reset is low. 0h = 7-bit address mode. (I2C mode only). 1h = 10-bit address mode                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
|     4 | XOA3    | R/W    | 0h      | Expand own address 3. When set, this bit expands the third alternative own address (OA3) to 10-bit. Value after reset is low. 0h = 7-bit address mode                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |

## Table 21-27. I2C\_CON Register Field Descriptions (continued)

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 3-2   | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 1     | STP      | R/W    | 0h      | Stop condition (I2C master mode only). This bit can be set to a 1 by the CPU to generate a stop condition. It is reset to 0 by the hardware after the stop condition has been generated. The stop condition is generated when DCOUNT passes 0. When this bit is not set to 1 before the end of the transfer (DCOUNT = 0), the stop condition is not generated and the SCL line is hold to 0 by the master, which can re-start a new transfer by setting the STT bit to 1. Value after reset is low 0h = No action or stop condition detected 1h = Stop condition queried                                                                                                                                                          |
| 0     | STT      | R/W    | 0h      | Start condition (I2C master mode only). This bit can be set to a 1 by the CPU to generate a start condition. It is reset to 0 by the hardware after the start condition has been generated. The start/stop bits can be configured to generate different transfer formats. Value after reset is low. Note: DCOUNT is data count value in I2C_CNT register. STT = 1, STP = 0, Conditions = Start, Bus Activities = S-A-D. STT = 0, STP = 1, Conditions = Stop, Bus Activities = P. STT = 1, STP = 1, Conditions = Start-Stop (DCOUNT=n), Bus Activities = S-A-D..(n)..D-P. STT = 1, STP = 0, Conditions = Start (DCOUNT=n), Bus Activities = S-A-D..(n)..D. 0h = No action or start condition detected 1h = Start condition queried |

<!-- image -->

<!-- image -->

## 21.4.1.20 I2C\_OA Register (offset = A8h) [reset = 0h]

I2C\_OA is shown in Figure 21-35 and described in Table 21-28.

CAUTION: During an active transfer phase (between STT having been set to 1 and reception of ARDY), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to specify the module s base I2C 7-bit or 10-bit address (base own address).

## Figure 21-35. I2C\_OA Register

| 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 RESERVED OA   |
|-----------------------------------------------------------------------------------------|
| R-0h R/W-0h                                                                             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-28. I2C\_OA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                         |
| 9-0   | OA       | R/W    | 0h      | Own address. This field specifies either: A 10-bit address coded on OA [9:0] when XOA (Expand Own Address, I2C_CON[7]) is set to 1. or A 7-bit address coded on OA [6:0] when XOA (Expand Own Address, I2C_CON[7]) is cleared to 0. In this case, OA [9:7] bits must be cleared to 000 by application software. Value after reset is low (all 10 bits). |

## 21.4.1.21 I2C\_SA Register (offset = ACh) [reset = 0h]

I2C\_SA is shown in Figure 21-36 and described in Table 21-29.

CAUTION: During an active transfer phase (between STT having been set to 1 and reception of ARDY), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to specify the addressed I2C module 7-bit or 10-bit address (slave address).

## Figure 21-36. I2C\_SA Register

| 31 30 29 28 27   | 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 RESERVED   | 3 2 1 SA   |
|------------------|---------------------------------------------------------------------------|------------|
|                  | R-0h                                                                      |            |
|                  |                                                                           | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-29. I2C\_SA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                   |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                               |
| 9-0   | SA       | R/W    | 0h      | Slave address. This field specifies either: A 10-bit address coded on SA [9:0] when XSA (Expand Slave Address, I2C_CON[8]) is set to 1. or A 7-bit address coded on SA [6:0] when XSA (Expand Slave Address, I2C_CON[8]) is cleared to 0. In this case, SA [9:7] bits must be cleared to 000 by application software. Value after reset is low (all 10 bits). |

<!-- image -->

<!-- image -->

## 21.4.1.22 I2C\_PSC Register (offset = B0h) [reset = 0h]

I2C\_PSC is shown in Figure 21-37 and described in Table 21-30.

CAUTION: During an active mode (I2C\_EN bit in I2C\_CON register is set to 1), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to specify the internal clocking of the I2C peripheral core.

## Figure 21-37. I2C\_PSC Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14   | 13 12 11 10 9 8 7 6 5 4 3 2 1 RESERVED PSC   |        |
|---------------------------------------------------------|----------------------------------------------|--------|
|                                                         | R-0h                                         | R/W-0h |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-30. I2C\_PSC Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                              |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                          |
| 7-0   | PSC      | R/W    | 0h      | Fast/Standard mode prescale sampling clock divider value. The core uses this 8-bit value to divide the system clock (SCLK) and generates its own internal sampling clock (ICLK) for Fast and Standard operation modes. The core logic is sampled at the clock rate of the system clock for the module divided by (PSC + 1). Value after reset is low (all 8 bits). 0h = Divide by 1 1h = Divide by 2 FFh = Divide by 256 |

## 21.4.1.23 I2C\_SCLL Register (offset = B4h) [reset = 0h]

I2C\_SCLL is shown in Figure 21-38 and described in Table 21-31.

CAUTION: During an active mode (I2C\_EN bit in I2C\_CON register is set to 1), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to determine the SCL low time value when master.

## Figure 21-38. I2C\_SCLL Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 RESERVED   | 12 11 10 9 8 7 6 5 4 3 2 1 0 SCLL   |
|---------------------------------------------------------------------|-------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-31. I2C\_SCLL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                  |
|-------|----------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                              |
| 7-0   | SCLL     | R/W    | 0h      | Fast/Standard mode SCL low time. I2C master mode only, (FS). This 8-bit value is used to generate the SCL low time value (tLOW) when the peripheral is operated in master mode. tLOW = (SCLL + 7) * ICLK time period, Value after reset is low (all 8 bits). |

<!-- image -->

www.ti.com

<!-- image -->

## 21.4.1.24 I2C\_SCLH Register (offset = B8h) [reset = 0h]

I2C\_SCLH is shown in Figure 21-39 and described in Table 21-32.

CAUTION: During an active mode (I2C\_EN bit in I2C\_CON register is set to 1), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to determine the SCL high time value when master.

## Figure 21-39. I2C\_SCLH Register

| 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 RESERVED   | 12 11 10 9 8 7 6 5 4 3 2 1 0 SCLH   |
|---------------------------------------------------------------------|-------------------------------------|

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-32. I2C\_SCLH Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                       |
|-------|----------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                   |
| 7-0   | SCLH     | R/W    | 0h      | Fast/Standard mode SCL low time. I2C master mode only, (FS). This 8-bit value is used to generate the SCL high time value (tHIGH) when the peripheral is operated in master mode. - tHIGH = (SCLH + 5) * ICLK time period. Value after reset is low (all 8 bits). |

## 21.4.1.25 I2C\_SYSTEST Register (offset = BCh) [reset = 0h]

I2C\_SYSTEST is shown in Figure 21-40 and described in Table 21-33.

CAUTION: Never enable this register for normal I2C operation This register is used to facilitate systemlevel tests by overriding some of the standard functional features of the peripheral. It allows testing of SCL counters, controlling the signals that connect to I/O pins, or creating digital loop-back for self-test when the module is configured in system test (SYSTEST) mode. It also provides stop/non-stop functionality in the debug mode.

Figure 21-40. I2C\_SYSTEST Register

| 31         | 30         | 29         | 28       | 27       | 26       | 25       | 24         |
|------------|------------|------------|----------|----------|----------|----------|------------|
| RESERVED   | RESERVED   | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 23         | 22         | 21         | 20       | 19       | 18       | 17       | 16         |
| RESERVED   | RESERVED   | RESERVED   | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED   |
| R-0h       | R-0h       | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |
| 15         | 14         | 13         | 12       | 11       | 10       | 9        | 8          |
| ST_EN      | FREE       | TMODE      | TMODE    | SSB      | RESERVED | RESERVED | SCL_I_FUNC |
| R/W-0h     | R/W-0h     | R/W-0h     | R/W-0h   | R/W-0h   | R-0h     | R-0h     | R-0h       |
| 7          | 6          | 5          | 4        | 3        | 2        | 1        | 0          |
| SCL_O_FUNC | SDA_I_FUNC | SDA_O_FUNC | RESERVED | SCL_I    | SCL_O    | SDA_I    | SDA_O      |
| R-0h       | R-0h       | R-0h       | R-0h     | R-0h     | R-0h     | R-0h     | R-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-33. I2C\_SYSTEST Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| 15    | ST_EN    | R/W    | 0h      | System test enable. This bit must be set to 1 to permit other system test registers bits to be set. Value after reset is low. 0h = Normal mode. All others bits in register are read only. 1h = System test enabled. Permit other system test registers bits to be set.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| 14    | FREE     | R/W    | 0h      | Free running mode (on breakpoint). This bit is used to determine the state of the I2C controller when a breakpoint is encountered in the HLL debugger. Note: This bit can be set independently of ST_EN value. FREE = 0: the I2C controller stops immediately after completion of the on- going bit transfer. Stopping the transfer is achieved by forcing the SCL line low. Note that in this case there will be no status register updates. FREE = 1: the I2C interface runs free. When Suspend indication will be asserted, there will be no accesses on the OCP Interface (the CPU is in debug mode) and consequently the FIFOs will reach full/empty state (according to RX or TX modes) and the I2C SDA line will be kept low. Note that the status registers will be updated, but no DMA, IRQ or WakeUp will be generated. The status registers likely to be updated in this mode are: I2C_IRQSTATUS_RAW.XRDY, I2C_IRQSTATUS_RAW.RRDY, I2C_IRQSTATUS_RAW.XUDF, I2C_IRQSTATUS_RAW.ROVR, I2C_IRQSTATUS_RAW.ARDY and I2C_IRQSTATUS_RAW.NACK. Value after reset is low. 0h = Stop mode (on breakpoint condition). If Master mode, it stops after completion of the on-going bit transfer. In slave mode, it stops during the phase transfer when 1 byte is completely transmitted/received. 1h = Free running mode |

<!-- image -->

<!-- image -->

www.ti.com

## Table 21-33. I2C\_SYSTEST Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 13-12 | TMODE      | R/W    | 0h      | Test mode select. In normal functional mode (ST_EN = 0), these bits are don't care. They are always read as 00 and a write is ignored. In system test mode (ST_EN = 1), these bits can be set according to the following table to permit various system tests. Values after reset are low (2 bits). SCL counter test mode: in this mode, the SCL pin is driven with a permanent clock as if mastered with the parameters set in the I2C_PSC, I2C_SCLL, and I2C_SCLH registers. Loop back mode: in the master transmit mode only, data transmitted out of the I2C_DATA register (write action) is received in the same I2C_DATA register via an internal path through the FIFO buffer. The DMA and interrupt requests are normally generated if enabled. SDA/SCL IO mode: in this mode, the SCL IO and SDA IO are controlled via the I2C_SYSTEST [5:0] register bits. 0h = Functional mode (default) 1h = Reserved 2h = Test of SCL counters (SCLL, SCLH, PSC). SCL provides a permanent clock with master mode. |
| 11    | SSB        | R/W    | 0h      | Set status bits. Writing 1 into this bit also sets the 6 read/clear-only status bits contained in I2C_IRQSTATUS_RAW register (bits 5:0) to 1. Writing 0 into this bit doesn't clear status bits that are already set only writing 1 into a set status bit can clear it (see I2C_IRQSTATUS_RAW operation). This bit must be cleared prior attempting to clear a status bit. Value after reset is low. 0h = No action. 1h = Set all interrupt status bits to 1.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 10-9  | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 8     | SCL_I_FUNC | R      | 0h      | SCL line input value (functional mode). This read-only bit returns the logical state taken by the SCL line (either 1 or 0). It is active both in functional and test mode. Value after reset is low. 0h (R) = Read 0 from SCL line 1h (R) = Read 1 from SCL line                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 7     | SCL_O_FUNC | R      | 0h      | SCL line output value (functional mode). This read-only bit returns the value driven by the module on the SCL line (either 1 or 0). It is active both in functional and test mode. Value after reset is low. 0h (R) = Driven 0 on SCL line                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| 6     | SDA_I_FUNC | R      | 0h      | SDA line input value (functional mode). This read-only bit returns the logical state taken by the SDA line (either 1 or 0). It is active both in functional and test mode. Value after reset is low. 0h (R) = Read 0 from SDA line 1h (R) = Read 1 from SDA line                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 5     | SDA_O_FUNC | R      | 0h      | SDA line output value (functional mode). This read-only bit returns the value driven by the module on the SDA line (either 1 or 0). It is active both in functional and test mode. Value after reset is low. 0h (R) = Driven 0 to SDA line 1h (R) = Driven 1 to SDA line                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| 4     | RESERVED   | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<!-- image -->

## Table 21-33. I2C\_SYSTEST Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                    |
|-------|---------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     3 | SCL_I   | R      | 0h      | SCL line sense input value. In normal functional mode (ST_EN = 0), this read-only bit always reads 0. In system test mode (ST_EN = 1 and TMODE = 11), this read-only bit returns the logical state taken by the SCL line (either 1 or 0). Value after reset is low. 0h (R) = Read 0 from SCL line 1h (R) = Read 1 from SCL line                                                                                |
|     2 | SCL_O   | R      | 0h      | SCL line drive output value. In normal functional mode (ST_EN = 0), this bit is don't care. It always reads 0 and a write is ignored. In system test mode (ST_EN = 1 and TMODE = 11), a 0 forces a low level on the SCL line and a 1 puts the I2C output driver to a high-impedance state. Value after reset is low. 0h (R) = Forces 0 on the SCL data line 1h (R) = SCL output driver in high-impedance state |
|     1 | SDA_I   | R      | 0h      | SDA line sense input value. In normal functional mode (ST_EN = 0), this read-only bit always reads 0. In system test mode (ST_EN = 1 and TMODE = 11), this read-only bit returns the logical state taken by the SDA line (either 1 or 0). Value after reset is low. 0h (R) = Read 0 from SDA line 1h (R) = Read 1 from SDA line                                                                                |
|     0 | SDA_O   | R      | 0h      | SDA line drive output value. In normal functional mode (ST_EN = 0), this bit is don't care. It reads as 0 and a write is ignored. In system test mode (ST_EN = 1 and TMODE = 11), a 0 forces a low level on the SDA line and a 1 puts the I2C output driver to a high-impedance state. Value after reset is low. 0h = Write 0 to SDA line 1h = Write 1 to SDA line                                             |

<!-- image -->

## 21.4.1.26 I2C\_BUFSTAT Register (offset = C0h) [reset = 0h]

I2C\_BUFSTAT is shown in Figure 21-41 and described in Table 21-34.

This read-only register reflects the status of the internal buffers for the FIFO management (see the FIFO Management subsection).

Figure 21-41. I2C\_BUFSTAT Register

| 31        | 30        | 29       | 28       | 27       | 26       | 25       | 24       |
|-----------|-----------|----------|----------|----------|----------|----------|----------|
| RESERVED  | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23        | 22        | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED  | RESERVED  | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15        | 14        | 13       | 12       | 11       | 10       | 9        | 8        |
| FIFODEPTH | FIFODEPTH | RXSTAT   | RXSTAT   | RXSTAT   | RXSTAT   | RXSTAT   | RXSTAT   |
| R-2h      | R-2h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7         | 6         | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED  | RESERVED  | TXSTAT   | TXSTAT   | TXSTAT   | TXSTAT   | TXSTAT   | TXSTAT   |
| R-0h      | R-0h      | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 21-34. I2C\_BUFSTAT Register Field Descriptions

| Bit   | Field     | Type   | Reset   | Description                                                                                                                                                                                                                                                                                         |
|-------|-----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                     |
| 15-14 | FIFODEPTH | R      | 2h      | Internal FIFO buffers depth. This read-only bit indicates the internal FIFO buffer depth. Value after reset is given by the boundary module generic parameter. 0h = 8-bytes FIFO 1h = 16-bytes FIFO 2h = 32-bytes FIFO 3h = 64-bytes FIFO                                                           |
| 13-8  | RXSTAT    | R      | 0h      | RX buffer status. This read-only field indicates the number of bytes to be transferred from the FIFO at the end of the I2C transfer (when RDR is asserted). It corresponds to the level indication of the RX FIFO (number of written locations). Value after reset is 0.                            |
| 7-6   | RESERVED  | R      | 0h      |                                                                                                                                                                                                                                                                                                     |
| 5-0   | TXSTAT    | R      | 0h      | TX buffer status. This read-only field indicates the number of data bytes still left to be written in the TX FIFO (it s equal with the initial value of I2C_CNT.DCOUNT minus the number of data bytes already written in the TX FIFO through the OCP Interface). Value after reset is equal with 0. |

## 21.4.1.27 I2C\_OA1 Register (offset = C4h) [reset = 0h]

I2C\_OA1 is shown in Figure 21-42 and described in Table 21-35.

CAUTION: During an active transfer phase (between STT has been set to 1 and receiving of ARDY), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to specify the first alternative I2C 7-bit or 10-bit address (own address 1 - OA1).

## Figure 21-42. I2C\_OA1 Register

| 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 RESERVED OA1   |
|------------------------------------------------------------------------------------------|
| R-0h R/W-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-35. I2C\_OA1 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                             |
| 9-0   | OA1      | R/W    | 0h      | Own address 1. This field specifies either: A 10-bit address coded on OA1 [9:0] when XOA1 (Expand Own Address 1 - XOA1, I2C_CON[6]) is set to 1. A 7-bit address coded on OA1 [6:0] when XOA1 (Expand Own Address 1 XOA1, I2C_CON[6]) is cleared to 0. In this case, OA1 [9:7] bits must be cleared to 000 by application software. Value after reset is low (all 10 bits). |

<!-- image -->

www.ti.com

<!-- image -->

## 21.4.1.28 I2C\_OA2 Register (offset = C8h) [reset = 0h]

I2C\_OA2 is shown in Figure 21-43 and described in Table 21-36.

CAUTION: During an active transfer phase (between STT has been set to 1 and receiving of ARDY), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to specify the first alternative I2C 7-bit or 10-bit address (own address 2 - OA2).

## Figure 21-43. I2C\_OA2 Register

| 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 RESERVED OA2   |
|------------------------------------------------------------------------------------------|
| R-0h R/W-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-36. I2C\_OA2 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                             |
| 9-0   | OA2      | R/W    | 0h      | Own address 2. This field specifies either: A 10-bit address coded on OA2 [9:0] when XOA1 (Expand Own Address 2 - XOA2, I2C_CON[5]) is set to 1. A 7-bit address coded on OA2 [6:0] when XOA2 (Expand Own Address 2 XOA2, I2C_CON[5]) is cleared to 0. In this case, OA2 [9:7] bits must be cleared to 000 by application software. Value after reset is low (all 10 bits). |

## 21.4.1.29 I2C\_OA3 Register (offset = CCh) [reset = 0h]

I2C\_OA3 is shown in Figure 21-44 and described in Table 21-37.

CAUTION: During an active transfer phase (between STT has been set to 1 and receiving of ARDY), no modification must be done in this register. Changing it may result in an unpredictable behavior. This register is used to specify the first alternative I2C 7-bit or 10-bit address (own address 3 - OA3).

## Figure 21-44. I2C\_OA3 Register

| 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 RESERVED OA3   |
|------------------------------------------------------------------------------------------|
| R-0h R/W-0h                                                                              |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-37. I2C\_OA3 Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                             |
| 9-0   | OA3      | R/W    | 0h      | Own address 2. This field specifies either: A 10-bit address coded on OA3 [9:0] when XOA3 (Expand Own Address 3 - XOA3, I2C_CON[4]) is set to 1. A 7-bit address coded on OA3 [6:0] when XOA1 (Expand Own Address 3 XOA3, I2C_CON[4]) is cleared to 0. In this case, OA3 [9:7] bits must be cleared to 000 by application software. Value after reset is low (all 10 bits). |

<!-- image -->

<!-- image -->

www.ti.com

## 21.4.1.30 I2C\_ACTOA Register (offset = D0h) [reset = 0h]

I2C\_ACTOA is shown in Figure 21-45 and described in Table 21-38.

This read-only register is used to indicate which one of the module s four own addresses the external master used when addressing the module. The CPU can read this register when the AAS indication was activated. The indication is cleared at the end of the transfer.

## Figure 21-45. I2C\_ACTOA Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
| RESERVED | RESERVED | RESERVED |          | OA3_ACT  | OA2_ACT  | OA1_ACT  | OA0_ACT  |
|          |          |          |          | R-0h     | R-0h     | R-0h     | R-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-38. I2C\_ACTOA Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                      |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                  |
| 3     | OA3_ACT  | R      | 0h      | Own address 3 active. When a bit location is set to 1 by the core, it signalizes to the Local Host that an external master using the corresponding own address addressed the module. Value after reset is low. 0h = Own address inactive 1h = Own address active |
| 2     | OA2_ACT  | R      | 0h      | Own address 2 active. When a bit location is set to 1 by the core, it signalizes to the Local Host that an external master using the corresponding own address addressed the module. Value after reset is low. 0h = Own address inactive 1h = Own address active |
| 1     | OA1_ACT  | R      | 0h      | Own address 1 active. When a bit location is set to 1 by the core, it signalizes to the Local Host that an external master using the corresponding own address addressed the module. Value after reset is low. 0h = Own address inactive 1h = Own address active |
| 0     | OA0_ACT  | R      | 0h      | Own address 0 active. When a bit location is set to 1 by the core, it signalizes to the Local Host that an external master using the corresponding own address addressed the module. Value after reset is low. 0h = Own address inactive 1h = Own address active |

## 21.4.1.31 I2C\_SBLOCK Register (offset = D4h) [reset = 0h]

I2C\_SBLOCK is shown in Figure 21-46 and described in Table 21-39.

This read/write register controls the automatic blocking of I2C clock feature in slave mode. It is used for the Local Host to configure for which of the 4 own addresses, the core must block the I2C clock (keep SCL line low) right after the Address Phase, when it is addressed as a slave.

## Figure 21-46. I2C\_SBLOCK Register

| 31       | 30       | 29       | 28       | 27       | 26       | 25       | 24       |
|----------|----------|----------|----------|----------|----------|----------|----------|
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19       | 18       | 17       | 16       |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11       | 10       | 9        | 8        |
| RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED | RESERVED |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
|          | RESERVED |          |          | OA3_EN   | OA2_EN   | OA1_EN   | OA0_EN   |
|          | R-0h     |          |          | R/W-0h   | R/W-0h   | R/W-0h   | R/W-0h   |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 21-39. I2C\_SBLOCK Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                              |
|-------|----------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | RESERVED | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                          |
| 3     | OA3_EN   | R/W    | 0h      | Enable I2C clock blocking for own address 3. When the CPU sets a bit location to 1, if an external master using the corresponding own address addresses the core, the core will block the I2C clock right after the address phase. For releasing the I2C clock the CPU must write 0 in the corresponding field. Value after reset is low. 0h = I2C clock released 1h = I2C clock blocked |
| 2     | OA2_EN   | R/W    | 0h      | Enable I2C clock blocking for own address 2. When the CPU sets a bit location to 1, if an external master using the corresponding own address addresses the core, the core will block the I2C clock right after the address phase. For releasing the I2C clock the CPU must write 0 in the corresponding field. Value after reset is low. 0h = I2C clock released 1h = I2C clock blocked |
| 1     | OA1_EN   | R/W    | 0h      | Enable I2C clock blocking for own address 1. When the CPU sets a bit location to 1, if an external master using the corresponding own address addresses the core, the core will block the I2C clock right after the address phase. For releasing the I2C clock the CPU must write 0 in the corresponding field. Value after reset is low. 0h = I2C clock released 1h = I2C clock blocked |

<!-- image -->

<!-- image -->

## Table 21-39. I2C\_SBLOCK Register Field Descriptions (continued)

|   Bit | Field   | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     0 | OA0_EN  | R/W    | 0h      | Enable I2C clock blocking for own address 0. When the CPU sets a bit location to 1, if an external master using the corresponding own address addresses the core, the core will block the I2C clock right after the address phase. For releasing the I2C clock the CPU must write 0 in the corresponding field. Value after reset is low. 0h = I2C clock released 1h = I2C clock blocked |