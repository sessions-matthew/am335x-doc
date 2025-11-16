## 7.4.3 Functional Description

The ELM is designed around the error-location engine, which handles the computation based on the input syndrome polynomials.

The ELM maps the error-location engine to a standard interconnect interface by using a set of registers to control inputs and outputs.

## 7.4.3.1 ELM Software Reset

To perform a software reset, write a 1 to the ELM\_SYSCONFIG[1] SOFTRESET bit. The ELM\_SYSSTATUS[0] RESETDONE bit indicates that the software reset is complete when its value is 1. When the software reset completes, the ELM\_SYSCONFIG[1] SOFTRESET bit is automatically reset.

## 7.4.3.2 ELM Power Management

Table 7-278 describes the power-management features available to the ELM module.

Table 7-278. Local Power Management Features

| Feature                | Registers                              | Description                                                                                                            |
|------------------------|----------------------------------------|------------------------------------------------------------------------------------------------------------------------|
| Clock autogating       | ELM_SYSCONFIG[0] AUTOGATING bit        | This bit allows a local power optimization inside the module by gating the ELM_FCLK clock upon the interface activity. |
| Slave idle modes       | ELM_SYSCONFIG[4:3] SIDLEMODE bit field | Force-idle, No-idle, and Smart-idle modes are available.                                                               |
| Clock activity         | ELM_SYSCONFIG[8] CLOCKACTIVITY bit     | The clock can be switched-off or maintained during the wake-up period.                                                 |
| Master Standby modes   | N/A                                    |                                                                                                                        |
| Global Wake-up Enable  | N/A                                    |                                                                                                                        |
| Wake-up Sources Enable | N/A                                    |                                                                                                                        |

## CAUTION

The PRCM module has no hardware means of reading CLOCKACTIVITY settings. Thus, software must ensure consistent programming between the ELM CLOCKACTIVITY and ELM clock PRCM control bits.

## 7.4.3.3 ELM Interrupt Requests

Table 7-279 lists the event flags, and their masks, that can cause module interrupts.

Table 7-279. Events

| Event Flag                   | Event Mask                       | Map to   | Description                                        |
|------------------------------|----------------------------------|----------|----------------------------------------------------|
| ELM_IRQSTATUS[8] PAGE_VALID  | ELM_IRQENABLE[8] PAGE_MASK       | ELM_IRQ  | Page interrupt                                     |
| ELM_IRQSTATUS[7] LOC_VALID_7 | ELM_IRQENABLE[7] LOCATION_MASK_7 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 7 |
| ELM_IRQSTATUS[6] LOC_VALID_6 | ELM_IRQENABLE[6] LOCATION_MASK_6 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 6 |
| ELM_IRQSTATUS[5] LOC_VALID_5 | ELM_IRQENABLE[5] LOCATION_MASK_5 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 5 |
| ELM_IRQSTATUS[4] LOC_VALID_4 | ELM_IRQENABLE[4] LOCATION_MASK_4 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 4 |
| ELM_IRQSTATUS[3] LOC_VALID_3 | ELM_IRQENABLE[3] LOCATION_MASK_3 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 3 |
| ELM_IRQSTATUS[2] LOC_VALID_2 | ELM_IRQENABLE[2] LOCATION_MASK_2 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 2 |

<!-- image -->

<!-- image -->

Table 7-279. Events (continued)

| Event Flag                   | Event Mask                       | Map to   | Description                                        |
|------------------------------|----------------------------------|----------|----------------------------------------------------|
| ELM_IRQSTATUS[1] LOC_VALID_1 | ELM_IRQENABLE[1] LOCATION_MASK_1 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 1 |
| ELM_IRQSTATUS[0] LOC_VALID_0 | ELM_IRQENABLE[0] LOCATION_MASK_0 | ELM_IRQ  | Error-location interrupt for syndrome polynomial 0 |

## 7.4.3.4 Processing Initialization

