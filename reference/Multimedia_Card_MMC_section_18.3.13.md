## 18.3.13 Card Boot Mode Management

Boot Operation Mode allows the MMC/SD/SDIO host controller to read boot data from the connected slave (MMC device) by keeping CMD line low after power-on (or sending CMD0 with specific argument) before issuing CMD1. The data can be read from either boot area or user area, depending on register setting. Power-on boot defines a way for the boot-code to be accessed by the MMC/SD/SDIO host controller without an upper-level software driver, speeding the time it takes for a controller to access the boot code.

The two possible ways to issue a boot command (either issuing a CMD0 or driving the CMD line to 0 during the whole boot phase) are described in the following sections.

## 18.3.13.1 Boot Mode Using CMD0

Figure 18-30 shows the timing diagram of a boot sequence using CMD0.

Figure 18-30. Boot Mode With CMD0

## clk

<!-- image -->

- Configure:
- -MMCHS\_CON[BOOT\_CF0] to 0
- -MMCHS\_CON[BOOT\_ACK] (if an acknowledge will be received) to 0x1
- -MMCHS\_BLK with the correct block length and number of block
- -MMCHS\_SYSCTL[DTO] for timeout
- If transfer is done in DDR mode also set MMCHS\_CON[DDR] to 1.
- Write register MMCHS\_ARG with correct argument (see MMC Specification).
- Write in MMCHS\_CMD register to start CMD0 transfer with these bit fields set:
- -INDX set to 0x00
- -DP set to '1'
- -DDIR set to '1'
- -MSBS set to '1'
- -BCE set to '1'
- If boot status is not received within the timing defined, the MMCHS\_STAT[DTO] will be generated. Otherwise the MMCHS\_STAT[BSR] is arisen.
- After the transfer is complete, the controller will generate the MMCHS\_STAT[TC], and then the system can emit another CMD0 (MMCHS\_CON[BOOT\_ACK] previously cleared to 0x0) to exit the card from boot state.
- If the system wants to abort the boot sequence it must issue a CMD0 with MMCHS\_CMD[CMD\_TYPE] set to 0x3 (MMCHS\_CON[BOOT\_ACK] previously cleared to 0x0) during the transfer to abort transfer and enable card to exit from boot state.

<!-- image -->

<!-- image -->

www.ti.com

## 18.3.13.2 Boot Mode With CMD Held Low

Figure 18-31 shows the timing diagram of a boot sequence with CMD line tied to 0.

## Figure 18-31. Boot Mode With CMD Line Tied to 0

<!-- image -->

- Configure:
- -MMCHS\_CON[BOOT\_CF0] and MMCHS\_CON[BOOT\_ACK] (if an acknowledge will be received) to 0x1
- -MMCHS\_BLK with correct block length and number of block
- -MMCHS\_SYSCTL[DTO] for timeout
- If transfer is done in DDR mode also set MMCHS\_CON[DDR] to 1.
- Write in MMCHS\_CMD register to start boot sequence with:
- -DP set to '1'
- -DDIR set to '1'
- -MSBS set to '1'
- -BCE set to '1'

This leads the controller to force CMD line to '0'.

- If the boot status is not received within the timing defined, the MMCHS\_STAT[DTO] will be generated. Otherwise the MMCHS\_STAT[BSR] is arisen.
- After the transfer is complete, the controller will generate the MMCHS\_STAT[TC], and then the system must clear MMCHS\_CON[BOOT\_CF0] to 0x0 to release the CMD line and enable the card to exit from boot state.
- If the system wants to abort the boot sequence it must clear MMCHS\_CON[BOOT\_CF0] to 0x0 during transfer to enable the card to exit from boot state.