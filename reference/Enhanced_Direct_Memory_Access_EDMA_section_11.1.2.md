## 11.1.2 Third-Party Channel Controller (TPCC) Overview

## 11.1.2.1 TPCC Features

The general features of the TPCC module are:

- Up to 64 DMA Channels
- -Channels triggered by:
- Event Synchronization
- Manual Synchronization (CPU write to 'Event Set Register')
- Chain Synchronization (completion of one transfer chains to the next)
- -Parameterizable support for programmable DMA Channel to PaRAM mapping
- Up to 8 QDMA Channels
- -QDMA Channels are triggered automatically upon writing to PaRAM
- -Support for programmable QDMA Channel to PaRAM mapping
- Up to 64 Event Inputs
- Up to 8 Interrupt outputs for multi-core support
- Up to 256 PaRAM entries
- -Each PaRAM entry can be used as DMA Entry (up to 64), QDMA Entry (up to 8), or Link Entry (remaining)
- 8 Priority Levels for mapping CC/TC priority relative to priority of other masters in the system.
- Up to 3 Event Queues
- 16 Event Entries per Event Queue
- Supports three-transfer dimensions
- -A-synchronized transfers-one dimension serviced per event
- -AB-synchronized transfers-two dimensions serviced per event
- -Independent Indexes on Source and Destination
- -Does not support direct submission of 3D transfer to TC
- -Chaining feature allows 3D transfer based on single event
- Increment and FIFO transfer addressing modes (TC feature)
- Linking mechanism allows automatic PaRAM Entry update
- Transfer Completion Signaling between TC and CC for Chaining and Interrupt generation.
- Programmable assignment of Priority to TC channel.
- Proxied Memory Protection for TR submission
- Parameterizable support for Active Memory Protection for accesses to PaRAM and registers.
- Queue Watermarking
- Missed Event Detection
- Error and status recording to facilitate debug
- Single Clock domain for all interfaces
- Parameterizable number of Write Completion interfaces (up to 8) (set to number of TC Channels)
- AET Event generation

## 11.1.2.2 Unsupported TPCC Features

This device does not support AET event generation because output is not connected.

This device does not use the global completion interrupt. Only regional completion interrupts are supported.

The channel controller only supports 4 memory protection regions 0-3.

The channel controller only supports 4 shadow regions 0-3.

<!-- image -->

www.ti.com

<!-- image -->

Only 2 region completion interrupts are connected at the system level. See Table 10-1 for more information.

Only 256 PaRAM entries are supported.

Only 3 event queues are supported.