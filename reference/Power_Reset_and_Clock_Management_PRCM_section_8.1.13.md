<!-- image -->

www.ti.com

## 8.1.13 Power Management Registers

## 8.1.13.1 PRM\_IRQ Registers

Table 8-176 lists the memory-mapped registers for the PRM\_IRQ. All register offset addresses not listed in Table 8-176 should be considered as reserved locations and the register contents should not be modified.

Table 8-176. PRM\_IRQ REGISTERS

| Offset   | Acronym           | Register Name                                                                                                                                                                                                                   | Section            |
|----------|-------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 0h       | REVISION_PRM      | This register contains the IP revision code for the PRCM                                                                                                                                                                        | Section 8.1.13.1.1 |
| 4h       | PRM_IRQSTATUS_MPU | This register provides status on MPU interrupt events. An event is logged whether interrupt generation for the event is enabled or not. SW is required to clear a set bit by writing a '1' into the bit-position to be cleared. | Section 8.1.13.1.2 |
| 8h       | PRM_IRQENABLE_MPU | This register is used to enable and disable events used to trigger MPU interrupt activation.                                                                                                                                    | Section 8.1.13.1.3 |
| Ch       | PRM_IRQSTATUS_M3  | This register provides status on MPU interrupt events. An event is logged whether interrupt generation for the event is enabled or not. SW is required to clear a set bit by writing a '1' into the bit-position to be cleared. | Section 8.1.13.1.4 |
| 10h      | PRM_IRQENABLE_M3  | This register is used to enable and disable events used to trigger MPU interrupt activation.                                                                                                                                    | Section 8.1.13.1.5 |

## 8.1.13.1.1 REVISION\_PRM Register (offset = 0h) [reset = 0h]

REVISION\_PRM is shown in Figure 8-166 and described in Table 8-177.

This register contains the IP revision code for the PRCM

| Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   | Figure 8-166. REVISION_PRM Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Rev                                   | Rev                                   | Rev                                   | Rev                                   | Rev                                   | Rev                                   | Rev                                   | Rev                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-177. REVISION\_PRM Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                  |
|-------|----------|--------|---------|----------------------------------------------------------------------------------------------|
| 31-8  | Reserved | R      | 0h      | Reads returns 0.                                                                             |
| 7-0   | Rev      | R      | 0h      | IP revision [ 7:4] Major revision [ 3:0] Minor revision Examples: 0x10 for 1.0, 0x21 for 2.1 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.1.2 PRM\_IRQSTATUS\_MPU Register (offset = 4h) [reset = 0h]

PRM\_IRQSTATUS\_MPU is shown in Figure 8-167 and described in Table 8-178.

This register provides status on MPU interrupt events. An event is logged whether interrupt generation for the event is enabled or not. SW is required to clear a set bit by writing a '1' into the bit-position to be cleared.

| Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   | Figure 8-167. PRM_IRQSTATUS_MPU Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| dpll_per_recal_ st                         | dpll_ddr_recal_ st                         | dpll_disp_recal _st                        | dpll_core_recal _st                        | dpll_mpu_recal _st                         | ForceWkup_st                               | Reserved                                   | Transition_st                              |
| R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R-0h                                       | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-178. PRM\_IRQSTATUS\_MPU Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                |
|-------|--------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved           | R      | 0h      |                                                                                                                                            |
| 15    | dpll_per_recal_st  | R/W    | 0h      | interrupt status for usb dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                   |
| 14    | dpll_ddr_recal_st  | R/W    | 0h      | interrupt status for ddr dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                   |
| 13    | dpll_disp_recal_st | R/W    | 0h      | interrupt status for disp dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                  |
| 12    | dpll_core_recal_st | R/W    | 0h      | interrupt status for core dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                  |
| 11    | dpll_mpu_recal_st  | R/W    | 0h      | interrupt status for mpu dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                   |
| 10    | ForceWkup_st       | R/W    | 0h      | Software supervised wakeup completed event interrupt status 0 = IRQ_fal : No interrupt 1 = IRQ_tru : Interrupt is pending                  |
| 9     | Reserved           | R      | 0h      |                                                                                                                                            |
| 8     | Transition_st      | R/W    | 0h      | Software supervised transition completed event interrupt status (any domain) 0 = IRQ_fal : No interrupt 1 = IRQ_tru : Interrupt is pending |
| 7-0   | Reserved           | R      | 0h      |                                                                                                                                            |

## 8.1.13.1.3 PRM\_IRQENABLE\_MPU Register (offset = 8h) [reset = 0h]

PRM\_IRQENABLE\_MPU is shown in Figure 8-168 and described in Table 8-179.

This register is used to enable and disable events used to trigger MPU interrupt activation.

| Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   | Figure 8-168. PRM_IRQENABLE_MPU Register   |
|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|--------------------------------------------|
| 31                                         | 30                                         | 29                                         | 28                                         | 27                                         | 26                                         | 25                                         | 24                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 23                                         | 22                                         | 21                                         | 20                                         | 19                                         | 18                                         | 17                                         | 16                                         |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |
| 15                                         | 14                                         | 13                                         | 12                                         | 11                                         | 10                                         | 9                                          | 8                                          |
| dpll_disp_recal _en                        | dpll_ddr_recal_ en                         | dpll_per_recal_ en                         | dpll_core_recal _en                        | dpll_mpu_recal _en                         | ForceWkup_en                               | Reserved                                   | Transition_en                              |
| R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R/W-0h                                     | R-0h                                       | R/W-0h                                     |
| 7                                          | 6                                          | 5                                          | 4                                          | 3                                          | 2                                          | 1                                          | 0                                          |
| Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   | Reserved                                   |
| R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       | R-0h                                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-179. PRM\_IRQENABLE\_MPU Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                      |
|-------|--------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved           | R      | 0h      |                                                                                                                                                  |
| 15    | dpll_disp_recal_en | R/W    | 0h      | Interrupt enable for disp dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                        |
| 14    | dpll_ddr_recal_en  | R/W    | 0h      | Interrupt enable for ddr dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                         |
| 13    | dpll_per_recal_en  | R/W    | 0h      | Interrupt enable for usb dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                         |
| 12    | dpll_core_recal_en | R/W    | 0h      | Interrupt enable for core dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                        |
| 11    | dpll_mpu_recal_en  | R/W    | 0h      | Interrupt enable for mpu dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                         |
| 10    | ForceWkup_en       | R/W    | 0h      | Software supervised Froce Wakeup completed event interrupt enable 0 = irq_msk : Interrupt is masked 1 = irq_en : Interrupt is enabled            |
| 9     | Reserved           | R      | 0h      |                                                                                                                                                  |
| 8     | Transition_en      | R/W    | 0h      | Software supervised transition completed event interrupt enable (any domain) 0 = irq_msk : Interrupt is masked 1 = irq_en : Interrupt is enabled |
| 7-6   | Reserved           | R      | 0h      |                                                                                                                                                  |
| 5-1   | Reserved           | R      | 0h      |                                                                                                                                                  |
| 0     | Reserved           | R      | 0h      |                                                                                                                                                  |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.1.4 PRM\_IRQSTATUS\_M3 Register (offset = Ch) [reset = 0h]

PRM\_IRQSTATUS\_M3 is shown in Figure 8-169 and described in Table 8-180.

This register provides status on MPU interrupt events. An event is logged whether interrupt generation for the event is enabled or not. SW is required to clear a set bit by writing a '1' into the bit-position to be cleared.

| Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   | Figure 8-169. PRM_IRQSTATUS_M3 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| dpll_per_recal_ st                        | dpll_ddr_recal_ st                        | dpll_disp_recal _st                       | dpll_core_recal _st                       | dpll_mpu_recal _st                        | ForceWkup_st                              | Reserved                                  | Transition_st                             |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R-0h                                      | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-180. PRM\_IRQSTATUS\_M3 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                |
|-------|--------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved           | R      | 0h      |                                                                                                                                            |
| 15    | dpll_per_recal_st  | R/W    | 0h      | interrupt status for usb dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                   |
| 14    | dpll_ddr_recal_st  | R/W    | 0h      | interrupt status for ddr dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                   |
| 13    | dpll_disp_recal_st | R/W    | 0h      | interrupt status for disp dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                  |
| 12    | dpll_core_recal_st | R/W    | 0h      | interrupt status for core dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                  |
| 11    | dpll_mpu_recal_st  | R/W    | 0h      | interrupt status for mpu dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                   |
| 10    | ForceWkup_st       | R/W    | 0h      | Software supervised wakeup completed event interrupt status 0 = IRQ_fal : No interrupt 1 = IRQ_tru : Interrupt is pending                  |
| 9     | Reserved           | R      | 0h      |                                                                                                                                            |
| 8     | Transition_st      | R/W    | 0h      | Software supervised transition completed event interrupt status (any domain) 0 = IRQ_fal : No interrupt 1 = IRQ_tru : Interrupt is pending |
| 7-0   | Reserved           | R      | 0h      |                                                                                                                                            |

## 8.1.13.1.5 PRM\_IRQENABLE\_M3 Register (offset = 10h) [reset = 0h]

PRM\_IRQENABLE\_M3 is shown in Figure 8-170 and described in Table 8-181.

This register is used to enable and disable events used to trigger MPU interrupt activation.

| Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   | Figure 8-170. PRM_IRQENABLE_M3 Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| dpll_disp_recal _en                       | dpll_ddr_recal_ en                        | dpll_per_recal_ en                        | dpll_core_recal _en                       | dpll_mpu_recal _en                        | ForceWkup_en                              | Reserved                                  | Transition_en                             |
| R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R/W-0h                                    | R-0h                                      | R/W-0h                                    |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | Reserved                                  |                                           |                                           | Reserved                                  |                                           |                                           | Reserved                                  |
| R-0h                                      | R-0h                                      |                                           |                                           | R-0h                                      |                                           |                                           | R-0h                                      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-181. PRM\_IRQENABLE\_M3 Register Field Descriptions

| Bit   | Field              | Type   | Reset   | Description                                                                                                                                      |
|-------|--------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-16 | Reserved           | R      | 0h      |                                                                                                                                                  |
| 15    | dpll_disp_recal_en | R/W    | 0h      | Interrupt enable for disp dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                        |
| 14    | dpll_ddr_recal_en  | R/W    | 0h      | Interrupt enable for ddr dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                         |
| 13    | dpll_per_recal_en  | R/W    | 0h      | Interrupt enable for usb dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                         |
| 12    | dpll_core_recal_en | R/W    | 0h      | Interrupt enable for core dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                        |
| 11    | dpll_mpu_recal_en  | R/W    | 0h      | Interrupt enable for mpu dpll recaliberation 0 = DIS : Disables dpll recaliberation 1 = EN : ENAbles dpll recaliberation                         |
| 10    | ForceWkup_en       | R/W    | 0h      | Software supervised Froce Wakeup completed event interrupt enable 0 = irq_msk : Interrupt is masked 1 = irq_en : Interrupt is enabled            |
| 9     | Reserved           | R      | 0h      |                                                                                                                                                  |
| 8     | Transition_en      | R/W    | 0h      | Software supervised transition completed event interrupt enable (any domain) 0 = irq_msk : Interrupt is masked 1 = irq_en : Interrupt is enabled |
| 7-6   | Reserved           | R      | 0h      |                                                                                                                                                  |
| 5-1   | Reserved           | R      | 0h      |                                                                                                                                                  |
| 0     | Reserved           | R      | 0h      |                                                                                                                                                  |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.2 PRM\_PER Registers

