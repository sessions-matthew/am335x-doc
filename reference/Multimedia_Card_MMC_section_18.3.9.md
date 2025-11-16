## 18.3.9 Transfer or Command Status and Error Reporting

Flags in the MMC/SD/SDIO host controller show status of communication with the card:

- A timeout (of a command, a data, or a response)
- A CRC

Error conditions generate interrupts. See Table 18-14 and register description for more details.

Table 18-14. CC and TC Values Upon Error Detected

|   Error hold in the SD_STAT Register | Error hold in the SD_STAT Register   | CC   | TC   | Comments                                                                                                                                                                                                     |
|--------------------------------------|--------------------------------------|------|------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|                                   29 | BADA                                 |      |      | No dependency with CC or TC. BADA is related to the register accesses. Its assertion is not dependent of the ongoing transfer.                                                                               |
|                                   28 | CERR                                 | 1    |      | CC is set upon CERR.                                                                                                                                                                                         |
|                                   22 | DEB                                  |      | 1    | TC is set upon DEB.                                                                                                                                                                                          |
|                                   21 | DCRC                                 |      | 1    | TC is set upon DCRC.                                                                                                                                                                                         |
|                                   20 | DTO                                  |      |      | DTO and TC are mutually exclusive. DCRC and DEB cannot occur with DTO.                                                                                                                                       |
|                                   19 | CIE                                  | 1    |      | CC is set upon CIE.                                                                                                                                                                                          |
|                                   18 | CEB                                  | 1    |      | CC is set upon CEB.                                                                                                                                                                                          |
|                                   17 | CCRC                                 | 1    |      | CC can be set upon CCRC - See CTO comment                                                                                                                                                                    |
|                                   16 | CTO                                  |      |      | CTO and CC are mutually exclusive. CIE, CEB and CERR cannot occur with CTO. CTO can occur at the same time as CCRC it indicates a command abort due to a contention on CMD line. In this case no CC appears. |

SD\_STAT[21] DCRC event can be asserted in the following conditions:

- Busy timeout for R1b, R5b response type
- Busy timeout after write CRC status
- Write CRC status timeout
- Read data timeout
- Boot acknowledge timeout

<!-- image -->

<!-- image -->

www.ti.com

## 18.3.9.1 Busy Timeout for R1b, R5b Response Type

Figure 18-21 shows DCRD event condition asserted when there is a busy timeout for R1b or R5b responses.

Figure 18-21. Busy Timeout for R1b, R5b Responses

<!-- image -->

- t1 - Data timeout counter is loaded and starts after R1b, R5b response type.
- t2 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.

## 18.3.9.2 Busy Timeout After Write CRC Status

Busy Timeout After Write CRC Status shows DCRC event condition asserted when there is busy timeout after write CRC status.

<!-- image -->

- t1 - Data timeout counter is loaded and starts after CRC status.
- t2 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.

## 18.3.9.3 Write CRC Status Timeout

Figure 18-22 shows DCRC event condition asserted when there is write CRC status timeout.

## Figure 18-22. Write CRC Status Timeout

<!-- image -->

- t1 - Data timeout counter is loaded and starts after Data block + CRC.
- t2 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.

## 18.3.9.4 Read Data Timeout

Figure 18-23 shows DCRC event condition asserted when there is read data timeout.

<!-- image -->

- t1 - Data timeout counter is loaded and starts after Command transmission.
- t2 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.
- t3 - Data timeout counter is loaded and starts after Data block + CRC transmission.
- t4 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.

<!-- image -->

<!-- image -->

www.ti.com

## 18.3.9.5 Boot Acknowledge Timeout

Figure 18-24 shows DCRC event condition asserted when there is boot acknowledge timeout and CMD0 is used.

Figure 18-24. Boot Acknowledge Timeout When Using CMD0

## clk

<!-- image -->

- t1 - Data timeout counter is loaded and starts after CMD0.
- t2 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.
- t3 - Data timeout counter is loaded and starts.
- t4 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.
- t5 - Data timeout counter is loaded and starts after Data + CRC transmission.
- t6 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.

Figure 18-25 shows DCRC event condition asserted when there is boot acknowledge timeout and CMD line is held low.

Figure 18-25. Boot Acknowledge Timeout When CMD Held Low

<!-- image -->

- t1 - Data timeout counter is loaded and starts after cmd line is tied to 0.
- t2 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.
- t3 - Data timeout counter is loaded and starts.
- t4 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.
- t5 - Data timeout counter is loaded and starts after Data + CRC transmission.

- t6 - Data timeout counter stops and if it is 0, SD\_STAT[21] DCRC is generated.

<!-- image -->

www.ti.com