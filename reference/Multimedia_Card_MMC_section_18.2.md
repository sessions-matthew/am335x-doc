<!-- image -->

www.ti.com

## 18.2 Integration

This device contains three instances of the Multimedia Card (MMC), Secure Digital (SD), and Secure Digital I/O (SDIO) high speed interface module (MMCHS). The controller provides an interface to an MMC, SD memory card or SDIO card.

The application interface is responsible for managing transaction semantics; the MMC/SDIO host controller deals with MMC/SDIO protocol at transmission level, packing data, adding CRC, start/end bit and checking for syntactical correctness. Figure 18-1 through Figure 18-3 below show examples of systems using the MMCHS controller. Note that the power switch control is only available on the MMCHS0 interface.

Figure 18-1. MMCHS Module SDIO Application

<!-- image -->

Figure 18-2. MMCHS SD (4-bit) Card Application

<!-- image -->