Table 8-182 lists the memory-mapped registers for the PRM\_PER. All register offset addresses not listed in Table 8-182 should be considered as reserved locations and the register contents should not be modified.

## Table 8-182. PRM\_PER REGISTERS

| Offset   | Acronym          | Register Name                                                                                   | Section            |
|----------|------------------|-------------------------------------------------------------------------------------------------|--------------------|
| 0h       | RM_PER_RSTCTRL   | This register controls the release of the PER Domain resets.                                    | Section 8.1.13.2.1 |
| 8h       | PM_PER_PWRSTST   | This register provides a status on the current PER power domain state. [warm reset insensitive] | Section 8.1.13.2.2 |
| Ch       | PM_PER_PWRSTCTRL | Controls the power state of PER power domain                                                    | Section 8.1.13.2.3 |

## 8.1.13.2.1 RM\_PER\_RSTCTRL Register (offset = 0h) [reset = 2h]

RM\_PER\_RSTCTRL is shown in Figure 8-171 and described in Table 8-183. This register controls the release of the PER Domain resets.

| Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   | Figure 8-171. RM_PER_RSTCTRL Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| Reserved                                | Reserved                                |                                         | Reserved                                |                                         | Reserved                                | PRU_ICSS_LR ST                          | Reserved                                |
| R-0h                                    | R-0h                                    |                                         | R-0h                                    |                                         | R-0h                                    | R/W-1h                                  | R-0h                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-183. RM\_PER\_RSTCTRL Register Field Descriptions

| Bit   | Field         | Type   | Reset   | Description                                                                                                                               |
|-------|---------------|--------|---------|-------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved      | R      | 0h      |                                                                                                                                           |
| 5-3   | Reserved      | R      | 0h      |                                                                                                                                           |
| 2     | Reserved      | R      | 0h      |                                                                                                                                           |
| 1     | PRU_ICSS_LRST | R/W    | 1h      | PER domain PRU-ICSS local reset control 0x0 = CLEAR : Reset is cleared for the PRU-ICSS 0x1 = ASSERT : Reset is asserted for the PRU-ICSS |
| 0     | Reserved      | R      | 0h      |                                                                                                                                           |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.2.2 PM\_PER\_PWRSTST Register (offset = 8h) [reset = 1E60007h]

PM\_PER\_PWRSTST is shown in Figure 8-172 and described in Table 8-184.

This register provides a status on the current PER power domain state. [warm reset insensitive]

## Figure 8-172. PM\_PER\_PWRSTST Register

| 31                    | 30              | 29       | 28           | 27       | 26              | 25                | 24                    |
|-----------------------|-----------------|----------|--------------|----------|-----------------|-------------------|-----------------------|
|                       |                 | Reserved |              |          |                 |                   | pru_icss_mem_ statest |
|                       |                 |          | R-0h         |          |                 |                   | R-3h                  |
| 23                    | 22              | 21       | 20           | 19       | 18              | 17                | 16                    |
| pru_icss_mem_ statest | ram_mem_statest |          | InTransition | Reserved | PER_mem_statest |                   | Reserved              |
| R-3h                  | R-3h            |          | R-0h         | R-0h     | R-3h            |                   | R-0h                  |
| 15                    | 14              | 13       | 12           | 11       | 10              | 9                 | 8                     |
| Reserved              |                 |          |              |          |                 |                   |                       |
| 7                     | 6               | 5        | 4            | 3        | 2               | 1                 | 0                     |
| Reserved              |                 |          |              |          | LogicStateSt    |                   |                       |
|                       |                 | R-0h     |              |          |                 | PowerStateSt R-3h |                       |
|                       |                 |          |              |          | R-1h            |                   |                       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-184. PM\_PER\_PWRSTST Register Field Descriptions

| Bit   | Field                | Type   | Reset   | Description                                                                                                                                    |
|-------|----------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-25 | Reserved             | R      | 0h      |                                                                                                                                                |
| 24-23 | pru_icss_mem_statest | R      | 3h      | PRU-ICSS memory state status 0x0 = Mem_off : Memory is OFF 0x1= Memory is in RETENTION 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON   |
| 22-21 | ram_mem_statest      | R      | 3h      | OCMC RAM memory state status 0x0 = Mem_off : Memory is OFF 0x1= Memory is in RETENTION 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON   |
| 20    | InTransition         | R      | 0h      | Domain transition status 0x0 = No : No on-going transition on power domain 0x1 = Ongoing : Power domain transition is in progress.             |
| 19    | Reserved             | R      | 0h      |                                                                                                                                                |
| 18-17 | PER_mem_statest      | R      | 3h      | PER domain memory state status 0x0 = Mem_off : Memory is OFF 0x1= Memory is in RETENTION 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON |
| 16-3  | Reserved             | R      | 0h      |                                                                                                                                                |
| 2     | LogicStateSt         | R      | 1h      | Logic state status 0x0 = OFF : Logic in domain is OFF 0x1 = ON : Logic in domain is ON                                                         |

<!-- image -->

## Table 8-184. PM\_PER\_PWRSTST Register Field Descriptions (continued)

| Bit   | Field        | Type   | Reset   | Description                                                                                    |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------|
| 1-0   | PowerStateSt | R      | 3h      | Current Power State Status 0x0 = OFF : OFF State 0x1 = RET 0x2 = Reserved1 0x3 = ON : ON State |

<!-- image -->

www.ti.com

## 8.1.13.2.3 PM\_PER\_PWRSTCTRL Register (offset = Ch) [reset = EE0000EBh]

PM\_PER\_PWRSTCTRL is shown in Figure 8-173 and described in Table 8-185. Controls the power state of PER power domain

## Figure 8-173. PM\_PER\_PWRSTCTRL Register

<!-- image -->

| 31                     | 30                   | 29                   | 28                   | 27                | 26              | 25              | 24         |
|------------------------|----------------------|----------------------|----------------------|-------------------|-----------------|-----------------|------------|
| ram_mem_ONState        | ram_mem_ONState      | PER_mem_RE TState    | Reserved             | ram_mem_RET State | PER_mem_ONState | PER_mem_ONState | Reserved   |
| R/W-3h                 | R/W-3h               | R/W-1h               | R-0h                 | R/W-1h            | R/W-3h          | R/W-3h          | R-0h       |
| 23                     | 22                   | 21                   | 20                   | 19                | 18              | 17              | 16         |
| Reserved               | Reserved             | Reserved             | Reserved             | Reserved          | Reserved        | Reserved        | Reserved   |
| R-0h                   | R-0h                 | R-0h                 | R-0h                 | R-0h              | R-0h            | R-0h            | R-0h       |
| 15                     | 14                   | 13                   | 12                   | 11                | 10              | 9               | 8          |
| Reserved               | Reserved             | Reserved             | Reserved             | Reserved          | Reserved        | Reserved        | Reserved   |
| R-0h                   | R-0h                 | R-0h                 | R-0h                 | R-0h              | R-0h            | R-0h            | R-0h       |
| 7                      | 6                    | 5                    | 4                    | 3                 | 2               | 1               | 0          |
| pru_icss_mem_ RETState | pru_icss_mem_ONState | pru_icss_mem_ONState | LowPowerState Change | LogicRETState     | Reserved        | PowerState      | PowerState |
| R/W-1h                 | R/W-3h               | R/W-3h               | R/W-0h               | R/W-1h            | R-0h            | R/W-3h          | R/W-3h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-185. PM\_PER\_PWRSTCTRL Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                        |
|-------|-----------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | ram_mem_ONState       | R/W    | 3h      | OCMC RAM memory on state 0x0 = OFF : Memory is OFF 0x1 = RET : Memory is in retention state 0x2 = RESERVED 0x3 = ON : Memory is ON |
| 29    | PER_mem_RETState      | R/W    | 1h      | Other memories in PER Domain RET state 0x0 = OFF 0x1 = RET                                                                         |
| 28    | Reserved              | R      | 0h      |                                                                                                                                    |
| 27    | ram_mem_RETState      | R/W    | 1h      | OCMC RAM memory RET state 0x0 = OFF : Memory is in off state 0x1 = RET : Memory is in retention state                              |
| 26-25 | PER_mem_ONState       | R/W    | 3h      | Other memories in PER Domain ON state 0x0 = Reserved2 0x1 = Reserved1 0x2 = Reserved : Reserved 0x3 = ON : Memory is ON            |
| 24-8  | Reserved              | R      | 0h      |                                                                                                                                    |
| 7     | pru_icss_mem_RETState | R/W    | 1h      | PRU-ICSS memory RET state 0x0 = OFF : Memory is in off state 0x1 = RET : Memory is in retention state                              |
| 6-5   | pru_icss_mem_ONState  | R/W    | 3h      | PRU-ICSS memory ON state 0x0 = Reserved2 0x1 = Reserved1 0x2 = Reserved : Reserved 0x3 = ON : Memory is ON                         |

<!-- image -->

Table 8-185. PM\_PER\_PWRSTCTRL Register Field Descriptions (continued)

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 4     | LowPowerStateChange | R/W    | 0h      | Power state change request when domain has already performed a sleep transition. Allows going into deeper low power state without waking up the power domain. 0x0 = DIS : Do not request a low power state change. 0x1 = EN : Request a low power state change. This bit is automatically cleared when the power state is effectively changed or when power state is ON. |
| 3     | LogicRETState       | R/W    | 1h      | Logic state when power domain is RETENTION 0x0 = logic_off : Only retention registers are retained and remaing logic is off when the domain is in RETENTION state. 0x1 = logic_ret : Whole logic is retained when domain is in RETENTION state.                                                                                                                          |
| 2     | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 1-0   | PowerState          | R/W    | 3h      | PER domain power state control 0x0 = OFF 0x1 = RET 0x2 = Reserved 0x3 = ON                                                                                                                                                                                                                                                                                               |

## 8.1.13.3 PRM\_WKUP Registers

Table 8-186 lists the memory-mapped registers for the PRM\_WKUP. All register offset addresses not listed in Table 8-186 should be considered as reserved locations and the register contents should not be modified.

Table 8-186. PRM\_WKUP REGISTERS

| Offset   | Acronym           | Register Name                                                                                                                                                                      | Section            |
|----------|-------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 0h       | RM_WKUP_RSTCTRL   | This register controls the release of the ALWAYS ON Domain resets.                                                                                                                 | Section 8.1.13.3.1 |
| 4h       | PM_WKUP_PWRSTCTRL | Controls power state of WKUP power domain                                                                                                                                          | Section 8.1.13.3.2 |
| 8h       | PM_WKUP_PWRSTST   | This register provides a status on the current WKUP power domain state. [warm reset insensitive]                                                                                   | Section 8.1.13.3.3 |
| Ch       | RM_WKUP_RSTST     | This register logs the different reset sources of the ALWON domain. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive] | Section 8.1.13.3.4 |

