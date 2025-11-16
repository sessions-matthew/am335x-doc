<!-- image -->

www.ti.com

## 18.3.7.1.2 Data Buffer Status

The data buffer status is defined in the following interrupt status register and status register:

- Interrupt status registers (see ):
- -SD\_STAT[29] BADA Bad access to data space
- -SD\_STAT[5] BRR Buffer read ready
- -SD\_STAT[4] BWR Buffer write ready
- Status registers (see ):
- -SD\_PSTATE[11] BRE Buffer read enable
- -SD\_PSTATE[10] BWE Buffer write enable

## 18.3.8 Transfer Process

The process of a transfer is dependent on the type of command. It can be with or without a response, with or without data.

## 18.3.8.1 Different Types of Commands

Different types of commands are specific to MMC, SD, or SDIO cards. See the Multimedia Card System Specification , the SD Memory Card Specifications , the SDIO Card Specification, Part E1 , or the SD Card Specification, Part A2, SD Host Controller Standard Specification for more details.

## 18.3.8.2 Different Types of Responses

Different types of responses are specific to MMC, SD, or SDIO cards. See the Multimedia Card System Specification , the SD Memory Card Specifications , the SDIO Card Specification, Part E1 , or the SD Card Specification, Part A2, SD Host Controller Standard Specification for more details.

Table 18-13 shows how the MMC, SD, and SDIO responses are stored in the SD\_RSPxx registers.

Table 18-13. MMC, SD, SDIO Responses in the SD\_RSPxx Registers

| Kind of Response                                   | Response Field   | Response Register                                           |
|----------------------------------------------------|------------------|-------------------------------------------------------------|
| R1, R1b (normal response), R3, R4, R5, R5b, R6, R7 | RESP[39:8] (1)   | SD_RSP10[31:0]                                              |
| R1b (Auto CMD12 response)                          | RESP[39:8] (1)   | SD_RSP76[31:0]                                              |
| R2                                                 | RESP[127:0] (1)  | SD_RSP76[31:0] SD_RSP54[31:0] SD_RSP32[31:0] SD_RSP10[31:0] |

(1) RESP refers to the command response format described in the specifications mentioned above.

When the host controller modifies part of the SD\_RSPxx registers, it preserves the unmodified bits.

The host controller stores the Auto CMD12 response in the SD\_RSP76[31:0] register because the Host Controller may have a multiple block data DAT line transfer executing concurrently with a command. This allows the host controller to avoid overwriting the Auto CMD12 response with the command response stored in SD\_RSP10 register and vice versa.