ELM\_LOCATION\_CONFIG global setting parameters must be set before using the error-location engine. The ELM\_LOCATION\_CONFIG[1:0] ECC\_BCH\_LEVEL bit defines the error-correction level used (4-,8-, or 16-bit error-correction). The ELM\_LOCATION\_CONFIG[26:16] ECC\_SIZE bit field defines the maximum buffer length beyond which the engine processing no longer looks for errors.

The CPU can choose to use the ELM in continuous mode or page mode. If all ELM\_PAGE\_CTRL[i] SECTOR\_i bits are reset (i is the syndrome polynomial number, i = 0 to 7), continuous mode is used. In any other case, page mode is implicitly selected.

- Continuous mode: Each syndrome polynomial is processed independently - results for a syndrome can be retrieved and acknowledged at any time, whatever the status of the other seven processing contexts.
- Page mode: Syndrome polynomials are grouped into atomic entities - only one page can be processed at any given time, even if all eight contexts are not used for this page. Unused contexts are lost and cannot be affected to any other processing. The full page must be acknowledged and cleared before moving to the next page.

For completion interrupts to be generated correctly, all ELM\_IRQENABLE[i] LOCATION\_MASK\_i bits (i = 0 to 7) must be forced to 0 when in page mode, and set to 1 in continuous mode. Additionally, the ELM\_IRQENABLE[8] PAGE\_MASK bit must be set to 1 when in page mode.

The CPU initiates error-location processing by writing a syndrome polynomial into one of the eight possible register sets. Each of these register sets includes seven registers: ELM\_SYNDROME\_FRAGMENT\_0\_i to ELM\_SYNDROME\_FRAGMENT\_6\_i. The first six registers can be written in any order, but ELM\_SYNDROME\_FRAGMENT\_6\_i must be written last because it includes the validity bit, which instructs the ELM that this syndrome polynomial must be processed (the ELM\_SYNDROME\_FRAGMENT\_6\_i[16] SYNDROME\_VALID bit).

As soon as one validity bit is asserted (ELM\_SYNDROME\_FRAGMENT\_6\_i[16] SYNDROME\_VALID = 0x1, with i = 0 to 7), error-location processing can start for the corresponding syndrome polynomial. The associated ELM\_LOCATION\_STATUS\_i and ELM\_ERROR\_LOCATION\_0\_i to ELM\_ERROR\_LOCATION\_15\_i registers are not reset (i = 0 to 7). The software must not consider them until the corresponding ELM\_IRQSTATUS[i] LOC\_VALID\_i bit is set.

## 7.4.3.5 Processing Sequence

While the error-location engine is busy processing one syndrome polynomial, further syndrome polynomials can be written. They are processed when the current processing completes.

The engine completes early when:

- No error is detected; that is, when the ELM\_LOCATION\_STATUS\_i[8] ECC\_CORRECTABLE bit is set to 1 and the ELM\_LOCATION\_STATUS\_i[4:0] ECC\_NB\_ERRORS bit field is set to 0x0.
- Too many errors are detected; that is, when the ELM\_LOCATION\_STATUS\_i[8] ECC\_CORRECTABLE bit is set to 0 while the ELM\_LOCATION\_STATUS\_i[4:0] ECC\_NB\_ERRORS bit field is set with the value output by the error-location engine. The reported number of errors is not ensured if ECC\_CORRECTABLE is 0.

If the engine completes early, the associated error-location registers ELM\_ERROR\_LOCATION\_0\_i to ELM\_ERROR\_LOCATION\_15\_i are not updated (i = 0 to 7).

<!-- image -->

In all other cases, the engine goes through the entire error-location process. Each time an error-location is found, it is logged in the associated ECC\_ERROR\_LOCATION bit field. The first error detected is logged in the ELM\_ERROR\_LOCATION\_0\_i[12:0] ECC\_ERROR\_LOCATION bit field; the second in the ELM\_ERROR\_LOCATION\_1\_i[12:0] ECC\_ERROR\_LOCATION bit field, and so on.