<!-- image -->

www.ti.com

## 8.1.13.3.1 RM\_WKUP\_RSTCTRL Register (offset = 0h) [reset = 8h]

RM\_WKUP\_RSTCTRL is shown in Figure 8-174 and described in Table 8-187.

This register controls the release of the ALWAYS ON Domain resets.

## Figure 8-174. RM\_WKUP\_RSTCTRL Register

| 31       | 30       | 29       | 28       | 27            | 26       | 25       | 24       |
|----------|----------|----------|----------|---------------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved | Reserved      | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20       | 19            | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved | Reserved      | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12       | 11            | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved | Reserved      | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4        | 3             | 2        | 1        | 0        |
| Reserved | Reserved | Reserved | Reserved | WKUP_M3_LR ST |          | Reserved |          |
| R-0h     | R-0h     | R-0h     | R-0h     | R/W-1h        |          | R-0h     |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-187. RM\_WKUP\_RSTCTRL Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                         |
|-------|--------------|--------|---------|---------------------------------------------------------------------------------------------------------------------|
| 31-6  | Reserved     | R      | 0h      |                                                                                                                     |
| 5-4   | Reserved     | R      | 0h      |                                                                                                                     |
| 3     | WKUP_M3_LRST | R/W    | 1h      | Assert Reset to WKUP_M3 0x0 = CLEAR : Reset is cleared for the M3 0x1 = ASSERT : Reset is asserted for the M3 by A8 |
| 2-0   | Reserved     | R      | 0h      |                                                                                                                     |

## 8.1.13.3.2 PM\_WKUP\_PWRSTCTRL Register (offset = 4h) [reset = 8h]

PM\_WKUP\_PWRSTCTRL is shown in Figure 8-175 and described in Table 8-188. Controls power state of WKUP power domain

## Figure 8-175. PM\_WKUP\_PWRSTCTRL Register

| 31       | 30       | 29       | 28                   | 27            | 26       | 25       | 24       |
|----------|----------|----------|----------------------|---------------|----------|----------|----------|
| Reserved | Reserved | Reserved | Reserved             | Reserved      | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h                 | R-0h          | R-0h     | R-0h     | R-0h     |
| 23       | 22       | 21       | 20                   | 19            | 18       | 17       | 16       |
| Reserved | Reserved | Reserved | Reserved             | Reserved      | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h                 | R-0h          | R-0h     | R-0h     | R-0h     |
| 15       | 14       | 13       | 12                   | 11            | 10       | 9        | 8        |
| Reserved | Reserved | Reserved | Reserved             | Reserved      | Reserved | Reserved | Reserved |
| R-0h     | R-0h     | R-0h     | R-0h                 | R-0h          | R-0h     | R-0h     | R-0h     |
| 7        | 6        | 5        | 4                    | 3             | 2        | 1        | 0        |
|          | Reserved |          | LowPowerState Change | LogicRETState | Reserved | Reserved | Reserved |
|          | R-0h     |          | R/W-0h               | R/W-1h        | R-0h     | R-0h     |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-188. PM\_WKUP\_PWRSTCTRL Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-30 | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 29    | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 28    | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 27    | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 26-25 | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 24-5  | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 4     | LowPowerStateChange | R/W    | 0h      | Power state change request when domain has already performed a sleep transition. Allows going into deeper low power state without waking up the power domain. 0x0 = DIS : Do not request a low power state change. 0x1 = EN : Request a low power state change. This bit is automatically cleared when the power state is effectively changed or when power state is ON. |
| 3     | LogicRETState       | R/W    | 1h      | Logic state when power domain is RETENTION 0x0 = logic_off : Only retention registers are retained and remaing logic is off when the domain is in RETENTION state. 0x1 = logic_ret : Whole logic is retained when domain is in RETENTION state.                                                                                                                          |
| 2     | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 1-0   | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.3.3 PM\_WKUP\_PWRSTST Register (offset = 8h) [reset = 60004h]

PM\_WKUP\_PWRSTST is shown in Figure 8-176 and described in Table 8-189.

This register provides a status on the current WKUP power domain state. [warm reset insensitive]

| Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   | Figure 8-176. PM_WKUP_PWRSTST Register   |
|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|------------------------------------------|
| 31                                       | 30                                       | 29                                       | 28                                       | 27                                       | 26                                       | 25                                       | 24                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 23                                       | 22                                       | 21                                       | 20                                       | 19                                       | 18                                       | 17                                       | 16                                       |
| Reserved                                 | Reserved                                 | Reserved                                 | InTransition                             | Reserved                                 | Debugss_mem_statest                      | Debugss_mem_statest                      | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-3h                                     | R-3h                                     | R-0h                                     |
| 15                                       | 14                                       | 13                                       | 12                                       | 11                                       | 10                                       | 9                                        | 8                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     |
| 7                                        | 6                                        | 5                                        | 4                                        | 3                                        | 2                                        | 1                                        | 0                                        |
| Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | Reserved                                 | LogicStateSt                             | Reserved                                 | Reserved                                 |
| R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-0h                                     | R-1h                                     | R-0h                                     | R-0h                                     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-189. PM\_WKUP\_PWRSTST Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                        |
|-------|---------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------|
| 31-23 | Reserved            | R      | 0h      |                                                                                                                                    |
| 22-21 | Reserved            | R      | 0h      |                                                                                                                                    |
| 20    | InTransition        | R      | 0h      | Domain transition status 0x0 = No : No on-going transition on power domain 0x1 = Ongoing : Power domain transition is in progress. |
| 19    | Reserved            | R      | 0h      |                                                                                                                                    |
| 18-17 | Debugss_mem_statest | R      | 3h      | WKUP domain memory state status 0x0 = Mem_off : Memory is OFF 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON                |
| 16-3  | Reserved            | R      | 0h      |                                                                                                                                    |
| 2     | LogicStateSt        | R      | 1h      | Logic state status 0x0 = OFF : Logic in domain is OFF 0x1 = ON : Logic in domain is ON                                             |
| 1-0   | Reserved            | R      | 0h      |                                                                                                                                    |

## 8.1.13.3.4 RM\_WKUP\_RSTST Register (offset = Ch) [reset = 0h]

RM\_WKUP\_RSTST is shown in Figure 8-177 and described in Table 8-190.

This register logs the different reset sources of the ALWON domain. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive]

| Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   | Figure 8-177. RM_WKUP_RSTST Register   |
|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|----------------------------------------|
| 31                                     | 30                                     | 29                                     | 28                                     | 27                                     | 26                                     | 25                                     | 24                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 23                                     | 22                                     | 21                                     | 20                                     | 19                                     | 18                                     | 17                                     | 16                                     |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 15                                     | 14                                     | 13                                     | 12                                     | 11                                     | 10                                     | 9                                      | 8                                      |
| Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               | Reserved                               |
| R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   | R-0h                                   |
| 7                                      | 6                                      | 5                                      | 4                                      | 3                                      | 2                                      | 1                                      | 0                                      |
| ICECRUSHER _M3_RST                     | EMULATION_ M3_RST                      | WKUP_M3_LR ST                          |                                        |                                        | Reserved                               |                                        |                                        |
| R/W-0h                                 | R/W-0h                                 | R/W-0h                                 |                                        |                                        | R-0h                                   |                                        |                                        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-190. RM\_WKUP\_RSTST Register Field Descriptions

| Bit   | Field             | Type   | Reset   | Description                                                                                                                                                                                 |
|-------|-------------------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-8  | Reserved          | R      | 0h      |                                                                                                                                                                                             |
| 7     | ICECRUSHER_M3_RST | R/W    | 0h      | M3 Processor has been reset due to M3 ICECRUSHER1 reset event 0x0 = RESET_NO : No reset 0x1 = RESET_YES : M3 Processor has been reset                                                       |
| 6     | EMULATION_M3_RST  | R/W    | 0h      | M3 Processor has been reset due to emulation reset source e.g. assert reset command initiated by the icepick module 0x0 = RESET_NO : No reset 0x1 = RESET_YES : M3 Processor has been reset |
| 5     | WKUP_M3_LRST      | R/W    | 0h      | M3 Processor has been reset 0x0 = RESET_NO : No reset 0x1 = RESET_YES : M3 Processor has been reset                                                                                         |
| 4-0   | Reserved          | R      | 0h      |                                                                                                                                                                                             |

## 8.1.13.4 PRM\_MPU Registers

Table 8-191 lists the memory-mapped registers for the PRM\_MPU. All register offset addresses not listed in Table 8-191 should be considered as reserved locations and the register contents should not be modified.

## Table 8-191. PRM\_MPU REGISTERS

| Offset   | Acronym          | Register Name                                                                                    | Section            |
|----------|------------------|--------------------------------------------------------------------------------------------------|--------------------|
| 0h       | PM_MPU_PWRSTCTRL | This register controls the MPU power state to reach upon mpu domain sleep transition             | Section 8.1.13.4.1 |
| 4h       | PM_MPU_PWRSTST   | This register provides a status on the current MPU power domain state0. [warm reset insensitive] | Section 8.1.13.4.2 |

<!-- image -->

<!-- image -->

## Table 8-191. PRM\_MPU REGISTERS (continued)

| Offset   | Acronym      | Register Name                                                                                                                                                                      | Section            |
|----------|--------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 8h       | RM_MPU_RSTST | This register logs the different reset sources of the ALWON domain. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive] | Section 8.1.13.4.3 |

## 8.1.13.4.1 PM\_MPU\_PWRSTCTRL Register (offset = 0h) [reset = 1FF0007h]

PM\_MPU\_PWRSTCTRL is shown in Figure 8-178 and described in Table 8-192.

This register controls the MPU power state to reach upon mpu domain sleep transition

## Figure 8-178. PM\_MPU\_PWRSTCTRL Register

