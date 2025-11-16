<!-- image -->

www.ti.com

## 14.3.3.1.2.8 Speed, Duplex, and Pause Frame Support Negotiation

The CPMAC\_SL can operate in half duplex or full duplex in 10/100 Mbit modes, and can operate in full duplex only in 1000 Mbit mode. Pause frame support is included in 10/100/1000 Mbit modes as configured by the host.

## 14.3.3.2 Frame Classification

Received frames are proper (good) frames if they are between 64 and rx\_maxlen in length (inclusive) and contain no errors (code/align/CRC).

Received frames are long frames if their frame count exceeds the value in the rx\_maxlen register. The rx\_maxlen register reset (default) value is 1518 (dec). Long received frames are either oversized or jabber frames. Long frames with no errors are oversized frames. Long frames with CRC, code, or alignment errors are jabber frames.

Received frames are short frames if their frame count is less than 64 bytes. Short frames that contain no errors are undersized frames. Short frames with CRC, code, or alignment errors are fragment frames.

A received long packet will always contain rx\_maxlen number of bytes transferred to memory (if rx\_cef\_en = 1). An example with rx\_maxlen = 1518 is below:

- If the frame length is 1518, then the packet is not a long packet and there will be 1518 bytes transferred to memory.
- If the frame length is 1519, there will be 1518 bytes transferred to memory. The last three bytes will be the first three CRC bytes.
- If the frame length is 1520, there will be 1518 bytes transferred to memory. The last two bytes will be the first two CRC bytes.
- If the frame length is 1521, there will be 1518 bytes transferred to memory. The last byte will be the first CRC byte.

If the frame length is 1522, there will be 1518 bytes transferred to memory. The last byte will be the last data byte.

## 14.3.4 Command IDLE

The cmd\_idle bit in the MACCONTROL register allows CPGMAC\_SL operation to be suspended. When the idle state is commanded, the CPGMAC\_SL will stop processing receive and transmit frames at the next frame boundary. Any frame currently in reception or transmission will be completed normally without suspension. Received frames that are detected after the suspend state is entered are ignored. Commanded idle is similar in operation to emulation control and clock stop.

## 14.3.5 RMII Interface

The CPRMII peripheral shall be compliant to the RMII specification document.

## Features:

- Source Synchronous 10/100 Mbit operation.
- Full and Half Duplex support.

## 14.3.5.1 RMII Receive (RX)

The CPRMII receive (RX) interface converts the input data from the external RMII PHY (or switch) into the required MII (CPGMAC) signals. The carrier sense and collision signals are determined from the RMII input data stream and transmit inputs as defined in the RMII specification.

An asserted RMII\_RXER on any di-bit in the received packet will cause an MII\_RXER assertion to the CPGMAC during the packet. In 10Mbps mode, the error is not required to be duplicated on 10 successive clocks. Any di-bit which has an asserted RMII\_RXER during any of the 10 replications of the data will cause the error to be propagated.