SoC +

<!-- image -->

events www.ti.com

Counter (32 bit)

## 4.4.3 Industrial Ethernet Peripheral (IEP)

The industrial ethernet peripheral (IEP) performs hardware work required for industrial ethernet functions. The IEP module features an industrial ethernet timer with 8 compare events, industrial ethernet sync generator and latch capture, industrial ethernet watchdog timer, and a digital I/O port (DIGIO). The IEP functional block diagram is shown in Figure 4-19. LATCH -· prek»\_edo\_latcho\_in

Pins:

prek»\_edio\_data\_out prék&gt;\_edio\_outvalid

prok&gt;\_edio\_data\_in pr&lt;k&gt;.

\_edo\_latch1\_in

Figure 4-19. Industrial Ethernet Peripheral Block Diagram

R\_IPG Monitor sevent Watchdog

<!-- image -->

## 4.4.3.1 IEP Clock Source

The IEP has a selectable module input clock. The clock source is selected by the state of the IEPCLK.OCP\_EN bit within the PRU-ICSS CFG register space. Two clock sources are supported for the IEP input clock:

- iep\_clk (default): Runs at 200 MHz
- ocp\_clk

Switching from iep\_clk to ocp\_clk is done by writing 1 to the IEPCLK.OCP\_EN bit. This is a one time configuration step before enabling the IEP function. Switching back from ocp\_clk to iep\_clk is only supported through a hardware reset of the PRU-ICSS.

## 4.4.3.2 Industrial Ethernet Timer

The industrial ethernet timer is a simple 32-bit timer. This timer is intended for use by industrial ethernet functions but can also be leveraged as a generic timer in other applications.

## 4.4.3.2.1 Features

The industrial ethernet timer supports the following features:

- One master 32-bit count-up counter with an overflow status bit
- -Runs on iep\_clk or ocp\_clk
- -Write 1 to clear status
- -Supports a programmable increment value from 1 to 16 (default 5)
- -An optional compensation method allows the increment value to apply a compensation increment value from 1 to 16, counting up to 2^24 iep\_clk/ocp\_clk events
- Ten 32-bit capture registers (CAPR[5:0], CAPR[7:6], CAPF[7:6])
- -Eight capture inputs with optional synchronous or asynchronous mode
- Six rise-only capture inputs (CAPR[5:0])
- Two rise-and-fall capture inputs:
- CAPR[7] and CAPF[7]

EDIO

- CAPR[6] and CAPF[6]
- One input signal will be used by two capture registers:
- One register for rising edge
- One register for falling edge
- One global event (any capture event) output for interrupt generation, triggered by any capture event
- Eight 32-bit compare registers (CMP[7:0], CMP\_STAT)
- -Eight status bits, write 1 to clear
- -Eight individual event outputs
- -One global event (any compare event) output for interrupt generation triggered by any compare event
- Sixteen outputs, one high level and one high pulse for each compare hit event
- CMP[0], if enabled, will reset the counter on the next iep\_clk or ocp\_clk cycle

## 4.4.3.2.2 Basic Programming Model

Follow these basic steps to configure the IEP Timer.

1. Initialize timer to known state (default values)
- a. Disable counter (GLB\_CFG.CNT\_ENABLE)
- b. Reset Count Register (CNT) by writing 0xFFFFFFFF to clear
- c. Clear overflow status register (GLB\_STS.CNT\_OVF)
- d. Clear compare status (CMP\_STS)
2. Set compare values (CMP0-CMPx)
3. Enable compare event (CMP\_CFG.CMP\_EN)
4. Set increment value (GLB\_CFG.DEFAULT\_INC)
5. Set compensation value (COMPEN.COMPEN\_CNT)
6. Enable counter (GLB\_CFG.CNT\_ENABLE)

## 4.4.3.3 Industrial Ethernet Mapping

Some of the capture inputs and compare registers are mapped to specific industrial ethernet functions in hardware, shown in Table 4-23. All capture inputs are mapped to industrial ethernet functions, and these inputs are not available for any other application. The cmp1 and cmp2 compare registers also function as the start time triggers for SYNC0 and SYNC1, respectively.