| 31               | 30               | 29             | 28                   | 27             | 26             | 25              | 24                |
|------------------|------------------|----------------|----------------------|----------------|----------------|-----------------|-------------------|
| Reserved         | Reserved         | Reserved       | Reserved             | Reserved       | Reserved       | Reserved        | mpu_ram_RET State |
| R-0h             | R-0h             | R-0h           | R-0h                 | R-0h           | R-0h           | R-0h            | R/W-1h            |
| 23               | 22               | 21             | 20                   | 19             | 18             | 17              | 16                |
| mpu_l2_RETSt ate | mpu_l1_RETSt ate | MPU_L2_ONState | MPU_L2_ONState       | MPU_L1_ONState | MPU_L1_ONState | MPU_RAM_ONState | MPU_RAM_ONState   |
| R/W-1h           | R/W-1h           | R-3h           | R-3h                 | R-3h           | R-3h           | R/W-3h          | R/W-3h            |
| 15               | 14               | 13             | 12                   | 11             | 10             | 9               | 8                 |
| Reserved         | Reserved         | Reserved       | Reserved             | Reserved       | Reserved       | Reserved        | Reserved          |
| R-0h             | R-0h             | R-0h           | R-0h                 | R-0h           | R-0h           | R-0h            | R-0h              |
| 7                | 6                | 5              | 4                    | 3              | 2              | 1               | 0                 |
|                  | Reserved         |                | LowPowerState Change | Reserved       | LogicRETState  | PowerState      | PowerState        |
|                  | R-0h             |                | R/W-0h               | R-0h           | R/W-1h         | R/W-3h          | R/W-3h            |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-192. PM\_MPU\_PWRSTCTRL Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 25    | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 24    | mpu_ram_RETState    | R/W    | 1h      | Default power domain memory(ram) retention state when power domain is in retention                                                                                                                                                                                                                                                                                       |
| 23    | mpu_l2_RETState     | R/W    | 1h      | Default power domain memory(L2) retention state when power domain is in retention                                                                                                                                                                                                                                                                                        |
| 22    | mpu_l1_RETState     | R/W    | 1h      | Default power domain memory(L1) retention state when power domain is in retention                                                                                                                                                                                                                                                                                        |
| 21-20 | MPU_L2_ONState      | R      | 3h      | Default power domain memory state when domain is ON.                                                                                                                                                                                                                                                                                                                     |
| 19-18 | MPU_L1_ONState      | R      | 3h      | Default power domain memory state when domain is ON.                                                                                                                                                                                                                                                                                                                     |
| 17-16 | MPU_RAM_ONState     | R/W    | 3h      | Default power domain memory state when domain is ON. 0x0 = Mem_off 0x2 = Reserved 0x3 = Mem_on : Memory bank is on when the domain is ON.                                                                                                                                                                                                                                |
| 15-5  | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 4     | LowPowerStateChange | R/W    | 0h      | Power state change request when domain has already performed a sleep transition. Allows going into deeper low power state without waking up the power domain. 0x0 = DIS : Do not request a low power state change. 0x1 = EN : Request a low power state change. This bit is automatically cleared when the power state is effectively changed or when power state is ON. |
| 3     | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 2     | LogicRETState       | R/W    | 1h      | Logic state when power domain is RETENTION 0x0 = logic_off : Only retention registers are retained and remaing logic is off when the domain is in RETENTION state. 0x1 = logic_ret : Whole logic is retained when domain is in RETENTION state.                                                                                                                          |

<!-- image -->

<!-- image -->

www.ti.com

## Table 8-192. PM\_MPU\_PWRSTCTRL Register Field Descriptions (continued)

| Bit   | Field      | Type   | Reset   | Description                                                                            |
|-------|------------|--------|---------|----------------------------------------------------------------------------------------|
| 1-0   | PowerState | R/W    | 3h      | Power state control 0x0 = OFF : OFF State 0x1 = RET 0x2 = Reserved 0x3 = ON : ON State |

## 8.1.13.4.2 PM\_MPU\_PWRSTST Register (offset = 4h) [reset = 157h]

PM\_MPU\_PWRSTST is shown in Figure 8-179 and described in Table 8-193.

This register provides a status on the current MPU power domain state0. [warm reset insensitive]

| Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   | Figure 8-179. PM_MPU_PWRSTST Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 31 24                                   | Reserved                                |
| 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      |
| 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      |
| 20 R-0h                                 | 19 R-0h                                 | 18                                      | 17 R-0h                                 | 16                                      | Reserved InTransition Reserved          | 23 15                                   | 14                                      |
| 13                                      | 13                                      | 13                                      | 13                                      | 13                                      | 13                                      | 13                                      | 13                                      |
| 12                                      | 11                                      | 10                                      | 9 MPU_L2_StateSt                        | 8                                       | R-0h R-1h                               | 7                                       | Reserved 6                              |
| 5                                       | 5                                       | 5                                       | 5                                       | 5                                       | 5                                       | 5                                       | 5                                       |
| 4 MPU_L1_StateSt                        | 3                                       | 2                                       | 1 LogicStateSt R-1h                     | 0 MPU_RAM_StateSt PowerStateSt          | Reserved                                | R-1h R-1h                               | R-0h                                    |
| R-3h                                    | R-3h                                    |                                         |                                         |                                         |                                         |                                         |                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-193. PM\_MPU\_PWRSTST Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                                  |
|-------|-----------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | Reserved        | R      | 0h      |                                                                                                                                              |
| 20    | InTransition    | R      | 0h      | Domain transition status 0x0 = No : No on-going transition on power domain 0x1 = Ongoing : Power domain transition is in progress.           |
| 19-10 | Reserved        | R      | 0h      |                                                                                                                                              |
| 9-8   | MPU_L2_StateSt  | R      | 1h      | MPU L2 memory state status 0x0 = Mem_off : Memory is OFF 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON                               |
| 7-6   | MPU_L1_StateSt  | R      | 1h      | MPU L1 memory state status 0x0 = Mem_off : Memory is OFF 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON                               |
| 5-4   | MPU_RAM_StateSt | R      | 1h      | MPU_RAM memory state status 0x0 = Mem_off : Memory is OFF 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON                              |
| 3     | Reserved        | R      | 0h      |                                                                                                                                              |
| 2     | LogicStateSt    | R      | 1h      | Logic state status 0x0 = OFF : Logic in domain is OFF 0x1 = ON : Logic in domain is ON                                                       |
| 1-0   | PowerStateSt    | R      | 3h      | Current Power State Status 0x0 = OFF : OFF State [warm reset insensitive] 0x1 = RET : RET State 0x3 = ON : ON State [warm reset insensitive] |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.4.3 RM\_MPU\_RSTST Register (offset = 8h) [reset = 0h]

RM\_MPU\_RSTST is shown in Figure 8-180 and described in Table 8-194.

This register logs the different reset sources of the ALWON domain. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive]

| Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   | Figure 8-180. RM_MPU_RSTST Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | ICECRUSHER _MPU_RST                   | EMULATION_ MPU_RST                    | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R/W-0h                                | R/W-0h                                | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-194. RM\_MPU\_RSTST Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                  |
|-------|---------------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-15 | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |
| 14-8  | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |
| 7     | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |
| 6     | ICECRUSHER_MPU_RS T | R/W    | 0h      | MPU Processor has been reset due to MPU ICECRUSHER1 reset event 0x0 = RESET_NO : No icecrusher reset 0x1 = RESET_YES : MPU Processor has been reset upon icecursher reset                                                    |
| 5     | EMULATION_MPU_RST   | R/W    | 0h      | MPU Processor has been reset due to emulation reset source e.g. assert reset command initiated by the icepick module 0x0 = RESET_NO : No emulation reset 0x1 = RESET_YES : MPU Processor has been reset upon emulation reset |
| 4     | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |
| 3     | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |
| 2     | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |
| 1-0   | Reserved            | R      | 0h      |                                                                                                                                                                                                                              |

## 8.1.13.5 PRM\_DEVICE Registers

Table 8-195 lists the memory-mapped registers for the PRM\_DEVICE. All register offset addresses not listed in Table 8-195 should be considered as reserved locations and the register contents should not be modified.

## Table 8-195. PRM\_DEVICE Registers

| Offset   | Acronym     | Register Name   | Section            |
|----------|-------------|-----------------|--------------------|
| 0h       | PRM_RSTCTRL |                 | Section 8.1.13.5.1 |
| 4h       | PRM_RSTTIME |                 | Section 8.1.13.5.2 |
| 8h       | PRM_RSTST   |                 | Section 8.1.13.5.3 |

1427 Power, Reset, and Clock Management (PRCM)

Table 8-195. PRM\_DEVICE Registers (continued)

| Offset   | Acronym                 | Section            |
|----------|-------------------------|--------------------|
| Ch       | PRM_SRAM_COUNT          | Section 8.1.13.5.4 |
| 10h      | PRM_LDO_SRAM_CORE_SETUP | Section 8.1.13.5.5 |
| 14h      | PRM_LDO_SRAM_CORE_CTRL  | Section 8.1.13.5.6 |
| 18h      | PRM_LDO_SRAM_MPU_SETUP  | Section 8.1.13.5.7 |
| 1Ch      | PRM_LDO_SRAM_MPU_CTRL   | Section 8.1.13.5.8 |

<!-- image -->

<!-- image -->

## 8.1.13.5.1 PRM\_RSTCTRL Register (offset = 0h) [reset = 0h]

Register mask: FFFFFFFFh

PRM\_RSTCTRL is shown in Figure 8-181 and described in Table 8-196.

Global software cold and warm reset control. This register is auto-cleared. Only write 1 is possible. A read returns 0 only.

Figure 8-181. PRM\_RSTCTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25                  | 24                  |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------------|---------------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       |
| 23            | 22            | 21            | 20            | 19            | 18            | 17                  | 16                  |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       |
| 15            | 14            | 13            | 12            | 11            | 10            | 9                   | 8                   |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h       |
| 7             | 6             | 5             | 4             | 3             | 2             | 1                   | 0                   |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RST_GLOBAL_ COLD_SW | RST_GLOBAL_ WARM_SW |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s/W- 0h    | Rreturns0s/W- 0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-196. PRM\_RSTCTRL Register Field Descriptions

| Bit   | Field               | Type          | Reset   | Description                                                                                                                                                                                                                                                                                                          |
|-------|---------------------|---------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-2  | RESERVED            | Rreturns0s    | 0h      |                                                                                                                                                                                                                                                                                                                      |
| 1     | RST_GLOBAL_COLD_S W | Rreturns0s/ W | 0h      | Global COLD software reset control. This bit is reset only upon a global cold source of reset. Read returns 0. 0h = 0x0 : Global COLD software reset is cleared. 1h = 0x1 : Asserts a global COLD software reset. The software must ensure the SDRAM is properly put in sef-refresh mode before applying this reset. |
| 0     | RST_GLOBAL_WARM_S W | Rreturns0s/ W | 0h      | Global WARM software reset control. This bit is reset upon any global source of reset (warm and cold). Read returns 0. 0h = 0x0 : Global warm software reset is cleared. 1h = 0x1 : Asserts a global warm software reset.                                                                                            |

## 8.1.13.5.2 PRM\_RSTTIME Register (offset = 4h) [reset = 1006h]

Register mask: FFFFFFFFh

PRM\_RSTTIME is shown in Figure 8-182 and described in Table 8-197.

Reset duration control. [warm reset insensitive]

## Figure 8-182. PRM\_RSTTIME Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25            | 24            | 23            | 22            | 21            | 20            | 19            | 18            | 17            | 16            |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h |
| 15            | 14            | 13            | 12            | 11            | 10            | 9             | 8             | 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
| RESERVED      | RESERVED      | RESERVED      | RSTTIME2      | RSTTIME2      | RSTTIME2      | RSTTIME2      | RSTTIME2      | RSTTIME1      | RSTTIME1      | RSTTIME1      | RSTTIME1      | RSTTIME1      | RSTTIME1      | RSTTIME1      | RSTTIME1      |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W-10h       | R/W-10h       | R/W-10h       | R/W-10h       | R/W-10h       | R/W-6h        | R/W-6h        | R/W-6h        | R/W-6h        | R/W-6h        | R/W-6h        | R/W-6h        | R/W-6h        |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-197. PRM\_RSTTIME Register Field Descriptions

