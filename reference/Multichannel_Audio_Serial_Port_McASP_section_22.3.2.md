## 22.3.2 Functional Block Diagram

Figure 22-2 shows the major blocks of the McASP. The McASP has independent receive/transmit clock generators and frame sync generators.

Figure 22-2. McASP Block Diagram

<!-- image -->

ARINT

- A McASP has 6 serial data pins.
- B AMUTEIN is not a dedicated McASP pin, but typically comes from one of the external interrupt pins.

<!-- image -->

<!-- image -->

www.ti.com

## 22.3.2.1 System Level Connections

Figure 22-3 through Figure 22-7 show examples of McASP usage in digital audio encoder/decoder systems.

Figure 22-3. McASP to Parallel 2-Channel DACs

<!-- image -->

Figure 22-4. McASP to 6-Channel DAC and 2-Channel DAC

<!-- image -->

<!-- image -->

Figure 22-5. McASP to Digital Amplifier

<!-- image -->

Figure 22-6. McASP as Digital Audio Encoder

<!-- image -->

Figure 22-7. McASP as 16 Channel Digital Processor

<!-- image -->