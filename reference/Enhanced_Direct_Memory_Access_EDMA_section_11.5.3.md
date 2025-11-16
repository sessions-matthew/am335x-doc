<!-- image -->

www.ti.com

## 11.5.3 Setting Up a Transfer

The following list provides a quick guide for the typical steps involved in setting up a transfer.

Step 1. Initiating a DMA/QDMA channel

1. Determine the type of channel (QDMA or DMA) to be used.
2. Channel mapping
- i. If using a QDMA channel, program the QCHMAP with the parameter set number to which the channel maps and the trigger word.
- ii. If using a DMA channel, program the DCHMAP with the parameter set number to which the channel maps.
3. If the channel is being used in the context of a shadow region, ensure the DRAE/DRAEH for the region is properly set up to allow read write accesses to bits in the event registers and interrupt registers in the Shadow region memory map. The subsequent steps in this process should be done using the respective shadow region registers. (Shadow region descriptions and usage are provided in Section 11.3.7.1.)
4. Determine the type of triggering used.
- i. If external events are used for triggering (DMA channels), enable the respective event in EER/EERH by writing into EESR/EESRH.
- ii. If QDMA Channel is used, enable the channel in QEER by writing into QEESR.
5. Queue setup
- i. If a QDMA channel is used, set up the QDMAQNUM to map the channel to the respective event queue.
- ii. If a DMA channel is used, set up the DMAQNUM to map the event to the respective event queue.

## Step 2. Parameter set setup

1. Program the PaRAM set number associated with the channel. Note that if it is a QDMA channel, the PaRAM entry that is configured as trigger word is written to last. Alternatively, enable the QDMA channel (step 1-b-ii above) just before the write to the trigger word.
2. See Section 11.3.19 for parameter set field setups for different types of transfers. See the sections on chaining (Section 11.3.8) and interrupt completion (Section 11.3.9) on how to set up final/intermediate completion chaining and/or interrupts.

## Step 3. Interrupt setup

1. Enable the interrupt in the IER/IERH by writing into IESR/IESRH.
2. Ensure that the EDMA3CC completion interrupt (either the global or the shadow region interrupt) is enabled properly in the device interrupt controller.
3. Ensure the EDMA3CC completion interrupt (this refers to either the Global interrupt or the shadow region interrupt) is enabled properly in the Device Interrupt controller.
4. Set up the interrupt controller properly to receive the expected EDMA3 interrupt.

## Step 4. Initiate transfer

1. This step is highly dependent on the event trigger source:
- i. If the source is an external event coming from a peripheral, the peripheral will be enabled to start generating relevant EDMA3 events that can be latched to the ER transfer.
- ii. For QDMA events, writes to the trigger word (step 2-a above) will initiate the transfer.
- iii. Manually triggered transfers will be initiated by writes to the Event Set Registers (ESR/ESRH).
- iv. Chained-trigger events initiate when a previous transfer returns a transfer completion code equal to the chained channel number.

## Step 5. Wait for completion

1. If the interrupts are enabled as mentioned in step 3 above, then the EDMA3CC will generate a completion interrupt to the CPU whenever transfer completion results in setting the corresponding bits in the interrupt pending register (IPR/IPRH). The set bits must be cleared in the IPR\IPRH by writing to corresponding bit in ICR\ICRH.
2. If polling for completion (interrupts not enabled in the device controller), then the application code can wait on the expected bits to be set in the IPR\IPRH. Again, the set bits in the IPR\IPRH must be manually cleared via ICR\ICRH before the next set of transfers is performed for the same transfer completion code values.

<!-- image -->

www.ti.com