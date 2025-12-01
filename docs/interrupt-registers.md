# ARM Interrupt Controller (INTC) Registers - AM3358

## Overview

The ARM Interrupt Controller (INTC) in the AM3358 provides a comprehensive set of registers for managing up to 128 interrupt sources (IRQ 0-127). The controller supports 8-level priority-based interrupt handling, individual interrupt masking, and both IRQ and FIQ output generation to the ARM Cortex-A8 processor.

## Register Map Summary

### Base Address
- **INTC Base**: 0x48200000
- **Address Range**: 0x48200000 - 0x48200FFF (4KB)

### Register Organization
The INTC registers are organized into several functional groups:
1. **System Configuration** (0x000-0x018)
2. **Control and Status** (0x040-0x06C)
3. **Interrupt Test** (0x080-0x08C)
4. **Interrupt Masking** (0x090-0x0BC) 
5. **Interrupt Service** (0x0C0-0x0DC)
6. **Interrupt Pending** (0x0E0-0x0EC)
7. **Individual Configuration** (0x100-0x1FC)

## System Configuration Registers

### INTC_REVISION (0x000)
**Interrupt Controller Revision Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7-0 | REV | R | 0x50 | Revision number (major[7:4], minor[3:0]) |

### INTC_SYSCONFIG (0x010)  
**System Configuration Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-5 | Reserved | R | 0x0 | Reserved |
| 4 | STANDBYMODE | RW | 0x0 | Standby mode configuration |
| 3 | Reserved | R | 0x0 | Reserved |
| 2 | SIDLEMODE | RW | 0x0 | Slave idle mode |
| 1 | ENWAKEUP | RW | 0x0 | Wakeup feature enable |
| 0 | AUTOGATING | RW | 0x0 | Automatic clock gating |

**STANDBYMODE Values:**
- 0x0: Force standby mode
- 0x1: No standby mode  
- 0x2: Smart standby mode

**SIDLEMODE Values:**
- 0x0: Force idle mode
- 0x1: No idle mode
- 0x2: Smart idle mode

### INTC_SYSSTATUS (0x014)
**System Status Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-1 | Reserved | R | 0x0 | Reserved |
| 0 | RESETDONE | R | 0x1 | Reset completion status |

## Control and Status Registers

### INTC_SIR_IRQ (0x040)
**Spurious IRQ Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-7 | Reserved | R | 0x0 | Reserved |
| 6-0 | ACTIVEIRQ | R | 0x0 | Currently active IRQ number |

### INTC_SIR_FIQ (0x044)
**Spurious FIQ Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-7 | Reserved | R | 0x0 | Reserved |
| 6-0 | ACTIVEFIQ | R | 0x0 | Currently active FIQ number |

### INTC_CONTROL (0x048)
**Control Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-2 | Reserved | R | 0x0 | Reserved |
| 1 | NEWFIQAGR | RW | 0x0 | New FIQ generation agreement |
| 0 | NEWIRQAGR | RW | 0x0 | New IRQ generation agreement |

**Field Descriptions:**
- **NEWIRQAGR**: Write 1 to acknowledge current IRQ and enable new IRQ generation
- **NEWFIQAGR**: Write 1 to acknowledge current FIQ and enable new FIQ generation

### INTC_PROTECTION (0x04C)
**Protection Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-1 | Reserved | R | 0x0 | Reserved |
| 0 | PROTECTION | RW | 0x0 | Register access protection |

**PROTECTION Values:**
- 0: All registers accessible
- 1: Only privileged access allowed

### INTC_IDLE (0x050)
**Idle Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-2 | Reserved | R | 0x0 | Reserved |
| 1 | TURBO | RW | 0x0 | Turbo mode enable |
| 0 | FUNCIDLE | RW | 0x0 | Functional clock auto-idle |

### INTC_THRESHOLD (0x068)
**IRQ Priority Threshold Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7-0 | PRIORITYTHRESHOLD | RW | 0xFF | IRQ priority threshold level |
- 0x0: All registers accessible
- 0x1: Only some registers accessible in user mode

### INTC_IDLE (0x050)
**Idle Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-2 | Reserved | R | 0x0 | Reserved |
| 1 | FUNCIDLE | R | Varies | Functional clock idle status |
| 0 | TURBO | RW | 0x0 | Turbo mode enable |

## Priority Configuration Registers

### INTC_IRQ_PRIORITY (0x060)
**IRQ Priority Register**  

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7 | SPURIOUSIRQFLAG | RW | 0x0 | Spurious IRQ flag |
| 6-0 | IRQPRIORITY | R | Varies | Current IRQ priority level |

### INTC_FIQ_PRIORITY (0x064)
**FIQ Priority Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7 | SPURIOUSFIQFLAG | RW | 0x0 | Spurious FIQ flag |
| 6-0 | FIQPRIORITY | R | Varies | Current FIQ priority level |