| Bit   | Field    | Type       | Reset   | Description                                                        |
|-------|----------|------------|---------|--------------------------------------------------------------------|
| 31-13 | RESERVED | Rreturns0s | 0h      |                                                                    |
| 12-8  | RSTTIME2 | R/W        | 10h     | (Power domain) reset duration 2 (number of CLK_M_OSC clock cycles) |
| 7-0   | RSTTIME1 | R/W        | 6h      | (Global) reset duration 1 (number of CLK_M_OSC clock cycles)       |

<!-- image -->

<!-- image -->

## 8.1.13.5.3 PRM\_RSTST Register (offset = 8h) [reset = 1h]

Register mask: FFFFFFFFh

PRM\_RSTST is shown in Figure 8-183 and described in Table 8-198.

This register logs the global reset sources. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive]

Figure 8-183. PRM\_RSTST Register

| 31            | 30            | 29                 | 28            | 27            | 26            | 25                  | 24               |
|---------------|---------------|--------------------|---------------|---------------|---------------|---------------------|------------------|
| RESERVED      | RESERVED      | RESERVED           | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED         |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h      | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h    |
| 23            | 22            | 21                 | 20            | 19            | 18            | 17                  | 16               |
| RESERVED      | RESERVED      | RESERVED           | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED         |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h      | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h    |
| 15            | 14            | 13                 | 12            | 11            | 10            | 9                   | 8                |
| RESERVED      | RESERVED      | RESERVED           | RESERVED      | RESERVED      | RESERVED      | ICEPICK_RST         | RESERVED         |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h      | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R/W1toClr-0h        | Rreturns0s-0h    |
| 7             | 6             | 5                  | 4             | 3             | 2             | 1                   | 0                |
| RESERVED      | RESERVED      | EXTERNAL_W ARM_RST | WDT1_RST      | RESERVED      | RESERVED      | GLOBAL_WAR M_SW_RST | GLOBAL_COL D_RST |
| Rreturns0s-0h | Rreturns0s-0h | R/W1toClr-0h       | R/W1toClr-0h  | R/W1toClr-0h  | R/W1toClr-0h  | R/W1toClr-0h        | R/W1toClr-1h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-198. PRM\_RSTST Register Field Descriptions

| Bit   | Field               | Type       | Reset   | Description                                                                                                                                                                         |
|-------|---------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED            | Rreturns0s | 0h      |                                                                                                                                                                                     |
| 9     | ICEPICK_RST         | R/W1toClr  | 0h      | IcePick reset event. This is a source of global warm reset initiated by the emulation. [warm reset insensitive] 0h = 0x0 : No ICEPICK reset. 1h = 0x1 : IcePick reset has occurred. |
| 8-6   | RESERVED            | Rreturns0s | 0h      |                                                                                                                                                                                     |
| 5     | EXTERNAL_WARM_RST   | R/W1toClr  | 0h      | External warm reset event [warm reset insensitive] 0h = 0x0 : No global warm reset. 1h = 0x1 : Global external warm reset has occurred.                                             |
| 4     | WDT1_RST            | R/W1toClr  | 0h      | Watchdog1 timer reset event. This is a source of global WARM reset. [warm reset insensitive] 0h = 0x0 : No watchdog reset. 1h = 0x1 : watchdog reset has occurred.                  |
| 3     | RESERVED            | R/W1toClr  | 0h      | Reserved.                                                                                                                                                                           |
| 2     | RESERVED            | R/W1toClr  | 0h      | Reserved.                                                                                                                                                                           |
| 1     | GLOBAL_WARM_SW_RS T | R/W1toClr  | 0h      | Global warm software reset event [warm reset insensitive] 0h = 0x0 : No global warm SW reset 1h = 0x1 : Global warm SW reset has occurred.                                          |
| 0     | GLOBAL_COLD_RST     | R/W1toClr  | 1h      | Power-on (cold) reset event [warm reset insensitive] 0h = 0x0 : No power-on reset. 1h = 0x1 : Power-on reset has occurred.                                                          |

## 8.1.13.5.4 PRM\_SRAM\_COUNT Register (offset = Ch) [reset = 78000017h]

Register mask: FFFFFFFFh

PRM\_SRAM\_COUNT is shown in Figure 8-184 and described in Table 8-199.

Common setup for SRAM LDO transition counters. Applies to all voltage domains. [warm reset insensitive]

## Figure 8-184. PRM\_SRAM\_COUNT Register

| 31                        | 30                        | 29                        | 28                        | 27                        | 26                        | 25                        | 24                        |
|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|---------------------------|
| StartUp_Count             | StartUp_Count             | StartUp_Count             | StartUp_Count             | StartUp_Count             | StartUp_Count             | StartUp_Count             | StartUp_Count             |
| R/W-78h                   | R/W-78h                   | R/W-78h                   | R/W-78h                   | R/W-78h                   | R/W-78h                   | R/W-78h                   | R/W-78h                   |
| 23                        | 22                        | 21                        | 20                        | 19                        | 18                        | 17                        | 16                        |
| SLPCNT_VALUE              | SLPCNT_VALUE              | SLPCNT_VALUE              | SLPCNT_VALUE              | SLPCNT_VALUE              | SLPCNT_VALUE              | SLPCNT_VALUE              | SLPCNT_VALUE              |
| R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    |
| 15                        | 14                        | 13                        | 12                        | 11                        | 10                        | 9                         | 8                         |
| VSETUPCNT_VALUE           | VSETUPCNT_VALUE           | VSETUPCNT_VALUE           | VSETUPCNT_VALUE           | VSETUPCNT_VALUE           | VSETUPCNT_VALUE           | VSETUPCNT_VALUE           | VSETUPCNT_VALUE           |
| R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    | R/W-0h                    |
| 7                         | 6                         | 5                         | 4                         | 3                         | 2                         | 1                         | 0                         |
| RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE | RESERVED PCHARGECNT_VALUE |
| Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     | Rreturns0s-0h R/W-17h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-199. PRM\_SRAM\_COUNT Register Field Descriptions

| Bit   | Field            | Type       | Reset   | Description                                                                                                                                   |
|-------|------------------|------------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------|
| 31-24 | StartUp_Count    | R/W        | 78h     | Determines the start-up duration of SRAM and ABB LDO. The duration is computed as 16 x NbCycles of system clock cycles. Target is 50us.       |
| 23-16 | SLPCNT_VALUE     | R/W        | 0h      | Delay between retention/off assertion of last SRAM bank and SRAMALLRET signal to LDO is driven high. Counting on system clock. Target is 2us. |
| 15-8  | VSETUPCNT_VALUE  | R/W        | 0h      | SRAM LDO rampup time from retention to active mode. The duration is computed as 8 x NbCycles of system clock cycles. Target is 30us.          |
| 7-6   | RESERVED         | Rreturns0s | 0h      |                                                                                                                                               |
| 5-0   | PCHARGECNT_VALUE | R/W        | 17h     | Delay between de-assertion of standby_rta_ret_on and standby_rta_ret_good. Counting on system clock. Target is 600ns.                         |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.5.5 PRM\_LDO\_SRAM\_CORE\_SETUP Register (offset = 10h) [reset = 0h]

Register mask: FFFFFFFFh

PRM\_LDO\_SRAM\_CORE\_SETUP is shown in Figure 8-185 and described in Table 8-200.

Setup of the SRAM LDO for CORE voltage domain. [warm reset insensitive]

## Figure 8-185. PRM\_LDO\_SRAM\_CORE\_SETUP Register

| 31            | 30            | 29              | 28              | 27              | 26                   | 25                 | 24                  |
|---------------|---------------|-----------------|-----------------|-----------------|----------------------|--------------------|---------------------|
| RESERVED      | RESERVED      | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED           | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h      | Rreturns0s-0h       |
| 23            | 22            | 21              | 20              | 19              | 18                   | 17                 | 16                  |
| RESERVED      | RESERVED      | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED           | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h      | Rreturns0s-0h       |
| 15            | 14            | 13              | 12              | 11              | 10                   | 9                  | 8                   |
| RESERVED      | RESERVED      | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED           | AIPOFF              |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h      | R/W-0h              |
| 7             | 6             | 5               | 4               | 3               | 2                    | 1                  | 0                   |
| ENFUNC5       | ENFUNC4       | ENFUNC3_EX PORT | ENFUNC2_EX PORT | ENFUNC1_EX PORT | ABBOFF_SLEE P_EXPORT | ABBOFF_ACT_ EXPORT | DISABLE_RTA _EXPORT |
| R/W-0h        | R/W-0h        | R/WSpecial-0h   | R/WSpecial-0h   | R/WSpecial-0h   | R/WSpecial-0h        | R/WSpecial-0h      | R/WSpecial-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-200. PRM\_LDO\_SRAM\_CORE\_SETUP Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                          |
|-------|----------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                      |
| 8     | AIPOFF         | R/W        | 0h      | Override on AIPOFF input of SRAM LDO. 0h = No_Override : AIPOFF signal is not overriden 1h = Override : AIPOFF signal is overriden to '1'. Corresponding SRAM LDO is disabled and in HZ mode.                                                                                                                        |
| 7     | ENFUNC5        | R/W        | 0h      | ENFUNC5 input of SRAM LDO. 0h = One_step : Active to retention is a one step transfer 1h = Two_step : Active to retention is a two steps transfer                                                                                                                                                                    |
| 6     | ENFUNC4        | R/W        | 0h      | ENFUNC4 input of SRAM LDO. 0h = Ext_clock : One external clock is supplied 1h = No_ext_clock : No external clock is supplied                                                                                                                                                                                         |
| 5     | ENFUNC3_EXPORT | R/WSpecial | 0h      | ENFUNC3 input of SRAM LDO. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = Sub_regul_disabled : Sub regulation is disabled 1h = Sub_regul_enabled : Sub regulation is enabled                       |
| 4     | ENFUNC2_EXPORT | R/WSpecial | 0h      | ENFUNC2 input of SRAM LDO. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = Ext_cap : External cap is used 1h = No_ext_cap : External cap is not used                                                |
| 3     | ENFUNC1_EXPORT | R/WSpecial | 0h      | ENFUNC1 input of SRAM LDO. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = Short_prot_disabled : Short circuit protection is disabled 1h = Short_prot_enabled : Short circuit protection is enabled |

<!-- image -->

## Table 8-200. PRM\_LDO\_SRAM\_CORE\_SETUP Register Field Descriptions (continued)

|   Bit | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                     |
|-------|----------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | ABBOFF_SLEEP_EXPOR T | R/WSpecial | 0h      | Determines whether SRAMNWA is supplied by VDDS or VDDAR during deep-sleep. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = SRAMNW_SLP_VDDS : SRAMNWA supplied with VDDS 1h(Read) = SRAMNW_SLP_VDDASRAMNWA supplied with VDDAR  |
|     1 | ABBOFF_ACT_EXPORT    | R/WSpecial | 0h      | Determines whether SRAMNWA is supplied by VDDS or VDDAR during active mode. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = SRAMNW_ACT_VDDS : SRAMNWA supplied with VDDS 1h(Read) = SRAMNW_ACT_VDDASRAMNWA supplied with VDDAR |
|     0 | DISABLE_RTA_EXPORT   | R/WSpecial | 0h      | Control for HD memory RTA feature. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = RTA_ENABLED : HD memory RTA feature is enabled 1h = RTA_DISABLED : HD memory RTA feature is disabled                                        |

