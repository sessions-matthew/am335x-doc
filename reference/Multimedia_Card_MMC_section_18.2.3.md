<!-- image -->

## 18.2.2 MMCHS Clock and Reset Management

The MMCHS controller has separate bus interface and functional clocks. The debounce clock is created by dividing the 96-MHz (48 MHz @ OPP50) clock in the PRCM by two and then dividing the resulting 48MHz (24 MHz @ OPP50) clock by a fixed 732.4219 (366.2109 @ OPP50) in the Control Module to get a 32-kHz clock. This clock is fed back into the PRCM for clock gating. (See the CLK32KDIVRATIO\_CTRL register in Chapter 9, Control Module , for more details).

Table 18-3. MMCHS Clock Signals

| Clock Signal                | Max Freq   | Reference / Source   | Comments                   |
|-----------------------------|------------|----------------------|----------------------------|
| CLK Interface clock         | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk from PRCM |
| CLKADPI Functional clock    | 96 MHz     | PER_CLKOUTM2 / 2     | pd_per_mmc_fclk from PRCM  |
| CLK32 Input de-bounce clock | 32.768 KHz | CLK_24 / 732.4219    | clk_32KHz from PRCM        |

NOTE:

Maximum MMC\_CLK signal frequency is 48 MHz.

## 18.2.3 MMCHS Pin List

The MMCHS interface pins are summarized in Table 18-4.

Table 18-4. MMCHS Pin List

| Pin             | Type    | Description                                |
|-----------------|---------|--------------------------------------------|
| MMC x _CLK      | I/O (1) | MMC/SD serial clock output                 |
| MMC x _CMD      | I/O     | MMC/SD command signal                      |
| MMC x _DAT0     | I/O     | MMC/SD data signal                         |
| MMC x _DAT1     | I/O     | MMC/SD data signal, SDIO interrupt input   |
| MMC x _DAT2     | I/O     | MMC/SD data signal, SDIO read wait output  |
| MMC x _DAT[7:3] | I/O     | MMC/SD data signals                        |
| MMC x _POW      | O       | MMC/SD power supply control (MMCHS 0 only) |
| MMC x _SDCD     | I       | SD card detect (from connector)            |
| MMC x _SDWP     | I       | SD write protect (from connector)          |
| MMC x _OBI      | I       | MMC out of band interrupt                  |

(1) This output signal is also used as a retiming input. The associated CONF\_&lt;module&gt;\_&lt;pin&gt;\_RXACTIVE bit for the output clock must be set to 1 to enable the clock input back to the module. It is also recommended to place a 33-ohm resistor in series (close to the processor) to avoid signal reflections.

The direction of the data lines depends on the selected data transfer mode as summarized in Table 18-5.

Table 18-5. DAT Line Direction for Data Transfer Modes

|        | MMC/SD 1-bit mode   | MMC/SD 4-bit mode   | MMC/SD 8-bit mode   | SDIO 1-bit mode   | SDIO 4-bit mode   |
|--------|---------------------|---------------------|---------------------|-------------------|-------------------|
| DAT[0] | I/O                 | I/O                 | I/O                 | I/O               | I/O               |
| DAT[1] | I (1)               | I/O                 | I/O                 | I (2)             | I/O or I (2)      |
| DAT[2] | I (1)               | I/O                 | I/O                 | I/O (3)           | I/O or O (3)      |
| DAT[3] | I (1)               | I/O                 | I/O                 | I (1)             | I/O               |
| DAT[4] | I (1)               | I (1)               | I/O                 | I (1)             | I (1)             |

(1) Hi-Z state to avoid bus conflict.

(2) To support incoming interrupt from the SDIO card.

(3) To support read wait to the SDIO card. By default it is Input, Output only in read wait period.

<!-- image -->

Table 18-5. DAT Line Direction for Data Transfer Modes (continued)