### INTC_THRESHOLD (0x068)
**Priority Threshold Register**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7-0 | PRIORITYTHRESHOLD | RW | 0xFF | Priority threshold for interrupt processing |

**Field Descriptions:**
- **PRIORITYTHRESHOLD**: Interrupts with priority > PRIORITYTHRESHOLD are masked
- Lower numerical values = higher priority
- 0xFF = all interrupts enabled

## Interrupt Test Registers (ITR)

### INTC_ITR0 (0x080)
**Interrupt Test Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ITR | RW | 0x0 | Software interrupt test bits 0-31 |

### INTC_ITR1 (0x084)
**Interrupt Test Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ITR | RW | 0x0 | Software interrupt test bits 32-63 |

### INTC_ITR2 (0x088)
**Interrupt Test Register 2 (IRQ 64-95)**  

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ITR | RW | 0x0 | Software interrupt test bits 64-95 |

### INTC_ITR3 (0x08C)
**Interrupt Test Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ITR | RW | 0x0 | Software interrupt test bits 96-127 |

## Interrupt Mask Registers (MIR)

### INTC_MIR0 (0x090)
**Mask Interrupt Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIR | RW | 0xFFFFFFFF | Interrupt mask bits 0-31 (1=masked, 0=enabled) |

### INTC_MIR1 (0x094)
**Mask Interrupt Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIR | RW | 0xFFFFFFFF | Interrupt mask bits 32-63 |

### INTC_MIR2 (0x098)
**Mask Interrupt Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIR | RW | 0xFFFFFFFF | Interrupt mask bits 64-95 |

### INTC_MIR3 (0x09C)
**Mask Interrupt Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIR | RW | 0xFFFFFFFF | Interrupt mask bits 96-127 |

## Interrupt Mask Clear Registers

### INTC_MIR_CLEAR0 (0x0A0)
**Mask Interrupt Clear Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRCLEAR | W | N/A | Clear mask bits 0-31 (write 1 to enable interrupt) |

### INTC_MIR_CLEAR1 (0x0A4)
**Mask Interrupt Clear Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRCLEAR | W | N/A | Clear mask bits 32-63 |

### INTC_MIR_CLEAR2 (0x0A8)
**Mask Interrupt Clear Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRCLEAR | W | N/A | Clear mask bits 64-95 |

### INTC_MIR_CLEAR3 (0x0AC)
**Mask Interrupt Clear Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRCLEAR | W | N/A | Clear mask bits 96-127 |

## Interrupt Mask Set Registers

### INTC_MIR_SET0 (0x0B0)
**Mask Interrupt Set Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRSET | W | N/A | Set mask bits 0-31 (write 1 to disable interrupt) |

### INTC_MIR_SET1 (0x0B4)
**Mask Interrupt Set Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRSET | W | N/A | Set mask bits 32-63 |

### INTC_MIR_SET2 (0x0B8)
**Mask Interrupt Set Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRSET | W | N/A | Set mask bits 64-95 |

### INTC_MIR_SET3 (0x0BC)
**Mask Interrupt Set Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | MIRSET | W | N/A | Set mask bits 96-127 |

## Interrupt Service Registers (ISR)

### INTC_ISR_SET0 (0x0C0)
**Interrupt Service Set Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRSET | RW | 0x0 | Software interrupt set bits 0-31 |

### INTC_ISR_SET1 (0x0C4)
**Interrupt Service Set Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRSET | RW | 0x0 | Software interrupt set bits 32-63 |

### INTC_ISR_SET2 (0x0C8)
**Interrupt Service Set Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRSET | RW | 0x0 | Software interrupt set bits 64-95 |

### INTC_ISR_SET3 (0x0CC)
**Interrupt Service Set Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRSET | RW | 0x0 | Software interrupt set bits 96-127 |

## Interrupt Service Clear Registers

### INTC_ISR_CLEAR0 (0x0D0)
**Interrupt Service Clear Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRCLEAR | W | N/A | Clear interrupt service bits 0-31 |

### INTC_ISR_CLEAR1 (0x0D4)
**Interrupt Service Clear Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRCLEAR | W | N/A | Clear interrupt service bits 32-63 |

### INTC_ISR_CLEAR2 (0x0D8)
**Interrupt Service Clear Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRCLEAR | W | N/A | Clear interrupt service bits 64-95 |

### INTC_ISR_CLEAR3 (0x0DC)
**Interrupt Service Clear Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | ISRCLEAR | W | N/A | Clear interrupt service bits 96-127 |

## Interrupt Pending Registers

### INTC_PENDING_IRQ0 (0x0E0)
**Pending IRQ Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGIRQ | R | 0x0 | Pending IRQ status bits 0-31 |

### INTC_PENDING_IRQ1 (0x0E4)
**Pending IRQ Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGIRQ | R | 0x0 | Pending IRQ status bits 32-63 |

### INTC_PENDING_IRQ2 (0x0E8)
**Pending IRQ Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGIRQ | R | 0x0 | Pending IRQ status bits 64-95 |

