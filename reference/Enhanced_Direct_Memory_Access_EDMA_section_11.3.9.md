## 11.3.8 Chaining EDMA3 Channels

The channel chaining capability for the EDMA3 allows the completion of an EDMA3 channel transfer to trigger another EDMA3 channel transfer. The purpose is to allow you the ability to chain several events through one event occurrence.

Chaining is different from linking (Section 11.3.3.7). The EDMA3 link feature reloads the current channel parameter set with the linked parameter set. The EDMA3 chaining feature does not modify or update any channel parameter set; it provides a synchronization event to the chained channel (see Section 11.3.4.1.3 for chain-triggered transfer requests).

Chaining is achieved at either final transfer completion or intermediate transfer completion, or both, of the current channel. Consider a channel m (DMA/QDMA) required to chain to channel n . Channel number n (0-63) needs to be programmed into the TCC bit of channel m channel options parameter (OPT) set.

- If final transfer completion chaining (TCCHEN = 1 in OPT) is enabled, the chain-triggered event occurs after the submission of the last transfer request of channel m is either submitted or completed (depending on early or normal completion).
- If intermediate transfer completion chaining (ITCCHEN = 1 in OPT) is enabled, the chain-triggered event occurs after every transfer request, except the last of channel m is either submitted or completed (depending on early or normal completion).
- If both final and intermediate transfer completion chaining (TCCHEN = 1 and ITCCHEN = 1 in OPT) are enabled, then the chain-trigger event occurs after every transfer request is submitted or completed (depending on early or normal completion).

Table 11-13 illustrates the number of chain event triggers occurring in different synchronized scenarios. Consider channel 31 programmed with ACNT = 3, BCNT = 4, CCNT = 5, and TCC = 30.

Table 11-13. Chain Event Triggers

|                         | (Number of chained event triggers on channel 30)   | (Number of chained event triggers on channel 30)   |
|-------------------------|----------------------------------------------------|----------------------------------------------------|
| Options                 | A-Synchronized                                     | AB-Synchronized                                    |
| TCCHEN = 1, ITCCHEN = 0 | 1 (Owing to the last TR)                           | 1 (Owing to the last TR)                           |
| TCCHEN = 0, ITCCHEN = 1 | 19 (Owing to all but the last TR)                  | 4 (Owing to all but the last TR)                   |
| TCCHEN = 1, ITCCHEN = 1 | 20 (Owing to a total of 20 TRs)                    | 5 (Owing to a total of 5 TRs)                      |

## 11.3.9 EDMA3 Interrupts

The EDMA3 interrupts are divided into 2 categories: transfer completion interrupts and error interrupts.

There are nine region interrupts, eight shadow regions and one global region. The transfer completion interrupts are listed in Table 11-14. The transfer completion interrupts and the error interrupts from the transfer controllers are all routed to the ARM interrupt controllers.

Table 11-14. EDMA3 Transfer Completion Interrupts

| Name         | Description                                           |
|--------------|-------------------------------------------------------|
| EDMA3CC_INT0 | EDMA3CC Transfer Completion Interrupt Shadow Region 0 |
| EDMA3CC_INT1 | EDMA3CC Transfer Completion Interrupt Shadow Region 1 |
| EDMA3CC_INT2 | EDMA3CC Transfer Completion Interrupt Shadow Region 2 |
| EDMA3CC_INT3 | EDMA3CC Transfer Completion Interrupt Shadow Region 3 |
| EDMA3CC_INT4 | EDMA3CC Transfer Completion Interrupt Shadow Region 4 |
| EDMA3CC_INT5 | EDMA3CC Transfer Completion Interrupt Shadow Region 5 |
| EDMA3CC_INT6 | EDMA3CC Transfer Completion Interrupt Shadow Region 6 |
| EDMA3CC_INT7 | EDMA3CC Transfer Completion Interrupt Shadow Region 7 |

<!-- image -->

<!-- image -->

www.ti.com

Table 11-15. EDMA3 Error Interrupts

| Name            | Description                         |
|-----------------|-------------------------------------|
| EDMA3CC_ERRINT  | EDMA3CC Error Interrupt             |
| EDMA3CC_MPINT   | EDMA3CC Memory Protection Interrupt |
| EDMA3TC0_ERRINT | TC0 Error Interrupt                 |
| EDMA3TC1_ERRINT | TC1 Error Interrupt                 |
| EDMA3TC2_ERRINT | TC2 Error Interrupt                 |

## 11.3.9.1 Transfer Completion Interrupts

The EDMA3CC is responsible for generating transfer completion interrupts to the CPU(s) (and other EDMA3 masters). The EDMA3 generates a single completion interrupt per shadow region, as well as one for the global region on behalf of all 64 channels. The various control registers and bit fields facilitate EDMA3 interrupt generation.

