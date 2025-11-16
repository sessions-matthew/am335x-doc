<!-- image -->

www.ti.com

Figure 11-10. Link-to-Self Transfer

<!-- image -->

## 11.3.4 Initiating a DMA Transfer

There are multiple ways to initiate a programmed data transfer using the EDMA3 channel controller. Transfers on DMA channels are initiated by three sources.

## They are listed as follows:

- Event-triggered transfer request (this is the more typical usage of EDMA3): A peripheral, system, or externally-generated event triggers a transfer request.
- Manually-triggered transfer request: The CPU to manually triggers a transfer by writing a 1 to the

corresponding bit in the event set register (ESR/ESRH).

- Chain-triggered transfer request: A transfer is triggered on the completion of another transfer or subtransfer.

Transfers on QDMA channels are initiated by two sources. They are as follows:

- Auto-triggered transfer request: Writing to the programmed trigger word triggers a transfer.
- Link-triggered transfer requests: Writing to the trigger word triggers the transfer when linking occurs.

## 11.3.4.1 DMA Channel

## 11.3.4.1.1 Event-Triggered Transfer Request

When an event is asserted from a peripheral or device pins, it gets latched in the corresponding bit of the event register (ER.E n = 1). If the corresponding event in the event enable register (EER) is enabled (EER.E n = 1), then the EDMA3CC prioritizes and queues the event in the appropriate event queue. When the event reaches the head of the queue, it is evaluated for submission as a transfer request to the transfer controller.

If the PaRAM set is valid (not a NULL set), then a transfer request packet (TRP) is submitted to the EDMA3TC and the E n bit in ER is cleared. At this point, a new event can be safely received by the EDMA3CC.

If the PaRAM set associated with the channel is a NULL set (see Section 11.3.3.3), then no transfer request (TR) is submitted and the corresponding E n bit in ER is cleared and simultaneously the corresponding channel bit is set in the event miss register (EMR.E n = 1) to indicate that the event was discarded due to a null TR being serviced. Good programming practices should include cleaning the event missed error before re-triggering the DMA channel.

When an event is received, the corresponding event bit in the event register is set (ER.E n = 1), regardless of the state of EER.E n . If the event is disabled when an external event is received (ER.E n = 1 and EER.E n = 0), the ER.E n bit remains set. If the event is subsequently enabled (EER.E n = 1), then the pending event is processed by the EDMA3CC and the TR is processed/submitted, after which the ER.E n bit is cleared.

If an event is being processed (prioritized or is in the event queue) and another sync event is received for the same channel prior to the original being cleared (ER.E n != 0), then the second event is registered as a missed event in the corresponding bit of the event missed register (EMR.E n = 1).

See Section 9.2.3, EDMA Event Multiplexing , for a description of how DMA events map to the EDMA event crossbar. See Section 11.3.20, EDMA Events , for a table of direct and crossbar mapped EDMA events.

## 11.3.4.1.2 Manually Triggered Transfer Request

The CPU or any EDMA programmer initiates a DMA transfer by writing to the event set register (ESR). Writing a 1 to an event bit in the ESR results in the event being prioritized/queued in the appropriate event queue, regardless of the state of the EER.E n bit. When the event reaches the head of the queue, it is evaluated for submission as a transfer request to the transfer controller.

As in the event-triggered transfers, if the PaRAM set associated with the channel is valid (it is not a null set) then the TR is submitted to the associated EDMA3TC and the channel can be triggered again.

If the PaRAM set associated with the channel is a NULL set (see Section 11.3.3.3), then no transfer request (TR) is submitted and the corresponding E n bit in ER is cleared and simultaneously the corresponding channel bit is set in the event miss register (EMR.E n = 1) to indicate that the event was discarded due to a null TR being serviced. Good programming practices should include clearing the event missed error before re-triggering the DMA channel.

If an event is being processed (prioritized or is in the event queue) and the same channel is manually set by a write to the corresponding channel bit of the event set register (ESR.E n = 1) prior to the original being cleared (ESR.E n = 0), then the second event is registered as a missed event in the corresponding bit of the event missed register (EMR.E n = 1).

<!-- image -->

www.ti.com

<!-- image -->

www.ti.com

## 11.3.4.1.3 Chain-Triggered Transfer Request

Chaining is a mechanism by which the completion of one transfer automatically sets the event for another channel. When a chained completion code is detected, the value of which is dictated by the transfer completion code (TCC[5:0] in OPT of the PaRAM set associated with the channel), it results in the corresponding bit in the chained event register (CER) to be set (CER.E[TCC] = 1).

Once a bit is set in CER, the EDMA3CC prioritizes and queues the event in the appropriate event queue. When the event reaches the head of the queue, it is evaluated for submission as a transfer request to the transfer controller.

As in the event-triggered transfers, if the PaRAM set associated with the channel is valid (it is not a null set) then the TR is submitted to the associated EDMA3TC and the channel can be triggered again.

If the PaRAM set associated with the channel is a NULL set (see Section 11.3.3.3), then no transfer request (TR) is submitted and the corresponding E n bit in CER is cleared and simultaneously the corresponding channel bit is set in the event miss register (EMR.E n = 1) to indicate that the event was discarded due to a null TR being serviced. In this case, the error condition must be cleared by you before the DMA channel can be re-triggered. Good programming practices might include clearing the event missed error before re-triggering the DMA channel.

If a chaining event is being processed (prioritized or queued) and another chained event is received for the same channel prior to the original being cleared (CER.E n != 0), then the second chained event is registered as a missed event in the corresponding channel bit of the event missed register (EMR.E n = 1).

NOTE:

Chained event registers, event registers, and event set registers operate independently. An event (E n ) can be triggered by any of the trigger sources (event-triggered, manuallytriggered, or chain-triggered).

## 11.3.4.2 QDMA Channels

## 11.3.4.2.1 Auto-triggered and Link-Triggered Transfer Request

QDMA-based transfer requests are issued when a QDMA event gets latched in the QDMA event register (QER.E n = 1). A bit corresponding to a QDMA channel is set in the QDMA event register (QER) when the following occurs:

- A CPU (or any EDMA3 programmer) write occurs to a PaRAM address that is defined as a QDMA channel trigger word (programmed in the QDMA channel mapping register (QCHMAP n )) for the particular QDMA channel and the QDMA channel is enabled via the QDMA event enable register (QEER.E n = 1).
- EDMA3CC performs a link update on a PaRAM set address that is configured as a QDMA channel (matches QCHMAP n settings) and the corresponding channel is enabled via the QDMA event enable register (QEER.E n = 1).

Once a bit is set in QER, the EDMA3CC prioritizes and queues the event in the appropriate event queue. When the event reaches the head of the queue, it is evaluated for submission as a transfer request to the transfer controller.

As in the event-triggered transfers, if the PaRAM set associated with the channel is valid (it is not a null set) then the TR is submitted to the associated EDMA3TC and the channel can be triggered again.

If a bit is already set in QER (QER.E n = 1) and a second QDMA event for the same QDMA channel occurs prior to the original being cleared, the second QDMA event gets captured in the QDMA event miss register (QEMR.E n = 1).

## 11.3.4.3 Comparison Between DMA and QDMA Channels

The primary difference between DMA and QDMA channels is the event/channel synchronization. QDMA events are either auto-triggered or link triggered. auto-triggering allows QDMA channels to be triggered by CPU(s) with a minimum number of linear writes to PaRAM. Link triggering allows a linked list of transfers to be executed, using a single QDMA PaRAM set and multiple link PaRAM sets.