<!-- image -->

## 8.1.13.5.6 PRM\_LDO\_SRAM\_CORE\_CTRL Register (offset = 14h) [reset = 0h]

Register mask: FFFFFFFFh

PRM\_LDO\_SRAM\_CORE\_CTRL is shown in Figure 8-186 and described in Table 8-201.

Control and status of the SRAM LDO for CORE voltage domain. [warm reset insensitive]

Figure 8-186. PRM\_LDO\_SRAM\_CORE\_CTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25                  | 24              |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------------|-----------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h   |
| 23            | 22            | 21            | 20            | 19            | 18            | 17                  | 16              |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h   |
| 15            | 14            | 13            | 12            | 11            | 10            | 9                   | 8               |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | SRAM_IN_TRA NSITION | SRAMLDO_ST ATUS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h                | R-0h            |
| 7             | 6             | 5             | 4             | 3             | 2             | 1                   | 0               |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RETMODE_EN ABLE |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-201. PRM\_LDO\_SRAM\_CORE\_CTRL Register Field Descriptions

| Bit   | Field              | Type       | Reset   | Description                                                                                                                                                                                              |
|-------|--------------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED           | Rreturns0s | 0h      |                                                                                                                                                                                                          |
| 9     | SRAM_IN_TRANSITION | R          | 0h      | Status indicating SRAM LDO state machine state. 0h = IDLE : SRAM LDO state machine is stable 1h = IN_TRANSITION : SRAM LDO state machine is in transition state                                          |
| 8     | SRAMLDO_STATUS     | R          | 0h      | SRAMLDO status 0h = ACTIVE : SRAMLDO is in ACTIVE mode. 1h = RETENTION : SRAMLDO is on RETENTION mode.                                                                                                   |
| 7-1   | RESERVED           | Rreturns0s | 0h      |                                                                                                                                                                                                          |
| 0     | RETMODE_ENABLE     | R/W        | 0h      | Control if the SRAM LDO retention mode is used or not. 0h = Disabled : SRAM LDO is not allowed to go to RET mode 1h = Enabled : SRAM LDO go to RET mode when all memory of voltage domain are OFF or RET |

<!-- image -->

## 8.1.13.5.7 PRM\_LDO\_SRAM\_MPU\_SETUP Register (offset = 18h) [reset = 0h]

Register mask: FFFFFFFFh

PRM\_LDO\_SRAM\_MPU\_SETUP is shown in Figure 8-187 and described in Table 8-202.

Setup of the SRAM LDO for MPU voltage domain. [warm reset insensitive]

Figure 8-187. PRM\_LDO\_SRAM\_MPU\_SETUP Register

| 31            | 30            | 29              | 28              | 27              | 26                   | 25                 | 24                  |
|---------------|---------------|-----------------|-----------------|-----------------|----------------------|--------------------|---------------------|
| RESERVED      | RESERVED      | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED           | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h      | Rreturns0s-0h       |
| 23            | 22            | 21              | 20              | 19              | 18                   | 17                 | 16                  |
| RESERVED      | RESERVED      | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED           | RESERVED            |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h      | Rreturns0s-0h       |
| 15            | 14            | 13              | 12              | 11              | 10                   | 9                  | 8                   |
| RESERVED      | RESERVED      | RESERVED        | RESERVED        | RESERVED        | RESERVED             | RESERVED           | AIPOFF              |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h   | Rreturns0s-0h        | Rreturns0s-0h      | R/W-0h              |
| 7             | 6             | 5               | 4               | 3               | 2                    | 1                  | 0                   |
| ENFUNC5       | ENFUNC4       | ENFUNC3_EX PORT | ENFUNC2_EX PORT | ENFUNC1_EX PORT | ABBOFF_SLEE P_EXPORT | ABBOFF_ACT_ EXPORT | DISABLE_RTA _EXPORT |
| R/W-0h        | R/W-0h        | R/WSpecial-0h   | R/WSpecial-0h   | R/WSpecial-0h   | R/WSpecial-0h        | R/WSpecial-0h      | R/WSpecial-0h       |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-202. PRM\_LDO\_SRAM\_MPU\_SETUP Register Field Descriptions

| Bit   | Field          | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                          |
|-------|----------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-9  | RESERVED       | Rreturns0s | 0h      |                                                                                                                                                                                                                                                                                                                      |
| 8     | AIPOFF         | R/W        | 0h      | Override on AIPOFF input of SRAM LDO. 0h = No_Override : AIPOFF signal is not overriden 1h = Override : AIPOFF signal is overriden to '1'. Corresponding SRAM LDO is disabled and in HZ mode.                                                                                                                        |
| 7     | ENFUNC5        | R/W        | 0h      | ENFUNC5 input of SRAM LDO. 0h = One_step : Active to retention is a one step transfer 1h = Two_step : Active to retention is a two steps transfer                                                                                                                                                                    |
| 6     | ENFUNC4        | R/W        | 0h      | ENFUNC4 input of SRAM LDO. 0h = Ext_clock : One external clock is supplied 1h = No_ext_clock : No external clock is supplied                                                                                                                                                                                         |
| 5     | ENFUNC3_EXPORT | R/WSpecial | 0h      | ENFUNC3 input of SRAM LDO. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = Sub_regul_disabled : Sub regulation is disabled 1h = Sub_regul_enabled : Sub regulation is enabled                       |
| 4     | ENFUNC2_EXPORT | R/WSpecial | 0h      | ENFUNC2 input of SRAM LDO. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = Ext_cap : External cap is used 1h = No_ext_cap : External cap is not used                                                |
| 3     | ENFUNC1_EXPORT | R/WSpecial | 0h      | ENFUNC1 input of SRAM LDO. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = Short_prot_disabled : Short circuit protection is disabled 1h = Short_prot_enabled : Short circuit protection is enabled |

<!-- image -->

www.ti.com

## Table 8-202. PRM\_LDO\_SRAM\_MPU\_SETUP Register Field Descriptions (continued)

|   Bit | Field                | Type       | Reset   | Description                                                                                                                                                                                                                                                                                                                                     |
|-------|----------------------|------------|---------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|     2 | ABBOFF_SLEEP_EXPOR T | R/WSpecial | 0h      | Determines whether SRAMNWA is supplied by VDDS or VDDAR during deep-sleep. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = SRAMNW_SLP_VDDS : SRAMNWA supplied with VDDS 1h(Read) = SRAMNW_SLP_VDDASRAMNWA supplied with VDDAR  |
|     1 | ABBOFF_ACT_EXPORT    | R/WSpecial | 0h      | Determines whether SRAMNWA is supplied by VDDS or VDDAR during active mode. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = SRAMNW_ACT_VDDS : SRAMNWA supplied with VDDS 1h(Read) = SRAMNW_ACT_VDDASRAMNWA supplied with VDDAR |
|     0 | DISABLE_RTA_EXPORT   | R/WSpecial | 0h      | Control for HD memory RTA feature. After PowerOn reset and Efuse sensing, this bitfield is automatically loaded with an Efuse value from control module. Bitfield remains writable after this. 0h = RTA_ENABLED : HD memory RTA feature is enabled 1h = RTA_DISABLED : HD memory RTA feature is disabled                                        |

<!-- image -->

## 8.1.13.5.8 PRM\_LDO\_SRAM\_MPU\_CTRL Register (offset = 1Ch) [reset = 0h]

Register mask: FFFFFFFFh

PRM\_LDO\_SRAM\_MPU\_CTRL is shown in Figure 8-188 and described in Table 8-203.

Control and status of the SRAM LDO for MPU voltage domain. [warm reset insensitive]

Figure 8-188. PRM\_LDO\_SRAM\_MPU\_CTRL Register

| 31            | 30            | 29            | 28            | 27            | 26            | 25                  | 24              |
|---------------|---------------|---------------|---------------|---------------|---------------|---------------------|-----------------|
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h   |
| 23            | 22            | 21            | 20            | 19            | 18            | 17                  | 16              |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RESERVED        |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | Rreturns0s-0h   |
| 15            | 14            | 13            | 12            | 11            | 10            | 9                   | 8               |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | SRAM_IN_TRA NSITION | SRAMLDO_ST ATUS |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | R-0h                | R-0h            |
| 7             | 6             | 5             | 4             | 3             | 2             | 1                   | 0               |
| RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED      | RESERVED            | RETMODE_EN ABLE |
| Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h | Rreturns0s-0h       | R/W-0h          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-203. PRM\_LDO\_SRAM\_MPU\_CTRL Register Field Descriptions

| Bit   | Field              | Type       | Reset   | Description                                                                                                                                                                                              |
|-------|--------------------|------------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-10 | RESERVED           | Rreturns0s | 0h      |                                                                                                                                                                                                          |
| 9     | SRAM_IN_TRANSITION | R          | 0h      | Status indicating SRAM LDO state machine state. 0h = IDLE : SRAM LDO state machine is stable 1h = IN_TRANSITION : SRAM LDO state machine is in transition state                                          |
| 8     | SRAMLDO_STATUS     | R          | 0h      | SRAMLDO status 0h = ACTIVE : SRAMLDO is in ACTIVE mode. 1h = RETENTION : SRAMLDO is on RETENTION mode.                                                                                                   |
| 7-1   | RESERVED           | Rreturns0s | 0h      |                                                                                                                                                                                                          |
| 0     | RETMODE_ENABLE     | R/W        | 0h      | Control if the SRAM LDO retention mode is used or not. 0h = Disabled : SRAM LDO is not allowed to go to RET mode 1h = Enabled : SRAM LDO go to RET mode when all memory of voltage domain are OFF or RET |

## 8.1.13.6 PRM\_RTC Registers

Table 8-204 lists the memory-mapped registers for the PRM\_RTC. All register offset addresses not listed in Table 8-204 should be considered as reserved locations and the register contents should not be modified.

## Table 8-204. PRM\_RTC REGISTERS

| Offset   | Acronym          | Register Name                                                                                    | Section            |
|----------|------------------|--------------------------------------------------------------------------------------------------|--------------------|
| 0h       | PM_RTC_PWRSTCTRL | This register controls the RTC power state to reach upon mpu domain sleep transition             | Section 8.1.13.6.1 |
| 4h       | PM_RTC_PWRSTST   | This register provides a status on the current RTC power domain state0. [warm reset insensitive] | Section 8.1.13.6.2 |

<!-- image -->

www.ti.com

## 8.1.13.6.1 PM\_RTC\_PWRSTCTRL Register (offset = 0h) [reset = 4h]

PM\_RTC\_PWRSTCTRL is shown in Figure 8-189 and described in Table 8-205.

This register controls the RTC power state to reach upon mpu domain sleep transition

## Figure 8-189. PM\_RTC\_PWRSTCTRL Register

