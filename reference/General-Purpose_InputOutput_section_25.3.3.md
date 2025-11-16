<!-- image -->

this logic one cycle every N cycles. When N is equal to 1, there is no gating and this logic is free running on the interface clock. When N is between 2 to 8, this logic is running at the equivalent frequency of interface clock frequency divided by N.

- In Inactive mode, all internal clock paths are gated.
- In Disabled mode, all internal clock paths not used for the system interface are gated. All GPIO registers are accessible synchronously with the interface clock.

## 25.3.2.3 Sleep Mode Request and Acknowledge

Upon a Sleep mode request issued by the host processor, the GPIO module goes to the Idle mode according to the IDLEMODE field in the system configuration register (GPIO\_SYSCONFIG).

- IDLEMODE = 0 (Force-Idle mode): the GPIO goes in Inactive mode independently of the internal module state and the Idle acknowledge is unconditionally sent. In Force-Idle mode, the module is in Inactive mode and its wake-up feature is totally inhibited.
- IDLEMODE = 1h (No-Idle mode): the GPIO does not go to the Idle mode and the Idle acknowledge is never sent.
- IDLEMODE = 2h (Smart-Idle mode) or IDLEMODE = 3h (Smart-Idle mode): the GPIO module evaluates its internal capability to have the interface clock switched off. Once there is no more internal activity (the data input register completed to capture the input GPIO pins, there is no pending interrupt, all interrupt status bits are cleared, and there is no write access to GPIO\_DEBOUNCINGTIME register pending to be synchronized), the Idle acknowledge is asserted and the GPIO enters Idle mode, ready to issue a wake-up request when the expected transition occurs on an enabled GPIO input pin. This wake-up request is effectively sent only if the ENAWAKEUP bit in GPIO\_SYSCONFIG is set to enable the GPIO wakeup capability. When the system is awake, the Idle Request goes inactive, the Idle acknowledge and wake-up request (if it is the GPIO that triggered the system's wakeup) signals are immediately de-asserted, and the asynchronous wake-up request (if existing) is reflected into the synchronous interrupt status registers.

NOTE:

## 25.3.2.4 Reset

The OCP hardware Reset signal has a global reset action on the GPIO. All configuration registers, all DFFs clocked with the Interface clock or Debouncing clock and all internal state machines are reset when the OCP hardware Reset is active (low level). The RESETDONE bit in the system status register (GPIO\_SYSSTATUS) monitors the internal reset status: it is set when the Reset is completed on both OCP and Debouncing clock domains. The software Reset (SOFTRESET bit in the system configuration register) has the same effect as the OCP hardware Reset signal, and the RESETDONE bit in GPIO\_SYSSTATUS is updated in the same condition.

## 25.3.3 Interrupt and Wake-up Features

## 25.3.3.1 Functional Description

In order to generate an interrupt request to a host processor upon a defined event (level or logic transition) occurring on a GPIO pin, the GPIO configuration registers have to be programmed as follows:

- Interrupts for the GPIO channel must be enabled in the GPIO\_IRQSTATUS\_SET\_0 and/or GPIO\_IRQSTATUS\_SET\_1 registers.
- The expected event(s) on input GPIO to trigger the interrupt request has to be selected in the GPIO\_LEVELDETECT0, GPIO\_LEVELDETECT1, GPIO\_RISINGDETECT, and GPIO\_FALLINGDETECT registers.

Idle mode request and Idle acknowledge are system interface sideband signals. Once the GPIO acknowledges the Sleep mode request (Idle acknowledge has been sent), the interface clock can be stopped anytime.

Upon a Sleep mode request issued by the host processor, the GPIO module goes to the Idle mode only if there is no active bit in GPIO\_IRQSTATUS\_RAW\_n registers.

<!-- image -->

In order to generate a wake-up request to a host processor upon a defined event (logic transition) occurring on a GPIO pin, the GPIO configuration registers have to be programmed as follows:

- The GPIO channel must be enabled in the GPIO\_IRQWAKEN register.
- The expected event(s) on input GPIO to trigger the interrupt (or the wake-up) request has to be selected in the GPIO\_RISINGDETECT and GPIO\_FALLINGDETECT registers. Wake-up request can only be generated on rising and/or on falling transitions.

For instance, interrupt generation on both edges on input k is configured by setting to 1 the k th bit in registers GPIO\_RISINGDETECT and GPIO\_FALLINGDETECT along with the interrupt enabling for one or both interrupt lines (GPIO\_IRQSTATUS\_SET\_n).

NOTE:

All interrupt (or wake-up) sources (the 32 input GPIO channels) are merged together to issue two synchronous interrupt requests 1 and 2, and two asynchronous wake-up requests.

## 25.3.3.2 Synchronous Path: Interrupt Request Generation

In Active mode, once the GPIO configuration registers have been set to enable the interrupt generation, a synchronous path (Figure 25-3) samples the transitions and levels on the input GPIO with the internally gated interface clock. When an event matches the programmed settings, the corresponding bit in the GPIO\_IRQSTATUS\_RAW\_n registers is set to 1 and, on the following interface clock cycle, the interrupt lines 1 and/or 2 are activated (depending on the GPIO\_IRQSTATUS\_SET\_n registers).

Due to the sampling operation, the minimum pulse width on the input GPIO to trigger a synchronous interrupt request is two times the internally gated interface clock period (the internally gated interface clock period is equal to N times the interface clock period). This minimum pulse width has to be met before and after any expected level transition detection. Level detection requires the selected level to be stable for at least two times the internally gated interface clock period to trigger a synchronous interrupt.

As the module is synchronous, latency is minimal between the expected event occurrence and the activation of the interrupt line(s). This should not exceed 3 internally gated interface clock cycles + 2 interface clock cycles when the debouncing feature is not used. When the debouncing feature is active, the latency depends on the GPIO\_DEBOUNCINGTIME register value and should be less than 3 internally gated interface clock cycles + 2 interface clock cycles + GPIO\_DEBOUNCINGTIME value debouncing clock cycles + 3 debouncing clock cycles.

Figure 25-3. Interrupt Request Generation

<!-- image -->

## 25.3.3.3 Asynchronous Path: Wake-up Request Generation

In Idle mode (interface clock is shut down, the GPIO configuration registers have been previously programmed), an asynchronous path (Figure 25-4) detects the expected transition(s) on input GPIO (according to the registers programming) and activates an asynchronous wake-up request if the wakeup enable register is set. As shown in , there is only one external wake-up line, since all wake-up sources are merged together. Once the system is in wake up, the interface clock is re-started and, according to the input GPIO pin that triggered the wake-up request, the corresponding bits in the

GPIO\_IRQSTATUS\_RAW\_n registers are synchronously set to 1; on the following internal clock cycle, the interrupt lines 1 and/or 2 are active (active high) when the corresponding bits in GPIO\_IRQSTATUS\_SET\_n registers are set.

NOTE:

If debouncing is not enabled, there is no minimum input pulse width to trigger the wake-up request since there is no sampling operation.

If debouncing is used, the minimum pulse width is set by the debouncing specified time.

The ENAWAKEUP bit in the system configuration register (GPIO\_SYSCONFIG) enables or disables the GPIO wake-up feature globally: if this bit is 0, the GPIO\_IRQWAKEN has no effect.

Figure 25-4. Wake-Up Request Generation

<!-- image -->

<!-- image -->