|        | MMC/SD 1-bit mode   | MMC/SD 4-bit mode   | MMC/SD 8-bit mode   | SDIO 1-bit mode   | SDIO 4-bit mode   |
|--------|---------------------|---------------------|---------------------|-------------------|-------------------|
| DAT[5] | I (1)               | I (1)               | I/O                 | I (1)             | I (1)             |
| DAT[6] | I (1)               | I (1)               | I/O                 | I (1)             | I (1)             |
| DAT[7] | I (1)               | I (1)               | I/O                 | I (1)             | I (1)             |

The direction of the MMCHS data buffers are controlled by ADPDATDIROQ signals. ADPDATDIROQ[i] = 1 sets the corresponding DAT signal(s) in read position (input) and ADPDATDIROQ[i] = 0 sets the corresponding DAT signal(s) in write position (output). Additionally, the ADPDATDIRLS signals are provided (with opposite polarity) to control the direction of external level shifters. The value of these control signals for the various data modes are summarized in Table 18-6.

Table 18-6. ADPDATDIROQ and ADPDATDIRLS Signal States

|        | MMC/SD 1-bit mode                             | MMC/SD 4-bit mode                             | MMC/SD 8-bit mode                             | SDIO 1-bit mode                               | SDIO 4-bit mode                               |
|--------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|-----------------------------------------------|
| DAT[0] | ADPDATDIRLS[0] = 0 / 1 ADPDATDIROQ[0] = 1 / 0 | ADPDATDIRLS[0] = 0 / 1 ADPDATDIROQ[0] = 1 / 0 | ADPDATDIRLS[0] = 0 / 1 ADPDATDIROQ[0] = 1 / 0 | ADPDATDIRLS[0] = 0 / 1                        | ADPDATDIRLS[0] = 0 / 1 ADPDATDIROQ[0] = 1 / 0 |
| DAT[2] | ADPDATDIRLS[2] = 0 ADPDATDIROQ[2] = 1         | ADPDATDIRLS[2] = 0 / 1 ADPDATDIROQ[2] = 1 / 0 | ADPDATDIRLS[2] = 0 / 1 ADPDATDIROQ[2] = 1 / 0 | ADPDATDIRLS[2] = 0 / 1 ADPDATDIROQ[2] = 1 / 0 | ADPDATDIRLS[2] = 0 / 1 ADPDATDIROQ[2] = 1 / 0 |
| DAT[1] | ADPDATDIRLS[1] = 0 ADPDATDIROQ[1] = 1         | ADPDATDIRLS[1] = 0 / 1 ADPDATDIROQ[1] = 1 / 0 | ADPDATDIRLS[1] = 0 / 1 ADPDATDIROQ[1] = 1 / 0 | ADPDATDIRLS[1] = 0 ADPDATDIROQ[1] = 1         | ADPDATDIRLS[1] = 0 / 1 ADPDATDIROQ[1] = 1 / 0 |
| DAT[3] | ADPDATDIRLS[1] = 0 ADPDATDIROQ[1] = 1         | ADPDATDIRLS[1] = 0 / 1 ADPDATDIROQ[1] = 1 / 0 | ADPDATDIRLS[1] = 0 / 1 ADPDATDIROQ[1] = 1 / 0 | ADPDATDIRLS[1] = 0 ADPDATDIROQ[1] = 1         | ADPDATDIRLS[1] = 0 / 1 ADPDATDIROQ[1] = 1 / 0 |
| DAT[4] | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 / 1 ADPDATDIROQ[3] = 1 / 0 | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         |
| DAT[5] | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 / 1 ADPDATDIROQ[3] = 1 / 0 | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         |
| DAT[6] | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 / 1 ADPDATDIROQ[3] = 1 / 0 | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         |
| DAT[7] | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 / 1 ADPDATDIROQ[3] = 1 / 0 | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         | ADPDATDIRLS[3] = 0 ADPDATDIROQ[3] = 1         |

ADPDATDIRLSx = 0 for input and 1 for output - these signals are not pinned out on this device.

ADPDATDIROQx = 0 for output and 1 for input.

Grayed cells indicate that the data line is not used in the selected transfer mode.