## 18.3.14 CE-ATA Command Completion Disable Management

The MMC/SD/SDIO controller supports CE-ATA features, in particular the detection of command completion token. When a command that requires a command completion signal (SD\_CON[12] CEATA and SD\_CMD[2] ACEN set to 1) is launched, the host system is no longer allowed to emit a new command in parallel of data transfer unless it is a command completion disable token.

The settings to emit a command completion disable token follow:

- SD\_CON[12] CEATA is set to 1.
- SD\_CON[2] HR set to 1.
- Clear the SD\_ARG register.
- Write into SD\_CMD register with value 0000 0000h.

When a command completion disable token was emitted (that is, SD\_STAT[0] CC received), the host system is again allowed to emit another type of command (for example a transfer abort command CMD12 to abort transfer).

A critical case can be met when command completion signal disable (CCSD) is emitted during the last data block transfer, the sequence on command line could be sent very close to command completion signal (CCS) token sent by the card.

Three cases can be met:

- •
- CCS is receive just before CCSD is emitted: An interrupt CIRQ is generated with CCS detection, CCSD is transmitted to card then an interrupt CC is generated when CCSD ends. In this case, card consider the CCSD sequence.
- •
- CCS is not generated or generated during the CCSD transfer: The CCS bit cannot be detected (conflict is not possible as they drive the same level on command line, then no CIRQ interrupt is generated; besides CC interrupt is generated when CCSD ends).
- CCS is generated without CCSD token required:

Only the interrupt CIRQ is generated when CCS is detected.

## 18.3.15 Test Registers

Test registers are available to be compliant with SD Host controller specification. This feature is useful to generate interrupts manually for driver debugging. The Force Event register (SD\_FE) is used to control the Error Interrupt Status and Auto CMD12 Error Status. The System Test register (SD\_SYSTEST) is used to control the signals that connect to I/O pins when the module is configured in system test (SD\_CON[4] MODE = 1) mode for boundary connectivity verification.

<!-- image -->