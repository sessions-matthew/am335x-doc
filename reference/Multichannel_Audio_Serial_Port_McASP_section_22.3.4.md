<!-- image -->

www.ti.com

## 22.3.3.2.3 Frame Format

An S/PDIF frame is composed of two subframes (Figure 22-13). For linear coded audio applications, the rate of frame transmission normally corresponds exactly to the source sampling frequency f s . The S/PDIF format clock rate is therefore 128 × f s (128 = 32 cells/subframe × 2 clocks/cell × 2 subframes/sample). For example, for an S/PDIF stream at a 192 kHz sampling frequency, the serial clock is 128 × 192 kHz = 24.58 MHz.

In 2-channel operation mode, the samples taken from both channels are transmitted by time multiplexing in consecutive subframes. Both subframes contain valid data. The first subframe ( left or A channel in stereophonic operation and primary channel in monophonic operation) normally starts with preamble M. However, the preamble of the first subframe changes to preamble B once every 192 frames to identify the start of the block structure used to organize the channel status information. The second subframe ( right or B channel in stereophonic operation and secondary channel in monophonic operation) always starts with preamble W.

In single-channel operation mode in a professional application, the frame format is the same as in the 2channel mode. Data is carried in the first subframe and may be duplicated in the second subframe. If the second subframe is not carrying duplicate data, cell 28 (validity bit) is set to logical 1.

## Figure 22-13. S/PDIF Frame Format

<!-- image -->

## 22.3.4 Definition of Terms

The serial bit stream transmitted or received by the McASP is a long sequence of 1s and 0s, either output or input on one of the audio transmit/receive pins (AXRn). However, the sequence has a hierarchical organization that can be described in terms of frames of data, slots, words, and bits.

A basic synchronous serial interface consists of three important components: clock, frame sync, and data. Figure 22-14 shows two of the three basic components-the clock (ACLK) and the data (AXRn). Figure 22-14 does not specify whether the clock is for transmit (ACLKX) or receive (ACLKR) because the definitions of terms apply to both receive and transmit interfaces. In operation, the transmitter uses ACLKX as the serial clock, and the receiver uses ACLKR as the serial clock. Optionally, the receiver can use ACLKX as the serial clock when the transmitter and receiver of the McASP are configured to operate synchronously.

Bit

A bit is the smallest entity in the serial data stream. The beginning and end of each bit is marked by an edge of the serial clock. The duration of a bit is a serial clock period. A 1 is represented by a logic high on the AXRn pin for the entire duration of the bit. A 0 is represented by a logic low on the AXRn pin for the entire duration of the bit.

Word

Slot

A word is a group of bits that make up the data being transferred between the processor and the external device. Figure 22-14 shows an 8-bit word.

A slot consists of the bits that make up the word, and may consist of additional bits used to pad the word to a convenient number of bits for the interface between the processor and the external device. In Figure 22-14, the audio data consists of only 8 bits of useful data (8-bit word), but it is padded with 4 zeros (12-bit slot) to satisfy the desired protocol in interfacing to an external device. Within a slot, the bits may be shifted in/out of the McASP on the AXRn pin either MSB or LSB first. When the word size is smaller than the slot size, the word may be aligned to the left (beginning) of the slot or to the right (end) of the slot. The additional bits in the slot not belonging to the word may be padded with 0, 1, or with one of the bits (the MSB or the LSB typically) from the data word. These options are shown in Figure 22-15.

<!-- image -->

## Figure 22-14. Definition of Bit, Word, and Slot

<!-- image -->

- (1) b7:b0 - bits. Bits b7 to b0 form a word.
- (2) P - pad bits. Bits b7 to b0, together with the four pad bits, form a slot.
- (3) In this example, the data is transmitted MSB first, left aligned.

## Figure 22-15. Bit Order and Word Alignment Within a Slot Examples

<!-- image -->

- 1 Unshaded: bit belongs to word
- (a) 87h as 8-bit word, 12-bit slot, left align, MSB first, pad zeros
- 87h as 8-bit word, 12-bit slot, (b) right align, MSB first, pad zeros
- left align, LSB first, pad zeros 87h as 8-bit word, 12-bit slot, (c)
- right align, LSB first, pad zeros 87h as 8-bit word, 12-bit slot, (d)
- 87h as 8-bit word, 12-bit slot, left align, MSB first, pad with bit 7 (e)
- 87h as 8-bit word, 12-bit slot, right align, MSB first, pad with bit 4 (f)
- 87h as 8-bit word, 12-bit slot, left align, LSB first, pad with bit 7 (g)
- 87h as 8-bit word, 12-bit slot, right align, LSB first, pad with bit 4 (h)
- left align, LSB first, pad with bit 7 07h as 8-bit word, 12-bit slot, (i)
- right align, LSB first, pad with bit 4 86h as 8-bit word, 12-bit slot, (j)
- Shaded: bit is a pad bit 1