## 18.3.6 Mode Selection

The MMC/SD/SDIO host controller can be use in two modes, MMC and SD/SDIO modes. It has been designed to be the most transparent with the type of card. The type of the card connected is differentiated by the software initialization procedure.

Software identifies the type of card connected during software initialization. For each given card type, there are corresponding commands. Some commands are not supported by all cards. See the Multimedia Card System Specification , the SD Memory Card Specifications , and the SDIO Card Specification, Part E1 for more details.

The purpose of the module is to transfer commands and data, to whatever card is connected, respecting the protocol of the connected card. Writes and reads to the card must respect the appropriate protocol of that card.

## 18.3.7 Buffer Management

## 18.3.7.1 Data Buffer

The MMC/SD/SDIO host controller uses a data buffer. This buffer transfers data from one data bus (Interconnect) to another data bus (SD, SDIO, or MMC card bus) and vice versa.

The buffer is the heart of the interface and ensures the transfer between the two interfaces (L4 and the card). To enhance performance, the data buffer is completed by a prefetch register and a post-write buffer that are not accessible by the host controller.

The read access time of the prefetch register is faster than the one of the data buffer. The prefetch register allows data to be read from the data buffer at an increased speed by preloading data into the prefetch register.

The entry point of the data buffer, the prefetch buffer, and the post-write buffer is the 32-bit register SD\_DATA. A write access to the SD\_DATA register followed by a read access from the SD\_DATA register corresponds to a write access to the post-write buffer followed by a read access to the prefetch buffer. As a consequence, it is normal that the data of the write access to the SD\_DATA register and the data of the read access to the SD\_DATA register are different.

The number of 32-bit accesses to the SD\_DATA register that are needed to read (or write) a data block with a size of SD\_BLK[10:0] BLEN, and equals the rounded up result of BLEN divided by 4. The maximum block size supported by the host controller is hard-coded in the register SD\_CAPA[17:16] MBL field and cannot be changed.

A read access to the SD\_DATA register is allowed only when the buffer read enable status is set to 1 (SD\_PSTATE[11] BRE); otherwise, a bad access (SD\_STAT[29] BADA) is signaled.

A write access to the SD\_DATA register is allowed only when the buffer write enable status is set to 1 (SD\_PSTATE[10] BWE); otherwise, a bad access (SD\_STAT[29] BADA) is signaled and the data is not written.

The data buffer has two modes of operation to store and read of the first and second portions of the data buffer:

- When the size of the data block to transfer is less than or equal to MEM\_SIZE/2 (in double buffering), two data transfers can occur from one data bus to the other data bus and vice versa at the same time. The MMC/SD/SDIO controller uses the two portions of the data buffer in a ping-pong manner so that storing and reading of the first and second portions of the data buffer are automatically interchanged from time to time so that data may be read from one portion (for instance, through a DMA read access on the interconnect bus) while data (for instance, from the card) is being stored into the other portion and vice versa. When BLEN is less than or equal to 200h (that is, less or equal to 512Bytes), each of the two portions of the buffer that can be used have a size of BLEN (that is, 32-bits x BLEN div by 4). Not more than this total size of 2 times 32-bits × BLEN div by 4 can be used.
- When the size of the data block to transfer is larger than MEM\_SIZE/2, only one data transfer can occur from one data bus to the other data bus at a time. The MMC/SD/SDIO host controller uses the entire data buffer as a single portion. In this mode, a bad access (SD\_STAT[29] BADA) is signaled when two data transfers occur from one data bus to the other data bus and vice versa at the same time.

<!-- image -->

<!-- image -->

www.ti.com

## CAUTION

The SD\_CMD[4] DDIR bit must be configured before a transfer to indicate the direction of the transfer.

Figure 18-19 shows the buffer management for writing and Figure 18-20 shows the buffer management for reading.

Figure 18-19. Buffer Management for a Write

<!-- image -->

<!-- image -->

Figure 18-20. Buffer Management for a Read

<!-- image -->

## 18.3.7.1.1 Memory Size, Block Length, and Buffer Management Relationship

The maximum block length and buffer management that can be targeted by system depend on memory depth setting.

Table 18-12. Memory Size, BLEN, and Buffer Relationship

| Memory Size([5:2] MEMSIZE in bytes)       | 512       | 1024               | 2048                | 4096         |
|-------------------------------------------|-----------|--------------------|---------------------|--------------|
| Maximum block length supported            | 512       | 1024               | 2048                | 2048         |
| Double-buffering for maximum block length | N/A       | BLEN <= 512        | BLEN <= 1024        | BLEN <= 2048 |
| Single-buffering for block length         | BLEN<=512 | 512 < BLEN <= 1024 | 1024 < BLEN <= 2048 | N/A          |