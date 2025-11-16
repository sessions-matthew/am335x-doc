<!-- image -->

## 17.1.1.7 16-Bit Register Access

## 17.1.1.7.1 Description

So that 16-bit processors can access the mailbox module, the module allows 16-bit register read and write access, with restrictions for the MAILBOX\_MESSAGE\_m registers. The 16-bit half-words are organized in little endian fashion; that is, the least-significant 16 bits are at the low address and the most-significant 16 bits are at the high address (low address + 0x02). All mailbox module registers can be read or written to directly using individual 16-bit accesses with no restriction on interleaving, except the MAILBOX\_MESSAGE\_m registers, which must always be accessed by either single 32-bit accesses or two consecutive 16-bit accesses.

## CAUTION

When using 16-bit accesses to the MAILBOX\_MESSAGE\_m registers, the order of access must be the least-significant half-word first (low address) and the most-significant half-word last (high address). This requirement is because of the update operation by the message FIFO of the MAILBOX\_MSGSTATUS\_m registers. The update of the FIFO queue contents and the associated status registers and possible interrupt generation occurs only when the most-significant 16 bits of a MAILBOX\_MESSAGE\_m are accessed.

## 17.1.2 Programming Guide

## 17.1.2.1 Low-level Programming Models

This section covers the low-level hardware programming sequences for configuration and usage of the mailbox module.

## 17.1.2.1.1 Global Initialization

## 17.1.2.1.1.1 Surrounding Modules Global Initialization

This section identifies the requirements of initializing the surrounding modules when the mailbox module is to be used for the first time after a device reset. This initialization of surrounding modules is based on the integration of the mailbox.

See Integration for further information.

Table 17-5. Global Initialization of Surrounding Modules for System Mailbox

| Surrounding Modules   | Comments                                                                                           |
|-----------------------|----------------------------------------------------------------------------------------------------|
| PRCM                  | Mailbox functional/interface clock must be enabled.                                                |
| Interrupt Controllers | MPU interrupt controller must be configured to enable the interrupt request generation to the MPU. |

## 17.1.2.1.1.2 Mailbox Global Initialization

## 17.1.2.1.1.2.1 Main Sequence - Mailbox Global Initialization

This procedure initializes the mailbox module after a power-on or software reset.

Table 17-6. Mailbox Global Initialization

|                              | Register/Bitfield/Programming Model   | Value   |
|------------------------------|---------------------------------------|---------|
| Perform a software reset     | MAILBOX_SYSCONFIG[0].SOFTRESET        | 1       |
| Wait until reset is complete | MAILBOX_SYSCONFIG[0].SOFTRESET        | 0       |
| Set idle mode configuration  | MAILBOX_SYSCONFIG[3:2].SIDLEMOD E     | 0x-     |

## 17.1.2.1.2 Operational Modes Configuration

## 17.1.2.1.2.1 Main Sequence - Sending a Message (Polling Method)

Table 17-7. Sending a Message (Polling Method)

| Step                                              | Register/Bitfield/Programming Model      | Value   |
|---------------------------------------------------|------------------------------------------|---------|
| IF : Is FIFO full ?                               | MAILBOX_FIFOSTATUS_m[0].FIFOFULL MB      | =1h     |
| Wait until at least one message slot is available | MAILBOX_FIFOSTATUS_m[0].FIFOFULL MB      | =0h     |
| ELSE                                              |                                          |         |
| Write message                                     | MAILBOX_MESSAGE_m[31:0].MESSAG EVALUEMBM | ----h   |
| ENDIF                                             |                                          |         |

## 17.1.2.1.2.2 Main Sequence - Sending a Message (Interrupt Method)

Table 17-8. Sending a Message (Interrupt Method)

| Step                                                           | Register/Bitfield/Programming Model      | Value   |
|----------------------------------------------------------------|------------------------------------------|---------|
| IF : Is FIFO full ?                                            | MAILBOX_FIFOSTATUS_m[0].FIFOFULL MB      | =1h     |
| Enable interrupt event                                         | MAILBOX_IRQENABLE_SET_u[1+ m*2]          | 1h      |
| User(processor) can perform anothr task until interrupt occurs |                                          |         |
| ELSE                                                           |                                          |         |
| Write message                                                  | MAILBOX_MESSAGE_m[31:0].MESSAG EVALUEMBM | ----h   |
| ENDIF                                                          |                                          |         |

<!-- image -->

<!-- image -->

www.ti.com

## 17.1.2.1.2.3 Main Sequence - Receiving a Message (Polling Method)

Table 17-9. Receiving a Message (Polling Method)

| Step                                      | Register/Bitfield/Programming Model      | Value   |
|-------------------------------------------|------------------------------------------|---------|
| IF : Number of messages is not equal to 0 | MAILBOX_MSGSTATUS_m[2:0].NBOFM SGMB      | !=0h    |
| Read message                              | MAILBOX_MESSAGE_m[31:0].MESSAG EVALUEMBM | ----h   |
| ENDIF                                     |                                          |         |

## 17.1.2.1.2.4 Main Sequence - Receiving a Message (Interrupt Method)

Table 17-10. Receiving a Message (Interrupt Method)

| Step                                                           | Register/Bitfield/Programming Model                            | Value                                                          |
|----------------------------------------------------------------|----------------------------------------------------------------|----------------------------------------------------------------|
| Enable interrupt event                                         | MAILBOX_IRQENABLE_SET_u[0 + m*2]                               | 1h                                                             |
| User(processor) can perform anothr task until interrupt occurs | User(processor) can perform anothr task until interrupt occurs | User(processor) can perform anothr task until interrupt occurs |

## 17.1.2.1.3 Events Servicing

## 17.1.2.1.3.1 Sending Mode

Table 17-11 describes the events servicing in sending mode.

Table 17-11. Events Servicing in Sending Mode

| Step                             | Register/Bitfield/Programming Model      | Value   |
|----------------------------------|------------------------------------------|---------|
| Read interrupt status bit        | MAILBOX_IRQSTATUS_CLR_u[1 + m*2]         | 1       |
| Write message                    | MAILBOX_MESSAGE_m[31:0].MESSAG EVALUEMBM | ----h   |
| Write 1 to acknowledge interrupt | MAILBOX_IRQSTATUS_CLR_u[1 + m*2]         | 1       |

## 17.1.2.1.3.2 Receiving Mode

Table 17-12 describes the events servicing in receiving mode.

Table 17-12. Events Servicing in Receiving Mode

| Step                                        | Register/Bitfield/Programming Model      | Value   |
|---------------------------------------------|------------------------------------------|---------|
| Read interrupt status bit                   | MAILBOX_IRQSTATUS_CLR_u[0 + m*2]         | 1       |
| IF : Number of messages is not equal to 0 ? | MAILBOX_MSGSTATUS_m[2:0].NBOFM SGMB      | !=0h    |
| Read message                                | MAILBOX_MESSAGE_m[31:0].MESSAG EVALUEMBM | ----h   |
| ELSE                                        |                                          |         |
| Write 1 to acknowledge interrupt            | MAILBOX_IRQSTATUS_CLR_u[0 + m*2]         | 1       |
| ENDIF                                       |                                          |         |