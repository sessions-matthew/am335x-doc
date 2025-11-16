<!-- image -->

## 17.1 Mailbox

## 17.1.1 Introduction

## 17.1.1.1 Features

Global features of the Mailbox module are:

- OCP slave interface (L4) supports:
- -32-bit data bus width
- -8/16/32 bit access supported
- -9-bit address bus width
- -Burst not supported
- 8 mailbox sub-modules
- Each mailbox sub module allows 1-way communication between 2 initiators
- Flexible mailbox/initiators assignment scheme
- 4 messages per mailbox sub-module
- 32-bit message width
- Support of 16/32-bit addressing scheme
- Non-intrusive emulation
- 4 interrupts (one per user: 1 to MPU Subsystem, 2 to PRU-ICSS, and 1 to WakeM3)

## 17.1.1.2 Unsupported Features

There are no unsupported features for Mailbox on this device.

## Integration

This device contains a single instantiation of the Mailbox module at the system level. The mailbox function is made of eight sub-module mailboxes each supporting a 1-way communication between two initiators. The communication protocol from the sender to the receiver is implemented with mailbox registers using interrupts. The sender sends information to the receiver by writing to the mailbox. Interrupt signaling is used to notify the receiver a message has been queued or the sender for overflow situation.

The eight mailboxes are enough to handle communications between the MPU Subsystem, PRU-ICSS PRUs, and WakeM3. Note that because the WakeM3 has access only to L4\_Wakeup peripherals it does not have access to the Mailbox registers. A mailbox interrupt can still be sent to the M3 to trigger message notification. The actual message payload must be placed in either M3 internal memory or in the Control Module Interprocessor Message registers (IPC\_MSG\_REG{0-7}).

## Mailbox Integration

<!-- image -->

## 17.1.1.1 Mailbox Connectivity Attributes

The general connectivity for the Mailbox is shown in Mailbox Connectivity Attributes.

## Mailbox Connectivity Attributes

| Attributes          | Type                                                                                                                           |
|---------------------|--------------------------------------------------------------------------------------------------------------------------------|
| Power Domain        | Peripheral Domain                                                                                                              |
| Clock Domain        | L4PER_L4LS_GCLK                                                                                                                |
| Reset Signals       | PER_DOM_RST_N                                                                                                                  |
| Idle/Wakeup Signals | Smart Idle                                                                                                                     |
| Interrupt Requests  | 4 Interrupts mail_u0 (MBINT0) - to MPU Subsystem mail_u1 - to PRU-ICSS (PRU0) mail_u2 - to PRU-ICSS (PRU1) mail_u3 - to WakeM3 |
| DMA Requests        | None                                                                                                                           |
| Physical Address    | L4 Peripheral slave port                                                                                                       |

## 17.1.1.2 Mailbox Clock and Reset Management

The mailbox function operates from the L4 interface clock.

<!-- image -->

<!-- image -->

www.ti.com

Table 17-1. Mailbox Clock Signals

| Clock Signal                 | Max Freq   | Reference / Source   | Comments                   |
|------------------------------|------------|----------------------|----------------------------|
| Functional / Interface clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk From PRCM |

## 17.1.1.3 Mailbox Pin List

The Mailbox module does not include any external interface pins.

## Functional Description

This device has the following mailbox instances:

- System mailbox

Table 17-2 shows Mailbox Implementation in this device, where u is the user number and m is the mailbox number.

Table 17-2. Mailbox Implementation

| Mailbox Type   | User Number(u)   | Mailbox Number(m)   |   Messages per Mailbox |
|----------------|------------------|---------------------|------------------------|
| System mailbox | 0 to 3           | 0 to 7              |                      4 |

The mailbox module provides a means of communication through message queues among the users (depending on the mailbox module instance). The individual mailbox modules (8 for the system mailbox instance), or FIFOs, can associate (or de-associate) with any of the processors using the MAILBOX\_IRQENABLE\_SET\_u (or MAILBOX\_IRQENABLE\_CLR\_u) register.

The system mailbox module includes the following user subsystems:

- User 0: MPU Subsystem (u = 0)
- User 1: PRU\_ICSS PRU0 (u = 1)
- User 2: PRU\_ICSS PRU1 (u = 2)
- User 3: WakeM3 (u = 3)

