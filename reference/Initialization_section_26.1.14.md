<!-- image -->

www.ti.com

## 26.1.14 Tracing

Tracing in the Public ROM Code includes three 32-bit vectors for which each bit corresponds to a particular 'way point' in the ROM Code execution sequence (see Table 26-4). Tracing vectors are initialized at the very beginning of the startup phase and updated all along the boot process.

There are two sets of tracing vectors. The first set is the current trace information (after cold or warm reset). The second set holds a copy of trace vectors collected at the first ROM Code run after cold reset. As a consequence after a warm reset it is possible to have visibility on the boot scenario that occurred during cold reset.

Table 26-42. Tracing Vectors

|   Trace vector |   Bit No. | Group                | Meaning                                |
|----------------|-----------|----------------------|----------------------------------------|
|              1 |         0 | Memory Boot          | Memory booting device MMCSD1 or SPI0   |
|              1 |         1 | General              | Entered main function                  |
|              1 |         2 | General              | Running after the cold reset           |
|              1 |         3 | Boot                 | Main booting routine entered           |
|              1 |         4 | Memory Boot          | Memory booting started                 |
|              1 |         5 | Peripheral Boot      | Peripheral booting started             |
|              1 |         6 | Boot                 | Booting loop reached last device       |
|              1 |         7 | Boot                 | GP header found                        |
|              1 |         8 | Boot                 | Reserved                               |
|              1 |         9 | Boot                 | Reserved                               |
|              1 |        10 | Peripheral Boot      | Reserved                               |
|              1 |        11 | Peripheral Boot      | Reserved                               |
|              1 |        12 | Peripheral Boot      | Device initialized                     |
|              1 |        13 | Peripheral Boot      | Asic Id sent                           |
|              1 |        14 | Peripheral Boot      | Image received                         |
|              1 |        15 | Peripheral Boot      | Peripheral booting failed              |
|              1 |        16 | Peripheral Boot      | Booting Message not received (timeout) |
|              1 |        17 | Peripheral Boot      | Image size not received(timeout)       |
|              1 |        18 | Peripheral Boot      | Image not received (timeout)           |
|              1 |        19 | Reserved             | Reserved                               |
|              1 |        20 | Configuration Header | CHSETTINGS found                       |
|              1 |        21 | Configuration Header | CHSETTINGS executed                    |
|              1 |        22 | Configuration Header | CHRAM executed                         |
|              1 |        23 | Configuration Header | CHFLASH executed                       |
|              1 |        24 | Configuration Header | CHMMCSD clocks executed                |
|              1 |        25 | Configuration Header | CHMMCSD bus width executed             |
|              1 |        26 | Reserved             | Reserved                               |
|              1 |        27 | Reserved             | Reserved                               |
|              1 |        28 | Reserved             | Reserved                               |
|              1 |        29 | Reserved             | Reserved                               |
|              1 |        30 | Reserved             | Reserved                               |
|              1 |        31 | Reserved             | Reserved                               |
|              2 |         0 | Companion chip       | Reserved                               |
|              2 |         1 | Companion chip       | Reserved                               |
|              2 |         2 | Companion chip       | Reserved                               |
|              2 |         3 | Companion chip       | Reserved                               |
|              2 |         4 | USB                  | USB connect                            |
|              2 |         5 | USB                  | USB configured state                   |
|              2 |         6 | USB                  | USB VBUS valid                         |

## Table 26-42. Tracing Vectors (continued)

|   Trace vector |   Bit No. | Group                    | Meaning                                       |
|----------------|-----------|--------------------------|-----------------------------------------------|
|              2 |         7 | USB                      | USB session valid                             |
|              2 |         8 | Reserved                 | Reserved                                      |
|              2 |         9 | Reserved                 | Reserved                                      |
|              2 |        10 | Reserved                 | Reserved                                      |
|              2 |        11 | Reserved                 | Reserved                                      |
|              2 |        12 | Memory Boot              | Memory booting trial 0                        |
|              2 |        13 | Memory Boot              | Memory booting trial 1                        |
|              2 |        14 | Memory Boot              | Memory booting trial 2                        |
|              2 |        15 | Memory Boot              | Memory booting trial 3                        |
|              2 |        16 | Memory Boot              | Execute GP image                              |
|              2 |        17 | Peripheral Boot          | Start authentication of peripheral boot image |
|              2 |        18 | Memory & Peripheral Boot | Start image authentication                    |
|              2 |        19 | Memory & Peripheral Boot | Image authentication failed                   |
|              2 |        20 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        21 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        22 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        23 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        24 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        25 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        26 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        27 | Memory & Peripheral Boot | Reserved                                      |
|              2 |        28 | Memory & Peripheral Boot | Authentication procedure failed               |
|              2 |        29 | Reserved                 | Reserved                                      |
|              2 |        30 | Reserved                 | Reserved                                      |
|              2 |        31 | Reserved                 | Reserved                                      |
|              3 |         0 | Memory Boot              | Memory booting device NULL                    |
|              3 |         1 | Memory Boot              | Memory booting device XIP (MUX2)              |
|              3 |         2 | Memory Boot              | Memory booting device XIP w/WAIT (MUX2)       |
|              3 |         3 | Memory Boot              | Memory booting device XIP (MUX1)              |
|              3 |         4 | Memory Boot              | Memory booting device XIP w/ WAIT (MUX1)      |
|              3 |         5 | Memory Boot              | Memory booting device NAND                    |
|              3 |         6 | Reserved                 | Reserved                                      |
|              3 |         7 | Memory Boot              | Memory booting device MMCSD1                  |
|              3 |         8 | Reserved                 | Reserved                                      |
|              3 |         9 | Reserved                 | Reserved                                      |
|              3 |        10 | Memory Boot              | Memory booting device NAND_I2C                |
|              3 |        11 | Reserved                 | Reserved                                      |
|              3 |        12 | Reserved                 | Memory booting device MMC0                    |
|              3 |        13 | Reserved                 | Reserved                                      |
|              3 |        14 | Reserved                 | Reserved                                      |
|              3 |        15 | Reserved                 | Reserved                                      |
|              3 |        16 | Reserved                 | Peripheral booting device UART0               |
|              3 |        17 | Reserved                 | Reserved                                      |
|              3 |        18 | Reserved                 | Reserved                                      |
|              3 |        19 | Reserved                 | Reserved                                      |
|              3 |        21 | Reserved                 | Reserved                                      |

<!-- image -->

<!-- image -->

www.ti.com

## Table 26-42. Tracing Vectors (continued)

|   Trace vector |   Bit No. | Group           | Meaning                           |
|----------------|-----------|-----------------|-----------------------------------|
|              3 |        22 | Peripheral Boot | Peripheral booting device GPGMAC0 |
|              3 |        23 | Reserved        | Reserved                          |
|              3 |        24 | Reserved        | Peripheral booting device NULL    |
|              3 |        25 | Reserved        | Reserved                          |
|              3 |        26 | Reserved        | Reserved                          |
|              3 |        27 | Reserved        | Reserved                          |
|              3 |        28 | Reserved        | Reserved                          |
|              3 |        29 | Reserved        | Reserved                          |
|              3 |        30 | Reserved        | Reserved                          |
|              3 |        31 | Reserved        | Reserved                          |