Table 7-280. ELM\_LOCATION\_STATUS\_i Value Decoding Table

|   ECC_CORRECT ABLE Value | ECC_NB_ERRORS Value   | Status   | Number of Errors Detected   | Action Required                                                                                      |
|--------------------------|-----------------------|----------|-----------------------------|------------------------------------------------------------------------------------------------------|
|                        1 | 0                     | OK       | 0                           | None                                                                                                 |
|                        1 | ≠ 0                   | OK       | ECC_NB_ERRORS               | Correct the data buffer read based on the ELM_ERROR_LOCATION_0_i to ELM_ERROR_LOCATION_15_i results. |
|                        0 | Any                   | Failed   | Unknown                     | Software-dependant                                                                                   |

## 7.4.3.6 Processing Completion

When the processing for a given syndrome polynomial completes, its ELM\_SYNDROME\_FRAGMENT\_6\_i[16] SYNDROME\_VALID bit is reset. It must not be set again until the exit status registers, ELM\_LOCATION\_STATUS\_i (i = 0 to 7), for this processing are checked. Failure to comply with this rule leads to potential loss of the first polynomial process data output.

The error-location engine signals the process completion to the ELM. When this event is detected, the corresponding ELM\_IRQSTATUS[i] LOC\_VALID\_i bit is set (i = 0 to 7). The processing-exit status is available from the associated ELM\_LOCATION\_STATUS\_i register, and error locations are stored in order in the ECC\_ERROR\_LOCATION fields. The software must only read valid error-location registers based on the number of errors detected and located.

Immediately after the error-location engine completes, a new syndrome polynomial can be processed, if any is available, as reported by the ELM\_SYNDROME\_FRAGMENT\_6\_i[16] SYNDROME\_VALID validity bit, depending on the configured error-correction level. If several syndrome polynomials are available, a round-robin arbitration is used to select one for processing.

In continuous mode (that is, all bits in ELM\_PAGE\_CTRL are reset), an interrupt is triggered whenever a ELM\_IRQSTATUS[i] LOC\_VALID\_i bit is asserted. The CPU must read the ELM\_IRQSTATUS register to determine which polynomial is processed and retrieve the exit status and error locations (ELM\_LOCATION\_STATUS\_i and ELM\_ERROR\_LOCATION\_0\_i to ELM\_ERROR\_LOCATION\_15\_i). When done, the CPU must clear the corresponding ELM\_IRQSTATUS[i] LOC\_VALID\_i bit by writing it to 1. Other status bits must be written to 0 so that other interrupts are not unintentionally cleared. When using this mode, the ELM\_IRQSTATUS[8] PAGE\_VALID interrupt is never triggered.

In page mode, the module does not trigger interrupts for the processing completion of each polynomial because the ELM\_IRQENABLE[i] LOCATION\_MASK\_i bits are cleared. A page is defined using the ELM\_PAGE\_CTRL register. Each SECTOR\_i bit set means the corresponding polynomial i is part of the page processing. A page is fully processed when all tagged polynomials have been processed, as logged in the ELM\_IRQSTATUS[i] LOC\_VALID\_i bit fields. The module triggers an ELM\_IRQSTATUS[8] PAGE\_VALID interrupt whenever it detects that the full page has been processed. To make sure the next page can be correctly processed, all status bits in the ELM\_IRQSTATUS register must be cleared by using a single atomic-write access.

NOTE:

Do not modify page setting parameters in the ELM\_PAGE\_CTRL register unless the engine is idle, no polynomial input is valid, and all interrupts have been cleared.

Because no polynomial-level interrupt is triggered in page mode, polynomials cleared in the ELM\_PAGE\_CTRL[i] SECTOR\_i bit fields (i = 0 to 7) are processed as usual, but are essentially ignored. The CPU must manually poll the ELM\_IRQSTATUS bits to check for their status.