<!-- image -->

www.ti.com

## Table 26-3. RAM Exception Vectors

| Address   | Exception       | Content                                        |
|-----------|-----------------|------------------------------------------------|
| 4030CE00h | Reserved        | Reserved                                       |
| 4030CE04h | Undefined       | PC = [4030CE24h]                               |
| 4030CE08h | SWI             | PC = [4030CE28h]                               |
| 4030CE0Ch | Pre-fetch abort | PC = [4030CE2Ch]                               |
| 4030CE10h | Data abort      | PC = [4030CE30h]                               |
| 4030CE14h | Unused          | PC = [4030CE34h]                               |
| 4030CE18h | IRQ             | PC = [4030CE38h]                               |
| 4030CE1Ch | FIQ             | PC = [4030CE3Ch]                               |
| 4030CE20h | Reserved        | 20090h                                         |
| 4030CE24h | Undefined       | 20080h                                         |
| 4030CE28h | SWI             | 20084h                                         |
| 4030CE2Ch | Pre-fetch abort | Address of default pre-fetch abort handler (1) |
| 4030CE30h | Data abort      | Address of default data abort handler (1)      |
| 4030CE34h | Unused          | 20090h                                         |
| 4030CE38h | IRQ             | Address of default IRQ handler                 |
| 4030CE3Ch | FIQ             | 20098h                                         |

(1) The default handlers for pre-fetch and data abort are performing reads from CP15 debug registers to retrieve the reason of the abort:

· In case of pre-fetch abort: the IFAR register is read from CP15 and stored into R0. The IFSR register is read and stored into the R1 register. Then the ROM Code jumps to the pre-fetch abort dead loop (20088h).

· In case of data abort: the DFAR register is read from CP15 and stored into R0. The DFSR register is read and stored into the R1 register. Then the ROM Code jumps to the data abort dead loop (2008Ch).

## Tracing Data

This area contains trace vectors reflecting the execution path of the public boot. Section 26.1.14 describes the usage of the different trace vectors and lists all the possible trace codes.

## Table 26-4. Tracing Data

| Address   |   Size[bytes] | Description                                            |
|-----------|---------------|--------------------------------------------------------|
| 4030CE40h |             4 | Current tracing vector, word 1                         |
| 4030CE44h |             4 | Current tracing vector, word 2                         |
| 4030CE48h |             4 | Current tracing vector, word 3                         |
| 4030CE4Ch |             4 | Current copy of the PRM_RSTST register (reset reasons) |
| 4030CE50h |             4 | Cold reset run tracing vector, word 1                  |
| 4030CE54h |             4 | Cold reset run tracing vector, word 2                  |
| 4030CE58h |             4 | Cold reset run tracing vector, word 3                  |
| 4030CE5Ch |             4 | Reserved                                               |
| 4030CE60h |             4 | Reserved                                               |
| 4030CE64h |             4 | Reserved                                               |

## Static Variables

This area contains the ROM Code static variables used during boot time.

## 26.1.5 Start-up and Configuration

## 26.1.5.1 ROM Code Start-up

On this device the main MPU subsystem always starts its execution in secure mode after reset due to the TrustZone architecture (the Secure ROM Code implements the reset handler).

<!-- image -->

The Public ROM Code is physically located at the address 20000h that is immediately next to the Secure ROM Code.

Figure 26-8. ROM Code Startup Sequence

<!-- image -->

<!-- image -->

www.ti.com

Figure 26-9. ROM Code Startup Sequence

<!-- image -->

As shown at top of Figure 26-8, the CPU jumps to the Public ROM Code reset vector once it has completed the secure boot initialization.

Once in public mode,Upon system startup, the CPU performs the public-side initialization and stack setup (compiler auto generated C- initialization or 'scatter loading'). Then it configures the watchdog timer 1 (set to three minutes), performs system clocks configuration. Finally it jumps to the booting routine.

## 26.1.5.2 CPU State at Public Startup

The CPU L1 instruction cache and branch prediction mechanisms are not activated as part of the public boot process. The public vector base address is configured to the reset vector of Public ROM Code (20000h). MMU is left switched off during the public boot (hence L1 data cache off).

## 26.1.5.3 Clocking Configuration

The device supports the following frequencies based on SYSBOOT[15:14]