Table 4-23. Industrial Ethernet Timer Mode Mapping

| Capture Input       | IEP Line/Function                                                           |
|---------------------|-----------------------------------------------------------------------------|
| cap0, rise only     | PRU0_RX_SOF                                                                 |
| cap1, rise only     | PRU0_RX_SFD                                                                 |
| cap2, rise only     | PRU1_RX_SOF                                                                 |
| cap3, rise only     | PRU1_RX_SFD                                                                 |
| cap4, rise only     | PORT0_TX_SOF                                                                |
| cap5, rise only     | PORT1_TX_SOF                                                                |
| cap6, rise and fall | latch0_in, SOC IO inputs                                                    |
| cap7, rise and fall | latch1_in, SOC IO inputs                                                    |
| cmp1                | For SYNC0 trigger of start time                                             |
| cmp2                | For SYNC1 trigger of start time; only valid in the independent mode         |
| cmp3                | For MII TX0 start trigger, if MII register TXCFG0/1[TX_EN_MODE] is enabled. |

<!-- image -->

<!-- image -->

www.ti.com

## Table 4-23. Industrial Ethernet Timer Mode Mapping (continued)

| Capture Input   | IEP Line/Function                                                           |
|-----------------|-----------------------------------------------------------------------------|
| cmp4            | For MII TX1 start trigger, if MII register TXCFG0/1[TX_EN_MODE] is enabled. |

## 4.4.3.4 Industrial Ethernet SYNC0/SYNC1

The industrial ethernet sync block supports the generation of two synchronization signals: SYNC0 and SYNC1. SYNC0 and SYNC1 can be directly mapped to output signals (pr1\_edc\_sycn0\_out and pr1\_edc\_sync1\_out) for external devices to use. They can also be used for internal synchronization within the PRU-ICSS. These signals are also mapped as system events and can therefore be mapped to the ARM core's Host interrupts.

## 4.4.3.4.1 Features

The industrial ethernet sync block supports the following features:

- Two synchronize generation signals (SYNC0, SYNC1)
- -Activation time synchronized with IEP Timer
- CMP[1] triggers SYNC0 activation time
- CMP[2] triggers SYNC1 activation time (only valid in the independent mode)
- -Pulse width defined by registers or ack mode (remain asserted until software acknowledged)
- -Cyclic or single-shot operation
- -Option to enable or disable sync generation
- Programmable number of clock cycles between the start of SYNC0 to the start of SYNC1

## 4.4.3.4.2 Sync Generation Modes

There are four modes of operation for the sync signals: cyclic mode, single shot mode, cyclic with acknowledge mode, and single shot with acknowledge mode. Figure 4-20 shows examples of these modes. The start time is set by the SYNC\_START register. The cycle time is configured by the SYNC0\_PERIOD register. The pulse length is defined by SYNC\_PWIDTH register.

Figure 4-20. Sync Signal Generation Mode

<!-- image -->

In SYNC1 dependent mode (SYNC\_CTRL.sync1\_ind\_en = 0), SYNC1 depends on SYNC0 and the start time of the SYNC1 can be defined by the SYNC1\_DELAY register. Figure 4-21 shows different examples when changing the value in the SYNC1\_DELAY register. Note if the SYNC1 delay time is 0, SYNC1 reflects SYNC0.

Cyclic generation cannot be used for network time synchronized applications because only the CMP1/CMP2 hit occurs in the compensated time domain.

<!-- image -->

<!-- image -->

www.ti.com

Figure 4-21. Examples of the Dependent Mode of SYNC1

<!-- image -->

Single shot

SYNC0 :

<!-- image -->

<!-- image -->

| Field           |   Value |
|-----------------|---------|
| SYNC0_CYCLIC_EN |       0 |
| SYNC0_ACK_EN    |       1 |

<!-- image -->

## 4.4.3.5 Industrial Ethernet Watchdog Timer

In industrial ethernet applications, the watchdog timer (WD) is used as a safety feature to monitor process data communication and to turn off the outputs of the digital input/output (DIGIO) functional block after a set time. The WD will thereby protect the system from errors or faults by timeout or expiration. The expiration is used to initiate corrective action in order to keep the system in a safe state and restore normal operation based on configuration. Therefore, if the system is stable, the watchdog timer should be regularly reset or cleared to avoid timeout or expiration.

