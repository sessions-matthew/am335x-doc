<!-- image -->

www.ti.com

## 18.3.11 Transfer Stop

Whenever a transfer is initiated, the transmission may be willed to stop whereas it is still not finished. Several cases can be faced depending on the transfer type:

- Multiple blocks oriented transfers (for which transfer length is known)
- Continuous stream transfers (which have an infinite length)

NOTE:

Since the MMC/SD/SDIO controller manages transfers based on a block granularity, the buffer will accept a block only if there is enough space to completely store it. Consequently, if a block is pending in the buffer, no command will be sent to the card because the card clock will be shut off by the controller.

The MMC/SD/SDIO controller includes two features which make a transfer stop more convenient and easier to manage:

- Auto CMD12 (for MMC and SD only).

This feature is enabled by setting the SD\_CMD[2] ACEN bit to 1 (this setting is relevant for a MMC/SD transfer with a known number of blocks to transfer). When the Auto CMD12 feature is enabled, the MMC/SD/SDIO controller will automatically issue a CMD12 command when the expected number of blocks has been exchanged.

- Stop at block gap

This feature is enabled by setting the SD\_HCTL[16] SBGR bit to 1. When enabled, this capability holds the transfer on until the end of a block boundary. If a stop transmission is needed, software can use this pause to send a CMD12 to the card.

Table 18-15 shows the common ways to stop a transfer, indicating command to send and features to enable.

Table 18-15. MMC/SD/SDIO Controller Transfer Stop Command Summary

|                                   |                                                        | WRITE Transfer                                        | WRITE Transfer                                    | READ Transfer                                         | READ Transfer                                    |
|-----------------------------------|--------------------------------------------------------|-------------------------------------------------------|---------------------------------------------------|-------------------------------------------------------|--------------------------------------------------|
|                                   |                                                        | MMC/SD                                                | SDIO                                              | MMC/SD                                                | SDIO                                             |
| Single block                      | Single block                                           | Transfer ends automatically Wait TC                   | Transfer ends automatically Wait TC               | Transfer ends automatically Wait TC                   | Transfer ends automatically Wait TC              |
| Multi blocks (finite or infinite) | Before the programmed block boundary                   | Send CMD12 Wait TC                                    | Send CMD52 Wait TC                                | Send CMD12 Wait TC                                    | Send CMD52 Wait TC                               |
| Multi blocks (finite or infinite) | Stop at the end of the transfer (finite transfer only) | Auto CMD12 active Transfer ends automatically Wait TC | Set SD_HCTL[16] SBGR bit to 1. Send CMD52 Wait TC | Auto CMD12 active Transfer ends automatically Wait TC | If READ_WAIT supported Stop at block gap Wait TC |
| Multi blocks (finite or infinite) |                                                        | Auto CMD12 active Transfer ends automatically Wait TC | Set SD_HCTL[16] SBGR bit to 1. Send CMD52 Wait TC | Auto CMD12 active Transfer ends automatically Wait TC | If READ_WAIT not supported Send CMD52 Wait TC    |

NOTE:

The MMC/SD/SDIO controller will send the stop command to the card on a block boundary, regardless the moment the command was written to the controller registers.