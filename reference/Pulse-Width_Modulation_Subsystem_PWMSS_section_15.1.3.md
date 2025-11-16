<!-- image -->

www.ti.com

Table 15-2. PWMSS Connectivity Attributes (continued)

| Attributes       | Type                                                                                                                                                                                                     |
|------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| DMA Requests     | Interrupt requests are redirected as DMA requests: • 1 DMA request from ePWM per instance (ePWMEVTx) • 1 DMA request from eCAP per instance (eCAPEVTx) • 1 DMA request from eQEP per instance (eQEPEVTx) |
| Physical Address | L4 Peripheral slave port                                                                                                                                                                                 |

## 15.1.2.3 PWMSS Clock and Reset Management

The PWMSS controllers have separate bus interface and functional clocks.

## Table 15-3. PWMSS Clock Signals

| Clock Signal                               | Max Freq   | Reference / Source   | Comments                   |
|--------------------------------------------|------------|----------------------|----------------------------|
| PWMSS_ocp_clk Interface / Functional clock | 100 MHz    | CORE_CLKOUTM4 / 2    | pd_per_l4ls_gclk from PRCM |

## 15.1.2.4 PWMSS Pin list

The external signals for the PWMSS module are shown in the following table.

## Table 15-4. PWMSS Pin List

| Pin                | Type   | Description                     |
|--------------------|--------|---------------------------------|
| EPWMxA             | O      | PWM output A                    |
| EPWMxB             | O      | PWM output B                    |
| EPWM_SYNCIN        | I      | PWM Sync input                  |
| EPWM_SYNCOUT       | O      | PWM Sync output                 |
| EPWM_TRIPZONE[5:0] | I      | PWM Tripzone inputs             |
| ECAP_CAPIN_APWMOUT | I/O    | eCAP Capture input / PWM output |
| EQEP_A             | I/O    | eQEP Quadrature input/output    |
| EQEP_B             | I/O    | eQEP Quadrature input/output    |
| EQEP_INDEX         | I/O    | eQEP Index input/output         |
| EQEP_STROBE        | I/O    | eQEP Strobe input/output        |

## 15.1.3 PWMSS Registers

Table 15-5 lists the memory-mapped registers for the PWMSS. All register offset addresses not listed in Table 15-5 should be considered as reserved locations and the register contents should not be modified.

Table 15-5. PWMSS Registers

| Offset   | Acronym   | Register Name                 | Section          |
|----------|-----------|-------------------------------|------------------|
| 0h       | IDVER     | IP Revision Register          | Section 15.1.3.1 |
| 4h       | SYSCONFIG | System Configuration Register | Section 15.1.3.2 |
| 8h       | CLKCONFIG | Clock Configuration Register  | Section 15.1.3.3 |
| Ch       | CLKSTATUS | Clock Status Register         | Section 15.1.3.4 |

## 15.1.3.1 IDVER Register (offset = 0h) [reset = 40000000h]

IDVER is shown in Figure 15-3 and described in Table 15-6.

The IP revision register is used by software to track features, bugs, and compatibility.

## Figure 15-3. IDVER Register

| 31             | 30             | 29             | 28             | 27             | 26             | 25             | 24             |
|----------------|----------------|----------------|----------------|----------------|----------------|----------------|----------------|
| SCHEME         | SCHEME         | RESERVED       | RESERVED       | FUNC           | FUNC           | FUNC           | FUNC           |
| R-1h           | R-1h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 23             | 22             | 21             | 20             | 19             | 18             | 17             | 16             |
| FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           | FUNC           |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 15             | 14             | 13             | 12             | 11             | 10             | 9              | 8              |
| R_RTL          | R_RTL          | R_RTL          | R_RTL          | X_MAJOR        | X_MAJOR        | X_MAJOR        | X_MAJOR        |
| R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           | R-0h           |
| 7              | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
| CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR | CUSTOM Y_MINOR |
| R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      | R-0h R-0h      |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-6. IDVER Register Field Descriptions

| Bit   | Field    | Type   | Reset   | Description                                             |
|-------|----------|--------|---------|---------------------------------------------------------|
| 31-30 | SCHEME   | R      | 1h      | Used to distinguish between the old scheme and current. |
| 29-28 | RESERVED | R      | 0h      |                                                         |
| 27-16 | FUNC     | R      | 0h      | FUNC                                                    |
| 15-11 | R_RTL    | R      | 0h      | RTL version (R), maintained by IP design owner.         |
| 10-8  | X_MAJOR  | R      | 0h      | Major revision (X)                                      |
| 7-6   | CUSTOM   | R      | 0h      | CUSTOM                                                  |
| 5-0   | Y_MINOR  | R      | 0h      | Minor revision (Y)                                      |

<!-- image -->