| 31          | 30          | 29          | 28                   | 27       | 26            | 25       | 24       | 24       | 24       |
|-------------|-------------|-------------|----------------------|----------|---------------|----------|----------|----------|----------|
|             | Reserved    | Reserved    | Reserved             | Reserved | Reserved      | Reserved | Reserved | Reserved | Reserved |
|             |             |             |                      |          |               | R-0h     | R-0h     | R-0h     | R-0h     |
| 23          | 22          | 21          | 20                   | 19       | 18            | 17       | 16       | 16       | 16       |
| Reserved    | Reserved    | Reserved    | Reserved             | Reserved | Reserved      | Reserved | Reserved | Reserved | Reserved |
| R-0h        | R-0h        | R-0h        | R-0h                 | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     | R-0h     |
| 15          | 14          | 13          | 12                   | 11       | 10            | 9        | 8        | 8        | 8        |
| Reserved    | Reserved    | Reserved    | Reserved             | Reserved | Reserved      | Reserved | Reserved | Reserved | Reserved |
| R-0h        | R-0h        | R-0h        | R-0h                 | R-0h     | R-0h          | R-0h     | R-0h     | R-0h     | R-0h     |
| 7           | 6           | 5           | 4                    | 3        | 2             | 1        | 0        | 0        | 0        |
| Reserved    | Reserved    | Reserved    | LowPowerState Change |          | LogicRETState | Reserved | Reserved | Reserved | Reserved |
| R/W-0h R-0h | R/W-0h R-0h | R/W-0h R-0h |                      |          | R/W-1h        | R-0h     | R-0h     | R-0h     | R-0h     |
|             | R-0h        |             |                      |          |               |          |          |          |          |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-205. PM\_RTC\_PWRSTCTRL Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 25-16 | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 15-5  | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 4     | LowPowerStateChange | R/W    | 0h      | Power state change request when domain has already performed a sleep transition. Allows going into deeper low power state without waking up the power domain. 0x0 = DIS : Do not request a low power state change. 0x1 = EN : Request a low power state change. This bit is automatically cleared when the power state is effectively changed or when power state is ON. |
| 3     | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 2     | LogicRETState       | R/W    | 1h      | Logic state when power domain is RETENTION 0x0 = logic_off : Only retention registers are retained and remaing logic is off when the domain is in RETENTION state. 0x1 = logic_ret : Whole logic is retained when domain is in RETENTION state.                                                                                                                          |
| 1-0   | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |

## 8.1.13.6.2 PM\_RTC\_PWRSTST Register (offset = 4h) [reset = 4h]

PM\_RTC\_PWRSTST is shown in Figure 8-190 and described in Table 8-206.

This register provides a status on the current RTC power domain state0. [warm reset insensitive]

| Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   | Figure 8-190. PM_RTC_PWRSTST Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 31 24                                   | Reserved                                |
| 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      |
| 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      |
| 20 R-0h 13                              | 19 R-0h                                 | 18                                      | 17 R-0h                                 | 16                                      | Reserved InTransition Reserved          | 23 15                                   | 14                                      |
| 12                                      | 11                                      | 10                                      | 9                                       | 8 Reserved                              | R-0h R-0h                               | 7                                       | Reserved 6                              |
| 5                                       | 5                                       | 5                                       | 5                                       | 5                                       | 5                                       | 5                                       | 5                                       |
| 4                                       | 3                                       | 2                                       | 1 LogicStateSt                          | 0 Reserved                              | Reserved                                | Reserved                                | R-0h                                    |
| R-1h                                    | R-1h                                    | R-1h                                    | R-1h                                    | R-0h                                    |                                         |                                         |                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-206. PM\_RTC\_PWRSTST Register Field Descriptions

| Bit   | Field        | Type   | Reset   | Description                                                                                                                        |
|-------|--------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | Reserved     | R      | 0h      |                                                                                                                                    |
| 20    | InTransition | R      | 0h      | Domain transition status 0x0 = No : No on-going transition on power domain 0x1 = Ongoing : Power domain transition is in progress. |
| 19-10 | Reserved     | R      | 0h      |                                                                                                                                    |
| 9-4   | Reserved     | R      | 0h      |                                                                                                                                    |
| 3     | Reserved     | R      | 0h      |                                                                                                                                    |
| 2     | LogicStateSt | R      | 1h      | Logic state status 0x0 = OFF : Logic in domain is OFF 0x1 = ON : Logic in domain is ON                                             |
| 1-0   | Reserved     | R      | 0h      |                                                                                                                                    |

## 8.1.13.7 PRM\_GFX Registers

Table 8-207 lists the memory-mapped registers for the PRM\_GFX. All register offset addresses not listed in Table 8-207 should be considered as reserved locations and the register contents should not be modified.

## Table 8-207. PRM\_GFX REGISTERS

| Offset   | Acronym          | Register Name                                                                                   | Section            |
|----------|------------------|-------------------------------------------------------------------------------------------------|--------------------|
| 0h       | PM_GFX_PWRSTCTRL | This register controls the GFX power state to reach upon a domain sleep transition.             | Section 8.1.13.7.1 |
| 4h       | RM_GFX_RSTCTRL   | This register controls the release of the GFX Domain resets.                                    | Section 8.1.13.7.2 |
| 10h      | PM_GFX_PWRSTST   | This register provides a status on the current GFX power domain state. [warm reset insensitive] | Section 8.1.13.7.3 |

<!-- image -->

<!-- image -->

## Table 8-207. PRM\_GFX REGISTERS (continued)

| Offset   | Acronym      | Register Name                                                                                                                                                                    | Section            |
|----------|--------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| 14h      | RM_GFX_RSTST | This register logs the different reset sources of the GFX domain. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive] | Section 8.1.13.7.4 |

## 8.1.13.7.1 PM\_GFX\_PWRSTCTRL Register (offset = 0h) [reset = 60044h]

PM\_GFX\_PWRSTCTRL is shown in Figure 8-191 and described in Table 8-208.

This register controls the GFX power state to reach upon a domain sleep transition.

| Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   | Figure 8-191. PM_GFX_PWRSTCTRL Register   |
|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|-------------------------------------------|
| 31                                        | 30                                        | 29                                        | 28                                        | 27                                        | 26                                        | 25                                        | 24                                        |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 23                                        | 22                                        | 21                                        | 20                                        | 19                                        | 18                                        | 17                                        | 16                                        |
|                                           |                                           | Reserved                                  |                                           |                                           | GFX_MEM_ONState                           | GFX_MEM_ONState                           | Reserved                                  |
|                                           |                                           | R-0h                                      |                                           |                                           | R-3h                                      | R-3h                                      | R-0h                                      |
| 15                                        | 14                                        | 13                                        | 12                                        | 11                                        | 10                                        | 9                                         | 8                                         |
| Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  | Reserved                                  |
| R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      | R-0h                                      |
| 7                                         | 6                                         | 5                                         | 4                                         | 3                                         | 2                                         | 1                                         | 0                                         |
| Reserved                                  | GFX_MEM_RE TState                         | Reserved                                  | LowPowerState Change                      | Reserved                                  | LogicRETState                             | PowerState                                | PowerState                                |
| R-0h                                      | R/W-1h                                    | R-0h                                      | R/W-0h                                    | R-0h                                      | R/W-1h                                    | R/W-0h                                    | R/W-0h                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-208. PM\_GFX\_PWRSTCTRL Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-19 | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 18-17 | GFX_MEM_ONState     | R      | 3h      | GFX memory state when domain is ON.                                                                                                                                                                                                                                                                                                                                      |
| 16-7  | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 6     | GFX_MEM_RETState    | R/W    | 1h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 5     | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 4     | LowPowerStateChange | R/W    | 0h      | Power state change request when domain has already performed a sleep transition. Allows going into deeper low power state without waking up the power domain. 0x0 = DIS : Do not request a low power state change. 0x1 = EN : Request a low power state change. This bit is automatically cleared when the power state is effectively changed or when power state is ON. |
| 3     | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 2     | LogicRETState       | R/W    | 1h      | Logic state when power domain is RETENTION 0x0 = logic_off : Only retention registers are retained and remaing logic is off when the domain is in RETENTION state. 0x1 = logic_ret : Whole logic is retained when domain is in RETENTION state.                                                                                                                          |
| 1-0   | PowerState          | R/W    | 0h      | Power state control 0x0 = OFF : OFF State 0x1 = RET 0x2 = reserved_1 0x3 = ON : ON State                                                                                                                                                                                                                                                                                 |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.7.2 RM\_GFX\_RSTCTRL Register (offset = 4h) [reset = 1h]

RM\_GFX\_RSTCTRL is shown in Figure 8-192 and described in Table 8-209. This register controls the release of the GFX Domain resets.

|   Figure 8-192. RM_GFX_RSTCTRL Register | Figure 8-192. RM_GFX_RSTCTRL Register   | Figure 8-192. RM_GFX_RSTCTRL Register   | Figure 8-192. RM_GFX_RSTCTRL Register   | Figure 8-192. RM_GFX_RSTCTRL Register   | Figure 8-192. RM_GFX_RSTCTRL Register   | Figure 8-192. RM_GFX_RSTCTRL Register   | Figure 8-192. RM_GFX_RSTCTRL Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
|                                      30 | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      | Reserved                                |
|                                      22 | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      | 22                                      |
|                                      21 | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      | 21                                      |
|                                      20 | 19 R-0h                                 | 18                                      | 17                                      | 16                                      | Reserved                                | 14                                      | 13                                      |
|                                      12 | 12                                      | 12                                      | 12                                      | 12                                      | 12                                      | 12                                      | 12                                      |
|                                      11 | 11                                      | 11                                      | 11                                      | 11                                      | 11                                      | 11                                      | 11                                      |
|                                      10 | 9 R-0h                                  | 8                                       | Reserved                                | 6                                       | 5                                       | 4                                       | 3                                       |
|                                       2 | 2                                       | 2                                       | 2                                       | 2                                       | 2                                       | 2                                       | 2                                       |
|                                       1 | 1                                       | 1                                       | 1                                       | 1                                       | 1                                       | 1                                       | 1                                       |
|                                       0 | Reserved Reserved                       | Reserved GFX_RST                        | R-0h R-0h                               | R-0h                                    | R/W-1h                                  |                                         |                                         |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-209. RM\_GFX\_RSTCTRL Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                                             |
|-------|----------|--------|---------|---------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-4  | Reserved | R      | 0h      |                                                                                                                                                         |
| 3-2   | Reserved | R      | 0h      |                                                                                                                                                         |
| 1     | Reserved | R      | 0h      |                                                                                                                                                         |
| 0     | GFX_RST  | R/W    | 1h      | GFX domain local reset control 0x0 = CLEAR : Reset is cleared for the GFX Domain (SGX530) 0x1 = ASSERT : Reset is asserted for the GFX Domain (SGX 530) |

## 8.1.13.7.3 PM\_GFX\_PWRSTST Register (offset = 10h) [reset = 17h]

PM\_GFX\_PWRSTST is shown in Figure 8-193 and described in Table 8-210.

This register provides a status on the current GFX power domain state. [warm reset insensitive]

| Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   | Figure 8-193. PM_GFX_PWRSTST Register   |
|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|-----------------------------------------|
| 31                                      | 30                                      | 29                                      | 28                                      | 27                                      | 26                                      | 25                                      | 24                                      |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 23                                      | 22                                      | 21                                      | 20                                      | 19                                      | 18                                      | 17                                      | 16                                      |
|                                         | Reserved                                |                                         | InTransition                            |                                         | Reserved                                | Reserved                                |                                         |
|                                         | R-0h                                    |                                         | R-0h                                    |                                         | R-0h                                    | R-0h                                    |                                         |
| 15                                      | 14                                      | 13                                      | 12                                      | 11                                      | 10                                      | 9                                       | 8                                       |
| Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                | Reserved                                |
| R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    | R-0h                                    |
| 7                                       | 6                                       | 5                                       | 4                                       | 3                                       | 2                                       | 1                                       | 0                                       |
| Reserved                                | Reserved                                | GFX_MEM_StateSt                         | GFX_MEM_StateSt                         | Reserved                                | LogicStateSt                            | PowerStateSt                            | PowerStateSt                            |
| R-0h                                    | R-0h                                    | R-1h                                    | R-1h                                    | R-0h                                    | R-1h                                    | R-3h                                    | R-3h                                    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

Table 8-210. PM\_GFX\_PWRSTST Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                                                                                        |
|-------|-----------------|--------|---------|------------------------------------------------------------------------------------------------------------------------------------|
| 31-21 | Reserved        | R      | 0h      |                                                                                                                                    |
| 20    | InTransition    | R      | 0h      | Domain transition status 0x0 = No : No on-going transition on power domain 0x1 = Ongoing : Power domain transition is in progress. |
| 19-6  | Reserved        | R      | 0h      |                                                                                                                                    |
| 5-4   | GFX_MEM_StateSt | R      | 1h      | GFX memory state status 0x0 = Mem_off : Memory is OFF 0x2 = Reserved : Reserved 0x3 = Mem_on : Memory is ON                        |
| 3     | Reserved        | R      | 0h      |                                                                                                                                    |
| 2     | LogicStateSt    | R      | 1h      | Logic state status 0x0 = OFF : Logic in domain is OFF 0x1 = ON : Logic in domain is ON                                             |
| 1-0   | PowerStateSt    | R      | 3h      | Current Power State Status 0x0 = OFF : OFF State [warm reset insensitive] 0x1 = RET 0x3 = ON : ON State [warm reset insensitive]   |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.7.4 RM\_GFX\_RSTST Register (offset = 14h) [reset = 0h]

RM\_GFX\_RSTST is shown in Figure 8-194 and described in Table 8-211.

This register logs the different reset sources of the GFX domain. Each bit is set upon release of the domain reset signal. Must be cleared by software. [warm reset insensitive]

| Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   | Figure 8-194. RM_GFX_RSTST Register   |
|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|---------------------------------------|
| 31                                    | 30                                    | 29                                    | 28                                    | 27                                    | 26                                    | 25                                    | 24                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 23                                    | 22                                    | 21                                    | 20                                    | 19                                    | 18                                    | 17                                    | 16                                    |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |
| 15                                    | 14                                    | 13                                    | 12                                    | 11                                    | 10                                    | 9                                     | 8                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              |
| R-0h                                  | R-0h                                  | R-0h                                  | R-0h                                  |                                       | R-0h                                  | R-0h                                  | R-0h                                  |
| 7                                     | 6                                     | 5                                     | 4                                     | 3                                     | 2                                     | 1                                     | 0                                     |
| Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | Reserved                              | GFX_RST                               |

R-0h

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-211. RM\_GFX\_RSTST Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                                                                                                 |
|-------|----------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------|
| 31-12 | Reserved | R      | 0h      |                                                                                                                             |
| 11-2  | Reserved | R      | 0h      |                                                                                                                             |
| 1     | Reserved | R      | 0h      |                                                                                                                             |
| 0     | GFX_RST  | R/W    | 0h      | GFX Domain Logic Reset 0x0 = RESET_NO : No SW reset occured 0x1 = RESET_YES : GFX Domain Logic has been reset upon SW reset |

## 8.1.13.8 PRM\_CEFUSE Registers

Table 8-212 lists the memory-mapped registers for the PRM\_CEFUSE. All register offset addresses not listed in Table 8-212 should be considered as reserved locations and the register contents should not be modified.

## Table 8-212. PRM\_CEFUSE REGISTERS

| Offset   | Acronym             | Register Name                                                                                      | Section            |
|----------|---------------------|----------------------------------------------------------------------------------------------------|--------------------|
| 0h       | PM_CEFUSE_PWRSTCTRL | This register controls the CEFUSE power state to reach upon a domain sleep transition              | Section 8.1.13.8.1 |
| 4h       | PM_CEFUSE_PWRSTST   | This register provides a status on the current CEFUSE power domain state. [warm reset insensitive] | Section 8.1.13.8.2 |

R-0h

R/W-0h

## 8.1.13.8.1 PM\_CEFUSE\_PWRSTCTRL Register (offset = 0h) [reset = 0h]

PM\_CEFUSE\_PWRSTCTRL is shown in Figure 8-195 and described in Table 8-213.

This register controls the CEFUSE power state to reach upon a domain sleep transition

| Figure 8-195. PM_CEFUSE_PWRSTCTRL   | Register   | Register   | Register             | Register   | Register   | Register   | Register   |
|-------------------------------------|------------|------------|----------------------|------------|------------|------------|------------|
| 31                                  | 30         | 29         | 28                   | 27         | 26         | 25         | 24         |
| Reserved                            | Reserved   | Reserved   | Reserved             | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h                                | R-0h       | R-0h       | R-0h                 | R-0h       | R-0h       | R-0h       | R-0h       |
| 23                                  | 22         | 21         | 20                   | 19         | 18         | 17         | 16         |
| Reserved                            | Reserved   | Reserved   | Reserved             | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h                                | R-0h       | R-0h       | R-0h                 | R-0h       | R-0h       | R-0h       | R-0h       |
| 15                                  | 14         | 13         | 12                   | 11         | 10         | 9          | 8          |
| Reserved                            | Reserved   | Reserved   | Reserved             | Reserved   | Reserved   | Reserved   | Reserved   |
| R-0h                                | R-0h       | R-0h       | R-0h                 | R-0h       | R-0h       | R-0h       | R-0h       |
| 7                                   | 6          | 5          | 4                    | 3          | 2          | 1          | 0          |
| Reserved                            |            |            | LowPowerState Change | Reserved   | Reserved   | PowerState | PowerState |
|                                     | R-0h       |            | R/W-0h               |            | R-0h       |            | R/W-0h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-213. PM\_CEFUSE\_PWRSTCTRL Register Field Descriptions

| Bit   | Field               | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                              |
|-------|---------------------|--------|---------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-5  | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 4     | LowPowerStateChange | R/W    | 0h      | Power state change request when domain has already performed a sleep transition. Allows going into deeper low power state without waking up the power domain. 0x0 = DIS : Do not request a low power state change. 0x1 = EN : Request a low power state change. This bit is automatically cleared when the power state is effectively changed or when power state is ON. |
| 3-2   | Reserved            | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                          |
| 1-0   | PowerState          | R/W    | 0h      | Power state control 0x0 = OFF : OFF state 0x1 = Reserved : Reserved 0x2 = INACT : INACTIVE state 0x3 = ON : ON State                                                                                                                                                                                                                                                     |

<!-- image -->

<!-- image -->

www.ti.com

## 8.1.13.8.2 PM\_CEFUSE\_PWRSTST Register (offset = 4h) [reset = 7h]

PM\_CEFUSE\_PWRSTST is shown in Figure 8-196 and described in Table 8-214.

This register provides a status on the current CEFUSE power domain state. [warm reset insensitive]

## Figure 8-196. PM\_CEFUSE\_PWRSTST Register

| 31   | 30       | 29       | 28           | 27       | 26                    | 25                    | 24                    | 24                    | 24                    | 24                    | 24                    | 24                    | 24                    |
|------|----------|----------|--------------|----------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
|      | Reserved | Reserved | Reserved     | Reserved | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered | LastPowerStateEntered |
|      | R-0h     | R-0h     | R-0h         |          |                       |                       |                       |                       |                       |                       |                       |                       |                       |
| 23   | 22       | 21       | 20           | 19       | 18                    | 17                    | 16                    | 16                    | 16                    | 16                    | 16                    | 16                    | 16                    |
|      | Reserved |          | InTransition |          | Reserved              | Reserved              |                       |                       |                       |                       |                       |                       |                       |
|      | R-0h     |          | R-0h         |          | R-0h                  | R-0h                  |                       |                       |                       |                       |                       |                       |                       |
| 15   | 14       | 13       | 12           | 11       | 10                    | 9                     | 8                     | 8                     | 8                     | 8                     | 8                     | 8                     | 8                     |
|      | Reserved | Reserved | Reserved     | Reserved |                       |                       |                       |                       |                       |                       |                       |                       |                       |
| R-0h | R-0h     | R-0h     | R-0h         | R-0h     |                       |                       |                       |                       |                       |                       |                       |                       |                       |
| 7    | 6        | 5        | 4            | 3        | 2                     | 1                     | 0                     | 0                     | 0                     | 0                     | 0                     | 0                     | 0                     |
|      |          | Reserved |              |          | LogicStateSt          | PowerStateSt          | PowerStateSt          | PowerStateSt          | PowerStateSt          | PowerStateSt          | PowerStateSt          | PowerStateSt          | PowerStateSt          |
|      |          | R-0h     |              |          | R-1h                  | R-3h                  | R-3h                  | R-3h                  | R-3h                  | R-3h                  | R-3h                  | R-3h                  | R-3h                  |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 8-214. PM\_CEFUSE\_PWRSTST Register Field Descriptions

| Bit   | Field                 | Type   | Reset   | Description                                                                                                                                                                                                          |
|-------|-----------------------|--------|---------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-26 | Reserved              | R      | 0h      |                                                                                                                                                                                                                      |
| 25-24 | LastPowerStateEntered | R/W    | 0h      | Last low power state entered. Set to 0x3 upon write of the same only. This register is intended for debug purpose only. 0x0 = OFF : Power domain was previously OFF 0x1 = ON : Power domain was previously ON-ACTIVE |
| 23-21 | Reserved              | R      | 0h      |                                                                                                                                                                                                                      |
| 20    | InTransition          | R      | 0h      | Domain transition status 0x0 = No : No on-going transition on power domain 0x1 = Ongoing : Power domain transition is in progress.                                                                                   |
| 19-3  | Reserved              | R      | 0h      |                                                                                                                                                                                                                      |
| 2     | LogicStateSt          | R      | 1h      | Logic state status 0x0 = OFF : Logic in domain is OFF 0x1 = ON : Logic in domain is ON                                                                                                                               |
| 1-0   | PowerStateSt          | R      | 3h      | Current power state status 0x0 = OFF : Power domain is OFF 0x1 = RET : Power domain is in RETENTION 0x2 = INACTIVE : Power domain is ON-INACTIVE 0x3 = ON : Power domain is ON-ACTIVE                                |