The software architecture should either use the global interrupt or the shadow interrupts, but not both.

The transfer completion code (TCC) value is directly mapped to the bits of the interrupt pending register (IPR/IPRH). For example, if TCC = 10 0001b, IPRH[1] is set after transfer completion, and results in interrupt generation to the CPU(s) if the completion interrupt is enabled for the CPU. See Section 11.3.9.1.1 for details on enabling EDMA3 transfer completion interrupts.

When a completion code is returned (as a result of early or normal completions), the corresponding bit in IPR/IPRH is set if transfer completion interrupt (final/intermediate) is enabled in the channel options parameter (OPT) for a PaRAM set associated with the transfer.

Table 11-16. Transfer Complete Code (TCC) to EDMA3CC Interrupt Mapping

| TCC Bits in OPT (TCINTEN/ITCINTEN = 1)   | IPR Bit Set   | TCC Bits in OPT (TCINTEN/ITCINTEN = 1)   | IPRH Bit Set (1)   |
|------------------------------------------|---------------|------------------------------------------|--------------------|
| 0                                        | IPR0          | 20h                                      | IPR32/IPRH0        |
| 1                                        | IPR1          | 21h                                      | IPR33/IPRH1        |
| 2h                                       | IPR2          | 22h                                      | IPR34/IPRH2        |
| 3h                                       | IPR3          | 23h                                      | IPR35/IPRH3        |
| 4h                                       | IPR4          | 24h                                      | IPR36/IPRH4        |
| ...                                      | ...           | ...                                      | ...                |
| 1Eh                                      | IPR30         | 3Eh                                      | IPR62/IPRH30       |
| 1Fh                                      | IPR31         | 3Fh                                      | IPR63/IPRH31       |

(1) Bit fields IPR[32-63] correspond to bits 0 to 31 in IPRH, respectively.

You can program the transfer completion code (TCC) to any value for a DMA/QDMA channel. A direct relation between the channel number and the transfer completion code value does not need to exist. This allows multiple channels having the same transfer completion code value to cause a CPU to execute the same interrupt service routine (ISR) for different channels.

If the channel is used in the context of a shadow region and you intend for the shadow region interrupt to be asserted, then ensure that the bit corresponding to the TCC code is enabled in IER/IERH and in the corresponding shadow region's DMA region access registers (DRAE/DRAEH).

You can enable Interrupt generation at either final transfer completion or intermediate transfer completion, or both. Consider channel m as an example.

- If the final transfer interrupt (TCCINT = 1 in OPT) is enabled, the interrupt occurs after the last transfer request of channel m is either submitted or completed (depending on early or normal completion).
- If the intermediate transfer interrupt (ITCCINT = 1 in OPT) is enabled, the interrupt occurs after every transfer request, except the last TR of channel m is either submitted or completed (depending on early or normal completion).
- If both final and intermediate transfer completion interrupts (TCCINT = 1, and ITCCINT = 1 in OPT) are

<!-- image -->

enabled, then the interrupt occurs after every transfer request is submitted or completed (depending on early or normal completion).

Table 11-17 shows the number of interrupts that occur in different synchronized scenarios. Consider channel 31, programmed with ACNT = 3, BCNT = 4, CCNT = 5, and TCC = 30.

Table 11-17. Number of Interrupts

| Options                   | A-Synchronized           | AB-Synchronized         |
|---------------------------|--------------------------|-------------------------|
| TCINTEN = 1, ITCINTEN = 0 | 1 (Last TR)              | 1 (Last TR)             |
| TCINTEN = 0, ITCINTEN = 1 | 19 (All but the last TR) | 4 (All but the last TR) |
| TCINTEN = 1, ITCINTEN = 1 | 20 (All TRs)             | 5 (All TRs)             |

## 11.3.9.1.1 Enabling Transfer Completion Interrupts

For the EDMA3 channel controller to assert a transfer completion to the external environment, the interrupts must be enabled in the EDMA3CC. This is in addition to setting up the TCINTEN and ITCINTEN bits in OPT of the associated PaRAM set.

The EDMA3 channel controller has interrupt enable registers (IER/IERH) and each bit location in IER/IERH serves as a primary enable for the corresponding interrupt pending registers (IPR/IPRH).

All of the interrupt registers (IER, IESR, IECR, and IPR) are either manipulated from the global DMA channel region, or by the DMA channel shadow regions. The shadow regions provide a view to the same set of physical registers that are in the global region.

The EDMA3 channel controller has a hierarchical completion interrupt scheme that uses a single set of interrupt pending registers (IPR/IPRH) and single set of interrupt enable registers (IER/IERH). The programmable DMA region access enable registers (DRAE/DRAEH) provides a second level of interrupt masking. The global region interrupt output is gated based on the enable mask that is provided by IER/IERH. see Figure 11-14