<!-- image -->

www.ti.com

## 15.1.3.2 SYSCONFIG Register (offset = 4h) [reset = 28h]

SYSCONFIG is shown in Figure 15-4 and described in Table 15-7.

The system configuration register is used for clock management configuration.

## Figure 15-4. SYSCONFIG Register

| 31       | 30       | 29          | 28          | 27       | 26       | 25       | 24        |
|----------|----------|-------------|-------------|----------|----------|----------|-----------|
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h      |
| 23       | 22       | 21          | 20          | 19       | 18       | 17       | 16        |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h      |
| 15       | 14       | 13          | 12          | 11       | 10       | 9        | 8         |
| RESERVED | RESERVED | RESERVED    | RESERVED    | RESERVED | RESERVED | RESERVED | RESERVED  |
| R-0h     | R-0h     | R-0h        | R-0h        | R-0h     | R-0h     | R-0h     | R-0h      |
| 7        | 6        | 5           | 4           | 3        | 2        | 1        | 0         |
| RESERVED | RESERVED | STANDBYMODE | STANDBYMODE | IDLEMODE | IDLEMODE | FREEEMU  | SOFTRESET |
| R-0h     | R-0h     | R/W-2h      | R/W-2h      | R/W-2h   | R/W-2h   | R/W-0h   | R/W-0h    |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-7. SYSCONFIG Register Field Descriptions

| Bit   | Field       | Type   | Reset   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|-------|-------------|--------|---------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 31-6  | RESERVED    | R      | 0h      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 5-4   | STANDBYMODE | R/W    | 2h      | Configuration of the local initiator state management mode. By definition, initiator may generate read/write transaction as long as it is out of STANDBY state. 0h = Force-standby mode: local initiator is unconditionally placed in standby state. Backup mode, for debug only. 1h = No-standby mode: local initiator is unconditionally placed out of standby state. Backup mode, for debug only. 2h = Smart-standby mode: local initiator standby status depends on local conditions, i.e., the module's functional requirement from the initiator. IP module should not generate (initiator-related) wakeup events. 3h = Reserved.                                                                         |
| 3-2   | IDLEMODE    | R/W    | 2h      | Configuration of the local target state management mode. By definition, target can handle read/write transaction as long as it is out of IDLE state. 0h = Force-idle mode: local target's idle state follows (acknowledges) the system's idle requests unconditionally, i.e. regardless of the IP module's internal requirements. Backup mode, for debug only. 1h = No-idle mode: local target never enters idle state. Backup mode, for debug only. 2h = Smart-idle mode: local target's idle state eventually follows (acknowledges) the system's idle requests, depending on the IP module's internal requirements. IP module shall not generate (IRQ- or DMA-request-related) wakeup events. 3h = Reserved. |
| 1     | FREEEMU     | R/W    | 0h      | Sensitivity to emulation (debug) suspend event from Debug Subsystem. 0h = IP module is sensitive to emulation suspend. 1h = IP module is not sensitive to emulation suspend event. Debug suspend event is ignored.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| 0     | SOFTRESET   | R/W    | 0h      | Software reset (optional)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |

## 15.1.3.3 CLKCONFIG Register (offset = 8h) [reset = 111h]

CLKCONFIG is shown in Figure 15-5 and described in Table 15-8.

The clock configuration register is used in the PWMSS submodule for clkstop req and clk\_en control.

## Figure 15-5. CLKCONFIG Register

| 31       | 30       | 29               | 28         | 27       | 26       | 25               | 24         |
|----------|----------|------------------|------------|----------|----------|------------------|------------|
| RESERVED | RESERVED | RESERVED         | RESERVED   | RESERVED | RESERVED | RESERVED         | RESERVED   |
| R-0h     | R-0h     | R-0h             | R-0h       | R-0h     | R-0h     | R-0h             | R-0h       |
| 23       | 22       | 21               | 20         | 19       | 18       | 17               | 16         |
| RESERVED | RESERVED | RESERVED         | RESERVED   | RESERVED | RESERVED | RESERVED         | RESERVED   |
| R-0h     | R-0h     | R-0h             | R-0h       | R-0h     | R-0h     | R-0h             | R-0h       |
| 15       | 14       | 13               | 12         | 11       | 10       | 9                | 8          |
| RESERVED | RESERVED | RESERVED         | RESERVED   | RESERVED | RESERVED | ePWMCLKSTO P_REQ | ePWMCLK_EN |
| R-0h     | R-0h     | R-0h             | R-0h       | R-0h     | R-0h     | R/W-0h           | R/W-1h     |
| 7        | 6        | 5                | 4          | 3        | 2        | 1                | 0          |
| RESERVED | RESERVED | eQEPCLKSTO P_REQ | eQEPCLK_EN | RESERVED | RESERVED | eCAPCLKSTO P_REQ | eCAPCLK_EN |
| R-0h     | R-0h     | R/W-0h           | R/W-1h     | R-0h     | R-0h     | R/W-0h           | R/W-1h     |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-8. CLKCONFIG Register Field Descriptions

