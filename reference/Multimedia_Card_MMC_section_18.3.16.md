<!-- image -->

www.ti.com

## 18.3.16 MMC/SD/SDIO Hardware Status Features

Table 18-16 summarizes the MMC/SD/SDIO hardware status features.

Table 18-16. MMC/SD/SDIO Hardware Status Features

| Feature                      | Type   | Register/Bit Field/Observability Control   | Description                                                                       |
|------------------------------|--------|--------------------------------------------|-----------------------------------------------------------------------------------|
| Interrupt flags              |        | See Section 18.3.4.                        |                                                                                   |
| CMD line signal level        | Status | [24] CLEV                                  | Indicates the level of the cmd line                                               |
| DAT lines signal level       | Status | [23:20] DLEV                               | Indicates the level of the data lines                                             |
| Buffer read enable           | Status | [11] BRE                                   | Readable data exists in the buffer.                                               |
| Buffer write enable          | Status | [10] BWE                                   | Indicates whether there is enough space in the buffer to write BLEN bytes of data |
| Read transfer active         | Status | [9] RTA                                    | This status is used for detecting completion of a read transfer.                  |
| Write transfer active        | Status | [8] WTA                                    | This status indicates a write transfer active.                                    |
| Data line active             | Status | [2] DLA                                    | Indicates whether the data lines are active                                       |
| Command Inhibit (data lines) | Status | [1] DATI                                   | Indicates whether issuing of command using data lines is allowed                  |
| Command inhibit (CMD line)   | Status | [0] CMDI                                   | Indicates whether issuing of command using CMD line is allowed                    |