The region interrupt outputs are gated by IER and the specific DRAE/DRAEH associated with the region. See Figure 11-14.

<!-- image -->

www.ti.com

Figure 11-14. Interrupt Diagram

<!-- image -->

For the EDMA3CC to generate the transfer completion interrupts that are associated with each shadow region, the following conditions must be true:

- EDMA3CC\_INT0: (IPR.E0 &amp; IER.E0 &amp; DRAE0.E0) | (IPR.E1 &amp; IER.E1 &amp; DRAE0.E1) | …|(IPRH.E63 &amp; IERH.E63 &amp; DRAHE0.E63)
- EDMA3CC\_INT1: (IPR.E0 &amp; IER.E0 &amp; DRAE1.E0) | (IPR.E1 &amp; IER.E1 &amp; DRAE1.E1) | …| (IPRH.E63 &amp; IERH.E63 &amp; DRAHE1.E63)
- EDMA3CC\_INT2 : (IPR.E0 &amp; IER.E0 &amp; DRAE2.E0) | (IPR.E1 &amp; IER.E1 &amp; DRAE2.E1) | …|(IPRH.E63 &amp; IERH.E63 &amp; DRAHE2.E63)....
- Up to EDMA3CC\_INT7 : (IPR.E0 &amp; IER.E0 &amp; DRAE7.E0) | (IPR.E1 &amp; IER.E1 &amp; DRAE7.E1) | …|(IPRH.E63 &amp; IERH.E63 &amp; DRAEH7.E63)

NOTE:

The DRAE/DRAEH for all regions are expected to be set up at system initialization and to remain static for an extended period of time. The interrupt enable registers should be used for dynamic enable/disable of individual interrupts.

Because there is no relation between the TCC value and the DMA/QDMA channel, it is possible, for example, for DMA channel 0 to have the OPT.TCC = 63 in its associated PaRAM set. This would mean that if a transfer completion interrupt is enabled (OPT.TCINTEN or OPT.ITCINTEN is set), then based on the TCC value, IPRH.E63 is set up on completion. For proper channel operations and interrupt generation using the shadow region map, you must program the DRAE/DRAEH that is associated with the shadow region to have read/write access to both bit 0 (corresponding to channel 0) and bit 63 (corresponding to IPRH bit that is set upon completion).

## 11.3.9.1.2 Clearing Transfer Completion Interrupts

Transfer completion interrupts that are latched to the interrupt pending registers (IPR/IPRH) are cleared by writing a 1 to the corresponding bit in the interrupt pending clear register (ICR/ICRH). For example, a write of 1 to ICR.E0 clears a pending interrupt in IPR.E0.

If an incoming transfer completion code (TCC) gets latched to a bit in IPR/IPRH, then additional bits that get set due to a subsequent transfer completion will not result in asserting the EDMA3CC completion interrupt. In order for the completion interrupt to be pulsed, the required transition is from a state where no enabled interrupts are set to a state where at least one enabled interrupt is set.

## 11.3.9.2 EDMA3 Interrupt Servicing

Upon completion of a transfer (early or normal completion), the EDMA3 channel controller sets the appropriate bit in the interrupt pending registers (IPR/IPRH), as the transfer completion codes specify. If the completion interrupts are appropriately enabled, then the CPU enters the interrupt service routine (ISR) when the completion interrupt is asserted.

After servicing the interrupt, the ISR should clear the corresponding bit in IPR/IPRH, thereby enabling recognition of future interrupts. The EDMA3CC will only assert additional completion interrupts when all IPR/IPRH bits clear.

When one interrupt is serviced many other transfer completions may result in additional bits being set in IPR/IPRH, thereby resulting in additional interrupts. Each of the bits in IPR/IPRH may need different types of service; therefore, the ISR may check all pending interrupts and continue until all of the posted interrupts are serviced appropriately.

Examples of pseudo code for a CPU interrupt service routine for an EDMA3CC completion interrupt are shown in Example 11-2 and Example 11-3.

The ISR routine in Example 11-2 is more exhaustive and incurs a higher latency.

## Example 11-2. Interrupt Servicing

The pseudo code:

1. Reads the interrupt pending register (IPR/IPRH).
2. Performs the operations needed.
3. Writes to the interrupt pending clear register (ICR/ICRH) to clear the corresponding IPR/IPRH bit(s).
4. Reads IPR/IPRH again:
- a. If IPR/IPRH is not equal to 0, repeat from step 2 (implies occurrence of new event between step 2 to step 4).
- b. If IPR/IPRH is equal to 0, this should assure you that all of the enabled interrupts are inactive.

NOTE:

An event may occur during step 4 while the IPR/IPRH bits are read as 0 and the application is still in the interrupt service routine. If this happens, a new interrupt is recorded in the device interrupt controller and a new interrupt generates as soon as the application exits in the interrupt service routine.