### INTC_PENDING_IRQ3 (0x0EC)
**Pending IRQ Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGIRQ | R | 0x0 | Pending IRQ status bits 96-127 |

### INTC_PENDING_FIQ0 (0x0F0)
**Pending FIQ Register 0 (IRQ 0-31)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGFIQ | R | 0x0 | Pending FIQ status bits 0-31 |

### INTC_PENDING_FIQ1 (0x0F4)
**Pending FIQ Register 1 (IRQ 32-63)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGFIQ | R | 0x0 | Pending FIQ status bits 32-63 |

### INTC_PENDING_FIQ2 (0x0F8)
**Pending FIQ Register 2 (IRQ 64-95)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGFIQ | R | 0x0 | Pending FIQ status bits 64-95 |

### INTC_PENDING_FIQ3 (0x0FC)
**Pending FIQ Register 3 (IRQ 96-127)**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-0 | PENDINGFIQ | R | 0x0 | Pending FIQ status bits 96-127 |

## Individual Interrupt Configuration

### INTC_ILR_n (0x100 + 4*n)
**Individual Interrupt Line Registers (n = 0-127)**

Each interrupt source has its own ILR register for priority and routing configuration:

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7-2 | PRIORITY | RW | 0x0 | Interrupt priority (0-63) |
| 1 | Reserved | R | 0x0 | Reserved |
| 0 | FIQNIRQ | RW | 0x0 | FIQ/IRQ routing (0=IRQ, 1=FIQ) |

**Address Calculation**: ILR_n address = 0x48200100 + (4 × interrupt_number)

**Examples**:
- UART0 interrupt (72): 0x48200220
- GPIO0 interrupt (96): 0x48200280
- Timer2 interrupt (68): 0x48200210

### INTC_ILR[n] (0x100 + n*4, n=0-127)
**Interrupt Line Register for IRQ n**

| Bits | Field | Type | Reset | Description |
|------|-------|------|-------|-------------|
| 31-8 | Reserved | R | 0x0 | Reserved |
| 7-2 | PRIORITY | RW | 0x3F | Priority level (0=highest, 127=lowest) |
| 1 | FIQNIRQ | RW | 0x0 | FIQ/nIRQ selection |
| 0 | Reserved | R | 0x0 | Reserved |

**FIQNIRQ Values:**
- 0x0: Route to IRQ output
- 0x1: Route to FIQ output

**PRIORITY Values:**
- 0x00-0x7F: Priority levels (0 = highest priority)
- Lower numbers have higher priority
- Default value varies by interrupt source

## Programming Implementation

For practical code examples and implementation guidance, see:
- [Interrupt Handling Implementation](../implementation/interrupt-handling.md) - Complete INTC programming examples
- [Interrupt System Overview](../interrupts/interrupt-system.md) - System architecture and design patterns
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - IRQ number assignments and priorities

## Register Access Notes

### Read/Write Restrictions
- **Write-Only Registers**: MIR_CLEAR, MIR_SET, ISR_CLEAR
- **Read-Only Registers**: SIR_IRQ, SIR_FIQ, PENDING_IRQ, PENDING_FIQ
- **Protected Registers**: Access restricted when PROTECTION bit set

### Timing Requirements
- **Reset Sequence**: Must wait for SYSSTATUS.RESETDONE after reset
- **Configuration Order**: Configure priorities before enabling interrupts
- **Acknowledgment**: Must acknowledge interrupts to enable new ones

### Synchronization
- **Register Updates**: Some register writes may take multiple clock cycles
- **Interrupt Processing**: Hardware automatically handles priority arbitration
- **Software Coordination**: Proper ISR design required for nested interrupts

## Error Conditions

### Spurious Interrupts
- **Detection**: IRQ number 127 indicates spurious interrupt
- **Causes**: Race conditions, incorrect acknowledgment
- **Recovery**: Acknowledge with NEWIRQAGR, investigate source

### Priority Conflicts
- **Multiple Interrupts**: Hardware selects highest priority
- **Equal Priority**: Lower IRQ number takes precedence
- **Threshold Masking**: Interrupts below threshold are blocked

### Register Access Errors
- **Protection Mode**: Some registers inaccessible in user mode
- **Invalid Addresses**: Accessing reserved registers may cause exceptions
- **Write-Only Registers**: Reading write-only registers returns undefined values

## Related Documentation

- [Interrupt System Overview](../interrupts/interrupt-system.md) - System architecture
- [Interrupt Vector Table](../interrupts/interrupt-vectors.md) - Complete IRQ assignments  
- [Implementation Guide](../implementation/interrupt-handling.md) - Programming examples
- [PRU-ICSS Interrupts](../interrupts/pru-icss-interrupts.md) - PRU interrupt controller

## References

- AM335x Technical Reference Manual, Chapter 6 (Interrupts)
- AM335x Technical Reference Manual, Section 6.4 (INTC Registers)
- ARM Cortex-A8 Technical Reference Manual
- ARM Generic Interrupt Controller Architecture Specification