Each user has a dedicated interrupt signal from the corresponding mailbox module instance and dedicated interrupt enabling and status registers. Each

MAILBOX\_IRQSTATUS\_RAW\_u/MAILBOX\_IRQSTATUS\_CLR\_u interrupt status register corresponds to a particular user.

For the system mailbox instance, a user can query its interrupt status register through the L4\_STANDARD interconnect.

## 17.1.1.1 Mailbox Block Diagram

Figure 17-1 shows the mailbox block diagram.

## Figure 17-1. Mailbox Block Diagram

<!-- image -->

## 17.1.1.2 Software Reset

The mailbox module supports a software reset through the MAILBOX\_SYSCONFIG[0].SOFTRESET bit. Setting this bit to 1 enables an active software reset that is functionally equivalent to a hardware reset. Reading the MAILBOX\_SYSCONFIG[0] SOFTRESET bit gives the status of the software reset:

- Read 1: the software reset is on-going
- Read 0: the software reset is complete

The software must ensure that the software reset completes before doing mailbox operations.

## 17.1.1.3 Power Management

Table 17-3 describes power-management features available for the mailbox module.

Table 17-3. Local Power Management Features

| Feature                | Registers                         | Description                                            |
|------------------------|-----------------------------------|--------------------------------------------------------|
| Clock autogating       | NA                                | Feature not available                                  |
| Slave idle modes       | MAILBOX_SYSCONFIG[3:2].SIDLEMOD E | Force-idle, no-idle and smart-idle modes are available |
| Clock activity         | NA                                | Feature not available                                  |
| Master standby modes   | NA                                | Feature not available                                  |
| Global wake-up enable  | NA                                | Feature not available                                  |
| Wake-up sources enable | NA                                | Feature not available                                  |

<!-- image -->

<!-- image -->

The mailbox module can be configured using the MAILBOX\_SYSCONFIG[3:2] SIDLEMODE bit field to one of the following acknowledgment modes:

- Force-idle mode (SIDLEMODE = 0x0): The mailbox module immediately enters the idle state on receiving a low-power-mode request from the PRCM module. In this mode, the software must ensure that there are no asserted output interrupts before requesting this mode to go into the idle state.
- No-idle mode (SIDLEMODE = 0x1): The mailbox module never enters the idle state.
- Smart-idle mode (SIDLEMODE = 0x2): After receiving a low-power-mode request from the PRCM module, the mailbox module enters the idle state only after all asserted output interrupts are acknowledged.

## 17.1.1.4 Interrupt Requests

An interrupt request allows the user of the mailbox to be notified when a message is received or when the message queue is not full. There is one interrupt per user. Table 17-4 lists the event flags, and their mask, that can cause module interrupts.

Table 17-4. Interrupt Events

| Non-Maskable Event Flag (1)                        | Maskable Event Flag                                | Event Mask Bit                                      | Event Unmask Bit                                    | Description                         |
|----------------------------------------------------|----------------------------------------------------|-----------------------------------------------------|-----------------------------------------------------|-------------------------------------|
| MAILBOX_IRQSTATUS _RAW_u[0+m*2].NEWM SGSTATUSUUMBm | MAILBOX_IRQSTATUS _CLR_u[0+m*2].NEWM SGSTATUSUUMBm | MAILBOX_IRQENABLE _CLR_u[0+m*2].                    |                                                     |                                     |
| MAILBOX_IRQSTATUS _RAW_u[0+m*2].NEWM SGSTATUSUUMBm | MAILBOX_IRQSTATUS _CLR_u[0+m*2].NEWM SGSTATUSUUMBm | MAILBOX_IRQENABLE _CLR_u[0+m*2]. NEWMSGSTATUSUUM Bm | MAILBOX_IRQENABLE _SET_u[0+m*2]. NEWMSGSTATUSUUM Bm | Mailbox m receives a new message    |
| MAILBOX_IRQSTATUS _RAW_u[1+m*2].NOTF ULLSTATUSUMBm | MAILBOX_IRQSTATUS _CLR_u[1+m*2].NOTFU LLSTATUSUMBm | MAILBOX_IRQENABLE _CLR_u[1+m*2]. NOTFULLSTATUSUMB m | MAILBOX_IRQENABLE _SET_u[1+m*2]. NOTFULLSTATUSUMB m | Mailbox m message queue is not full |