Example 11-3 is less rigorous, with less burden on the software in polling for set interrupt bits, but can occasionally cause a race condition as mentioned above.

## Example 11-3. Interrupt Servicing

If you want to leave any enabled and pending (possibly lower priority) interrupts; you must force the interrupt logic to reassert the interrupt pulse by setting the EVAL bit in the interrupt evaluation register (IEVAL).

The pseudo code is as follows:

1. Enters ISR.

<!-- image -->

<!-- image -->

www.ti.com

## Example 11-3. Interrupt Servicing (continued)

2. Reads IPR/IPRH.
3. For the condition that is set in IPR/IPRH that you want to service, do the following:
- a. Service interrupt as the application requires.
- b. Clear the bit for serviced conditions (others may still be set, and other transfers may have resulted in returning the TCC to EDMA3CC after step 2).
4. Reads IPR/IPRH prior to exiting the ISR:
- a. If IPR/IPRH is equal to 0, then exit the ISR.
- b. If IPR/IPRH is not equal to 0, then set IEVAL so that upon exit of ISR, a new interrupt triggers if any enabled interrupts are still pending.

## 11.3.9.3 Interrupt Evaluation Operations

The EDMA3CC has interrupt evaluate registers (IEVAL) that exist in the global region and in each shadow region. The registers in the shadow region are the only registers in the DMA channel shadow region memory map that are not affected by the settings for the DMA region access enable registers (DRAE/DRAEH). Writing a 1 to the EVAL bit in the registers that are associated with a particular shadow region results in pulsing the associated region interrupt (global or shadow), if any enabled interrupt (via IER/IERH) is still pending (IPR/IPRH). This register assures that the CPU does not miss the interrupts (or the EDMA3 master associated with the shadow region) if the software architecture chooses not to use all interrupts. See Example 11-3 for the use of IEVAL in the EDMA3 interrupt service routine (ISR).

Similarly, an error evaluation register (EEVAL) exists in the global region. Writing a 1 to the EVAL bit in EEVAL causes the pulsing of the error interrupt if any pending errors are in EMR/EMRH, QEMR, or CCERR. The EVAL bit must be written with 1 to clear interrupts to the INTC, even when all error interrupt registers are cleared. See Section 11.3.9.4, Error Interrupts , for additional information regarding error interrupts.

NOTE:

While using IEVAL for shadow region completion interrupts, ensure that the IEVAL operated upon is from that particular shadow region memory map.

## 11.3.9.4 Error Interrupts

The EDMA3CC error registers provide the capability to differentiate error conditions (event missed, threshold exceed, etc.). Additionally, setting the error bits in these registers results in asserting the EDMA3CC error interrupt. If the EDMA3CC error interrupt is enabled in the device interrupt controller(s), then it allows the CPU(s) to handle the error conditions.

The EDMA3CC has a single error interrupt (EDMA3CC\_ERRINT) that is asserted for all EDMA3CC error conditions. There are four conditions that cause the error interrupt to pulse:

- DMA missed events: for all 64 DMA channels. DMA missed events are latched in the event missed registers (EMR/EMRH).
- QDMA missed events: for all 8 QDMA channels. QDMA missed events are latched in the QDMA event missed register (QEMR).
- Threshold exceed: for all event queues. These are latched in EDMA3CC error register (CCERR).
- TCC error: for outstanding transfer requests that are expected to return completion code (TCCHEN or TCINTEN bit in OPT is set to 1) exceeding the maximum limit of 63. This is also latched in the EDMA3CC error register (CCERR).

Figure 11-15 illustrates the EDMA3CC error interrupt generation operation.

If any of the bits are set in the error registers due to any error condition, the EDMA3CC\_ERRINT is always asserted, as there are no enables for masking these error events. Similar to transfer completion interrupts (EDMA3CC\_INT), the error interrupt also only pulses when the error interrupt condition transitions from no errors being set to at least one error being set. If additional error events are latched prior to the original error bits clearing, the EDMA3CC does not generate additional interrupt pulses.

To reduce the burden on the software, there is an error evaluate register (EEVAL) that allows reevaluation of pending set error events/bits, similar to the interrupt evaluate register (IEVAL). You can use this so that the CPU(s) does not miss any error events. You must write a 1 to the EEVAL.EVAL bit to clear interrupts to the INTC after all error registers have been cleared.

NOTE:

It is good practice to enable the error interrupt in the device interrupt controller and to associate an interrupt service routine with it to address the various error conditions appropriately. Doing so puts less burden on the software (polling for error status); additionally, it provides a good debug mechanism for unexpected error conditions.

## Figure 11-15. Error Interrupt Operation

<!-- image -->

<!-- image -->