## 4.4.3.5.1 Features

The industrial ethernet watchdog timer supports the following features:

- One 32-bit pre-divider for generating a WD clock (default 100 μ s) based on iep\_clk input
- Two 16-bit Watchdog Timers:
- -PDI\_WD for Sync Managers WD, used in conjunction with digital input/output (DIGIO)
- -PD\_WD for data link layer user WD, used in conjunction with data link layer or application layer interface actions

## 4.4.3.6 Industrial Ethernet Digital I/O (DIGIO)

The IEP Digital I/O (DIGIO) block provides dedicated I/Os intended for industrial ethernet protocols, but they can also be used as generic I/Os in other applications. The digital inputs can be sampled when specific events occur, or continuously as a raw input. Likewise, driving the digital outputs can be triggered by specific events, or controlled by software. The timing, delay cycle clocks, data sources, and data valid of the digital input and outputs are controlled by the DIGIO\_CTRL and DIGIO\_EXT registers.

## 4.4.3.6.1 Features

The industrial ethernet digital I/O supports the following features:

- Digital data output
- -32 channels (pr1\_edio\_data\_out[31:0])
- -Five event options for driving output data output:
- End of frame event (PRU0/1\_RX\_EOF)
- SYNC0 events
- SYNC1 events
- Watchdog trigger
- Software enable
- Digital data out enable (optional tri-state control)
- Digital data input
- -32 channels (pr1\_edio\_data\_in[31:0])
- -DIGIO\_DATA\_IN\_RAW supports direct sampling of pr1\_edio\_data\_in
- -DIGIO\_DATA\_IN supports four event options to trigger sampling of pr1\_edio\_data\_in:
- Start of frame event in start of frame (SOF) mode
- pr1\_edio\_latch\_in event
- SYNC0 events
- SYNC1 events

NOTE:

Some devices may not pin out all 32 data I/O signals. For which data pins are available on this device, see Table 4-3, PRU-ICSS Pin List .

<!-- image -->

<!-- image -->

www.ti.com

## 4.4.3.6.2 DIGIO Block Diagrams

Figure 4-22 shows the signals and registers for capturing the DIGIO data in. In PRU0/1\_RX\_SOF mode, the delay time of capturing pr1\_edio\_data\_in is programmable through the SOF\_DLY bit of the DIGIO\_EXT register.

Figure 4-22. IEP DIGIO Data In

<!-- image -->

- (1) Register
- (2) Internal signal wire
- (3) External pin input/output

<!-- image -->

Figure 4-23 shows the signals and registers for driving the DIGIO data out. The pr1\_edio\_data\_out is immediately forced to zero when OUTVALID\_MODE = 1, pr1\_edio\_oe\_ext = 1, and PD\_WD\_EXP = 1, or the next update hardware post PD\_WD\_EXP. Delay assertion of pr1\_edio\_outvalid from pr1\_edio\_data\_out update events are controlled by software (SW\_OUTVALID).

## Figure 4-23. IEP DIGIO Data Out

NOTE:

pr1\_edio\_oe\_ext is tied high internally.

<!-- image -->

## 4.4.3.6.3 Basic Programming Model

Follow these steps to configure and read the DIGIO Data Input.

1. Read DIGIO\_DATA\_IN\_RAW for raw input data

or

1. Enable sampling of pr1\_edio\_data\_in[31:0] by setting DIGIO\_CTRL.IN\_MODE
2. Read DIGIO\_DATA\_IN for data sampled by the selected trigger source

Follow these steps to configure and write to the DIGIO Data Output.

1. Pre-configure DIGIO by setting DIGIO\_EXP.OUTVALID\_OVR\_EN and DIGIO\_EXP.SW\_DATA\_OUT\_UPDATE
2. Write to DIGIO\_DATA\_OUT to configure output data
3. To Hi-Z output, set DIGIO\_DATA\_OUT\_EN (clear DIGIO\_DATA\_OUT\_EN to drive value stored in DIGIO\_DATA\_OUT)