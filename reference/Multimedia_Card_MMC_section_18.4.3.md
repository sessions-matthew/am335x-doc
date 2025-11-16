<!-- image -->

www.ti.com

## 18.4.3 Operational Modes Configuration

## 18.4.3.1 Basic Operations for MMC/SD/SDIO Host Controller

The MMC/SD/SDIO controller performs data transfers: data to card (referred to as write transfers) and data from card (referred to as read transfers).

The host controller requires transfers to run on a block-by-block basis, rather than on a DMA burst size basis. A single DMA request (or block request interrupt) is signaled for each block. Pipelining is supported as long as the block size is less than one half of the memory buffer size.

## 18.4.3.2 Card Detection, Identification, and Selection

Figure 18-34 and Figure 18-35 show the card identification and selection process.

Figure 18-34. MMC/SD/SDIO Controller Card Identification and Selection - Part 1

<!-- image -->

<!-- image -->

<!-- image -->

Figure 18-35. MMC/SD/SDIO Controller Card Identification and Selection - Part 2

<!-- image -->

*With OCR 0.