| Bit   | Field           | Type   | Reset   | Description                                                 |
|-------|-----------------|--------|---------|-------------------------------------------------------------|
| 31-10 | RESERVED        | R      | 0h      |                                                             |
| 9     | ePWMCLKSTOP_REQ | R/W    | 0h      | This bit controls the clkstop_req input to the ePWM module. |
| 8     | ePWMCLK_EN      | R/W    | 1h      | This bit controls the clk_en input to the ePWM module.      |
| 7-6   | RESERVED        | R      | 0h      |                                                             |
| 5     | eQEPCLKSTOP_REQ | R/W    | 0h      | This bit controls the clkstop_req input to the eQEP module  |
| 4     | eQEPCLK_EN      | R/W    | 1h      | This bit controls the clk_en input to the eQEP module.      |
| 3-2   | RESERVED        | R      | 0h      |                                                             |
| 1     | eCAPCLKSTOP_REQ | R/W    | 0h      | This bit controls the clkstop_req input to the eCAP module. |
| 0     | eCAPCLK_EN      | R/W    | 1h      | This bit controls the clk_en input to the eCAP module.      |

<!-- image -->

<!-- image -->

www.ti.com

## 15.1.3.4 CLKSTATUS Register (offset = Ch) [reset = 0h]

CLKSTATUS is shown in Figure 15-6 and described in Table 15-9.

The clock status register is used in the PWMSS submodule for clkstop ack and clk\_en ack status.

## Figure 15-6. CLKSTATUS Register

| 31       | 30       | 29                | 28               | 27       | 26       | 25                | 24               |
|----------|----------|-------------------|------------------|----------|----------|-------------------|------------------|
| RESERVED | RESERVED | RESERVED          | RESERVED         | RESERVED | RESERVED | RESERVED          | RESERVED         |
| R-0h     | R-0h     | R-0h              | R-0h             | R-0h     | R-0h     | R-0h              | R-0h             |
| 23       | 22       | 21                | 20               | 19       | 18       | 17                | 16               |
| RESERVED | RESERVED | RESERVED          | RESERVED         | RESERVED | RESERVED | RESERVED          | RESERVED         |
| R-0h     | R-0h     | R-0h              | R-0h             | R-0h     | R-0h     | R-0h              | R-0h             |
| 15       | 14       | 13                | 12               | 11       | 10       | 9                 | 8                |
| RESERVED | RESERVED | RESERVED          | RESERVED         | RESERVED | RESERVED | ePWM_CLKST OP_ACK | ePWM_CLK_E N_ACK |
| R-0h     | R-0h     | R-0h              | R-0h             | R-0h     | R-0h     | R-0h              | R-0h             |
| 7        | 6        | 5                 | 4                | 3        | 2        | 1                 | 0                |
| RESERVED | RESERVED | eQEP_CLKST OP_ACK | eQEP_CLK_EN _ACK | RESERVED | RESERVED | eCAP_CLKST OP_ACK | eCAP_CLK_EN _ACK |
| R-0h     | R-0h     | R-0h              | R-0h             | R-0h     | R-0h     | R-0h              | R-0h             |

LEGEND: R/W = Read/Write; R = Read only; W1toCl = Write 1 to clear bit; -n = value after reset

## Table 15-9. CLKSTATUS Register Field Descriptions

| Bit   | Field            | Type   | Reset   | Description                                                       |
|-------|------------------|--------|---------|-------------------------------------------------------------------|
| 31-10 | RESERVED         | R      | 0h      |                                                                   |
| 9     | ePWM_CLKSTOP_ACK | R      | 0h      | This bit is the clkstop_req_ack status output of the ePWM module. |
| 8     | ePWM_CLK_EN_ACK  | R      | 0h      | This bit is the clk_en status output of the ePWM module.          |
| 7-6   | RESERVED         | R      | 0h      |                                                                   |
| 5     | eQEP_CLKSTOP_ACK | R      | 0h      | This bit is the clkstop_req_ack status output of the eQEP module. |
| 4     | eQEP_CLK_EN_ACK  | R      | 0h      | This bit is the clk_en status output of the eQEP module.          |
| 3-2   | RESERVED         | R      | 0h      |                                                                   |
| 1     | eCAP_CLKSTOP_ACK | R      | 0h      | This bit is the clkstop_req_ack status output of the eCAP module. |
| 0     | eCAP_CLK_EN_ACK  | R      | 0h      | This bit is the clk_en status output of the eCAP module.          |