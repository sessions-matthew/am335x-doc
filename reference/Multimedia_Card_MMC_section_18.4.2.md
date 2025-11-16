## 18.4 Low-Level Programming Models

## 18.4.1 Surrounding Modules Global Initialization

This section identifies the requirements of initializing the surrounding modules when the module has to be used for the first time after a device reset. This initialization of surrounding modules is based on the integration and environment of the MMC/SD/SDIO modules.

Table 18-17. Global Init for Surrounding Modules

| Surrounding Modules     | Comments                                                                                                                          |
|-------------------------|-----------------------------------------------------------------------------------------------------------------------------------|
| PRCM                    | Module interface and functional clocks must be enabled. For more information, see Chapter 8, Power, Reset, and Clock Management . |
| Control module          | Module-specific pad muxing and configuration must be set in the control module. See Chapter 9, Control Module .                   |
| (optional) MPU INTC     | MPU INTC configuration must be done to enable the interrupts from the SD module. See Chapter 6, Interrupts .                      |
| (optional) EDMA         | DMA configuration must be done to enable the module DMA channel requests. See Chapter 11, EDMA .                                  |
| (optional) Interconnect | For more information about the interconnect configuration, see Chapter 10, Interconnects .                                        |

NOTE:

The MPU interrupt controller and the EDMA configurations are necessary, if the interrupt and DMA based communication modes are used.

## 18.4.2 MMC/SD/SDIO Controller Initialization Flow

The next sections outline the four steps to initialize the MMC/SD/SDIO controller:

- Initialize Clocks
- Software reset of the controller
- Set module's hardware capabilities
- Set module's Idle and Wake-Up modes

## 18.4.2.1 Enable OCP and CLKADPI Clocks

Prior to any SD register access one must enable the SD OCP clock and CLKADPI clock in PRCM module registers. For more information, see Chapter 8, Power, Reset, and Clock Management .

<!-- image -->

<!-- image -->

www.ti.com

## 18.4.2.2 SD Soft Reset Flow

Figure 18-32 shows the soft reset process of MMC/SD/SDIO controller.

Figure 18-32. MMC/SD/SDIO Controller Software Reset Flow

<!-- image -->

## 18.4.2.3 Set SD Default Capabilities

Software must read capabilities (in boot ROM for instance) and is allowed to set (write) SD\_CAPA[26:24] and SD\_CUR\_CAPA[23:0] registers before the MMC/SD/SDIO host driver is started.

## 18.4.2.4 Wake-Up Configuration

Table 18-18 details SD controller wake-up configuration.

Table 18-18. MMC/SD/SDIO Controller Wake-Up Configuration

| Step                                                       | Access Type   | Register/Bit Field/Programming Model   |
|------------------------------------------------------------|---------------|----------------------------------------|
| Configure wake-up bit (if necessary).                      | W             | SD_SYSCONFIG[2] ENAWAKEUP              |
| Enable wake-up events on SD card interrupt (if necessary). | W             | SD_HCTL[24] IWE                        |
| SDIO Card onlyEnable card interrupt (if necessary).        | W             | SD_IE[8] CIRQENABLE                    |

## 18.4.2.5 MMC Host and Bus Configuration

Figure 18-33 details the MMC bus configuration process.

## Figure 18-33. MMC/SD/SDIO Controller Bus Configuration Flow

<!-- image -->

<!-- image -->