(1) MAILBOX.MAILBOX\_IRQSTATUS\_RAW\_u register is mostly used for debug purposes.

## CAUTION

Once an event generating the interrupt request has been processed by the software, it must be cleared by writing a logical 1 in the corresponding bit of the MAILBOX\_IRQSTATUS\_CLR\_u register. Writing a logical 1 in a bit of the MAILBOX\_IRQSTATUS\_CLR\_u register will also clear to 0 the corresponding bit in the appropriate MAILBOX\_IRQSTATUS\_RAW\_u register.

An event can generate an interrupt request when a logical 1 is written to the corresponding unmask bit in the MAILBOX\_IRQENABLE\_SET\_u register. Events are reported in the appropriate MAILBOX\_IRQSTATUS\_CLR\_u and MAILBOX\_IRQSTATUS\_RAW\_u registers.

An event stops generating interrupt requests when a logical 1 is written to the corresponding mask bit in the MAILBOX\_IRQENABLE\_CLR\_u register. Events are only reported in the appropriate MAILBOX\_IRQSTATUS\_RAW\_u register.

In case of the MAILBOX\_IRQSTATUS\_RAW\_u register, the event is reported in the corresponding bit even if the interrupt request generation is disabled for this event.

## 17.1.1.5 Assignment

## 17.1.1.5.1 Description

To assign a receiver to a mailbox, set the new message interrupt enable bit corresponding to the desired mailbox in the MAILBOX\_IRQENABLE\_SET\_u register. The receiver reads the MAILBOX\_MESSAGE\_m register to retrieve a message from the mailbox.

An alternate method for the receiver that does not use the interrupts is to poll the MAILBOX\_FIFOSTATUS\_m and/or MAILBOX\_MSGSTATUS\_m registers to know when to send or retrieve a message to or from the mailbox. This method does not require assigning a receiver to a mailbox. Because this method does not include the explicit assignment of the mailbox, the software must avoid having multiple receivers use the same mailbox, which can result in incoherency.

To assign a sender to a mailbox, set the queue-not-full interrupt enable bit of the desired mailbox in the MAILBOX\_IRQENABLE\_SET\_u register, where u is the number of the sending user. However, direct allocation of a mailbox to a sender is not recommended because it can cause the sending processor to be constantly interrupted.

It is recommended that register polling be used to:

- Check the status of either the MAILBOX\_FIFOSTATUS\_m or MAILBOX\_MSGSTATUS\_m registers
- Write the message to the corresponding MAILBOX\_MESSAGE\_m register, if space is available

The sender might use the queue-not-full interrupt when the initial mailbox status check indicates the mailbox is full. In this case, the sender can enable the queue-not-full interrupt for its mailbox in the appropriate MAILBOX\_IRQENABLE\_SET\_u register. This allows the sender to be notified by interrupt only when a FIFO queue has at least one available entry.

Reading the MAILBOX\_IRQSTATUS\_CLR\_u register determines the status of the new message and the queue-not-full interrupts for a particular user. Writing 1 to the corresponding bit in the MAILBOX\_IRQSTATUS\_CLR\_u register acknowledges, and subsequently clears, an interrupt.

## CAUTION

Assigning multiple senders or multiple receivers to the same mailbox is not recommended.

## 17.1.1.6 Sending and Receiving Messages

## 17.1.1.6.1 Description

When a 32-bit message is written to the MAILBOX\_MESSAGE\_m register, the message is appended into the FIFO queue. This queue holds four messages. If the queue is full, the message is discarded. Queue overflow can be avoided by first reading the MAILBOX\_FIFOSTATUS\_m register to check that the mailbox message queue is not full before writing a new message to it. Reading the MAILBOX\_MESSAGE\_m register returns the message at the beginning of the FIFO queue and removes it from the queue. If the FIFO queue is empty when the MAILBOX\_MESSAGE\_m register is read, the value 0 is returned. The new message interrupt is asserted when at least one message is in the mailbox message FIFO queue. To determine the number of messages in the mailbox message FIFO queue, read the MAILBOX\_MSGSTATUS\_m register.

<!-- image -->