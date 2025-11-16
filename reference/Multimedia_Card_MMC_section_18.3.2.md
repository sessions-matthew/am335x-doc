<!-- image -->

www.ti.com

Figure 18-16. Data Packet for Block Transfer (8-Bit)

<!-- image -->

## 18.3.2 Resets

## 18.3.2.1 Hardware Reset

The module is reinitialized by the hardware.

The SD\_SYSSTATUS[0] RESETDONE bit can be monitored by the software to check if the module is ready-to-use after a hardware reset.

This hardware reset signal has a global reset action on the module. All configuration registers and all state machines are reset in all clock domains.

## 18.3.2.2 Software Reset

The module is reinitialized by software through the SD\_SYSCONFIG[1] SOFTRESET bit. This bit has the same action on the module logic as the hardware signal except for:

- Debounce logic
- SD\_PSTATE, SD\_CAPA, and SD\_CUR\_CAPA registers (see corresponding register descriptions)

The SOFTRESET bit is active high. The bit is automatically reinitialized to 0 by the hardware. The SD\_SYSCTL[24] SRA bit has the same action as the SOFTRESET bit on the design.

The SD\_SYSSTATUS[0] RESETDONE bit can be monitored by the software to check if the module is ready-to-use after a software reset.

Moreover, two partial software reset bits are provided:

- SD\_SYSCTL[26] SRD bit