<!-- image -->

Each FIFO has support for generating interrupts when the FIFO word count has reached a programmable threshold level. The user can program the desired word count at which the CPU should be interrupted. Whenever the threshold counter value is reached, it sets the FIFOxTHRESHOLD interrupt flag, and the CPU is interrupted if the FIFOxTHRESHOLD interrupt enable bit is set. The user can clear the interrupt flag, after emptying the FIFO, by writing a '1' to the FIFOxTHRESHOLD interrupt status bit. To determine how many samples are currently in the FIFO at a given moment, the FIFOxCOUNT register can be read by the CPU.

The FIFO can also generate FIFOx\_OVERRUN and FIFOx\_UNDERFLOW interrupts. The user can mask these events by programming the IRQENABLE\_CLR register. To clear a FIFO underflow or FIFO overrun interrupt, the user should write a '1' to the status bit in the IRQSTS register. The TSC\_ADC\_SS does not recover from these conditions automatically. Therefore, the software will need to disable and then again enable the TSC\_ADC\_SS. Before the user can turn the module back on, the user must read the ADCSTAT register to check if the status of the ADC FSM is idle and the current step is the idle step.

## 12.3.6 DMA Requests

Each FIFO group can be serviced by either a DMA or by the CPU. To generate DMA requests, the user must set the enable bit in the DMAENABLE\_SET Register. Also, the user can program the desired number of words to generate a DMA request using the DMAxREQ register. When the FIFO level reaches or exceeds that value, a DMA request is generated.

The DMA slave port allows for burst reads in order to effectively move the FIFO data. Internally, the OCP DMA address (MSB) is decoded for either FIFO 0 or FIFO 1. The lower bits of the DMA addresses are ignored since the FIFO pointers are incremented internally.

## 12.3.7 Analog Front End (AFE) Functional Block Diagram

The AFE features are listed below, and some are controlled by the TSC\_ADC\_SS:

- 12-bit ADC
- Sampling rate can be as fast as every 15 ADC clock cycles
- Support for internal ADC clock divider logic
- Support for configuring the delay between samples also the sampling time

<!-- image -->

www.ti.com

Figure 12-2. Functional Block Diagram

<!-- image -->

- (1) In the device-specific datasheet:
- VDDA\_ADC and VSSA\_ADC are referred to as "Internal References"
- VREFP and VREFN are referred to as "External References"